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
  eval_unsafe_arith = 19,
  _allow_command_sub = 20,
  _allow_process_sub = 21,
  dynamic_scope = 22,
  redefine_module = 23,
  _running_trap = 24,
  _running_hay = 25,
  strict_argv = 26,
  strict_arith = 27,
  strict_array = 28,
  strict_control_flow = 29,
  strict_errexit = 30,
  strict_nameref = 31,
  strict_word_eval = 32,
  strict_tilde = 33,
  strict_glob = 34,
  parse_at = 35,
  parse_proc = 36,
  parse_brace = 37,
  parse_equals = 38,
  parse_paren = 39,
  parse_raw_string = 40,
  parse_triple_quote = 41,
  simple_word_eval = 42,
  dashglob = 43,
  expand_aliases = 44,
  command_sub_errexit = 45,
  process_sub_fail = 46,
  xtrace_rich = 47,
  xtrace_details = 48,
  sigpipe_status_ok = 49,
  redefine_proc = 50,
  parse_at_all = 51,
  parse_backslash = 52,
  parse_backticks = 53,
  parse_dollar = 54,
  parse_ignored = 55,
  parse_sh_arith = 56,
  parse_sh_assign = 57,
  parse_dparen = 58,
  parse_bare_word = 59,
  simple_echo = 60,
  simple_eval_builtin = 61,
  simple_test_builtin = 62,
  parse_tea = 63,
  lastpipe = 64,
  progcomp = 65,
  histappend = 66,
  hostcomplete = 67,
  cmdhist = 68,
  assoc_expand_once = 69,
  autocd = 70,
  cdable_vars = 71,
  cdspell = 72,
  checkhash = 73,
  checkjobs = 74,
  checkwinsize = 75,
  complete_fullquote = 76,
  direxpand = 77,
  dirspell = 78,
  dotglob = 79,
  execfail = 80,
  extdebug = 81,
  extquote = 82,
  force_fignore = 83,
  globasciiranges = 84,
  globstar = 85,
  gnu_errfmt = 86,
  histreedit = 87,
  histverify = 88,
  huponexit = 89,
  interactive_comments = 90,
  lithist = 91,
  localvar_inherit = 92,
  localvar_unset = 93,
  login_shell = 94,
  mailwarn = 95,
  no_empty_cmd_completion = 96,
  nocaseglob = 97,
  nocasematch = 98,
  progcomp_alias = 99,
  promptvars = 100,
  restricted_shell = 101,
  shift_verbose = 102,
  sourcepath = 103,
  xpg_echo = 104,
  ARRAY_SIZE = 105,
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
  test = 16,
  bracket = 17,
  true_ = 18,
  false_ = 19,
  try_ = 20,
  read = 21,
  echo = 22,
  printf = 23,
  mapfile = 24,
  readarray = 25,
  cd = 26,
  pushd = 27,
  popd = 28,
  dirs = 29,
  pwd = 30,
  source = 31,
  umask = 32,
  wait = 33,
  jobs = 34,
  fg = 35,
  bg = 36,
  shopt = 37,
  complete = 38,
  compgen = 39,
  compopt = 40,
  compadjust = 41,
  getopts = 42,
  command = 43,
  type = 44,
  hash = 45,
  help = 46,
  history = 47,
  alias = 48,
  unalias = 49,
  bind = 50,
  append = 51,
  write = 52,
  json = 53,
  pp = 54,
  hay = 55,
  haynode = 56,
  module = 57,
  use = 58,
  fork = 59,
  forkwait = 60,
  fopen = 61,
  shvar = 62,
  runproc = 63,
  boolstatus = 64,
  argparse = 65,
  describe = 66,
  push_registers = 67,
  cat = 68,
  ARRAY_SIZE = 69,
  };
};

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
