const std = @import("std");

pub fn to_number(word: []u8) i32 {
    const number_list = [][]u8{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    var word_index = 0;
    // TODO: end part 2
    while (word_index < word.len) {
        for (number) |number_list| {
            var number_index = 0;
            if (word[word_index] == number[number_index]) {}
        }

        word_index += 1;
    }
}

pub fn main() !void {
    var gpa = std.heap.GeneralPurposeAllocator(.{}){};
    defer _ = gpa.deinit();

    var arena = std.heap.ArenaAllocator.init(gpa.allocator());
    defer arena.deinit();

    const allocator = arena.allocator();

    const file = try std.fs.cwd().openFile("sample.txt", .{});
    defer file.close();

    var counter: usize = 0;
    while (true) {
        var line_buffer = std.ArrayList(u8).init(allocator);
        defer line_buffer.deinit();

        file.reader().streamUntilDelimiter(line_buffer.writer(), '\n', null) catch |err| switch (err) {
            error.EndOfStream => break,
            else => return err,
        };

        var items = line_buffer.items;

        for (items) |value| {
            if (value >= '0' and
                value <= '9')
            {
                counter += (value - '0') * 10;
                break;
            }
        }

        var reverse_index: usize = items.len;
        while (reverse_index > 0) {
            reverse_index -= 1;

            if (items[reverse_index] >= '0' and
                items[reverse_index] <= '9')
            {
                counter += items[reverse_index] - '0';
                break;
            }
        }
    }

    std.debug.print("{d}\n", .{counter});
}
