// arg_types.h is generated by frontend/flag_gen.py

#ifndef ARG_TYPES_H
#define ARG_TYPES_H

#include "frontend_flag_spec.h"  // for FlagSpec_c
#include "mylib.h"

namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Int;
using runtime_asdl::value__Float;
using runtime_asdl::value__Str;

namespace arg_types {

class cd {
 public:
  cd(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    L(static_cast<value__Bool*>(attrs->index_(new Str("L")))->b),
    P(static_cast<value__Bool*>(attrs->index_(new Str("P")))->b) {
  }
  bool L;
  bool P;
};

class command {
 public:
  command(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    v(static_cast<value__Bool*>(attrs->index_(new Str("v")))->b) {
  }
  bool v;
};

class dirs {
 public:
  dirs(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    c(static_cast<value__Bool*>(attrs->index_(new Str("c")))->b),
    l(static_cast<value__Bool*>(attrs->index_(new Str("l")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b),
    v(static_cast<value__Bool*>(attrs->index_(new Str("v")))->b) {
  }
  bool c;
  bool l;
  bool p;
  bool v;
};

class echo {
 public:
  echo(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    e(static_cast<value__Bool*>(attrs->index_(new Str("e")))->b),
    n(static_cast<value__Bool*>(attrs->index_(new Str("n")))->b) {
  }
  bool e;
  bool n;
};

class export_ {
 public:
  export_(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    f(static_cast<value__Bool*>(attrs->index_(new Str("f")))->b),
    n(static_cast<value__Bool*>(attrs->index_(new Str("n")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b) {
  }
  bool f;
  bool n;
  bool p;
};

class hash {
 public:
  hash(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    r(static_cast<value__Bool*>(attrs->index_(new Str("r")))->b) {
  }
  bool r;
};

class history {
 public:
  history(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    c(static_cast<value__Bool*>(attrs->index_(new Str("c")))->b),
    d(attrs->index_(new Str("d"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Int*>(attrs->index_(new Str("d")))->i) {
  }
  bool c;
  int d;
};

class jobs {
 public:
  jobs(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    debug(static_cast<value__Bool*>(attrs->index_(new Str("debug")))->b),
    l(static_cast<value__Bool*>(attrs->index_(new Str("l")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b) {
  }
  bool debug;
  bool l;
  bool p;
};

class main {
 public:
  main(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    ast_format(attrs->index_(new Str("ast_format"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("ast_format")))->s),
    c(attrs->index_(new Str("c"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("c")))->s),
    completion_display(attrs->index_(new Str("completion_display"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("completion_display")))->s),
    debug_file(attrs->index_(new Str("debug_file"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("debug_file")))->s),
    headless(static_cast<value__Bool*>(attrs->index_(new Str("headless")))->b),
    help(static_cast<value__Bool*>(attrs->index_(new Str("help")))->b),
    i(static_cast<value__Bool*>(attrs->index_(new Str("i")))->b),
    l(static_cast<value__Bool*>(attrs->index_(new Str("l")))->b),
    login(static_cast<value__Bool*>(attrs->index_(new Str("login")))->b),
    one_pass_parse(static_cast<value__Bool*>(attrs->index_(new Str("one_pass_parse")))->b),
    parser_mem_dump(attrs->index_(new Str("parser_mem_dump"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("parser_mem_dump")))->s),
    print_status(static_cast<value__Bool*>(attrs->index_(new Str("print_status")))->b),
    rcfile(attrs->index_(new Str("rcfile"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("rcfile")))->s),
    runtime_mem_dump(attrs->index_(new Str("runtime_mem_dump"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("runtime_mem_dump")))->s),
    version(static_cast<value__Bool*>(attrs->index_(new Str("version")))->b),
    xtrace_to_debug_file(static_cast<value__Bool*>(attrs->index_(new Str("xtrace_to_debug_file")))->b) {
  }
  Str* ast_format;
  Str* c;
  Str* completion_display;
  Str* debug_file;
  bool headless;
  bool help;
  bool i;
  bool l;
  bool login;
  bool one_pass_parse;
  Str* parser_mem_dump;
  bool print_status;
  Str* rcfile;
  Str* runtime_mem_dump;
  bool version;
  bool xtrace_to_debug_file;
};

class mapfile {
 public:
  mapfile(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    t(static_cast<value__Bool*>(attrs->index_(new Str("t")))->b) {
  }
  bool t;
};

class new_var {
 public:
  new_var(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    A(static_cast<value__Bool*>(attrs->index_(new Str("A")))->b),
    F(static_cast<value__Bool*>(attrs->index_(new Str("F")))->b),
    a(static_cast<value__Bool*>(attrs->index_(new Str("a")))->b),
    f(static_cast<value__Bool*>(attrs->index_(new Str("f")))->b),
    g(static_cast<value__Bool*>(attrs->index_(new Str("g")))->b),
    n(attrs->index_(new Str("n"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("n")))->s),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b),
    r(attrs->index_(new Str("r"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("r")))->s),
    x(attrs->index_(new Str("x"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("x")))->s) {
  }
  bool A;
  bool F;
  bool a;
  bool f;
  bool g;
  Str* n;
  bool p;
  Str* r;
  Str* x;
};

class printf {
 public:
  printf(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    v(attrs->index_(new Str("v"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("v")))->s) {
  }
  Str* v;
};

class pwd {
 public:
  pwd(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    L(static_cast<value__Bool*>(attrs->index_(new Str("L")))->b),
    P(static_cast<value__Bool*>(attrs->index_(new Str("P")))->b) {
  }
  bool L;
  bool P;
};

class read {
 public:
  read(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    Z(static_cast<value__Bool*>(attrs->index_(new Str("Z")))->b),
    a(attrs->index_(new Str("a"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("a")))->s),
    all(static_cast<value__Bool*>(attrs->index_(new Str("all")))->b),
    d(attrs->index_(new Str("d"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("d")))->s),
    line(static_cast<value__Bool*>(attrs->index_(new Str("line")))->b),
    n(attrs->index_(new Str("n"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Int*>(attrs->index_(new Str("n")))->i),
    p(attrs->index_(new Str("p"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("p")))->s),
    q(static_cast<value__Bool*>(attrs->index_(new Str("q")))->b),
    r(static_cast<value__Bool*>(attrs->index_(new Str("r")))->b),
    s(static_cast<value__Bool*>(attrs->index_(new Str("s")))->b),
    t(attrs->index_(new Str("t"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Float*>(attrs->index_(new Str("t")))->f),
    u(attrs->index_(new Str("u"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Int*>(attrs->index_(new Str("u")))->i),
    with_eol(static_cast<value__Bool*>(attrs->index_(new Str("with_eol")))->b) {
  }
  bool Z;
  Str* a;
  bool all;
  Str* d;
  bool line;
  int n;
  Str* p;
  bool q;
  bool r;
  bool s;
  float t;
  int u;
  bool with_eol;
};

class readonly {
 public:
  readonly(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    A(static_cast<value__Bool*>(attrs->index_(new Str("A")))->b),
    a(static_cast<value__Bool*>(attrs->index_(new Str("a")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b) {
  }
  bool A;
  bool a;
  bool p;
};

class runproc {
 public:
  runproc(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    h(static_cast<value__Bool*>(attrs->index_(new Str("h")))->b) {
  }
  bool h;
};

class shopt {
 public:
  shopt(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    o(static_cast<value__Bool*>(attrs->index_(new Str("o")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b),
    q(static_cast<value__Bool*>(attrs->index_(new Str("q")))->b),
    s(static_cast<value__Bool*>(attrs->index_(new Str("s")))->b),
    u(static_cast<value__Bool*>(attrs->index_(new Str("u")))->b) {
  }
  bool o;
  bool p;
  bool q;
  bool s;
  bool u;
};

class tea_main {
 public:
  tea_main(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    c(attrs->index_(new Str("c"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("c")))->s),
    n(static_cast<value__Bool*>(attrs->index_(new Str("n")))->b),
    translate(static_cast<value__Bool*>(attrs->index_(new Str("translate")))->b) {
  }
  Str* c;
  bool n;
  bool translate;
};

class trap {
 public:
  trap(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    l(static_cast<value__Bool*>(attrs->index_(new Str("l")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b) {
  }
  bool l;
  bool p;
};

class try_ {
 public:
  try_(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    assign(attrs->index_(new Str("assign"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("assign")))->s) {
  }
  Str* assign;
};

class type {
 public:
  type(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    P(static_cast<value__Bool*>(attrs->index_(new Str("P")))->b),
    f(static_cast<value__Bool*>(attrs->index_(new Str("f")))->b),
    p(static_cast<value__Bool*>(attrs->index_(new Str("p")))->b),
    t(static_cast<value__Bool*>(attrs->index_(new Str("t")))->b) {
  }
  bool P;
  bool f;
  bool p;
  bool t;
};

class unset {
 public:
  unset(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    f(static_cast<value__Bool*>(attrs->index_(new Str("f")))->b),
    v(static_cast<value__Bool*>(attrs->index_(new Str("v")))->b) {
  }
  bool f;
  bool v;
};

class wait {
 public:
  wait(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    n(static_cast<value__Bool*>(attrs->index_(new Str("n")))->b) {
  }
  bool n;
};

class write {
 public:
  write(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    end(attrs->index_(new Str("end"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("end")))->s),
    n(static_cast<value__Bool*>(attrs->index_(new Str("n")))->b),
    qsn(static_cast<value__Bool*>(attrs->index_(new Str("qsn")))->b),
    sep(attrs->index_(new Str("sep"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("sep")))->s),
    unicode(attrs->index_(new Str("unicode"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index_(new Str("unicode")))->s) {
  }
  Str* end;
  bool n;
  bool qsn;
  Str* sep;
  Str* unicode;
};

extern FlagSpec_c kFlagSpecs[];
extern FlagSpecAndMore_c kFlagSpecsAndMore[];
extern OilFlagSpec_c kOilFlagSpecs[];

}  // namespace arg_types

#endif  // ARG_TYPES_H
