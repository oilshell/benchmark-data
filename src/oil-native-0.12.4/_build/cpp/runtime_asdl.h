// _build/cpp/runtime_asdl.h is generated by asdl/tool.py

#ifndef RUNTIME_ASDL
#define RUNTIME_ASDL

#include <cstdint>

#ifdef OLDSTL_BINDINGS
#include "mycpp/oldstl_containers.h"
#else
#include "mycpp/gc_containers.h"
#endif
#include "_build/cpp/hnode_asdl.h"
using hnode_asdl::hnode_t;

#include "_build/cpp/id_kind_asdl.h"
using id_kind_asdl::Id_t;

namespace syntax_asdl { class ArgList; class command_t; class re_t; class redir_loc_t; class BraceGroup; class Token; class proc_sig_t; }

namespace runtime_asdl {

class assign_arg;
class cmd_value_t;
class part_value_t;
class value_t;
class a_index_t;
class VTestPlace;
class VarSubState;
class cell;
class lvalue_t;
class redirect_arg_t;
class redirect;
class Proc;
class StatusArray;
class CommandStatus;
class wait_status_t;
class trace_t;
class hay_node;

namespace cmd_value_e {
  const int Argv = 1;
  const int Assign = 2;
};

const char* cmd_value_str(int tag);

class cmd_value_t {
 protected:
  cmd_value_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(cmd_value_t)
};

class cmd_value__Argv : public cmd_value_t {
 public:
  cmd_value__Argv() : type_tag_(static_cast<uint16_t>(cmd_value_e::Argv)),
                  argv(NewList<Str*>()), arg_spids(NewList<int>()),
                  typed_args(nullptr) {
  }
  cmd_value__Argv(List<Str*>* argv, List<int>* arg_spids, syntax_asdl::ArgList*
                  typed_args) :
                  type_tag_(static_cast<uint16_t>(cmd_value_e::Argv)),
                  argv(argv), arg_spids(arg_spids), typed_args(typed_args) {
  }
  OBJ_HEADER();
  List<Str*>* argv;
  List<int>* arg_spids;
  syntax_asdl::ArgList* typed_args;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Argv)
};

class cmd_value__Assign : public cmd_value_t {
 public:
  cmd_value__Assign() : type_tag_(static_cast<uint16_t>(cmd_value_e::Assign)),
                    builtin_id(-1), argv(NewList<Str*>()),
                    arg_spids(NewList<int>()), pairs(NewList<assign_arg*>()) {
  }
  cmd_value__Assign(int builtin_id, List<Str*>* argv, List<int>* arg_spids,
                    List<assign_arg*>* pairs) :
                    type_tag_(static_cast<uint16_t>(cmd_value_e::Assign)),
                    builtin_id(builtin_id), argv(argv), arg_spids(arg_spids),
                    pairs(pairs) {
  }
  OBJ_HEADER();
  int builtin_id;
  List<Str*>* argv;
  List<int>* arg_spids;
  List<assign_arg*>* pairs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Assign)
};

namespace cmd_value {
  typedef cmd_value__Argv Argv;
  typedef cmd_value__Assign Assign;
}

namespace part_value_e {
  const int String = 1;
  const int Array = 2;
  const int ExtGlob = 3;
};

const char* part_value_str(int tag);

class part_value_t {
 protected:
  part_value_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(part_value_t)
};

class part_value__String : public part_value_t {
 public:
  part_value__String() :
                     type_tag_(static_cast<uint16_t>(part_value_e::String)),
                     s(StrFromC("")), quoted(false), do_split(false) {
  }
  part_value__String(Str* s, bool quoted, bool do_split) :
                     type_tag_(static_cast<uint16_t>(part_value_e::String)),
                     s(s), quoted(quoted), do_split(do_split) {
  }
  OBJ_HEADER();
  Str* s;
  bool quoted;
  bool do_split;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(part_value__String)
};

