// _gen/data_lang/nil8.asdl.h is generated by asdl_main.py

#ifndef NIL8_ASDL
#define NIL8_ASDL

#include <cstdint>

#include "mycpp/runtime.h"
#include "_gen/asdl/hnode.asdl.h"
using hnode_asdl::hnode_t;

namespace nil8_asdl {

// use struct instead of namespace so 'using' works consistently
#define ASDL_NAMES struct

class nvalue_t;

ASDL_NAMES nvalue_e {
  enum no_name {
  Null = 1,
  Bool = 2,
  Int = 3,
  Float = 4,
  Str = 5,
  Symbol = 6,
  List = 7,
  Record = 8,
  };
};

BigStr* nvalue_str(int tag, bool dot = true);

class nvalue_t {
 protected:
  nvalue_t() {
  }
 public:
  int tag() const {
    return ObjHeader::FromObject(this)->type_tag;
  }
  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);
  DISALLOW_COPY_AND_ASSIGN(nvalue_t)
};

class nvalue__Null : public nvalue_t {
 public:
  nvalue__Null() {}

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Null), 0);
  }


  DISALLOW_COPY_AND_ASSIGN(nvalue__Null)
};

class nvalue__Bool : public nvalue_t {
 public:
  nvalue__Bool(bool b)
      : b(b) {
  }

  static nvalue__Bool* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__Bool>(false);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Bool), 0);
  }

  bool b;

  DISALLOW_COPY_AND_ASSIGN(nvalue__Bool)
};

class nvalue__Int : public nvalue_t {
 public:
  nvalue__Int(int i)
      : i(i) {
  }

  static nvalue__Int* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__Int>(-1);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Int), 0);
  }

  int i;

  DISALLOW_COPY_AND_ASSIGN(nvalue__Int)
};

class nvalue__Float : public nvalue_t {
 public:
  nvalue__Float(double f)
      : f(f) {
  }

  static nvalue__Float* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__Float>(0.0);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Float), 0);
  }

  double f;

  DISALLOW_COPY_AND_ASSIGN(nvalue__Float)
};

class nvalue__Str : public nvalue_t {
 public:
  nvalue__Str(BigStr* s)
      : s(s) {
  }

  static nvalue__Str* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__Str>(kEmptyString);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Str), 1);
  }

  BigStr* s;

  DISALLOW_COPY_AND_ASSIGN(nvalue__Str)
};

class nvalue__Symbol : public nvalue_t {
 public:
  nvalue__Symbol(BigStr* s)
      : s(s) {
  }

  static nvalue__Symbol* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__Symbol>(kEmptyString);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Symbol), 1);
  }

  BigStr* s;

  DISALLOW_COPY_AND_ASSIGN(nvalue__Symbol)
};

class nvalue__List : public nvalue_t {
 public:
  nvalue__List(List<nvalue_t*>* items)
      : items(items) {
  }

  static nvalue__List* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__List>(alloc_lists ? Alloc<List<nvalue_t*>>() :
                               nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::List), 1);
  }

  List<nvalue_t*>* items;

  DISALLOW_COPY_AND_ASSIGN(nvalue__List)
};

class nvalue__Record : public nvalue_t {
 public:
  nvalue__Record(BigStr* name, List<nvalue_t*>* args, Dict<BigStr*, nvalue_t*>*
                 named)
      : name(name),
        args(args),
        named(named) {
  }

  static nvalue__Record* CreateNull(bool alloc_lists = false) { 
    return Alloc<nvalue__Record>(kEmptyString, alloc_lists ?
                                 Alloc<List<nvalue_t*>>() : nullptr, nullptr);
  }

  hnode_t* PrettyTree(Dict<int, bool>* seen = nullptr);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::AsdlClass(static_cast<uint16_t>(nvalue_e::Record), 3);
  }

  BigStr* name;
  List<nvalue_t*>* args;
  Dict<BigStr*, nvalue_t*>* named;

  DISALLOW_COPY_AND_ASSIGN(nvalue__Record)
};

extern GcGlobal<nvalue__Null> gnvalue__Null;
ASDL_NAMES nvalue {
  static nvalue__Null* Null;
  typedef nvalue__Bool Bool;
  typedef nvalue__Int Int;
  typedef nvalue__Float Float;
  typedef nvalue__Str Str;
  typedef nvalue__Symbol Symbol;
  typedef nvalue__List List;
  typedef nvalue__Record Record;
};


}  // namespace nil8_asdl

#endif  // NIL8_ASDL
