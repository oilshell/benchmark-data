#ifndef LOOKUP_H
#define LOOKUP_H

#include "mylib.h"
#include "id_kind_asdl.h"
#include "option_asdl.h"
#include "runtime_asdl.h"
#include "types_asdl.h"

namespace consts {

extern List<int>* STRICT_ALL;
extern List<int>* OIL_BASIC;
extern List<int>* OIL_ALL;
extern List<int>* DEFAULT_TRUE;
extern List<Str*>* SET_OPTION_NAMES;
extern List<Str*>* SHOPT_OPTION_NAMES;
extern List<Str*>* VISIBLE_SHOPT_NAMES;
extern List<Str*>* PARSE_OPTION_NAMES;

extern int NO_INDEX;

int RedirDefaultFd(id_kind_asdl::Id_t id);
types_asdl::redir_arg_type_t RedirArgType(id_kind_asdl::Id_t id);
types_asdl::bool_arg_type_t BoolArgType(id_kind_asdl::Id_t id);
id_kind_asdl::Kind GetKind(id_kind_asdl::Id_t id);
option_asdl::builtin_t LookupNormalBuiltin(Str* s);
option_asdl::builtin_t LookupAssignBuiltin(Str* s);
option_asdl::builtin_t LookupSpecialBuiltin(Str* s);
Tuple2<runtime_asdl::state_t, runtime_asdl::emit_t> IfsEdge(runtime_asdl::state_t state, runtime_asdl::char_kind_t ch);

}  // namespace consts

#endif  // LOOKUP_H