class part_value__Array : public part_value_t {
 public:
  part_value__Array() : type_tag_(static_cast<uint16_t>(part_value_e::Array)),
                    strs(NewList<Str*>()) {
  }
  part_value__Array(List<Str*>* strs) :
                    type_tag_(static_cast<uint16_t>(part_value_e::Array)),
                    strs(strs) {
  }
  OBJ_HEADER();
  List<Str*>* strs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(part_value__Array)
};

class part_value__ExtGlob : public part_value_t {
 public:
  part_value__ExtGlob() :
                      type_tag_(static_cast<uint16_t>(part_value_e::ExtGlob)),
                      part_vals(NewList<part_value_t*>()) {
  }
  part_value__ExtGlob(List<part_value_t*>* part_vals) :
                      type_tag_(static_cast<uint16_t>(part_value_e::ExtGlob)),
                      part_vals(part_vals) {
  }
  OBJ_HEADER();
  List<part_value_t*>* part_vals;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(part_value__ExtGlob)
};

namespace part_value {
  typedef part_value__String String;
  typedef part_value__Array Array;
  typedef part_value__ExtGlob ExtGlob;
}

namespace value_e {
  const int Undef = 1;
  const int Str = 2;
  const int Int = 3;
  const int MaybeStrArray = 4;
  const int AssocArray = 5;
  const int Bool = 6;
  const int Float = 7;
  const int Eggex = 8;
  const int Block = 9;
  const int Obj = 10;
};

const char* value_str(int tag);

class value_t {
 protected:
  value_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(value_t)
};

class value__Undef : public value_t {
 public:
  value__Undef() : type_tag_(static_cast<uint16_t>(value_e::Undef)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Undef)
};

class value__Str : public value_t {
 public:
  value__Str() : type_tag_(static_cast<uint16_t>(value_e::Str)),
             s(StrFromC("")) {
  }
  value__Str(Str* s) : type_tag_(static_cast<uint16_t>(value_e::Str)), s(s) {
  }
  OBJ_HEADER();
  Str* s;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Str)
};

class value__Int : public value_t {
 public:
  value__Int() : type_tag_(static_cast<uint16_t>(value_e::Int)), i(-1) {
  }
  value__Int(int i) : type_tag_(static_cast<uint16_t>(value_e::Int)), i(i) {
  }
  OBJ_HEADER();
  int i;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Int)
};

class value__MaybeStrArray : public value_t {
 public:
  value__MaybeStrArray() :
                       type_tag_(static_cast<uint16_t>(value_e::MaybeStrArray)), strs(NewList<Str*>()) {
  }
  value__MaybeStrArray(List<Str*>* strs) :
                       type_tag_(static_cast<uint16_t>(value_e::MaybeStrArray)), strs(strs) {
  }
  OBJ_HEADER();
  List<Str*>* strs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__MaybeStrArray)
};

class value__AssocArray : public value_t {
 public:
  value__AssocArray() : type_tag_(static_cast<uint16_t>(value_e::AssocArray)),
                    d(new Dict<Str*, Str*>()) {
  }
  value__AssocArray(Dict<Str*, Str*>* d) :
                    type_tag_(static_cast<uint16_t>(value_e::AssocArray)), d(d)
                    {
  }
  OBJ_HEADER();
  Dict<Str*, Str*>* d;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__AssocArray)
};

class value__Bool : public value_t {
 public:
  value__Bool() : type_tag_(static_cast<uint16_t>(value_e::Bool)), b(false) {
  }
  value__Bool(bool b) : type_tag_(static_cast<uint16_t>(value_e::Bool)), b(b) {
  }
  OBJ_HEADER();
  bool b;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Bool)
};

class value__Float : public value_t {
 public:
  value__Float() : type_tag_(static_cast<uint16_t>(value_e::Float)), f(0.0) {
  }
  value__Float(double f) : type_tag_(static_cast<uint16_t>(value_e::Float)),
               f(f) {
  }
  OBJ_HEADER();
  double f;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Float)
};

