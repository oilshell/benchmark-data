// _gen/core/runtime.asdl.h is generated by asdl_main.py

#ifndef RUNTIME_ASDL
#define RUNTIME_ASDL

#include <cstdint>

#include "mycpp/runtime.h"
#include "_gen/asdl/hnode.asdl.h"
using hnode_asdl::hnode_t;

#include "_gen/frontend/id_kind.asdl.h"
using id_kind_asdl::Id_t;

namespace syntax_asdl { class loc_t; class Token; class expr_t; class word_t; class command_t; class CompoundWord; class DoubleQuoted; class ArgList; class re_t; class redir_loc_t; class proc_sig_t; class LiteralBlock; class Func; }

namespace value_asdl { class value_t; }

namespace runtime_asdl {

// use struct instead of namespace so 'using' works consistently
#define ASDL_NAMES struct

class AssignArg;
class cmd_value_t;
class Piece;
class part_value_t;
class VarSubState;
class Cell;
class a_index_t;
class VTestPlace;
class redirect_arg_t;
class RedirValue;
class StatusArray;
class CommandStatus;
class wait_status_t;
class trace_t;
class HayNode;

ASDL_NAMES cmd_value_e {
  enum no_name {
  Argv = 1,
  Assign = 2,
  };
};

BigStr* cmd_value_str(int tag, bool dot = true);

class cmd_value_t {
 protected:
  cmd_value_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(cmd_value_t)
};

class cmd_value__Argv : public cmd_value_t {
 public:
  cmd_value__Argv(List<BigStr*>* argv, List<syntax_asdl::CompoundWord*>*
                  arg_locs, syntax_asdl::ArgList* typed_args,
                  List<value_asdl::value_t*>* pos_args, Dict<BigStr*,
                  value_asdl::value_t*>* named_args, value_asdl::value_t*
                  block_arg)
      : argv(argv),
        arg_locs(arg_locs),
        typed_args(typed_args),
        pos_args(pos_args),
        named_args(named_args),
        block_arg(block_arg) {
  }

  static cmd_value__Argv* CreateNull(bool alloc_lists = false) { 
    return Alloc<cmd_value__Argv>(alloc_lists ? Alloc<List<BigStr*>>() :
                                  nullptr, alloc_lists ?
                                  Alloc<List<syntax_asdl::CompoundWord*>>() :
                                  nullptr, nullptr, nullptr, nullptr, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(cmd_value_e::Argv), 6);
  }

  List<BigStr*>* argv;
  List<syntax_asdl::CompoundWord*>* arg_locs;
  syntax_asdl::ArgList* typed_args;
  List<value_asdl::value_t*>* pos_args;
  Dict<BigStr*, value_asdl::value_t*>* named_args;
  value_asdl::value_t* block_arg;

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Argv)
};

class cmd_value__Assign : public cmd_value_t {
 public:
  cmd_value__Assign(int builtin_id, List<BigStr*>* argv,
                    List<syntax_asdl::CompoundWord*>* arg_locs,
                    List<AssignArg*>* pairs)
      : argv(argv),
        arg_locs(arg_locs),
        pairs(pairs),
        builtin_id(builtin_id) {
  }

  static cmd_value__Assign* CreateNull(bool alloc_lists = false) { 
    return Alloc<cmd_value__Assign>(-1, alloc_lists ? Alloc<List<BigStr*>>() :
                                    nullptr, alloc_lists ?
                                    Alloc<List<syntax_asdl::CompoundWord*>>() :
                                    nullptr, alloc_lists ?
                                    Alloc<List<AssignArg*>>() : nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(cmd_value_e::Assign), 3);
  }

  List<BigStr*>* argv;
  List<syntax_asdl::CompoundWord*>* arg_locs;
  List<AssignArg*>* pairs;
  int builtin_id;

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Assign)
};

ASDL_NAMES cmd_value {
  typedef cmd_value__Argv Argv;
  typedef cmd_value__Assign Assign;
};

ASDL_NAMES part_value_e {
  enum no_name {
  String = 65,
  Array = 2,
  ExtGlob = 3,
  };
};

BigStr* part_value_str(int tag, bool dot = true);

class part_value_t {
 protected:
  part_value_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(part_value_t)
};

class part_value__Array : public part_value_t {
 public:
  part_value__Array(List<BigStr*>* strs)
      : strs(strs) {
  }

