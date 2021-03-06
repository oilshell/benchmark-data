#include "id_kind_asdl.h"  // hack
using id_kind_asdl::Id_t;  // hack
using id_kind_asdl::Id_str;

#include <assert.h>

#include "asdl_runtime.h"  // generated code uses wrappers here

// Generated code uses these types
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__External;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::field;
using hnode_asdl::color_e;

#include "runtime_asdl.h"

namespace runtime_asdl {


hnode_t* assign_arg::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("assign_arg"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->var_name, color_e::StringConst);
    L->append(new field(new Str("var_name"), x0));

    if (this->rval) {  // MaybeType
      hnode_t* x1 = this->rval->PrettyTree();
      L->append(new field(new Str("rval"), x1));
    }

    hnode_t* x2 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x2));

  return out_node;
}

hnode_t* assign_arg::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("assign_arg"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->var_name, color_e::StringConst);
    L->append(new field(new Str("var_name"), x0));

    if (this->rval) {  // MaybeType
      hnode_t* x1 = this->rval->AbbreviatedTree();
      L->append(new field(new Str("rval"), x1));
    }

    hnode_t* x2 = new hnode__Leaf(str(this->spid), color_e::OtherConst);
    L->append(new field(new Str("spid"), x2));

  return out_node;
}

hnode_t* assign_arg::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* cmd_value_str(int tag) {
  switch (tag) {
  case cmd_value_e::Argv:
    return "cmd_value.Argv";
  case cmd_value_e::Assign:
    return "cmd_value.Assign";
  default:
    assert(0);
  }
}

hnode_t* cmd_value__Argv::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("cmd_value.Argv"));
  List<field*>* L = out_node->fields;
    if (this->argv && len(this->argv)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->argv); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("argv"), x0));
    }

    if (this->arg_spids && len(this->arg_spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->arg_spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("arg_spids"), x1));
    }

    if (this->block) {  // MaybeType
      hnode_t* x2 = new hnode__External(this->block);
      L->append(new field(new Str("block"), x2));
    }

  return out_node;
}

hnode_t* cmd_value__Argv::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("cmd_value.Argv"));
  List<field*>* L = out_node->fields;
    if (this->argv && len(this->argv)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->argv); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("argv"), x0));
    }

    if (this->arg_spids && len(this->arg_spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->arg_spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("arg_spids"), x1));
    }

    if (this->block) {  // MaybeType
      hnode_t* x2 = new hnode__External(this->block);
      L->append(new field(new Str("block"), x2));
    }

  return out_node;
}

hnode_t* cmd_value__Argv::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* cmd_value__Assign::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("cmd_value.Assign"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->builtin_id), color_e::OtherConst);
    L->append(new field(new Str("builtin_id"), x0));

    if (this->argv && len(this->argv)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->argv); !it.Done(); it.Next()) {
        Str* i1 = it.Value();
        x1->children->append(runtime::NewLeaf(i1, color_e::StringConst));
      }
      L->append(new field(new Str("argv"), x1));
    }

    if (this->arg_spids && len(this->arg_spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->arg_spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("arg_spids"), x2));
    }

    if (this->pairs && len(this->pairs)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<assign_arg*> it(this->pairs); !it.Done(); it.Next()) {
        assign_arg* i3 = it.Value();
        x3->children->append(i3->PrettyTree());
      }
      L->append(new field(new Str("pairs"), x3));
    }

  return out_node;
}

hnode_t* cmd_value__Assign::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("cmd_value.Assign"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->builtin_id), color_e::OtherConst);
    L->append(new field(new Str("builtin_id"), x0));

    if (this->argv && len(this->argv)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->argv); !it.Done(); it.Next()) {
        Str* i1 = it.Value();
        x1->children->append(runtime::NewLeaf(i1, color_e::StringConst));
      }
      L->append(new field(new Str("argv"), x1));
    }

    if (this->arg_spids && len(this->arg_spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->arg_spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("arg_spids"), x2));
    }

    if (this->pairs && len(this->pairs)) {  // ArrayType
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<assign_arg*> it(this->pairs); !it.Done(); it.Next()) {
        assign_arg* i3 = it.Value();
        x3->children->append(i3->AbbreviatedTree());
      }
      L->append(new field(new Str("pairs"), x3));
    }

  return out_node;
}

hnode_t* cmd_value__Assign::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* cmd_value_t::PrettyTree() {
  switch (this->tag_()) {
  case cmd_value_e::Argv: {
    cmd_value__Argv* obj = static_cast<cmd_value__Argv*>(this);
    return obj->PrettyTree();
  }
  case cmd_value_e::Assign: {
    cmd_value__Assign* obj = static_cast<cmd_value__Assign*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* cmd_value_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case cmd_value_e::Argv: {
    cmd_value__Argv* obj = static_cast<cmd_value__Argv*>(this);
    return obj->_AbbreviatedTree();
  }
  case cmd_value_e::Assign: {
    cmd_value__Assign* obj = static_cast<cmd_value__Assign*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* cmd_value_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case cmd_value_e::Argv: {
    cmd_value__Argv* obj = static_cast<cmd_value__Argv*>(this);
    return obj->AbbreviatedTree();
  }
  case cmd_value_e::Assign: {
    cmd_value__Assign* obj = static_cast<cmd_value__Assign*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* quote_str(quote_e tag) {
  switch (tag) {
  case quote_e::Default:
    return "quote.Default";
  case quote_e::FnMatch:
    return "quote.FnMatch";
  case quote_e::ERE:
    return "quote.ERE";
  default:
    assert(0);
  }
}
const char* part_value_str(int tag) {
  switch (tag) {
  case part_value_e::String:
    return "part_value.String";
  case part_value_e::Array:
    return "part_value.Array";
  default:
    assert(0);
  }
}

hnode_t* part_value__String::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("part_value.String"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

    hnode_t* x1 = new hnode__Leaf(this->quoted ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("quoted"), x1));

    hnode_t* x2 = new hnode__Leaf(this->do_split ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("do_split"), x2));

  return out_node;
}

hnode_t* part_value__String::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("part_value.String"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

    hnode_t* x1 = new hnode__Leaf(this->quoted ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("quoted"), x1));

    hnode_t* x2 = new hnode__Leaf(this->do_split ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("do_split"), x2));

  return out_node;
}

hnode_t* part_value__String::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* part_value__Array::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("part_value.Array"));
  List<field*>* L = out_node->fields;
    if (this->strs && len(this->strs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->strs); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("strs"), x0));
    }

  return out_node;
}

