#include "consts.h"

namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::redir_arg_type_e;
using types_asdl::bool_arg_type_e;
using option_asdl::builtin_t;

namespace consts {

int NO_INDEX = 0;  // duplicated from frontend/consts.py

List<int>* STRICT_ALL = new List<int>({3, 21, 2, 20, 42, 4, 22, 23, 24, 31, 25, 26, 27, 28, 32, 29, 30});
List<int>* OIL_BASIC = new List<int>({34, 3, 21, 35, 2, 20, 37, 38, 42, 39, 40, 41, 4, 36, 33, 22, 23, 24, 31, 25, 26, 27, 28, 32, 29, 30});
List<int>* OIL_ALL = new List<int>({34, 3, 21, 35, 2, 20, 37, 38, 44, 42, 39, 40, 41, 43, 45, 4, 36, 33, 22, 23, 24, 31, 25, 26, 27, 28, 32, 29, 30});
List<int>* DEFAULT_TRUE = new List<int>({34, 3, 42, 19});
List<int>* PARSE_OPTION_NUMS = new List<int>({37, 38, 17, 44, 42, 39, 40, 41, 43, 45});
List<int>* SHOPT_OPTION_NUMS = new List<int>({52, 53, 54, 55, 56, 57, 58, 51, 18, 59, 34, 60, 61, 62, 16, 63, 46, 64, 15, 65, 14, 66, 67, 68, 69, 49, 70, 71, 50, 72, 21, 73, 47, 74, 75, 76, 77, 78, 35, 79, 80, 81, 20, 37, 38, 17, 44, 42, 39, 40, 41, 43, 45, 48, 82, 83, 84, 85, 36, 33, 86, 22, 23, 24, 31, 25, 26, 27, 28, 32, 29, 30, 19, 87});
List<int>* SET_OPTION_NUMS = new List<int>({12, 1, 3, 9, 5, 8, 2, 4, 10, 7, 11, 6});
List<Str*>* VISIBLE_SHOPT_NAMES = new List<Str*>({/* TODO */});

int RedirDefaultFd(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Redir_Less: return 0;
  case Id::Redir_Great: return 1;
  case Id::Redir_DLess: return 0;
  case Id::Redir_TLess: return 0;
  case Id::Redir_DGreat: return 1;
  case Id::Redir_GreatAnd: return 1;
  case Id::Redir_LessAnd: return 0;
  case Id::Redir_DLessDash: return 0;
  case Id::Redir_LessGreat: return 0;
  case Id::Redir_Clobber: return 1;
  case Id::Redir_AndGreat: return 1;
  case Id::Redir_AndDGreat: return 1;
  }
}

types_asdl::redir_arg_type_t RedirArgType(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Redir_Less: return redir_arg_type_e::Path;
  case Id::Redir_Great: return redir_arg_type_e::Path;
  case Id::Redir_TLess: return redir_arg_type_e::Here;
  case Id::Redir_DGreat: return redir_arg_type_e::Path;
  case Id::Redir_GreatAnd: return redir_arg_type_e::Desc;
  case Id::Redir_LessAnd: return redir_arg_type_e::Desc;
  case Id::Redir_LessGreat: return redir_arg_type_e::Path;
  case Id::Redir_Clobber: return redir_arg_type_e::Path;
  case Id::Redir_AndGreat: return redir_arg_type_e::Path;
  case Id::Redir_AndDGreat: return redir_arg_type_e::Path;
  }
}

