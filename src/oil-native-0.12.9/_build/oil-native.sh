#!/usr/bin/env bash
#
# _build/oil-native.sh - generated by build/ninja_main.py
#
# Usage
#   _build/oil-native COMPILER? VARIANT? SKIP_REBUILD?
#
#   COMPILER: 'cxx' for system compiler, or 'clang' [default cxx]
#   VARIANT: 'dbg' or 'opt' [default dbg]
#   SKIP_REBUILD: if non-empty, checks if the output exists before building
#
# Could run with /bin/sh, but use bash for now, bceause dash has bad errors messages!
#!/bin/sh

. build/ninja-rules-cpp.sh

main() {
  ### Compile oil-native into _bin/$compiler-$variant-sh/ (not with ninja)

  local compiler=${1:-cxx}   # default is system compiler
  local variant=${2:-opt}    # default is optimized build
  local skip_rebuild=${3:-}  # if the output exists, skip build'


  local out=_bin/$compiler-$variant-sh/osh_eval
  if test -n "$skip_rebuild" && test -f "$out"; then
    echo
    echo "$0: SKIPPING build because $out exists"
    echo
    return
  fi

  echo
  echo "$0: Building oil-native: $out"
  echo

  mkdir -p "_build/obj/$compiler-$variant-sh" "_bin/$compiler-$variant-sh"

  echo 'CXX _gen/bin/osh_eval.mycpp.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/bin/osh_eval.mycpp.cc "_build/obj/$compiler-$variant-sh/osh_eval.mycpp.o"
  echo 'CXX _gen/core/runtime.asdl.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/core/runtime.asdl.cc "_build/obj/$compiler-$variant-sh/runtime.asdl.o"
  echo 'CXX cpp/leaky_frontend_flag_spec.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_frontend_flag_spec.cc "_build/obj/$compiler-$variant-sh/leaky_frontend_flag_spec.o"
  echo 'CXX cpp/leaky_frontend_match.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_frontend_match.cc "_build/obj/$compiler-$variant-sh/leaky_frontend_match.o"
  echo 'CXX cpp/leaky_frontend_tdop.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_frontend_tdop.cc "_build/obj/$compiler-$variant-sh/leaky_frontend_tdop.o"
  echo 'CXX cpp/leaky_osh.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_osh.cc "_build/obj/$compiler-$variant-sh/leaky_osh.o"
  echo 'CXX cpp/leaky_pgen2.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_pgen2.cc "_build/obj/$compiler-$variant-sh/leaky_pgen2.o"
  echo 'CXX cpp/leaky_pylib.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_pylib.cc "_build/obj/$compiler-$variant-sh/leaky_pylib.o"
  echo 'CXX cpp/leaky_stdlib.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_stdlib.cc "_build/obj/$compiler-$variant-sh/leaky_stdlib.o"
  echo 'CXX cpp/leaky_libc.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_libc.cc "_build/obj/$compiler-$variant-sh/leaky_libc.o"
  echo 'CXX cpp/leaky_core.cc'
  compile_one "$compiler" "$variant" "" \
    cpp/leaky_core.cc "_build/obj/$compiler-$variant-sh/leaky_core.o"
  echo 'CXX _gen/frontend/arg_types.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/frontend/arg_types.cc "_build/obj/$compiler-$variant-sh/arg_types.o"
  echo 'CXX _gen/frontend/consts.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/frontend/consts.cc "_build/obj/$compiler-$variant-sh/consts.o"
  echo 'CXX _gen/frontend/id_kind.asdl.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/frontend/id_kind.asdl.cc "_build/obj/$compiler-$variant-sh/id_kind.asdl.o"
  echo 'CXX _gen/frontend/signal.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/frontend/signal.cc "_build/obj/$compiler-$variant-sh/signal.o"
  echo 'CXX _gen/frontend/syntax.asdl.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/frontend/syntax.asdl.cc "_build/obj/$compiler-$variant-sh/syntax.asdl.o"
  echo 'CXX mycpp/gc_mylib.cc'
  compile_one "$compiler" "$variant" "" \
    mycpp/gc_mylib.cc "_build/obj/$compiler-$variant-sh/gc_mylib.o"
  echo 'CXX mycpp/bump_leak_heap.cc'
  compile_one "$compiler" "$variant" "" \
    mycpp/bump_leak_heap.cc "_build/obj/$compiler-$variant-sh/bump_leak_heap.o"
  echo 'CXX mycpp/marksweep_heap.cc'
  compile_one "$compiler" "$variant" "" \
    mycpp/marksweep_heap.cc "_build/obj/$compiler-$variant-sh/marksweep_heap.o"
  echo 'CXX mycpp/leaky_containers.cc'
  compile_one "$compiler" "$variant" "" \
    mycpp/leaky_containers.cc "_build/obj/$compiler-$variant-sh/leaky_containers.o"
  echo 'CXX mycpp/leaky_builtins.cc'
  compile_one "$compiler" "$variant" "" \
    mycpp/leaky_builtins.cc "_build/obj/$compiler-$variant-sh/leaky_builtins.o"
  echo 'CXX mycpp/leaky_mylib.cc'
  compile_one "$compiler" "$variant" "" \
    mycpp/leaky_mylib.cc "_build/obj/$compiler-$variant-sh/leaky_mylib.o"
  echo 'CXX _gen/osh/arith_parse.cc'
  compile_one "$compiler" "$variant" "" \
    _gen/osh/arith_parse.cc "_build/obj/$compiler-$variant-sh/arith_parse.o"

  echo "LINK $out"
  link "$compiler" "$variant" "$out" \
    "_build/obj/$compiler-$variant-sh/osh_eval.mycpp.o" \
    "_build/obj/$compiler-$variant-sh/runtime.asdl.o" \
    "_build/obj/$compiler-$variant-sh/leaky_frontend_flag_spec.o" \
    "_build/obj/$compiler-$variant-sh/leaky_frontend_match.o" \
    "_build/obj/$compiler-$variant-sh/leaky_frontend_tdop.o" \
    "_build/obj/$compiler-$variant-sh/leaky_osh.o" \
    "_build/obj/$compiler-$variant-sh/leaky_pgen2.o" \
    "_build/obj/$compiler-$variant-sh/leaky_pylib.o" \
    "_build/obj/$compiler-$variant-sh/leaky_stdlib.o" \
    "_build/obj/$compiler-$variant-sh/leaky_libc.o" \
    "_build/obj/$compiler-$variant-sh/leaky_core.o" \
    "_build/obj/$compiler-$variant-sh/arg_types.o" \
    "_build/obj/$compiler-$variant-sh/consts.o" \
    "_build/obj/$compiler-$variant-sh/id_kind.asdl.o" \
    "_build/obj/$compiler-$variant-sh/signal.o" \
    "_build/obj/$compiler-$variant-sh/syntax.asdl.o" \
    "_build/obj/$compiler-$variant-sh/gc_mylib.o" \
    "_build/obj/$compiler-$variant-sh/bump_leak_heap.o" \
    "_build/obj/$compiler-$variant-sh/marksweep_heap.o" \
    "_build/obj/$compiler-$variant-sh/leaky_containers.o" \
    "_build/obj/$compiler-$variant-sh/leaky_builtins.o" \
    "_build/obj/$compiler-$variant-sh/leaky_mylib.o" \
    "_build/obj/$compiler-$variant-sh/arith_parse.o"

  if test "$variant" = opt; then
    strip -o "$out.stripped" "$out"
  fi
}

main "$@"