class value__Eggex : public value_t {
 public:
  value__Eggex() : type_tag_(static_cast<uint16_t>(value_e::Eggex)),
               expr(nullptr), as_ere(StrFromC("")) {
  }
  value__Eggex(syntax_asdl::re_t* expr, Str* as_ere) :
               type_tag_(static_cast<uint16_t>(value_e::Eggex)), expr(expr),
               as_ere(as_ere) {
  }
  OBJ_HEADER();
  syntax_asdl::re_t* expr;
  Str* as_ere;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Eggex)
};

class value__Block : public value_t {
 public:
  value__Block() : type_tag_(static_cast<uint16_t>(value_e::Block)),
               body(nullptr) {
  }
  value__Block(syntax_asdl::command_t* body) :
               type_tag_(static_cast<uint16_t>(value_e::Block)), body(body) {
  }
  OBJ_HEADER();
  syntax_asdl::command_t* body;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Block)
};

class value__Obj : public value_t {
 public:
  value__Obj() : type_tag_(static_cast<uint16_t>(value_e::Obj)), obj(nullptr) {
  }
  value__Obj(void* obj) : type_tag_(static_cast<uint16_t>(value_e::Obj)),
             obj(obj) {
  }
  OBJ_HEADER();
  void* obj;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Obj)
};

namespace value {
  typedef value__Undef Undef;
  typedef value__Str Str;
  typedef value__Int Int;
  typedef value__MaybeStrArray MaybeStrArray;
  typedef value__AssocArray AssocArray;
  typedef value__Bool Bool;
  typedef value__Float Float;
  typedef value__Eggex Eggex;
  typedef value__Block Block;
  typedef value__Obj Obj;
}

namespace a_index_e {
  const int Str = 1;
  const int Int = 2;
};

const char* a_index_str(int tag);

class a_index_t {
 protected:
  a_index_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(a_index_t)
};

class a_index__Str : public a_index_t {
 public:
  a_index__Str() : type_tag_(static_cast<uint16_t>(a_index_e::Str)),
               s(StrFromC("")) {
  }
  a_index__Str(Str* s) : type_tag_(static_cast<uint16_t>(a_index_e::Str)), s(s)
               {
  }
  OBJ_HEADER();
  Str* s;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(a_index__Str)
};

class a_index__Int : public a_index_t {
 public:
  a_index__Int() : type_tag_(static_cast<uint16_t>(a_index_e::Int)), i(-1) {
  }
  a_index__Int(int i) : type_tag_(static_cast<uint16_t>(a_index_e::Int)), i(i) {
  }
  OBJ_HEADER();
  int i;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(a_index__Int)
};

namespace a_index {
  typedef a_index__Str Str;
  typedef a_index__Int Int;
}

enum class scope_e {
  Parent = 1,
  Shopt = 2,
  Dynamic = 3,
  LocalOrGlobal = 4,
  LocalOnly = 5,
  GlobalOnly = 6,
};
typedef scope_e scope_t;

const char* scope_str(scope_e tag);

namespace lvalue_e {
  const int Named = 1;
  const int Indexed = 2;
  const int Keyed = 3;
  const int ObjIndex = 4;
  const int ObjAttr = 5;
};

const char* lvalue_str(int tag);

class lvalue_t {
 protected:
  lvalue_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(lvalue_t)
};

class lvalue__Named : public lvalue_t {
 public:
  lvalue__Named() : type_tag_(static_cast<uint16_t>(lvalue_e::Named)),
                name(StrFromC("")), spids(NewList<int>()) {
  }
  lvalue__Named(Str* name) : type_tag_(static_cast<uint16_t>(lvalue_e::Named)),
                name(name), spids(NewList<int>()) {
  }
  OBJ_HEADER();
  Str* name;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__Named)
};