hnode_t* part_value__Array::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("part_value.Array"));
  List<field*>* L = out_node->fields;
    if (this->strs && len(this->strs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->strs); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("strs"), x0));
    }

  return out_node;
}

hnode_t* part_value__Array::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* part_value_t::PrettyTree() {
  switch (this->tag_()) {
  case part_value_e::String: {
    part_value__String* obj = static_cast<part_value__String*>(this);
    return obj->PrettyTree();
  }
  case part_value_e::Array: {
    part_value__Array* obj = static_cast<part_value__Array*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* part_value_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case part_value_e::String: {
    part_value__String* obj = static_cast<part_value__String*>(this);
    return obj->_AbbreviatedTree();
  }
  case part_value_e::Array: {
    part_value__Array* obj = static_cast<part_value__Array*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* part_value_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case part_value_e::String: {
    part_value__String* obj = static_cast<part_value__String*>(this);
    return obj->AbbreviatedTree();
  }
  case part_value_e::Array: {
    part_value__Array* obj = static_cast<part_value__Array*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* value_str(int tag) {
  switch (tag) {
  case value_e::Undef:
    return "value.Undef";
  case value_e::Str:
    return "value.Str";
  case value_e::Int:
    return "value.Int";
  case value_e::MaybeStrArray:
    return "value.MaybeStrArray";
  case value_e::AssocArray:
    return "value.AssocArray";
  case value_e::Bool:
    return "value.Bool";
  case value_e::Float:
    return "value.Float";
  case value_e::Eggex:
    return "value.Eggex";
  case value_e::Obj:
    return "value.Obj";
  default:
    assert(0);
  }
}

hnode_t* value__Undef::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Undef"));
  return out_node;
}

hnode_t* value__Undef::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Undef"));
  return out_node;
}

hnode_t* value__Undef::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__Str::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Str"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

  return out_node;
}

hnode_t* value__Str::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Str"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

  return out_node;
}

hnode_t* value__Str::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__Int::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Int"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->i), color_e::OtherConst);
    L->append(new field(new Str("i"), x0));

  return out_node;
}

hnode_t* value__Int::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Int"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->i), color_e::OtherConst);
    L->append(new field(new Str("i"), x0));

  return out_node;
}

hnode_t* value__Int::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__MaybeStrArray::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.MaybeStrArray"));
  List<field*>* L = out_node->fields;
    if (this->strs && len(this->strs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->strs); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("strs"), x0));
    }

  return out_node;
}

hnode_t* value__MaybeStrArray::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.MaybeStrArray"));
  List<field*>* L = out_node->fields;
    if (this->strs && len(this->strs)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->strs); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("strs"), x0));
    }

  return out_node;
}

hnode_t* value__MaybeStrArray::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__AssocArray::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.AssocArray"));
  List<field*>* L = out_node->fields;
    if (this->d) {
      auto m = new hnode__Leaf(new Str("map"), color_e::OtherConst);
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>({m}));
      for (DictIter<Str*, Str*> it(this->d); !it.Done(); it.Next()) {
        auto k0 = it.Key();
        auto v0 = it.Value();
        x0->children->append(runtime::NewLeaf(k0, color_e::StringConst));
        x0->children->append(runtime::NewLeaf(v0, color_e::StringConst));
      }
      L->append(new field(new Str ("d"), x0));
    }

  return out_node;
}

hnode_t* value__AssocArray::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.AssocArray"));
  List<field*>* L = out_node->fields;
    if (this->d) {
      auto m = new hnode__Leaf(new Str("map"), color_e::OtherConst);
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>({m}));
      for (DictIter<Str*, Str*> it(this->d); !it.Done(); it.Next()) {
        auto k0 = it.Key();
        auto v0 = it.Value();
        x0->children->append(runtime::NewLeaf(k0, color_e::StringConst));
        x0->children->append(runtime::NewLeaf(v0, color_e::StringConst));
      }
      L->append(new field(new Str ("d"), x0));
    }

  return out_node;
}

hnode_t* value__AssocArray::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__Bool::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Bool"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->b ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("b"), x0));

  return out_node;
}

hnode_t* value__Bool::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Bool"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->b ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("b"), x0));

  return out_node;
}

hnode_t* value__Bool::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__Float::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Float"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->f), color_e::OtherConst);
    L->append(new field(new Str("f"), x0));

  return out_node;
}

hnode_t* value__Float::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Float"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->f), color_e::OtherConst);
    L->append(new field(new Str("f"), x0));

  return out_node;
}