types_asdl::bool_arg_type_t BoolArgType(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Op_DAmp: return bool_arg_type_e::Undefined;
  case Id::Op_DPipe: return bool_arg_type_e::Undefined;
  case Id::Op_Less: return bool_arg_type_e::Str;
  case Id::Op_Great: return bool_arg_type_e::Str;
  case Id::KW_Bang: return bool_arg_type_e::Undefined;
  case Id::BoolUnary_z: return bool_arg_type_e::Str;
  case Id::BoolUnary_n: return bool_arg_type_e::Str;
  case Id::BoolUnary_o: return bool_arg_type_e::Other;
  case Id::BoolUnary_t: return bool_arg_type_e::Other;
  case Id::BoolUnary_v: return bool_arg_type_e::Other;
  case Id::BoolUnary_R: return bool_arg_type_e::Other;
  case Id::BoolUnary_a: return bool_arg_type_e::Path;
  case Id::BoolUnary_b: return bool_arg_type_e::Path;
  case Id::BoolUnary_c: return bool_arg_type_e::Path;
  case Id::BoolUnary_d: return bool_arg_type_e::Path;
  case Id::BoolUnary_e: return bool_arg_type_e::Path;
  case Id::BoolUnary_f: return bool_arg_type_e::Path;
  case Id::BoolUnary_g: return bool_arg_type_e::Path;
  case Id::BoolUnary_h: return bool_arg_type_e::Path;
  case Id::BoolUnary_k: return bool_arg_type_e::Path;
  case Id::BoolUnary_L: return bool_arg_type_e::Path;
  case Id::BoolUnary_p: return bool_arg_type_e::Path;
  case Id::BoolUnary_r: return bool_arg_type_e::Path;
  case Id::BoolUnary_s: return bool_arg_type_e::Path;
  case Id::BoolUnary_S: return bool_arg_type_e::Path;
  case Id::BoolUnary_u: return bool_arg_type_e::Path;
  case Id::BoolUnary_w: return bool_arg_type_e::Path;
  case Id::BoolUnary_x: return bool_arg_type_e::Path;
  case Id::BoolUnary_O: return bool_arg_type_e::Path;
  case Id::BoolUnary_G: return bool_arg_type_e::Path;
  case Id::BoolUnary_N: return bool_arg_type_e::Path;
  case Id::BoolBinary_GlobEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_GlobDEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_GlobNEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_EqualTilde: return bool_arg_type_e::Str;
  case Id::BoolBinary_ef: return bool_arg_type_e::Path;
  case Id::BoolBinary_nt: return bool_arg_type_e::Path;
  case Id::BoolBinary_ot: return bool_arg_type_e::Path;
  case Id::BoolBinary_eq: return bool_arg_type_e::Int;
  case Id::BoolBinary_ne: return bool_arg_type_e::Int;
  case Id::BoolBinary_gt: return bool_arg_type_e::Int;
  case Id::BoolBinary_ge: return bool_arg_type_e::Int;
  case Id::BoolBinary_lt: return bool_arg_type_e::Int;
  case Id::BoolBinary_le: return bool_arg_type_e::Int;
  case Id::BoolBinary_Equal: return bool_arg_type_e::Str;
  case Id::BoolBinary_DEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_NEqual: return bool_arg_type_e::Str;
  }
}