class lvalue__Indexed : public lvalue_t {
 public:
  lvalue__Indexed() : type_tag_(static_cast<uint16_t>(lvalue_e::Indexed)),
                  name(StrFromC("")), index(-1), spids(NewList<int>()) {
  }
  lvalue__Indexed(Str* name, int index) :
                  type_tag_(static_cast<uint16_t>(lvalue_e::Indexed)),
                  name(name), index(index), spids(NewList<int>()) {
  }
  OBJ_HEADER();
  Str* name;
  int index;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__Indexed)
};

class lvalue__Keyed : public lvalue_t {
 public:
  lvalue__Keyed() : type_tag_(static_cast<uint16_t>(lvalue_e::Keyed)),
                name(StrFromC("")), key(StrFromC("")), spids(NewList<int>()) {
  }
  lvalue__Keyed(Str* name, Str* key) :
                type_tag_(static_cast<uint16_t>(lvalue_e::Keyed)), name(name),
                key(key), spids(NewList<int>()) {
  }
  OBJ_HEADER();
  Str* name;
  Str* key;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__Keyed)
};

class lvalue__ObjIndex : public lvalue_t {
 public:
  lvalue__ObjIndex() : type_tag_(static_cast<uint16_t>(lvalue_e::ObjIndex)),
                   obj(nullptr), index(nullptr), spids(NewList<int>()) {
  }
  lvalue__ObjIndex(void* obj, void* index) :
                   type_tag_(static_cast<uint16_t>(lvalue_e::ObjIndex)),
                   obj(obj), index(index), spids(NewList<int>()) {
  }
  OBJ_HEADER();
  void* obj;
  void* index;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__ObjIndex)
};

class lvalue__ObjAttr : public lvalue_t {
 public:
  lvalue__ObjAttr() : type_tag_(static_cast<uint16_t>(lvalue_e::ObjAttr)),
                  obj(nullptr), attr(StrFromC("")), spids(NewList<int>()) {
  }
  lvalue__ObjAttr(void* obj, Str* attr) :
                  type_tag_(static_cast<uint16_t>(lvalue_e::ObjAttr)),
                  obj(obj), attr(attr), spids(NewList<int>()) {
  }
  OBJ_HEADER();
  void* obj;
  Str* attr;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__ObjAttr)
};

namespace lvalue {
  typedef lvalue__Named Named;
  typedef lvalue__Indexed Indexed;
  typedef lvalue__Keyed Keyed;
  typedef lvalue__ObjIndex ObjIndex;
  typedef lvalue__ObjAttr ObjAttr;
}

namespace redirect_arg_e {
  const int Path = 1;
  const int CopyFd = 2;
  const int MoveFd = 3;
  const int CloseFd = 4;
  const int HereDoc = 5;
};

const char* redirect_arg_str(int tag);

class redirect_arg_t {
 protected:
  redirect_arg_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(redirect_arg_t)
};

class redirect_arg__Path : public redirect_arg_t {
 public:
  redirect_arg__Path() :
                     type_tag_(static_cast<uint16_t>(redirect_arg_e::Path)),
                     filename(StrFromC("")) {
  }
  redirect_arg__Path(Str* filename) :
                     type_tag_(static_cast<uint16_t>(redirect_arg_e::Path)),
                     filename(filename) {
  }
  OBJ_HEADER();
  Str* filename;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__Path)
};

class redirect_arg__CopyFd : public redirect_arg_t {
 public:
  redirect_arg__CopyFd() :
                       type_tag_(static_cast<uint16_t>(redirect_arg_e::CopyFd)), target_fd(-1) {
  }
  redirect_arg__CopyFd(int target_fd) :
                       type_tag_(static_cast<uint16_t>(redirect_arg_e::CopyFd)), target_fd(target_fd) {
  }
  OBJ_HEADER();
  int target_fd;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CopyFd)
};