  static part_value__Array* CreateNull(bool alloc_lists = false) { 
    return Alloc<part_value__Array>(alloc_lists ? Alloc<List<BigStr*>>() :
                                    nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(part_value_e::Array), 1);
  }

  List<BigStr*>* strs;

  DISALLOW_COPY_AND_ASSIGN(part_value__Array)
};

class part_value__ExtGlob : public part_value_t {
 public:
  part_value__ExtGlob(List<part_value_t*>* part_vals)
      : part_vals(part_vals) {
  }

  static part_value__ExtGlob* CreateNull(bool alloc_lists = false) { 
    return Alloc<part_value__ExtGlob>(alloc_lists ?
                                      Alloc<List<part_value_t*>>() : nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(part_value_e::ExtGlob),
                                1);
  }

  List<part_value_t*>* part_vals;

  DISALLOW_COPY_AND_ASSIGN(part_value__ExtGlob)
};

ASDL_NAMES part_value {
  typedef part_value__Array Array;
  typedef part_value__ExtGlob ExtGlob;
};

enum class coerced_e {
  Int = 1,
  Float = 2,
  Neither = 3,
};
typedef coerced_e coerced_t;

BigStr* coerced_str(coerced_e tag, bool dot = true);

enum class scope_e {
  Shopt = 1,
  Dynamic = 2,
  LocalOrGlobal = 3,
  LocalOnly = 4,
  GlobalOnly = 5,
};
typedef scope_e scope_t;

BigStr* scope_str(scope_e tag, bool dot = true);

ASDL_NAMES a_index_e {
  enum no_name {
  Str = 1,
  Int = 2,
  };
};

BigStr* a_index_str(int tag, bool dot = true);

class a_index_t {
 protected:
  a_index_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(a_index_t)
};

class a_index__Str : public a_index_t {
 public:
  a_index__Str(BigStr* s)
      : s(s) {
  }

  static a_index__Str* CreateNull(bool alloc_lists = false) { 
    return Alloc<a_index__Str>(kEmptyString);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(a_index_e::Str), 1);
  }

  BigStr* s;

  DISALLOW_COPY_AND_ASSIGN(a_index__Str)
};

class a_index__Int : public a_index_t {
 public:
  a_index__Int(int i)
      : i(i) {
  }

  static a_index__Int* CreateNull(bool alloc_lists = false) { 
    return Alloc<a_index__Int>(-1);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(a_index_e::Int), 0);
  }

  int i;

  DISALLOW_COPY_AND_ASSIGN(a_index__Int)
};

ASDL_NAMES a_index {
  typedef a_index__Str Str;
  typedef a_index__Int Int;
};

ASDL_NAMES redirect_arg_e {
  enum no_name {
  Path = 1,
  CopyFd = 2,
  MoveFd = 3,
  CloseFd = 4,
  HereDoc = 5,
  };
};

BigStr* redirect_arg_str(int tag, bool dot = true);

class redirect_arg_t {
 protected:
  redirect_arg_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(redirect_arg_t)
};

class redirect_arg__Path : public redirect_arg_t {
 public:
  redirect_arg__Path(BigStr* filename)
      : filename(filename) {
  }

  static redirect_arg__Path* CreateNull(bool alloc_lists = false) { 
    return Alloc<redirect_arg__Path>(kEmptyString);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(redirect_arg_e::Path), 1);
  }

  BigStr* filename;

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__Path)
};

class redirect_arg__CopyFd : public redirect_arg_t {
 public:
  redirect_arg__CopyFd(int target_fd)
      : target_fd(target_fd) {
  }

  static redirect_arg__CopyFd* CreateNull(bool alloc_lists = false) { 
    return Alloc<redirect_arg__CopyFd>(-1);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(redirect_arg_e::CopyFd),
                                0);
  }

  int target_fd;

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CopyFd)
};

class redirect_arg__MoveFd : public redirect_arg_t {
 public:
  redirect_arg__MoveFd(int target_fd)
      : target_fd(target_fd) {
  }

  static redirect_arg__MoveFd* CreateNull(bool alloc_lists = false) { 
    return Alloc<redirect_arg__MoveFd>(-1);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(redirect_arg_e::MoveFd),
                                0);
  }

  int target_fd;

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__MoveFd)
};