Kind GetKind(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Word_Compound: return Kind::Word;
  case Id::Arith_Semi: return Kind::Arith;
  case Id::Arith_Comma: return Kind::Arith;
  case Id::Arith_Plus: return Kind::Arith;
  case Id::Arith_Minus: return Kind::Arith;
  case Id::Arith_Star: return Kind::Arith;
  case Id::Arith_Slash: return Kind::Arith;
  case Id::Arith_Percent: return Kind::Arith;
  case Id::Arith_DPlus: return Kind::Arith;
  case Id::Arith_DMinus: return Kind::Arith;
  case Id::Arith_DStar: return Kind::Arith;
  case Id::Arith_LParen: return Kind::Arith;
  case Id::Arith_RParen: return Kind::Arith;
  case Id::Arith_LBracket: return Kind::Arith;
  case Id::Arith_RBracket: return Kind::Arith;
  case Id::Arith_RBrace: return Kind::Arith;
  case Id::Arith_QMark: return Kind::Arith;
  case Id::Arith_Colon: return Kind::Arith;
  case Id::Arith_LessEqual: return Kind::Arith;
  case Id::Arith_Less: return Kind::Arith;
  case Id::Arith_GreatEqual: return Kind::Arith;
  case Id::Arith_Great: return Kind::Arith;
  case Id::Arith_DEqual: return Kind::Arith;
  case Id::Arith_NEqual: return Kind::Arith;
  case Id::Arith_DAmp: return Kind::Arith;
  case Id::Arith_DPipe: return Kind::Arith;
  case Id::Arith_Bang: return Kind::Arith;
  case Id::Arith_DGreat: return Kind::Arith;
  case Id::Arith_DLess: return Kind::Arith;
  case Id::Arith_Amp: return Kind::Arith;
  case Id::Arith_Pipe: return Kind::Arith;
  case Id::Arith_Caret: return Kind::Arith;
  case Id::Arith_Tilde: return Kind::Arith;
  case Id::Arith_Equal: return Kind::Arith;
  case Id::Arith_PlusEqual: return Kind::Arith;
  case Id::Arith_MinusEqual: return Kind::Arith;
  case Id::Arith_StarEqual: return Kind::Arith;
  case Id::Arith_SlashEqual: return Kind::Arith;
  case Id::Arith_PercentEqual: return Kind::Arith;
  case Id::Arith_DGreatEqual: return Kind::Arith;
  case Id::Arith_DLessEqual: return Kind::Arith;
  case Id::Arith_AmpEqual: return Kind::Arith;
  case Id::Arith_PipeEqual: return Kind::Arith;
  case Id::Arith_CaretEqual: return Kind::Arith;
  case Id::Eof_Real: return Kind::Eof;
  case Id::Eof_RParen: return Kind::Eof;
  case Id::Eof_Backtick: return Kind::Eof;
  case Id::Undefined_Tok: return Kind::Undefined;
  case Id::Unknown_Tok: return Kind::Unknown;
  case Id::Eol_Tok: return Kind::Eol;
  case Id::Ignored_LineCont: return Kind::Ignored;
  case Id::Ignored_Space: return Kind::Ignored;
  case Id::Ignored_Comment: return Kind::Ignored;
  case Id::WS_Space: return Kind::WS;
  case Id::Lit_Chars: return Kind::Lit;
  case Id::Lit_VarLike: return Kind::Lit;
  case Id::Lit_ArrayLhsOpen: return Kind::Lit;
  case Id::Lit_ArrayLhsClose: return Kind::Lit;
  case Id::Lit_Splice: return Kind::Lit;
  case Id::Lit_Other: return Kind::Lit;
  case Id::Lit_EscapedChar: return Kind::Lit;
  case Id::Lit_RegexMeta: return Kind::Lit;
  case Id::Lit_LBracket: return Kind::Lit;
  case Id::Lit_RBracket: return Kind::Lit;
  case Id::Lit_Star: return Kind::Lit;
  case Id::Lit_QMark: return Kind::Lit;
  case Id::Lit_LBrace: return Kind::Lit;
  case Id::Lit_RBrace: return Kind::Lit;
  case Id::Lit_Comma: return Kind::Lit;
  case Id::Lit_Equals: return Kind::Lit;
  case Id::Lit_DRightBracket: return Kind::Lit;
  case Id::Lit_TildeLike: return Kind::Lit;
  case Id::Lit_Pound: return Kind::Lit;
  case Id::Lit_Slash: return Kind::Lit;
  case Id::Lit_Percent: return Kind::Lit;
  case Id::Lit_Digits: return Kind::Lit;
  case Id::Lit_At: return Kind::Lit;
  case Id::Lit_ArithVarLike: return Kind::Lit;
  case Id::Lit_CompDummy: return Kind::Lit;
  case Id::Backtick_Right: return Kind::Backtick;
  case Id::Backtick_Quoted: return Kind::Backtick;
  case Id::Backtick_Other: return Kind::Backtick;
  case Id::History_Op: return Kind::History;
  case Id::History_Num: return Kind::History;
  case Id::History_Search: return Kind::History;
  case Id::History_Other: return Kind::History;
  case Id::Op_Newline: return Kind::Op;
  case Id::Op_Amp: return Kind::Op;
  case Id::Op_Pipe: return Kind::Op;
  case Id::Op_PipeAmp: return Kind::Op;
  case Id::Op_DAmp: return Kind::Op;
  case Id::Op_DPipe: return Kind::Op;
  case Id::Op_Semi: return Kind::Op;
  case Id::Op_DSemi: return Kind::Op;
  case Id::Op_LParen: return Kind::Op;
  case Id::Op_RParen: return Kind::Op;
  case Id::Op_DLeftParen: return Kind::Op;
  case Id::Op_DRightParen: return Kind::Op;
  case Id::Op_Less: return Kind::Op;
  case Id::Op_Great: return Kind::Op;
  case Id::Op_Bang: return Kind::Op;
  case Id::Op_LBracket: return Kind::Op;
  case Id::Op_RBracket: return Kind::Op;
  case Id::Op_LBrace: return Kind::Op;
  case Id::Op_RBrace: return Kind::Op;
  case Id::Expr_Reserved: return Kind::Expr;
  case Id::Expr_Symbol: return Kind::Expr;
  case Id::Expr_Name: return Kind::Expr;
  case Id::Expr_DecInt: return Kind::Expr;
  case Id::Expr_BinInt: return Kind::Expr;
  case Id::Expr_OctInt: return Kind::Expr;
  case Id::Expr_HexInt: return Kind::Expr;
  case Id::Expr_Float: return Kind::Expr;
  case Id::Expr_Dot: return Kind::Expr;
  case Id::Expr_DColon: return Kind::Expr;
  case Id::Expr_RArrow: return Kind::Expr;
  case Id::Expr_RDArrow: return Kind::Expr;
  case Id::Expr_At: return Kind::Expr;
  case Id::Expr_DoubleAt: return Kind::Expr;
  case Id::Expr_Ellipsis: return Kind::Expr;
  case Id::Expr_Dollar: return Kind::Expr;
  case Id::Expr_NotTilde: return Kind::Expr;
  case Id::Expr_CastedDummy: return Kind::Expr;
  case Id::Expr_Null: return Kind::Expr;
  case Id::Expr_True: return Kind::Expr;
  case Id::Expr_False: return Kind::Expr;
  case Id::Expr_Div: return Kind::Expr;
  case Id::Expr_Mod: return Kind::Expr;
  case Id::Expr_Xor: return Kind::Expr;
  case Id::Expr_And: return Kind::Expr;
  case Id::Expr_Or: return Kind::Expr;
  case Id::Expr_Not: return Kind::Expr;
  case Id::Expr_For: return Kind::Expr;
  case Id::Expr_Is: return Kind::Expr;
  case Id::Expr_In: return Kind::Expr;
  case Id::Expr_If: return Kind::Expr;
  case Id::Expr_Else: return Kind::Expr;
  case Id::Expr_Func: return Kind::Expr;
  case Id::Expr_As: return Kind::Expr;
  case Id::Expr_Virtual: return Kind::Expr;
  case Id::Expr_Override: return Kind::Expr;
  case Id::Expr_Abstract: return Kind::Expr;
  case Id::Char_OneChar: return Kind::Char;
  case Id::Char_Stop: return Kind::Char;
  case Id::Char_Hex: return Kind::Char;
  case Id::Char_Octal3: return Kind::Char;
  case Id::Char_Octal4: return Kind::Char;
  case Id::Char_Unicode4: return Kind::Char;
  case Id::Char_Unicode8: return Kind::Char;
  case Id::Char_Literals: return Kind::Char;
  case Id::Char_BadBackslash: return Kind::Char;
  case Id::Re_Start: return Kind::Re;
  case Id::Re_End: return Kind::Re;
  case Id::Re_Dot: return Kind::Re;
  case Id::Redir_Less: return Kind::Redir;
  case Id::Redir_Great: return Kind::Redir;
  case Id::Redir_DLess: return Kind::Redir;
  case Id::Redir_TLess: return Kind::Redir;
  case Id::Redir_DGreat: return Kind::Redir;
  case Id::Redir_GreatAnd: return Kind::Redir;
  case Id::Redir_LessAnd: return Kind::Redir;
  case Id::Redir_DLessDash: return Kind::Redir;
  case Id::Redir_LessGreat: return Kind::Redir;
  case Id::Redir_Clobber: return Kind::Redir;
  case Id::Redir_AndGreat: return Kind::Redir;
  case Id::Redir_AndDGreat: return Kind::Redir;
  case Id::Redir_GreatPlus: return Kind::Redir;
  case Id::Redir_DGreatPlus: return Kind::Redir;
  case Id::Left_DoubleQuote: return Kind::Left;
  case Id::Left_SingleQuoteRaw: return Kind::Left;
  case Id::Left_SingleQuoteC: return Kind::Left;
  case Id::Left_Backtick: return Kind::Left;
  case Id::Left_DollarParen: return Kind::Left;
  case Id::Left_DollarBrace: return Kind::Left;
  case Id::Left_DollarDParen: return Kind::Left;
  case Id::Left_DollarBracket: return Kind::Left;
  case Id::Left_DollarDoubleQuote: return Kind::Left;
  case Id::Left_ProcSubIn: return Kind::Left;
  case Id::Left_ProcSubOut: return Kind::Left;
  case Id::Left_AtBrace: return Kind::Left;
  case Id::Left_AtBracket: return Kind::Left;
  case Id::Left_AtParen: return Kind::Left;
  case Id::Right_DoubleQuote: return Kind::Right;
  case Id::Right_SingleQuote: return Kind::Right;
  case Id::Right_Backtick: return Kind::Right;
  case Id::Right_DollarBrace: return Kind::Right;
  case Id::Right_DollarDParen: return Kind::Right;
  case Id::Right_DollarDoubleQuote: return Kind::Right;
  case Id::Right_DollarSingleQuote: return Kind::Right;
  case Id::Right_Subshell: return Kind::Right;
  case Id::Right_ShFunction: return Kind::Right;
  case Id::Right_CasePat: return Kind::Right;
  case Id::Right_ShArrayLiteral: return Kind::Right;
  case Id::Right_ExtGlob: return Kind::Right;
  case Id::ExtGlob_At: return Kind::ExtGlob;
  case Id::ExtGlob_Star: return Kind::ExtGlob;
  case Id::ExtGlob_Plus: return Kind::ExtGlob;
  case Id::ExtGlob_QMark: return Kind::ExtGlob;
  case Id::ExtGlob_Bang: return Kind::ExtGlob;
  case Id::VSub_DollarName: return Kind::VSub;
  case Id::VSub_Name: return Kind::VSub;
  case Id::VSub_Number: return Kind::VSub;
  case Id::VSub_Bang: return Kind::VSub;
  case Id::VSub_At: return Kind::VSub;
  case Id::VSub_Pound: return Kind::VSub;
  case Id::VSub_Dollar: return Kind::VSub;
  case Id::VSub_Star: return Kind::VSub;
  case Id::VSub_Hyphen: return Kind::VSub;
  case Id::VSub_QMark: return Kind::VSub;
  case Id::VTest_ColonHyphen: return Kind::VTest;
  case Id::VTest_Hyphen: return Kind::VTest;
  case Id::VTest_ColonEquals: return Kind::VTest;
  case Id::VTest_Equals: return Kind::VTest;
  case Id::VTest_ColonQMark: return Kind::VTest;
  case Id::VTest_QMark: return Kind::VTest;
  case Id::VTest_ColonPlus: return Kind::VTest;
  case Id::VTest_Plus: return Kind::VTest;
  case Id::VOp0_Q: return Kind::VOp0;
  case Id::VOp0_E: return Kind::VOp0;
  case Id::VOp0_P: return Kind::VOp0;
  case Id::VOp0_A: return Kind::VOp0;
  case Id::VOp0_a: return Kind::VOp0;
  case Id::VOp1_Percent: return Kind::VOp1;
  case Id::VOp1_DPercent: return Kind::VOp1;
  case Id::VOp1_Pound: return Kind::VOp1;
  case Id::VOp1_DPound: return Kind::VOp1;
  case Id::VOp1_Caret: return Kind::VOp1;
  case Id::VOp1_DCaret: return Kind::VOp1;
  case Id::VOp1_Comma: return Kind::VOp1;
  case Id::VOp1_DComma: return Kind::VOp1;
  case Id::VOp2_Slash: return Kind::VOp2;
  case Id::VOp2_Colon: return Kind::VOp2;
  case Id::VOp2_LBracket: return Kind::VOp2;
  case Id::VOp2_RBracket: return Kind::VOp2;
  case Id::VOp3_At: return Kind::VOp3;
  case Id::VOp3_Star: return Kind::VOp3;
  case Id::Node_PostDPlus: return Kind::Node;
  case Id::Node_PostDMinus: return Kind::Node;
  case Id::Node_UnaryPlus: return Kind::Node;
  case Id::Node_UnaryMinus: return Kind::Node;
  case Id::Node_NotIn: return Kind::Node;
  case Id::Node_IsNot: return Kind::Node;
  case Id::KW_DLeftBracket: return Kind::KW;
  case Id::KW_Bang: return Kind::KW;
  case Id::KW_For: return Kind::KW;
  case Id::KW_While: return Kind::KW;
  case Id::KW_Until: return Kind::KW;
  case Id::KW_Do: return Kind::KW;
  case Id::KW_Done: return Kind::KW;
  case Id::KW_In: return Kind::KW;
  case Id::KW_Case: return Kind::KW;
  case Id::KW_Esac: return Kind::KW;
  case Id::KW_If: return Kind::KW;
  case Id::KW_Fi: return Kind::KW;
  case Id::KW_Then: return Kind::KW;
  case Id::KW_Else: return Kind::KW;
  case Id::KW_Elif: return Kind::KW;
  case Id::KW_Function: return Kind::KW;
  case Id::KW_Time: return Kind::KW;
  case Id::KW_Const: return Kind::KW;
  case Id::KW_Var: return Kind::KW;
  case Id::KW_SetVar: return Kind::KW;
  case Id::KW_SetRef: return Kind::KW;
  case Id::KW_Set: return Kind::KW;
  case Id::KW_SetLocal: return Kind::KW;
  case Id::KW_SetGlobal: return Kind::KW;
  case Id::KW_Proc: return Kind::KW;
  case Id::KW_Func: return Kind::KW;
  case Id::KW_Data: return Kind::KW;
  case Id::KW_Enum: return Kind::KW;
  case Id::KW_Class: return Kind::KW;
  case Id::KW_Use: return Kind::KW;
  case Id::KW_Pass: return Kind::KW;
  case Id::ControlFlow_Break: return Kind::ControlFlow;
  case Id::ControlFlow_Continue: return Kind::ControlFlow;
  case Id::ControlFlow_Return: return Kind::ControlFlow;
  case Id::ControlFlow_Exit: return Kind::ControlFlow;
  case Id::Glob_LBracket: return Kind::Glob;
  case Id::Glob_RBracket: return Kind::Glob;
  case Id::Glob_Star: return Kind::Glob;
  case Id::Glob_QMark: return Kind::Glob;
  case Id::Glob_Bang: return Kind::Glob;
  case Id::Glob_Caret: return Kind::Glob;
  case Id::Glob_EscapedChar: return Kind::Glob;
  case Id::Glob_BadBackslash: return Kind::Glob;
  case Id::Glob_CleanLiterals: return Kind::Glob;
  case Id::Glob_OtherLiteral: return Kind::Glob;
  case Id::Format_EscapedPercent: return Kind::Format;
  case Id::Format_Percent: return Kind::Format;
  case Id::Format_Flag: return Kind::Format;
  case Id::Format_Num: return Kind::Format;
  case Id::Format_Dot: return Kind::Format;
  case Id::Format_Type: return Kind::Format;
  case Id::Format_Star: return Kind::Format;
  case Id::Format_Time: return Kind::Format;
  case Id::Format_Zero: return Kind::Format;
  case Id::PS_Subst: return Kind::PS;
  case Id::PS_Octal3: return Kind::PS;
  case Id::PS_LBrace: return Kind::PS;
  case Id::PS_RBrace: return Kind::PS;
  case Id::PS_Literals: return Kind::PS;
  case Id::PS_BadBackslash: return Kind::PS;
  case Id::Range_Int: return Kind::Range;
  case Id::Range_Char: return Kind::Range;
  case Id::Range_Dots: return Kind::Range;
  case Id::Range_Other: return Kind::Range;
  case Id::QSN_LiteralBytes: return Kind::QSN;
  case Id::QSN_SpecialByte: return Kind::QSN;
  case Id::QSN_Begin2: return Kind::QSN;
  case Id::QSN_Begin3: return Kind::QSN;
  case Id::QSN_Begin4: return Kind::QSN;
  case Id::QSN_Cont: return Kind::QSN;
  case Id::BoolUnary_z: return Kind::BoolUnary;
  case Id::BoolUnary_n: return Kind::BoolUnary;
  case Id::BoolUnary_o: return Kind::BoolUnary;
  case Id::BoolUnary_t: return Kind::BoolUnary;
  case Id::BoolUnary_v: return Kind::BoolUnary;
  case Id::BoolUnary_R: return Kind::BoolUnary;
  case Id::BoolUnary_a: return Kind::BoolUnary;
  case Id::BoolUnary_b: return Kind::BoolUnary;
  case Id::BoolUnary_c: return Kind::BoolUnary;
  case Id::BoolUnary_d: return Kind::BoolUnary;
  case Id::BoolUnary_e: return Kind::BoolUnary;
  case Id::BoolUnary_f: return Kind::BoolUnary;
  case Id::BoolUnary_g: return Kind::BoolUnary;
  case Id::BoolUnary_h: return Kind::BoolUnary;
  case Id::BoolUnary_k: return Kind::BoolUnary;
  case Id::BoolUnary_L: return Kind::BoolUnary;
  case Id::BoolUnary_p: return Kind::BoolUnary;
  case Id::BoolUnary_r: return Kind::BoolUnary;
  case Id::BoolUnary_s: return Kind::BoolUnary;
  case Id::BoolUnary_S: return Kind::BoolUnary;
  case Id::BoolUnary_u: return Kind::BoolUnary;
  case Id::BoolUnary_w: return Kind::BoolUnary;
  case Id::BoolUnary_x: return Kind::BoolUnary;
  case Id::BoolUnary_O: return Kind::BoolUnary;
  case Id::BoolUnary_G: return Kind::BoolUnary;
  case Id::BoolUnary_N: return Kind::BoolUnary;
  case Id::BoolBinary_GlobEqual: return Kind::BoolBinary;
  case Id::BoolBinary_GlobDEqual: return Kind::BoolBinary;
  case Id::BoolBinary_GlobNEqual: return Kind::BoolBinary;
  case Id::BoolBinary_EqualTilde: return Kind::BoolBinary;
  case Id::BoolBinary_ef: return Kind::BoolBinary;
  case Id::BoolBinary_nt: return Kind::BoolBinary;
  case Id::BoolBinary_ot: return Kind::BoolBinary;
  case Id::BoolBinary_eq: return Kind::BoolBinary;
  case Id::BoolBinary_ne: return Kind::BoolBinary;
  case Id::BoolBinary_gt: return Kind::BoolBinary;
  case Id::BoolBinary_ge: return Kind::BoolBinary;
  case Id::BoolBinary_lt: return Kind::BoolBinary;
  case Id::BoolBinary_le: return Kind::BoolBinary;
  case Id::BoolBinary_Equal: return Kind::BoolBinary;
  case Id::BoolBinary_DEqual: return Kind::BoolBinary;
  case Id::BoolBinary_NEqual: return Kind::BoolBinary;
  }
}