class redirect_arg__MoveFd : public redirect_arg_t {
 public:
  redirect_arg__MoveFd() :
                       type_tag_(static_cast<uint16_t>(redirect_arg_e::MoveFd)), target_fd(-1) {
  }
  redirect_arg__MoveFd(int target_fd) :
                       type_tag_(static_cast<uint16_t>(redirect_arg_e::MoveFd)), target_fd(target_fd) {
  }
  OBJ_HEADER();
  int target_fd;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__MoveFd)
};

class redirect_arg__CloseFd : public redirect_arg_t {
 public:
  redirect_arg__CloseFd() :
                        type_tag_(static_cast<uint16_t>(redirect_arg_e::CloseFd)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CloseFd)
};

class redirect_arg__HereDoc : public redirect_arg_t {
 public:
  redirect_arg__HereDoc() :
                        type_tag_(static_cast<uint16_t>(redirect_arg_e::HereDoc)), body(StrFromC("")) {
  }
  redirect_arg__HereDoc(Str* body) :
                        type_tag_(static_cast<uint16_t>(redirect_arg_e::HereDoc)), body(body) {
  }
  OBJ_HEADER();
  Str* body;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__HereDoc)
};

namespace redirect_arg {
  typedef redirect_arg__Path Path;
  typedef redirect_arg__CopyFd CopyFd;
  typedef redirect_arg__MoveFd MoveFd;
  typedef redirect_arg__CloseFd CloseFd;
  typedef redirect_arg__HereDoc HereDoc;
}

namespace wait_status_e {
  const int Proc = 1;
  const int Pipeline = 2;
  const int Cancelled = 3;
};

const char* wait_status_str(int tag);

class wait_status_t {
 protected:
  wait_status_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(wait_status_t)
};

class wait_status__Proc : public wait_status_t {
 public:
  wait_status__Proc() : type_tag_(static_cast<uint16_t>(wait_status_e::Proc)),
                    code(-1) {
  }
  wait_status__Proc(int code) :
                    type_tag_(static_cast<uint16_t>(wait_status_e::Proc)),
                    code(code) {
  }
  OBJ_HEADER();
  int code;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(wait_status__Proc)
};

class wait_status__Pipeline : public wait_status_t {
 public:
  wait_status__Pipeline() :
                        type_tag_(static_cast<uint16_t>(wait_status_e::Pipeline)), codes(NewList<int>()) {
  }
  wait_status__Pipeline(List<int>* codes) :
                        type_tag_(static_cast<uint16_t>(wait_status_e::Pipeline)), codes(codes) {
  }
  OBJ_HEADER();
  List<int>* codes;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(wait_status__Pipeline)
};

class wait_status__Cancelled : public wait_status_t {
 public:
  wait_status__Cancelled() :
                         type_tag_(static_cast<uint16_t>(wait_status_e::Cancelled)), sig_num(-1) {
  }
  wait_status__Cancelled(int sig_num) :
                         type_tag_(static_cast<uint16_t>(wait_status_e::Cancelled)), sig_num(sig_num) {
  }
  OBJ_HEADER();
  int sig_num;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(wait_status__Cancelled)
};

namespace wait_status {
  typedef wait_status__Proc Proc;
  typedef wait_status__Pipeline Pipeline;
  typedef wait_status__Cancelled Cancelled;
}

enum class span_e {
  Black = 1,
  Delim = 2,
  Backslash = 3,
};
typedef span_e span_t;

const char* span_str(span_e tag);

namespace emit_i {
  const int Part = 1;
  const int Delim = 2;
  const int Empty = 3;
  const int Escape = 4;
  const int Nothing = 5;
  const int ARRAY_SIZE = 6;
};

const char* emit_str(int tag);

typedef int emit_t;

namespace state_i {
  const int Invalid = 1;
  const int Start = 2;
  const int DE_White1 = 3;
  const int DE_Gray = 4;
  const int DE_White2 = 5;
  const int Black = 6;
  const int Backslash = 7;
  const int Done = 8;
  const int ARRAY_SIZE = 9;
};

