#ifndef TYPES_ASDL
#define TYPES_ASDL

#include <cstdint>

#include "mylib.h"  // for Str, List, etc.
#include "hnode_asdl.h"
using hnode_asdl::hnode_t;
namespace types_asdl {


enum class bool_arg_type_e {
  Undefined = 1,
  Path = 2,
  Int = 3,
  Str = 4,
  Other = 5,
};
typedef bool_arg_type_e bool_arg_type_t;

const char* bool_arg_type_str(bool_arg_type_e tag);

enum class redir_arg_type_e {
  Path = 1,
  Desc = 2,
  Here = 3,
};
typedef redir_arg_type_e redir_arg_type_t;

const char* redir_arg_type_str(redir_arg_type_e tag);

enum class lex_mode_e {
  Undefined = 1,
  Comment = 2,
  ShCommand = 3,
  Backtick = 4,
  DBracket = 5,
  SQ_Raw = 6,
  DQ = 7,
  SQ_C = 8,
  Arith = 9,
  ExtGlob = 10,
  VSub_1 = 11,
  VSub_2 = 12,
  VSub_ArgUnquoted = 13,
  VSub_ArgDQ = 14,
  BashRegex = 15,
  BashRegexChars = 16,
  PrintfOuter = 17,
  PrintfPercent = 18,
  Expr = 19,
};
typedef lex_mode_e lex_mode_t;

const char* lex_mode_str(lex_mode_e tag);


}  // namespace types_asdl

#endif  // TYPES_ASDL
