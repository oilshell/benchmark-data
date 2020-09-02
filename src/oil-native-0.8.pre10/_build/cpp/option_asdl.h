#ifndef OPTION_ASDL_H
#define OPTION_ASDL_H

namespace option_asdl {
namespace option_i {
  const int errexit = 1;
  const int nounset = 2;
  const int hashall = 3;
  const int pipefail = 4;
  const int noexec = 5;
  const int xtrace = 6;
  const int verbose = 7;
  const int noglob = 8;
  const int noclobber = 9;
  const int posix = 10;
  const int vi = 11;
  const int emacs = 12;
  const int interactive = 13;
  const int failglob = 14;
  const int extglob = 15;
  const int eval_unsafe_arith = 16;
  const int parse_dynamic_arith = 17;
  const int compat_array = 18;
  const int verbose_errexit = 19;
  const int nullglob = 20;
  const int inherit_errexit = 21;
  const int strict_argv = 22;
  const int strict_arith = 23;
  const int strict_array = 24;
  const int strict_control_flow = 25;
  const int strict_echo = 26;
  const int strict_errexit = 27;
  const int strict_eval_builtin = 28;
  const int strict_nameref = 29;
  const int strict_word_eval = 30;
  const int strict_tilde = 31;
  const int strict_backslash = 32;
  const int strict_glob = 33;
  const int simple_word_eval = 34;
  const int dashglob = 35;
  const int more_errexit = 36;
  const int simple_test_builtin = 37;
  const int parse_at = 38;
  const int parse_brace = 39;
  const int parse_index_expr = 40;
  const int parse_paren = 41;
  const int parse_rawc = 42;
  const int parse_ignored = 43;
  const int parse_set = 44;
  const int parse_equals = 45;
  const int parse_tea = 46;
  const int expand_aliases = 47;
  const int lastpipe = 48;
  const int progcomp = 49;
  const int histappend = 50;
  const int hostcomplete = 51;
  const int cmdhist = 52;
  const int assoc_expand_once = 53;
  const int autocd = 54;
  const int cdable_vars = 55;
  const int cdspell = 56;
  const int checkhash = 57;
  const int checkjobs = 58;
  const int checkwinsize = 59;
  const int complete_fullquote = 60;
  const int direxpand = 61;
  const int dirspell = 62;
  const int dotglob = 63;
  const int execfail = 64;
  const int extdebug = 65;
  const int extquote = 66;
  const int force_fignore = 67;
  const int globasciiranges = 68;
  const int globstar = 69;
  const int gnu_errfmt = 70;
  const int histreedit = 71;
  const int histverify = 72;
  const int huponexit = 73;
  const int interactive_comments = 74;
  const int lithist = 75;
  const int localvar_inherit = 76;
  const int localvar_unset = 77;
  const int login_shell = 78;
  const int mailwarn = 79;
  const int no_empty_cmd_completion = 80;
  const int nocaseglob = 81;
  const int nocasematch = 82;
  const int progcomp_alias = 83;
  const int promptvars = 84;
  const int restricted_shell = 85;
  const int shift_verbose = 86;
  const int sourcepath = 87;
  const int xpg_echo = 88;
  const int ARRAY_SIZE = 89;
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
  const int append = 51;
  const int write = 52;
  const int getline = 53;
  const int json = 54;
  const int repr = 55;
  const int use = 56;
  const int opts = 57;
  const int cat = 58;
  const int ARRAY_SIZE = 59;
};

const char* builtin_str(int tag);

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H