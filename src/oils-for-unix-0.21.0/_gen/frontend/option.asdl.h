#ifndef OPTION_ASDL_H
#define OPTION_ASDL_H

namespace option_asdl {

#define ASDL_NAMES struct
ASDL_NAMES option_i {
  enum no_name {
  errexit = 1,
  nounset = 2,
  pipefail = 3,
  inherit_errexit = 4,
  nullglob = 5,
  verbose_errexit = 6,
  noexec = 7,
  xtrace = 8,
  verbose = 9,
  noglob = 10,
  noclobber = 11,
  posix = 12,
  vi = 13,
  emacs = 14,
  interactive = 15,
  hashall = 16,
  failglob = 17,
  extglob = 18,
  nocasematch = 19,
  eval_unsafe_arith = 20,
  _allow_command_sub = 21,
  _allow_process_sub = 22,
  dynamic_scope = 23,
  redefine_module = 24,
  _running_trap = 25,
  _running_hay = 26,
  _no_debug_trap = 27,
  strict_argv = 28,
  strict_arith = 29,
  strict_array = 30,
  strict_control_flow = 31,
  strict_errexit = 32,
  strict_nameref = 33,
  strict_word_eval = 34,
  strict_tilde = 35,
  strict_glob = 36,
  parse_at = 37,
  parse_proc = 38,
  parse_func = 39,
  parse_brace = 40,
  parse_bracket = 41,
  parse_equals = 42,
  parse_paren = 43,
  parse_ysh_string = 44,
  parse_triple_quote = 45,
  simple_word_eval = 46,
  dashglob = 47,
  expand_aliases = 48,
  command_sub_errexit = 49,
  process_sub_fail = 50,
  xtrace_rich = 51,
  xtrace_details = 52,
  sigpipe_status_ok = 53,
  redefine_proc_func = 54,
  parse_at_all = 55,
  parse_backslash = 56,
  parse_backticks = 57,
  parse_dollar = 58,
  parse_ignored = 59,
  parse_sh_arith = 60,
  parse_dparen = 61,
  parse_bare_word = 62,
  simple_echo = 63,
  simple_eval_builtin = 64,
  simple_test_builtin = 65,
  lastpipe = 66,
  progcomp = 67,
  histappend = 68,
  hostcomplete = 69,
  cmdhist = 70,
  assoc_expand_once = 71,
  autocd = 72,
  cdable_vars = 73,
  cdspell = 74,
  checkhash = 75,
  checkjobs = 76,
  checkwinsize = 77,
  complete_fullquote = 78,
  direxpand = 79,
  dirspell = 80,
  dotglob = 81,
  execfail = 82,
  extdebug = 83,
  extquote = 84,
  force_fignore = 85,
  globasciiranges = 86,
  globstar = 87,
  gnu_errfmt = 88,
  histreedit = 89,
  histverify = 90,
  huponexit = 91,
  interactive_comments = 92,
  lithist = 93,
  localvar_inherit = 94,
  localvar_unset = 95,
  login_shell = 96,
  mailwarn = 97,
  no_empty_cmd_completion = 98,
  nocaseglob = 99,
  progcomp_alias = 100,
  promptvars = 101,
  restricted_shell = 102,
  shift_verbose = 103,
  sourcepath = 104,
  xpg_echo = 105,
  ARRAY_SIZE = 106,
  };
};

typedef int option_t;

ASDL_NAMES builtin_i {
  enum no_name {
  colon = 1,
  dot = 2,
  exec_ = 3,
  eval = 4,
  set = 5,
  shift = 6,
  times = 7,
  trap = 8,
  unset = 9,
  builtin = 10,
  readonly = 11,
  local = 12,
  declare = 13,
  typeset = 14,
  export_ = 15,
  true_ = 16,
  false_ = 17,
  try_ = 18,
  read = 19,
  echo = 20,
  printf = 21,
  mapfile = 22,
  readarray = 23,
  cd = 24,
  pushd = 25,
  popd = 26,
  dirs = 27,
  pwd = 28,
  source = 29,
  umask = 30,
  wait = 31,
  jobs = 32,
  fg = 33,
  bg = 34,
  shopt = 35,
  complete = 36,
  compgen = 37,
  compopt = 38,
  compadjust = 39,
  compexport = 40,
  getopts = 41,
  command = 42,
  type = 43,
  hash = 44,
  help = 45,
  history = 46,
  alias = 47,
  unalias = 48,
  bind = 49,
  append = 50,
  write = 51,
  json = 52,
  json8 = 53,
  pp = 54,
  hay = 55,
  haynode = 56,
  module = 57,
  use = 58,
  error = 59,
  fork = 60,
  forkwait = 61,
  fopen = 62,
  shvar = 63,
  ctx = 64,
  runproc = 65,
  boolstatus = 66,
  test = 67,
  bracket = 68,
  push_registers = 69,
  is_main = 70,
  cat = 71,
  ARRAY_SIZE = 72,
  };
};

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
