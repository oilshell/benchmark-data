#include <assert.h>
#include "_gen/frontend/id_kind.asdl.h"

namespace id_kind_asdl {

const char* Id_str(int tag) {
  switch (tag) {
  case Id::Word_Compound:
    return "Id.Word_Compound";
  case Id::Arith_Semi:
    return "Id.Arith_Semi";
  case Id::Arith_Comma:
    return "Id.Arith_Comma";
  case Id::Arith_Plus:
    return "Id.Arith_Plus";
  case Id::Arith_Minus:
    return "Id.Arith_Minus";
  case Id::Arith_Star:
    return "Id.Arith_Star";
  case Id::Arith_Slash:
    return "Id.Arith_Slash";
  case Id::Arith_Percent:
    return "Id.Arith_Percent";
  case Id::Arith_DPlus:
    return "Id.Arith_DPlus";
  case Id::Arith_DMinus:
    return "Id.Arith_DMinus";
  case Id::Arith_DStar:
    return "Id.Arith_DStar";
  case Id::Arith_LParen:
    return "Id.Arith_LParen";
  case Id::Arith_RParen:
    return "Id.Arith_RParen";
  case Id::Arith_LBracket:
    return "Id.Arith_LBracket";
  case Id::Arith_RBracket:
    return "Id.Arith_RBracket";
  case Id::Arith_RBrace:
    return "Id.Arith_RBrace";
  case Id::Arith_QMark:
    return "Id.Arith_QMark";
  case Id::Arith_Colon:
    return "Id.Arith_Colon";
  case Id::Arith_LessEqual:
    return "Id.Arith_LessEqual";
  case Id::Arith_Less:
    return "Id.Arith_Less";
  case Id::Arith_GreatEqual:
    return "Id.Arith_GreatEqual";
  case Id::Arith_Great:
    return "Id.Arith_Great";
  case Id::Arith_DEqual:
    return "Id.Arith_DEqual";
  case Id::Arith_NEqual:
    return "Id.Arith_NEqual";
  case Id::Arith_DAmp:
    return "Id.Arith_DAmp";
  case Id::Arith_DPipe:
    return "Id.Arith_DPipe";
  case Id::Arith_Bang:
    return "Id.Arith_Bang";
  case Id::Arith_DGreat:
    return "Id.Arith_DGreat";
  case Id::Arith_DLess:
    return "Id.Arith_DLess";
  case Id::Arith_Amp:
    return "Id.Arith_Amp";
  case Id::Arith_Pipe:
    return "Id.Arith_Pipe";
  case Id::Arith_Caret:
    return "Id.Arith_Caret";
  case Id::Arith_Tilde:
    return "Id.Arith_Tilde";
  case Id::Arith_Equal:
    return "Id.Arith_Equal";
  case Id::Arith_PlusEqual:
    return "Id.Arith_PlusEqual";
  case Id::Arith_MinusEqual:
    return "Id.Arith_MinusEqual";
  case Id::Arith_StarEqual:
    return "Id.Arith_StarEqual";
  case Id::Arith_SlashEqual:
    return "Id.Arith_SlashEqual";
  case Id::Arith_PercentEqual:
    return "Id.Arith_PercentEqual";
  case Id::Arith_DGreatEqual:
    return "Id.Arith_DGreatEqual";
  case Id::Arith_DLessEqual:
    return "Id.Arith_DLessEqual";
  case Id::Arith_AmpEqual:
    return "Id.Arith_AmpEqual";
  case Id::Arith_PipeEqual:
    return "Id.Arith_PipeEqual";
  case Id::Arith_CaretEqual:
    return "Id.Arith_CaretEqual";
  case Id::Eof_Real:
    return "Id.Eof_Real";
  case Id::Eof_RParen:
    return "Id.Eof_RParen";
  case Id::Eof_Backtick:
    return "Id.Eof_Backtick";
  case Id::Undefined_Tok:
    return "Id.Undefined_Tok";
  case Id::Unknown_Tok:
    return "Id.Unknown_Tok";
  case Id::Unknown_Backslash:
    return "Id.Unknown_Backslash";
  case Id::Unknown_DEqual:
    return "Id.Unknown_DEqual";
  case Id::Eol_Tok:
    return "Id.Eol_Tok";
  case Id::Ignored_LineCont:
    return "Id.Ignored_LineCont";
  case Id::Ignored_Space:
    return "Id.Ignored_Space";
  case Id::Ignored_Comment:
    return "Id.Ignored_Comment";
  case Id::WS_Space:
    return "Id.WS_Space";
  case Id::Lit_Chars:
    return "Id.Lit_Chars";
  case Id::Lit_VarLike:
    return "Id.Lit_VarLike";
  case Id::Lit_ArrayLhsOpen:
    return "Id.Lit_ArrayLhsOpen";
  case Id::Lit_ArrayLhsClose:
    return "Id.Lit_ArrayLhsClose";
  case Id::Lit_Splice:
    return "Id.Lit_Splice";
  case Id::Lit_AtLBraceDot:
    return "Id.Lit_AtLBraceDot";
  case Id::Lit_Other:
    return "Id.Lit_Other";
  case Id::Lit_EscapedChar:
    return "Id.Lit_EscapedChar";
  case Id::Lit_RegexMeta:
    return "Id.Lit_RegexMeta";
  case Id::Lit_LBracket:
    return "Id.Lit_LBracket";
  case Id::Lit_RBracket:
    return "Id.Lit_RBracket";
  case Id::Lit_Star:
    return "Id.Lit_Star";
  case Id::Lit_QMark:
    return "Id.Lit_QMark";
  case Id::Lit_LBrace:
    return "Id.Lit_LBrace";
  case Id::Lit_RBrace:
    return "Id.Lit_RBrace";
  case Id::Lit_Comma:
    return "Id.Lit_Comma";
  case Id::Lit_Equals:
    return "Id.Lit_Equals";
  case Id::Lit_Underscore:
    return "Id.Lit_Underscore";
  case Id::Lit_Dollar:
    return "Id.Lit_Dollar";
  case Id::Lit_DRightBracket:
    return "Id.Lit_DRightBracket";
  case Id::Lit_TildeLike:
    return "Id.Lit_TildeLike";
  case Id::Lit_Pound:
    return "Id.Lit_Pound";
  case Id::Lit_TPound:
    return "Id.Lit_TPound";
  case Id::Lit_TDot:
    return "Id.Lit_TDot";
  case Id::Lit_Slash:
    return "Id.Lit_Slash";
  case Id::Lit_Percent:
    return "Id.Lit_Percent";
  case Id::Lit_Colon:
    return "Id.Lit_Colon";
  case Id::Lit_Digits:
    return "Id.Lit_Digits";
  case Id::Lit_At:
    return "Id.Lit_At";
  case Id::Lit_ArithVarLike:
    return "Id.Lit_ArithVarLike";
  case Id::Lit_BadBackslash:
    return "Id.Lit_BadBackslash";
  case Id::Lit_CompDummy:
    return "Id.Lit_CompDummy";
  case Id::Backtick_Right:
    return "Id.Backtick_Right";
  case Id::Backtick_Quoted:
    return "Id.Backtick_Quoted";
  case Id::Backtick_DoubleQuote:
    return "Id.Backtick_DoubleQuote";
  case Id::Backtick_Other:
    return "Id.Backtick_Other";
  case Id::History_Op:
    return "Id.History_Op";
  case Id::History_Num:
    return "Id.History_Num";
  case Id::History_Search:
    return "Id.History_Search";
  case Id::History_Other:
    return "Id.History_Other";
  case Id::Op_Newline:
    return "Id.Op_Newline";
  case Id::Op_Amp:
    return "Id.Op_Amp";
  case Id::Op_Pipe:
    return "Id.Op_Pipe";
  case Id::Op_PipeAmp:
    return "Id.Op_PipeAmp";
  case Id::Op_DAmp:
    return "Id.Op_DAmp";
  case Id::Op_DPipe:
    return "Id.Op_DPipe";
  case Id::Op_Semi:
    return "Id.Op_Semi";
  case Id::Op_DSemi:
    return "Id.Op_DSemi";
  case Id::Op_LParen:
    return "Id.Op_LParen";
  case Id::Op_RParen:
    return "Id.Op_RParen";
  case Id::Op_DLeftParen:
    return "Id.Op_DLeftParen";
  case Id::Op_DRightParen:
    return "Id.Op_DRightParen";
  case Id::Op_Less:
    return "Id.Op_Less";
  case Id::Op_Great:
    return "Id.Op_Great";
  case Id::Op_Bang:
    return "Id.Op_Bang";
  case Id::Op_LBracket:
    return "Id.Op_LBracket";
  case Id::Op_RBracket:
    return "Id.Op_RBracket";
  case Id::Op_LBrace:
    return "Id.Op_LBrace";
  case Id::Op_RBrace:
    return "Id.Op_RBrace";
  case Id::Expr_Reserved:
    return "Id.Expr_Reserved";
  case Id::Expr_Symbol:
    return "Id.Expr_Symbol";
  case Id::Expr_Name:
    return "Id.Expr_Name";
  case Id::Expr_DecInt:
    return "Id.Expr_DecInt";
  case Id::Expr_BinInt:
    return "Id.Expr_BinInt";
  case Id::Expr_OctInt:
    return "Id.Expr_OctInt";
  case Id::Expr_HexInt:
    return "Id.Expr_HexInt";
  case Id::Expr_Float:
    return "Id.Expr_Float";
  case Id::Expr_Bang:
    return "Id.Expr_Bang";
  case Id::Expr_Dot:
    return "Id.Expr_Dot";
  case Id::Expr_DColon:
    return "Id.Expr_DColon";
  case Id::Expr_RArrow:
    return "Id.Expr_RArrow";
  case Id::Expr_RDArrow:
    return "Id.Expr_RDArrow";
  case Id::Expr_DSlash:
    return "Id.Expr_DSlash";
  case Id::Expr_TEqual:
    return "Id.Expr_TEqual";
  case Id::Expr_NotDEqual:
    return "Id.Expr_NotDEqual";
  case Id::Expr_TildeDEqual:
    return "Id.Expr_TildeDEqual";
  case Id::Expr_At:
    return "Id.Expr_At";
  case Id::Expr_DoubleAt:
    return "Id.Expr_DoubleAt";
  case Id::Expr_Ellipsis:
    return "Id.Expr_Ellipsis";
  case Id::Expr_Dollar:
    return "Id.Expr_Dollar";
  case Id::Expr_NotTilde:
    return "Id.Expr_NotTilde";
  case Id::Expr_DTilde:
    return "Id.Expr_DTilde";
  case Id::Expr_NotDTilde:
    return "Id.Expr_NotDTilde";
  case Id::Expr_CastedDummy:
    return "Id.Expr_CastedDummy";
  case Id::Expr_Null:
    return "Id.Expr_Null";
  case Id::Expr_True:
    return "Id.Expr_True";
  case Id::Expr_False:
    return "Id.Expr_False";
  case Id::Expr_And:
    return "Id.Expr_And";
  case Id::Expr_Or:
    return "Id.Expr_Or";
  case Id::Expr_Not:
    return "Id.Expr_Not";
  case Id::Expr_For:
    return "Id.Expr_For";
  case Id::Expr_Is:
    return "Id.Expr_Is";
  case Id::Expr_In:
    return "Id.Expr_In";
  case Id::Expr_If:
    return "Id.Expr_If";
  case Id::Expr_Else:
    return "Id.Expr_Else";
  case Id::Expr_Func:
    return "Id.Expr_Func";
  case Id::Expr_As:
    return "Id.Expr_As";
  case Id::Expr_Virtual:
    return "Id.Expr_Virtual";
  case Id::Expr_Override:
    return "Id.Expr_Override";
  case Id::Expr_Abstract:
    return "Id.Expr_Abstract";
  case Id::Expr_While:
    return "Id.Expr_While";
  case Id::Expr_Break:
    return "Id.Expr_Break";
  case Id::Expr_Continue:
    return "Id.Expr_Continue";
  case Id::Expr_Return:
    return "Id.Expr_Return";
  case Id::Char_OneChar:
    return "Id.Char_OneChar";
  case Id::Char_Stop:
    return "Id.Char_Stop";
  case Id::Char_Hex:
    return "Id.Char_Hex";
  case Id::Char_Octal3:
    return "Id.Char_Octal3";
  case Id::Char_Octal4:
    return "Id.Char_Octal4";
  case Id::Char_Unicode4:
    return "Id.Char_Unicode4";
  case Id::Char_Unicode8:
    return "Id.Char_Unicode8";
  case Id::Char_UBraced:
    return "Id.Char_UBraced";
  case Id::Char_Pound:
    return "Id.Char_Pound";
  case Id::Char_Literals:
    return "Id.Char_Literals";
  case Id::Re_Start:
    return "Id.Re_Start";
  case Id::Re_End:
    return "Id.Re_End";
  case Id::Re_Dot:
    return "Id.Re_Dot";
  case Id::Redir_Less:
    return "Id.Redir_Less";
  case Id::Redir_Great:
    return "Id.Redir_Great";
  case Id::Redir_DLess:
    return "Id.Redir_DLess";
  case Id::Redir_TLess:
    return "Id.Redir_TLess";
  case Id::Redir_DGreat:
    return "Id.Redir_DGreat";
  case Id::Redir_GreatAnd:
    return "Id.Redir_GreatAnd";
  case Id::Redir_LessAnd:
    return "Id.Redir_LessAnd";
  case Id::Redir_DLessDash:
    return "Id.Redir_DLessDash";
  case Id::Redir_LessGreat:
    return "Id.Redir_LessGreat";
  case Id::Redir_Clobber:
    return "Id.Redir_Clobber";
  case Id::Redir_AndGreat:
    return "Id.Redir_AndGreat";
  case Id::Redir_AndDGreat:
    return "Id.Redir_AndDGreat";
  case Id::Redir_GreatPlus:
    return "Id.Redir_GreatPlus";
  case Id::Redir_DGreatPlus:
    return "Id.Redir_DGreatPlus";
  case Id::Left_DoubleQuote:
    return "Id.Left_DoubleQuote";
  case Id::Left_SingleQuote:
    return "Id.Left_SingleQuote";
  case Id::Left_RSingleQuote:
    return "Id.Left_RSingleQuote";
  case Id::Left_DollarSingleQuote:
    return "Id.Left_DollarSingleQuote";
  case Id::Left_TDoubleQuote:
    return "Id.Left_TDoubleQuote";
  case Id::Left_TSingleQuote:
    return "Id.Left_TSingleQuote";
  case Id::Left_RTSingleQuote:
    return "Id.Left_RTSingleQuote";
  case Id::Left_DollarTSingleQuote:
    return "Id.Left_DollarTSingleQuote";
  case Id::Left_Backtick:
    return "Id.Left_Backtick";
  case Id::Left_DollarParen:
    return "Id.Left_DollarParen";
  case Id::Left_DollarBrace:
    return "Id.Left_DollarBrace";
  case Id::Left_DollarDParen:
    return "Id.Left_DollarDParen";
  case Id::Left_DollarBracket:
    return "Id.Left_DollarBracket";
  case Id::Left_DollarDoubleQuote:
    return "Id.Left_DollarDoubleQuote";
  case Id::Left_ProcSubIn:
    return "Id.Left_ProcSubIn";
  case Id::Left_ProcSubOut:
    return "Id.Left_ProcSubOut";
  case Id::Left_AtParen:
    return "Id.Left_AtParen";
  case Id::Left_CaretParen:
    return "Id.Left_CaretParen";
  case Id::Left_CaretBracket:
    return "Id.Left_CaretBracket";
  case Id::Left_CaretBrace:
    return "Id.Left_CaretBrace";
  case Id::Left_PercentParen:
    return "Id.Left_PercentParen";
  case Id::Right_DoubleQuote:
    return "Id.Right_DoubleQuote";
  case Id::Right_SingleQuote:
    return "Id.Right_SingleQuote";
  case Id::Right_Backtick:
    return "Id.Right_Backtick";
  case Id::Right_DollarBrace:
    return "Id.Right_DollarBrace";
  case Id::Right_DollarDParen:
    return "Id.Right_DollarDParen";
  case Id::Right_DollarDoubleQuote:
    return "Id.Right_DollarDoubleQuote";
  case Id::Right_DollarSingleQuote:
    return "Id.Right_DollarSingleQuote";
  case Id::Right_Subshell:
    return "Id.Right_Subshell";
  case Id::Right_ShFunction:
    return "Id.Right_ShFunction";
  case Id::Right_CasePat:
    return "Id.Right_CasePat";
  case Id::Right_ShArrayLiteral:
    return "Id.Right_ShArrayLiteral";
  case Id::Right_ExtGlob:
    return "Id.Right_ExtGlob";
  case Id::Right_BlockLiteral:
    return "Id.Right_BlockLiteral";
  case Id::ExtGlob_Comma:
    return "Id.ExtGlob_Comma";
  case Id::ExtGlob_At:
    return "Id.ExtGlob_At";
  case Id::ExtGlob_Star:
    return "Id.ExtGlob_Star";
  case Id::ExtGlob_Plus:
    return "Id.ExtGlob_Plus";
  case Id::ExtGlob_QMark:
    return "Id.ExtGlob_QMark";
  case Id::ExtGlob_Bang:
    return "Id.ExtGlob_Bang";
  case Id::VSub_DollarName:
    return "Id.VSub_DollarName";
  case Id::VSub_Name:
    return "Id.VSub_Name";
  case Id::VSub_Number:
    return "Id.VSub_Number";
  case Id::VSub_Bang:
    return "Id.VSub_Bang";
  case Id::VSub_At:
    return "Id.VSub_At";
  case Id::VSub_Pound:
    return "Id.VSub_Pound";
  case Id::VSub_Dollar:
    return "Id.VSub_Dollar";
  case Id::VSub_Star:
    return "Id.VSub_Star";
  case Id::VSub_Hyphen:
    return "Id.VSub_Hyphen";
  case Id::VSub_QMark:
    return "Id.VSub_QMark";
  case Id::VSub_Dot:
    return "Id.VSub_Dot";
  case Id::VTest_ColonHyphen:
    return "Id.VTest_ColonHyphen";
  case Id::VTest_Hyphen:
    return "Id.VTest_Hyphen";
  case Id::VTest_ColonEquals:
    return "Id.VTest_ColonEquals";
  case Id::VTest_Equals:
    return "Id.VTest_Equals";
  case Id::VTest_ColonQMark:
    return "Id.VTest_ColonQMark";
  case Id::VTest_QMark:
    return "Id.VTest_QMark";
  case Id::VTest_ColonPlus:
    return "Id.VTest_ColonPlus";
  case Id::VTest_Plus:
    return "Id.VTest_Plus";
  case Id::VOp0_Q:
    return "Id.VOp0_Q";
  case Id::VOp0_E:
    return "Id.VOp0_E";
  case Id::VOp0_P:
    return "Id.VOp0_P";
  case Id::VOp0_A:
    return "Id.VOp0_A";
  case Id::VOp0_a:
    return "Id.VOp0_a";
  case Id::VOp1_Percent:
    return "Id.VOp1_Percent";
  case Id::VOp1_DPercent:
    return "Id.VOp1_DPercent";
  case Id::VOp1_Pound:
    return "Id.VOp1_Pound";
  case Id::VOp1_DPound:
    return "Id.VOp1_DPound";
  case Id::VOp1_Caret:
    return "Id.VOp1_Caret";
  case Id::VOp1_DCaret:
    return "Id.VOp1_DCaret";
  case Id::VOp1_Comma:
    return "Id.VOp1_Comma";
  case Id::VOp1_DComma:
    return "Id.VOp1_DComma";
  case Id::VOpOil_Pipe:
    return "Id.VOpOil_Pipe";
  case Id::VOpOil_Space:
    return "Id.VOpOil_Space";
  case Id::VOp2_Slash:
    return "Id.VOp2_Slash";
  case Id::VOp2_Colon:
    return "Id.VOp2_Colon";
  case Id::VOp2_LBracket:
    return "Id.VOp2_LBracket";
  case Id::VOp2_RBracket:
    return "Id.VOp2_RBracket";
  case Id::VOp3_At:
    return "Id.VOp3_At";
  case Id::VOp3_Star:
    return "Id.VOp3_Star";
  case Id::Node_PostDPlus:
    return "Id.Node_PostDPlus";
  case Id::Node_PostDMinus:
    return "Id.Node_PostDMinus";
  case Id::Node_UnaryPlus:
    return "Id.Node_UnaryPlus";
  case Id::Node_UnaryMinus:
    return "Id.Node_UnaryMinus";
  case Id::Node_NotIn:
    return "Id.Node_NotIn";
  case Id::Node_IsNot:
    return "Id.Node_IsNot";
  case Id::KW_DLeftBracket:
    return "Id.KW_DLeftBracket";
  case Id::KW_Bang:
    return "Id.KW_Bang";
  case Id::KW_For:
    return "Id.KW_For";
  case Id::KW_While:
    return "Id.KW_While";
  case Id::KW_Until:
    return "Id.KW_Until";
  case Id::KW_Do:
    return "Id.KW_Do";
  case Id::KW_Done:
    return "Id.KW_Done";
  case Id::KW_In:
    return "Id.KW_In";
  case Id::KW_Case:
    return "Id.KW_Case";
  case Id::KW_Esac:
    return "Id.KW_Esac";
  case Id::KW_If:
    return "Id.KW_If";
  case Id::KW_Fi:
    return "Id.KW_Fi";
  case Id::KW_Then:
    return "Id.KW_Then";
  case Id::KW_Else:
    return "Id.KW_Else";
  case Id::KW_Elif:
    return "Id.KW_Elif";
  case Id::KW_Function:
    return "Id.KW_Function";
  case Id::KW_Time:
    return "Id.KW_Time";
  case Id::KW_Const:
    return "Id.KW_Const";
  case Id::KW_Var:
    return "Id.KW_Var";
  case Id::KW_SetVar:
    return "Id.KW_SetVar";
  case Id::KW_SetRef:
    return "Id.KW_SetRef";
  case Id::KW_SetGlobal:
    return "Id.KW_SetGlobal";
  case Id::KW_Proc:
    return "Id.KW_Proc";
  case Id::KW_Func:
    return "Id.KW_Func";
  case Id::KW_Data:
    return "Id.KW_Data";
  case Id::KW_Enum:
    return "Id.KW_Enum";
  case Id::KW_Class:
    return "Id.KW_Class";
  case Id::KW_Import:
    return "Id.KW_Import";
  case Id::ControlFlow_Break:
    return "Id.ControlFlow_Break";
  case Id::ControlFlow_Continue:
    return "Id.ControlFlow_Continue";
  case Id::ControlFlow_Return:
    return "Id.ControlFlow_Return";
  case Id::ControlFlow_Exit:
    return "Id.ControlFlow_Exit";
  case Id::LookAhead_FuncParens:
    return "Id.LookAhead_FuncParens";
  case Id::Glob_LBracket:
    return "Id.Glob_LBracket";
  case Id::Glob_RBracket:
    return "Id.Glob_RBracket";
  case Id::Glob_Star:
    return "Id.Glob_Star";
  case Id::Glob_QMark:
    return "Id.Glob_QMark";
  case Id::Glob_Bang:
    return "Id.Glob_Bang";
  case Id::Glob_Caret:
    return "Id.Glob_Caret";
  case Id::Glob_EscapedChar:
    return "Id.Glob_EscapedChar";
  case Id::Glob_BadBackslash:
    return "Id.Glob_BadBackslash";
  case Id::Glob_CleanLiterals:
    return "Id.Glob_CleanLiterals";
  case Id::Glob_OtherLiteral:
    return "Id.Glob_OtherLiteral";
  case Id::Format_EscapedPercent:
    return "Id.Format_EscapedPercent";
  case Id::Format_Percent:
    return "Id.Format_Percent";
  case Id::Format_Flag:
    return "Id.Format_Flag";
  case Id::Format_Num:
    return "Id.Format_Num";
  case Id::Format_Dot:
    return "Id.Format_Dot";
  case Id::Format_Type:
    return "Id.Format_Type";
  case Id::Format_Star:
    return "Id.Format_Star";
  case Id::Format_Time:
    return "Id.Format_Time";
  case Id::Format_Zero:
    return "Id.Format_Zero";
  case Id::PS_Subst:
    return "Id.PS_Subst";
  case Id::PS_Octal3:
    return "Id.PS_Octal3";
  case Id::PS_LBrace:
    return "Id.PS_LBrace";
  case Id::PS_RBrace:
    return "Id.PS_RBrace";
  case Id::PS_Literals:
    return "Id.PS_Literals";
  case Id::PS_BadBackslash:
    return "Id.PS_BadBackslash";
  case Id::Range_Int:
    return "Id.Range_Int";
  case Id::Range_Char:
    return "Id.Range_Char";
  case Id::Range_Dots:
    return "Id.Range_Dots";
  case Id::Range_Other:
    return "Id.Range_Other";
  case Id::QSN_LiteralBytes:
    return "Id.QSN_LiteralBytes";
  case Id::QSN_SpecialByte:
    return "Id.QSN_SpecialByte";
  case Id::QSN_Begin2:
    return "Id.QSN_Begin2";
  case Id::QSN_Begin3:
    return "Id.QSN_Begin3";
  case Id::QSN_Begin4:
    return "Id.QSN_Begin4";
  case Id::QSN_Cont:
    return "Id.QSN_Cont";
  case Id::BoolUnary_z:
    return "Id.BoolUnary_z";
  case Id::BoolUnary_n:
    return "Id.BoolUnary_n";
  case Id::BoolUnary_o:
    return "Id.BoolUnary_o";
  case Id::BoolUnary_t:
    return "Id.BoolUnary_t";
  case Id::BoolUnary_v:
    return "Id.BoolUnary_v";
  case Id::BoolUnary_R:
    return "Id.BoolUnary_R";
  case Id::BoolUnary_a:
    return "Id.BoolUnary_a";
  case Id::BoolUnary_b:
    return "Id.BoolUnary_b";
  case Id::BoolUnary_c:
    return "Id.BoolUnary_c";
  case Id::BoolUnary_d:
    return "Id.BoolUnary_d";
  case Id::BoolUnary_e:
    return "Id.BoolUnary_e";
  case Id::BoolUnary_f:
    return "Id.BoolUnary_f";
  case Id::BoolUnary_g:
    return "Id.BoolUnary_g";
  case Id::BoolUnary_h:
    return "Id.BoolUnary_h";
  case Id::BoolUnary_k:
    return "Id.BoolUnary_k";
  case Id::BoolUnary_L:
    return "Id.BoolUnary_L";
  case Id::BoolUnary_p:
    return "Id.BoolUnary_p";
  case Id::BoolUnary_r:
    return "Id.BoolUnary_r";
  case Id::BoolUnary_s:
    return "Id.BoolUnary_s";
  case Id::BoolUnary_S:
    return "Id.BoolUnary_S";
  case Id::BoolUnary_u:
    return "Id.BoolUnary_u";
  case Id::BoolUnary_w:
    return "Id.BoolUnary_w";
  case Id::BoolUnary_x:
    return "Id.BoolUnary_x";
  case Id::BoolUnary_O:
    return "Id.BoolUnary_O";
  case Id::BoolUnary_G:
    return "Id.BoolUnary_G";
  case Id::BoolUnary_N:
    return "Id.BoolUnary_N";
  case Id::BoolBinary_GlobEqual:
    return "Id.BoolBinary_GlobEqual";
  case Id::BoolBinary_GlobDEqual:
    return "Id.BoolBinary_GlobDEqual";
  case Id::BoolBinary_GlobNEqual:
    return "Id.BoolBinary_GlobNEqual";
  case Id::BoolBinary_EqualTilde:
    return "Id.BoolBinary_EqualTilde";
  case Id::BoolBinary_ef:
    return "Id.BoolBinary_ef";
  case Id::BoolBinary_nt:
    return "Id.BoolBinary_nt";
  case Id::BoolBinary_ot:
    return "Id.BoolBinary_ot";
  case Id::BoolBinary_eq:
    return "Id.BoolBinary_eq";
  case Id::BoolBinary_ne:
    return "Id.BoolBinary_ne";
  case Id::BoolBinary_gt:
    return "Id.BoolBinary_gt";
  case Id::BoolBinary_ge:
    return "Id.BoolBinary_ge";
  case Id::BoolBinary_lt:
    return "Id.BoolBinary_lt";
  case Id::BoolBinary_le:
    return "Id.BoolBinary_le";
  case Id::BoolBinary_Equal:
    return "Id.BoolBinary_Equal";
  case Id::BoolBinary_DEqual:
    return "Id.BoolBinary_DEqual";
  case Id::BoolBinary_NEqual:
    return "Id.BoolBinary_NEqual";
  default:
    assert(0);
  }
}
const char* Kind_str(Kind tag) {
  switch (tag) {
  case Kind::Word:
    return "Kind.Word";
  case Kind::Arith:
    return "Kind.Arith";
  case Kind::Eof:
    return "Kind.Eof";
  case Kind::Undefined:
    return "Kind.Undefined";
  case Kind::Unknown:
    return "Kind.Unknown";
  case Kind::Eol:
    return "Kind.Eol";
  case Kind::Ignored:
    return "Kind.Ignored";
  case Kind::WS:
    return "Kind.WS";
  case Kind::Lit:
    return "Kind.Lit";
  case Kind::Backtick:
    return "Kind.Backtick";
  case Kind::History:
    return "Kind.History";
  case Kind::Op:
    return "Kind.Op";
  case Kind::Expr:
    return "Kind.Expr";
  case Kind::Char:
    return "Kind.Char";
  case Kind::Re:
    return "Kind.Re";
  case Kind::Redir:
    return "Kind.Redir";
  case Kind::Left:
    return "Kind.Left";
  case Kind::Right:
    return "Kind.Right";
  case Kind::ExtGlob:
    return "Kind.ExtGlob";
  case Kind::VSub:
    return "Kind.VSub";
  case Kind::VTest:
    return "Kind.VTest";
  case Kind::VOp0:
    return "Kind.VOp0";
  case Kind::VOp1:
    return "Kind.VOp1";
  case Kind::VOpOil:
    return "Kind.VOpOil";
  case Kind::VOp2:
    return "Kind.VOp2";
  case Kind::VOp3:
    return "Kind.VOp3";
  case Kind::Node:
    return "Kind.Node";
  case Kind::KW:
    return "Kind.KW";
  case Kind::ControlFlow:
    return "Kind.ControlFlow";
  case Kind::LookAhead:
    return "Kind.LookAhead";
  case Kind::Glob:
    return "Kind.Glob";
  case Kind::Format:
    return "Kind.Format";
  case Kind::PS:
    return "Kind.PS";
  case Kind::Range:
    return "Kind.Range";
  case Kind::QSN:
    return "Kind.QSN";
  case Kind::BoolUnary:
    return "Kind.BoolUnary";
  case Kind::BoolBinary:
    return "Kind.BoolBinary";
  default:
    assert(0);
  }
}
}  // namespace id_kind_asdl
