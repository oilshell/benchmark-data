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
  const int Lit_Colon = 76;
  const int Lit_Digits = 77;
  const int Lit_At = 78;
  const int Lit_ArithVarLike = 79;
  const int Lit_CompDummy = 80;
  const int Backtick_Right = 81;
  const int Backtick_Quoted = 82;
  const int Backtick_Other = 83;
  const int History_Op = 84;
  const int History_Num = 85;
  const int History_Search = 86;
  const int History_Other = 87;
  const int Op_Newline = 88;
  const int Op_Amp = 89;
  const int Op_Pipe = 90;
  const int Op_PipeAmp = 91;
  const int Op_DAmp = 92;
  const int Op_DPipe = 93;
  const int Op_Semi = 94;
  const int Op_DSemi = 95;
  const int Op_LParen = 96;
  const int Op_RParen = 97;
  const int Op_DLeftParen = 98;
  const int Op_DRightParen = 99;
  const int Op_Less = 100;
  const int Op_Great = 101;
  const int Op_Bang = 102;
  const int Op_LBracket = 103;
  const int Op_RBracket = 104;
  const int Op_LBrace = 105;
  const int Op_RBrace = 106;
  const int Expr_Reserved = 107;
  const int Expr_Symbol = 108;
  const int Expr_Name = 109;
  const int Expr_DecInt = 110;
  const int Expr_BinInt = 111;
  const int Expr_OctInt = 112;
  const int Expr_HexInt = 113;
  const int Expr_Float = 114;
  const int Expr_Dot = 115;
  const int Expr_DColon = 116;
  const int Expr_RArrow = 117;
  const int Expr_RDArrow = 118;
  const int Expr_At = 119;
  const int Expr_DoubleAt = 120;
  const int Expr_Ellipsis = 121;
  const int Expr_Dollar = 122;
  const int Expr_NotTilde = 123;
  const int Expr_CastedDummy = 124;
  const int Expr_Null = 125;
  const int Expr_True = 126;
  const int Expr_False = 127;
  const int Expr_Div = 128;
  const int Expr_Mod = 129;
  const int Expr_Xor = 130;
  const int Expr_And = 131;
  const int Expr_Or = 132;
  const int Expr_Not = 133;
  const int Expr_For = 134;
  const int Expr_Is = 135;
  const int Expr_In = 136;
  const int Expr_If = 137;
  const int Expr_Else = 138;
  const int Expr_Func = 139;
  const int Expr_As = 140;
  const int Expr_Virtual = 141;
  const int Expr_Override = 142;
  const int Expr_Abstract = 143;
  const int Char_OneChar = 144;
  const int Char_Stop = 145;
  const int Char_Hex = 146;
  const int Char_Octal3 = 147;
  const int Char_Octal4 = 148;
  const int Char_Unicode4 = 149;
  const int Char_Unicode8 = 150;
  const int Char_Literals = 151;
  const int Char_BadBackslash = 152;
  const int Re_Start = 153;
  const int Re_End = 154;
  const int Re_Dot = 155;
  const int Redir_Less = 156;
  const int Redir_Great = 157;
  const int Redir_DLess = 158;
  const int Redir_TLess = 159;
  const int Redir_DGreat = 160;
  const int Redir_GreatAnd = 161;
  const int Redir_LessAnd = 162;
  const int Redir_DLessDash = 163;
  const int Redir_LessGreat = 164;
  const int Redir_Clobber = 165;
  const int Redir_AndGreat = 166;
  const int Redir_AndDGreat = 167;
  const int Redir_GreatPlus = 168;
  const int Redir_DGreatPlus = 169;
  const int Left_DoubleQuote = 170;
  const int Left_SingleQuoteRaw = 171;
  const int Left_SingleQuoteC = 172;
  const int Left_Backtick = 173;
  const int Left_DollarParen = 174;
  const int Left_DollarBrace = 175;
  const int Left_DollarDParen = 176;
  const int Left_DollarBracket = 177;
  const int Left_DollarDoubleQuote = 178;
  const int Left_ProcSubIn = 179;
  const int Left_ProcSubOut = 180;
  const int Left_AtParen = 181;
  const int Left_PercentParen = 182;
  const int Left_PercentBrace = 183;
  const int Left_PercentBracket = 184;
  const int Right_DoubleQuote = 185;
  const int Right_SingleQuote = 186;
  const int Right_Backtick = 187;
  const int Right_DollarBrace = 188;
  const int Right_DollarDParen = 189;
  const int Right_DollarDoubleQuote = 190;
  const int Right_DollarSingleQuote = 191;
  const int Right_Subshell = 192;
  const int Right_ShFunction = 193;
  const int Right_CasePat = 194;
  const int Right_ShArrayLiteral = 195;
  const int Right_ExtGlob = 196;
  const int ExtGlob_Comma = 197;
  const int ExtGlob_At = 198;
  const int ExtGlob_Star = 199;
  const int ExtGlob_Plus = 200;
  const int ExtGlob_QMark = 201;
  const int ExtGlob_Bang = 202;
  const int VSub_DollarName = 203;
  const int VSub_Name = 204;
  const int VSub_Number = 205;
  const int VSub_Bang = 206;
  const int VSub_At = 207;
  const int VSub_Pound = 208;
  const int VSub_Dollar = 209;
  const int VSub_Star = 210;
  const int VSub_Hyphen = 211;
  const int VSub_QMark = 212;
  const int VTest_ColonHyphen = 213;
  const int VTest_Hyphen = 214;
  const int VTest_ColonEquals = 215;
  const int VTest_Equals = 216;
  const int VTest_ColonQMark = 217;
  const int VTest_QMark = 218;
  const int VTest_ColonPlus = 219;
  const int VTest_Plus = 220;
  const int VOp0_Q = 221;
  const int VOp0_E = 222;
  const int VOp0_P = 223;
  const int VOp0_A = 224;
  const int VOp0_a = 225;
  const int VOp1_Percent = 226;
  const int VOp1_DPercent = 227;
  const int VOp1_Pound = 228;
  const int VOp1_DPound = 229;
  const int VOp1_Caret = 230;
  const int VOp1_DCaret = 231;
  const int VOp1_Comma = 232;
  const int VOp1_DComma = 233;
  const int VOp2_Slash = 234;
  const int VOp2_Colon = 235;
  const int VOp2_LBracket = 236;
  const int VOp2_RBracket = 237;
  const int VOp3_At = 238;
  const int VOp3_Star = 239;
  const int Node_PostDPlus = 240;
  const int Node_PostDMinus = 241;
  const int Node_UnaryPlus = 242;
  const int Node_UnaryMinus = 243;
  const int Node_NotIn = 244;
  const int Node_IsNot = 245;
  const int KW_DLeftBracket = 246;
  const int KW_Bang = 247;
  const int KW_For = 248;
  const int KW_While = 249;
  const int KW_Until = 250;
  const int KW_Do = 251;
  const int KW_Done = 252;
  const int KW_In = 253;
  const int KW_Case = 254;
  const int KW_Esac = 255;
  const int KW_If = 256;
  const int KW_Fi = 257;
  const int KW_Then = 258;
  const int KW_Else = 259;
  const int KW_Elif = 260;
  const int KW_Function = 261;
  const int KW_Time = 262;
  const int KW_Const = 263;
  const int KW_Var = 264;
  const int KW_SetVar = 265;
  const int KW_SetRef = 266;
  const int KW_Set = 267;
  const int KW_SetLocal = 268;
  const int KW_SetGlobal = 269;
  const int KW_Proc = 270;
  const int KW_Func = 271;
  const int KW_Data = 272;
  const int KW_Enum = 273;
  const int KW_Class = 274;
  const int KW_Use = 275;
  const int KW_Pass = 276;
  const int ControlFlow_Break = 277;
  const int ControlFlow_Continue = 278;
  const int ControlFlow_Return = 279;
  const int ControlFlow_Exit = 280;
  const int Glob_LBracket = 281;
  const int Glob_RBracket = 282;
  const int Glob_Star = 283;
  const int Glob_QMark = 284;
  const int Glob_Bang = 285;
  const int Glob_Caret = 286;
  const int Glob_EscapedChar = 287;
  const int Glob_BadBackslash = 288;
  const int Glob_CleanLiterals = 289;
  const int Glob_OtherLiteral = 290;
  const int Format_EscapedPercent = 291;
  const int Format_Percent = 292;
  const int Format_Flag = 293;
  const int Format_Num = 294;
  const int Format_Dot = 295;
  const int Format_Type = 296;
  const int Format_Star = 297;
  const int Format_Time = 298;
  const int Format_Zero = 299;
  const int PS_Subst = 300;
  const int PS_Octal3 = 301;
  const int PS_LBrace = 302;
  const int PS_RBrace = 303;
  const int PS_Literals = 304;
  const int PS_BadBackslash = 305;
  const int Range_Int = 306;
  const int Range_Char = 307;
  const int Range_Dots = 308;
  const int Range_Other = 309;
  const int QSN_LiteralBytes = 310;
  const int QSN_SpecialByte = 311;
  const int QSN_Begin2 = 312;
  const int QSN_Begin3 = 313;
  const int QSN_Begin4 = 314;
  const int QSN_Cont = 315;
  const int BoolUnary_z = 316;
  const int BoolUnary_n = 317;
  const int BoolUnary_o = 318;
  const int BoolUnary_t = 319;
  const int BoolUnary_v = 320;
  const int BoolUnary_R = 321;
  const int BoolUnary_a = 322;
  const int BoolUnary_b = 323;
  const int BoolUnary_c = 324;
  const int BoolUnary_d = 325;
  const int BoolUnary_e = 326;
  const int BoolUnary_f = 327;
  const int BoolUnary_g = 328;
  const int BoolUnary_h = 329;
  const int BoolUnary_k = 330;
  const int BoolUnary_L = 331;
  const int BoolUnary_p = 332;
  const int BoolUnary_r = 333;
  const int BoolUnary_s = 334;
  const int BoolUnary_S = 335;
  const int BoolUnary_u = 336;
  const int BoolUnary_w = 337;
  const int BoolUnary_x = 338;
  const int BoolUnary_O = 339;
  const int BoolUnary_G = 340;
  const int BoolUnary_N = 341;
  const int BoolBinary_GlobEqual = 342;
  const int BoolBinary_GlobDEqual = 343;
  const int BoolBinary_GlobNEqual = 344;
  const int BoolBinary_EqualTilde = 345;
  const int BoolBinary_ef = 346;
  const int BoolBinary_nt = 347;
  const int BoolBinary_ot = 348;
  const int BoolBinary_eq = 349;
  const int BoolBinary_ne = 350;
  const int BoolBinary_gt = 351;
  const int BoolBinary_ge = 352;
  const int BoolBinary_lt = 353;
  const int BoolBinary_le = 354;
  const int BoolBinary_Equal = 355;
  const int BoolBinary_DEqual = 356;
  const int BoolBinary_NEqual = 357;
  const int ARRAY_SIZE = 358;
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
