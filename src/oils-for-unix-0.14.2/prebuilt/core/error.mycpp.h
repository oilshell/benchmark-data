// prebuilt/core/error.mycpp.h: GENERATED by mycpp

#ifndef CORE_ERROR_MYCPP_H
#define CORE_ERROR_MYCPP_H

#include "_gen/asdl/hnode.asdl.h"
#include "cpp/qsn.h"
#include "mycpp/runtime.h"
#include "_gen/frontend/syntax.asdl.h"
namespace error {  // forward declare

  class Usage;
  class _ErrorWithLocation;
  class Runtime;
  class Parse;
  class FailGlob;
  class RedirectEval;
  class FatalRuntime;
  class Strict;
  class ErrExit;
  class Expr;

}  // forward declare namespace error

namespace pyerror {  // forward declare


}  // forward declare namespace pyerror

namespace error {  // declare

extern int NO_SPID;
class Usage {
 public:
  Usage(Str* msg, int span_id = NO_SPID);

  GC_OBJ(header_);
  Str* msg;
  int span_id;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassScanned(1, sizeof(Usage));
  }

  DISALLOW_COPY_AND_ASSIGN(Usage)
};

class _ErrorWithLocation {
 public:
  _ErrorWithLocation(Str* msg, syntax_asdl::loc_t* location);
  bool HasLocation();
  Str* UserErrorString();

  GC_OBJ(header_);
  syntax_asdl::loc_t* location;
  Str* msg;
  
  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(_ErrorWithLocation, location))
         | maskbit(offsetof(_ErrorWithLocation, msg));
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(_ErrorWithLocation));
  }

  DISALLOW_COPY_AND_ASSIGN(_ErrorWithLocation)
};

class Runtime {
 public:
  Runtime(Str* msg);
  Str* UserErrorString();

  GC_OBJ(header_);
  Str* msg;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassScanned(1, sizeof(Runtime));
  }

  DISALLOW_COPY_AND_ASSIGN(Runtime)
};

class Parse : public _ErrorWithLocation {
 public:
  Parse(Str* msg, syntax_asdl::loc_t* location);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(Parse));
  }

  DISALLOW_COPY_AND_ASSIGN(Parse)
};

class FailGlob : public _ErrorWithLocation {
 public:
  FailGlob(Str* msg, syntax_asdl::loc_t* location);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(FailGlob));
  }

  DISALLOW_COPY_AND_ASSIGN(FailGlob)
};

class RedirectEval : public _ErrorWithLocation {
 public:
  RedirectEval(Str* msg, syntax_asdl::loc_t* location);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(RedirectEval));
  }

  DISALLOW_COPY_AND_ASSIGN(RedirectEval)
};

class FatalRuntime : public _ErrorWithLocation {
 public:
  FatalRuntime(int exit_status, Str* msg, syntax_asdl::loc_t* location);
  int ExitStatus();

  int exit_status;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(FatalRuntime));
  }

  DISALLOW_COPY_AND_ASSIGN(FatalRuntime)
};

class Strict : public FatalRuntime {
 public:
  Strict(Str* msg, syntax_asdl::loc_t* location);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(Strict));
  }

  DISALLOW_COPY_AND_ASSIGN(Strict)
};

class ErrExit : public FatalRuntime {
 public:
  ErrExit(int exit_status, Str* msg, syntax_asdl::loc_t* location, bool show_code = false);

  bool show_code;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(ErrExit));
  }

  DISALLOW_COPY_AND_ASSIGN(ErrExit)
};

class Expr : public FatalRuntime {
 public:
  Expr(Str* msg, syntax_asdl::loc_t* location);

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(kZeroMask, sizeof(Expr));
  }

  DISALLOW_COPY_AND_ASSIGN(Expr)
};



}  // declare namespace error

namespace pyerror {  // declare

extern int NO_SPID;
[[noreturn]] void e_usage(Str* msg, int span_id = NO_SPID);
[[noreturn]] void e_strict(Str* msg, syntax_asdl::loc_t* location);
[[noreturn]] void p_die(Str* msg, syntax_asdl::loc_t* location);
[[noreturn]] void e_die(Str* msg, syntax_asdl::loc_t* location = nullptr);
[[noreturn]] void e_die_status(int status, Str* msg, syntax_asdl::loc_t* location = nullptr);


}  // declare namespace pyerror

#endif  // CORE_ERROR_MYCPP_H