class redirect_arg__CloseFd : public redirect_arg_t {
 public:
  redirect_arg__CloseFd() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(redirect_arg_e::CloseFd),
                                0);
  }


  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CloseFd)
};

class redirect_arg__HereDoc : public redirect_arg_t {
 public:
  redirect_arg__HereDoc(BigStr* body)
      : body(body) {
  }

  static redirect_arg__HereDoc* CreateNull(bool alloc_lists = false) { 
    return Alloc<redirect_arg__HereDoc>(kEmptyString);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(redirect_arg_e::HereDoc),
                                1);
  }

  BigStr* body;

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__HereDoc)
};

extern GcGlobal<redirect_arg__CloseFd> gredirect_arg__CloseFd;
ASDL_NAMES redirect_arg {
  typedef redirect_arg__Path Path;
  typedef redirect_arg__CopyFd CopyFd;
  typedef redirect_arg__MoveFd MoveFd;
  static redirect_arg__CloseFd* CloseFd;
  typedef redirect_arg__HereDoc HereDoc;
};

ASDL_NAMES wait_status_e {
  enum no_name {
  Proc = 1,
  Pipeline = 2,
  Cancelled = 3,
  };
};

BigStr* wait_status_str(int tag, bool dot = true);

class wait_status_t {
 protected:
  wait_status_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(wait_status_t)
};

class wait_status__Proc : public wait_status_t {
 public:
  wait_status__Proc(int code)
      : code(code) {
  }

  static wait_status__Proc* CreateNull(bool alloc_lists = false) { 
    return Alloc<wait_status__Proc>(-1);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(wait_status_e::Proc), 0);
  }

  int code;

  DISALLOW_COPY_AND_ASSIGN(wait_status__Proc)
};

class wait_status__Pipeline : public wait_status_t {
 public:
  wait_status__Pipeline(List<int>* codes)
      : codes(codes) {
  }

  static wait_status__Pipeline* CreateNull(bool alloc_lists = false) { 
    return Alloc<wait_status__Pipeline>(alloc_lists ? Alloc<List<int>>() :
                                        nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(wait_status_e::Pipeline),
                                1);
  }

  List<int>* codes;

  DISALLOW_COPY_AND_ASSIGN(wait_status__Pipeline)
};

class wait_status__Cancelled : public wait_status_t {
 public:
  wait_status__Cancelled(int sig_num)
      : sig_num(sig_num) {
  }

  static wait_status__Cancelled* CreateNull(bool alloc_lists = false) { 
    return Alloc<wait_status__Cancelled>(-1);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return
ObjHeader::AsdlClass(static_cast<uint16_t>(wait_status_e::Cancelled), 0);
  }

  int sig_num;

  DISALLOW_COPY_AND_ASSIGN(wait_status__Cancelled)
};

ASDL_NAMES wait_status {
  typedef wait_status__Proc Proc;
  typedef wait_status__Pipeline Pipeline;
  typedef wait_status__Cancelled Cancelled;
};

enum class flow_e {
  Nothing = 1,
  Break = 2,
  Raise = 3,
};
typedef flow_e flow_t;

BigStr* flow_str(flow_e tag, bool dot = true);

enum class span_e {
  Black = 1,
  Delim = 2,
  Backslash = 3,
};
typedef span_e span_t;

BigStr* span_str(span_e tag, bool dot = true);

ASDL_NAMES emit_i {
  enum no_name {
  Part = 1,
  Delim = 2,
  Empty = 3,
  Escape = 4,
  Nothing = 5,
  ARRAY_SIZE = 6,
  };
};

BigStr* emit_str(int tag, bool dot = true);

typedef int emit_t;

ASDL_NAMES state_i {
  enum no_name {
  Invalid = 1,
  Start = 2,
  DE_White1 = 3,
  DE_Gray = 4,
  DE_White2 = 5,
  Black = 6,
  Backslash = 7,
  Done = 8,
  ARRAY_SIZE = 9,
  };
};

BigStr* state_str(int tag, bool dot = true);

typedef int state_t;

ASDL_NAMES char_kind_i {
  enum no_name {
  DE_White = 1,
  DE_Gray = 2,
  Black = 3,
  Backslash = 4,
  Sentinel = 5,
  ARRAY_SIZE = 6,
  };
};

BigStr* char_kind_str(int tag, bool dot = true);

typedef int char_kind_t;

enum class job_state_e {
  Running = 1,
  Done = 2,
  Stopped = 3,
};
typedef job_state_e job_state_t;