hnode_t* value__Float::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__Eggex::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Eggex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->expr);
    L->append(new field(new Str("expr"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->as_ere, color_e::StringConst);
    L->append(new field(new Str("as_ere"), x1));

  return out_node;
}

hnode_t* value__Eggex::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Eggex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->expr);
    L->append(new field(new Str("expr"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->as_ere, color_e::StringConst);
    L->append(new field(new Str("as_ere"), x1));

  return out_node;
}

hnode_t* value__Eggex::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value__Obj::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Obj"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->obj);
    L->append(new field(new Str("obj"), x0));

  return out_node;
}

hnode_t* value__Obj::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("value.Obj"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->obj);
    L->append(new field(new Str("obj"), x0));

  return out_node;
}

hnode_t* value__Obj::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* value_t::PrettyTree() {
  switch (this->tag_()) {
  case value_e::Undef: {
    value__Undef* obj = static_cast<value__Undef*>(this);
    return obj->PrettyTree();
  }
  case value_e::Str: {
    value__Str* obj = static_cast<value__Str*>(this);
    return obj->PrettyTree();
  }
  case value_e::Int: {
    value__Int* obj = static_cast<value__Int*>(this);
    return obj->PrettyTree();
  }
  case value_e::MaybeStrArray: {
    value__MaybeStrArray* obj = static_cast<value__MaybeStrArray*>(this);
    return obj->PrettyTree();
  }
  case value_e::AssocArray: {
    value__AssocArray* obj = static_cast<value__AssocArray*>(this);
    return obj->PrettyTree();
  }
  case value_e::Bool: {
    value__Bool* obj = static_cast<value__Bool*>(this);
    return obj->PrettyTree();
  }
  case value_e::Float: {
    value__Float* obj = static_cast<value__Float*>(this);
    return obj->PrettyTree();
  }
  case value_e::Eggex: {
    value__Eggex* obj = static_cast<value__Eggex*>(this);
    return obj->PrettyTree();
  }
  case value_e::Obj: {
    value__Obj* obj = static_cast<value__Obj*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* value_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case value_e::Undef: {
    value__Undef* obj = static_cast<value__Undef*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::Str: {
    value__Str* obj = static_cast<value__Str*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::Int: {
    value__Int* obj = static_cast<value__Int*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::MaybeStrArray: {
    value__MaybeStrArray* obj = static_cast<value__MaybeStrArray*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::AssocArray: {
    value__AssocArray* obj = static_cast<value__AssocArray*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::Bool: {
    value__Bool* obj = static_cast<value__Bool*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::Float: {
    value__Float* obj = static_cast<value__Float*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::Eggex: {
    value__Eggex* obj = static_cast<value__Eggex*>(this);
    return obj->_AbbreviatedTree();
  }
  case value_e::Obj: {
    value__Obj* obj = static_cast<value__Obj*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* value_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case value_e::Undef: {
    value__Undef* obj = static_cast<value__Undef*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::Str: {
    value__Str* obj = static_cast<value__Str*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::Int: {
    value__Int* obj = static_cast<value__Int*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::MaybeStrArray: {
    value__MaybeStrArray* obj = static_cast<value__MaybeStrArray*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::AssocArray: {
    value__AssocArray* obj = static_cast<value__AssocArray*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::Bool: {
    value__Bool* obj = static_cast<value__Bool*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::Float: {
    value__Float* obj = static_cast<value__Float*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::Eggex: {
    value__Eggex* obj = static_cast<value__Eggex*>(this);
    return obj->AbbreviatedTree();
  }
  case value_e::Obj: {
    value__Obj* obj = static_cast<value__Obj*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* a_index_str(int tag) {
  switch (tag) {
  case a_index_e::Str:
    return "a_index.Str";
  case a_index_e::Int:
    return "a_index.Int";
  default:
    assert(0);
  }
}

hnode_t* a_index__Str::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("a_index.Str"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

  return out_node;
}

hnode_t* a_index__Str::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("a_index.Str"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->s, color_e::StringConst);
    L->append(new field(new Str("s"), x0));

  return out_node;
}

hnode_t* a_index__Str::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* a_index__Int::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("a_index.Int"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->i), color_e::OtherConst);
    L->append(new field(new Str("i"), x0));

  return out_node;
}

hnode_t* a_index__Int::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("a_index.Int"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->i), color_e::OtherConst);
    L->append(new field(new Str("i"), x0));

  return out_node;
}

hnode_t* a_index__Int::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* a_index_t::PrettyTree() {
  switch (this->tag_()) {
  case a_index_e::Str: {
    a_index__Str* obj = static_cast<a_index__Str*>(this);
    return obj->PrettyTree();
  }
  case a_index_e::Int: {
    a_index__Int* obj = static_cast<a_index__Int*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* a_index_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case a_index_e::Str: {
    a_index__Str* obj = static_cast<a_index__Str*>(this);
    return obj->_AbbreviatedTree();
  }
  case a_index_e::Int: {
    a_index__Int* obj = static_cast<a_index__Int*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* a_index_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case a_index_e::Str: {
    a_index__Str* obj = static_cast<a_index__Str*>(this);
    return obj->AbbreviatedTree();
  }
  case a_index_e::Int: {
    a_index__Int* obj = static_cast<a_index__Int*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* cell::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("cell"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->exported ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("exported"), x0));

    hnode_t* x1 = new hnode__Leaf(this->readonly ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("readonly"), x1));

    hnode_t* x2 = new hnode__Leaf(this->nameref ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("nameref"), x2));

    hnode_t* x3 = this->val->PrettyTree();
    L->append(new field(new Str("val"), x3));

  return out_node;
}

hnode_t* cell::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("cell"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(this->exported ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("exported"), x0));

    hnode_t* x1 = new hnode__Leaf(this->readonly ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("readonly"), x1));

    hnode_t* x2 = new hnode__Leaf(this->nameref ? runtime::TRUE_STR :
                                  runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("nameref"), x2));

    hnode_t* x3 = this->val->AbbreviatedTree();
    L->append(new field(new Str("val"), x3));

  return out_node;
}

hnode_t* cell::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* scope_str(scope_e tag) {
  switch (tag) {
  case scope_e::LocalOnly:
    return "scope.LocalOnly";
  case scope_e::GlobalOnly:
    return "scope.GlobalOnly";
  case scope_e::Dynamic:
    return "scope.Dynamic";
  case scope_e::LocalOrGlobal:
    return "scope.LocalOrGlobal";
  default:
    assert(0);
  }
}
const char* lvalue_str(int tag) {
  switch (tag) {
  case lvalue_e::Named:
    return "lvalue.Named";
  case lvalue_e::Indexed:
    return "lvalue.Indexed";
  case lvalue_e::Keyed:
    return "lvalue.Keyed";
  case lvalue_e::ObjIndex:
    return "lvalue.ObjIndex";
  case lvalue_e::ObjAttr:
    return "lvalue.ObjAttr";
  default:
    assert(0);
  }
}

hnode_t* lvalue__Named::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.Named"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->spids); !it.Done(); it.Next()) {
        int i1 = it.Value();
        x1->children->append(new hnode__Leaf(str(i1), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x1));
    }

  return out_node;
}

hnode_t* lvalue__Named::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.Named"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* lvalue__Named::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* lvalue__Indexed::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.Indexed"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->index), color_e::OtherConst);
    L->append(new field(new Str("index"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* lvalue__Indexed::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.Indexed"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->index), color_e::OtherConst);
    L->append(new field(new Str("index"), x1));

  return out_node;
}

hnode_t* lvalue__Indexed::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* lvalue__Keyed::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.Keyed"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->key, color_e::StringConst);
    L->append(new field(new Str("key"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* lvalue__Keyed::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.Keyed"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->key, color_e::StringConst);
    L->append(new field(new Str("key"), x1));

  return out_node;
}

hnode_t* lvalue__Keyed::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* lvalue__ObjIndex::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.ObjIndex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->obj);
    L->append(new field(new Str("obj"), x0));

    hnode_t* x1 = new hnode__External(this->index);
    L->append(new field(new Str("index"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* lvalue__ObjIndex::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.ObjIndex"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->obj);
    L->append(new field(new Str("obj"), x0));

    hnode_t* x1 = new hnode__External(this->index);
    L->append(new field(new Str("index"), x1));

  return out_node;
}

hnode_t* lvalue__ObjIndex::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* lvalue__ObjAttr::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.ObjAttr"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->obj);
    L->append(new field(new Str("obj"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->attr, color_e::StringConst);
    L->append(new field(new Str("attr"), x1));

    if (this->spids && len(this->spids)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->spids); !it.Done(); it.Next()) {
        int i2 = it.Value();
        x2->children->append(new hnode__Leaf(str(i2), color_e::OtherConst));
      }
      L->append(new field(new Str("spids"), x2));
    }

  return out_node;
}

hnode_t* lvalue__ObjAttr::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("lvalue.ObjAttr"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__External(this->obj);
    L->append(new field(new Str("obj"), x0));

    hnode_t* x1 = runtime::NewLeaf(this->attr, color_e::StringConst);
    L->append(new field(new Str("attr"), x1));

  return out_node;
}

hnode_t* lvalue__ObjAttr::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* lvalue_t::PrettyTree() {
  switch (this->tag_()) {
  case lvalue_e::Named: {
    lvalue__Named* obj = static_cast<lvalue__Named*>(this);
    return obj->PrettyTree();
  }
  case lvalue_e::Indexed: {
    lvalue__Indexed* obj = static_cast<lvalue__Indexed*>(this);
    return obj->PrettyTree();
  }
  case lvalue_e::Keyed: {
    lvalue__Keyed* obj = static_cast<lvalue__Keyed*>(this);
    return obj->PrettyTree();
  }
  case lvalue_e::ObjIndex: {
    lvalue__ObjIndex* obj = static_cast<lvalue__ObjIndex*>(this);
    return obj->PrettyTree();
  }
  case lvalue_e::ObjAttr: {
    lvalue__ObjAttr* obj = static_cast<lvalue__ObjAttr*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* lvalue_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case lvalue_e::Named: {
    lvalue__Named* obj = static_cast<lvalue__Named*>(this);
    return obj->_AbbreviatedTree();
  }
  case lvalue_e::Indexed: {
    lvalue__Indexed* obj = static_cast<lvalue__Indexed*>(this);
    return obj->_AbbreviatedTree();
  }
  case lvalue_e::Keyed: {
    lvalue__Keyed* obj = static_cast<lvalue__Keyed*>(this);
    return obj->_AbbreviatedTree();
  }
  case lvalue_e::ObjIndex: {
    lvalue__ObjIndex* obj = static_cast<lvalue__ObjIndex*>(this);
    return obj->_AbbreviatedTree();
  }
  case lvalue_e::ObjAttr: {
    lvalue__ObjAttr* obj = static_cast<lvalue__ObjAttr*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* lvalue_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case lvalue_e::Named: {
    lvalue__Named* obj = static_cast<lvalue__Named*>(this);
    return obj->AbbreviatedTree();
  }
  case lvalue_e::Indexed: {
    lvalue__Indexed* obj = static_cast<lvalue__Indexed*>(this);
    return obj->AbbreviatedTree();
  }
  case lvalue_e::Keyed: {
    lvalue__Keyed* obj = static_cast<lvalue__Keyed*>(this);
    return obj->AbbreviatedTree();
  }
  case lvalue_e::ObjIndex: {
    lvalue__ObjIndex* obj = static_cast<lvalue__ObjIndex*>(this);
    return obj->AbbreviatedTree();
  }
  case lvalue_e::ObjAttr: {
    lvalue__ObjAttr* obj = static_cast<lvalue__ObjAttr*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* redirect_arg_str(int tag) {
  switch (tag) {
  case redirect_arg_e::Path:
    return "redirect_arg.Path";
  case redirect_arg_e::CopyFd:
    return "redirect_arg.CopyFd";
  case redirect_arg_e::MoveFd:
    return "redirect_arg.MoveFd";
  case redirect_arg_e::CloseFd:
    return "redirect_arg.CloseFd";
  case redirect_arg_e::HereDoc:
    return "redirect_arg.HereDoc";
  default:
    assert(0);
  }
}

hnode_t* redirect_arg__Path::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.Path"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->filename, color_e::StringConst);
    L->append(new field(new Str("filename"), x0));

  return out_node;
}

hnode_t* redirect_arg__Path::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.Path"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->filename, color_e::StringConst);
    L->append(new field(new Str("filename"), x0));

  return out_node;
}

hnode_t* redirect_arg__Path::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redirect_arg__CopyFd::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.CopyFd"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->target_fd), color_e::OtherConst);
    L->append(new field(new Str("target_fd"), x0));

  return out_node;
}

hnode_t* redirect_arg__CopyFd::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.CopyFd"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->target_fd), color_e::OtherConst);
    L->append(new field(new Str("target_fd"), x0));

  return out_node;
}

hnode_t* redirect_arg__CopyFd::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redirect_arg__MoveFd::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.MoveFd"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->target_fd), color_e::OtherConst);
    L->append(new field(new Str("target_fd"), x0));

  return out_node;
}

hnode_t* redirect_arg__MoveFd::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.MoveFd"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->target_fd), color_e::OtherConst);
    L->append(new field(new Str("target_fd"), x0));

  return out_node;
}

hnode_t* redirect_arg__MoveFd::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redirect_arg__CloseFd::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.CloseFd"));
  return out_node;
}

hnode_t* redirect_arg__CloseFd::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.CloseFd"));
  return out_node;
}

hnode_t* redirect_arg__CloseFd::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redirect_arg__HereDoc::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.HereDoc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->body, color_e::StringConst);
    L->append(new field(new Str("body"), x0));

  return out_node;
}

hnode_t* redirect_arg__HereDoc::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect_arg.HereDoc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->body, color_e::StringConst);
    L->append(new field(new Str("body"), x0));

  return out_node;
}

hnode_t* redirect_arg__HereDoc::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* redirect_arg_t::PrettyTree() {
  switch (this->tag_()) {
  case redirect_arg_e::Path: {
    redirect_arg__Path* obj = static_cast<redirect_arg__Path*>(this);
    return obj->PrettyTree();
  }
  case redirect_arg_e::CopyFd: {
    redirect_arg__CopyFd* obj = static_cast<redirect_arg__CopyFd*>(this);
    return obj->PrettyTree();
  }
  case redirect_arg_e::MoveFd: {
    redirect_arg__MoveFd* obj = static_cast<redirect_arg__MoveFd*>(this);
    return obj->PrettyTree();
  }
  case redirect_arg_e::CloseFd: {
    redirect_arg__CloseFd* obj = static_cast<redirect_arg__CloseFd*>(this);
    return obj->PrettyTree();
  }
  case redirect_arg_e::HereDoc: {
    redirect_arg__HereDoc* obj = static_cast<redirect_arg__HereDoc*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* redirect_arg_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case redirect_arg_e::Path: {
    redirect_arg__Path* obj = static_cast<redirect_arg__Path*>(this);
    return obj->_AbbreviatedTree();
  }
  case redirect_arg_e::CopyFd: {
    redirect_arg__CopyFd* obj = static_cast<redirect_arg__CopyFd*>(this);
    return obj->_AbbreviatedTree();
  }
  case redirect_arg_e::MoveFd: {
    redirect_arg__MoveFd* obj = static_cast<redirect_arg__MoveFd*>(this);
    return obj->_AbbreviatedTree();
  }
  case redirect_arg_e::CloseFd: {
    redirect_arg__CloseFd* obj = static_cast<redirect_arg__CloseFd*>(this);
    return obj->_AbbreviatedTree();
  }
  case redirect_arg_e::HereDoc: {
    redirect_arg__HereDoc* obj = static_cast<redirect_arg__HereDoc*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* redirect_arg_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case redirect_arg_e::Path: {
    redirect_arg__Path* obj = static_cast<redirect_arg__Path*>(this);
    return obj->AbbreviatedTree();
  }
  case redirect_arg_e::CopyFd: {
    redirect_arg__CopyFd* obj = static_cast<redirect_arg__CopyFd*>(this);
    return obj->AbbreviatedTree();
  }
  case redirect_arg_e::MoveFd: {
    redirect_arg__MoveFd* obj = static_cast<redirect_arg__MoveFd*>(this);
    return obj->AbbreviatedTree();
  }
  case redirect_arg_e::CloseFd: {
    redirect_arg__CloseFd* obj = static_cast<redirect_arg__CloseFd*>(this);
    return obj->AbbreviatedTree();
  }
  case redirect_arg_e::HereDoc: {
    redirect_arg__HereDoc* obj = static_cast<redirect_arg__HereDoc*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* redirect::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->op_spid), color_e::OtherConst);
    L->append(new field(new Str("op_spid"), x1));

    hnode_t* x2 = new hnode__External(this->loc);
    L->append(new field(new Str("loc"), x2));

    hnode_t* x3 = this->arg->PrettyTree();
    L->append(new field(new Str("arg"), x3));

  return out_node;
}

hnode_t* redirect::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("redirect"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(new Str(Id_str(this->op_id)),
                                  color_e::UserType);
    L->append(new field(new Str("op_id"), x0));

    hnode_t* x1 = new hnode__Leaf(str(this->op_spid), color_e::OtherConst);
    L->append(new field(new Str("op_spid"), x1));

    hnode_t* x2 = new hnode__External(this->loc);
    L->append(new field(new Str("loc"), x2));

    hnode_t* x3 = this->arg->AbbreviatedTree();
    L->append(new field(new Str("arg"), x3));

  return out_node;
}

hnode_t* redirect::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* job_status_str(int tag) {
  switch (tag) {
  case job_status_e::Proc:
    return "job_status.Proc";
  case job_status_e::Pipeline:
    return "job_status.Pipeline";
  default:
    assert(0);
  }
}

hnode_t* job_status__Proc::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("job_status.Proc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->code), color_e::OtherConst);
    L->append(new field(new Str("code"), x0));

  return out_node;
}

hnode_t* job_status__Proc::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("job_status.Proc"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = new hnode__Leaf(str(this->code), color_e::OtherConst);
    L->append(new field(new Str("code"), x0));

  return out_node;
}

hnode_t* job_status__Proc::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* job_status__Pipeline::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("job_status.Pipeline"));
  List<field*>* L = out_node->fields;
    if (this->codes && len(this->codes)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->codes); !it.Done(); it.Next()) {
        int i0 = it.Value();
        x0->children->append(new hnode__Leaf(str(i0), color_e::OtherConst));
      }
      L->append(new field(new Str("codes"), x0));
    }

  return out_node;
}

hnode_t* job_status__Pipeline::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("job_status.Pipeline"));
  List<field*>* L = out_node->fields;
    if (this->codes && len(this->codes)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<int> it(this->codes); !it.Done(); it.Next()) {
        int i0 = it.Value();
        x0->children->append(new hnode__Leaf(str(i0), color_e::OtherConst));
      }
      L->append(new field(new Str("codes"), x0));
    }

  return out_node;
}

