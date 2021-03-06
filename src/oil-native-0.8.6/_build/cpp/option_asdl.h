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
  const int nullglob = 22;
  const int inherit_errexit = 23;
  const int strict_argv = 24;
  const int strict_arith = 25;
  const int strict_array = 26;
  const int strict_control_flow = 27;
  const int strict_errexit = 28;
  const int strict_nameref = 29;
  const int strict_word_eval = 30;
  const int strict_tilde = 31;
  const int strict_glob = 32;
  const int parse_at = 33;
  const int parse_brace = 34;
  const int parse_paren = 35;
  const int parse_triple_quoted = 36;
  const int parse_triple_dots = 37;
  const int simple_word_eval = 38;
  const int dashglob = 39;
  const int expand_aliases = 40;
  const int command_sub_errexit = 41;
  const int process_sub_fail = 42;
  const int xtrace_rich = 43;
  const int parse_set = 44;
  const int parse_equals = 45;
  const int parse_at_all = 46;
  const int parse_backslash = 47;
  const int parse_backticks = 48;
  const int parse_dollar = 49;
  const int parse_ignored = 50;
  const int parse_amp = 51;
  const int simple_echo = 52;
  const int simple_eval_builtin = 53;
  const int simple_test_builtin = 54;
  const int parse_tea = 55;
  const int lastpipe = 56;
  const int progcomp = 57;
  const int histappend = 58;
  const int hostcomplete = 59;
  const int cmdhist = 60;
  const int assoc_expand_once = 61;
  const int autocd = 62;
  const int cdable_vars = 63;
  const int cdspell = 64;
  const int checkhash = 65;
  const int checkjobs = 66;
  const int checkwinsize = 67;
  const int complete_fullquote = 68;
  const int direxpand = 69;
  const int dirspell = 70;
  const int dotglob = 71;
  const int execfail = 72;
  const int extdebug = 73;
  const int extquote = 74;
  const int force_fignore = 75;
  const int globasciiranges = 76;
  const int globstar = 77;
  const int gnu_errfmt = 78;
  const int histreedit = 79;
  const int histverify = 80;
  const int huponexit = 81;
  const int interactive_comments = 82;
  const int lithist = 83;
  const int localvar_inherit = 84;
  const int localvar_unset = 85;
  const int login_shell = 86;
  const int mailwarn = 87;
  const int no_empty_cmd_completion = 88;
  const int nocaseglob = 89;
  const int nocasematch = 90;
  const int progcomp_alias = 91;
  const int promptvars = 92;
  const int restricted_shell = 93;
  const int shift_verbose = 94;
  const int sourcepath = 95;
  const int xpg_echo = 96;
  const int ARRAY_SIZE = 97;
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
  const int cat = 60;
  const int ARRAY_SIZE = 61;
};

const char* builtin_str(int tag);

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
