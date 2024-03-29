// arg_types.cc is generated by frontend/flag_gen.py

#include "arg_types.h"
using runtime_asdl::flag_type_e;

namespace arg_types {

const char* arity0_3[] = {"L", "P", nullptr};

DefaultPair_c defaults_3[] = {
    {"L", flag_type_e::Bool, {.b = false}},
    {"P", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_4[] = {"v", nullptr};

DefaultPair_c defaults_4[] = {
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_5[] = {"c", "l", "p", "v", nullptr};

DefaultPair_c defaults_5[] = {
    {"c", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_6[] = {"e", "n", nullptr};

DefaultPair_c defaults_6[] = {
    {"e", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_9[] = {"f", "n", "p", nullptr};

DefaultPair_c defaults_9[] = {
    {"f", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_13[] = {"r", nullptr};

DefaultPair_c defaults_13[] = {
    {"r", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_15[] = {"c", nullptr};

Action_c arity1_15[] = {
    {"d", ActionType_c::SetToInt, "d", nullptr},
    {},
};

DefaultPair_c defaults_15[] = {
    {"c", flag_type_e::Bool, {.b = false}},
    {"d", flag_type_e::Int, {.i = -1}},
    {},
};

const char* arity0_16[] = {"l", "p", nullptr};

Action_c actions_long_16[] = {
    {"debug", ActionType_c::SetToTrue, "debug", nullptr},
    {},
};

DefaultPair_c defaults_16[] = {
    {"debug", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_17[] = {"t", nullptr};

DefaultPair_c defaults_17[] = {
    {"t", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_19[] = {"A", "F", "a", "f", "g", "p", nullptr};

const char* plus_19[] = {"n", "r", "x", nullptr};

DefaultPair_c defaults_19[] = {
    {"A", flag_type_e::Bool, {.b = false}},
    {"F", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Bool, {.b = false}},
    {"f", flag_type_e::Bool, {.b = false}},
    {"g", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Str, {}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"r", flag_type_e::Str, {}},
    {"x", flag_type_e::Str, {}},
    {},
};

Action_c arity1_22[] = {
    {"v", ActionType_c::SetToString, "v", nullptr},
    {},
};

DefaultPair_c defaults_22[] = {
    {"v", flag_type_e::Str, {}},
    {},
};

const char* arity0_25[] = {"L", "P", nullptr};

DefaultPair_c defaults_25[] = {
    {"L", flag_type_e::Bool, {.b = false}},
    {"P", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_26[] = {"Z", "q", "r", "s", nullptr};

Action_c arity1_26[] = {
    {"a", ActionType_c::SetToString, "a", nullptr},
    {"d", ActionType_c::SetToString, "d", nullptr},
    {"n", ActionType_c::SetToInt, "n", nullptr},
    {"p", ActionType_c::SetToString, "p", nullptr},
    {"t", ActionType_c::SetToFloat, "t", nullptr},
    {"u", ActionType_c::SetToInt, "u", nullptr},
    {},
};

Action_c actions_long_26[] = {
    {"all", ActionType_c::SetToTrue, "all", nullptr},
    {"line", ActionType_c::SetToTrue, "line", nullptr},
    {"qsn", ActionType_c::SetToTrue, "q", nullptr},
    {"with-eol", ActionType_c::SetToTrue, "with-eol", nullptr},
    {},
};

DefaultPair_c defaults_26[] = {
    {"Z", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Str, {}},
    {"all", flag_type_e::Bool, {.b = false}},
    {"d", flag_type_e::Str, {}},
    {"line", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Int, {.i = -1}},
    {"p", flag_type_e::Str, {}},
    {"q", flag_type_e::Bool, {.b = false}},
    {"r", flag_type_e::Bool, {.b = false}},
    {"s", flag_type_e::Bool, {.b = false}},
    {"t", flag_type_e::Float, {.f = -1.0}},
    {"u", flag_type_e::Int, {.i = -1}},
    {"with-eol", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_27[] = {"A", "a", "p", nullptr};

DefaultPair_c defaults_27[] = {
    {"A", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c arity1_28[] = {
    {"h", ActionType_c::SetAttachedBool, "h", nullptr},
    {},
};

DefaultPair_c defaults_28[] = {
    {"h", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_29[] = {"o", "p", "q", "s", "u", nullptr};

Action_c actions_long_29[] = {
    {"set", ActionType_c::SetToTrue, "s", nullptr},
    {"unset", ActionType_c::SetToTrue, "u", nullptr},
    {},
};

DefaultPair_c defaults_29[] = {
    {"o", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"q", flag_type_e::Bool, {.b = false}},
    {"s", flag_type_e::Bool, {.b = false}},
    {"u", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c arity1_32[] = {
    {"c", ActionType_c::SetToString, "c", nullptr},
    {"n", ActionType_c::SetAttachedBool, "n", nullptr},
    {},
};

Action_c actions_long_32[] = {
    {"translate", ActionType_c::SetAttachedBool, "translate", nullptr},
    {},
};

DefaultPair_c defaults_32[] = {
    {"c", flag_type_e::Str, {}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"translate", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_33[] = {"l", "p", nullptr};

DefaultPair_c defaults_33[] = {
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c actions_long_34[] = {
    {"assign", ActionType_c::SetToString, "assign", nullptr},
    {},
};

DefaultPair_c defaults_34[] = {
    {"assign", flag_type_e::Str, {}},
    {},
};

const char* arity0_35[] = {"P", "f", "p", "t", nullptr};

DefaultPair_c defaults_35[] = {
    {"P", flag_type_e::Bool, {.b = false}},
    {"f", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"t", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_37[] = {"f", "v", nullptr};

DefaultPair_c defaults_37[] = {
    {"f", flag_type_e::Bool, {.b = false}},
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_38[] = {"n", nullptr};

DefaultPair_c defaults_38[] = {
    {"n", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c arity1_39[] = {
    {"n", ActionType_c::SetAttachedBool, "n", nullptr},
    {},
};

const char* params_0[] = {"raw", "u", "x", nullptr};

Action_c actions_long_39[] = {
    {"end", ActionType_c::SetToString, "end", nullptr},
    {"qsn", ActionType_c::SetAttachedBool, "qsn", nullptr},
    {"sep", ActionType_c::SetToString, "sep", nullptr},
    {"unicode", ActionType_c::SetToString, "unicode", params_0},
    {},
};

DefaultPair_c defaults_39[] = {
    {"end", flag_type_e::Str, {.s = "\n"}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"qsn", flag_type_e::Bool, {.b = false}},
    {"sep", flag_type_e::Str, {.s = "\n"}},
    {"unicode", flag_type_e::Str, {.s = "raw"}},
    {},
};

FlagSpec_c kFlagSpecs[] = {
    { "alias", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "append", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "boolstatus", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "cd", arity0_3, nullptr, nullptr, nullptr, defaults_3 },
    { "command", arity0_4, nullptr, nullptr, nullptr, defaults_4 },
    { "dirs", arity0_5, nullptr, nullptr, nullptr, defaults_5 },
    { "echo", arity0_6, nullptr, nullptr, nullptr, defaults_6 },
    { "eval", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "exec", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "export_", arity0_9, nullptr, nullptr, nullptr, defaults_9 },
    { "fopen", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "fork", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "forkwait", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "hash", arity0_13, nullptr, nullptr, nullptr, defaults_13 },
    { "help", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "history", arity0_15, arity1_15, nullptr, nullptr, defaults_15 },
    { "jobs", arity0_16, nullptr, actions_long_16, nullptr, defaults_16 },
    { "mapfile", arity0_17, nullptr, nullptr, nullptr, defaults_17 },
    { "module", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "new_var", arity0_19, nullptr, nullptr, plus_19, defaults_19 },
    { "popd", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "pp", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "printf", nullptr, arity1_22, nullptr, nullptr, defaults_22 },
    { "push-registers", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "pushd", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "pwd", arity0_25, nullptr, nullptr, nullptr, defaults_25 },
    { "read", arity0_26, arity1_26, actions_long_26, nullptr, defaults_26 },
    { "readonly", arity0_27, nullptr, nullptr, nullptr, defaults_27 },
    { "runproc", nullptr, arity1_28, nullptr, nullptr, defaults_28 },
    { "shopt", arity0_29, nullptr, actions_long_29, nullptr, defaults_29 },
    { "shvar", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "source", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "tea_main", nullptr, arity1_32, actions_long_32, nullptr, defaults_32 },
    { "trap", arity0_33, nullptr, nullptr, nullptr, defaults_33 },
    { "try_", nullptr, nullptr, actions_long_34, nullptr, defaults_34 },
    { "type", arity0_35, nullptr, nullptr, nullptr, defaults_35 },
    { "unalias", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "unset", arity0_37, nullptr, nullptr, nullptr, defaults_37 },
    { "wait", arity0_38, nullptr, nullptr, nullptr, defaults_38 },
    { "write", nullptr, arity1_39, actions_long_39, nullptr, defaults_39 },
    {},
};

Action_c short_0[] = {
    {"C", ActionType_c::SetOption, "noclobber", nullptr},
    {"O", ActionType_c::SetNamedOption_shopt, nullptr, nullptr},
    {"c", ActionType_c::SetToString_q, "c", nullptr},
    {"e", ActionType_c::SetOption, "errexit", nullptr},
    {"f", ActionType_c::SetOption, "noglob", nullptr},
    {"h", ActionType_c::SetOption, "hashall", nullptr},
    {"i", ActionType_c::SetToTrue, "i", nullptr},
    {"l", ActionType_c::SetToTrue, "l", nullptr},
    {"n", ActionType_c::SetOption, "noexec", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, nullptr},
    {"u", ActionType_c::SetOption, "nounset", nullptr},
    {"v", ActionType_c::SetOption, "verbose", nullptr},
    {"x", ActionType_c::SetOption, "xtrace", nullptr},
    {},
};

const char* params_1[] = {"abbrev-html", "abbrev-text", "html", "none", "oheap", "text", nullptr};

const char* params_2[] = {"minimal", "nice", nullptr};

Action_c long_0[] = {
    {"ast-format", ActionType_c::SetToString, "ast-format", params_1},
    {"completion-display", ActionType_c::SetToString, "completion-display", params_2},
    {"debug-file", ActionType_c::SetToString, "debug-file", nullptr},
    {"headless", ActionType_c::SetToTrue, "headless", nullptr},
    {"help", ActionType_c::SetToTrue, "help", nullptr},
    {"location-start-line", ActionType_c::SetToInt, "location-start-line", nullptr},
    {"location-str", ActionType_c::SetToString, "location-str", nullptr},
    {"login", ActionType_c::SetToTrue, "login", nullptr},
    {"one-pass-parse", ActionType_c::SetToTrue, "one-pass-parse", nullptr},
    {"parser-mem-dump", ActionType_c::SetToString, "parser-mem-dump", nullptr},
    {"print-status", ActionType_c::SetToTrue, "print-status", nullptr},
    {"rcfile", ActionType_c::SetToString, "rcfile", nullptr},
    {"runtime-mem-dump", ActionType_c::SetToString, "runtime-mem-dump", nullptr},
    {"version", ActionType_c::SetToTrue, "version", nullptr},
    {"xtrace-to-debug-file", ActionType_c::SetToTrue, "xtrace-to-debug-file", nullptr},
    {},
};

const char* plus_0[] = {"C", "O", "e", "f", "h", "n", "o", "u", "v", "x", nullptr};

DefaultPair_c defaults_0[] = {
    {"ast_format", flag_type_e::Str, {.s = "abbrev-text"}},
    {"c", flag_type_e::Str, {}},
    {"completion_display", flag_type_e::Str, {.s = "nice"}},
    {"debug_file", flag_type_e::Str, {}},
    {"headless", flag_type_e::Bool, {.b = false}},
    {"help", flag_type_e::Bool, {.b = false}},
    {"i", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"location_start_line", flag_type_e::Int, {.i = -1}},
    {"location_str", flag_type_e::Str, {}},
    {"login", flag_type_e::Bool, {.b = false}},
    {"one_pass_parse", flag_type_e::Bool, {.b = false}},
    {"parser_mem_dump", flag_type_e::Str, {}},
    {"print_status", flag_type_e::Bool, {.b = false}},
    {"rcfile", flag_type_e::Str, {}},
    {"runtime_mem_dump", flag_type_e::Str, {}},
    {"version", flag_type_e::Bool, {.b = false}},
    {"xtrace_to_debug_file", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c short_1[] = {
    {"C", ActionType_c::SetOption, "noclobber", nullptr},
    {"O", ActionType_c::SetNamedOption_shopt, nullptr, nullptr},
    {"e", ActionType_c::SetOption, "errexit", nullptr},
    {"f", ActionType_c::SetOption, "noglob", nullptr},
    {"h", ActionType_c::SetOption, "hashall", nullptr},
    {"n", ActionType_c::SetOption, "noexec", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, nullptr},
    {"u", ActionType_c::SetOption, "nounset", nullptr},
    {"v", ActionType_c::SetOption, "verbose", nullptr},
    {"x", ActionType_c::SetOption, "xtrace", nullptr},
    {},
};

const char* plus_1[] = {"C", "O", "e", "f", "h", "n", "o", "u", "v", "x", nullptr};

FlagSpecAndMore_c kFlagSpecsAndMore[] = {
    { "main", short_0, long_0, plus_0, defaults_0 },
    { "set", short_1, nullptr, plus_1, nullptr },
    {},
};
}  // namespace arg_types