hnode_t* job_status__Pipeline::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* job_status_t::PrettyTree() {
  switch (this->tag_()) {
  case job_status_e::Proc: {
    job_status__Proc* obj = static_cast<job_status__Proc*>(this);
    return obj->PrettyTree();
  }
  case job_status_e::Pipeline: {
    job_status__Pipeline* obj = static_cast<job_status__Pipeline*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* job_status_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case job_status_e::Proc: {
    job_status__Proc* obj = static_cast<job_status__Proc*>(this);
    return obj->_AbbreviatedTree();
  }
  case job_status_e::Pipeline: {
    job_status__Pipeline* obj = static_cast<job_status__Pipeline*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* job_status_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case job_status_e::Proc: {
    job_status__Proc* obj = static_cast<job_status__Proc*>(this);
    return obj->AbbreviatedTree();
  }
  case job_status_e::Pipeline: {
    job_status__Pipeline* obj = static_cast<job_status__Pipeline*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}
const char* span_str(span_e tag) {
  switch (tag) {
  case span_e::Black:
    return "span.Black";
  case span_e::Delim:
    return "span.Delim";
  case span_e::Backslash:
    return "span.Backslash";
  default:
    assert(0);
  }
}
const char* emit_str(int tag) {
  switch (tag) {
  case emit_i::Part:
    return "emit.Part";
  case emit_i::Delim:
    return "emit.Delim";
  case emit_i::Empty:
    return "emit.Empty";
  case emit_i::Escape:
    return "emit.Escape";
  case emit_i::Nothing:
    return "emit.Nothing";
  default:
    assert(0);
  }
}
const char* state_str(int tag) {
  switch (tag) {
  case state_i::Invalid:
    return "state.Invalid";
  case state_i::Start:
    return "state.Start";
  case state_i::DE_White1:
    return "state.DE_White1";
  case state_i::DE_Gray:
    return "state.DE_Gray";
  case state_i::DE_White2:
    return "state.DE_White2";
  case state_i::Black:
    return "state.Black";
  case state_i::Backslash:
    return "state.Backslash";
  case state_i::Done:
    return "state.Done";
  default:
    assert(0);
  }
}
const char* char_kind_str(int tag) {
  switch (tag) {
  case char_kind_i::DE_White:
    return "char_kind.DE_White";
  case char_kind_i::DE_Gray:
    return "char_kind.DE_Gray";
  case char_kind_i::Black:
    return "char_kind.Black";
  case char_kind_i::Backslash:
    return "char_kind.Backslash";
  case char_kind_i::Sentinel:
    return "char_kind.Sentinel";
  default:
    assert(0);
  }
}
const char* job_state_str(job_state_e tag) {
  switch (tag) {
  case job_state_e::Running:
    return "job_state.Running";
  case job_state_e::Done:
    return "job_state.Done";
  case job_state_e::Stopped:
    return "job_state.Stopped";
  default:
    assert(0);
  }
}
const char* word_style_str(word_style_e tag) {
  switch (tag) {
  case word_style_e::Expr:
    return "word_style.Expr";
  case word_style_e::Unquoted:
    return "word_style.Unquoted";
  case word_style_e::DQ:
    return "word_style.DQ";
  case word_style_e::SQ:
    return "word_style.SQ";
  default:
    assert(0);
  }
}
const char* flag_type_str(int tag) {
  switch (tag) {
  case flag_type_e::Bool:
    return "flag_type.Bool";
  case flag_type_e::Int:
    return "flag_type.Int";
  case flag_type_e::Float:
    return "flag_type.Float";
  case flag_type_e::Str:
    return "flag_type.Str";
  case flag_type_e::Enum:
    return "flag_type.Enum";
  default:
    assert(0);
  }
}

hnode_t* flag_type__Bool::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Bool"));
  return out_node;
}

hnode_t* flag_type__Bool::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Bool"));
  return out_node;
}

hnode_t* flag_type__Bool::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* flag_type__Int::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Int"));
  return out_node;
}

hnode_t* flag_type__Int::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Int"));
  return out_node;
}

