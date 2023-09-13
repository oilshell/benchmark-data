// prebuilt/core/error.mycpp.h: GENERATED by mycpp

#ifndef CORE_ERROR_MYCPP_H
#define CORE_ERROR_MYCPP_H

#include "_gen/asdl/hnode.asdl.h"
#include "cpp/qsn.h"
#include "mycpp/runtime.h"

#include "_gen/core/runtime.asdl.h"
#include "_gen/frontend/syntax.asdl.h"
namespace error {  // forward declare

  class _ErrorWithLocation;
  class Usage;
  class Runtime;
  class Parse;
  class FailGlob;
  class RedirectEval;
  class FatalRuntime;
  class Strict;
  class ErrExit;
  class Expr;
  class UserError;
  class InvalidType;
  class InvalidType2;
  class InvalidType3;

}  // forward declare namespace error

namespace error {  // declare

using syntax_asdl::loc;
class _ErrorWithLocation {
 public:
  _ErrorWithLocation(Str* msg, syntax_asdl::loc_t* location);
  bool HasLocation();
  Str* UserErrorString();
  syntax_asdl::loc_t* location;
  Str* msg;
  
  static constexpr uint32_t field_mask() {
    return maskbit(offsetof(_ErrorWithLocation, location))
         | maskbit(offsetof(_ErrorWithLocation, msg));
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(_ErrorWithLocation));
  }

  DISALLOW_COPY_AND_ASSIGN(_ErrorWithLocation)
};

class Usage : public _ErrorWithLocation {
 public:
  Usage(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return _ErrorWithLocation::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(Usage));
  }

  DISALLOW_COPY_AND_ASSIGN(Usage)
};

class Runtime {
 public:
  Runtime(Str* msg);
  Str* UserErrorString();
  Str* msg;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassScanned(1, sizeof(Runtime));
  }

  DISALLOW_COPY_AND_ASSIGN(Runtime)
};

class Parse : public _ErrorWithLocation {
 public:
  Parse(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return _ErrorWithLocation::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(Parse));
  }

  DISALLOW_COPY_AND_ASSIGN(Parse)
};

class FailGlob : public _ErrorWithLocation {
 public:
  FailGlob(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return _ErrorWithLocation::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(FailGlob));
  }

  DISALLOW_COPY_AND_ASSIGN(FailGlob)
};

class RedirectEval : public _ErrorWithLocation {
 public:
  RedirectEval(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return _ErrorWithLocation::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(RedirectEval));
  }

  DISALLOW_COPY_AND_ASSIGN(RedirectEval)
};

class FatalRuntime : public _ErrorWithLocation {
 public:
  FatalRuntime(int exit_status, Str* msg, syntax_asdl::loc_t* location);
  int ExitStatus();

  int exit_status;
  
  static constexpr uint32_t field_mask() {
    return _ErrorWithLocation::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(FatalRuntime));
  }

  DISALLOW_COPY_AND_ASSIGN(FatalRuntime)
};

class Strict : public FatalRuntime {
 public:
  Strict(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return FatalRuntime::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(Strict));
  }

  DISALLOW_COPY_AND_ASSIGN(Strict)
};

class ErrExit : public FatalRuntime {
 public:
  ErrExit(int exit_status, Str* msg, syntax_asdl::loc_t* location, bool show_code = false);

  bool show_code;
  
  static constexpr uint32_t field_mask() {
    return FatalRuntime::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(ErrExit));
  }

  DISALLOW_COPY_AND_ASSIGN(ErrExit)
};

class Expr : public FatalRuntime {
 public:
  Expr(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return FatalRuntime::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(Expr));
  }

  DISALLOW_COPY_AND_ASSIGN(Expr)
};

class UserError : public FatalRuntime {
 public:
  UserError(int status, Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return FatalRuntime::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(UserError));
  }

  DISALLOW_COPY_AND_ASSIGN(UserError)
};

class InvalidType : public Expr {
 public:
  InvalidType(Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return Expr::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(InvalidType));
  }

  DISALLOW_COPY_AND_ASSIGN(InvalidType)
};

class InvalidType2 : public InvalidType {
 public:
  InvalidType2(runtime_asdl::value_t* actual_val, Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return InvalidType::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(InvalidType2));
  }

  DISALLOW_COPY_AND_ASSIGN(InvalidType2)
};

class InvalidType3 : public InvalidType {
 public:
  InvalidType3(runtime_asdl::value_t* left_val, runtime_asdl::value_t* right_val, Str* msg, syntax_asdl::loc_t* location);
  
  static constexpr uint32_t field_mask() {
    return InvalidType::field_mask();
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(InvalidType3));
  }

  DISALLOW_COPY_AND_ASSIGN(InvalidType3)
};

[[noreturn]] void e_usage(Str* msg, syntax_asdl::loc_t* location);
[[noreturn]] void e_strict(Str* msg, syntax_asdl::loc_t* location);
[[noreturn]] void p_die(Str* msg, syntax_asdl::loc_t* location);
[[noreturn]] void e_die(Str* msg, syntax_asdl::loc_t* location = nullptr);
[[noreturn]] void e_die_status(int status, Str* msg, syntax_asdl::loc_t* location = nullptr);


}  // declare namespace error

#endif  // CORE_ERROR_MYCPP_H