BigStr* job_state_str(job_state_e tag, bool dot = true);

enum class flag_type_e {
  Bool = 1,
  Int = 2,
  Float = 3,
  Str = 4,
};
typedef flag_type_e flag_type_t;

BigStr* flag_type_str(flag_type_e tag, bool dot = true);

ASDL_NAMES trace_e {
  enum no_name {
  External = 1,
  CommandSub = 2,
  ForkWait = 3,
  Fork = 4,
  PipelinePart = 5,
  ProcessSub = 6,
  HereDoc = 7,
  };
};

BigStr* trace_str(int tag, bool dot = true);

class trace_t {
 protected:
  trace_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(trace_t)
};

class trace__External : public trace_t {
 public:
  trace__External(List<BigStr*>* argv)
      : argv(argv) {
  }

  static trace__External* CreateNull(bool alloc_lists = false) { 
    return Alloc<trace__External>(alloc_lists ? Alloc<List<BigStr*>>() :
                                  nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::External), 1);
  }

  List<BigStr*>* argv;

  DISALLOW_COPY_AND_ASSIGN(trace__External)
};

class trace__CommandSub : public trace_t {
 public:
  trace__CommandSub() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::CommandSub), 0);
  }


  DISALLOW_COPY_AND_ASSIGN(trace__CommandSub)
};

class trace__ForkWait : public trace_t {
 public:
  trace__ForkWait() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::ForkWait), 0);
  }


  DISALLOW_COPY_AND_ASSIGN(trace__ForkWait)
};

class trace__Fork : public trace_t {
 public:
  trace__Fork() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::Fork), 0);
  }


  DISALLOW_COPY_AND_ASSIGN(trace__Fork)
};

class trace__PipelinePart : public trace_t {
 public:
  trace__PipelinePart() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::PipelinePart),
                                0);
  }


  DISALLOW_COPY_AND_ASSIGN(trace__PipelinePart)
};

class trace__ProcessSub : public trace_t {
 public:
  trace__ProcessSub() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::ProcessSub), 0);
  }


  DISALLOW_COPY_AND_ASSIGN(trace__ProcessSub)
};

class trace__HereDoc : public trace_t {
 public:
  trace__HereDoc() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(trace_e::HereDoc), 0);
  }


  DISALLOW_COPY_AND_ASSIGN(trace__HereDoc)
};

extern GcGlobal<trace__CommandSub> gtrace__CommandSub;
extern GcGlobal<trace__ForkWait> gtrace__ForkWait;
extern GcGlobal<trace__Fork> gtrace__Fork;
extern GcGlobal<trace__PipelinePart> gtrace__PipelinePart;
extern GcGlobal<trace__ProcessSub> gtrace__ProcessSub;
extern GcGlobal<trace__HereDoc> gtrace__HereDoc;
ASDL_NAMES trace {
  typedef trace__External External;
  static trace__CommandSub* CommandSub;
  static trace__ForkWait* ForkWait;
  static trace__Fork* Fork;
  static trace__PipelinePart* PipelinePart;
  static trace__ProcessSub* ProcessSub;
  static trace__HereDoc* HereDoc;
};

enum class word_style_e {
  Expr = 1,
  Unquoted = 2,
  DQ = 3,
  SQ = 4,
};
typedef word_style_e word_style_t;

BigStr* word_style_str(word_style_e tag, bool dot = true);

enum class comp_action_e {
  Other = 1,
  FileSystem = 2,
  BashFunc = 3,
};
typedef comp_action_e comp_action_t;

BigStr* comp_action_str(comp_action_e tag, bool dot = true);

class AssignArg {
 public:
  AssignArg(BigStr* var_name, value_asdl::value_t* rval, bool plus_eq,
            syntax_asdl::CompoundWord* blame_word)
      : var_name(var_name),
        rval(rval),
        blame_word(blame_word),
        plus_eq(plus_eq) {
  }

  static AssignArg* CreateNull(bool alloc_lists = false) { 
    return Alloc<AssignArg>(kEmptyString, nullptr, false, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(64, 3);
  }

  BigStr* var_name;
  value_asdl::value_t* rval;
  syntax_asdl::CompoundWord* blame_word;
  bool plus_eq;

  DISALLOW_COPY_AND_ASSIGN(AssignArg)
};

class Piece : public part_value_t {
 public:
  Piece(BigStr* s, bool quoted, bool do_split)
      : s(s),
        quoted(quoted),
        do_split(do_split) {
  }