const char* state_str(int tag);

typedef int state_t;

namespace char_kind_i {
  const int DE_White = 1;
  const int DE_Gray = 2;
  const int Black = 3;
  const int Backslash = 4;
  const int Sentinel = 5;
  const int ARRAY_SIZE = 6;
};

const char* char_kind_str(int tag);

typedef int char_kind_t;

enum class job_state_e {
  Running = 1,
  Done = 2,
  Stopped = 3,
};
typedef job_state_e job_state_t;

const char* job_state_str(job_state_e tag);

enum class flag_type_e {
  Bool = 1,
  Int = 2,
  Float = 3,
  Str = 4,
};
typedef flag_type_e flag_type_t;

const char* flag_type_str(flag_type_e tag);

namespace trace_e {
  const int External = 1;
  const int CommandSub = 2;
  const int ForkWait = 3;
  const int Fork = 4;
  const int PipelinePart = 5;
  const int ProcessSub = 6;
  const int HereDoc = 7;
};

const char* trace_str(int tag);

class trace_t {
 protected:
  trace_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->type_tag_;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(trace_t)
};

class trace__External : public trace_t {
 public:
  trace__External() : type_tag_(static_cast<uint16_t>(trace_e::External)),
                  argv(NewList<Str*>()) {
  }
  trace__External(List<Str*>* argv) :
                  type_tag_(static_cast<uint16_t>(trace_e::External)),
                  argv(argv) {
  }
  OBJ_HEADER();
  List<Str*>* argv;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__External)
};

class trace__CommandSub : public trace_t {
 public:
  trace__CommandSub() : type_tag_(static_cast<uint16_t>(trace_e::CommandSub)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__CommandSub)
};

class trace__ForkWait : public trace_t {
 public:
  trace__ForkWait() : type_tag_(static_cast<uint16_t>(trace_e::ForkWait)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__ForkWait)
};

class trace__Fork : public trace_t {
 public:
  trace__Fork() : type_tag_(static_cast<uint16_t>(trace_e::Fork)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__Fork)
};

class trace__PipelinePart : public trace_t {
 public:
  trace__PipelinePart() :
                      type_tag_(static_cast<uint16_t>(trace_e::PipelinePart)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__PipelinePart)
};

class trace__ProcessSub : public trace_t {
 public:
  trace__ProcessSub() : type_tag_(static_cast<uint16_t>(trace_e::ProcessSub)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__ProcessSub)
};

class trace__HereDoc : public trace_t {
 public:
  trace__HereDoc() : type_tag_(static_cast<uint16_t>(trace_e::HereDoc)) {
  }
  OBJ_HEADER();
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(trace__HereDoc)
};

namespace trace {
  typedef trace__External External;
  typedef trace__CommandSub CommandSub;
  typedef trace__ForkWait ForkWait;
  typedef trace__Fork Fork;
  typedef trace__PipelinePart PipelinePart;
  typedef trace__ProcessSub ProcessSub;
  typedef trace__HereDoc HereDoc;
}

enum class word_style_e {
  Expr = 1,
  Unquoted = 2,
  DQ = 3,
  SQ = 4,
};
typedef word_style_e word_style_t;

const char* word_style_str(word_style_e tag);

class assign_arg {
 public:
  assign_arg() : type_tag_(200), var_name(StrFromC("")), rval(nullptr),
             plus_eq(false), spid(-1) {
  }
  assign_arg(Str* var_name, value_t* rval, bool plus_eq, int spid) :
             type_tag_(200), var_name(var_name), rval(rval), plus_eq(plus_eq),
             spid(spid) {
  }
  OBJ_HEADER();
  Str* var_name;
  value_t* rval;
  bool plus_eq;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(assign_arg)
};

