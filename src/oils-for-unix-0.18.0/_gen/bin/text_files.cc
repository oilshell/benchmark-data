
#include "cpp/embedded_file.h"

namespace embedded_file {
GLOBAL_STR(gStr0, R"zZXx(Usage: help TOPIC?

Examples:

    help               # this help
    help echo          # help on the 'echo' builtin
    help com-sub       # help on command sub $(date)

    help oils-usage    # identical to oils-for-unix --help
    help osh-usage     #              osh --help
    help ysh-usage     #              ysh --help
)zZXx");

GLOBAL_STR(gStr1, R"zZXx(Shell Options

  [Option Groups] strict:all   ysh:upgrade   ysh:all
  [Strictness]    ... More Runtime Errors
                  strict_argv            No empty argv
                  strict_arith           Fatal parse errors (on by default)
                  strict_array           Arrays don't decay to strings
                  strict_control_flow    Disallow misplaced keyword, empty arg
                  strict_errexit         Disallow code that ignores failure
                  strict_nameref         trap invalid variable names
                  strict_word_eval       Expose unicode and slicing errors
                  strict_tilde           Tilde subst can result in error
                  X strict_glob          Parse the sublanguage more strictly
  [Oil Upgrade]   ... Migrate Existing Code to Oil
                  parse_at               echo @array @[arrayfunc(x, y)]
                  parse_brace            if true { ... }; cd ~/src { ... }
                  parse_equals           x = 'val' in Caps { } config blocks
                  parse_paren            if (x > 0) ...
                  parse_proc             proc p { ... }
                  parse_raw_string       echo r'\' (command mode)
                  parse_triple_quote     """  '''  r'''  $''' in command mode
                  command_sub_errexit    Synchronous errexit check
                  process_sub_fail       Analogous to pipefail for process subs
                  sigpipe_status_ok      status 141 -> 0 in pipelines
                  simple_word_eval       No splitting, static globbing
                  xtrace_rich            Hierarchical and process tracing
                  xtrace_details (-u)    Disable most tracing with +
                  dashglob (-u)          Disabled to avoid files like -rf
                  expand_aliases (-u)    Whether aliases are expanded
                  redefine_proc (-u)     Can procs be redefined?
  [Interactive]   redefine_module        'module' builtin always returns 0
                  X redefine_const       Can consts be redefined?
  [Simplicity]    ... More Consistent Style
                  simple_echo            echo takes 0 or 1 arguments
                  simple_eval_builtin    eval takes exactly 1 argument
                  simple_test_builtin    3 args or fewer; use test not [
                  X simple_trap          Function name only
  [Oil Breaking]  ... The Full Oil Language
                  parse_at_all           @ starting any word is an operator
                  parse_backslash (-u)    Bad backslashes in $''
                  parse_backticks (-u)    Legacy syntax `echo hi`
                  parse_bare_word (-u)   'case unquoted' and 'for x in unquoted'
                  parse_dollar (-u)      Is $ allowed for \$?  Maybe $/d+/
                  parse_dparen (-u)      Is (( legacy arithmetic allowed?
                  parse_ignored (-u)     Parse, but ignore, certain redirects
                  parse_sh_arith (-u)    Is legacy shell arithmetic allowed?
                  X copy_env (-u)        Use $[ENV->PYTHONPATH] when false
                  X old_builtins (-u)    local/declare/etc.  pushd/popd/dirs
                                         ... source  unset  printf  [un]alias
                                         ... getopts
                  X old_syntax (-u)      [[   $(( ))  ( )   ${x%prefix}
                                         ${a[@]}   $$
  [Compatibility] eval_unsafe_arith      Allow dynamically parsed a[$(echo 42)]
                  verbose_errexit        Whether to print detailed errors
  [More Options]  _allow_command_sub     To implement strict_errexit, eval_unsafe_arith
                  _allow_process_sub     To implement strict_errexit
                  dynamic_scope          To implement 'proc'
)zZXx");

GLOBAL_STR(gStr2, R"zZXx(bin/ysh is the shell with data tYpes, influenced by pYthon, JavaScript, ...

Usage: ysh FLAG* SCRIPT ARG*
       ysh FLAG* -c COMMAND ARG*
       ysh FLAG*

`bin/ysh` is the same as `bin/osh` with a the `ysh:all` option group set.  So
`bin/ysh` also accepts shell flags.

    ysh -c 'echo hi'
    ysh myscript.ysh
    echo 'echo hi' | ysh
)zZXx");

GLOBAL_STR(gStr3, R"zZXx(Word Language

  [Quotes]        quotes        'abc'  $'\n'  "$var"
  [Substitutions] com-sub       $(command)   `command`   @(split command)
                  var-sub       ${var}   $0   $9   
                  arith-sub     $((1 + 2))
                  tilde-sub     ~/src
                  proc-sub      diff <(sort L.txt) <(sort R.txt)
  [Var Ops]       op-test       ${x:-default}  
                  op-strip      ${x%%suffix}  etc.
                  op-replace    ${x//y/z}
                  op-index      ${a[i+1}
                  op-slice      ${a[@]:0:1}
                  op-format     ${x@P}
)zZXx");

GLOBAL_STR(gStr4, R"zZXx(Special Variables

  [Shell Options] SHELLOPTS   X BASHOPTS
  [Other Env]     HOME   PATH
  [POSIX Special] $@  $*  $#     $?  $-     $$  $!   $0  $9
  [Other Special] BASH_REMATCH   @PIPESTATUS
  [Platform]      HOSTNAME   OSTYPE
  [Call Stack]    @BASH_SOURCE   @FUNCNAME   @BASH_LINENO   
                  X @BASH_ARGV   X @BASH_ARGC
  [Tracing]       LINENO   SOURCE_NAME
  [Process State] X BASHPID   X PPID   UID   EUID   
X [Process Stack] BASH_SUBSHELL   SHLVL
X [Shell State]   BASH_CMDS   @DIRSTACK
  [Completion]    @COMP_WORDS   COMP_CWORD   COMP_LINE   COMP_POINT
                  COMP_WORDBREAKS   @COMPREPLY   X COMP_KEY
                  X COMP_TYPE   COMP_ARGV
  [History]       HISTFILE
  [cd]            PWD   OLDPWD   X CDPATH
  [getopts]       OPTIND   OPTARG   X OPTERR
  [read]          REPLY
  [Functions]     X RANDOM   X SECONDS
  [Shell Vars]    IFS   X LANG
)zZXx");

GLOBAL_STR(gStr5, R"zZXx(Word Language

  [String Lit]    X multi-str   """  r'''  j"""
                  X j8-str      j"byte \y00 unicode \u{123456}"
  [Expression]    expr-sub      echo $[42 + a[i]]
                  expr-splice   echo @[split(x)]
                  var-splice    @myarray @ARGV
  [Formatting]    X ysh-printf  ${x %.3f}
                  X ysh-format  ${x|html}
)zZXx");

GLOBAL_STR(gStr6, R"zZXx(Other Mini Languages

  [Arithmetic]    arith-context Where legacy arithmetic is allowed
                  sh-numbers    0xFF  0755  etc.
                  sh-arith      1 + 2*3   a *= 2
                  sh-logical    !a && b
                  sh-bitwise    ~a ^ b
  [Boolean]       dbracket      [[ vs. the test builtin
                  bool-expr       [[ ! $x && $y || $z ]]
                                test ! $x -a $y -o $z
                  bool-infix    [[ $a -nt $b ]]  [[ $x == $y ]]
                  bool-path     [[ -d /etc ]]
                  bool-str      [[ -z '' ]]
                  bool-other    [[ -o errexit ]]
  [Patterns]      glob          *.py
                  extglob       ,(*.py|*.sh)
                  regex         [[ foo =~ [a-z]+ ]]
  [Other Sublang] braces        {alice,bob}@example.com
                  histsub       !$  !!  !n
                  char-escapes  \t  \c  \x00  \u03bc
)zZXx");

GLOBAL_STR(gStr7, R"zZXx(Expression Language and Assignments

  [Keywords]      const   var   setvar   setglobal   setref
  [Literals]      bool-literal  true   false   null
                  int-literal   42  65_536  0xFF  0o755  0b10
                  X float-lit   3.14  1.5e-10
                  num-suffix    42 K Ki M Mi G Gi T Ti / ms us
                  rune-literal  #'a'   #'_'   \n   \\   \u{3bc}
                  str-literal   r'[a-z]\n'  X j"line\n"  
                  X multi-str   """  r'''  j"""
                  list-literal  ['one', 'two', 3]  :| unquoted words |
                  dict-literal  {name: 'bob'}
                  block-literal ^(echo $PWD)
                  X expr-lit    ^[1 + 2*3]
                  X template    ^"$a and $b" for Str::replace()
                  X to-string   $[myobj]
                  X to-array    @[myobj]
  [Operators]     concat        s1 ++ s2,  L1 ++ L2
                  ysh-equals    ===   !==   ~==   is, is not, in, not in
                  ysh-compare   <  <=  >  >=  (numbers only)
                  ysh-logical    not  and  or
                  ysh-arith     +  -  *  /  //  %   ** 
                  ysh-bitwise   ~  &  |  ^  <<  >>
                  ysh-ternary   '+' if x >= 0 else '-'
                  ysh-index     a[3]  s[3]
                  ysh-attr      mydict.key
                  ysh-slice     a[1:-1]  s[1:-1]
                  func-call     f(x, y)   s->startswith('prefix')
                  match-ops     ~   !~   ~~   !~~
  [Eggex]         re-literal    / d+ /
                  re-compound   pat|alt   pat seq   (group)
                                <capture>   <capture :name> 
                  re-primitive  %zero   Subpattern   @subpattern   'sq'
                                char-class  ! char-class
                  named-class    dot  digit  space  word  d  s  w
                  class-literal [c a-z 'abc' @str_var \\ \xFF \u0100]
                  X re-flags    ignorecase etc.
                  X re-multiline  ///
)zZXx");

GLOBAL_STR(gStr8, R"zZXx(J8 Notation

  [J8 Strings]   json-escape \n   surrogate-pair
                 j8-escape \yff   j-prefix j""
  [JSON8]        Null   Bool   Int   Float   Str   List   Dict
  [TSV8]         column-attrs   column-types
  [UTF8 Errors]  bad-byte   expected-start   expected-cont
                 incomplete-seq   overlong   bad-code-point
)zZXx");

GLOBAL_STR(gStr9, R"zZXx(Plugins and Hooks

  [Signals]       SIGTERM   X SIGINT   X SIGABRT   SIG...
  [Traps]         EXIT   X ERR   X DEBUG   X RETURN
  [Words]         PS1   X PS2   X PS3   PS4
  [Completion]    complete
  [Other Plugin]  X command_not_found   PROMPT_COMMAND
)zZXx");

GLOBAL_STR(gStr10, R"zZXx(Special Variables

  [Oil Paths]     ?builtins   ?completion_plugins   ?coprocesses
  [History]       YSH_HISTFILE
  [Shell Vars]    ARGV   X ENV   X OPT
                  X _ESCAPE   _DIALECT
                  _this_dir
  [Platform]      OILS_VERSION
  [Exit Status]   _status   _pipeline_status   _process_sub_status
  [Tracing]       SHX_indent   SHX_punct   SHX_pid_str
X [Wok]           _filename   _line
X [Builtin Sub]   _buffer
)zZXx");

GLOBAL_STR(gStr11, R"zZXx(Command Language

  [Commands]      simple-command   semicolon ;
  [Conditional]   case   if   true   false   colon :
                  bang !   and &&   or ||   dbracket [[
  [Iteration]     while   until   for   for-expr-sh ((
  [Control Flow]  break   continue   return   exit
  [Grouping]      sh-func   sh-block {   subshell (
  [Concurrency]   pipe   |   X |&
                  ampersand &
  [Redirects]     redir-file  >  >>  >|  <  <>   X &>
                  redir-desc  >&  <&
                  here-doc    <<  <<-  <<<
  [Other Command] dparen ((   time   X coproc   X select
)zZXx");

GLOBAL_STR(gStr12, R"zZXx(The reference is divided in to "chapters", each of which has its own table of
contents.  Type:

    help ysh-$CHAPTER

Where $CHAPTER is one of:

    front-end
    command-lang
    expr-lang
    word-lang
    builtin-cmd
    option
    special-var
    type-method
    builtin-func

Example:

    help ysh-expr-lang
)zZXx");

GLOBAL_STR(gStr13, R"zZXx(Builtin Types and Methods

  [Primitive] Bool   Int   Float   Str
              Slice   Range   BoundFunc
  [Code]      Eggex   X Template   X Expr   Command
  [List]      append()   pop()   extend()   X index()
              X insert()   X remove()   reverse()
  [Dict]      keys()   values()   X get()   X erase()
X [Proc]      export()   location()
X [Func]      export()   location()
)zZXx");

GLOBAL_STR(gStr14, R"zZXx(Builtin Commands

  [I/O]           read   echo   printf
                  readarray   mapfile
  [Run Code]      source .   eval   trap
  [Set Options]   set   shopt
  [Working Dir]   cd   pwd   pushd   popd   dirs
  [Completion]    complete   compgen   compopt   compadjust   compexport
  [Shell Process] exec   X logout 
                  umask   X ulimit   times
  [Child Process] jobs   wait   ampersand &
                  fg   X bg   X kill   X disown 
  [External]      test [   getopts
  [Introspection] help   hash   type   X caller
  [Word Lookup]   command   builtin
  [Interactive]   alias   unalias   history   X fc   X bind
X [Unsupported]   enable
)zZXx");

GLOBAL_STR(gStr15, R"zZXx(Global Shell Options

  [Errors]        nounset   pipefail   errexit   inherit_errexit
  [Globbing]      noglob   nullglob   failglob   dashglob
  [Debugging]     xtrace   X verbose   X extdebug
  [Interactive]   emacs   vi
  [Other Option]  X noclobber
)zZXx");

GLOBAL_STR(gStr16, R"zZXx(The reference is divided in to "chapters", each of which has its own table of
contents.  Type:

    help osh-$CHAPTER

Where $CHAPTER is one of:

    front-end
    command-lang
    osh-assign
    word-lang
    mini-lang
    builtin-cmd
    option
    special-var
    plugin

Example:

    help osh-word-lang
)zZXx");

GLOBAL_STR(gStr17, R"zZXx(Front End

  [Usage]         bundle-usage   ysh-usage
  [Oil Lexing]    doc-comment ###   multiline-command ...
  [Tools]         cat-em
)zZXx");

GLOBAL_STR(gStr18, R"zZXx(bin/osh is compatible with POSIX shell, bash, and other shells.

Usage: osh FLAG* SCRIPT ARG*
       osh FLAG* -c COMMAND ARG*
       osh FLAG*

The command line accepted by `bin/osh` is compatible with /bin/sh and bash.

    osh -c 'echo hi'
    osh myscript.sh
    echo 'echo hi' | osh

It also has a few enhancements:

    osh -n -c 'hello'                    # pretty-print the AST
    osh --ast-format text -n -c 'hello'  # print it full

osh accepts POSIX sh flags, with these additions:

    -n             parse the program but don't execute it.  Print the AST.
    --ast-format   what format the AST should be in
)zZXx");

GLOBAL_STR(gStr19, R"zZXx(Front End

  [Usage]         osh-usage   config   startup   line-editing   prompt
                  exit-codes
  [Lexing]        comment #   line-continuation \
)zZXx");

GLOBAL_STR(gStr20, R"zZXx(bin/oils-for-unix is an executable that contains OSH, YSH, and more.

Usage: oils-for-unix MAIN_NAME ARG*
       MAIN_NAME ARG*

It behaves like busybox.  The command name can be passed as the first argument:

    oils-for-unix ysh -c 'echo hi'

More commonly, it's invoked through a symlink like 'ysh', which causes it to
behave like that command:

    ysh -c 'echo hi'
)zZXx");

GLOBAL_STR(gStr21, R"zZXx(Packle

  [Packle]   Null   Bool   Int   Float   Str   List   Dict
)zZXx");

GLOBAL_STR(gStr22, R"zZXx(Builtin Functions

  [Values]        len()   type() 
  [Conversions]   bool()   int()   float()   str()   list()   dict()
                  X chr()   X ord()   X encodeRunes()
X [J8 Decode]     J8.Bool()   J8.Int()  ...
  [List]          any()   all()
  [Collections]   join()   split()  # $IFS, awk algorithm, regex
                  copy()   deepCopy()
  [Word]          glob()   maybe()
  [Math]          abs()   max()   min()   X round()   sum()
X [Str]           countRunes()   
                  find(eggex)   replace(eggex, template)
                  startsWith()   endsWith()
                  strip()   lstrip()   rstrip()  # set of chars, prefix suffix
                  upper()   lower()  # ascii or unicode
X [Codecs]        quoteUrl()   quoteHtml()   quoteSh()   quoteC()
                  quoteMake()   quoteNinja()
X [Serialize]     toJ8()   fromJ8()
                  toJson()   fromJson()
  [Pattern]       _match()   X _start()   X _end()
  [Introspection] shvar_get()   procs()   evalExpr()
  [Hay Config]    parse_hay()   eval_hay()
X [Date Time]     strftime()
X [Wok]           _field()
X [Hashing]       sha1dc()   sha256()
)zZXx");

GLOBAL_STR(gStr23, R"zZXx(Assignments and Expressions

  [Literals]      sh-array      array=(a b c)   array[1]=B   "${a[@]}"
                  sh-assoc      assoc=(['a']=1 ['b']=2)   assoc['x']=b
  [Operators]     sh-assign     str='xyz'
                  sh-append     str+='abc'
  [Builtins]      local   readonly   export   unset   shift
                  declare   typeset   X let
)zZXx");

GLOBAL_STR(gStr24, R"zZXx(Command Language

  [Commands]      proc-def      proc p (out Ref; pos, ...rest; n=0; b Block) {
                  func-def      func f(x; opt1, opt2) { return (x + 1) }
                  ysh-return    return (myexpr)
                  error         error (status=3)
                  equal =       = 1 + 2*3
                  underscore _  _ mylist->append(42)
  [YSH Simple]    typed-arg     json write (x)
                  block-arg     cd /tmp { echo $PWD }
  [Conditional]   ysh-case      case (x) { *.py { echo 'python' } }
                  ysh-if        if (x > 0) { echo }
  [Iteration]     ysh-while     while (x > 0) { echo }
                  ysh-for       for i, item in (mylist) { echo }
)zZXx");

GLOBAL_STR(gStr25, R"zZXx(Builtin Commands

  [Memory]        append                 Add elements to end of array
                  X argparse             getopts replacement, sets OPT
                  X setref               Builtin to replace keyword
                  pp                     Pretty print interpreter state
  [Handle Errors] try                    Run with errexit and set _status
                  boolstatus             Enforce 0 or 1 exit status
                  X error                Can be used in both proc and func
  [Shell State]   ysh-cd   ysh-shopt     compatible, and takes a block
                  shvar                  Temporary modify global settings
                  push-registers         Save registers like $?, PIPESTATUS
  [Modules]       runproc                Run a proc; use as main entry point
                  module                 guard against duplicate 'source'
                  is-main                false when sourcing a file
                  use                    change first word lookup
  [I/O]           ysh-read               Buffered I/O with --line, --all, --qsn
                  X ysh-echo             no -e -n with simple_echo
                  write                  Like echo, with --, --sep, --end, ()
                  fork   forkwait        Replace & and (), and takes a block
                  fopen                  Open multiple streams, takes a block
                  X dbg                  Only thing that can be used in funcs
                  X log   X die          common functions (polyfill)
  [Hay Config]    hay   haynode          For DSLs and config files
  [Completion]    compadjust   compexport
  [Data Formats]  json
                  X j8str                Upgrade JSON with binary, utf-8
                  X json8                Tree-shaped
                  X tsv8                 Table-shaped
                  X packle               Graph-shaped
X [TSV8]          rows                   pick rows; dplyr filter()
                  cols                   pick columns ('select' already taken)
                  group-by               add a column with a group ID [ext]
                  sort-by                sort by columns; dplyr arrange() [ext]
                  summary                count, sum, histogram, etc. [ext]
X [Testing]       describe               Test harness
                  assert                 takes an expression
X [External Lang] BEGIN   END   when (awk)
                  rule (make)   each (xargs)   fs (find)
)zZXx");

GLOBAL_STR(gStr26, R"zZXx(# Can we define methods in pure YSH?
#
# (mylist->find(42) !== -1)
#
#   instead of 
#
# ('42' in mylist)
#
# Because 'in' is for Dict

func find (haystack List, needle) {
  for i, x in (haystack) {
    if (x === needle) {
      return (i)
    }
  }
  return (-1)
}
)zZXx");

GLOBAL_STR(gStr27, R"zZXx(func __math_select(list, cmp) {
  ## Internal helper for `max` and `min`.
  ##
  ## NOTE: If `list` is empty, then an error is thrown.

  if (len(list) === 0) {
    error ("Unexpected empty list", status=3)
  }

  if (len(list) === 1) {
    return (list[0])
  }

  var match = list[0]
  for i in (1:len(list)) {
    setvar match = cmp(list[i], match)
  }
  return (match)
}

func max(...args) {
  ## Compute the maximum of 2 or more values.
  ##
  ## `max` takes two different signatures:
  ##  - `max(a, b)` to return the maximum of `a`, `b`
  ##  - `max(list)` to return the greatest item in the `list`
  ##
  ## So, for example:
  ##
  ##   max(1, 2)  # => 2
  ##   max([1, 2, 3])  # => 3

  case (len(args)) {
    (1) { return (__math_select(args[0], max)) }
    (2) {
      if (args[0] > args[1]) {
        return (args[0])
      } else {
        return (args[1])
      }
    }
    (else) { error ("max expects 1 or 2 args", status=3) }
  }
}

func min(...args) {
  ## Compute the minimum of 2 or more values.
  ##
  ## `min` takes two different signatures:
  ##  - `min(a, b)` to return the minimum of `a`, `b`
  ##  - `min(list)` to return the least item in the `list`
  ##
  ## So, for example:
  ##
  ##   min(2, 3)  # => 2
  ##   max([1, 2, 3])  # => 1

  case (len(args)) {
    (1) { return (__math_select(args[0], min)) }
    (2) {
      if (args[0] < args[1]) {
        return (args[0])
      } else {
        return (args[1])
      }
    }
    (else) { error ("min expects 1 or 2 args", status=3) }
  }
}

func abs(x) {
  ## Compute the absolute (positive) value of a number (float or int).

  if (x < 0) {
    return (-x)
  } else {
    return (x)
  }
}
)zZXx");

GLOBAL_STR(gStr28, R"zZXx(func any(list) {
  ## Returns true if any value in the list is truthy.
  ##
  ## If the list is empty, return false.

  for item in (list) {
    if (item) {
      return (true)
    }
  }
  return (false)
}

func all(list) {
  ## Returns true if all values in the list are truthy.
  ##
  ## If the list is empty, return true.

  for item in (list) {
    if (not item) {
      return (false)
    }
  }
  return (true)
}

func sum(list) {
  ## Computes the sum of all elements in the list.
  ##
  ## Returns 0 for an empty list.

  var sum = 0;
  for item in (list) {
    setvar sum += item
  }
  return (sum)
}
)zZXx");

GLOBAL_STR(gStr29, R"zZXx(# testing.ysh
#
# Usage:
#   source --builtin testing.sh
#
# func f(x) { return (x + 1) }
#
# describe foo {
#   assert (43 === f(42))
# }
#
# if is-main {
#   run-tests @ARGV   # --filter
# }

module stdlib/testing || return 0

source --builtin args.ysh

# Opt in to lazy evaluation

proc assert ( ; cond LAZY ) {
  echo hi

  # TODO: evalExpr() builtin
  var val = evalExpr(cond) 
  if (not val) {
    # TODO: if it's an expr.Binary
    # Then
    #
    # Then print $left != $right
    #
    # I think you need to introspect on the source code
    #
    # Or print '5 != 3'
    #
    # Or you can evaluate left and right separately, and then compare them

    echo
  }
}

# What happens when there are duplicate test IDs?
#
# Also I think filter by "$test_id/$case_id"

proc __it (case_id ; ; ; block) {
  # This uses a clean directory
  echo TODO
}

# is this accessible to users?
# It can contain a global list of things to run

# Naming convention: a proc named 'describe' mutates a global named _describe?
# Or maybe _describe_list ?

var _describe_list = []

proc describe (test_id ; ; ; block) {
  echo describe
  = desc

  # TODO:
  # - need append
  # - need ::
  # _ _describe->append(cmd)
  #
  # Need to clean this up
  # append (_describe, cmd)  # does NOT work!

  _ _describe_list->append(block)
}

# Problem: this creates a global variable?
Args :spec {
  flag --filter 'Regex of test descriptions'
}

proc run-tests {

  # TODO: fix this crap
  var opt = null
  var i = null
  setvar opt, i = parseArgs(spec, ARGV)

  # TODO:
  # - parse --filter foo, which you can use eggex for!

  for cmd in (_describe) {
    # TODO: print filename and 'describe' name?
    try {
      eval (cmd)
    }
    if (_status !== 0) {
      echo 'failed'
    }
  }
}
)zZXx");

GLOBAL_STR(gStr30, R"zZXx(func identity(x) {
  ## The identity function. Returns its argument.

  return (x)
}
)zZXx");

GLOBAL_STR(gStr31, R"zZXx(# args.ysh
#
# Usage:
#   source --builtin args.sh
#
# Args :spec {
#   flag -v --verbose "Verbosely"  # default is Bool, false
#
#   flag -P --max-procs '''
#     Run at most P processes at a time
#     ''' (Int, default=-1)
#
#   flag -i --invert '''
#     Long multiline
#     Description
#     ''' (Bool, default = true)
#
#   arg src 'Source'
#   arg src 'Dest'
#   arg times 'Foo' (Int)
# }
#
# var opt, i = parseArgs(spec, ARGV)
#
# echo "Verbose $[opt.verbose]"


# TODO: how to register these as Args ?
#
# var proc_bindings = {}
# var var_bindings = {}
# eval ()


# How to make this private to a file?  Or is redefine_func_proc enough?
#
# Also it would be nice if we can setref a variable?

proc __flag (...strs ; type ; default Any = null) {

  var short = ''
  var long = ''
  if (strs[0].startsWith('-')) {
    setvar short = strs[0]
  }

  case (len(strs)) {
    (1) {
      echo
    }
    (2) {
      echo
    }
  }

  var result = {short, long, type, default}

  # TODO:
  # - need :: because vars start with _
  # - It would be nice if _this was a magic param?
  #   - it would be nice if 'flag' was a "method" on something?
  #   - that's what it's doing, it's mutating "self"
  #   - _this is the thing we're currently creating

  _ _this.flags->append(result)

  var this = getvar('_this', scope='dynamic')
  _ this.flags->append(result)
}

proc __arg (name, desc ; type ; default Any = null) {
  # Type is always string?  Or support conversion?
  # I guess there's no reason not to
  #
  # Int or Float

  echo 'arg'
}

# TODO: create a builtin?
func getProc(x) {
  return (x)
}
# TODO: builtin?
# Is this different than shvar?  How?
# Is it a global or a local?

# Maybe we can rename shvar IFS=: (foo={}) { }
#
# - shvar does LocalOnly
# - but 'proc arg' will push a new stack frame?
#   - so we need something like setref?
#

proc bind-vars (; ; ...bindings; block) {
  echo
}

hay define Documented

Documented {  # Do we inherit the name of the proc?  Or $path/$procName?

  # Do we want a longer way of documenting APIs?
  # Document every argument?
  # I like Go's docs
  desc = '''
  These are my docs
  '''

  proc p {
    echo
  }

}

proc Args(spec Ref ; ; ; block) {

  var more_procs = {
    flag: getProc('__flag'),
    arg: getProc('__arg'),
  }

  var this = {}

  # _this is part of this frame -- it's a duplicate that callers can look up I
  # guess
  # Well then all you need is getvar() ?  You don't even need bind-vars?
  bind-vars (_this=this) {
    # So now 'arg' and 'flag' can see _this?

    # TODO: more_procs vs. replace procs?
    eval (block, procs=more_procs)
  }
  = this

  # You have to put 'flag' and 'arg' in scope

  # Flags have these fields
  # default type is Bool
  var flag = {short: '', long: '', type: null, default: '', help: ''}

  # Args have these fields
  #
  # I think all args are required -- you can ARGV[i:] if you want something else
  #
  # Default type is string
  var arg = {name: '', type: null, help: ''}

  # May also have program name, etc.
  var result = {flags: [], args: []}

  #= spec
  #= block

  setref spec = result
}

func parseArgs(spec, argv) {
  var i = 0
  var arg = {}

  return ([arg, i])
}
)zZXx");



TextFile array[] = {
    {.rel_path = "_devbuild/help/help", .contents = gStr0},
    {.rel_path = "_devbuild/help/ysh-option", .contents = gStr1},
    {.rel_path = "_devbuild/help/ysh-usage", .contents = gStr2},
    {.rel_path = "_devbuild/help/osh-word-lang", .contents = gStr3},
    {.rel_path = "_devbuild/help/osh-special-var", .contents = gStr4},
    {.rel_path = "_devbuild/help/ysh-word-lang", .contents = gStr5},
    {.rel_path = "_devbuild/help/osh-mini-lang", .contents = gStr6},
    {.rel_path = "_devbuild/help/ysh-expr-lang", .contents = gStr7},
    {.rel_path = "_devbuild/help/data-j8-notation", .contents = gStr8},
    {.rel_path = "_devbuild/help/osh-plugin", .contents = gStr9},
    {.rel_path = "_devbuild/help/ysh-special-var", .contents = gStr10},
    {.rel_path = "_devbuild/help/osh-cmd-lang", .contents = gStr11},
    {.rel_path = "_devbuild/help/ysh-chapters", .contents = gStr12},
    {.rel_path = "_devbuild/help/ysh-type-method", .contents = gStr13},
    {.rel_path = "_devbuild/help/osh-builtin-cmd", .contents = gStr14},
    {.rel_path = "_devbuild/help/osh-option", .contents = gStr15},
    {.rel_path = "_devbuild/help/osh-chapters", .contents = gStr16},
    {.rel_path = "_devbuild/help/ysh-front-end", .contents = gStr17},
    {.rel_path = "_devbuild/help/osh-usage", .contents = gStr18},
    {.rel_path = "_devbuild/help/osh-front-end", .contents = gStr19},
    {.rel_path = "_devbuild/help/oils-usage", .contents = gStr20},
    {.rel_path = "_devbuild/help/data-packle", .contents = gStr21},
    {.rel_path = "_devbuild/help/ysh-builtin-func", .contents = gStr22},
    {.rel_path = "_devbuild/help/osh-osh-assign", .contents = gStr23},
    {.rel_path = "_devbuild/help/ysh-cmd-lang", .contents = gStr24},
    {.rel_path = "_devbuild/help/ysh-builtin-cmd", .contents = gStr25},
    {.rel_path = "stdlib/methods.ysh", .contents = gStr26},
    {.rel_path = "stdlib/math.ysh", .contents = gStr27},
    {.rel_path = "stdlib/list.ysh", .contents = gStr28},
    {.rel_path = "stdlib/testing.ysh", .contents = gStr29},
    {.rel_path = "stdlib/funcs.ysh", .contents = gStr30},
    {.rel_path = "stdlib/args.ysh", .contents = gStr31},

    {.rel_path = nullptr, .contents = nullptr},
};

}  // namespace embedded_file

TextFile* gEmbeddedFiles = embedded_file::array;  // turn array into pointer