hnode_t* flag_type__Int::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* flag_type__Float::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Float"));
  return out_node;
}

hnode_t* flag_type__Float::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Float"));
  return out_node;
}

hnode_t* flag_type__Float::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* flag_type__Str::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Str"));
  return out_node;
}

hnode_t* flag_type__Str::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Str"));
  return out_node;
}

hnode_t* flag_type__Str::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* flag_type__Enum::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Enum"));
  List<field*>* L = out_node->fields;
    if (this->alts && len(this->alts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->alts); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("alts"), x0));
    }

  return out_node;
}

hnode_t* flag_type__Enum::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("flag_type.Enum"));
  List<field*>* L = out_node->fields;
    if (this->alts && len(this->alts)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->alts); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("alts"), x0));
    }

  return out_node;
}

hnode_t* flag_type__Enum::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* flag_type_t::PrettyTree() {
  switch (this->tag_()) {
  case flag_type_e::Bool: {
    flag_type__Bool* obj = static_cast<flag_type__Bool*>(this);
    return obj->PrettyTree();
  }
  case flag_type_e::Int: {
    flag_type__Int* obj = static_cast<flag_type__Int*>(this);
    return obj->PrettyTree();
  }
  case flag_type_e::Float: {
    flag_type__Float* obj = static_cast<flag_type__Float*>(this);
    return obj->PrettyTree();
  }
  case flag_type_e::Str: {
    flag_type__Str* obj = static_cast<flag_type__Str*>(this);
    return obj->PrettyTree();
  }
  case flag_type_e::Enum: {
    flag_type__Enum* obj = static_cast<flag_type__Enum*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* flag_type_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case flag_type_e::Bool: {
    flag_type__Bool* obj = static_cast<flag_type__Bool*>(this);
    return obj->_AbbreviatedTree();
  }
  case flag_type_e::Int: {
    flag_type__Int* obj = static_cast<flag_type__Int*>(this);
    return obj->_AbbreviatedTree();
  }
  case flag_type_e::Float: {
    flag_type__Float* obj = static_cast<flag_type__Float*>(this);
    return obj->_AbbreviatedTree();
  }
  case flag_type_e::Str: {
    flag_type__Str* obj = static_cast<flag_type__Str*>(this);
    return obj->_AbbreviatedTree();
  }
  case flag_type_e::Enum: {
    flag_type__Enum* obj = static_cast<flag_type__Enum*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* flag_type_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case flag_type_e::Bool: {
    flag_type__Bool* obj = static_cast<flag_type__Bool*>(this);
    return obj->AbbreviatedTree();
  }
  case flag_type_e::Int: {
    flag_type__Int* obj = static_cast<flag_type__Int*>(this);
    return obj->AbbreviatedTree();
  }
  case flag_type_e::Float: {
    flag_type__Float* obj = static_cast<flag_type__Float*>(this);
    return obj->AbbreviatedTree();
  }
  case flag_type_e::Str: {
    flag_type__Str* obj = static_cast<flag_type__Str*>(this);
    return obj->AbbreviatedTree();
  }
  case flag_type_e::Enum: {
    flag_type__Enum* obj = static_cast<flag_type__Enum*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* SetToArg_::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("SetToArg_"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->flag_type->PrettyTree();
    L->append(new field(new Str("flag_type"), x1));

    hnode_t* x2 = new hnode__Leaf(this->quit_parsing_flags ? runtime::TRUE_STR
                                  : runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("quit_parsing_flags"), x2));

  return out_node;
}

hnode_t* SetToArg_::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("SetToArg_"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

    hnode_t* x1 = this->flag_type->AbbreviatedTree();
    L->append(new field(new Str("flag_type"), x1));

    hnode_t* x2 = new hnode__Leaf(this->quit_parsing_flags ? runtime::TRUE_STR
                                  : runtime::FALSE_STR, color_e::OtherConst);
    L->append(new field(new Str("quit_parsing_flags"), x2));

  return out_node;
}

hnode_t* SetToArg_::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* FlagSpec_::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("FlagSpec_"));
  List<field*>* L = out_node->fields;
    if (this->arity0 && len(this->arity0)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->arity0); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("arity0"), x0));
    }

    if (this->arity1) {
      auto m = new hnode__Leaf(new Str("map"), color_e::OtherConst);
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>({m}));
      for (DictIter<Str*, SetToArg_*> it(this->arity1); !it.Done(); it.Next()) {
        auto k1 = it.Key();
        auto v1 = it.Value();
        x1->children->append(runtime::NewLeaf(k1, color_e::StringConst));
        x1->children->append(v1->PrettyTree());
      }
      L->append(new field(new Str ("arity1"), x1));
    }

    if (this->options && len(this->options)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->options); !it.Done(); it.Next()) {
        Str* i2 = it.Value();
        x2->children->append(runtime::NewLeaf(i2, color_e::StringConst));
      }
      L->append(new field(new Str("options"), x2));
    }

    if (this->defaults) {
      auto m = new hnode__Leaf(new Str("map"), color_e::OtherConst);
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>({m}));
      for (DictIter<Str*, value_t*> it(this->defaults); !it.Done(); it.Next()) {
        auto k3 = it.Key();
        auto v3 = it.Value();
        x3->children->append(runtime::NewLeaf(k3, color_e::StringConst));
        x3->children->append(v3->PrettyTree());
      }
      L->append(new field(new Str ("defaults"), x3));
    }

  return out_node;
}

