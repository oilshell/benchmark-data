#ifndef OPTION_ASDL_H
#define OPTION_ASDL_H

namespace option_asdl {
namespace option_i {
  const int errexit = 1;
  const int nounset = 2;
  const int pipefail = 3;
  const int noexec = 4;
  const int xtrace = 5;
  const int verbose = 6;
  const int noglob = 7;
  const int noclobber = 8;
  const int posix = 9;
  const int vi = 10;
  const int emacs = 11;
  const int interactive = 12;
  const int hashall = 13;
  const int failglob = 14;
  const int extglob = 15;
  const int eval_unsafe_arith = 16;
  const int parse_dynamic_arith = 17;
  const int compat_array = 18;
  const int verbose_errexit = 19;
  const int allow_command_sub = 20;
  const int dynamic_scope = 21;
  const int _running_trap = 22;
  const int nullglob = 23;
  const int inherit_errexit = 24;
  const int strict_argv = 25;
  const int strict_arith = 26;
  const int strict_array = 27;
  const int strict_control_flow = 28;
  const int strict_errexit = 29;
  const int strict_nameref = 30;
  const int strict_word_eval = 31;
  const int strict_tilde = 32;
  const int strict_glob = 33;
  const int parse_at = 34;
  const int parse_brace = 35;
  const int parse_paren = 36;
  const int parse_triple_quoted = 37;
  const int parse_triple_dots = 38;
  const int simple_word_eval = 39;
  const int dashglob = 40;
  const int expand_aliases = 41;
  const int command_sub_errexit = 42;
  const int process_sub_fail = 43;
  const int xtrace_rich = 44;
  const int xtrace_details = 45;
  const int sigpipe_status_ok = 46;
  const int parse_equals = 47;
  const int parse_at_all = 48;
  const int parse_backslash = 49;
  const int parse_backticks = 50;
  const int parse_dollar = 51;
  const int parse_ignored = 52;
  const int parse_amp = 53;
  const int simple_echo = 54;
  const int simple_eval_builtin = 55;
  const int simple_test_builtin = 56;
  const int parse_tea = 57;
  const int lastpipe = 58;
  const int progcomp = 59;
  const int histappend = 60;
  const int hostcomplete = 61;
  const int cmdhist = 62;
  const int assoc_expand_once = 63;
  const int autocd = 64;
  const int cdable_vars = 65;
  const int cdspell = 66;
  const int checkhash = 67;
  const int checkjobs = 68;
  const int checkwinsize = 69;
  const int complete_fullquote = 70;
  const int direxpand = 71;
  const int dirspell = 72;
  const int dotglob = 73;
  const int execfail = 74;
  const int extdebug = 75;
  const int extquote = 76;
  const int force_fignore = 77;
  const int globasciiranges = 78;
  const int globstar = 79;
  const int gnu_errfmt = 80;
  const int histreedit = 81;
  const int histverify = 82;
  const int huponexit = 83;
  const int interactive_comments = 84;
  const int lithist = 85;
  const int localvar_inherit = 86;
  const int localvar_unset = 87;
  const int login_shell = 88;
  const int mailwarn = 89;
  const int no_empty_cmd_completion = 90;
  const int nocaseglob = 91;
  const int nocasematch = 92;
  const int progcomp_alias = 93;
  const int promptvars = 94;
  const int restricted_shell = 95;
  const int shift_verbose = 96;
  const int sourcepath = 97;
  const int xpg_echo = 98;
  const int ARRAY_SIZE = 99;
};

const char* option_str(int tag);

typedef int option_t;

namespace builtin_i {
  const int colon = 1;
  const int dot = 2;
  const int exec_ = 3;
  const int eval = 4;
  const int set = 5;
  const int shift = 6;
  const int times = 7;
  const int trap = 8;
  const int unset = 9;
  const int builtin = 10;
  const int readonly = 11;
  const int local = 12;
  const int declare = 13;
  const int typeset = 14;
  const int export_ = 15;
  const int test = 16;
  const int bracket = 17;
  const int true_ = 18;
  const int false_ = 19;
  const int read = 20;
  const int echo = 21;
  const int printf = 22;
  const int mapfile = 23;
  const int readarray = 24;
  const int cd = 25;
  const int pushd = 26;
  const int popd = 27;
  const int dirs = 28;
  const int pwd = 29;
  const int source = 30;
  const int umask = 31;
  const int wait = 32;
  const int jobs = 33;
  const int fg = 34;
  const int bg = 35;
  const int shopt = 36;
  const int complete = 37;
  const int compgen = 38;
  const int compopt = 39;
  const int compadjust = 40;
  const int getopts = 41;
  const int command = 42;
  const int type = 43;
  const int hash = 44;
  const int help = 45;
  const int history = 46;
  const int alias = 47;
  const int unalias = 48;
  const int bind = 49;
  const int push = 50;
  const int write = 51;
  const int json = 52;
  const int pp = 53;
  const int use = 54;
  const int opts = 55;
  const int fopen = 56;
  const int run = 57;
  const int fork = 58;
  const int forkwait = 59;
  const int push_registers = 60;
  const int cat = 61;
  const int ARRAY_SIZE = 62;
};

const char* builtin_str(int tag);

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