  static Piece* CreateNull(bool alloc_lists = false) { 
    return Alloc<Piece>(kEmptyString, false, false);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(65, 1);
  }

  BigStr* s;
  bool quoted;
  bool do_split;

  DISALLOW_COPY_AND_ASSIGN(Piece)
};

class VarSubState {
 public:
  VarSubState(bool join_array, bool is_type_query, bool has_test_op)
      : join_array(join_array),
        is_type_query(is_type_query),
        has_test_op(has_test_op) {
  }

  static VarSubState* CreateNull(bool alloc_lists = false) { 
    return Alloc<VarSubState>(false, false, false);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(66, 0);
  }

  bool join_array;
  bool is_type_query;
  bool has_test_op;

  DISALLOW_COPY_AND_ASSIGN(VarSubState)
};

class Cell {
 public:
  Cell(bool exported, bool readonly, bool nameref, value_asdl::value_t* val)
      : val(val),
        exported(exported),
        readonly(readonly),
        nameref(nameref) {
  }

  static Cell* CreateNull(bool alloc_lists = false) { 
    return Alloc<Cell>(false, false, false, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(67, 1);
  }

  value_asdl::value_t* val;
  bool exported;
  bool readonly;
  bool nameref;

  DISALLOW_COPY_AND_ASSIGN(Cell)
};

class VTestPlace {
 public:
  VTestPlace(BigStr* name, a_index_t* index)
      : name(name),
        index(index) {
  }

  static VTestPlace* CreateNull(bool alloc_lists = false) { 
    return Alloc<VTestPlace>(nullptr, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(68, 2);
  }

  BigStr* name;
  a_index_t* index;

  DISALLOW_COPY_AND_ASSIGN(VTestPlace)
};

class RedirValue {
 public:
  RedirValue(Id_t op_id, syntax_asdl::loc_t* op_loc, syntax_asdl::redir_loc_t*
             loc, redirect_arg_t* arg)
      : op_loc(op_loc),
        loc(loc),
        arg(arg),
        op_id(op_id) {
  }

  static RedirValue* CreateNull(bool alloc_lists = false) { 
    return Alloc<RedirValue>(-1, nullptr, nullptr, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(69, 3);
  }

  syntax_asdl::loc_t* op_loc;
  syntax_asdl::redir_loc_t* loc;
  redirect_arg_t* arg;
  Id_t op_id;

  DISALLOW_COPY_AND_ASSIGN(RedirValue)
};

class StatusArray {
 public:
  StatusArray(List<int>* codes, List<syntax_asdl::loc_t*>* locs)
      : codes(codes),
        locs(locs) {
  }

  static StatusArray* CreateNull(bool alloc_lists = false) { 
    return Alloc<StatusArray>(nullptr, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(70, 2);
  }

  List<int>* codes;
  List<syntax_asdl::loc_t*>* locs;

  DISALLOW_COPY_AND_ASSIGN(StatusArray)
};

class CommandStatus {
 public:
  CommandStatus(bool check_errexit, bool show_code, bool pipe_negated,
                List<int>* pipe_status, List<syntax_asdl::loc_t*>* pipe_locs)
      : pipe_status(pipe_status),
        pipe_locs(pipe_locs),
        check_errexit(check_errexit),
        show_code(show_code),
        pipe_negated(pipe_negated) {
  }

  static CommandStatus* CreateNull(bool alloc_lists = false) { 
    return Alloc<CommandStatus>(false, false, false, nullptr, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(71, 2);
  }

  List<int>* pipe_status;
  List<syntax_asdl::loc_t*>* pipe_locs;
  bool check_errexit;
  bool show_code;
  bool pipe_negated;

  DISALLOW_COPY_AND_ASSIGN(CommandStatus)
};

class HayNode {
 public:
  HayNode(Dict<BigStr*, HayNode*>* children)
      : children(children) {
  }

  static HayNode* CreateNull(bool alloc_lists = false) { 
    return Alloc<HayNode>(nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(72, 1);
  }

  Dict<BigStr*, HayNode*>* children;

  DISALLOW_COPY_AND_ASSIGN(HayNode)
};


}  // namespace runtime_asdl

#endif  // RUNTIME_ASDL
