#ifndef ID_KIND_ASDL_H
#define ID_KIND_ASDL_H

namespace id_kind_asdl {
namespace Id {
  const int Word_Compound = 1;
  const int Arith_Semi = 2;
  const int Arith_Comma = 3;
  const int Arith_Plus = 4;
  const int Arith_Minus = 5;
  const int Arith_Star = 6;
  const int Arith_Slash = 7;
  const int Arith_Percent = 8;
  const int Arith_DPlus = 9;
  const int Arith_DMinus = 10;
  const int Arith_DStar = 11;
  const int Arith_LParen = 12;
  const int Arith_RParen = 13;
  const int Arith_LBracket = 14;
  const int Arith_RBracket = 15;
  const int Arith_RBrace = 16;
  const int Arith_QMark = 17;
  const int Arith_Colon = 18;
  const int Arith_LessEqual = 19;
  const int Arith_Less = 20;
  const int Arith_GreatEqual = 21;
  const int Arith_Great = 22;
  const int Arith_DEqual = 23;
  const int Arith_NEqual = 24;
  const int Arith_DAmp = 25;
  const int Arith_DPipe = 26;
  const int Arith_Bang = 27;
  const int Arith_DGreat = 28;
  const int Arith_DLess = 29;
  const int Arith_Amp = 30;
  const int Arith_Pipe = 31;
  const int Arith_Caret = 32;
  const int Arith_Tilde = 33;
  const int Arith_Equal = 34;
  const int Arith_PlusEqual = 35;
  const int Arith_MinusEqual = 36;
  const int Arith_StarEqual = 37;
  const int Arith_SlashEqual = 38;
  const int Arith_PercentEqual = 39;
  const int Arith_DGreatEqual = 40;
  const int Arith_DLessEqual = 41;
  const int Arith_AmpEqual = 42;
  const int Arith_PipeEqual = 43;
  const int Arith_CaretEqual = 44;
  const int Eof_Real = 45;
  const int Eof_RParen = 46;
  const int Eof_Backtick = 47;
  const int Undefined_Tok = 48;
  const int Unknown_Tok = 49;
  const int Eol_Tok = 50;
  const int Ignored_LineCont = 51;
  const int Ignored_Space = 52;
  const int Ignored_Comment = 53;
  const int WS_Space = 54;
  const int Lit_Chars = 55;
  const int Lit_VarLike = 56;
  const int Lit_ArrayLhsOpen = 57;
  const int Lit_ArrayLhsClose = 58;
  const int Lit_Splice = 59;
  const int Lit_Other = 60;
  const int Lit_EscapedChar = 61;
  const int Lit_RegexMeta = 62;
  const int Lit_LBracket = 63;
  const int Lit_RBracket = 64;
  const int Lit_Star = 65;
  const int Lit_QMark = 66;
  const int Lit_LBrace = 67;
  const int Lit_RBrace = 68;
  const int Lit_Comma = 69;
  const int Lit_Equals = 70;
  const int Lit_DRightBracket = 71;
  const int Lit_TildeLike = 72;
  const int Lit_Pound = 73;
  const int Lit_Slash = 74;
  const int Lit_Percent = 75;
  const int Lit_Digits = 76;
  const int Lit_At = 77;
  const int Lit_ArithVarLike = 78;
  const int Lit_CompDummy = 79;
  const int Backtick_Right = 80;
  const int Backtick_Quoted = 81;
  const int Backtick_Other = 82;
  const int History_Op = 83;
  const int History_Num = 84;
  const int History_Search = 85;
  const int History_Other = 86;
  const int Op_Newline = 87;
  const int Op_Amp = 88;
  const int Op_Pipe = 89;
  const int Op_PipeAmp = 90;
  const int Op_DAmp = 91;
  const int Op_DPipe = 92;
  const int Op_Semi = 93;
  const int Op_DSemi = 94;
  const int Op_LParen = 95;
  const int Op_RParen = 96;
  const int Op_DLeftParen = 97;
  const int Op_DRightParen = 98;
  const int Op_Less = 99;
  const int Op_Great = 100;
  const int Op_Bang = 101;
  const int Op_LBracket = 102;
  const int Op_RBracket = 103;
  const int Op_LBrace = 104;
  const int Op_RBrace = 105;
  const int Expr_Reserved = 106;
  const int Expr_Symbol = 107;
  const int Expr_Name = 108;
  const int Expr_DecInt = 109;
  const int Expr_BinInt = 110;
  const int Expr_OctInt = 111;
  const int Expr_HexInt = 112;
  const int Expr_Float = 113;
  const int Expr_Dot = 114;
  const int Expr_DColon = 115;
  const int Expr_RArrow = 116;
  const int Expr_RDArrow = 117;
  const int Expr_At = 118;
  const int Expr_DoubleAt = 119;
  const int Expr_Ellipsis = 120;
  const int Expr_Dollar = 121;
  const int Expr_NotTilde = 122;
  const int Expr_CastedDummy = 123;
  const int Expr_Null = 124;
  const int Expr_True = 125;
  const int Expr_False = 126;
  const int Expr_Div = 127;
  const int Expr_Mod = 128;
  const int Expr_Xor = 129;
  const int Expr_And = 130;
  const int Expr_Or = 131;
  const int Expr_Not = 132;
  const int Expr_For = 133;
  const int Expr_Is = 134;
  const int Expr_In = 135;
  const int Expr_If = 136;
  const int Expr_Else = 137;
  const int Expr_Func = 138;
  const int Expr_As = 139;
  const int Expr_Virtual = 140;
  const int Expr_Override = 141;
  const int Expr_Abstract = 142;
  const int Char_OneChar = 143;
  const int Char_Stop = 144;
  const int Char_Hex = 145;
  const int Char_Octal3 = 146;
  const int Char_Octal4 = 147;
  const int Char_Unicode4 = 148;
  const int Char_Unicode8 = 149;
  const int Char_Literals = 150;
  const int Char_BadBackslash = 151;
  const int Re_Start = 152;
  const int Re_End = 153;
  const int Re_Dot = 154;
  const int Redir_Less = 155;
  const int Redir_Great = 156;
  const int Redir_DLess = 157;
  const int Redir_TLess = 158;
  const int Redir_DGreat = 159;
  const int Redir_GreatAnd = 160;
  const int Redir_LessAnd = 161;
  const int Redir_DLessDash = 162;
  const int Redir_LessGreat = 163;
  const int Redir_Clobber = 164;
  const int Redir_AndGreat = 165;
  const int Redir_AndDGreat = 166;
  const int Redir_GreatPlus = 167;
  const int Redir_DGreatPlus = 168;
  const int Left_DoubleQuote = 169;
  const int Left_SingleQuoteRaw = 170;
  const int Left_SingleQuoteC = 171;
  const int Left_Backtick = 172;
  const int Left_DollarParen = 173;
  const int Left_DollarBrace = 174;
  const int Left_DollarDParen = 175;
  const int Left_DollarBracket = 176;
  const int Left_DollarDoubleQuote = 177;
  const int Left_ProcSubIn = 178;
  const int Left_ProcSubOut = 179;
  const int Left_AtBrace = 180;
  const int Left_AtBracket = 181;
  const int Left_AtParen = 182;
  const int Right_DoubleQuote = 183;
  const int Right_SingleQuote = 184;
  const int Right_Backtick = 185;
  const int Right_DollarBrace = 186;
  const int Right_DollarDParen = 187;
  const int Right_DollarDoubleQuote = 188;
  const int Right_DollarSingleQuote = 189;
  const int Right_Subshell = 190;
  const int Right_ShFunction = 191;
  const int Right_CasePat = 192;
  const int Right_ShArrayLiteral = 193;
  const int Right_ExtGlob = 194;
  const int ExtGlob_At = 195;
  const int ExtGlob_Star = 196;
  const int ExtGlob_Plus = 197;
  const int ExtGlob_QMark = 198;
  const int ExtGlob_Bang = 199;
  const int VSub_DollarName = 200;
  const int VSub_Name = 201;
  const int VSub_Number = 202;
  const int VSub_Bang = 203;
  const int VSub_At = 204;
  const int VSub_Pound = 205;
  const int VSub_Dollar = 206;
  const int VSub_Star = 207;
  const int VSub_Hyphen = 208;
  const int VSub_QMark = 209;
  const int VTest_ColonHyphen = 210;
  const int VTest_Hyphen = 211;
  const int VTest_ColonEquals = 212;
  const int VTest_Equals = 213;
  const int VTest_ColonQMark = 214;
  const int VTest_QMark = 215;
  const int VTest_ColonPlus = 216;
  const int VTest_Plus = 217;
  const int VOp0_Q = 218;
  const int VOp0_E = 219;
  const int VOp0_P = 220;
  const int VOp0_A = 221;
  const int VOp0_a = 222;
  const int VOp1_Percent = 223;
  const int VOp1_DPercent = 224;
  const int VOp1_Pound = 225;
  const int VOp1_DPound = 226;
  const int VOp1_Caret = 227;
  const int VOp1_DCaret = 228;
  const int VOp1_Comma = 229;
  const int VOp1_DComma = 230;
  const int VOp2_Slash = 231;
  const int VOp2_Colon = 232;
  const int VOp2_LBracket = 233;
  const int VOp2_RBracket = 234;
  const int VOp3_At = 235;
  const int VOp3_Star = 236;
  const int Node_PostDPlus = 237;
  const int Node_PostDMinus = 238;
  const int Node_UnaryPlus = 239;
  const int Node_UnaryMinus = 240;
  const int Node_NotIn = 241;
  const int Node_IsNot = 242;
  const int KW_DLeftBracket = 243;
  const int KW_Bang = 244;
  const int KW_For = 245;
  const int KW_While = 246;
  const int KW_Until = 247;
  const int KW_Do = 248;
  const int KW_Done = 249;
  const int KW_In = 250;
  const int KW_Case = 251;
  const int KW_Esac = 252;
  const int KW_If = 253;
  const int KW_Fi = 254;
  const int KW_Then = 255;
  const int KW_Else = 256;
  const int KW_Elif = 257;
  const int KW_Function = 258;
  const int KW_Time = 259;
  const int KW_Const = 260;
  const int KW_Var = 261;
  const int KW_SetVar = 262;
  const int KW_SetRef = 263;
  const int KW_Set = 264;
  const int KW_SetLocal = 265;
  const int KW_SetGlobal = 266;
  const int KW_Proc = 267;
  const int KW_Func = 268;
  const int KW_Data = 269;
  const int KW_Enum = 270;
  const int KW_Class = 271;
  const int KW_Use = 272;
  const int KW_Pass = 273;
  const int ControlFlow_Break = 274;
  const int ControlFlow_Continue = 275;
  const int ControlFlow_Return = 276;
  const int ControlFlow_Exit = 277;
  const int Glob_LBracket = 278;
  const int Glob_RBracket = 279;
  const int Glob_Star = 280;
  const int Glob_QMark = 281;
  const int Glob_Bang = 282;
  const int Glob_Caret = 283;
  const int Glob_EscapedChar = 284;
  const int Glob_BadBackslash = 285;
  const int Glob_CleanLiterals = 286;
  const int Glob_OtherLiteral = 287;
  const int Format_EscapedPercent = 288;
  const int Format_Percent = 289;
  const int Format_Flag = 290;
  const int Format_Num = 291;
  const int Format_Dot = 292;
  const int Format_Type = 293;
  const int Format_Star = 294;
  const int Format_Time = 295;
  const int Format_Zero = 296;
  const int PS_Subst = 297;
  const int PS_Octal3 = 298;
  const int PS_LBrace = 299;
  const int PS_RBrace = 300;
  const int PS_Literals = 301;
  const int PS_BadBackslash = 302;
  const int Range_Int = 303;
  const int Range_Char = 304;
  const int Range_Dots = 305;
  const int Range_Other = 306;
  const int QSN_LiteralBytes = 307;
  const int QSN_SpecialByte = 308;
  const int QSN_Begin2 = 309;
  const int QSN_Begin3 = 310;
  const int QSN_Begin4 = 311;
  const int QSN_Cont = 312;
  const int BoolUnary_z = 313;
  const int BoolUnary_n = 314;
  const int BoolUnary_o = 315;
  const int BoolUnary_t = 316;
  const int BoolUnary_v = 317;
  const int BoolUnary_R = 318;
  const int BoolUnary_a = 319;
  const int BoolUnary_b = 320;
  const int BoolUnary_c = 321;
  const int BoolUnary_d = 322;
  const int BoolUnary_e = 323;
  const int BoolUnary_f = 324;
  const int BoolUnary_g = 325;
  const int BoolUnary_h = 326;
  const int BoolUnary_k = 327;
  const int BoolUnary_L = 328;
  const int BoolUnary_p = 329;
  const int BoolUnary_r = 330;
  const int BoolUnary_s = 331;
  const int BoolUnary_S = 332;
  const int BoolUnary_u = 333;
  const int BoolUnary_w = 334;
  const int BoolUnary_x = 335;
  const int BoolUnary_O = 336;
  const int BoolUnary_G = 337;
  const int BoolUnary_N = 338;
  const int BoolBinary_GlobEqual = 339;
  const int BoolBinary_GlobDEqual = 340;
  const int BoolBinary_GlobNEqual = 341;
  const int BoolBinary_EqualTilde = 342;
  const int BoolBinary_ef = 343;
  const int BoolBinary_nt = 344;
  const int BoolBinary_ot = 345;
  const int BoolBinary_eq = 346;
  const int BoolBinary_ne = 347;
  const int BoolBinary_gt = 348;
  const int BoolBinary_ge = 349;
  const int BoolBinary_lt = 350;
  const int BoolBinary_le = 351;
  const int BoolBinary_Equal = 352;
  const int BoolBinary_DEqual = 353;
  const int BoolBinary_NEqual = 354;
  const int ARRAY_SIZE = 355;
};

const char* Id_str(int tag);

typedef int Id_t;

enum class Kind {
  Word = 1,
  Arith = 2,
  Eof = 3,
  Undefined = 4,
  Unknown = 5,
  Eol = 6,
  Ignored = 7,
  WS = 8,
  Lit = 9,
  Backtick = 10,
  History = 11,
  Op = 12,
  Expr = 13,
  Char = 14,
  Re = 15,
  Redir = 16,
  Left = 17,
  Right = 18,
  ExtGlob = 19,
  VSub = 20,
  VTest = 21,
  VOp0 = 22,
  VOp1 = 23,
  VOp2 = 24,
  VOp3 = 25,
  Node = 26,
  KW = 27,
  ControlFlow = 28,
  Glob = 29,
  Format = 30,
  PS = 31,
  Range = 32,
  QSN = 33,
  BoolUnary = 34,
  BoolBinary = 35,
};
typedef Kind Kind_t;

const char* Kind_str(Kind tag);


}  // namespace id_kind_asdl

#endif  // ID_KIND_ASDL_H