class VTestPlace {
 public:
  VTestPlace() : type_tag_(201), name(StrFromC("")), index(nullptr) {
  }
  VTestPlace(Str* name, a_index_t* index) : type_tag_(201), name(name),
             index(index) {
  }
  OBJ_HEADER();
  Str* name;
  a_index_t* index;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(VTestPlace)
};

class VarSubState {
 public:
  VarSubState() : type_tag_(202), join_array(false), is_type_query(false) {
  }
  VarSubState(bool join_array, bool is_type_query) : type_tag_(202),
              join_array(join_array), is_type_query(is_type_query) {
  }
  OBJ_HEADER();
  bool join_array;
  bool is_type_query;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(VarSubState)
};

class cell {
 public:
  cell() : type_tag_(203), exported(false), readonly(false), nameref(false),
       val(nullptr) {
  }
  cell(bool exported, bool readonly, bool nameref, value_t* val) :
       type_tag_(203), exported(exported), readonly(readonly),
       nameref(nameref), val(val) {
  }
  OBJ_HEADER();
  bool exported;
  bool readonly;
  bool nameref;
  value_t* val;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cell)
};

class redirect {
 public:
  redirect() : type_tag_(204), op_id(-1), op_spid(-1), loc(nullptr),
           arg(nullptr) {
  }
  redirect(Id_t op_id, int op_spid, syntax_asdl::redir_loc_t* loc,
           redirect_arg_t* arg) : type_tag_(204), op_id(op_id),
           op_spid(op_spid), loc(loc), arg(arg) {
  }
  OBJ_HEADER();
  Id_t op_id;
  int op_spid;
  syntax_asdl::redir_loc_t* loc;
  redirect_arg_t* arg;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect)
};

class Proc {
 public:
  Proc() : type_tag_(205), name(StrFromC("")), name_spid(-1), sig(nullptr),
       body(nullptr), defaults(NewList<value_t*>()), dynamic_scope(false) {
  }
  Proc(Str* name, int name_spid, syntax_asdl::proc_sig_t* sig,
       syntax_asdl::command_t* body, List<value_t*>* defaults, bool
       dynamic_scope) : type_tag_(205), name(name), name_spid(name_spid),
       sig(sig), body(body), defaults(defaults), dynamic_scope(dynamic_scope) {
  }
  OBJ_HEADER();
  Str* name;
  int name_spid;
  syntax_asdl::proc_sig_t* sig;
  syntax_asdl::command_t* body;
  List<value_t*>* defaults;
  bool dynamic_scope;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(Proc)
};

class StatusArray {
 public:
  StatusArray() : type_tag_(206), codes(NewList<int>()), spids(NewList<int>()) {
  }
  StatusArray(List<int>* codes, List<int>* spids) : type_tag_(206),
              codes(codes), spids(spids) {
  }
  OBJ_HEADER();
  List<int>* codes;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(StatusArray)
};

class CommandStatus {
 public:
  CommandStatus() : type_tag_(207), check_errexit(false), pipe_negated(false),
                pipe_status(NewList<int>()), pipe_spids(NewList<int>()),
                show_code(false) {
  }
  CommandStatus(bool check_errexit, bool pipe_negated, List<int>* pipe_status,
                List<int>* pipe_spids, bool show_code) : type_tag_(207),
                check_errexit(check_errexit), pipe_negated(pipe_negated),
                pipe_status(pipe_status), pipe_spids(pipe_spids),
                show_code(show_code) {
  }
  OBJ_HEADER();
  bool check_errexit;
  bool pipe_negated;
  List<int>* pipe_status;
  List<int>* pipe_spids;
  bool show_code;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(CommandStatus)
};

class hay_node {
 public:
  hay_node() : type_tag_(208), children(new Dict<Str*, hay_node*>()) {
  }
  hay_node(Dict<Str*, hay_node*>* children) : type_tag_(208),
           children(children) {
  }
  OBJ_HEADER();
  Dict<Str*, hay_node*>* children;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(hay_node)
};


}  // namespace runtime_asdl

#endif  // RUNTIME_ASDL
