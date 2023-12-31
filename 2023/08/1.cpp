#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <numeric>
#include <sstream>
#include <unordered_map>

struct path {
    std::string left, right;
};
int main() {
    std::unordered_map<std::string, path> foo;
    std::string instructions = "LRRRLRRLLRRLRRLRRLRRLRLLRLRLLRRLRLRRRLRRLRRLLRLRLRLRRRLRRRLLRLRRRLLRRRLRLLRRRLLRRLRLRLRRRLLRRLRRRLLRRLRLRRRLLRRRLRRLRLRRRLLRRLRRRLRRLLRRLRRLRRRLRRRLRRRLRRLRRRLLRLRLRLRRRLRRLRRRLRRLRLRRLRLRRRLRRRLRRLRRRLLRRRLLRRLRLRRRLRLRLRRRLRLRLRLRRLRLRRLRRLLRRRLRLLRRLRRRLRRRLLRRLRLLLLRRLRRRR";
    int64_t steps = 0;

foo["PGQ"] = {"QRB", "MJB"};
foo["JQC"] = {"MNM", "TLQ"};
foo["HNP"] = {"NKD", "PJT"};
foo["MDM"] = {"SPC", "RJP"};
foo["QMZ"] = {"BFS", "TVG"};
foo["FHJ"] = {"MRQ", "BRJ"};
foo["QBT"] = {"HTH", "JXN"};
foo["MQN"] = {"NLQ", "JQN"};
foo["JTR"] = {"TRS", "TTN"};
foo["BXC"] = {"JMQ", "BMN"};
foo["JGD"] = {"NBS", "MDV"};
foo["SML"] = {"NCX", "TRX"};
foo["BDB"] = {"SVH", "RSP"};
foo["RLQ"] = {"PML", "GKR"};
foo["LKS"] = {"NDR", "CGG"};
foo["SQB"] = {"KPB", "TQR"};
foo["JFS"] = {"BTX", "LSK"};
foo["BMJ"] = {"BXC", "SBP"};
foo["KDX"] = {"MCQ", "GQP"};
foo["XKR"] = {"FKN", "VBR"};
foo["BPX"] = {"XTV", "GQH"};
foo["SQH"] = {"JGK", "CGK"};
foo["XRJ"] = {"PQD", "SBL"};
foo["QXF"] = {"TDH", "XXN"};
foo["BJS"] = {"SCQ", "LPD"};
foo["NMV"] = {"STS", "PSG"};
foo["GXB"] = {"MSV", "LNQ"};
foo["FQX"] = {"LKV", "CTL"};
foo["TJQ"] = {"FHS", "CXJ"};
foo["PLP"] = {"HKG", "JKB"};
foo["MFL"] = {"RRP", "CMB"};
foo["NLF"] = {"CCF", "FST"};
foo["MXA"] = {"GKS", "LTM"};
foo["KJG"] = {"GFJ", "GFJ"};
foo["VXC"] = {"QCQ", "JTH"};
foo["QCD"] = {"CVB", "CHH"};
foo["RFR"] = {"KGH", "VBF"};
foo["JMC"] = {"XTF", "SQH"};
foo["RPQ"] = {"CSH", "MFJ"};
foo["TNK"] = {"GSD", "KFZ"};
foo["HXM"] = {"JXP", "JLD"};
foo["TGJ"] = {"SML", "KDL"};
foo["XDS"] = {"MFJ", "CSH"};
foo["PQX"] = {"NNL", "MXR"};
foo["KFD"] = {"LPN", "PXQ"};
foo["SJX"] = {"GCP", "BJS"};
foo["BHH"] = {"XMV", "MFP"};
foo["GPV"] = {"VGQ", "HDV"};
foo["VJS"] = {"JPS", "QRL"};
foo["MGH"] = {"HSH", "BGV"};
foo["CNN"] = {"XQB", "RLQ"};
foo["FKN"] = {"JHR", "VMV"};
foo["HFR"] = {"BJV", "BQT"};
foo["HHB"] = {"JSH", "XKS"};
foo["GHL"] = {"NJJ", "HXB"};
foo["MXN"] = {"PQD", "SBL"};
foo["DLM"] = {"TMG", "TNK"};
foo["RJS"] = {"MCC", "NHS"};
foo["JHP"] = {"RXT", "RDD"};
foo["RHQ"] = {"DKG", "VHJ"};
foo["HRN"] = {"QXF", "JBH"};
foo["GPD"] = {"LTL", "JSV"};
foo["QFP"] = {"DDQ", "MFL"};
foo["TSD"] = {"TGD", "LCS"};
foo["KKS"] = {"TVG", "BFS"};
foo["BLG"] = {"TCN", "DXP"};
foo["HFS"] = {"XFH", "SKH"};
foo["PPP"] = {"QCD", "QDV"};
foo["TQM"] = {"QCQ", "JTH"};
foo["BTX"] = {"QGG", "GLJ"};
foo["HXG"] = {"BPT", "JBJ"};
foo["FSC"] = {"QKJ", "JFB"};
foo["MLB"] = {"LVH", "DSF"};
foo["HHK"] = {"VCT", "GHL"};
foo["QGF"] = {"BPX", "SVF"};
foo["QVP"] = {"GJP", "BHB"};
foo["PHC"] = {"FQV", "RNQ"};
foo["XFS"] = {"MDV", "NBS"};
foo["MVN"] = {"VTR", "FQX"};
foo["XVT"] = {"LHF", "RTX"};
foo["FQT"] = {"VDV", "HNV"};
foo["JJX"] = {"KDP", "KHD"};
foo["LTD"] = {"FTJ", "FTJ"};
foo["PXL"] = {"NBL", "LGC"};
foo["GKS"] = {"XGX", "HTQ"};
foo["CDQ"] = {"XGL", "GFN"};
foo["MBP"] = {"KCR", "VGV"};
foo["HKT"] = {"JLD", "JXP"};
foo["VJT"] = {"DVX", "KVF"};
foo["BFR"] = {"RGC", "DDG"};
foo["VVJ"] = {"XGL", "GFN"};
foo["CJQ"] = {"RXT", "RDD"};
foo["SHZ"] = {"HLF", "HHX"};
foo["VQA"] = {"TVG", "BFS"};
foo["NFJ"] = {"DCQ", "FSC"};
foo["KHP"] = {"KHB", "LFG"};
foo["BMN"] = {"PKB", "XHH"};
foo["SVF"] = {"GQH", "XTV"};
foo["NQN"] = {"XBB", "DSP"};
foo["NBS"] = {"XXD", "GPD"};
foo["BJD"] = {"SVF", "BPX"};
foo["XGH"] = {"MLR", "HFS"};
foo["VQT"] = {"HKK", "BMJ"};
foo["JSM"] = {"SKX", "FHJ"};
foo["SBP"] = {"JMQ", "BMN"};
foo["SCQ"] = {"FMP", "SPS"};
foo["XMS"] = {"DKC", "HQS"};
foo["CCC"] = {"MPP", "GPV"};
foo["VBJ"] = {"KHB", "LFG"};
foo["CVB"] = {"LTN", "JGJ"};
foo["NHV"] = {"FVX", "PMR"};
foo["NFX"] = {"LLB", "DXD"};
foo["PTN"] = {"HHT", "GCF"};
foo["XCV"] = {"VBR", "FKN"};
foo["PJT"] = {"DBB", "VRJ"};
foo["VHJ"] = {"JNT", "QJT"};
foo["CSH"] = {"QHM", "KTK"};
foo["NQL"] = {"XVQ", "QVP"};
foo["DNV"] = {"TSD", "SLF"};
foo["NFT"] = {"QDB", "GPH"};
foo["MPQ"] = {"TNB", "PTN"};
foo["TQR"] = {"VJH", "NRX"};
foo["QCS"] = {"CLJ", "VGS"};
foo["RGK"] = {"PGQ", "ZZZ"};
foo["SKX"] = {"MRQ", "BRJ"};
foo["MKG"] = {"TSR", "HTF"};
foo["JMQ"] = {"PKB", "XHH"};
foo["RNK"] = {"JBP", "QQN"};
foo["RNH"] = {"JKQ", "VBP"};
foo["TJN"] = {"FRQ", "MVN"};
foo["JFB"] = {"XQF", "FLF"};
foo["BRJ"] = {"NBR", "RSD"};
foo["KVH"] = {"DMX", "JDC"};
foo["DXP"] = {"CXN", "BCH"};
foo["KVF"] = {"JGQ", "KJK"};
foo["JKB"] = {"XHL", "DBM"};
foo["GRF"] = {"TGJ", "GFF"};
foo["DPR"] = {"TBV", "GJV"};
foo["CRF"] = {"RJJ", "VDG"};
foo["FQG"] = {"HRJ", "NQF"};
foo["HDV"] = {"SJX", "MMF"};
foo["SLF"] = {"LCS", "TGD"};
foo["CGL"] = {"NDF", "VPV"};
foo["GQK"] = {"JTQ", "PSM"};
foo["PKB"] = {"LSP", "VMB"};
foo["HCK"] = {"TSD", "SLF"};
foo["MPG"] = {"CQN", "DTK"};
foo["HLF"] = {"KFK", "NNK"};
foo["XXN"] = {"RHQ", "SSC"};
foo["NKD"] = {"VRJ", "DBB"};
foo["NVQ"] = {"NDF", "VPV"};
foo["ZZZ"] = {"MJB", "QRB"};
foo["FQV"] = {"STP", "LMG"};
foo["KQC"] = {"RGC", "DDG"};
foo["LNJ"] = {"XCV", "XKR"};
foo["JSV"] = {"VNM", "CVM"};
foo["XLQ"] = {"XGP", "LFQ"};
foo["DLC"] = {"RBB", "GVS"};
foo["SCS"] = {"BJP", "CJR"};
foo["RRP"] = {"KJG", "KJG"};
foo["KRX"] = {"FCB", "CXP"};
foo["BQT"] = {"QPJ", "DCP"};
foo["MGF"] = {"LNJ", "JRK"};
foo["CCM"] = {"VJN", "JMD"};
foo["XQF"] = {"KCH", "HXH"};
foo["RGC"] = {"SRS", "QVB"};
foo["JTH"] = {"KJH", "MKG"};
foo["MQS"] = {"RSV", "VQQ"};
foo["DFN"] = {"CGL", "NVQ"};
foo["DXD"] = {"XMS", "BQP"};
foo["NRX"] = {"RNV", "SFC"};
foo["GDP"] = {"BJJ", "MBP"};
foo["FQF"] = {"NRV", "FHT"};
foo["SGK"] = {"CLJ", "VGS"};
foo["SGR"] = {"PJT", "NKD"};
foo["TTN"] = {"XLP", "HFM"};
foo["LHP"] = {"GPP", "BHH"};
foo["NNK"] = {"JQT", "PLP"};
foo["DKM"] = {"NDC", "BDM"};
foo["VNM"] = {"JJV", "GVP"};
foo["FCB"] = {"HRN", "TJP"};
foo["LJQ"] = {"QGF", "BJD"};
foo["MCC"] = {"HJN", "KLK"};
foo["KXP"] = {"HJC", "VSC"};
foo["VDX"] = {"DMS", "VVM"};
foo["QDB"] = {"SPT", "JRP"};
foo["CBA"] = {"PQX", "PMM"};
foo["GKR"] = {"LTD", "GBP"};
foo["KHV"] = {"QCP", "VQT"};
foo["LMM"] = {"GDP", "TFD"};
foo["VXK"] = {"PXV", "QDC"};
foo["QMH"] = {"HCK", "DNV"};
foo["GPC"] = {"BGV", "HSH"};
foo["HXH"] = {"HRP", "FXD"};
foo["TFR"] = {"QDV", "QCD"};
foo["RJJ"] = {"RTP", "XFK"};
foo["TCB"] = {"DMS", "VVM"};
foo["HRP"] = {"KXP", "HCG"};
foo["DDQ"] = {"RRP", "RRP"};
foo["XXD"] = {"LTL", "JSV"};
foo["CTL"] = {"TXP", "MLB"};
foo["SFH"] = {"HDP", "HHK"};
foo["QCF"] = {"TTN", "TRS"};
foo["SNJ"] = {"TVF", "CNN"};
foo["DRM"] = {"DCL", "DSM"};
foo["VVN"] = {"TFR", "PPP"};
foo["KDB"] = {"BJP", "CJR"};
foo["VJN"] = {"TCG", "NMV"};
foo["VQH"] = {"PDF", "NVG"};
foo["XTS"] = {"TQM", "VXC"};
foo["TLM"] = {"JQN", "NLQ"};
foo["NVP"] = {"FRQ", "MVN"};
foo["MNK"] = {"CXP", "FCB"};
foo["DCQ"] = {"JFB", "QKJ"};
foo["HXB"] = {"RJS", "SPD"};
foo["NJT"] = {"SRL", "HCD"};
foo["LPT"] = {"TFD", "GDP"};
foo["LCT"] = {"RFK", "FNR"};
foo["NXD"] = {"KKS", "KKS"};
foo["VGS"] = {"KGX", "XLQ"};
foo["FHT"] = {"SVP", "XVF"};
foo["QND"] = {"HHK", "HDP"};
foo["BJP"] = {"TJN", "NVP"};
foo["RVK"] = {"DFK", "QGP"};
foo["RQN"] = {"BHM", "CKP"};
foo["GJP"] = {"VQS", "RFR"};
foo["RBT"] = {"JBP", "JBP"};
foo["DMP"] = {"DSP", "XBB"};
foo["GPP"] = {"MFP", "XMV"};
foo["JTQ"] = {"XGH", "SNR"};
foo["FTJ"] = {"TDB", "TDB"};
foo["XHL"] = {"QMC", "HGT"};
foo["GMC"] = {"LKN", "GHN"};
foo["RBB"] = {"JDJ", "BTB"};
foo["HFM"] = {"KMG", "QBP"};
foo["CPQ"] = {"BLH", "DPR"};
foo["CXD"] = {"SMQ", "GSP"};
foo["FSM"] = {"BLK", "LQH"};
foo["BPT"] = {"DLL", "QBT"};
foo["CKP"] = {"XJX", "SDJ"};
foo["FTK"] = {"QMH", "FSG"};
foo["TLQ"] = {"DFP", "QDQ"};
foo["MFJ"] = {"QHM", "KTK"};
foo["JGK"] = {"GDN", "HBF"};
foo["GNK"] = {"VFB", "GRF"};
foo["TCN"] = {"CXN", "BCH"};
foo["QPB"] = {"FMF", "CCM"};
foo["CHM"] = {"PXV", "QDC"};
foo["KCV"] = {"XXR", "XXR"};
foo["HQS"] = {"MGH", "GPC"};
foo["RDK"] = {"MFF", "DFN"};
foo["SPT"] = {"LKS", "KCJ"};
foo["NMS"] = {"LQH", "BLK"};
foo["KGN"] = {"VQT", "QCP"};
foo["VBC"] = {"RBT", "RNK"};
foo["SBL"] = {"FDH", "VVN"};
foo["CJR"] = {"NVP", "TJN"};
foo["DBD"] = {"SHB", "FFS"};
foo["SRS"] = {"NQN", "DMP"};
foo["DSS"] = {"QJD", "PHC"};
foo["QQN"] = {"NXD", "DVJ"};
foo["RNQ"] = {"STP", "LMG"};
foo["LMJ"] = {"RTX", "LHF"};
foo["MQG"] = {"GTV", "XPP"};
foo["JBP"] = {"NXD", "NXD"};
foo["TCT"] = {"MGR", "MPG"};
foo["KCH"] = {"FXD", "HRP"};
foo["XHZ"] = {"LTM", "GKS"};
foo["JTK"] = {"NFX", "FGB"};
foo["PSG"] = {"NHK", "VBC"};
foo["LCM"] = {"GFJ", "FXZ"};
foo["GVS"] = {"BTB", "JDJ"};
foo["CCF"] = {"LPV", "JVD"};
foo["JLD"] = {"HGH", "VJT"};
foo["DKC"] = {"MGH", "GPC"};
foo["DBM"] = {"HGT", "QMC"};
foo["GKJ"] = {"HKT", "HXM"};
foo["KTK"] = {"LJQ", "RHK"};
foo["CFT"] = {"VXK", "CHM"};
foo["PVP"] = {"MQN", "TLM"};
foo["SLT"] = {"NBL", "LGC"};
foo["LGX"] = {"LNQ", "MSV"};
foo["DKG"] = {"JNT", "QJT"};
foo["QHM"] = {"LJQ", "RHK"};
foo["DFP"] = {"KMF", "BCF"};
foo["MFF"] = {"NVQ", "CGL"};
foo["TGD"] = {"JQC", "LCJ"};
foo["KXK"] = {"CQD", "BRB"};
foo["KCJ"] = {"CGG", "NDR"};
foo["RHK"] = {"BJD", "QGF"};
foo["MXR"] = {"DKP", "HCP"};
foo["XPP"] = {"PVB", "NHV"};
foo["TMG"] = {"GSD", "GSD"};
foo["MDV"] = {"XXD", "GPD"};
foo["RSV"] = {"VDX", "TCB"};
foo["HCG"] = {"VSC", "HJC"};
foo["NBJ"] = {"SLH", "TCT"};
foo["NBL"] = {"CXV", "HHN"};
foo["KTF"] = {"GBR", "MLN"};
foo["LMT"] = {"HQJ", "NFT"};
foo["SGS"] = {"FSG", "QMH"};
foo["NTN"] = {"NFJ", "XBH"};
foo["NXR"] = {"XXR", "XHZ"};
foo["PXV"] = {"SGK", "QCS"};
foo["LMG"] = {"XHG", "PVP"};
foo["HTH"] = {"MDM", "DNL"};
foo["KNF"] = {"XRJ", "MXN"};
foo["TNB"] = {"GCF", "HHT"};
foo["NDR"] = {"PXL", "SLT"};
foo["NRV"] = {"XVF", "SVP"};
foo["PVF"] = {"PSM", "JTQ"};
foo["MGV"] = {"VXC", "TQM"};
foo["QFD"] = {"BHH", "GPP"};
foo["DKP"] = {"NQR", "HQL"};
foo["MSV"] = {"SQB", "JJD"};
foo["VSC"] = {"MPV", "NJT"};
foo["BHV"] = {"VRQ", "HFR"};
foo["PGB"] = {"DDQ", "MFL"};
foo["VCT"] = {"NJJ", "HXB"};
foo["HNV"] = {"QMG", "PDJ"};
foo["SKH"] = {"TDP", "HPM"};
foo["HSH"] = {"SRN", "RQL"};
foo["PML"] = {"LTD", "GBP"};
foo["CJP"] = {"SDT", "SSQ"};
foo["SDJ"] = {"NLF", "HRD"};
foo["BCK"] = {"CQV", "MBS"};
foo["NLQ"] = {"DFX", "RKQ"};
foo["JQT"] = {"HKG", "JKB"};
foo["JDJ"] = {"SBK", "XLL"};
foo["VQS"] = {"KGH", "VBF"};
foo["DCP"] = {"PPR", "MBV"};
foo["JGQ"] = {"QBH", "GSK"};
foo["FFS"] = {"HHB", "PFH"};
foo["QVB"] = {"DMP", "NQN"};
foo["QCP"] = {"BMJ", "HKK"};
foo["MPV"] = {"SRL", "HCD"};
foo["NCX"] = {"MGF", "VFL"};
foo["JJV"] = {"FNH", "KFF"};
foo["SSC"] = {"DKG", "VHJ"};
foo["XNN"] = {"MBS", "CQV"};
foo["PSM"] = {"XGH", "SNR"};
foo["XLP"] = {"KMG", "QBP"};
foo["LCJ"] = {"TLQ", "MNM"};
foo["BNP"] = {"CHM", "VXK"};
foo["GXF"] = {"XVQ", "QVP"};
foo["RSD"] = {"MTN", "TMQ"};
foo["CCR"] = {"KRX", "MNK"};
foo["BGV"] = {"RQL", "SRN"};
foo["HJC"] = {"NJT", "MPV"};
foo["SXR"] = {"HPK", "TMF"};
foo["DTK"] = {"JGL", "MLX"};
foo["SDG"] = {"QCH", "TLP"};
foo["MSK"] = {"PNN", "TTS"};
foo["SPC"] = {"FQG", "MJN"};
foo["VPV"] = {"CGR", "TTF"};
foo["XJG"] = {"QFX", "BLG"};
foo["TSX"] = {"TXB", "DFS"};
foo["QMG"] = {"KFD", "VJJ"};
foo["NDF"] = {"CGR", "TTF"};
foo["LVH"] = {"FJX", "FNX"};
foo["MLS"] = {"VJS", "BSJ"};
foo["VSG"] = {"DFS", "TXB"};
foo["RFK"] = {"CNB", "CNB"};
foo["XVQ"] = {"BHB", "GJP"};
foo["CJG"] = {"SXR", "CDV"};
foo["SHL"] = {"LRH", "GKJ"};
foo["QJT"] = {"NVF", "PVG"};
foo["NHS"] = {"KLK", "HJN"};
foo["JXN"] = {"DNL", "MDM"};
foo["BLK"] = {"CRF", "DKS"};
foo["DFS"] = {"TPX", "MQS"};
foo["LPN"] = {"RGB", "NBJ"};
foo["DSP"] = {"TPF", "JMC"};
foo["LRR"] = {"NDC", "BDM"};
foo["GSP"] = {"GVJ", "LMT"};
foo["BNK"] = {"MPP", "GPV"};
foo["LTN"] = {"LRR", "DKM"};
foo["PPR"] = {"JHV", "MLS"};
foo["CGR"] = {"MMQ", "TQQ"};
foo["JFK"] = {"KRX", "MNK"};
foo["MMF"] = {"GCP", "BJS"};
foo["PDJ"] = {"VJJ", "KFD"};
foo["JBH"] = {"TDH", "XXN"};
foo["SSR"] = {"KDX", "TDV"};
foo["TFD"] = {"BJJ", "MBP"};
foo["SHB"] = {"PFH", "HHB"};
foo["GCF"] = {"XVP", "CJP"};
foo["QPJ"] = {"MBV", "PPR"};
foo["DFX"] = {"KGN", "KHV"};
foo["XTF"] = {"CGK", "JGK"};
foo["XLL"] = {"CJG", "VHH"};
foo["LKT"] = {"NVG", "PDF"};
foo["VGQ"] = {"MMF", "SJX"};
foo["TLP"] = {"JTK", "SCT"};
foo["QDQ"] = {"KMF", "BCF"};
foo["RNV"] = {"XLM", "MQG"};
foo["SDT"] = {"KJT", "LFX"};
foo["XQB"] = {"PML", "GKR"};
foo["FHS"] = {"TPP", "KNF"};
foo["QJD"] = {"FQV", "RNQ"};
foo["SBK"] = {"CJG", "VHH"};
foo["MMQ"] = {"XDS", "RPQ"};
foo["GCQ"] = {"VDV", "HNV"};
foo["BKQ"] = {"KDP", "KHD"};
foo["JHV"] = {"BSJ", "VJS"};
foo["GFF"] = {"KDL", "SML"};
foo["JDC"] = {"PMH", "SBR"};
foo["FMF"] = {"JMD", "VJN"};
foo["JQN"] = {"RKQ", "DFX"};
foo["PVB"] = {"PMR", "FVX"};
foo["HGH"] = {"KVF", "DVX"};
foo["BHB"] = {"RFR", "VQS"};
foo["SPD"] = {"MCC", "NHS"};
foo["JXP"] = {"HGH", "VJT"};
foo["GVP"] = {"FNH", "KFF"};
foo["VJH"] = {"RNV", "SFC"};
foo["GHN"] = {"VQH", "LKT"};
foo["HHT"] = {"XVP", "CJP"};
foo["FGB"] = {"DXD", "LLB"};
foo["HVL"] = {"BDB", "VJQ"};
foo["DMX"] = {"PMH", "SBR"};
foo["NVG"] = {"JGD", "XFS"};
foo["VDG"] = {"RTP", "XFK"};
foo["CXV"] = {"TBC", "HVL"};
foo["RDD"] = {"GXF", "NQL"};
foo["CDV"] = {"TMF", "HPK"};
foo["RSP"] = {"KVH", "XVV"};
foo["FNH"] = {"LKH", "JLL"};
foo["MTN"] = {"LFD", "MSK"};
foo["TPX"] = {"RSV", "VQQ"};
foo["DSM"] = {"RXB", "SHZ"};
foo["MGC"] = {"SKX", "FHJ"};
foo["PQD"] = {"FDH", "VVN"};
foo["XJX"] = {"NLF", "HRD"};
foo["FVX"] = {"XJG", "LHJ"};
foo["XXR"] = {"GKS", "LTM"};
foo["HHN"] = {"TBC", "HVL"};
foo["XTV"] = {"FTK", "SGS"};
foo["TPP"] = {"MXN", "XRJ"};
foo["JKQ"] = {"SXP", "KTF"};
foo["LFX"] = {"MGV", "XTS"};
foo["LFD"] = {"PNN", "TTS"};
foo["XLM"] = {"XPP", "GTV"};
foo["JRP"] = {"LKS", "KCJ"};
foo["SCT"] = {"FGB", "NFX"};
foo["BRB"] = {"RDX", "SSR"};
foo["BPQ"] = {"QND", "SFH"};
foo["GJV"] = {"NMS", "FSM"};
foo["MRQ"] = {"NBR", "RSD"};
foo["BQP"] = {"HQS", "DKC"};
foo["VFB"] = {"TGJ", "GFF"};
foo["KFZ"] = {"PMM", "PQX"};
foo["NNL"] = {"DKP", "HCP"};
foo["RSK"] = {"CFQ", "QSN"};
foo["CVM"] = {"GVP", "JJV"};
foo["TBV"] = {"NMS", "FSM"};
foo["FCG"] = {"MXX", "LCT"};
foo["LSP"] = {"DBD", "FTS"};
foo["DVX"] = {"JGQ", "KJK"};
foo["JHR"] = {"RMJ", "HQV"};
foo["TQQ"] = {"RPQ", "XDS"};
foo["CXN"] = {"PSB", "PSB"};
foo["JRK"] = {"XCV", "XKR"};
foo["LLB"] = {"BQP", "XMS"};
foo["KJK"] = {"QBH", "GSK"};
foo["KFK"] = {"JQT", "PLP"};
foo["GDN"] = {"JFS", "TXD"};
foo["TXB"] = {"TPX", "MQS"};
foo["BJV"] = {"DCP", "QPJ"};
foo["HKK"] = {"BXC", "SBP"};
foo["FST"] = {"JVD", "LPV"};
foo["PSP"] = {"TNP", "FQF"};
foo["QCQ"] = {"KJH", "MKG"};
foo["TDB"] = {"PGQ", "PGQ"};
foo["HCP"] = {"NQR", "HQL"};
foo["XBH"] = {"DCQ", "FSC"};
foo["SNR"] = {"MLR", "HFS"};
foo["JSL"] = {"DFK", "QGP"};
foo["PFH"] = {"XKS", "JSH"};
foo["XFH"] = {"TDP", "HPM"};
foo["DSF"] = {"FNX", "FJX"};
foo["HPK"] = {"SNJ", "KXT"};
foo["SPS"] = {"JJX", "BKQ"};
foo["KXT"] = {"TVF", "CNN"};
foo["HDP"] = {"VCT", "GHL"};
foo["VGV"] = {"THX", "VBG"};
foo["KHB"] = {"DSS", "QFF"};
foo["JNT"] = {"PVG", "NVF"};
foo["QBH"] = {"BVN", "BVN"};
foo["LNQ"] = {"SQB", "JJD"};
foo["LQH"] = {"CRF", "DKS"};
foo["FMP"] = {"BKQ", "JJX"};
foo["HQJ"] = {"QDB", "GPH"};
foo["JJD"] = {"KPB", "TQR"};
foo["MFP"] = {"BNK", "CCC"};
foo["LSK"] = {"GLJ", "QGG"};
foo["GSK"] = {"BVN", "BCX"};
foo["MPP"] = {"HDV", "VGQ"};
foo["CMB"] = {"KJG", "LCM"};
foo["JGJ"] = {"DKM", "LRR"};
foo["VFK"] = {"GQK", "PVF"};
foo["GVJ"] = {"NFT", "HQJ"};
foo["RXB"] = {"HHX", "HLF"};
foo["PDF"] = {"JGD", "XFS"};
foo["RCD"] = {"VVR", "QVG"};
foo["VRQ"] = {"BJV", "BQT"};
foo["CLJ"] = {"XLQ", "KGX"};
foo["PPK"] = {"XBH", "NFJ"};
foo["HRJ"] = {"QVV", "GNK"};
foo["NDC"] = {"TCF", "DXQ"};
foo["DMC"] = {"VBP", "JKQ"};
foo["NJJ"] = {"RJS", "SPD"};
foo["JBB"] = {"RDK", "FNL"};
foo["QMC"] = {"PSP", "BKN"};
foo["GBR"] = {"GXS", "HXG"};
foo["HGT"] = {"PSP", "BKN"};
foo["LPD"] = {"FMP", "SPS"};
foo["NHK"] = {"RBT", "RNK"};
foo["NVF"] = {"LMM", "LPT"};
foo["HRD"] = {"CCF", "FST"};
foo["MNM"] = {"QDQ", "DFP"};
foo["HQV"] = {"NML", "RSN"};
foo["MLX"] = {"LMJ", "XVT"};
foo["KGH"] = {"FCG", "SCK"};
foo["LHJ"] = {"BLG", "QFX"};
foo["HQL"] = {"DMC", "RNH"};
foo["LGC"] = {"HHN", "CXV"};
foo["MBS"] = {"TJQ", "LVN"};
foo["LRJ"] = {"PVF", "GQK"};
foo["PXQ"] = {"RGB", "NBJ"};
foo["TSR"] = {"NTN", "PPK"};
foo["VMV"] = {"RMJ", "HQV"};
foo["DCL"] = {"RXB", "RXB"};
foo["HHX"] = {"NNK", "KFK"};
foo["XPV"] = {"SFH", "QND"};
foo["XGL"] = {"SXG", "DLC"};
foo["LRH"] = {"HKT", "HXM"};
foo["JBA"] = {"HPC", "JBB"};
foo["KHD"] = {"CJQ", "JHP"};
foo["LVN"] = {"FHS", "CXJ"};
foo["GLJ"] = {"LHP", "QFD"};
foo["KLK"] = {"VVJ", "CDQ"};
foo["SRN"] = {"KHQ", "MPQ"};
foo["TTS"] = {"GMC", "PKT"};
foo["VJJ"] = {"LPN", "PXQ"};
foo["JCG"] = {"VVR", "QVG"};
foo["JLL"] = {"RCD", "JCG"};
foo["BLH"] = {"GJV", "TBV"};
foo["GQP"] = {"FQT", "GCQ"};
foo["FDH"] = {"PPP", "TFR"};
foo["HJN"] = {"CDQ", "VVJ"};
foo["FLF"] = {"HXH", "KCH"};
foo["SBR"] = {"KDB", "SCS"};
foo["RSN"] = {"FKX", "BHV"};
foo["SVP"] = {"CXD", "NCP"};
foo["TJP"] = {"QXF", "JBH"};
foo["JGL"] = {"XVT", "LMJ"};
foo["PMR"] = {"XJG", "LHJ"};
foo["PNN"] = {"PKT", "GMC"};
foo["KJT"] = {"MGV", "XTS"};
foo["MJN"] = {"HRJ", "NQF"};
foo["TNP"] = {"FHT", "NRV"};
foo["LFQ"] = {"BCK", "XNN"};
foo["FXD"] = {"KXP", "HCG"};
foo["JRL"] = {"BNP", "CFT"};
foo["VMB"] = {"FTS", "DBD"};
foo["QCH"] = {"JTK", "SCT"};
foo["BJJ"] = {"KCR", "VGV"};
foo["AAA"] = {"QRB", "MJB"};
foo["JPS"] = {"KQC", "BFR"};
foo["VHH"] = {"SXR", "CDV"};
foo["TXD"] = {"LSK", "BTX"};
foo["XGX"] = {"TNT", "JRL"};
foo["VBP"] = {"SXP", "KTF"};
foo["MJB"] = {"VBJ", "KHP"};
foo["DVJ"] = {"KKS", "QMZ"};
foo["CQV"] = {"LVN", "TJQ"};
foo["GSD"] = {"PQX", "PMM"};
foo["PKT"] = {"GHN", "LKN"};
foo["FNR"] = {"CNB", "DLM"};
foo["GQH"] = {"SGS", "FTK"};
foo["XGP"] = {"XNN", "BCK"};
foo["TTF"] = {"TQQ", "MMQ"};
foo["TXP"] = {"DSF", "LVH"};
foo["JVD"] = {"PGB", "QFP"};
foo["GCP"] = {"LPD", "SCQ"};
foo["FNL"] = {"DFN", "MFF"};
foo["PTC"] = {"LRH", "GKJ"};
foo["PSB"] = {"DCL", "DCL"};
foo["KMF"] = {"VFK", "LRJ"};
foo["VNN"] = {"TDB", "RGK"};
foo["DMS"] = {"CSR", "RQN"};
foo["CNB"] = {"TMG", "TMG"};
foo["SMQ"] = {"LMT", "GVJ"};
foo["VBG"] = {"PTC", "SHL"};
foo["VMQ"] = {"QCH", "TLP"};
foo["FTS"] = {"SHB", "FFS"};
foo["BCX"] = {"KCV", "NXR"};
foo["CSR"] = {"BHM", "CKP"};
foo["TCF"] = {"CPQ", "QVH"};
foo["PHN"] = {"KXK", "MPL"};
foo["MXX"] = {"RFK", "FNR"};
foo["MQH"] = {"FMF", "CCM"};
foo["SSQ"] = {"KJT", "LFX"};
foo["BVN"] = {"KCV", "KCV"};
foo["LFG"] = {"DSS", "QFF"};
foo["QFX"] = {"TCN", "DXP"};
foo["XFK"] = {"CCR", "JFK"};
foo["DDG"] = {"SRS", "QVB"};
foo["TVF"] = {"RLQ", "XQB"};
foo["TNT"] = {"CFT", "BNP"};
foo["GFN"] = {"DLC", "SXG"};
foo["BCH"] = {"PSB", "DRM"};
foo["XKS"] = {"BPQ", "XPV"};
foo["SFC"] = {"XLM", "MQG"};
foo["LHV"] = {"KXK", "MPL"};
foo["NQR"] = {"DMC", "RNH"};
foo["RTP"] = {"CCR", "JFK"};
foo["VFL"] = {"LNJ", "JRK"};
foo["DKS"] = {"VDG", "RJJ"};
foo["VVM"] = {"CSR", "RQN"};
foo["MCQ"] = {"GCQ", "FQT"};
foo["CXJ"] = {"KNF", "TPP"};
foo["DFK"] = {"HML", "RSK"};
foo["QDV"] = {"CHH", "CVB"};
foo["TVG"] = {"JSM", "MGC"};
foo["XBB"] = {"TPF", "JMC"};
foo["PMM"] = {"MXR", "NNL"};
foo["CGK"] = {"HBF", "GDN"};
foo["LKV"] = {"MLB", "TXP"};
foo["HCD"] = {"VSG", "TSX"};
foo["XMV"] = {"BNK", "CCC"};
foo["TMQ"] = {"MSK", "LFD"};
foo["JMD"] = {"TCG", "NMV"};
foo["HPM"] = {"VMQ", "SDG"};
foo["LKN"] = {"LKT", "VQH"};
foo["TMF"] = {"KXT", "SNJ"};
foo["BKN"] = {"TNP", "FQF"};
foo["LCS"] = {"LCJ", "JQC"};
foo["QRB"] = {"VBJ", "KHP"};
foo["QSN"] = {"MQH", "QPB"};
foo["XHG"] = {"MQN", "TLM"};
foo["JBJ"] = {"DLL", "QBT"};
foo["SLH"] = {"MPG", "MGR"};
foo["QVG"] = {"QCF", "JTR"};
foo["JSH"] = {"BPQ", "XPV"};
foo["TDV"] = {"MCQ", "GQP"};
foo["VVR"] = {"JTR", "QCF"};
foo["NBR"] = {"MTN", "TMQ"};
foo["QGP"] = {"RSK", "HML"};
foo["GXS"] = {"BPT", "JBJ"};
foo["PMH"] = {"SCS", "KDB"};
foo["GBP"] = {"FTJ", "VNN"};
foo["BHM"] = {"SDJ", "XJX"};
foo["RTX"] = {"GXB", "LGX"};
foo["MLR"] = {"XFH", "SKH"};
foo["GFJ"] = {"HPC", "JBB"};
foo["DBB"] = {"JSL", "RVK"};
foo["CXP"] = {"TJP", "HRN"};
foo["SCK"] = {"MXX", "LCT"};
foo["VBF"] = {"FCG", "SCK"};
foo["TDP"] = {"VMQ", "SDG"};
foo["GTV"] = {"NHV", "PVB"};
foo["RXT"] = {"NQL", "GXF"};
foo["LPV"] = {"PGB", "QFP"};
foo["RMJ"] = {"RSN", "NML"};
foo["MPL"] = {"CQD", "BRB"};
foo["DNL"] = {"RJP", "SPC"};
foo["LTM"] = {"XGX", "HTQ"};
foo["HTF"] = {"PPK", "NTN"};
foo["VQQ"] = {"VDX", "TCB"};
foo["FJX"] = {"PHN", "LHV"};
foo["SXP"] = {"GBR", "MLN"};
foo["VJQ"] = {"RSP", "SVH"};
foo["BTB"] = {"XLL", "SBK"};
foo["KJH"] = {"HTF", "TSR"};
foo["FRQ"] = {"FQX", "VTR"};
foo["KHQ"] = {"PTN", "TNB"};
foo["KPB"] = {"VJH", "NRX"};
foo["HTQ"] = {"JRL", "TNT"};
foo["TCG"] = {"STS", "PSG"};
foo["QVH"] = {"BLH", "DPR"};
foo["QDC"] = {"SGK", "QCS"};
foo["BDM"] = {"DXQ", "TCF"};
foo["CFQ"] = {"QPB", "MQH"};
foo["STP"] = {"PVP", "XHG"};
foo["RGB"] = {"SLH", "TCT"};
foo["BSJ"] = {"JPS", "QRL"};
foo["RDX"] = {"TDV", "KDX"};
foo["TBC"] = {"BDB", "VJQ"};
foo["SRL"] = {"TSX", "VSG"};
foo["KDP"] = {"CJQ", "JHP"};
foo["KMG"] = {"SGR", "HNP"};
foo["FNX"] = {"LHV", "PHN"};
foo["QRL"] = {"KQC", "BFR"};
foo["LHF"] = {"LGX", "GXB"};
foo["FSG"] = {"DNV", "HCK"};
foo["HML"] = {"CFQ", "QSN"};
foo["HSA"] = {"HHX", "HLF"};
foo["XVP"] = {"SSQ", "SDT"};
foo["KDL"] = {"TRX", "NCX"};
foo["RJP"] = {"FQG", "MJN"};
foo["DLL"] = {"HTH", "JXN"};
foo["XVF"] = {"NCP", "CXD"};
foo["CQN"] = {"MLX", "JGL"};
foo["QKJ"] = {"FLF", "XQF"};
foo["BFS"] = {"MGC", "JSM"};
foo["QFF"] = {"PHC", "QJD"};
foo["HPC"] = {"FNL", "RDK"};
foo["MGR"] = {"CQN", "DTK"};
foo["THX"] = {"PTC", "SHL"};
foo["TPF"] = {"XTF", "SQH"};
foo["FKX"] = {"HFR", "VRQ"};
foo["CQD"] = {"RDX", "SSR"};
foo["BCF"] = {"VFK", "LRJ"};
foo["STS"] = {"NHK", "VBC"};
foo["CGG"] = {"SLT", "PXL"};
foo["DXQ"] = {"QVH", "CPQ"};
foo["XHH"] = {"LSP", "VMB"};
foo["VBR"] = {"JHR", "VMV"};
foo["GPH"] = {"JRP", "SPT"};
foo["MBV"] = {"MLS", "JHV"};
foo["NCP"] = {"GSP", "SMQ"};
foo["NML"] = {"BHV", "FKX"};
foo["KFF"] = {"LKH", "JLL"};
foo["VTR"] = {"LKV", "CTL"};
foo["VDV"] = {"QMG", "PDJ"};
foo["QBP"] = {"SGR", "HNP"};
foo["TRX"] = {"VFL", "MGF"};
foo["HKG"] = {"XHL", "DBM"};
foo["QGG"] = {"QFD", "LHP"};
foo["TDH"] = {"SSC", "RHQ"};
foo["CHH"] = {"JGJ", "LTN"};
foo["QVV"] = {"VFB", "GRF"};
foo["KGX"] = {"XGP", "LFQ"};
foo["NQF"] = {"QVV", "GNK"};
foo["XVV"] = {"DMX", "JDC"};
foo["VRJ"] = {"JSL", "RVK"};
foo["LKH"] = {"JCG", "RCD"};
foo["RQL"] = {"KHQ", "MPQ"};
foo["MLN"] = {"HXG", "GXS"};
foo["SVH"] = {"XVV", "KVH"};
foo["PVG"] = {"LMM", "LPT"};
foo["HBF"] = {"TXD", "JFS"};
foo["FXZ"] = {"JBB", "HPC"};
foo["TRS"] = {"XLP", "HFM"};
foo["RKQ"] = {"KHV", "KGN"};
foo["SXG"] = {"GVS", "RBB"};
foo["LTL"] = {"VNM", "CVM"};
foo["KCR"] = {"THX", "VBG"};
    std::string current_key = "AAA";
    int n = std::count_if(foo.begin(), foo.end(), [](auto v){
        return v.first[2] == 'A';
    });
    std::array<std::string, 6> keys = {"MXA", "VQA", "CBA", "JBA", "AAA", "HSA"};
    std::array<int64_t, 6> values;

    std::cout << "n:" << n << std::endl;
    for (int i = 0; i < 6; ++i) {
        current_key = keys[i];
        values[i] = 0;
        while(true) {
            if (current_key[2] == 'Z') {
                break;
            }
            auto direction = instructions[steps++ % instructions.length()];
            current_key = (direction == 'L') ? foo[current_key].left : foo[current_key].right;
            values[i] += 1;
        }
        std::cout << ":" << values[i] << std::endl;
    }
    
    steps = std::lcm(std::lcm(std::lcm(std::lcm(std::lcm(values[0], values[1]), values[2]),values[3]), values[4]), values[5]);
    std::cout << steps << std::endl;

    }
