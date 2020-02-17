
#include <assert.h>

#include "asdl_runtime.h"  // generated code uses wrappers here

// Generated code uses these types
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__External;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::field;
using hnode_asdl::color_e;

#include "types_asdl.h"

namespace types_asdl {

const char* bool_arg_type_str(bool_arg_type_e tag) {
  switch (tag) {
  case bool_arg_type_e::Undefined:
    return "bool_arg_type.Undefined";
  case bool_arg_type_e::Path:
    return "bool_arg_type.Path";
  case bool_arg_type_e::Int:
    return "bool_arg_type.Int";
  case bool_arg_type_e::Str:
    return "bool_arg_type.Str";
  case bool_arg_type_e::Other:
    return "bool_arg_type.Other";
  default:
    assert(0);
  }
}
const char* redir_arg_type_str(redir_arg_type_e tag) {
  switch (tag) {
  case redir_arg_type_e::Path:
    return "redir_arg_type.Path";
  case redir_arg_type_e::Desc:
    return "redir_arg_type.Desc";
  case redir_arg_type_e::Here:
    return "redir_arg_type.Here";
  default:
    assert(0);
  }
}
const char* lex_mode_str(lex_mode_e tag) {
  switch (tag) {
  case lex_mode_e::Undefined:
    return "lex_mode.Undefined";
  case lex_mode_e::Comment:
    return "lex_mode.Comment";
  case lex_mode_e::ShCommand:
    return "lex_mode.ShCommand";
  case lex_mode_e::Backtick:
    return "lex_mode.Backtick";
  case lex_mode_e::DBracket:
    return "lex_mode.DBracket";
  case lex_mode_e::SQ_Raw:
    return "lex_mode.SQ_Raw";
  case lex_mode_e::DQ:
    return "lex_mode.DQ";
  case lex_mode_e::SQ_C:
    return "lex_mode.SQ_C";
  case lex_mode_e::Arith:
    return "lex_mode.Arith";
  case lex_mode_e::ExtGlob:
    return "lex_mode.ExtGlob";
  case lex_mode_e::VSub_1:
    return "lex_mode.VSub_1";
  case lex_mode_e::VSub_2:
    return "lex_mode.VSub_2";
  case lex_mode_e::VSub_ArgUnquoted:
    return "lex_mode.VSub_ArgUnquoted";
  case lex_mode_e::VSub_ArgDQ:
    return "lex_mode.VSub_ArgDQ";
  case lex_mode_e::BashRegex:
    return "lex_mode.BashRegex";
  case lex_mode_e::BashRegexChars:
    return "lex_mode.BashRegexChars";
  case lex_mode_e::PrintfOuter:
    return "lex_mode.PrintfOuter";
  case lex_mode_e::PrintfPercent:
    return "lex_mode.PrintfPercent";
  case lex_mode_e::Expr:
    return "lex_mode.Expr";
  default:
    assert(0);
  }
}

}  // namespace types_asdl