hnode_t* FlagSpec_::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("FlagSpec_"));
  List<field*>* L = out_node->fields;
    if (this->arity0 && len(this->arity0)) {  // ArrayType
      hnode__Array* x0 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->arity0); !it.Done(); it.Next()) {
        Str* i0 = it.Value();
        x0->children->append(runtime::NewLeaf(i0, color_e::StringConst));
      }
      L->append(new field(new Str("arity0"), x0));
    }

    if (this->arity1) {
      auto m = new hnode__Leaf(new Str("map"), color_e::OtherConst);
      hnode__Array* x1 = new hnode__Array(new List<hnode_t*>({m}));
      for (DictIter<Str*, SetToArg_*> it(this->arity1); !it.Done(); it.Next()) {
        auto k1 = it.Key();
        auto v1 = it.Value();
        x1->children->append(runtime::NewLeaf(k1, color_e::StringConst));
        x1->children->append(v1->AbbreviatedTree());
      }
      L->append(new field(new Str ("arity1"), x1));
    }

    if (this->options && len(this->options)) {  // ArrayType
      hnode__Array* x2 = new hnode__Array(new List<hnode_t*>());
      for (ListIter<Str*> it(this->options); !it.Done(); it.Next()) {
        Str* i2 = it.Value();
        x2->children->append(runtime::NewLeaf(i2, color_e::StringConst));
      }
      L->append(new field(new Str("options"), x2));
    }

    if (this->defaults) {
      auto m = new hnode__Leaf(new Str("map"), color_e::OtherConst);
      hnode__Array* x3 = new hnode__Array(new List<hnode_t*>({m}));
      for (DictIter<Str*, value_t*> it(this->defaults); !it.Done(); it.Next()) {
        auto k3 = it.Key();
        auto v3 = it.Value();
        x3->children->append(runtime::NewLeaf(k3, color_e::StringConst));
        x3->children->append(v3->AbbreviatedTree());
      }
      L->append(new field(new Str ("defaults"), x3));
    }

  return out_node;
}