builtin_t LookupNormalBuiltin(Str* s) {
  if (len(s) == 0) return 0;  // consts.NO_INDEX

  switch (s->data_[0]) {
  case '[':
    if (s->len_ == 1 && memcmp("[", s->data_, 1) == 0) return 17;
    break;
  case '_':
    if (s->len_ == 5 && memcmp("__cat", s->data_, 5) == 0) return 58;
    break;
  case 'a':
    if (s->len_ == 5 && memcmp("alias", s->data_, 5) == 0) return 47;
    if (s->len_ == 6 && memcmp("append", s->data_, 6) == 0) return 51;
    break;
  case 'b':
    if (s->len_ == 2 && memcmp("bg", s->data_, 2) == 0) return 35;
    if (s->len_ == 4 && memcmp("bind", s->data_, 4) == 0) return 49;
    break;
  case 'c':
    if (s->len_ == 2 && memcmp("cd", s->data_, 2) == 0) return 25;
    if (s->len_ == 8 && memcmp("complete", s->data_, 8) == 0) return 37;
    if (s->len_ == 7 && memcmp("compgen", s->data_, 7) == 0) return 38;
    if (s->len_ == 7 && memcmp("compopt", s->data_, 7) == 0) return 39;
    if (s->len_ == 10 && memcmp("compadjust", s->data_, 10) == 0) return 40;
    if (s->len_ == 7 && memcmp("command", s->data_, 7) == 0) return 42;
    break;
  case 'd':
    if (s->len_ == 4 && memcmp("dirs", s->data_, 4) == 0) return 28;
    break;
  case 'e':
    if (s->len_ == 4 && memcmp("echo", s->data_, 4) == 0) return 21;
    break;
  case 'f':
    if (s->len_ == 5 && memcmp("false", s->data_, 5) == 0) return 19;
    if (s->len_ == 2 && memcmp("fg", s->data_, 2) == 0) return 34;
    break;
  case 'g':
    if (s->len_ == 7 && memcmp("getopts", s->data_, 7) == 0) return 41;
    if (s->len_ == 7 && memcmp("getline", s->data_, 7) == 0) return 53;
    break;
  case 'h':
    if (s->len_ == 4 && memcmp("hash", s->data_, 4) == 0) return 44;
    if (s->len_ == 4 && memcmp("help", s->data_, 4) == 0) return 45;
    if (s->len_ == 7 && memcmp("history", s->data_, 7) == 0) return 46;
    break;
  case 'j':
    if (s->len_ == 4 && memcmp("jobs", s->data_, 4) == 0) return 33;
    if (s->len_ == 4 && memcmp("json", s->data_, 4) == 0) return 54;
    break;
  case 'm':
    if (s->len_ == 7 && memcmp("mapfile", s->data_, 7) == 0) return 23;
    break;
  case 'o':
    if (s->len_ == 4 && memcmp("opts", s->data_, 4) == 0) return 57;
    break;
  case 'p':
    if (s->len_ == 6 && memcmp("printf", s->data_, 6) == 0) return 22;
    if (s->len_ == 5 && memcmp("pushd", s->data_, 5) == 0) return 26;
    if (s->len_ == 4 && memcmp("popd", s->data_, 4) == 0) return 27;
    if (s->len_ == 3 && memcmp("pwd", s->data_, 3) == 0) return 29;
    if (s->len_ == 4 && memcmp("push", s->data_, 4) == 0) return 50;
    break;
  case 'r':
    if (s->len_ == 4 && memcmp("read", s->data_, 4) == 0) return 20;
    if (s->len_ == 9 && memcmp("readarray", s->data_, 9) == 0) return 24;
    if (s->len_ == 4 && memcmp("repr", s->data_, 4) == 0) return 55;
    break;
  case 's':
    if (s->len_ == 6 && memcmp("source", s->data_, 6) == 0) return 30;
    if (s->len_ == 5 && memcmp("shopt", s->data_, 5) == 0) return 36;
    break;
  case 't':
    if (s->len_ == 4 && memcmp("test", s->data_, 4) == 0) return 16;
    if (s->len_ == 4 && memcmp("true", s->data_, 4) == 0) return 18;
    if (s->len_ == 4 && memcmp("type", s->data_, 4) == 0) return 43;
    break;
  case 'u':
    if (s->len_ == 5 && memcmp("umask", s->data_, 5) == 0) return 31;
    if (s->len_ == 7 && memcmp("unalias", s->data_, 7) == 0) return 48;
    if (s->len_ == 3 && memcmp("use", s->data_, 3) == 0) return 56;
    break;
  case 'w':
    if (s->len_ == 4 && memcmp("wait", s->data_, 4) == 0) return 32;
    if (s->len_ == 5 && memcmp("write", s->data_, 5) == 0) return 52;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupAssignBuiltin(Str* s) {
  if (len(s) == 0) return 0;  // consts.NO_INDEX

  switch (s->data_[0]) {
  case 'd':
    if (s->len_ == 7 && memcmp("declare", s->data_, 7) == 0) return 13;
    break;
  case 'e':
    if (s->len_ == 6 && memcmp("export", s->data_, 6) == 0) return 15;
    break;
  case 'l':
    if (s->len_ == 5 && memcmp("local", s->data_, 5) == 0) return 12;
    break;
  case 'r':
    if (s->len_ == 8 && memcmp("readonly", s->data_, 8) == 0) return 11;
    break;
  case 't':
    if (s->len_ == 7 && memcmp("typeset", s->data_, 7) == 0) return 14;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupSpecialBuiltin(Str* s) {
  if (len(s) == 0) return 0;  // consts.NO_INDEX

  switch (s->data_[0]) {
  case '.':
    if (s->len_ == 1 && memcmp(".", s->data_, 1) == 0) return 2;
    break;
  case ':':
    if (s->len_ == 1 && memcmp(":", s->data_, 1) == 0) return 1;
    break;
  case 'b':
    if (s->len_ == 7 && memcmp("builtin", s->data_, 7) == 0) return 10;
    break;
  case 'e':
    if (s->len_ == 4 && memcmp("exec", s->data_, 4) == 0) return 3;
    if (s->len_ == 4 && memcmp("eval", s->data_, 4) == 0) return 4;
    break;
  case 's':
    if (s->len_ == 3 && memcmp("set", s->data_, 3) == 0) return 5;
    if (s->len_ == 5 && memcmp("shift", s->data_, 5) == 0) return 6;
    break;
  case 't':
    if (s->len_ == 5 && memcmp("times", s->data_, 5) == 0) return 7;
    if (s->len_ == 4 && memcmp("trap", s->data_, 4) == 0) return 8;
    break;
  case 'u':
    if (s->len_ == 5 && memcmp("unset", s->data_, 5) == 0) return 9;
    break;
  }

  return 0;  // consts.NO_INDEX
}

bool IsControlFlow(Str* s) {
  assert(0);
}
bool IsKeyword(Str* s) {
  assert(0);
}


Str* LookupCharC(Str* c) {
  assert(c->len_ == 1);

  char ch = c->data_[0];

  // TODO-intern: return value
  switch (ch) {
  case '\"':
    return new Str("\"");
    break;
  case '\'':
    return new Str("\'");
    break;
  case '0':
    return new Str("\0");
    break;
  case 'E':
    return new Str("\x1b");
    break;
  case '\\':
    return new Str("\\");
    break;
  case 'a':
    return new Str("\a");
    break;
  case 'b':
    return new Str("\b");
    break;
  case 'e':
    return new Str("\x1b");
    break;
  case 'f':
    return new Str("\f");
    break;
  case 'n':
    return new Str("\n");
    break;
  case 'r':
    return new Str("\r");
    break;
  case 't':
    return new Str("\t");
    break;
  case 'v':
    return new Str("\v");
    break;
  default:
    assert(0);

  }
}
Str* LookupCharPrompt(Str* c) {
  assert(c->len_ == 1);

  char ch = c->data_[0];

  // TODO-intern: return value
  switch (ch) {
  case '\\':
    return new Str("\\");
    break;
  case 'a':
    return new Str("\a");
    break;
  case 'e':
    return new Str("\x1b");
    break;
  case 'n':
    return new Str("\n");
    break;
  case 'r':
    return new Str("\r");
    break;
  default:
    return nullptr;

  }
}
Str* OptionName(option_asdl::option_t opt_num) {
  const char* s;
  switch (opt_num) {

  case 1:
    s = "errexit";
    break;
  case 2:
    s = "nounset";
    break;
  case 3:
    s = "hashall";
    break;
  case 4:
    s = "pipefail";
    break;
  case 5:
    s = "noexec";
    break;
  case 6:
    s = "xtrace";
    break;
  case 7:
    s = "verbose";
    break;
  case 8:
    s = "noglob";
    break;
  case 9:
    s = "noclobber";
    break;
  case 10:
    s = "posix";
    break;
  case 11:
    s = "vi";
    break;
  case 12:
    s = "emacs";
    break;
  default:
    assert(0);
  }
  return new Str(s);  // TODO-intern
}

int _IFS_EDGE[8][6] = { 
  {        -1,         -1,         -1,         -1,         -1,         -1 },
  {        -1,         -1,         -1,         -1,         -1,         -1 },
  {        -1,  (1<<16)|5,  (4<<16)|3,  (6<<16)|5,  (7<<16)|5,  (8<<16)|5 },
  {        -1,  (3<<16)|5,  (4<<16)|5,  (6<<16)|2,  (7<<16)|2,  (8<<16)|5 },
  {        -1,  (5<<16)|5,  (4<<16)|3,  (6<<16)|2,  (6<<16)|2,  (8<<16)|2 },
  {        -1,  (5<<16)|5,  (4<<16)|3,  (6<<16)|2,  (7<<16)|2,  (8<<16)|2 },
  {        -1,  (3<<16)|1,  (4<<16)|1,  (6<<16)|5,  (7<<16)|1,  (8<<16)|1 },
  {        -1,  (6<<16)|4,  (6<<16)|4,  (6<<16)|4,  (6<<16)|4,  (8<<16)|4 },

};

// Note: all of these are integers, e.g. state_i, emit_i, char_kind_i
using runtime_asdl::state_t;
using runtime_asdl::emit_t;
using runtime_asdl::char_kind_t;

Tuple2<state_t, emit_t> IfsEdge(state_t state, runtime_asdl::char_kind_t ch) {
  int cell = _IFS_EDGE[state][ch];
  state_t new_state = cell >> 16;
  emit_t emit = cell & 0xFFFF;
  return Tuple2<state_t, emit_t>(new_state, emit);
}

}  // namespace consts