hnode_t* FlagSpec_::AbbreviatedTree() {
  return _AbbreviatedTree();
}
const char* action_str(int tag) {
  switch (tag) {
  case action_e::SetToArg:
    return "action.SetToArg";
  case action_e::SetBoolToArg:
    return "action.SetBoolToArg";
  default:
    assert(0);
  }
}

hnode_t* action__SetBoolToArg::PrettyTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("action.SetBoolToArg"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* action__SetBoolToArg::_AbbreviatedTree() {
  hnode__Record* out_node = runtime::NewRecord(new Str("action.SetBoolToArg"));
  List<field*>* L = out_node->fields;
    hnode_t* x0 = runtime::NewLeaf(this->name, color_e::StringConst);
    L->append(new field(new Str("name"), x0));

  return out_node;
}

hnode_t* action__SetBoolToArg::AbbreviatedTree() {
  return _AbbreviatedTree();
}

hnode_t* action_t::PrettyTree() {
  switch (this->tag_()) {
  case action_e::SetToArg: {
    SetToArg_* obj = static_cast<SetToArg_*>(this);
    return obj->PrettyTree();
  }
  case action_e::SetBoolToArg: {
    action__SetBoolToArg* obj = static_cast<action__SetBoolToArg*>(this);
    return obj->PrettyTree();
  }
  default:
    assert(0);
  }
}

hnode_t* action_t::_AbbreviatedTree() {
  switch (this->tag_()) {
  case action_e::SetToArg: {
    SetToArg_* obj = static_cast<SetToArg_*>(this);
    return obj->_AbbreviatedTree();
  }
  case action_e::SetBoolToArg: {
    action__SetBoolToArg* obj = static_cast<action__SetBoolToArg*>(this);
    return obj->_AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

hnode_t* action_t::AbbreviatedTree() {
  switch (this->tag_()) {
  case action_e::SetToArg: {
    SetToArg_* obj = static_cast<SetToArg_*>(this);
    return obj->AbbreviatedTree();
  }
  case action_e::SetBoolToArg: {
    action__SetBoolToArg* obj = static_cast<action__SetBoolToArg*>(this);
    return obj->AbbreviatedTree();
  }
  default:
    assert(0);
  }
}

}  // namespace runtime_asdl
