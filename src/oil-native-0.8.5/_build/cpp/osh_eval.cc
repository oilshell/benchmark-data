// osh_eval.cc: translated from Python by mycpp

#include "preamble.h"  // hard-coded stuff

// BEGIN mycpp output

#include "mylib.h"

using gc_heap::Alloc;
using gc_heap::kZeroMask;
using gc_heap::StackRoots;
#include "osh_eval.h"

GLOBAL_STR(str0, "(");
GLOBAL_STR(str1, ")");
GLOBAL_STR(str2, "_");
GLOBAL_STR(str3, "T");
GLOBAL_STR(str4, "F");
GLOBAL_STR(str5, "");
GLOBAL_STR(str6, "");
GLOBAL_STR(str7, "\n<html>\n  <head>\n     <title>oil AST</title>\n     <style>\n      .n { color: brown }\n      .s { font-weight: bold }\n      .o { color: darkgreen }\n     </style>\n  </head>\n  <body>\n    <pre>\n");
GLOBAL_STR(str8, "\n    </pre>\n  </body>\n</html>\n    ");
GLOBAL_STR(str9, "n");
GLOBAL_STR(str10, "s");
GLOBAL_STR(str11, "o");
GLOBAL_STR(str12, "o");
GLOBAL_STR(str13, "o");
GLOBAL_STR(str14, "<span class=\"%s\">");
GLOBAL_STR(str15, "</span>");
GLOBAL_STR(str16, " ");
GLOBAL_STR(str17, "\n");
GLOBAL_STR(str18, " ");
GLOBAL_STR(str19, "]");
GLOBAL_STR(str20, " ");
GLOBAL_STR(str21, " ");
GLOBAL_STR(str22, "\n");
GLOBAL_STR(str23, "\n");
GLOBAL_STR(str24, " ");
GLOBAL_STR(str25, "%s%s: [");
GLOBAL_STR(str26, "\n");
GLOBAL_STR(str27, "\n");
GLOBAL_STR(str28, "%s]");
GLOBAL_STR(str29, "%s%s: ");
GLOBAL_STR(str30, "\n");
GLOBAL_STR(str31, "\n");
GLOBAL_STR(str32, " ");
GLOBAL_STR(str33, " ");
GLOBAL_STR(str34, " ");
GLOBAL_STR(str35, " %s:");
GLOBAL_STR(str36, "[");
GLOBAL_STR(str37, " ");
GLOBAL_STR(str38, "]");
GLOBAL_STR(str39, "PWD");
GLOBAL_STR(str40, "PATH");
GLOBAL_STR(str41, "/bin");
GLOBAL_STR(str42, "osh");
GLOBAL_STR(str43, "oil: %s");
GLOBAL_STR(str44, "osh fatal error: %s");
GLOBAL_STR(str45, "");
GLOBAL_STR(str46, "osh I/O error: %s");
GLOBAL_STR(str47, "-c flag");
GLOBAL_STR(str48, "\u001b[0;0m");
GLOBAL_STR(str49, "\u001b[1m");
GLOBAL_STR(str50, "\u001b[4m");
GLOBAL_STR(str51, "\u001b[7m");
GLOBAL_STR(str52, "\u001b[31m");
GLOBAL_STR(str53, "\u001b[32m");
GLOBAL_STR(str54, "\u001b[33m");
GLOBAL_STR(str55, "\u001b[34m");
GLOBAL_STR(str56, "+");
GLOBAL_STR(str57, " ");
GLOBAL_STR(str58, "PS4");
GLOBAL_STR(str59, "<ERROR: Can't parse PS4: %s>");
GLOBAL_STR(str60, " ");
GLOBAL_STR(str61, "%s%s%s");
GLOBAL_STR(str62, "+=");
GLOBAL_STR(str63, "=");
GLOBAL_STR(str64, "<_ControlFlow %s>");
GLOBAL_STR(str65, "Invalid control flow %r in pipeline / subshell / background");
GLOBAL_STR(str66, "%r ");
GLOBAL_STR(str67, "");
GLOBAL_STR(str68, "Command evaluated to an empty argv array");
GLOBAL_STR(str69, "Can't run assignment builtin recursively");
GLOBAL_STR(str70, "errexit was disabled for this construct");
GLOBAL_STR(str71, "");
GLOBAL_STR(str72, "Can't run a proc while errexit is disabled. Use 'run' or wrap it in a process with $0 myproc");
GLOBAL_STR(str73, "Unexpected block passed to external command %r");
GLOBAL_STR(str74, "%r not found");
GLOBAL_STR(str75, "[%%%d] Started Pipeline with PID %d");
GLOBAL_STR(str76, "[%%%d] Started PID %d");
GLOBAL_STR(str77, "Command subs not allowed here because status wouldn't be checked (strict_errexit).");
GLOBAL_STR(str78, "__cat");
GLOBAL_STR(str79, "Command sub exited with status %d (%s)");
GLOBAL_STR(str80, "");
GLOBAL_STR(str81, "\n");
GLOBAL_STR(str82, "/dev/fd/%d");
GLOBAL_STR(str83, "/dev/fd/%d");
GLOBAL_STR(str84, "<_FdFrame %s>");
GLOBAL_STR(str85, "r");
GLOBAL_STR(str86, "%d: %s");
GLOBAL_STR(str87, "%d: %s");
GLOBAL_STR(str88, "%d: %s");
GLOBAL_STR(str89, "Can't open %r: %s");
GLOBAL_STR(str90, "Error closing descriptor %d: %s");
GLOBAL_STR(str91, "dup2(%d, %d) error: %s");
GLOBAL_STR(str92, "<StdinFromPipe %d %d>");
GLOBAL_STR(str93, "<StdoutToPipe %d %d>");
GLOBAL_STR(str94, "/bin/sh");
GLOBAL_STR(str95, "/bin/sh");
GLOBAL_STR(str96, "Can't execute %r: %s");
GLOBAL_STR(str97, "[process] %s");
GLOBAL_STR(str98, " ");
GLOBAL_STR(str99, "[subprog] %s");
GLOBAL_STR(str100, "");
GLOBAL_STR(str101, "osh I/O error: %s");
GLOBAL_STR(str102, "[here doc writer]");
GLOBAL_STR(str103, "<Process %s>");
GLOBAL_STR(str104, "Fatal error in posix.fork()");
GLOBAL_STR(str105, "<Pipeline %s>");
GLOBAL_STR(str106, " ");
GLOBAL_STR(str107, "JobState MaybeRemove %d");
GLOBAL_STR(str108, "osh: PID %d stopped, but osh didn't start it");
GLOBAL_STR(str109, "");
GLOBAL_STR(str110, "");
GLOBAL_STR(str111, "[PID %d] Stopped");
GLOBAL_STR(str112, "");
GLOBAL_STR(str113, "main");
GLOBAL_STR(str114, "osh usage error: %s");
GLOBAL_STR(str115, "%s-usage");
GLOBAL_STR(str116, "Oil");
GLOBAL_STR(str117, "main");
GLOBAL_STR(str118, "oil");
GLOBAL_STR(str119, "oil:all");
GLOBAL_STR(str120, "--one-pass-parse requires noexec (-n)");
GLOBAL_STR(str121, "completion");
GLOBAL_STR(str122, "history");
GLOBAL_STR(str123, "");
GLOBAL_STR(str124, "OSH_DEBUG_DIR");
GLOBAL_STR(str125, "%d-osh.log");
GLOBAL_STR(str126, "Writing logs to %r");
GLOBAL_STR(str127, "OSH_HIJACK_SHEBANG");
GLOBAL_STR(str128, "");
GLOBAL_STR(str129, "OSH_CRASH_DUMP_DIR");
GLOBAL_STR(str130, "");
GLOBAL_STR(str131, "");
GLOBAL_STR(str132, "osh: Couldn't open %r: %s");
GLOBAL_STR(str133, "/proc/%d/status");
GLOBAL_STR(str134, "--parser-mem-dump can only be used with -n");
GLOBAL_STR(str135, "/proc/%d/status");
GLOBAL_STR(str136, "Can't run a proc while errexit is disabled. Use 'catch' or wrap it in a process with $0 myproc");
GLOBAL_STR(str137, "Unhandled SimpleCommand");
GLOBAL_STR(str138, "\n");
GLOBAL_STR(str139, " \t\n\"'><=;|&(:");
GLOBAL_STR(str140, "/");
GLOBAL_STR(str141, "PATH");
GLOBAL_STR(str142, ":");
GLOBAL_STR(str143, "got invalid option %r");
GLOBAL_STR(str144, "got invalid option %r");
GLOBAL_STR(str145, "doesn't own option %r (try 'shopt')");
GLOBAL_STR(str146, "SHELLOPTS");
GLOBAL_STR(str147, ":");
GLOBAL_STR(str148, "Syntax options must be set at the top level (outside any function)");
GLOBAL_STR(str149, "Warning: set -o verbose not implemented");
GLOBAL_STR(str150, "SHELLOPTS");
GLOBAL_STR(str151, "%s:%s");
GLOBAL_STR(str152, "SHELLOPTS");
GLOBAL_STR(str153, ":");
GLOBAL_STR(str154, ":");
GLOBAL_STR(str155, "SHELLOPTS");
GLOBAL_STR(str156, "oil:basic");
GLOBAL_STR(str157, "oil:all");
GLOBAL_STR(str158, "strict:all");
GLOBAL_STR(str159, "set %so %s");
GLOBAL_STR(str160, "-");
GLOBAL_STR(str161, "+");
GLOBAL_STR(str162, "oil:basic");
GLOBAL_STR(str163, "oil:all");
GLOBAL_STR(str164, "strict:all");
GLOBAL_STR(str165, "got invalid option %r");
GLOBAL_STR(str166, "shopt -%s %s");
GLOBAL_STR(str167, "s");
GLOBAL_STR(str168, "u");
GLOBAL_STR(str169, "<_ArgFrame %s %d at %x>");
GLOBAL_STR(str170, "Can't determine working directory: %s");
GLOBAL_STR(str171, "IFS");
GLOBAL_STR(str172, "UID");
GLOBAL_STR(str173, "EUID");
GLOBAL_STR(str174, "PPID");
GLOBAL_STR(str175, "HOSTNAME");
GLOBAL_STR(str176, "OSTYPE");
GLOBAL_STR(str177, "OPTIND");
GLOBAL_STR(str178, "1");
GLOBAL_STR(str179, "PS4");
GLOBAL_STR(str180, "+ ");
GLOBAL_STR(str181, "COMP_WORDBREAKS");
GLOBAL_STR(str182, "SHELLOPTS");
GLOBAL_STR(str183, "SHELLOPTS");
GLOBAL_STR(str184, "");
GLOBAL_STR(str185, "SHELLOPTS");
GLOBAL_STR(str186, "PWD");
GLOBAL_STR(str187, "PWD");
GLOBAL_STR(str188, "PWD");
GLOBAL_STR(str189, "OIL_VERSION");
GLOBAL_STR(str190, "PWD");
GLOBAL_STR(str191, "");
GLOBAL_STR(str192, "<Mem");
GLOBAL_STR(str193, "  -- %d --");
GLOBAL_STR(str194, "  %s %s");
GLOBAL_STR(str195, ">");
GLOBAL_STR(str196, "\n");
GLOBAL_STR(str197, "\n");
GLOBAL_STR(str198, "Warning: span_id undefined in SetCurrentSpanId");
GLOBAL_STR(str199, "setref requires a nameref (:out param), got %r");
GLOBAL_STR(str200, "nameref %r is undefined");
GLOBAL_STR(str201, "nameref %r contains invalid variable name %r");
GLOBAL_STR(str202, "%r has already been declared");
GLOBAL_STR(str203, "%r hasn't been declared");
GLOBAL_STR(str204, "nameref cycle: %s");
GLOBAL_STR(str205, " -> ");
GLOBAL_STR(str206, "__");
GLOBAL_STR(str207, "Can't assign to readonly value %r");
GLOBAL_STR(str208, "Only strings can be exported");
GLOBAL_STR(str209, "nameref must be a string");
GLOBAL_STR(str210, "Can't assign to readonly array");
GLOBAL_STR(str211, "Can't assign to items in a string");
GLOBAL_STR(str212, "Value of type %s can't be indexed");
GLOBAL_STR(str213, "Can't assign to readonly associative array");
GLOBAL_STR(str214, "ARGV");
GLOBAL_STR(str215, "_status");
GLOBAL_STR(str216, "PIPESTATUS");
GLOBAL_STR(str217, "_pipeline_status");
GLOBAL_STR(str218, "_process_sub_status");
GLOBAL_STR(str219, "FUNCNAME");
GLOBAL_STR(str220, "source");
GLOBAL_STR(str221, "BASH_SOURCE");
GLOBAL_STR(str222, "BASH_LINENO");
GLOBAL_STR(str223, "0");
GLOBAL_STR(str224, "LINENO");
GLOBAL_STR(str225, "BASHPID");
GLOBAL_STR(str226, "Can't unset readonly variable %r");
GLOBAL_STR(str227, "%r isn't an array");
GLOBAL_STR(str228, "$%s isn't defined");
GLOBAL_STR(str229, "$%s should be a string");
GLOBAL_STR(str230, "$%s should be a string, got %s");
GLOBAL_STR(str231, "$%s doesn't look like an integer, got %r");
GLOBAL_STR(str232, "EOF");
GLOBAL_STR(str233, "/");
GLOBAL_STR(str234, "~");
GLOBAL_STR(str235, "  ");
GLOBAL_STR(str236, "\n  ");
GLOBAL_STR(str237, "\t");
GLOBAL_STR(str238, "\t");
GLOBAL_STR(str239, " ");
GLOBAL_STR(str240, "^");
GLOBAL_STR(str241, "~");
GLOBAL_STR(str242, "\n");
GLOBAL_STR(str243, "[ interactive ]");
GLOBAL_STR(str244, "[ -c flag ]");
GLOBAL_STR(str245, "[ stdin%s ]");
GLOBAL_STR(str246, "[ expansion of alias %r ]");
GLOBAL_STR(str247, "[ backticks at ... ]");
GLOBAL_STR(str248, "[ array LValue in %s ]");
GLOBAL_STR(str249, "[ eval at line %d of %s ]");
GLOBAL_STR(str250, "[ trap ]");
GLOBAL_STR(str251, "[ variable ]");
GLOBAL_STR(str252, "%s:%d: %s%s\n");
GLOBAL_STR(str253, "[??? no location ???] %s%s\n");
GLOBAL_STR(str254, "");
GLOBAL_STR(str255, "");
GLOBAL_STR(str256, "");
GLOBAL_STR(str257, "none");
GLOBAL_STR(str258, "AST not printed.");
GLOBAL_STR(str259, "text");
GLOBAL_STR(str260, "abbrev-text");
GLOBAL_STR(str261, "html");
GLOBAL_STR(str262, "abbrev-html");
GLOBAL_STR(str263, "abbrev-");
GLOBAL_STR(str264, "\n");
GLOBAL_STR(str265, "\n");
GLOBAL_STR(str266, "-");
GLOBAL_STR(str267, "_");
GLOBAL_STR(str268, "<_Attributes %s>");
GLOBAL_STR(str269, "<args.Reader %r %d>");
GLOBAL_STR(str270, "expected argument to %r");
GLOBAL_STR(str271, "-");
GLOBAL_STR(str272, "expected integer after %s, got %r");
GLOBAL_STR(str273, "-");
GLOBAL_STR(str274, "got invalid integer for %s: %s");
GLOBAL_STR(str275, "-");
GLOBAL_STR(str276, "expected number after %r, got %r");
GLOBAL_STR(str277, "-");
GLOBAL_STR(str278, "got invalid float for %s: %s");
GLOBAL_STR(str279, "-");
GLOBAL_STR(str280, "got invalid argument %r to %r, expected one of: %s");
GLOBAL_STR(str281, "-");
GLOBAL_STR(str282, "|");
GLOBAL_STR(str283, "0");
GLOBAL_STR(str284, "F");
GLOBAL_STR(str285, "false");
GLOBAL_STR(str286, "False");
GLOBAL_STR(str287, "1");
GLOBAL_STR(str288, "T");
GLOBAL_STR(str289, "true");
GLOBAL_STR(str290, "Talse");
GLOBAL_STR(str291, "got invalid argument to boolean flag: %r");
GLOBAL_STR(str292, "-");
GLOBAL_STR(str293, "-");
GLOBAL_STR(str294, "got invalid option %r");
GLOBAL_STR(str295, "Expected argument for action");
GLOBAL_STR(str296, "Invalid action name %r");
GLOBAL_STR(str297, "--");
GLOBAL_STR(str298, "--");
GLOBAL_STR(str299, "got invalid flag %r");
GLOBAL_STR(str300, "-");
GLOBAL_STR(str301, "0");
GLOBAL_STR(str302, "Z");
GLOBAL_STR(str303, "-");
GLOBAL_STR(str304, "doesn't accept flag %s");
GLOBAL_STR(str305, "-");
GLOBAL_STR(str306, "+");
GLOBAL_STR(str307, "+");
GLOBAL_STR(str308, "doesn't accept option %s");
GLOBAL_STR(str309, "+");
GLOBAL_STR(str310, "-");
GLOBAL_STR(str311, "--");
GLOBAL_STR(str312, "--");
GLOBAL_STR(str313, "got invalid flag %r");
GLOBAL_STR(str314, "-");
GLOBAL_STR(str315, "+");
GLOBAL_STR(str316, "got invalid flag %r");
GLOBAL_STR(str317, "-");
GLOBAL_STR(str318, "^--?([a-zA-Z0-9][a-zA-Z0-9\\-]*)(=.*)?$");
GLOBAL_STR(str319, "<LineLexer at pos %d of line %r (id = %d)>");
GLOBAL_STR(str320, "");
GLOBAL_STR(str321, "");
GLOBAL_STR(str322, "");
GLOBAL_STR(str323, "");
GLOBAL_STR(str324, "<Trail %s %s %s %s>");
GLOBAL_STR(str325, "");
GLOBAL_STR(str326, "ShAssignment expression can't be nested like this");
GLOBAL_STR(str327, "Here docs aren't allowed in expressions");
GLOBAL_STR(str328, "\n");
GLOBAL_STR(str329, "");
GLOBAL_STR(str330, " (%s)");
GLOBAL_STR(str331, "Unexpected token in expression mode%s");
GLOBAL_STR(str332, "Syntax error in expression (near %s)");
GLOBAL_STR(str333, "alnum");
GLOBAL_STR(str334, "cntrl");
GLOBAL_STR(str335, "lower");
GLOBAL_STR(str336, "space");
GLOBAL_STR(str337, "alpha");
GLOBAL_STR(str338, "digit");
GLOBAL_STR(str339, "print");
GLOBAL_STR(str340, "upper");
GLOBAL_STR(str341, "blank");
GLOBAL_STR(str342, "graph");
GLOBAL_STR(str343, "punct");
GLOBAL_STR(str344, "xdigit");
GLOBAL_STR(str345, "Range start/end shouldn't have more than one character");
GLOBAL_STR(str346, "Write singleton tuples with tup(), not a trailing comma");
GLOBAL_STR(str347, "testlist_comp");
GLOBAL_STR(str348, "PNode type %d (%s) wasn't handled");
GLOBAL_STR(str349, "Can't assign to this expression");
GLOBAL_STR(str350, "PNode type %d (%s) wasn't handled");
GLOBAL_STR(str351, "TODO");
GLOBAL_STR(str352, "dot");
GLOBAL_STR(str353, "Can't negate this symbol");
GLOBAL_STR(str354, "%r isn't a character class");
GLOBAL_STR(str355, "Can't negate this symbol");
GLOBAL_STR(str356, "%r isn't a character class");
GLOBAL_STR(str357, "%start");
GLOBAL_STR(str358, "%end");
GLOBAL_STR(str359, "dot");
GLOBAL_STR(str360, "Unexpected token %r in regex");
GLOBAL_STR(str361, "%s-%s");
GLOBAL_STR(str362, "ERE can't express code point %d");
GLOBAL_STR(str363, "Perl classes can't be negated in ERE");
GLOBAL_STR(str364, "%s");
GLOBAL_STR(str365, "POSIX classes can't be negated in ERE");
GLOBAL_STR(str366, "[:%s:]");
GLOBAL_STR(str367, ".");
GLOBAL_STR(str368, "^");
GLOBAL_STR(str369, "$");
GLOBAL_STR(str370, "|");
GLOBAL_STR(str371, "POSIX EREs don't have groups without capture, so this node needs () around it.");
GLOBAL_STR(str372, "+");
GLOBAL_STR(str373, "*");
GLOBAL_STR(str374, "?");
GLOBAL_STR(str375, "{%s}");
GLOBAL_STR(str376, "");
GLOBAL_STR(str377, "");
GLOBAL_STR(str378, "{%s,%s}");
GLOBAL_STR(str379, "(");
GLOBAL_STR(str380, ")");
GLOBAL_STR(str381, "[^%s]");
GLOBAL_STR(str382, "[%s]");
GLOBAL_STR(str383, "[^[:%s:]]");
GLOBAL_STR(str384, "[[:%s:]]");
GLOBAL_STR(str385, "[");
GLOBAL_STR(str386, "^");
GLOBAL_STR(str387, "]");
GLOBAL_STR(str388, "The [ operator doesn't apply to this expression");
GLOBAL_STR(str389, "Expected ]]");
GLOBAL_STR(str390, "Unexpected trailing word %s");
GLOBAL_STR(str391, "Invalid argument to unary operator");
GLOBAL_STR(str392, "Expected ), got %s");
GLOBAL_STR(str393, "Unexpected token in boolean expression (%s)");
GLOBAL_STR(str394, "");
GLOBAL_STR(str395, "Expected %d, got %d");
GLOBAL_STR(str396, "Step can't be 0");
GLOBAL_STR(str397, "Invalid step %d for ascending integer range");
GLOBAL_STR(str398, "Invalid step %d for descending integer range");
GLOBAL_STR(str399, "Invalid step %d for ascending character range");
GLOBAL_STR(str400, "Invalid step %d for descending character range");
GLOBAL_STR(str401, "Mismatched cases in character range");
GLOBAL_STR(str402, "");
GLOBAL_STR(str403, "0");
GLOBAL_STR(str404, "0");
GLOBAL_STR(str405, "g");
GLOBAL_STR(str406, "a");
GLOBAL_STR(str407, "A");
GLOBAL_STR(str408, "n");
GLOBAL_STR(str409, "r");
GLOBAL_STR(str410, "x");
GLOBAL_STR(str411, "%s=%s");
GLOBAL_STR(str412, "-");
GLOBAL_STR(str413, "+");
GLOBAL_STR(str414, "-");
GLOBAL_STR(str415, "+");
GLOBAL_STR(str416, "-");
GLOBAL_STR(str417, "+");
GLOBAL_STR(str418, "n");
GLOBAL_STR(str419, "r");
GLOBAL_STR(str420, "x");
GLOBAL_STR(str421, "a");
GLOBAL_STR(str422, "A");
GLOBAL_STR(str423, "-");
GLOBAL_STR(str424, "declare -");
GLOBAL_STR(str425, "");
GLOBAL_STR(str426, " ");
GLOBAL_STR(str427, "=");
GLOBAL_STR(str428, "=()");
GLOBAL_STR(str429, ";");
GLOBAL_STR(str430, " ");
GLOBAL_STR(str431, "[");
GLOBAL_STR(str432, "]=");
GLOBAL_STR(str433, " ");
GLOBAL_STR(str434, "=(");
GLOBAL_STR(str435, "");
GLOBAL_STR(str436, ")");
GLOBAL_STR(str437, " ");
GLOBAL_STR(str438, "[");
GLOBAL_STR(str439, "]=");
GLOBAL_STR(str440, "=(");
GLOBAL_STR(str441, "");
GLOBAL_STR(str442, ")");
GLOBAL_STR(str443, "");
GLOBAL_STR(str444, "export_");
GLOBAL_STR(str445, "doesn't accept -f because it's dangerous.  (The code can usually be restructured with 'source')");
GLOBAL_STR(str446, "doesn't accept RHS with -n");
GLOBAL_STR(str447, "Got -a but RHS isn't an array");
GLOBAL_STR(str448, "Got -A but RHS isn't an associative array");
GLOBAL_STR(str449, "readonly");
GLOBAL_STR(str450, "new_var");
GLOBAL_STR(str451, "with -f expects function names");
GLOBAL_STR(str452, "declare -f %s");
GLOBAL_STR(str453, "-");
GLOBAL_STR(str454, "-");
GLOBAL_STR(str455, "-");
GLOBAL_STR(str456, "+");
GLOBAL_STR(str457, "+");
GLOBAL_STR(str458, "+");
GLOBAL_STR(str459, "Invalid unset expression");
GLOBAL_STR(str460, "expected a variable name.  shopt -s eval_unsafe_arith allows expressions");
GLOBAL_STR(str461, "unset");
GLOBAL_STR(str462, "Invalid shift argument %r");
GLOBAL_STR(str463, "got too many arguments");
GLOBAL_STR(str464, "eval");
GLOBAL_STR(str465, "requires code string");
GLOBAL_STR(str466, "requires exactly 1 argument");
GLOBAL_STR(str467, " ");
GLOBAL_STR(str468, "source");
GLOBAL_STR(str469, "missing required argument");
GLOBAL_STR(str470, "source %r failed: %s");
GLOBAL_STR(str471, "command");
GLOBAL_STR(str472, "Can't run assignment builtin recursively");
GLOBAL_STR(str473, "%r isn't a shell builtin");
GLOBAL_STR(str474, "sigpipe");
GLOBAL_STR(str475, "run");
GLOBAL_STR(str476, "'Run' expected a command to run");
GLOBAL_STR(str477, "(original failure)");
GLOBAL_STR(str478, "");
GLOBAL_STR(str479, "fatal: status %d when --allow-status-01");
GLOBAL_STR(str480, ":");
GLOBAL_STR(str481, "function");
GLOBAL_STR(str482, "alias");
GLOBAL_STR(str483, "builtin");
GLOBAL_STR(str484, "builtin");
GLOBAL_STR(str485, "builtin");
GLOBAL_STR(str486, "keyword");
GLOBAL_STR(str487, "keyword");
GLOBAL_STR(str488, "file");
GLOBAL_STR(str489, "type");
GLOBAL_STR(str490, "type: %r not found");
GLOBAL_STR(str491, "file");
GLOBAL_STR(str492, "file");
GLOBAL_STR(str493, "%s is a %s");
GLOBAL_STR(str494, "function");
GLOBAL_STR(str495, "");
GLOBAL_STR(str496, "\n");
GLOBAL_STR(str497, "");
GLOBAL_STR(str498, "");
GLOBAL_STR(str499, "\r\n");
GLOBAL_STR(str500, "\n");
GLOBAL_STR(str501, "'");
GLOBAL_STR(str502, "");
GLOBAL_STR(str503, "");
GLOBAL_STR(str504, "read");
GLOBAL_STR(str505, "_line");
GLOBAL_STR(str506, ":");
GLOBAL_STR(str507, "got extra argument");
GLOBAL_STR(str508, "--qsn can only be used with --line");
GLOBAL_STR(str509, "_all");
GLOBAL_STR(str510, ":");
GLOBAL_STR(str511, "got extra argument");
GLOBAL_STR(str512, "--qsn not implemented yet");
GLOBAL_STR(str513, "read -t isn't implemented (except t=0)");
GLOBAL_STR(str514, "");
GLOBAL_STR(str515, "REPLY");
GLOBAL_STR(str516, "REPLY");
GLOBAL_STR(str517, "\u0000");
GLOBAL_STR(str518, "\u0000");
GLOBAL_STR(str519, "\n");
GLOBAL_STR(str520, "");
GLOBAL_STR(str521, "mapfile");
GLOBAL_STR(str522, "MAPFILE");
GLOBAL_STR(str523, "\n");
GLOBAL_STR(str524, "cd");
GLOBAL_STR(str525, "HOME");
GLOBAL_STR(str526, "HOME");
GLOBAL_STR(str527, "-");
GLOBAL_STR(str528, "OLDPWD");
GLOBAL_STR(str529, "PWD");
GLOBAL_STR(str530, "cd %r: %s");
GLOBAL_STR(str531, "PWD");
GLOBAL_STR(str532, "OLDPWD");
GLOBAL_STR(str533, "%2d  %s");
GLOBAL_STR(str534, " ");
GLOBAL_STR(str535, "pushd: no other directory");
GLOBAL_STR(str536, "got too many arguments");
GLOBAL_STR(str537, "pushd: %r: %s");
GLOBAL_STR(str538, "HOME");
GLOBAL_STR(str539, "PWD");
GLOBAL_STR(str540, "popd: directory stack is empty");
GLOBAL_STR(str541, "popd: %r: %s");
GLOBAL_STR(str542, "PWD");
GLOBAL_STR(str543, "got extra argument");
GLOBAL_STR(str544, "HOME");
GLOBAL_STR(str545, "dirs");
GLOBAL_STR(str546, "HOME");
GLOBAL_STR(str547, "pwd");
GLOBAL_STR(str548, "_devbuild/help/groups.txt");
GLOBAL_STR(str549, "help");
GLOBAL_STR(str550, "help");
GLOBAL_STR(str551, "_devbuild/help/%s");
GLOBAL_STR(str552, "no help topics match %r");
GLOBAL_STR(str553, "# +");
GLOBAL_STR(str554, "osh printf doesn't support the %r flag");
GLOBAL_STR(str555, "eEfFgG");
GLOBAL_STR(str556, "osh printf doesn't support floating point");
GLOBAL_STR(str557, "c");
GLOBAL_STR(str558, "osh printf doesn't support single characters (bytes)");
GLOBAL_STR(str559, "Invalid printf format character");
GLOBAL_STR(str560, "Expected a printf format character");
GLOBAL_STR(str561, "fsT");
GLOBAL_STR(str562, "printf precision can't be specified with type %r");
GLOBAL_STR(str563, "printf");
GLOBAL_STR(str564, "requires a format string");
GLOBAL_STR(str565, "%");
GLOBAL_STR(str566, "");
GLOBAL_STR(str567, "printf got invalid width %r");
GLOBAL_STR(str568, "0");
GLOBAL_STR(str569, "");
GLOBAL_STR(str570, "printf got invalid precision %r");
GLOBAL_STR(str571, "");
GLOBAL_STR(str572, "s");
GLOBAL_STR(str573, "q");
GLOBAL_STR(str574, "b");
GLOBAL_STR(str575, "");
GLOBAL_STR(str576, "diouxX");
GLOBAL_STR(str577, "'\"");
GLOBAL_STR(str578, "printf expected an integer, got %r");
GLOBAL_STR(str579, "di");
GLOBAL_STR(str580, "ouxX");
GLOBAL_STR(str581, "Can't format negative number %d with %%%s");
GLOBAL_STR(str582, "u");
GLOBAL_STR(str583, "o");
GLOBAL_STR(str584, "x");
GLOBAL_STR(str585, "X");
GLOBAL_STR(str586, "TZ");
GLOBAL_STR(str587, "TZ");
GLOBAL_STR(str588, "-");
GLOBAL_STR(str589, " ");
GLOBAL_STR(str590, "0");
GLOBAL_STR(str591, "0");
GLOBAL_STR(str592, " ");
GLOBAL_STR(str593, "");
GLOBAL_STR(str594, "Invalid -v expression");
GLOBAL_STR(str595, "-v expected a variable name.  shopt -s eval_unsafe_arith allows expressions");
GLOBAL_STR(str596, "alias");
GLOBAL_STR(str597, "alias %s=%r");
GLOBAL_STR(str598, "=");
GLOBAL_STR(str599, "No alias named %r");
GLOBAL_STR(str600, "alias %s=%r");
GLOBAL_STR(str601, "unalias");
GLOBAL_STR(str602, "requires an argument");
GLOBAL_STR(str603, "No alias named %r");
GLOBAL_STR(str604, "%s=%s");
GLOBAL_STR(str605, "set");
GLOBAL_STR(str606, "shopt");
GLOBAL_STR(str607, "got invalid option %r");
GLOBAL_STR(str608, "hash");
GLOBAL_STR(str609, "got extra arguments after -r");
GLOBAL_STR(str610, "hash: %r not found");
GLOBAL_STR(str611, ":");
GLOBAL_STR(str612, "OPTIND");
GLOBAL_STR(str613, "OPTIND");
GLOBAL_STR(str614, "OPTARG");
GLOBAL_STR(str615, "OPTARG");
GLOBAL_STR(str616, "");
GLOBAL_STR(str617, "?");
GLOBAL_STR(str618, "-");
GLOBAL_STR(str619, "-");
GLOBAL_STR(str620, "?");
GLOBAL_STR(str621, "?");
GLOBAL_STR(str622, "getopts: option %r requires an argument.");
GLOBAL_STR(str623, "(getopts argv: %s)");
GLOBAL_STR(str624, " ");
GLOBAL_STR(str625, "?");
GLOBAL_STR(str626, "");
GLOBAL_STR(str627, "requires an argspec");
GLOBAL_STR(str628, "requires the name of a variable to set");
GLOBAL_STR(str629, "got invalid variable name %r");
GLOBAL_STR(str630, "echo");
GLOBAL_STR(str631, "");
GLOBAL_STR(str632, "takes at most one arg when simple_echo is on (hint: add quotes)");
GLOBAL_STR(str633, " ");
GLOBAL_STR(str634, "\n");
GLOBAL_STR(str635, "Assignment builtin %r not configured");
GLOBAL_STR(str636, "%r ");
GLOBAL_STR(str637, "");
GLOBAL_STR(str638, "command in ");
GLOBAL_STR(str639, "assignment in ");
GLOBAL_STR(str640, "subshell invoked from ");
GLOBAL_STR(str641, "pipeline invoked from ");
GLOBAL_STR(str642, "");
GLOBAL_STR(str643, "Exiting with status %d (%sPID %d)");
GLOBAL_STR(str644, "Redirect filename can't be empty");
GLOBAL_STR(str645, "Redirect descriptor can't be empty");
GLOBAL_STR(str646, "-");
GLOBAL_STR(str647, "-");
GLOBAL_STR(str648, "Invalid descriptor %r.  Expected D, -, or D- where D is an integer");
GLOBAL_STR(str649, "\n");
GLOBAL_STR(str650, "Unknown redirect op");
GLOBAL_STR(str651, "Unknown redirect type");
GLOBAL_STR(str652, "strict_errexit only allows simple commands (got %s). Hint: use 'run'.");
GLOBAL_STR(str653, "strict_errexit only allows a single command.  Hint: use \"run\".");
GLOBAL_STR(str654, "strict_errexit only allows simple commands (got %s). Hint: use 'run'.");
GLOBAL_STR(str655, "TODO: trace string for assignment");
GLOBAL_STR(str656, "ShAssignment builtins don't accept blocks");
GLOBAL_STR(str657, "|& isn't supported");
GLOBAL_STR(str658, "Can't append array to string");
GLOBAL_STR(str659, "Can't append string to array");
GLOBAL_STR(str660, "%r expected a number, got %r");
GLOBAL_STR(str661, "Invalid control flow at top level");
GLOBAL_STR(str662, "warning: ");
GLOBAL_STR(str663, "Loop and control flow can't be in different processes");
GLOBAL_STR(str664, "fatal: ");
GLOBAL_STR(str665, "EXIT");
GLOBAL_STR(str666, "__");
GLOBAL_STR(str667, ":");
GLOBAL_STR(str668, "Invalid argument %r.  Expected a name starting with :");
GLOBAL_STR(str669, "No value provided for param %r");
GLOBAL_STR(str670, "proc %r expected %d arguments, but got %d");
GLOBAL_STR(str671, "Unexpected %r (in function call)");
GLOBAL_STR(str672, "Attempted to exit from completion hook.");
GLOBAL_STR(str673, "Couldn't find terminator for here doc that starts here");
GLOBAL_STR(str674, "\t");
GLOBAL_STR(str675, "Invalid here doc delimiter");
GLOBAL_STR(str676, "+");
GLOBAL_STR(str677, "+");
GLOBAL_STR(str678, "+");
GLOBAL_STR(str679, "%d != %d");
GLOBAL_STR(str680, "Environment binding shouldn't look like an array assignment");
GLOBAL_STR(str681, "+");
GLOBAL_STR(str682, "Expected = in environment binding, got +=");
GLOBAL_STR(str683, "Environment bindings can't contain array literals");
GLOBAL_STR(str684, "Expected word type %s, got %s");
GLOBAL_STR(str685, "{");
GLOBAL_STR(str686, "}");
GLOBAL_STR(str687, "Invalid token after redirect operator");
GLOBAL_STR(str688, "TODO: Parse Redirect");
GLOBAL_STR(str689, " ");
GLOBAL_STR(str690, " ");
GLOBAL_STR(str691, "line IDs %d != %d");
GLOBAL_STR(str692, " ");
GLOBAL_STR(str693, "");
GLOBAL_STR(str694, "Unexpected block");
GLOBAL_STR(str695, "=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression");
GLOBAL_STR(str696, "name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =");
GLOBAL_STR(str697, "Unexpected block");
GLOBAL_STR(str698, "Unexpected block");
GLOBAL_STR(str699, "Control flow shouldn't have redirects");
GLOBAL_STR(str700, "Control flow shouldn't have environment bindings");
GLOBAL_STR(str701, "Unexpected argument to %r");
GLOBAL_STR(str702, "Invalid word in for loop");
GLOBAL_STR(str703, "Invalid word after for expression");
GLOBAL_STR(str704, "Loop variable name should be a constant");
GLOBAL_STR(str705, "Invalid loop variable name");
GLOBAL_STR(str706, "Unexpected word after for loop variable");
GLOBAL_STR(str707, "Expected ;; or esac");
GLOBAL_STR(str708, "Unexpected word while parsing compound command");
GLOBAL_STR(str709, "Invalid function name");
GLOBAL_STR(str710, "Expected ) in function definition");
GLOBAL_STR(str711, "Invalid KSH-style function name");
GLOBAL_STR(str712, "Unexpected word when parsing command");
GLOBAL_STR(str713, "Unexpected right brace");
GLOBAL_STR(str714, "Unexpected EOF while parsing command");
GLOBAL_STR(str715, "Invalid word while parsing command");
GLOBAL_STR(str716, "Unexpected word while parsing command line");
GLOBAL_STR(str717, "Unterminated here doc began here");
GLOBAL_STR(str718, "\\");
GLOBAL_STR(str719, "*");
GLOBAL_STR(str720, "?");
GLOBAL_STR(str721, "[");
GLOBAL_STR(str722, "]");
GLOBAL_STR(str723, "\\*?[]-:!");
GLOBAL_STR(str724, "\\^-");
GLOBAL_STR(str725, "\\?*+{}^$.()|");
GLOBAL_STR(str726, "\\");
GLOBAL_STR(str727, "Unexpected escaped character %r");
GLOBAL_STR(str728, "");
GLOBAL_STR(str729, "");
GLOBAL_STR(str730, "Malformed character class; treating as literal");
GLOBAL_STR(str731, "Got unescaped right bracket");
GLOBAL_STR(str732, "Got unescaped trailing backslash");
GLOBAL_STR(str733, ".|^$()+*?[]{}\\");
GLOBAL_STR(str734, "\\");
GLOBAL_STR(str735, "\\");
GLOBAL_STR(str736, "\\[");
GLOBAL_STR(str737, "\\]");
GLOBAL_STR(str738, "\\\\");
GLOBAL_STR(str739, "^");
GLOBAL_STR(str740, ".");
GLOBAL_STR(str741, ".*");
GLOBAL_STR(str742, "[");
GLOBAL_STR(str743, "^");
GLOBAL_STR(str744, "\\-");
GLOBAL_STR(str745, "\\]");
GLOBAL_STR(str746, "]");
GLOBAL_STR(str747, "-");
GLOBAL_STR(str748, "]");
GLOBAL_STR(str749, "");
GLOBAL_STR(str750, "Error expanding glob %r: %s");
GLOBAL_STR(str751, "-");
GLOBAL_STR(str752, "<Error: unbalanced \\[ and \\]> ");
GLOBAL_STR(str753, "$");
GLOBAL_STR(str754, "#");
GLOBAL_STR(str755, "$");
GLOBAL_STR(str756, "hostname");
GLOBAL_STR(str757, "user");
GLOBAL_STR(str758, "$ ");
GLOBAL_STR(str759, "\u0001");
GLOBAL_STR(str760, "\u0002");
GLOBAL_STR(str761, "$");
GLOBAL_STR(str762, "$");
GLOBAL_STR(str763, "u");
GLOBAL_STR(str764, "user");
GLOBAL_STR(str765, "h");
GLOBAL_STR(str766, "hostname");
GLOBAL_STR(str767, ".");
GLOBAL_STR(str768, "H");
GLOBAL_STR(str769, "hostname");
GLOBAL_STR(str770, "w");
GLOBAL_STR(str771, "PWD");
GLOBAL_STR(str772, "HOME");
GLOBAL_STR(str773, "<Error: %s>");
GLOBAL_STR(str774, "W");
GLOBAL_STR(str775, "PWD");
GLOBAL_STR(str776, "<Error: PWD is not a string> ");
GLOBAL_STR(str777, "<Error: \\%s not implemented in $PS1> ");
GLOBAL_STR(str778, "$");
GLOBAL_STR(str779, "\\$");
GLOBAL_STR(str780, "Invalid token %r");
GLOBAL_STR(str781, "");
GLOBAL_STR(str782, "<ERROR: Can't parse PS1: %s>");
GLOBAL_STR(str783, "osh");
GLOBAL_STR(str784, "PS1");
GLOBAL_STR(str785, "PROMPT_COMMAND");
GLOBAL_STR(str786, "Undefined variable %r");
GLOBAL_STR(str787, "Can't use [] on value of type %s");
GLOBAL_STR(str788, "");
GLOBAL_STR(str789, "Can't use [] on value of type %s");
GLOBAL_STR(str790, "");
GLOBAL_STR(str791, "0x");
GLOBAL_STR(str792, "Invalid hex constant %r");
GLOBAL_STR(str793, "0");
GLOBAL_STR(str794, "Invalid octal constant %r");
GLOBAL_STR(str795, "#");
GLOBAL_STR(str796, "#");
GLOBAL_STR(str797, "Invalid base for numeric constant %r");
GLOBAL_STR(str798, "a");
GLOBAL_STR(str799, "A");
GLOBAL_STR(str800, "@");
GLOBAL_STR(str801, "_");
GLOBAL_STR(str802, "Invalid digits for numeric constant %r");
GLOBAL_STR(str803, "Digits %r out of range for base %d");
GLOBAL_STR(str804, "Parse error in recursive arithmetic");
GLOBAL_STR(str805, "Invalid integer constant %r");
GLOBAL_STR(str806, "Invalid integer constant %r");
GLOBAL_STR(str807, "Invalid integer constant %r");
GLOBAL_STR(str808, "Undefined value in arithmetic context");
GLOBAL_STR(str809, "Expected a value convertible to integer, got %s");
GLOBAL_STR(str810, "0");
GLOBAL_STR(str811, "Divide by zero");
GLOBAL_STR(str812, "Divide by zero");
GLOBAL_STR(str813, "Expected array or assoc in index expression, got %s");
GLOBAL_STR(str814, "Divide by zero");
GLOBAL_STR(str815, "Divide by zero");
GLOBAL_STR(str816, "Exponent can't be less than zero");
GLOBAL_STR(str817, "Associative array keys must be strings: $x 'x' \"$x\" etc.");
GLOBAL_STR(str818, "Invalid place to modify");
GLOBAL_STR(str819, "BASH_REMATCH");
GLOBAL_STR(str820, "%s isn't implemented");
GLOBAL_STR(str821, "Invalid regex %r: %s");
GLOBAL_STR(str822, " \t\n");
GLOBAL_STR(str823, "IFS");
GLOBAL_STR(str824, "IFS shouldn't be an array");
GLOBAL_STR(str825, " \t\n");
GLOBAL_STR(str826, "IFS");
GLOBAL_STR(str827, " ");
GLOBAL_STR(str828, "");
GLOBAL_STR(str829, "IFS shouldn't be an array");
GLOBAL_STR(str830, "\\");
GLOBAL_STR(str831, "\\");
GLOBAL_STR(str832, "Invalid transition from %r with %r");
GLOBAL_STR(str833, "\u00ef\u00bf\u00bd");
GLOBAL_STR(str834, "");
GLOBAL_STR(str835, "Incomplete UTF-8 character");
GLOBAL_STR(str836, "Invalid UTF-8 continuation byte");
GLOBAL_STR(str837, "Invalid start of UTF-8 character");
GLOBAL_STR(str838, "");
GLOBAL_STR(str839, "%s can't have an argument");
GLOBAL_STR(str840, "");
GLOBAL_STR(str841, "%s can't have an argument");
GLOBAL_STR(str842, "");
GLOBAL_STR(str843, "%s can't have an argument");
GLOBAL_STR(str844, "");
GLOBAL_STR(str845, "%s can't have an argument");
GLOBAL_STR(str846, "");
GLOBAL_STR(str847, "<_GlobReplacer regex %r r %r>");
GLOBAL_STR(str848, "(%s)");
GLOBAL_STR(str849, "Error matching regex %r: %s");
GLOBAL_STR(str850, "^");
GLOBAL_STR(str851, "$");
GLOBAL_STR(str852, "\r");
GLOBAL_STR(str853, "<INVALID CR>");
GLOBAL_STR(str854, "\n");
GLOBAL_STR(str855, "<INVALID NEWLINE>");
GLOBAL_STR(str856, " `~!$&*()[]{}\\|;'\"<>?");
GLOBAL_STR(str857, "Left-hand side of this assignment is invalid");
GLOBAL_STR(str858, "Token can't be used in prefix position");
GLOBAL_STR(str859, "Token can't be used in infix position");
GLOBAL_STR(str860, "Parser expected %s, got %s");
GLOBAL_STR(str861, "Unexpected end of input");
GLOBAL_STR(str862, "");
GLOBAL_STR(str863, "");
GLOBAL_STR(str864, "BASH_SOURCE");
GLOBAL_STR(str865, "FUNCNAME");
GLOBAL_STR(str866, "BASH_LINENO");
GLOBAL_STR(str867, "0");
GLOBAL_STR(str868, "0");
GLOBAL_STR(str869, "\\");
GLOBAL_STR(str870, "\\\\");
GLOBAL_STR(str871, "");
GLOBAL_STR(str872, "");
GLOBAL_STR(str873, "The length index of a array slice can't be negative: %d");
GLOBAL_STR(str874, "Can't slice associative arrays");
GLOBAL_STR(str875, "i");
GLOBAL_STR(str876, "e");
GLOBAL_STR(str877, "f");
GLOBAL_STR(str878, "n");
GLOBAL_STR(str879, "u");
GLOBAL_STR(str880, "x");
GLOBAL_STR(str881, "C");
GLOBAL_STR(str882, "");
GLOBAL_STR(str883, "~");
GLOBAL_STR(str884, "HOME");
GLOBAL_STR(str885, "Error expanding tilde (e.g. invalid user)");
GLOBAL_STR(str886, "Can't assign to special variable");
GLOBAL_STR(str887, "unset variable %r");
GLOBAL_STR(str888, "@");
GLOBAL_STR(str889, "*");
GLOBAL_STR(str890, "@");
GLOBAL_STR(str891, "*");
GLOBAL_STR(str892, "warning: ");
GLOBAL_STR(str893, "-1");
GLOBAL_STR(str894, "@");
GLOBAL_STR(str895, "*");
GLOBAL_STR(str896, "[");
GLOBAL_STR(str897, "]");
GLOBAL_STR(str898, "Bad indirect expansion: %r");
GLOBAL_STR(str899, "");
GLOBAL_STR(str900, "warning: ");
GLOBAL_STR(str901, "");
GLOBAL_STR(str902, "\u0001");
GLOBAL_STR(str903, "");
GLOBAL_STR(str904, "\u0002");
GLOBAL_STR(str905, "");
GLOBAL_STR(str906, "Can't use @P on %s");
GLOBAL_STR(str907, " ");
GLOBAL_STR(str908, "Can't use @Q on %s");
GLOBAL_STR(str909, "a");
GLOBAL_STR(str910, "A");
GLOBAL_STR(str911, "r");
GLOBAL_STR(str912, "x");
GLOBAL_STR(str913, "n");
GLOBAL_STR(str914, "");
GLOBAL_STR(str915, "Var op %r not implemented");
GLOBAL_STR(str916, "Can't index string with @");
GLOBAL_STR(str917, "Can't index string with *");
GLOBAL_STR(str918, "Can't index string %r with integer");
GLOBAL_STR(str919, "");
GLOBAL_STR(str920, "");
GLOBAL_STR(str921, "$");
GLOBAL_STR(str922, "Undefined variable %r");
GLOBAL_STR(str923, "Undefined array %r");
GLOBAL_STR(str924, "Array %r can't be referred to as a scalar (without @ or *)");
GLOBAL_STR(str925, "Illegal array word part (strict_array)");
GLOBAL_STR(str926, " ");
GLOBAL_STR(str927, "");
GLOBAL_STR(str928, "Array %r can't be referred to as a scalar (without @ or *)");
GLOBAL_STR(str929, "Unexpected array literal");
GLOBAL_STR(str930, "Unexpected associative array literal");
GLOBAL_STR(str931, "@(");
GLOBAL_STR(str932, "|");
GLOBAL_STR(str933, ")");
GLOBAL_STR(str934, "Can't splice %r");
GLOBAL_STR(str935, "");
GLOBAL_STR(str936, "");
GLOBAL_STR(str937, "This word should yield a string, but it contains an array");
GLOBAL_STR(str938, " ");
GLOBAL_STR(str939, "");
GLOBAL_STR(str940, "<Runtime error: %s>");
GLOBAL_STR(str941, "<I/O error: %s>");
GLOBAL_STR(str942, "<Ctrl-C>");
GLOBAL_STR(str943, "");
GLOBAL_STR(str944, "");
GLOBAL_STR(str945, "");
GLOBAL_STR(str946, "");
GLOBAL_STR(str947, "");
GLOBAL_STR(str948, "LHS array not allowed in assignment builtin");
GLOBAL_STR(str949, "+");
GLOBAL_STR(str950, "+= not allowed in assignment builtin");
GLOBAL_STR(str951, "-");
GLOBAL_STR(str952, "+");
GLOBAL_STR(str953, "f");
GLOBAL_STR(str954, "F");
GLOBAL_STR(str955, "");
GLOBAL_STR(str956, "=");
GLOBAL_STR(str957, "Invalid variable name %r");
GLOBAL_STR(str958, "__NO_COMMAND_SUB__");
GLOBAL_STR(str959, "__NO_PROCESS_SUB__");
GLOBAL_STR(str960, "Expected : or } in slice");
GLOBAL_STR(str961, "Pattern in ${x/pat/replace} must not be empty");
GLOBAL_STR(str962, "Expected } after replacement string, got %s");
GLOBAL_STR(str963, "Expected } or / to close pattern");
GLOBAL_STR(str964, "Expected ] to close subscript");
GLOBAL_STR(str965, "Expected } to close ${");
GLOBAL_STR(str966, "Expected } to close ${");
GLOBAL_STR(str967, "Expected } to close ${");
GLOBAL_STR(str968, "Unexpected token in ${} (%s)");
GLOBAL_STR(str969, "VOp2");
GLOBAL_STR(str970, "Unexpected token in ${} (%s)");
GLOBAL_STR(str971, "VOp3");
GLOBAL_STR(str972, "Expected } to close ${");
GLOBAL_STR(str973, "Expected } after length expression");
GLOBAL_STR(str974, "Unexpected token in ${}");
GLOBAL_STR(str975, "\\");
GLOBAL_STR(str976, "Strings with backslashes should look like r'\\n' or c'\\n'");
GLOBAL_STR(str977, "Use \\xhh or \\u{...} instead of octal escapes in Oil strings");
GLOBAL_STR(str978, "Invalid hex escape in Oil string (must be \\xHH)");
GLOBAL_STR(str979, "Invalid char escape in C-style string literal");
GLOBAL_STR(str980, "Unexpected EOF in single-quoted string that began here");
GLOBAL_STR(str981, "Unexpected EOF reading extended glob that began here");
GLOBAL_STR(str982, "Invalid char escape in double quoted string");
GLOBAL_STR(str983, "Literal $ should be quoted like \\$");
GLOBAL_STR(str984, "Invalid backtick: use $(cmd) or \\` in Oil strings");
GLOBAL_STR(str985, "Unexpected EOF reading double-quoted string that began here");
GLOBAL_STR(str986, "Use $(cmd) instead of backticks (parse_backticks)");
GLOBAL_STR(str987, "Unexpected EOF while looking for closing backtick");
GLOBAL_STR(str988, "");
GLOBAL_STR(str989, "Invalid proc name %s");
GLOBAL_STR(str990, "Unexpected token after arithmetic expression (%s != %s)");
GLOBAL_STR(str991, "Expected second ) to end arith sub");
GLOBAL_STR(str992, "Expected second ) to end arith statement");
GLOBAL_STR(str993, "Expected ; here");
GLOBAL_STR(str994, "Expected ; here");
GLOBAL_STR(str995, "Expected ) to end for loop expression");
GLOBAL_STR(str996, "Expected ( after =");
GLOBAL_STR(str997, "Unexpected token in array literal");
GLOBAL_STR(str998, "Expected associative array pair");
GLOBAL_STR(str999, "Invalid char escape (parse_backslash)");
GLOBAL_STR(str1000, "Unexpected token after array literal");
GLOBAL_STR(str1001, "Unexpected token after array splice");
GLOBAL_STR(str1002, "Literal @ starting a word must be quoted (parse_at_all)");
GLOBAL_STR(str1003, "/");
GLOBAL_STR(str1004, "next_byte %r");
GLOBAL_STR(str1005, "Literal $ should be quoted like \\$");
GLOBAL_STR(str1006, "Unexpected token after @()");
GLOBAL_STR(str1007, "id = %s");
GLOBAL_STR(str1008, "id = %s");
GLOBAL_STR(str1009, "Word has unbalanced { }.  Maybe add a space or quote it like \\{");
GLOBAL_STR(str1010, "Unexpected token while parsing arithmetic: %r");
GLOBAL_STR(str1011, "Unhandled: %s (%s)");
GLOBAL_STR(str1012, "Invalid lex state %s");
GLOBAL_STR(str1013, "");
GLOBAL_STR(str1014, "");
GLOBAL_STR(str1015, "");
GLOBAL_STR(str1016, "");
GLOBAL_STR(str1017, "");
GLOBAL_STR(str1018, "");
GLOBAL_STR(str1019, "");
GLOBAL_STR(str1020, "");
GLOBAL_STR(str1021, "");
GLOBAL_STR(str1022, "Compound shouldn't be empty");
GLOBAL_STR(str1023, "/");
GLOBAL_STR(str1024, "/");
GLOBAL_STR(str1025, "");
GLOBAL_STR(str1026, "EOF");
GLOBAL_STR(str1027, "typ");
GLOBAL_STR(str1028, "tok");
GLOBAL_STR(str1029, "children");
GLOBAL_STR(str1030, "-");
GLOBAL_STR(str1031, "with %d children");
GLOBAL_STR(str1032, "");
GLOBAL_STR(str1033, "(PNode %s %s %s)");
GLOBAL_STR(str1034, "&");
GLOBAL_STR(str1035, "&amp;");
GLOBAL_STR(str1036, "<");
GLOBAL_STR(str1037, "&lt;");
GLOBAL_STR(str1038, ">");
GLOBAL_STR(str1039, "&gt;");
GLOBAL_STR(str1040, ".");
GLOBAL_STR(str1041, "/");
GLOBAL_STR(str1042, "/");
GLOBAL_STR(str1043, "/");
GLOBAL_STR(str1044, "%s/%s");
GLOBAL_STR(str1045, "/");
GLOBAL_STR(str1046, "/");
GLOBAL_STR(str1047, "/");
GLOBAL_STR(str1048, "");
GLOBAL_STR(str1049, "/");
GLOBAL_STR(str1050, "/");
GLOBAL_STR(str1051, "/");
GLOBAL_STR(str1052, "/");
GLOBAL_STR(str1053, "/");
GLOBAL_STR(str1054, ".");
GLOBAL_STR(str1055, "");
GLOBAL_STR(str1056, "/");
GLOBAL_STR(str1057, "//");
GLOBAL_STR(str1058, "///");
GLOBAL_STR(str1059, "/");
GLOBAL_STR(str1060, ".");
GLOBAL_STR(str1061, "..");
GLOBAL_STR(str1062, "..");
GLOBAL_STR(str1063, "/");
GLOBAL_STR(str1064, " \n\r\t");
GLOBAL_STR(str1065, "Unexpected token in QSN string");
GLOBAL_STR(str1066, "Expected closing single quote in QSN string");
GLOBAL_STR(str1067, "Unexpected data after closing quote");
GLOBAL_STR(str1068, "Unexpected token after QSN string");
GLOBAL_STR(str1069, "\\'\r\n\t\u0000");
GLOBAL_STR(str1070, "$'");
GLOBAL_STR(str1071, "'");
GLOBAL_STR(str1072, "'");
GLOBAL_STR(str1073, "");
GLOBAL_STR(str1074, "'");
GLOBAL_STR(str1075, "'");
GLOBAL_STR(str1076, "");
GLOBAL_STR(str1077, "'");
GLOBAL_STR(str1078, "'");
GLOBAL_STR(str1079, "");
GLOBAL_STR(str1080, "\\");
GLOBAL_STR(str1081, "\\\\");
GLOBAL_STR(str1082, "'");
GLOBAL_STR(str1083, "\\'");
GLOBAL_STR(str1084, "\n");
GLOBAL_STR(str1085, "\\n");
GLOBAL_STR(str1086, "\r");
GLOBAL_STR(str1087, "\\r");
GLOBAL_STR(str1088, "\t");
GLOBAL_STR(str1089, "\\t");
GLOBAL_STR(str1090, "\u0000");
GLOBAL_STR(str1091, "\\x00");
GLOBAL_STR(str1092, "\\0");
GLOBAL_STR(str1093, "");
GLOBAL_STR(str1094, "");
GLOBAL_STR(str1095, "");
GLOBAL_STR(str1096, "\\");
GLOBAL_STR(str1097, "\\\\");
GLOBAL_STR(str1098, "'");
GLOBAL_STR(str1099, "\\'");
GLOBAL_STR(str1100, "\n");
GLOBAL_STR(str1101, "\\n");
GLOBAL_STR(str1102, "\r");
GLOBAL_STR(str1103, "\\r");
GLOBAL_STR(str1104, "\t");
GLOBAL_STR(str1105, "\\t");
GLOBAL_STR(str1106, "\u0000");
GLOBAL_STR(str1107, "\\x00");
GLOBAL_STR(str1108, "\\0");
GLOBAL_STR(str1109, "");
GLOBAL_STR(str1110, "!");
GLOBAL_STR(str1111, "--");
GLOBAL_STR(str1112, "--dir");
GLOBAL_STR(str1113, "--exists");
GLOBAL_STR(str1114, "--file");
GLOBAL_STR(str1115, "--symlink");
GLOBAL_STR(str1116, "Expected unary operator, got %r (2 args)");
GLOBAL_STR(str1117, "-a");
GLOBAL_STR(str1118, "-o");
GLOBAL_STR(str1119, "!");
GLOBAL_STR(str1120, "(");
GLOBAL_STR(str1121, ")");
GLOBAL_STR(str1122, "Expected binary operator, got %r (3 args)");
GLOBAL_STR(str1123, "should be invoked as 'test' (simple_test_builtin)");
GLOBAL_STR(str1124, "]");
GLOBAL_STR(str1125, "missing closing ]");
GLOBAL_STR(str1126, "should only have 3 arguments or fewer (simple_test_builtin)");
GLOBAL_STR(str1127, "!");
GLOBAL_STR(str1128, "(");
GLOBAL_STR(str1129, ")");
GLOBAL_STR(str1130, "(test) ");
GLOBAL_STR(str1131, "(test) ");

namespace vm {  // forward declare
  class _Executor;
  class _AssignBuiltin;
  class _Builtin;
  class ctx_Redirect;
  class ctx_ProcessSub;

}  // forward declare namespace vm

namespace osh_eval {  // forward declare

}  // forward declare namespace osh_eval

namespace alloc {  // forward declare
  class ctx_Location;
  class Arena;

}  // forward declare namespace alloc

namespace ansi {  // forward declare

}  // forward declare namespace ansi

namespace dev {  // forward declare
  class CrashDumper;
  class Tracer;

}  // forward declare namespace dev

namespace error {  // forward declare
  class _ControlFlow;

}  // forward declare namespace error

namespace executor {  // forward declare
  class _ProcessSubFrame;
  class ShellExecutor;

}  // forward declare namespace executor

namespace main_loop {  // forward declare

}  // forward declare namespace main_loop

namespace process {  // forward declare
  class _RedirFrame;
  class _FdFrame;
  class FdState;
  class ChildStateChange;
  class StdinFromPipe;
  class StdoutToPipe;
  class ExternalProgram;
  class Thunk;
  class ExternalThunk;
  class SubProgramThunk;
  class _HereDocWriterThunk;
  class Job;
  class Process;
  class Pipeline;
  class JobState;
  class Waiter;

}  // forward declare namespace process

namespace pure {  // forward declare
  class NullExecutor;

}  // forward declare namespace pure

namespace state {  // forward declare
  class SearchPath;
  class ctx_Option;
  class ctx_AssignBuiltin;
  class ctx_ErrExit;
  class OptHook;
  class MutableOpts;
  class _ArgFrame;
  class DirStack;
  class DebugFrame;
  class ctx_Call;
  class ctx_Temp;
  class ctx_Status;
  class Mem;

}  // forward declare namespace state

namespace ui {  // forward declare
  class ErrorFormatter;

}  // forward declare namespace ui

namespace util {  // forward declare
  class UserExit;
  class _DebugFile;
  class NullDebugFile;
  class DebugFile;

}  // forward declare namespace util

namespace lexer {  // forward declare
  class LineLexer;
  class Lexer;

}  // forward declare namespace lexer

namespace location {  // forward declare

}  // forward declare namespace location

namespace parse_lib {  // forward declare
  class _BaseTrail;
  class ctx_Alias;
  class Trail;
  class ParseContext;

}  // forward declare namespace parse_lib

namespace reader {  // forward declare
  class _Reader;
  class DisallowedLineReader;
  class FileLineReader;
  class VirtualLineReader;

}  // forward declare namespace reader

namespace expr_parse {  // forward declare
  class ExprParser;

}  // forward declare namespace expr_parse

namespace expr_to_ast {  // forward declare
  class Transformer;

}  // forward declare namespace expr_to_ast

namespace regex_translate {  // forward declare

}  // forward declare namespace regex_translate

namespace arith_parse {  // forward declare

}  // forward declare namespace arith_parse

namespace bool_parse {  // forward declare
  class BoolParser;

}  // forward declare namespace bool_parse

namespace braces {  // forward declare
  class _NotARange;
  class _RangeParser;
  class _StackFrame;

}  // forward declare namespace braces

namespace builtin_assign {  // forward declare
  class Export;
  class Readonly;
  class NewVar;
  class Unset;
  class Shift;

}  // forward declare namespace builtin_assign

namespace builtin_meta {  // forward declare
  class Eval;
  class Source;
  class Command;
  class Builtin;
  class Run_;
  class Type;

}  // forward declare namespace builtin_meta

namespace builtin_misc {  // forward declare
  class Times;
  class Read;
  class MapFile;
  class Cd;
  class Pushd;
  class Popd;
  class Dirs;
  class Pwd;
  class Help;
  class Cat;

}  // forward declare namespace builtin_misc

namespace builtin_printf {  // forward declare
  class _FormatStringParser;
  class Printf;

}  // forward declare namespace builtin_printf

namespace builtin_pure {  // forward declare
  class Boolean;
  class Alias;
  class UnAlias;
  class Set;
  class Shopt;
  class Hash;
  class GetOptsState;
  class GetOpts;
  class Echo;

}  // forward declare namespace builtin_pure

namespace cmd_eval {  // forward declare
  class Deps;
  class CommandEvaluator;

}  // forward declare namespace cmd_eval

namespace cmd_parse {  // forward declare
  class CommandParser;

}  // forward declare namespace cmd_parse

namespace glob_ {  // forward declare
  class _GlobParser;
  class Globber;

}  // forward declare namespace glob_

namespace prompt {  // forward declare
  class _PromptEvaluatorCache;
  class Evaluator;
  class UserPlugin;

}  // forward declare namespace prompt

namespace sh_expr_eval {  // forward declare
  class ArithEvaluator;
  class BoolEvaluator;

}  // forward declare namespace sh_expr_eval

namespace split {  // forward declare
  class SplitContext;
  class _BaseSplitter;
  class IfsSplitter;

}  // forward declare namespace split

namespace string_ops {  // forward declare
  class GlobReplacer;

}  // forward declare namespace string_ops

namespace tdop {  // forward declare
  class TdopParser;

}  // forward declare namespace tdop

namespace word_compile {  // forward declare

}  // forward declare namespace word_compile

namespace word_eval {  // forward declare
  class StringWordEvaluator;
  class TildeEvaluator;
  class AbstractWordEvaluator;
  class NormalWordEvaluator;
  class CompletionWordEvaluator;

}  // forward declare namespace word_eval

namespace word_parse {  // forward declare
  class WordEmitter;
  class WordParser;

}  // forward declare namespace word_parse

namespace word_ {  // forward declare
  class ctx_EmitDocToken;

}  // forward declare namespace word_

namespace grammar {  // forward declare
  class Grammar;

}  // forward declare namespace grammar

namespace pnode {  // forward declare
  class PNode;

}  // forward declare namespace pnode

namespace cgi {  // forward declare

}  // forward declare namespace cgi

namespace os_path {  // forward declare

}  // forward declare namespace os_path

namespace qsn_native {  // forward declare

}  // forward declare namespace qsn_native

namespace qsn {  // forward declare

}  // forward declare namespace qsn

namespace builtin_bracket {  // forward declare
  class _StringWordEmitter;
  class _WordEvaluator;
  class Test;

}  // forward declare namespace builtin_bracket

namespace vm {  // declare
void InitCircularDeps(sh_expr_eval::ArithEvaluator* arith_ev, sh_expr_eval::BoolEvaluator* bool_ev, expr_eval::OilEvaluator* expr_ev, word_eval::NormalWordEvaluator* word_ev, cmd_eval::CommandEvaluator* cmd_ev, vm::_Executor* shell_ex, prompt::Evaluator* prompt_ev, dev::Tracer* tracer);

class _Executor : public gc_heap::Obj {
 public:
  _Executor();
  virtual void CheckCircularDeps();
  virtual int RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val);
  int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork);
  virtual int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs);
  virtual int RunBackgroundJob(syntax_asdl::command_t* node);
  virtual void RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out);
  virtual int RunSubshell(syntax_asdl::command_t* node);
  virtual Str* RunCommandSub(syntax_asdl::command_sub* cs_part);
  virtual Str* RunProcessSub(syntax_asdl::command_sub* cs_part);
  virtual void Time();
  virtual bool PushRedirects(List<runtime_asdl::redirect*>* redirects);
  virtual void PopRedirects();
  virtual void PushProcessSub();
  virtual void PopProcessSub(runtime_asdl::CompoundStatus* compound_st);

  cmd_eval::CommandEvaluator* cmd_ev;

  DISALLOW_COPY_AND_ASSIGN(_Executor)
};

class _AssignBuiltin : public gc_heap::Obj {
 public:
  _AssignBuiltin();
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(_AssignBuiltin)
};

class _Builtin : public gc_heap::Obj {
 public:
  _Builtin();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(_Builtin)
};

class ctx_Redirect : public gc_heap::Obj {
 public:
  ctx_Redirect(vm::_Executor* shell_ex);
  ~ctx_Redirect();

  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(ctx_Redirect)
};

class ctx_ProcessSub : public gc_heap::Obj {
 public:
  ctx_ProcessSub(vm::_Executor* shell_ex, runtime_asdl::CompoundStatus* process_sub_status);
  ~ctx_ProcessSub();

  runtime_asdl::CompoundStatus* process_sub_status;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(ctx_ProcessSub)
};

}  // declare namespace vm

namespace osh_eval {  // declare
int main(List<Str*>* argv);
inline Str* fmt5(Str* a0) {
  gBuf.reset();
  gBuf.write_const("oil: ", 5);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt6(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh fatal error: ", 17);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt7(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh I/O error: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}


}  // declare namespace osh_eval

namespace alloc {  // declare

class ctx_Location : public gc_heap::Obj {
 public:
  ctx_Location(alloc::Arena* arena, syntax_asdl::source_t* src);
  ~ctx_Location();

  alloc::Arena* arena;

  DISALLOW_COPY_AND_ASSIGN(ctx_Location)
};

class Arena : public gc_heap::Obj {
 public:
  Arena();
  void PushSource(syntax_asdl::source_t* src);
  void PopSource();
  int AddLine(Str* line, int line_num);
  Str* GetLine(int line_id);
  int GetLineNumber(int line_id);
  Str* GetLineNumStr(int line_id);
  syntax_asdl::source_t* GetLineSource(int line_id);
  Str* GetLineSourceString(int line_id);
  int AddLineSpan(int line_id, int col, int length);
  syntax_asdl::line_span* GetLineSpan(int span_id);
  int LastSpanId();

  Dict<int, Str*>* line_num_strs;
  List<int>* line_nums;
  List<syntax_asdl::source_t*>* line_srcs;
  List<Str*>* line_vals;
  List<syntax_asdl::source_t*>* source_instances;
  List<syntax_asdl::line_span*>* spans;

  DISALLOW_COPY_AND_ASSIGN(Arena)
};

}  // declare namespace alloc

namespace ansi {  // declare
extern Str* RESET;
extern Str* BOLD;
extern Str* UNDERLINE;
extern Str* REVERSE;
extern Str* RED;
extern Str* GREEN;
extern Str* YELLOW;
extern Str* BLUE;

}  // declare namespace ansi

namespace dev {  // declare

class CrashDumper : public gc_heap::Obj {
 public:
  CrashDumper(Str* crash_dump_dir);
  void MaybeCollect(void* cmd_ev, error::_ErrorWithLocation* err);
  void MaybeDump(int status);

  void* argv_stack;
  bool collected;
  Str* crash_dump_dir;
  void* debug_stack;
  bool do_collect;
  Dict<Str*, void*>* error;
  void* var_stack;

  DISALLOW_COPY_AND_ASSIGN(CrashDumper)
};

class Tracer : public gc_heap::Obj {
 public:
  Tracer(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, state::Mem* mem, word_eval::NormalWordEvaluator* word_ev, util::_DebugFile* f);
  Tuple2<Str*, Str*> _EvalPS4();
  void OnSimpleCommand(List<Str*>* argv);
  void OnShAssignment(runtime_asdl::lvalue_t* lval, syntax_asdl::assign_op_t op, runtime_asdl::value_t* val, int flags, runtime_asdl::scope_t which_scopes);
  void Event();

  optview::Exec* exec_opts;
  util::_DebugFile* f;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  Dict<Str*, syntax_asdl::compound_word*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;
  word_eval::NormalWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(Tracer)
};
inline Str* fmt8(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<ERROR: Can't parse PS4: ", 25);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt9(Str* a0, Str* a1, Str* a2) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.format_s(a2);
  return gBuf.getvalue();
}


}  // declare namespace dev

namespace error {  // declare
extern int NO_SPID;

class _ControlFlow : public gc_heap::Obj {
 public:
  _ControlFlow(syntax_asdl::Token* token, int arg);
  bool IsReturn();
  bool IsBreak();
  bool IsContinue();
  int StatusCode();

  int arg;
  syntax_asdl::Token* token;

  DISALLOW_COPY_AND_ASSIGN(_ControlFlow)
};

}  // declare namespace error

namespace executor {  // declare

class _ProcessSubFrame : public gc_heap::Obj {
 public:
  _ProcessSubFrame();

  List<int>* span_ids;
  List<int>* to_close;
  List<process::Process*>* to_wait;

  DISALLOW_COPY_AND_ASSIGN(_ProcessSubFrame)
};

class ShellExecutor : public vm::_Executor {
 public:
  ShellExecutor(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<int, vm::_Builtin*>* builtins, state::SearchPath* search_path, process::ExternalProgram* ext_prog, process::Waiter* waiter, process::JobState* job_state, process::FdState* fd_state, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  process::Process* _MakeProcess(syntax_asdl::command_t* node);
  process::Process* _MakeProcess(syntax_asdl::command_t* node, bool inherit_errexit);
  virtual int RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val);
  int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork);
  virtual int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs);
  virtual int RunBackgroundJob(syntax_asdl::command_t* node);
  virtual void RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out);
  virtual int RunSubshell(syntax_asdl::command_t* node);
  virtual Str* RunCommandSub(syntax_asdl::command_sub* cs_part);
  virtual Str* RunProcessSub(syntax_asdl::command_sub* cs_part);
  void MaybeWaitOnProcessSubs(executor::_ProcessSubFrame* frame, runtime_asdl::CompoundStatus* compound_st);
  virtual void Time();
  virtual bool PushRedirects(List<runtime_asdl::redirect*>* redirects);
  virtual void PopRedirects();
  virtual void PushProcessSub();
  virtual void PopProcessSub(runtime_asdl::CompoundStatus* compound_st);

  Dict<int, vm::_Builtin*>* builtins;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  process::ExternalProgram* ext_prog;
  process::FdState* fd_state;
  process::JobState* job_state;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  List<executor::_ProcessSubFrame*>* process_sub_stack;
  Dict<Str*, runtime_asdl::Proc*>* procs;
  state::SearchPath* search_path;
  process::Waiter* waiter;

  DISALLOW_COPY_AND_ASSIGN(ShellExecutor)
};
inline Str* fmt10(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid control flow ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(" in pipeline / subshell / background", 36);
  return gBuf.getvalue();
}

inline Str* fmt11(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" ", 1);
  return gBuf.getvalue();
}

inline Str* fmt12() {
  gBuf.reset();
  gBuf.write_const("Command evaluated to an empty argv array", 40);
  return gBuf.getvalue();
}

inline Str* fmt13() {
  gBuf.reset();
  gBuf.write_const("Can't run a proc while errexit is disabled. Use 'run' or wrap it in a process with $0 myproc", 92);
  return gBuf.getvalue();
}

inline Str* fmt14(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected block passed to external command ", 44);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt15(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" not found", 10);
  return gBuf.getvalue();
}

inline Str* fmt16(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("[", 1);
  gBuf.write_const("%", 1);
  gBuf.format_d(a0);
  gBuf.write_const("] Started Pipeline with PID ", 28);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt17(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("[", 1);
  gBuf.write_const("%", 1);
  gBuf.format_d(a0);
  gBuf.write_const("] Started PID ", 14);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt18(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Command sub exited with status ", 31);
  gBuf.format_d(a0);
  gBuf.write_const(" (", 2);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt19(int a0) {
  gBuf.reset();
  gBuf.write_const("/dev/fd/", 8);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt20(int a0) {
  gBuf.reset();
  gBuf.write_const("/dev/fd/", 8);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}


}  // declare namespace executor

namespace main_loop {  // declare
int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena);
int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena, int cmd_flags);
syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser);

}  // declare namespace main_loop

namespace process {  // declare
extern int NO_FD;

class _RedirFrame : public gc_heap::Obj {
 public:
  _RedirFrame(int saved_fd, int orig_fd, bool forget);

  bool forget;
  int orig_fd;
  int saved_fd;

  DISALLOW_COPY_AND_ASSIGN(_RedirFrame)
};

class _FdFrame : public gc_heap::Obj {
 public:
  _FdFrame();
  void Forget();

  List<Tuple2<process::Process*, process::Waiter*>*>* need_wait;
  List<process::_RedirFrame*>* saved;

  DISALLOW_COPY_AND_ASSIGN(_FdFrame)
};

class FdState : public gc_heap::Obj {
 public:
  FdState(ui::ErrorFormatter* errfmt, process::JobState* job_state, state::Mem* mem);
  mylib::LineReader* Open(Str* path);
  mylib::LineReader* _Open(Str* path, Str* c_mode, int fd_mode);
  void _WriteFdToMem(Str* fd_name, int fd);
  int _ReadFdFromMem(Str* fd_name);
  bool _PushSave(int fd);
  int _PushDup(int fd1, syntax_asdl::redir_loc_t* loc);
  bool _PushCloseFd(syntax_asdl::redir_loc_t* loc);
  void _PushClose(int fd);
  void _PushWait(process::Process* proc, process::Waiter* waiter);
  void _ApplyRedirect(runtime_asdl::redirect* r, process::Waiter* waiter);
  bool Push(List<runtime_asdl::redirect*>* redirects, process::Waiter* waiter);
  bool PushStdinFromPipe(int r);
  void Pop();
  void MakePermanent();

  process::_FdFrame* cur_frame;
  ui::ErrorFormatter* errfmt;
  process::JobState* job_state;
  state::Mem* mem;
  List<process::_FdFrame*>* stack;

  DISALLOW_COPY_AND_ASSIGN(FdState)
};

class ChildStateChange : public gc_heap::Obj {
 public:
  ChildStateChange();
  virtual void Apply();

  DISALLOW_COPY_AND_ASSIGN(ChildStateChange)
};

class StdinFromPipe : public ChildStateChange {
 public:
  StdinFromPipe(int pipe_read_fd, int w);
  virtual void Apply();

  int r;
  int w;

  DISALLOW_COPY_AND_ASSIGN(StdinFromPipe)
};

class StdoutToPipe : public ChildStateChange {
 public:
  StdoutToPipe(int r, int pipe_write_fd);
  virtual void Apply();

  int r;
  int w;

  DISALLOW_COPY_AND_ASSIGN(StdoutToPipe)
};

class ExternalProgram : public gc_heap::Obj {
 public:
  ExternalProgram(Str* hijack_shebang, process::FdState* fd_state, ui::ErrorFormatter* errfmt, util::_DebugFile* debug_f);
  void Exec(Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ);
  void _Exec(Str* argv0_path, List<Str*>* argv, int argv0_spid, Dict<Str*, Str*>* environ, bool should_retry);

  util::_DebugFile* debug_f;
  ui::ErrorFormatter* errfmt;
  process::FdState* fd_state;
  Str* hijack_shebang;

  DISALLOW_COPY_AND_ASSIGN(ExternalProgram)
};

class Thunk : public gc_heap::Obj {
 public:
  Thunk();
  virtual void Run();
  virtual Str* DisplayLine();
  Str* __str__();

  DISALLOW_COPY_AND_ASSIGN(Thunk)
};

class ExternalThunk : public Thunk {
 public:
  ExternalThunk(process::ExternalProgram* ext_prog, Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ);
  virtual Str* DisplayLine();
  virtual void Run();

  Str* argv0_path;
  runtime_asdl::cmd_value__Argv* cmd_val;
  Dict<Str*, Str*>* environ;
  process::ExternalProgram* ext_prog;

  DISALLOW_COPY_AND_ASSIGN(ExternalThunk)
};

class SubProgramThunk : public Thunk {
 public:
  SubProgramThunk(cmd_eval::CommandEvaluator* cmd_ev, syntax_asdl::command_t* node, bool inherit_errexit);
  virtual Str* DisplayLine();
  virtual void Run();

  cmd_eval::CommandEvaluator* cmd_ev;
  bool inherit_errexit;
  syntax_asdl::command_t* node;

  DISALLOW_COPY_AND_ASSIGN(SubProgramThunk)
};

class _HereDocWriterThunk : public Thunk {
 public:
  _HereDocWriterThunk(int w, Str* body_str);
  virtual Str* DisplayLine();
  virtual void Run();

  Str* body_str;
  int w;

  DISALLOW_COPY_AND_ASSIGN(_HereDocWriterThunk)
};

class Job : public gc_heap::Obj {
 public:
  Job();
  runtime_asdl::job_state_t State();
  void Send_SIGCONT(process::Waiter* waiter);
  virtual runtime_asdl::job_status_t* JobWait(process::Waiter* waiter);

  runtime_asdl::job_state_t state;

  DISALLOW_COPY_AND_ASSIGN(Job)
};

class Process : public Job {
 public:
  Process(process::Thunk* thunk, process::JobState* job_state);
  void Init_ParentPipeline(process::Pipeline* pi);
  void AddStateChange(process::ChildStateChange* s);
  void AddPipeToClose(int r, int w);
  void MaybeClosePipe();
  int Start();
  int Wait(process::Waiter* waiter);
  virtual runtime_asdl::job_status_t* JobWait(process::Waiter* waiter);
  void WhenStopped();
  void WhenDone(int pid, int status);
  int Run(process::Waiter* waiter);

  int close_r;
  int close_w;
  process::JobState* job_state;
  process::Pipeline* parent_pipeline;
  int pid;
  runtime_asdl::job_state_t state;
  List<process::ChildStateChange*>* state_changes;
  int status;
  process::Thunk* thunk;

  DISALLOW_COPY_AND_ASSIGN(Process)
};

class Pipeline : public Job {
 public:
  Pipeline();
  void Add(process::Process* p);
  void AddLast(Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* thunk);
  void Start(process::Waiter* waiter);
  int LastPid();
  List<int>* Wait(process::Waiter* waiter);
  virtual runtime_asdl::job_status_t* JobWait(process::Waiter* waiter);
  List<int>* Run(process::Waiter* waiter, process::FdState* fd_state);
  void WhenDone(int pid, int status);

  Tuple2<int, int>* last_pipe;
  Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* last_thunk;
  List<int>* pids;
  List<int>* pipe_status;
  List<process::Process*>* procs;
  runtime_asdl::job_state_t state;
  int status;

  DISALLOW_COPY_AND_ASSIGN(Pipeline)
};

class JobState : public gc_heap::Obj {
 public:
  JobState();
  void NotifyStopped(int pid);
  int GetLastStopped();
  int AddJob(process::Job* job);
  void AddChildProcess(int pid, process::Process* proc);
  process::Process* JobFromPid(int pid);
  void List();
  void ListRecent();
  bool NoneAreRunning();
  void MaybeRemove(int pid);

  Dict<int, process::Process*>* child_procs;
  int job_id;
  Dict<int, process::Job*>* jobs;
  int last_stopped_pid;

  DISALLOW_COPY_AND_ASSIGN(JobState)
};

class Waiter : public gc_heap::Obj {
 public:
  Waiter(process::JobState* job_state, optview::Exec* exec_opts);
  bool WaitForOne();

  optview::Exec* exec_opts;
  process::JobState* job_state;
  int last_status;

  DISALLOW_COPY_AND_ASSIGN(Waiter)
};
inline Str* fmt21(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt22(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt23(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt24(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Can't open ", 11);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt25(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error closing descriptor ", 25);
  gBuf.format_d(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt26(int a0, int a1, Str* a2) {
  gBuf.reset();
  gBuf.write_const("dup2(", 5);
  gBuf.format_d(a0);
  gBuf.write_const(", ", 2);
  gBuf.format_d(a1);
  gBuf.write_const(") error: ", 9);
  gBuf.format_s(a2);
  return gBuf.getvalue();
}

inline Str* fmt27(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Can't execute ", 14);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt28(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[process] ", 10);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt29(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[subprog] ", 10);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt30(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh I/O error: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt31(int a0) {
  gBuf.reset();
  gBuf.write_const("JobState MaybeRemove ", 21);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt32(int a0) {
  gBuf.reset();
  gBuf.write_const("osh: PID ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(" stopped, but osh didn't start it", 33);
  return gBuf.getvalue();
}

inline Str* fmt33(int a0) {
  gBuf.reset();
  gBuf.write_const("[PID ", 5);
  gBuf.format_d(a0);
  gBuf.write_const("] Stopped", 9);
  return gBuf.getvalue();
}


}  // declare namespace process

namespace pure {  // declare
runtime_asdl::cmd_value__Argv* MakeBuiltinArgv(List<Str*>* argv1);
void AddPure(Dict<int, vm::_Builtin*>* b, state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* procs, state::MutableOpts* mutable_opts, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt);
void AddIO(Dict<int, vm::_Builtin*>* b, state::Mem* mem, state::DirStack* dir_stack, optview::Exec* exec_opts, split::SplitContext* splitter, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt);
void AddMeta(Dict<int, vm::_Builtin*>* builtins, vm::_Executor* shell_ex, state::MutableOpts* mutable_opts, state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt);
void AddBlock(Dict<int, vm::_Builtin*>* builtins, state::Mem* mem, state::MutableOpts* mutable_opts, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt);
Dict<int, vm::_AssignBuiltin*>* InitAssignmentBuiltins(state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* procs, ui::ErrorFormatter* errfmt);
int Main(Str* lang, args::Reader* arg_r, Dict<Str*, Str*>* environ, bool login_shell, pyutil::_ResourceLoader* loader, void* line_input);

class NullExecutor : public vm::_Executor {
 public:
  NullExecutor(optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<int, vm::_Builtin*>* builtins);
  virtual int RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val);
  int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork);
  virtual int RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs);

  Dict<int, vm::_Builtin*>* builtins;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;
  Dict<Str*, runtime_asdl::Proc*>* procs;

  DISALLOW_COPY_AND_ASSIGN(NullExecutor)
};
inline Str* fmt34(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh usage error: ", 17);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt35(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("-usage", 6);
  return gBuf.getvalue();
}

inline Str* fmt36(int a0) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const("-osh.log", 8);
  return gBuf.getvalue();
}

inline Str* fmt37(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Writing logs to ", 16);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt38(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("osh: Couldn't open ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt39(int a0) {
  gBuf.reset();
  gBuf.write_const("/proc/", 6);
  gBuf.format_d(a0);
  gBuf.write_const("/status", 7);
  return gBuf.getvalue();
}

inline Str* fmt40(int a0) {
  gBuf.reset();
  gBuf.write_const("/proc/", 6);
  gBuf.format_d(a0);
  gBuf.write_const("/status", 7);
  return gBuf.getvalue();
}

inline Str* fmt41() {
  gBuf.reset();
  gBuf.write_const("Can't run a proc while errexit is disabled. Use 'catch' or wrap it in a process with $0 myproc", 94);
  return gBuf.getvalue();
}


}  // declare namespace pure

namespace state {  // declare
extern int LINE_ZERO;
extern int SetReadOnly;
extern int ClearReadOnly;
extern int SetExport;
extern int ClearExport;
extern int SetNameref;
extern int ClearNameref;

class SearchPath : public gc_heap::Obj {
 public:
  SearchPath(state::Mem* mem);
  Str* Lookup(Str* name);
  Str* Lookup(Str* name, bool exec_required);
  Str* CachedLookup(Str* name);
  void MaybeRemoveEntry(Str* name);
  void ClearCache();
  List<Str*>* CachedCommands();

  Dict<Str*, Str*>* cache;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(SearchPath)
};

class ctx_Option : public gc_heap::Obj {
 public:
  ctx_Option(state::MutableOpts* mutable_opts, List<int>* opt_nums, bool b);
  ~ctx_Option();

  state::MutableOpts* mutable_opts;
  List<int>* opt_nums;

  DISALLOW_COPY_AND_ASSIGN(ctx_Option)
};

class ctx_AssignBuiltin : public gc_heap::Obj {
 public:
  ctx_AssignBuiltin(state::MutableOpts* mutable_opts);
  ~ctx_AssignBuiltin();

  bool do_pop;
  state::MutableOpts* mutable_opts;

  DISALLOW_COPY_AND_ASSIGN(ctx_AssignBuiltin)
};

class ctx_ErrExit : public gc_heap::Obj {
 public:
  ctx_ErrExit(state::MutableOpts* mutable_opts, bool errexit_val, int span_id);
  ~ctx_ErrExit();

  bool do_pop;
  state::MutableOpts* mutable_opts;

  DISALLOW_COPY_AND_ASSIGN(ctx_ErrExit)
};

class OptHook : public gc_heap::Obj {
 public:
  OptHook();
  bool OnChange(List<bool>* opt0_array, Str* opt_name, bool b);

  DISALLOW_COPY_AND_ASSIGN(OptHook)
};
List<bool>* InitOpts();
Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> MakeOpts(state::Mem* mem, state::OptHook* opt_hook);
int _ShoptOptionNum(Str* opt_name);
int _SetOptionNum(Str* opt_name);

class MutableOpts : public gc_heap::Obj {
 public:
  MutableOpts(state::Mem* mem, List<bool>* opt0_array, List<List<bool>*>* opt_stacks, state::OptHook* opt_hook);
  void Init();
  void _InitOptionsFromEnv(Str* shellopts);
  void Push(int opt_num, bool b);
  bool Pop(int opt_num);
  void PushErrExit(bool b, int spid);
  bool PopErrExit();
  void PushDynamicScope(bool b);
  void PopDynamicScope();
  bool Get(int opt_num);
  void _Set(int opt_num, bool b);
  void set_interactive();
  void set_emacs();
  void set_xtrace(bool b);
  void _SetArrayByNum(int opt_num, bool b);
  void SetDeferredErrExit(bool b);
  void DisableErrExit();
  bool ErrExitIsDisabled();
  int ErrExitSpanId();
  void _SetOption(Str* opt_name, bool b);
  void SetOption(Str* opt_name, bool b);
  void _SetGroup(List<int>* opt_nums, bool b);
  void SetShoptOption(Str* opt_name, bool b);
  void ShowOptions(List<Str*>* opt_names);
  void ShowShoptOptions(List<Str*>* opt_names);

  List<int>* errexit_spid_stack;
  state::Mem* mem;
  List<bool>* opt0_array;
  state::OptHook* opt_hook;
  List<List<bool>*>* opt_stacks;

  DISALLOW_COPY_AND_ASSIGN(MutableOpts)
};

class _ArgFrame : public gc_heap::Obj {
 public:
  _ArgFrame(List<Str*>* argv);
  runtime_asdl::value_t* GetArgNum(int arg_num);
  List<Str*>* GetArgv();
  int GetNumArgs();
  void SetArgv(List<Str*>* argv);

  List<Str*>* argv;
  int num_shifted;

  DISALLOW_COPY_AND_ASSIGN(_ArgFrame)
};

class DirStack : public gc_heap::Obj {
 public:
  DirStack();
  void Reset();
  void Push(Str* entry);
  Str* Pop();
  List<Str*>* Iter();

  List<Str*>* stack;

  DISALLOW_COPY_AND_ASSIGN(DirStack)
};
Str* _GetWorkingDir();

class DebugFrame : public gc_heap::Obj {
 public:
  DebugFrame(Str* bash_source, Str* func_name, Str* source_name, int call_spid, int argv_i, int var_i);

  int argv_i;
  Str* bash_source;
  int call_spid;
  Str* func_name;
  Str* source_name;
  int var_i;

  DISALLOW_COPY_AND_ASSIGN(DebugFrame)
};
void _InitDefaults(state::Mem* mem);
void _InitVarsFromEnv(state::Mem* mem, Dict<Str*, Str*>* environ);
void InitMem(state::Mem* mem, Dict<Str*, Str*>* environ, Str* version_str);

class ctx_Call : public gc_heap::Obj {
 public:
  ctx_Call(state::Mem* mem, state::MutableOpts* mutable_opts, runtime_asdl::Proc* proc, List<Str*>* argv);
  ~ctx_Call();

  state::Mem* mem;
  state::MutableOpts* mutable_opts;

  DISALLOW_COPY_AND_ASSIGN(ctx_Call)
};

class ctx_Temp : public gc_heap::Obj {
 public:
  ctx_Temp(state::Mem* mem);
  ~ctx_Temp();

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(ctx_Temp)
};

class ctx_Status : public gc_heap::Obj {
 public:
  ctx_Status(state::Mem* mem);
  ~ctx_Status();

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(ctx_Status)
};

class Mem : public gc_heap::Obj {
 public:
  Mem(Str* dollar0, List<Str*>* argv, alloc::Arena* arena, List<state::DebugFrame*>* debug_stack);
  void SetPwd(Str* pwd);
  bool InGlobalNamespace();
  Tuple3<void*, void*, void*> Dump();
  void SetCurrentSpanId(int span_id);
  int CurrentSpanId();
  int LastStatus();
  List<int>* PipeStatus();
  void SetLastStatus(int x);
  void SetPipeStatus(List<int>* x);
  void SetProcessSubStatus(List<int>* x);
  void PushCall(Str* func_name, int def_spid, List<Str*>* argv);
  void PopCall();
  void PushSource(Str* source_name, List<Str*>* argv);
  void PopSource(List<Str*>* argv);
  void PushTemp();
  void PopTemp();
  Dict<Str*, runtime_asdl::cell*>* TopNamespace();
  void _PushDebugStack(Str* bash_source, Str* func_name, Str* source_name);
  void _PopDebugStack();
  int Shift(int n);
  runtime_asdl::value__Str* GetArg0();
  runtime_asdl::value_t* GetArgNum(int arg_num);
  List<Str*>* GetArgv();
  void SetArgv(List<Str*>* argv);
  runtime_asdl::value_t* GetSpecialVar(int op_id);
  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> _ResolveNameOnly(Str* name, runtime_asdl::scope_t which_scopes);
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> _ResolveNameOrRef(Str* name, runtime_asdl::scope_t which_scopes);
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> _ResolveNameOrRef(Str* name, runtime_asdl::scope_t which_scopes, bool ref_required);
  bool IsAssocArray(Str* name);
  void _CheckOilKeyword(int keyword_id, Str* name, runtime_asdl::cell* cell);
  void _DisallowNamerefCycle(Str* name, runtime_asdl::scope_t which_scopes, List<Str*>* ref_trail);
  void SetValue(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t which_scopes);
  void SetValue(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t which_scopes, int flags);
  void _BindNewArrayWithEntry(Dict<Str*, runtime_asdl::cell*>* name_map, runtime_asdl::lvalue__Indexed* lval, runtime_asdl::value__Str* val, int flags);
  void InternalSetGlobal(Str* name, runtime_asdl::value_t* new_val);
  runtime_asdl::value_t* GetValue(Str* name);
  runtime_asdl::value_t* GetValue(Str* name, runtime_asdl::scope_t which_scopes);
  runtime_asdl::cell* GetCell(Str* name);
  runtime_asdl::cell* GetCell(Str* name, runtime_asdl::scope_t which_scopes);
  bool Unset(runtime_asdl::lvalue_t* lval, bool strict);
  runtime_asdl::scope_t ScopesForReading();
  runtime_asdl::scope_t ScopesForWriting();
  bool ClearFlag(Str* name, int flag);
  Dict<Str*, Str*>* GetExported();
  List<Str*>* VarNames();
  List<Str*>* VarNamesStartingWith(Str* prefix);
  Dict<Str*, Str*>* GetAllVars();
  Dict<Str*, runtime_asdl::cell*>* GetAllCells(runtime_asdl::scope_t which_scopes);
  bool IsGlobalScope();
  void ClearMatches();
  void SetMatches(List<Str*>* matches);
  Str* GetMatch(int i);

  alloc::Arena* arena;
  List<state::_ArgFrame*>* argv_stack;
  int current_spid;
  List<state::DebugFrame*>* debug_stack;
  Str* dollar0;
  optview::Exec* exec_opts;
  int last_bg_pid;
  List<int>* last_status;
  runtime_asdl::value__Str* line_num;
  List<List<int>*>* pipe_status;
  List<List<int>*>* process_sub_status;
  Str* pwd;
  List<Str*>* regex_matches;
  int root_pid;
  List<Dict<Str*, runtime_asdl::cell*>*>* var_stack;

  DISALLOW_COPY_AND_ASSIGN(Mem)
};
void SetLocalShopt(state::Mem* mem, runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val);
void SetLocalShopt(state::Mem* mem, runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, int flags);
void SetRef(state::Mem* mem, runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val);
void SetRefString(state::Mem* mem, Str* name, Str* s);
void SetRefArray(state::Mem* mem, Str* name, List<Str*>* a);
void SetGlobalString(state::Mem* mem, Str* name, Str* s);
void SetGlobalArray(state::Mem* mem, Str* name, List<Str*>* a);
void ExportGlobalString(state::Mem* mem, Str* name, Str* s);
Str* GetString(state::Mem* mem, Str* name);
Str* MaybeString(state::Mem* mem, Str* name);
int GetInteger(state::Mem* mem, Str* name);
inline Str* fmt42(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt43(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt44(Str* a0) {
  gBuf.reset();
  gBuf.write_const("doesn't own option ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" (try 'shopt')", 14);
  return gBuf.getvalue();
}

inline Str* fmt45(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt46(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("set ", 4);
  gBuf.format_s(a0);
  gBuf.write_const("o ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt47(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt48(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("shopt -", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt49(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't determine working directory: ", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt50(Str* a0) {
  gBuf.reset();
  gBuf.write_const("setref requires a nameref (:out param), got ", 44);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt51(Str* a0) {
  gBuf.reset();
  gBuf.write_const("nameref ", 8);
  gBuf.format_r(a0);
  gBuf.write_const(" is undefined", 13);
  return gBuf.getvalue();
}

inline Str* fmt52(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("nameref ", 8);
  gBuf.format_r(a0);
  gBuf.write_const(" contains invalid variable name ", 32);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt53(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" has already been declared", 26);
  return gBuf.getvalue();
}

inline Str* fmt54(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" hasn't been declared", 21);
  return gBuf.getvalue();
}

inline Str* fmt55(Str* a0) {
  gBuf.reset();
  gBuf.write_const("nameref cycle: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt56(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly value ", 31);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt57() {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly array", 30);
  return gBuf.getvalue();
}

inline Str* fmt58() {
  gBuf.reset();
  gBuf.write_const("Can't assign to items in a string", 33);
  return gBuf.getvalue();
}

inline Str* fmt59(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Value of type ", 14);
  gBuf.format_s(a0);
  gBuf.write_const(" can't be indexed", 17);
  return gBuf.getvalue();
}

inline Str* fmt60() {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly associative array", 42);
  return gBuf.getvalue();
}

inline Str* fmt61(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't unset readonly variable ", 30);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt62(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't an array", 15);
  return gBuf.getvalue();
}

inline Str* fmt63(Str* a0) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" isn't defined", 14);
  return gBuf.getvalue();
}

inline Str* fmt64(Str* a0) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" should be a string", 19);
  return gBuf.getvalue();
}

inline Str* fmt65(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" should be a string, got ", 25);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt66(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("$", 1);
  gBuf.format_s(a0);
  gBuf.write_const(" doesn't look like an integer, got ", 35);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}


}  // declare namespace state

namespace ui {  // declare
Str* ValType(runtime_asdl::value_t* val);
Str* CommandType(syntax_asdl::command_t* cmd);
Str* PrettyId(int id_);
Str* PrettyToken(syntax_asdl::Token* tok, alloc::Arena* arena);
Str* PrettyDir(Str* dir_name, Str* home_dir);
void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f);
void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f);
void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena);
void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);

class ErrorFormatter : public gc_heap::Obj {
 public:
  ErrorFormatter(alloc::Arena* arena);
  void PushLocation(int spid);
  void PopLocation();
  int CurrentLocation();
  void PrefixPrint(Str* msg, Str* prefix, int span_id);
  void Print_(Str* msg);
  void Print_(Str* msg, int span_id);
  void StderrLine(Str* msg);
  void PrettyPrintError(error::_ErrorWithLocation* err);
  void PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix);

  alloc::Arena* arena;
  int last_spid;
  List<int>* spid_stack;

  DISALLOW_COPY_AND_ASSIGN(ErrorFormatter)
};
void PrintAst(syntax_asdl::command_t* node, arg_types::main* flag);
inline Str* fmt67(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ stdin", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt68(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ expansion of alias ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt69(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ array LValue in ", 18);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt70(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[ eval at line ", 15);
  gBuf.format_d(a0);
  gBuf.write_const(" of ", 4);
  gBuf.format_s(a1);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

inline Str* fmt71(Str* a0, int a1, Str* a2, Str* a3) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  gBuf.format_d(a1);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a2);
  gBuf.format_s(a3);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}

inline Str* fmt72(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[??? no location ???] ", 22);
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}


}  // declare namespace ui

namespace util {  // declare

class UserExit : public gc_heap::Obj {
 public:
  UserExit(int status);

  int status;

  DISALLOW_COPY_AND_ASSIGN(UserExit)
};

class _DebugFile : public gc_heap::Obj {
 public:
  _DebugFile();
  virtual void log(Str* msg, void* args);
  virtual void write(Str* s);
  virtual bool isatty();

  DISALLOW_COPY_AND_ASSIGN(_DebugFile)
};

class NullDebugFile : public _DebugFile {
 public:
  NullDebugFile();

  DISALLOW_COPY_AND_ASSIGN(NullDebugFile)
};

class DebugFile : public _DebugFile {
 public:
  DebugFile(mylib::Writer* f);
  virtual void log(Str* msg, void* args);
  virtual void write(Str* s);
  virtual bool isatty();

  mylib::Writer* f;

  DISALLOW_COPY_AND_ASSIGN(DebugFile)
};

}  // declare namespace util

namespace lexer {  // declare

class LineLexer : public gc_heap::Obj {
 public:
  LineLexer(Str* line, alloc::Arena* arena);
  void Reset(Str* line, int line_id, int line_pos);
  bool MaybeUnreadOne();
  int GetSpanIdForEof();
  int LookAhead(types_asdl::lex_mode_t lex_mode);
  Str* ByteLookAhead();
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  alloc::Arena* arena;
  bool arena_skip;
  int last_span_id;
  Str* line;
  int line_id;
  int line_pos;

  DISALLOW_COPY_AND_ASSIGN(LineLexer)
};

class Lexer : public gc_heap::Obj {
 public:
  Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader);
  void ResetInputObjects();
  bool MaybeUnreadOne();
  int LookAhead(types_asdl::lex_mode_t lex_mode);
  Str* ByteLookAhead();
  void EmitCompDummy();
  void PushHint(int old_id, int new_id);
  syntax_asdl::Token* _Read(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  bool emit_comp_dummy;
  int line_id;
  lexer::LineLexer* line_lexer;
  reader::_Reader* line_reader;
  List<Tuple2<int, int>*>* translation_stack;

  DISALLOW_COPY_AND_ASSIGN(Lexer)
};

}  // declare namespace lexer

namespace location {  // declare
int SpanForCommand(syntax_asdl::command_t* node);
int SpanForArithExpr(syntax_asdl::arith_expr_t* node);

}  // declare namespace location

namespace parse_lib {  // declare

class _BaseTrail : public gc_heap::Obj {
 public:
  _BaseTrail();
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);
  void BeginAliasExpansion();
  void EndAliasExpansion();

  bool _expanding_alias;
  List<syntax_asdl::compound_word*>* alias_words;
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::Token*>* tokens;
  List<syntax_asdl::compound_word*>* words;

  DISALLOW_COPY_AND_ASSIGN(_BaseTrail)
};

class ctx_Alias : public gc_heap::Obj {
 public:
  ctx_Alias(parse_lib::_BaseTrail* trail);
  ~ctx_Alias();

  parse_lib::_BaseTrail* trail;

  DISALLOW_COPY_AND_ASSIGN(ctx_Alias)
};

class Trail : public _BaseTrail {
 public:
  Trail();
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);

  List<syntax_asdl::compound_word*>* alias_words;
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::compound_word*>* words;

  DISALLOW_COPY_AND_ASSIGN(Trail)
};

class ParseContext : public gc_heap::Obj {
 public:
  ParseContext(alloc::Arena* arena, optview::Parse* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar);
  void Init_Trail(parse_lib::_BaseTrail* trail);
  void Init_OnePassParse(bool b);
  lexer::Lexer* _MakeLexer(reader::_Reader* line_reader);
  cmd_parse::CommandParser* MakeOshParser(reader::_Reader* line_reader);
  cmd_parse::CommandParser* MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy);
  word_parse::WordParser* MakeWordParserForHereDoc(reader::_Reader* line_reader);
  word_parse::WordParser* MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader);
  tdop::TdopParser* MakeArithParser(Str* code_str);
  cmd_parse::CommandParser* MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id);
  word_parse::WordParser* MakeWordParserForPlugin(Str* code_str);
  Tuple2<pnode::PNode*, syntax_asdl::Token*> _ParseOil(lexer::Lexer* lexer, int start_symbol);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  syntax_asdl::Token* ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> ParseOilExpr(lexer::Lexer* lexer, int start_symbol);
  Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> ParseOilForExpr(lexer::Lexer* lexer, int start_symbol);
  syntax_asdl::Token* ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out);
  syntax_asdl::Token* ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out);
  syntax_asdl::Token* ParseDataType(lexer::Lexer* lexer, syntax_asdl::command__Data* out);
  syntax_asdl::Token* ParseEnum(lexer::Lexer* lexer, syntax_asdl::command__Enum* out);
  syntax_asdl::Token* ParseClass(lexer::Lexer* lexer, syntax_asdl::command__Class* out);
  syntax_asdl::Token* ParseImport(lexer::Lexer* lexer, syntax_asdl::command__Import* out);

  Dict<Str*, Str*>* aliases;
  alloc::Arena* arena;
  expr_parse::ExprParser* e_parser;
  bool one_pass_parse;
  optview::Parse* parse_opts;
  bool parsing_expr;
  expr_to_ast::Transformer* tr;
  parse_lib::_BaseTrail* trail;

  DISALLOW_COPY_AND_ASSIGN(ParseContext)
};
inline Str* fmt75() {
  gBuf.reset();
  gBuf.write_const("ShAssignment expression can't be nested like this", 49);
  return gBuf.getvalue();
}


}  // declare namespace parse_lib

namespace reader {  // declare

class _Reader : public gc_heap::Obj {
 public:
  _Reader(alloc::Arena* arena);
  virtual Str* _GetLine();
  virtual Tuple3<int, Str*, int> GetLine();
  void Reset();
  virtual bool LastLineHint();

  alloc::Arena* arena;
  int line_num;

  DISALLOW_COPY_AND_ASSIGN(_Reader)
};

class DisallowedLineReader : public _Reader {
 public:
  DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token);
  virtual Str* _GetLine();

  syntax_asdl::Token* blame_token;

  DISALLOW_COPY_AND_ASSIGN(DisallowedLineReader)
};

class FileLineReader : public _Reader {
 public:
  FileLineReader(mylib::LineReader* f, alloc::Arena* arena);
  virtual Str* _GetLine();
  virtual bool LastLineHint();

  mylib::LineReader* f;
  bool last_line_hint;

  DISALLOW_COPY_AND_ASSIGN(FileLineReader)
};
reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena);

class VirtualLineReader : public _Reader {
 public:
  VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena);
  virtual Tuple3<int, Str*, int> GetLine();

  List<Tuple3<int, Str*, int>*>* lines;
  int num_lines;
  int pos;

  DISALLOW_COPY_AND_ASSIGN(VirtualLineReader)
};
inline Str* fmt76() {
  gBuf.reset();
  gBuf.write_const("Here docs aren't allowed in expressions", 39);
  return gBuf.getvalue();
}


}  // declare namespace reader

namespace expr_parse {  // declare
int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok);
syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex);

class ExprParser : public gc_heap::Obj {
 public:
  ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr);
  Tuple2<pnode::PNode*, syntax_asdl::Token*> Parse(lexer::Lexer* lexer, int start_symbol);

  grammar::Grammar* gr;
  parse_lib::ParseContext* parse_ctx;
  parse::Parser* push_parser;

  DISALLOW_COPY_AND_ASSIGN(ExprParser)
};
inline Str* fmt77(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" (", 2);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt78(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in expression mode", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt79(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Syntax error in expression (near ", 33);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}


}  // declare namespace expr_parse

namespace expr_to_ast {  // declare
extern Dict<Str*, Str*>* PERL_CLASSES;
extern List<Str*>* POSIX_CLASSES;
extern Str* RANGE_POINT_TOO_LONG;
extern int NT_OFFSET;
bool ISNONTERMINAL(int x);

class Transformer : public gc_heap::Obj {
 public:
  Transformer(grammar::Grammar* gr);
  syntax_asdl::expr_t* _AssocBinary(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* _Trailer(syntax_asdl::expr_t* base, pnode::PNode* p_trailer);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> _DictPair(pnode::PNode* p_node);
  syntax_asdl::expr__Dict* _Dict(pnode::PNode* p_node);
  syntax_asdl::expr_t* _Tuple(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* _TestlistComp(pnode::PNode* p_node, int id0);
  syntax_asdl::expr_t* _Atom(List<pnode::PNode*>* children);
  List<syntax_asdl::name_type*>* _NameTypeList(pnode::PNode* p_node);
  syntax_asdl::comprehension* _CompFor(pnode::PNode* p_node);
  syntax_asdl::expr_t* _CompareChain(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* _Subscript(List<pnode::PNode*>* children);
  syntax_asdl::expr_t* Expr(pnode::PNode* pnode);
  syntax_asdl::expr_t* _ArrayItem(pnode::PNode* p_node);
  List<syntax_asdl::place_expr_t*>* _PlaceList(pnode::PNode* p_node);
  syntax_asdl::command__VarDecl* MakeVarDecl(pnode::PNode* p_node);
  syntax_asdl::command__PlaceMutation* MakePlaceMutation(pnode::PNode* p_node);
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> OilForExpr(pnode::PNode* pnode);
  void _Argument(pnode::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist);
  void _Arglist(List<pnode::PNode*>* children, syntax_asdl::arg_list* arglist);
  void ArgList(pnode::PNode* pnode, syntax_asdl::arg_list* arglist);
  syntax_asdl::type_expr_t* _TypeExpr(pnode::PNode* pnode);
  List<syntax_asdl::type_expr_t*>* _TypeExprList(pnode::PNode* pnode);
  syntax_asdl::param* _ProcParam(pnode::PNode* pnode);
  syntax_asdl::proc_sig_t* _ProcParams(pnode::PNode* p_node);
  syntax_asdl::param* _FuncParam(pnode::PNode* pnode);
  Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> _FuncParams(pnode::PNode* p_node);
  syntax_asdl::proc_sig_t* Proc(pnode::PNode* pnode);
  syntax_asdl::command_t* func_item(pnode::PNode* node);
  List<syntax_asdl::command_t*>* func_items(pnode::PNode* pnode);
  syntax_asdl::command__CommandList* _Suite(pnode::PNode* pnode);
  void TeaFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out);
  void NamedFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out);
  List<syntax_asdl::param*>* _DataParams(pnode::PNode* p_node);
  void Data(pnode::PNode* pnode, syntax_asdl::command__Data* out);
  syntax_asdl::variant_type_t* _VariantType(pnode::PNode* pnode);
  syntax_asdl::variant* _Variant(pnode::PNode* pnode);
  void Enum(pnode::PNode* pnode, syntax_asdl::command__Enum* out);
  void Class(pnode::PNode* pnode, syntax_asdl::command__Class* out);
  void Import(pnode::PNode* pnode, syntax_asdl::command__Import* out);
  Str* _RangeChar(pnode::PNode* p_node);
  syntax_asdl::class_literal_term_t* _NonRangeChars(pnode::PNode* p_node);
  syntax_asdl::class_literal_term_t* _ClassLiteralTerm(pnode::PNode* p_node);
  List<syntax_asdl::class_literal_term_t*>* _ClassLiteral(pnode::PNode* p_node);
  syntax_asdl::re_t* _NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::class_literal_term_t* _NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::re_t* _ReAtom(pnode::PNode* p_atom);
  syntax_asdl::re_repeat_t* _RepeatOp(pnode::PNode* p_repeat);
  syntax_asdl::re_t* _Regex(pnode::PNode* p_node);

  Dict<int, Str*>* number2symbol;

  DISALLOW_COPY_AND_ASSIGN(Transformer)
};
inline Str* fmt80() {
  gBuf.reset();
  gBuf.write_const("Write singleton tuples with tup(), not a trailing comma", 55);
  return gBuf.getvalue();
}

inline Str* fmt81() {
  gBuf.reset();
  gBuf.write_const("Can't assign to this expression", 31);
  return gBuf.getvalue();
}

inline Str* fmt82() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

inline Str* fmt83(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

inline Str* fmt84() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

inline Str* fmt85(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

inline Str* fmt86(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" in regex", 9);
  return gBuf.getvalue();
}


}  // declare namespace expr_to_ast

namespace regex_translate {  // declare
extern Dict<Str*, Str*>* PERL_CLASS;
void _ClassLiteralToPosixEre(syntax_asdl::class_literal_term_t* term, List<Str*>* parts);
void AsPosixEre(syntax_asdl::re_t* node, List<Str*>* parts);
inline Str* fmt87(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("-", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt88(int a0) {
  gBuf.reset();
  gBuf.write_const("ERE can't express code point ", 29);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt89() {
  gBuf.reset();
  gBuf.write_const("Perl classes can't be negated in ERE", 36);
  return gBuf.getvalue();
}

inline Str* fmt90(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt91() {
  gBuf.reset();
  gBuf.write_const("POSIX classes can't be negated in ERE", 37);
  return gBuf.getvalue();
}

inline Str* fmt92(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[:", 2);
  gBuf.format_s(a0);
  gBuf.write_const(":]", 2);
  return gBuf.getvalue();
}

inline Str* fmt93() {
  gBuf.reset();
  gBuf.write_const("POSIX EREs don't have groups without capture, so this node needs () around it.", 78);
  return gBuf.getvalue();
}

inline Str* fmt94(Str* a0) {
  gBuf.reset();
  gBuf.write_const("{", 1);
  gBuf.format_s(a0);
  gBuf.write_const("}", 1);
  return gBuf.getvalue();
}

inline Str* fmt95(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("{", 1);
  gBuf.format_s(a0);
  gBuf.write_const(",", 1);
  gBuf.format_s(a1);
  gBuf.write_const("}", 1);
  return gBuf.getvalue();
}

inline Str* fmt96(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[^", 2);
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

inline Str* fmt97(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[", 1);
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

inline Str* fmt98(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[^[:", 4);
  gBuf.format_s(a0);
  gBuf.write_const(":]]", 3);
  return gBuf.getvalue();
}

inline Str* fmt99(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[[:", 3);
  gBuf.format_s(a0);
  gBuf.write_const(":]]", 3);
  return gBuf.getvalue();
}


}  // declare namespace regex_translate

namespace arith_parse {  // declare
syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp);
syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp);
inline Str* fmt100() {
  gBuf.reset();
  gBuf.write_const("The [ operator doesn't apply to this expression", 47);
  return gBuf.getvalue();
}


}  // declare namespace arith_parse

namespace bool_parse {  // declare

class BoolParser : public gc_heap::Obj {
 public:
  BoolParser(word_parse::WordEmitter* w_parser);
  void _NextOne(types_asdl::lex_mode_t lex_mode);
  void _Next();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _LookAhead();
  syntax_asdl::bool_expr_t* Parse();
  bool _TestAtEnd();
  syntax_asdl::bool_expr_t* ParseForBuiltin();
  syntax_asdl::bool_expr_t* ParseExpr();
  syntax_asdl::bool_expr_t* ParseTerm();
  syntax_asdl::bool_expr_t* ParseNegatedFactor();
  syntax_asdl::bool_expr_t* ParseFactor();

  int bool_id;
  id_kind_asdl::Kind_t bool_kind;
  syntax_asdl::word_t* cur_word;
  word_parse::WordEmitter* w_parser;
  List<syntax_asdl::word_t*>* words;

  DISALLOW_COPY_AND_ASSIGN(BoolParser)
};
inline Str* fmt101() {
  gBuf.reset();
  gBuf.write_const("Expected ]]", 11);
  return gBuf.getvalue();
}

inline Str* fmt102(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected trailing word ", 25);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt103() {
  gBuf.reset();
  gBuf.write_const("Invalid argument to unary operator", 34);
  return gBuf.getvalue();
}

inline Str* fmt104(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ), got ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt105(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in boolean expression (", 40);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}


}  // declare namespace bool_parse

namespace braces {  // declare
extern int NO_STEP;

class _NotARange : public gc_heap::Obj {
 public:
  _NotARange(Str* s);

  DISALLOW_COPY_AND_ASSIGN(_NotARange)
};

class _RangeParser : public gc_heap::Obj {
 public:
  _RangeParser(match::SimpleLexer* lexer, int span_id);
  void _Next();
  Str* _Eat(int token_type);
  int _ParseStep();
  syntax_asdl::word_part__BracedRange* _ParseRange(int range_kind);
  syntax_asdl::word_part__BracedRange* Parse();

  match::SimpleLexer* lexer;
  int span_id;
  int token_type;
  Str* token_val;

  DISALLOW_COPY_AND_ASSIGN(_RangeParser)
};
syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok);

class _StackFrame : public gc_heap::Obj {
 public:
  _StackFrame(List<syntax_asdl::word_part_t*>* cur_parts);

  syntax_asdl::word_part__BracedTuple* alt_part;
  List<syntax_asdl::word_part_t*>* cur_parts;
  bool saw_comma;

  DISALLOW_COPY_AND_ASSIGN(_StackFrame)
};
syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w);
List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words);
int _LeadingZeros(Str* s);
Str* _IntToString(int i, int width);
List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part);
List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes);
List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts);
List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words);
inline Str* fmt106(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Expected ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt107() {
  gBuf.reset();
  gBuf.write_const("Step can't be 0", 15);
  return gBuf.getvalue();
}

inline Str* fmt108(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending integer range", 28);
  return gBuf.getvalue();
}

inline Str* fmt109(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending integer range", 29);
  return gBuf.getvalue();
}

inline Str* fmt110(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending character range", 30);
  return gBuf.getvalue();
}

inline Str* fmt111(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending character range", 31);
  return gBuf.getvalue();
}

inline Str* fmt112() {
  gBuf.reset();
  gBuf.write_const("Mismatched cases in character range", 35);
  return gBuf.getvalue();
}


}  // declare namespace braces

namespace builtin_assign {  // declare
int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags);
int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags, int builtin);

class Export : public vm::_AssignBuiltin {
 public:
  Export(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Export)
};
runtime_asdl::value_t* _ReconcileTypes(runtime_asdl::value_t* rval, bool flag_a, bool flag_A, int span_id);

class Readonly : public vm::_AssignBuiltin {
 public:
  Readonly(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Readonly)
};

class NewVar : public vm::_AssignBuiltin {
 public:
  NewVar(state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* funcs, ui::ErrorFormatter* errfmt);
  int _PrintFuncs(List<Str*>* names);
  virtual int Run(runtime_asdl::cmd_value__Assign* cmd_val);

  ui::ErrorFormatter* errfmt;
  Dict<Str*, runtime_asdl::Proc*>* funcs;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(NewVar)
};

class Unset : public vm::_Builtin {
 public:
  Unset(state::Mem* mem, optview::Exec* exec_opts, Dict<Str*, runtime_asdl::Proc*>* funcs, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt);
  bool _UnsetVar(Str* arg, int spid, bool proc_fallback);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  sh_expr_eval::ArithEvaluator* arith_ev;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  Dict<Str*, runtime_asdl::Proc*>* funcs;
  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;

  DISALLOW_COPY_AND_ASSIGN(Unset)
};

class Shift : public vm::_Builtin {
 public:
  Shift(state::Mem* mem);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Shift)
};
inline Str* fmt113(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt114() {
  gBuf.reset();
  gBuf.write_const("doesn't accept RHS with -n", 26);
  return gBuf.getvalue();
}

inline Str* fmt115() {
  gBuf.reset();
  gBuf.write_const("Got -a but RHS isn't an array", 29);
  return gBuf.getvalue();
}

inline Str* fmt116() {
  gBuf.reset();
  gBuf.write_const("Got -A but RHS isn't an associative array", 41);
  return gBuf.getvalue();
}

inline Str* fmt117(Str* a0) {
  gBuf.reset();
  gBuf.write_const("declare -f ", 11);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt118() {
  gBuf.reset();
  gBuf.write_const("Invalid unset expression", 24);
  return gBuf.getvalue();
}

inline Str* fmt119() {
  gBuf.reset();
  gBuf.write_const("expected a variable name.  shopt -s eval_unsafe_arith allows expressions", 72);
  return gBuf.getvalue();
}

inline Str* fmt120(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid shift argument ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace builtin_assign

namespace builtin_meta {  // declare

class Eval : public vm::_Builtin {
 public:
  Eval(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, cmd_eval::CommandEvaluator* cmd_ev);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  alloc::Arena* arena;
  cmd_eval::CommandEvaluator* cmd_ev;
  optview::Exec* exec_opts;
  parse_lib::ParseContext* parse_ctx;

  DISALLOW_COPY_AND_ASSIGN(Eval)
};

class Source : public vm::_Builtin {
 public:
  Source(parse_lib::ParseContext* parse_ctx, state::SearchPath* search_path, cmd_eval::CommandEvaluator* cmd_ev, process::FdState* fd_state, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  alloc::Arena* arena;
  cmd_eval::CommandEvaluator* cmd_ev;
  ui::ErrorFormatter* errfmt;
  process::FdState* fd_state;
  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;
  state::SearchPath* search_path;

  DISALLOW_COPY_AND_ASSIGN(Source)
};

class Command : public vm::_Builtin {
 public:
  Command(vm::_Executor* shell_ex, Dict<Str*, runtime_asdl::Proc*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  Dict<Str*, runtime_asdl::Proc*>* funcs;
  state::SearchPath* search_path;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(Command)
};

class Builtin : public vm::_Builtin {
 public:
  Builtin(vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(Builtin)
};
int _AdjustStatus(Str* status_ok, int status);

class Run_ : public vm::_Builtin {
 public:
  Run_(state::MutableOpts* mutable_opts, state::Mem* mem, vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(Run_)
};
List<Tuple2<Str*, Str*>*>* _ResolveNames(List<Str*>* names, Dict<Str*, runtime_asdl::Proc*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path);

class Type : public vm::_Builtin {
 public:
  Type(Dict<Str*, runtime_asdl::Proc*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  ui::ErrorFormatter* errfmt;
  Dict<Str*, runtime_asdl::Proc*>* funcs;
  state::SearchPath* search_path;

  DISALLOW_COPY_AND_ASSIGN(Type)
};
inline Str* fmt121(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("source ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" failed: ", 9);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt122(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a shell builtin", 22);
  return gBuf.getvalue();
}

inline Str* fmt123() {
  gBuf.reset();
  gBuf.write_const("'Run' expected a command to run", 31);
  return gBuf.getvalue();
}

inline Str* fmt124(int a0) {
  gBuf.reset();
  gBuf.write_const("fatal: status ", 14);
  gBuf.format_d(a0);
  gBuf.write_const(" when --allow-status-01", 23);
  return gBuf.getvalue();
}

inline Str* fmt125(Str* a0) {
  gBuf.reset();
  gBuf.write_const("type: ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" not found", 10);
  return gBuf.getvalue();
}

inline Str* fmt126(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" is a ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace builtin_meta

namespace builtin_misc {  // declare

class Times : public vm::_Builtin {
 public:
  Times();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(Times)
};
Tuple2<bool, bool> _AppendParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans, int max_results, bool join_next, List<mylib::BufWriter*>* parts);
Tuple2<Str*, bool> ReadLineFromStdin(Str* delim_char);
Str* _ReadLine();
Str* _ReadAll();

class Read : public vm::_Builtin {
 public:
  Read(split::SplitContext* splitter, state::Mem* mem, parse_lib::ParseContext* parse_ctx);
  int _Line(arg_types::read* arg, Str* var_name);
  int _All(Str* var_name);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);
  Str* _ReadN(int stdin_fd, int n);
  int _Read(arg_types::read* arg, List<Str*>* names);

  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;
  split::SplitContext* splitter;
  mylib::LineReader* stdin;

  DISALLOW_COPY_AND_ASSIGN(Read)
};

class MapFile : public vm::_Builtin {
 public:
  MapFile(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  mylib::LineReader* f;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(MapFile)
};

class Cd : public vm::_Builtin {
 public:
  Cd(state::Mem* mem, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  cmd_eval::CommandEvaluator* cmd_ev;
  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Cd)
};
extern int WITH_LINE_NUMBERS;
extern int WITHOUT_LINE_NUMBERS;
extern int SINGLE_LINE;
void _PrintDirStack(state::DirStack* dir_stack, int style, Str* home_dir);

class Pushd : public vm::_Builtin {
 public:
  Pushd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Pushd)
};
bool _PopDirStack(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);

class Popd : public vm::_Builtin {
 public:
  Popd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Popd)
};

class Dirs : public vm::_Builtin {
 public:
  Dirs(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::DirStack* dir_stack;
  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Dirs)
};

class Pwd : public vm::_Builtin {
 public:
  Pwd(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Pwd)
};

class Help : public vm::_Builtin {
 public:
  Help(pyutil::_ResourceLoader* loader, ui::ErrorFormatter* errfmt);
  List<Str*>* _Groups();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  pyutil::_ResourceLoader* loader;

  DISALLOW_COPY_AND_ASSIGN(Help)
};

class Cat : public vm::_Builtin {
 public:
  Cat();
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  DISALLOW_COPY_AND_ASSIGN(Cat)
};
inline Str* fmt127(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("cd ", 3);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt128(int a0, Str* a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const("  ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt129(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("pushd: ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt130(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("popd: ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt131() {
  gBuf.reset();
  gBuf.write_const("got extra argument", 18);
  return gBuf.getvalue();
}

inline Str* fmt132(Str* a0) {
  gBuf.reset();
  gBuf.write_const("_devbuild/help/", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt133(Str* a0) {
  gBuf.reset();
  gBuf.write_const("no help topics match ", 21);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace builtin_misc

namespace builtin_printf {  // declare

class _FormatStringParser : public gc_heap::Obj {
 public:
  _FormatStringParser(lexer::Lexer* lexer);
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::printf_part_t* _ParseFormatStr();
  List<syntax_asdl::printf_part_t*>* Parse();

  syntax_asdl::Token* cur_token;
  lexer::Lexer* lexer;
  id_kind_asdl::Kind_t token_kind;
  int token_type;

  DISALLOW_COPY_AND_ASSIGN(_FormatStringParser)
};

class Printf : public vm::_Builtin {
 public:
  Printf(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  sh_expr_eval::ArithEvaluator* arith_ev;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  Dict<Str*, List<syntax_asdl::printf_part_t*>*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;
  double shell_start_time;

  DISALLOW_COPY_AND_ASSIGN(Printf)
};
inline Str* fmt134(Str* a0) {
  gBuf.reset();
  gBuf.write_const("osh printf doesn't support the ", 31);
  gBuf.format_r(a0);
  gBuf.write_const(" flag", 5);
  return gBuf.getvalue();
}

inline Str* fmt135() {
  gBuf.reset();
  gBuf.write_const("osh printf doesn't support floating point", 41);
  return gBuf.getvalue();
}

inline Str* fmt136() {
  gBuf.reset();
  gBuf.write_const("osh printf doesn't support single characters (bytes)", 52);
  return gBuf.getvalue();
}

inline Str* fmt137() {
  gBuf.reset();
  gBuf.write_const("Invalid printf format character", 31);
  return gBuf.getvalue();
}

inline Str* fmt138() {
  gBuf.reset();
  gBuf.write_const("Expected a printf format character", 34);
  return gBuf.getvalue();
}

inline Str* fmt139(Str* a0) {
  gBuf.reset();
  gBuf.write_const("printf got invalid width ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt140(Str* a0) {
  gBuf.reset();
  gBuf.write_const("printf got invalid precision ", 29);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt141(Str* a0) {
  gBuf.reset();
  gBuf.write_const("printf expected an integer, got ", 32);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt142(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Can't format negative number ", 29);
  gBuf.format_d(a0);
  gBuf.write_const(" with ", 6);
  gBuf.write_const("%", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt143() {
  gBuf.reset();
  gBuf.write_const("Invalid -v expression", 21);
  return gBuf.getvalue();
}

inline Str* fmt144() {
  gBuf.reset();
  gBuf.write_const("-v expected a variable name.  shopt -s eval_unsafe_arith allows expressions", 75);
  return gBuf.getvalue();
}


}  // declare namespace builtin_printf

namespace builtin_pure {  // declare

class Boolean : public vm::_Builtin {
 public:
  Boolean(int status);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  int status;

  DISALLOW_COPY_AND_ASSIGN(Boolean)
};

class Alias : public vm::_Builtin {
 public:
  Alias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  ui::ErrorFormatter* errfmt;

  DISALLOW_COPY_AND_ASSIGN(Alias)
};

class UnAlias : public vm::_Builtin {
 public:
  UnAlias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  Dict<Str*, Str*>* aliases;
  ui::ErrorFormatter* errfmt;

  DISALLOW_COPY_AND_ASSIGN(UnAlias)
};
void SetShellOpts(state::MutableOpts* exec_opts, List<Tuple2<Str*, bool>*>* opt_changes, List<Tuple2<Str*, bool>*>* shopt_changes);

class Set : public vm::_Builtin {
 public:
  Set(state::MutableOpts* exec_opts, state::Mem* mem);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::MutableOpts* exec_opts;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(Set)
};

class Shopt : public vm::_Builtin {
 public:
  Shopt(state::MutableOpts* mutable_opts, cmd_eval::CommandEvaluator* cmd_ev);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  cmd_eval::CommandEvaluator* cmd_ev;
  state::MutableOpts* mutable_opts;

  DISALLOW_COPY_AND_ASSIGN(Shopt)
};

class Hash : public vm::_Builtin {
 public:
  Hash(state::SearchPath* search_path);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  state::SearchPath* search_path;

  DISALLOW_COPY_AND_ASSIGN(Hash)
};
Dict<Str*, bool>* _ParseOptSpec(Str* spec_str);

class GetOptsState : public gc_heap::Obj {
 public:
  GetOptsState(state::Mem* mem, ui::ErrorFormatter* errfmt);
  int _OptInd();
  Str* GetArg(List<Str*>* argv);
  void IncIndex();
  void SetArg(Str* optarg);
  void Fail();

  int _optind;
  ui::ErrorFormatter* errfmt;
  int flag_pos;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(GetOptsState)
};
Tuple2<int, Str*> _GetOpts(Dict<Str*, bool>* spec, List<Str*>* argv, builtin_pure::GetOptsState* my_state, ui::ErrorFormatter* errfmt);

class GetOpts : public vm::_Builtin {
 public:
  GetOpts(state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  state::Mem* mem;
  builtin_pure::GetOptsState* my_state;
  Dict<Str*, Dict<Str*, bool>*>* spec_cache;

  DISALLOW_COPY_AND_ASSIGN(GetOpts)
};

class Echo : public vm::_Builtin {
 public:
  Echo(optview::Exec* exec_opts);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  optview::Exec* exec_opts;
  mylib::Writer* f;

  DISALLOW_COPY_AND_ASSIGN(Echo)
};
inline Str* fmt145(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("alias ", 6);
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt146(Str* a0) {
  gBuf.reset();
  gBuf.write_const("No alias named ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt147(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("alias ", 6);
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt148(Str* a0) {
  gBuf.reset();
  gBuf.write_const("No alias named ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt149(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("=", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt150(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt151(Str* a0) {
  gBuf.reset();
  gBuf.write_const("hash: ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" not found", 10);
  return gBuf.getvalue();
}

inline Str* fmt152(Str* a0) {
  gBuf.reset();
  gBuf.write_const("getopts: option ", 16);
  gBuf.format_r(a0);
  gBuf.write_const(" requires an argument.", 22);
  return gBuf.getvalue();
}

inline Str* fmt153(Str* a0) {
  gBuf.reset();
  gBuf.write_const("(getopts argv: ", 15);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt154(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid variable name ", 26);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace builtin_pure

namespace cmd_eval {  // declare
extern int IsMainProgram;
extern int IsEvalSource;
extern int Optimize;
extern Dict<Str*, Str*>* OIL_TYPE_NAMES;

class Deps : public gc_heap::Obj {
 public:
  Deps();

  util::_DebugFile* debug_f;
  dev::CrashDumper* dumper;
  state::MutableOpts* mutable_opts;
  List<syntax_asdl::command_t*>* trap_nodes;
  Dict<Str*, builtin_process::_TrapHandler*>* traps;

  DISALLOW_COPY_AND_ASSIGN(Deps)
};
int _PackFlags(int keyword_id);
int _PackFlags(int keyword_id, int flags);
bool _HasManyStatuses(syntax_asdl::command_t* node);

class CommandEvaluator : public gc_heap::Obj {
 public:
  CommandEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<int, vm::_AssignBuiltin*>* assign_builtins, alloc::Arena* arena, cmd_eval::Deps* cmd_deps);
  void CheckCircularDeps();
  int _RunAssignBuiltin(runtime_asdl::cmd_value__Assign* cmd_val);
  int _SpanIdForShAssignment(syntax_asdl::command__ShAssignment* node);
  void _CheckStatus(int status, syntax_asdl::command_t* node, int blame_spid);
  runtime_asdl::redirect* _EvalRedirect(syntax_asdl::redir* r);
  List<runtime_asdl::redirect*>* _EvalRedirects(syntax_asdl::command_t* node);
  int _RunSimpleCommand(runtime_asdl::cmd_value_t* cmd_val, bool do_fork);
  void _EvalTempEnv(List<syntax_asdl::env_pair*>* more_env, int flags);
  void _StrictErrExit(syntax_asdl::command_t* node);
  void _StrictErrExitList(List<syntax_asdl::command_t*>* node_list);
  bool _EvalCondition(syntax_asdl::condition_t* cond, int spid);
  Tuple2<int, bool> _Dispatch(syntax_asdl::command_t* node, runtime_asdl::CompoundStatus* pipeline_st);
  int _Execute(syntax_asdl::command_t* node);
  int _ExecuteList(List<syntax_asdl::command_t*>* children);
  int LastStatus();
  void _NoForkLast(syntax_asdl::command_t* node);
  syntax_asdl::command_t* _RemoveSubshells(syntax_asdl::command_t* node);
  Tuple2<bool, bool> ExecuteAndCatch(syntax_asdl::command_t* node);
  Tuple2<bool, bool> ExecuteAndCatch(syntax_asdl::command_t* node, int cmd_flags);
  void MaybeRunExitTrap(List<int>* mut_status);
  int RunProc(runtime_asdl::Proc* proc, List<Str*>* argv);
  Dict<Str*, runtime_asdl::cell*>* EvalBlock(syntax_asdl::command_t* block);
  int RunFuncForCompletion(runtime_asdl::Proc* proc, List<Str*>* argv);

  alloc::Arena* arena;
  sh_expr_eval::ArithEvaluator* arith_ev;
  Dict<int, vm::_AssignBuiltin*>* assign_builtins;
  sh_expr_eval::BoolEvaluator* bool_ev;
  bool check_command_sub_status;
  util::_DebugFile* debug_f;
  dev::CrashDumper* dumper;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  expr_eval::OilEvaluator* expr_ev;
  int loop_level;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  Dict<Str*, runtime_asdl::Proc*>* procs;
  vm::_Executor* shell_ex;
  dev::Tracer* tracer;
  List<syntax_asdl::command_t*>* trap_nodes;
  Dict<Str*, builtin_process::_TrapHandler*>* traps;
  word_eval::AbstractWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(CommandEvaluator)
};
inline Str* fmt155(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Assignment builtin ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" not configured", 15);
  return gBuf.getvalue();
}

inline Str* fmt156(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" ", 1);
  return gBuf.getvalue();
}

inline Str* fmt157(int a0, Str* a1, int a2) {
  gBuf.reset();
  gBuf.write_const("Exiting with status ", 20);
  gBuf.format_d(a0);
  gBuf.write_const(" (", 2);
  gBuf.format_s(a1);
  gBuf.write_const("PID ", 4);
  gBuf.format_d(a2);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt158(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid descriptor ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(".  Expected D, -, or D- where D is an integer", 45);
  return gBuf.getvalue();
}

inline Str* fmt159(Str* a0) {
  gBuf.reset();
  gBuf.write_const("strict_errexit only allows simple commands (got ", 48);
  gBuf.format_s(a0);
  gBuf.write_const("). Hint: use 'run'.", 19);
  return gBuf.getvalue();
}

inline Str* fmt160() {
  gBuf.reset();
  gBuf.write_const("strict_errexit only allows a single command.  Hint: use \"run\".", 62);
  return gBuf.getvalue();
}

inline Str* fmt161(Str* a0) {
  gBuf.reset();
  gBuf.write_const("strict_errexit only allows simple commands (got ", 48);
  gBuf.format_s(a0);
  gBuf.write_const("). Hint: use 'run'.", 19);
  return gBuf.getvalue();
}

inline Str* fmt162() {
  gBuf.reset();
  gBuf.write_const("ShAssignment builtins don't accept blocks", 41);
  return gBuf.getvalue();
}

inline Str* fmt163() {
  gBuf.reset();
  gBuf.write_const("|& isn't supported", 18);
  return gBuf.getvalue();
}

inline Str* fmt164(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" expected a number, got ", 24);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

inline Str* fmt165(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid argument ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(".  Expected a name starting with :", 34);
  return gBuf.getvalue();
}

inline Str* fmt166(Str* a0) {
  gBuf.reset();
  gBuf.write_const("No value provided for param ", 28);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt167(Str* a0, int a1, int a2) {
  gBuf.reset();
  gBuf.write_const("proc ", 5);
  gBuf.format_r(a0);
  gBuf.write_const(" expected ", 10);
  gBuf.format_d(a1);
  gBuf.write_const(" arguments, but got ", 20);
  gBuf.format_d(a2);
  return gBuf.getvalue();
}

inline Str* fmt168(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected ", 11);
  gBuf.format_r(a0);
  gBuf.write_const(" (in function call)", 19);
  return gBuf.getvalue();
}


}  // declare namespace cmd_eval

namespace cmd_parse {  // declare
int _KeywordSpid(syntax_asdl::word_t* w);
syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w);
Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir* h, Str* delimiter);
List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena);
void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir* r, reader::_Reader* line_reader, alloc::Arena* arena);
syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena);
void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env);
Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words);
syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir*>* redirects, syntax_asdl::BraceGroup* block);
extern List<int>* SECONDARY_KEYWORDS;

class CommandParser : public gc_heap::Obj {
 public:
  CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init_EofId(int eof_id);
  void Init_AliasesInFlight(List<Tuple2<Str*, int>*>* aliases_in_flight);
  void Reset();
  void ResetInputObjects();
  void _Next();
  void _Next(types_asdl::lex_mode_t lex_mode);
  void _Peek();
  void _Eat(int c_id);
  void _Eat2(int c_id, Str* msg);
  void _NewlineOk();
  bool _AtSecondaryKeyword();
  syntax_asdl::redir* ParseRedirect();
  List<syntax_asdl::redir*>* _ParseRedirectList();
  Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*> _ScanSimpleCommand();
  syntax_asdl::command_t* _MaybeExpandAliases(List<syntax_asdl::compound_word*>* words);
  syntax_asdl::command_t* ParseSimpleCommand();
  syntax_asdl::BraceGroup* ParseBraceGroup();
  syntax_asdl::command__DoGroup* ParseDoGroup();
  Tuple2<List<syntax_asdl::compound_word*>*, int> ParseForWords();
  syntax_asdl::command__ForExpr* _ParseForExprLoop();
  syntax_asdl::command__ForEach* _ParseForEachLoop(int for_spid);
  syntax_asdl::command_t* ParseFor();
  syntax_asdl::command__WhileUntil* ParseWhileUntil(syntax_asdl::Token* keyword);
  syntax_asdl::case_arm* ParseCaseItem();
  void ParseCaseList(List<syntax_asdl::case_arm*>* arms);
  syntax_asdl::command__Case* ParseCase();
  void _ParseOilElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* _ParseOilIf(int if_spid, syntax_asdl::condition_t* cond);
  void _ParseElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* ParseIf();
  syntax_asdl::command_t* ParseTime();
  syntax_asdl::command_t* ParseCompoundCommand();
  syntax_asdl::command__ShFunction* ParseFunctionDef();
  syntax_asdl::command__ShFunction* ParseKshFunctionDef();
  syntax_asdl::command__Proc* ParseOilProc();
  syntax_asdl::command_t* ParseCoproc();
  syntax_asdl::command__Subshell* ParseSubshell();
  syntax_asdl::command__DBracket* ParseDBracket();
  syntax_asdl::command__DParen* ParseDParen();
  syntax_asdl::command_t* ParseCommand();
  syntax_asdl::command_t* ParsePipeline();
  syntax_asdl::command_t* ParseAndOr();
  syntax_asdl::command_t* _ParseCommandLine();
  syntax_asdl::command__CommandList* _ParseCommandTerm();
  syntax_asdl::command__CommandList* _ParseCommandList();
  syntax_asdl::command_t* ParseLogicalLine();
  syntax_asdl::parse_result_t* ParseInteractiveLine();
  syntax_asdl::command_t* ParseCommandSub();
  void CheckForPendingHereDocs();

  Dict<Str*, Str*>* aliases;
  List<Tuple2<Str*, int>*>* aliases_in_flight;
  bool allow_block;
  alloc::Arena* arena;
  int c_id;
  id_kind_asdl::Kind_t c_kind;
  syntax_asdl::word_t* cur_word;
  int eof_id;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  optview::Parse* parse_opts;
  List<syntax_asdl::redir*>* pending_here_docs;
  word_parse::WordParser* w_parser;

  DISALLOW_COPY_AND_ASSIGN(CommandParser)
};
inline Str* fmt169() {
  gBuf.reset();
  gBuf.write_const("Couldn't find terminator for here doc that starts here", 54);
  return gBuf.getvalue();
}

inline Str* fmt170() {
  gBuf.reset();
  gBuf.write_const("Invalid here doc delimiter", 26);
  return gBuf.getvalue();
}

inline Str* fmt171(int a0, int a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt172() {
  gBuf.reset();
  gBuf.write_const("Environment binding shouldn't look like an array assignment", 59);
  return gBuf.getvalue();
}

inline Str* fmt173() {
  gBuf.reset();
  gBuf.write_const("Expected = in environment binding, got +=", 41);
  return gBuf.getvalue();
}

inline Str* fmt174() {
  gBuf.reset();
  gBuf.write_const("Environment bindings can't contain array literals", 49);
  return gBuf.getvalue();
}

inline Str* fmt175(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Expected word type ", 19);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt176() {
  gBuf.reset();
  gBuf.write_const("Invalid token after redirect operator", 37);
  return gBuf.getvalue();
}

inline Str* fmt177() {
  gBuf.reset();
  gBuf.write_const("TODO: Parse Redirect", 20);
  return gBuf.getvalue();
}

inline Str* fmt178(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("line IDs ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt179() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

inline Str* fmt180() {
  gBuf.reset();
  gBuf.write_const("=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression", 108);
  return gBuf.getvalue();
}

inline Str* fmt181() {
  gBuf.reset();
  gBuf.write_const("name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =", 101);
  return gBuf.getvalue();
}

inline Str* fmt182() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

inline Str* fmt183() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

inline Str* fmt184() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have redirects", 37);
  return gBuf.getvalue();
}

inline Str* fmt185() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have environment bindings", 48);
  return gBuf.getvalue();
}

inline Str* fmt186(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected argument to ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt187() {
  gBuf.reset();
  gBuf.write_const("Invalid word in for loop", 24);
  return gBuf.getvalue();
}

inline Str* fmt188() {
  gBuf.reset();
  gBuf.write_const("Invalid word after for expression", 33);
  return gBuf.getvalue();
}

inline Str* fmt189() {
  gBuf.reset();
  gBuf.write_const("Loop variable name should be a constant", 39);
  return gBuf.getvalue();
}

inline Str* fmt190() {
  gBuf.reset();
  gBuf.write_const("Invalid loop variable name", 26);
  return gBuf.getvalue();
}

inline Str* fmt191() {
  gBuf.reset();
  gBuf.write_const("Unexpected word after for loop variable", 39);
  return gBuf.getvalue();
}

inline Str* fmt192() {
  gBuf.reset();
  gBuf.write_const("Expected ;; or esac", 19);
  return gBuf.getvalue();
}

inline Str* fmt193() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing compound command", 46);
  return gBuf.getvalue();
}

inline Str* fmt194() {
  gBuf.reset();
  gBuf.write_const("Invalid function name", 21);
  return gBuf.getvalue();
}

inline Str* fmt195() {
  gBuf.reset();
  gBuf.write_const("Invalid KSH-style function name", 31);
  return gBuf.getvalue();
}

inline Str* fmt196() {
  gBuf.reset();
  gBuf.write_const("Unexpected word when parsing command", 36);
  return gBuf.getvalue();
}

inline Str* fmt197() {
  gBuf.reset();
  gBuf.write_const("Unexpected right brace", 22);
  return gBuf.getvalue();
}

inline Str* fmt198() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while parsing command", 36);
  return gBuf.getvalue();
}

inline Str* fmt199() {
  gBuf.reset();
  gBuf.write_const("Invalid word while parsing command", 34);
  return gBuf.getvalue();
}

inline Str* fmt200() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing command line", 42);
  return gBuf.getvalue();
}

inline Str* fmt201() {
  gBuf.reset();
  gBuf.write_const("Unterminated here doc began here", 32);
  return gBuf.getvalue();
}


}  // declare namespace cmd_parse

namespace glob_ {  // declare
bool LooksLikeGlob(Str* s);
bool LooksLikeStaticGlob(syntax_asdl::compound_word* w);
extern Str* GLOB_META_CHARS;
Str* GlobEscape(Str* s);
Str* EreCharClassEscape(Str* s);
extern Str* ERE_META_CHARS;
Str* ExtendedRegexEscape(Str* s);
Str* GlobUnescape(Str* s);

class _GlobParser : public gc_heap::Obj {
 public:
  _GlobParser(match::SimpleLexer* lexer);
  void _Next();
  List<syntax_asdl::glob_part_t*>* _ParseCharClass();
  Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> Parse();

  match::SimpleLexer* lexer;
  int token_type;
  Str* token_val;
  List<Str*>* warnings;

  DISALLOW_COPY_AND_ASSIGN(_GlobParser)
};
Str* _GenerateERE(List<syntax_asdl::glob_part_t*>* parts);
Tuple2<Str*, List<Str*>*> GlobToERE(Str* pat);

class Globber : public gc_heap::Obj {
 public:
  Globber(optview::Exec* exec_opts);
  int Expand(Str* arg, List<Str*>* out);
  List<Str*>* OilFuncCall(Str* arg);

  optview::Exec* exec_opts;

  DISALLOW_COPY_AND_ASSIGN(Globber)
};
inline Str* fmt202(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error expanding glob ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace glob_

namespace prompt {  // declare
extern Str* PROMPT_ERROR;

class _PromptEvaluatorCache : public gc_heap::Obj {
 public:
  _PromptEvaluatorCache();
  int _GetEuid();
  Str* Get(Str* name);

  Dict<Str*, Str*>* cache;
  int euid;

  DISALLOW_COPY_AND_ASSIGN(_PromptEvaluatorCache)
};

class Evaluator : public gc_heap::Obj {
 public:
  Evaluator(Str* lang, parse_lib::ParseContext* parse_ctx, state::Mem* mem);
  void CheckCircularDeps();
  Str* _ReplaceBackslashCodes(List<Tuple2<int, Str*>*>* tokens);
  Str* EvalPrompt(runtime_asdl::value_t* UP_val);
  Str* EvalFirstPrompt();

  prompt::_PromptEvaluatorCache* cache;
  Str* default_prompt;
  Str* lang;
  state::Mem* mem;
  Dict<Str*, syntax_asdl::compound_word*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;
  Dict<Str*, List<Tuple2<int, Str*>*>*>* tokens_cache;
  word_eval::AbstractWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(Evaluator)
};

class UserPlugin : public gc_heap::Obj {
 public:
  UserPlugin(state::Mem* mem, parse_lib::ParseContext* parse_ctx, cmd_eval::CommandEvaluator* cmd_ev);
  void Run();

  alloc::Arena* arena;
  cmd_eval::CommandEvaluator* cmd_ev;
  state::Mem* mem;
  Dict<Str*, syntax_asdl::command_t*>* parse_cache;
  parse_lib::ParseContext* parse_ctx;

  DISALLOW_COPY_AND_ASSIGN(UserPlugin)
};
inline Str* fmt203(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Error: ", 8);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt204(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Error: \\", 9);
  gBuf.format_s(a0);
  gBuf.write_const(" not implemented in $PS1> ", 26);
  return gBuf.getvalue();
}

inline Str* fmt205(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<ERROR: Can't parse PS1: ", 25);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}


}  // declare namespace prompt

namespace sh_expr_eval {  // declare
runtime_asdl::value_t* _LookupVar(Str* name, state::Mem* mem, optview::Exec* exec_opts);
runtime_asdl::value_t* OldValue(runtime_asdl::lvalue_t* lval, state::Mem* mem, optview::Exec* exec_opts);

class ArithEvaluator : public gc_heap::Obj {
 public:
  ArithEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt);
  void CheckCircularDeps();
  int _StringToInteger(Str* s, int span_id);
  int _ValToIntOrError(runtime_asdl::value_t* val);
  int _ValToIntOrError(runtime_asdl::value_t* val, int span_id);
  Tuple2<int, runtime_asdl::lvalue_t*> _EvalLhsAndLookupArith(syntax_asdl::arith_expr_t* node);
  void _Store(runtime_asdl::lvalue_t* lval, int new_int);
  int EvalToInt(syntax_asdl::arith_expr_t* node);
  runtime_asdl::value_t* Eval(syntax_asdl::arith_expr_t* node);
  Str* EvalWordToString(syntax_asdl::arith_expr_t* node);
  runtime_asdl::lvalue_t* EvalShellLhs(syntax_asdl::sh_lhs_expr_t* node, int spid, runtime_asdl::scope_t which_scopes);
  Tuple2<Str*, int> _VarRefOrWord(syntax_asdl::arith_expr_t* anode);
  runtime_asdl::lvalue_t* EvalArithLhs(syntax_asdl::arith_expr_t* anode, int span_id);

  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  parse_lib::ParseContext* parse_ctx;
  word_eval::StringWordEvaluator* word_ev;

  DISALLOW_COPY_AND_ASSIGN(ArithEvaluator)
};

class BoolEvaluator : public ArithEvaluator {
 public:
  BoolEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt);
  void Init_AlwaysStrict();
  int _StringToIntegerOrError(Str* s);
  int _StringToIntegerOrError(Str* s, syntax_asdl::word_t* blame_word);
  Str* _EvalCompoundWord(syntax_asdl::word_t* word);
  Str* _EvalCompoundWord(syntax_asdl::word_t* word, runtime_asdl::quote_t quote_kind);
  void _SetRegexMatches(List<Str*>* matches);
  bool EvalB(syntax_asdl::bool_expr_t* node);

  bool always_strict;

  DISALLOW_COPY_AND_ASSIGN(BoolEvaluator)
};
inline Str* fmt206(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined variable ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt207(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use [] on value of type ", 30);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt208(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use [] on value of type ", 30);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt209(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid hex constant ", 21);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt210(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid octal constant ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt211(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid base for numeric constant ", 34);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt212(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid digits for numeric constant ", 36);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt213(Str* a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Digits ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" out of range for base ", 23);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

inline Str* fmt214() {
  gBuf.reset();
  gBuf.write_const("Parse error in recursive arithmetic", 35);
  return gBuf.getvalue();
}

inline Str* fmt215(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt216(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt217(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt218() {
  gBuf.reset();
  gBuf.write_const("Undefined value in arithmetic context", 37);
  return gBuf.getvalue();
}

inline Str* fmt219(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected a value convertible to integer, got ", 45);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt220(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected array or assoc in index expression, got ", 49);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt221() {
  gBuf.reset();
  gBuf.write_const("Divide by zero", 14);
  return gBuf.getvalue();
}

inline Str* fmt222() {
  gBuf.reset();
  gBuf.write_const("Divide by zero", 14);
  return gBuf.getvalue();
}

inline Str* fmt223(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid place to modify", 23);
  return gBuf.getvalue();
}

inline Str* fmt224(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" isn't implemented", 18);
  return gBuf.getvalue();
}

inline Str* fmt225(Str* a0, Str* a1, syntax_asdl::word_t* a2) {
  gBuf.reset();
  gBuf.write_const("Invalid regex ", 14);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace sh_expr_eval

namespace split {  // declare
extern Str* DEFAULT_IFS;
List<Str*>* _SpansToParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans);

class SplitContext : public gc_heap::Obj {
 public:
  SplitContext(state::Mem* mem);
  split::IfsSplitter* _GetSplitter();
  split::IfsSplitter* _GetSplitter(Str* ifs);
  Str* GetJoinChar();
  Str* Escape(Str* s);
  List<Str*>* SplitForWordEval(Str* s);
  List<Str*>* SplitForWordEval(Str* s, Str* ifs);
  List<Tuple2<runtime_asdl::span_t, int>*>* SplitForRead(Str* line, bool allow_escape);

  state::Mem* mem;
  Dict<Str*, split::IfsSplitter*>* splitters;

  DISALLOW_COPY_AND_ASSIGN(SplitContext)
};

class _BaseSplitter : public gc_heap::Obj {
 public:
  _BaseSplitter(Str* escape_chars);
  Str* Escape(Str* s);

  Str* escape_chars;

  DISALLOW_COPY_AND_ASSIGN(_BaseSplitter)
};

class IfsSplitter : public _BaseSplitter {
 public:
  IfsSplitter(Str* ifs_whitespace, Str* ifs_other);
  List<Tuple2<runtime_asdl::span_t, int>*>* Split(Str* s, bool allow_escape);

  Str* ifs_other;
  Str* ifs_whitespace;

  DISALLOW_COPY_AND_ASSIGN(IfsSplitter)
};

}  // declare namespace split

namespace string_ops {  // declare
Str* Utf8Encode(int code);
extern Str* INCOMPLETE_CHAR;
extern Str* INVALID_CONT;
extern Str* INVALID_START;
void _CheckContinuationByte(Str* byte);
int _Utf8CharLen(int starting_byte);
int _NextUtf8Char(Str* s, int i);
int PreviousUtf8Char(Str* s, int i);
int CountUtf8Chars(Str* s);
int AdvanceUtf8Chars(Str* s, int num_chars, int byte_offset);
Str* DoUnarySuffixOp(Str* s, syntax_asdl::suffix_op__Unary* op, Str* arg, bool extglob);
List<Tuple2<int, int>*>* _AllMatchPositions(Str* s, Str* regex);
Str* _PatSubAll(Str* s, Str* regex, Str* replace_str);

class GlobReplacer : public gc_heap::Obj {
 public:
  GlobReplacer(Str* regex, Str* replace_str, int slash_spid);
  Str* Replace(Str* s, syntax_asdl::suffix_op__PatSub* op);

  Str* regex;
  Str* replace_str;
  int slash_spid;

  DISALLOW_COPY_AND_ASSIGN(GlobReplacer)
};
Str* ShellQuoteB(Str* s);
inline Str* fmt226(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt227(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt228(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt229(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

inline Str* fmt230(Str* a0) {
  gBuf.reset();
  gBuf.write_const("(", 1);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt231(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error matching regex ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace string_ops

namespace tdop {  // declare
bool IsIndexable(syntax_asdl::arith_expr_t* node, bool parse_dynamic_arith);
bool _VarRefOrWord(syntax_asdl::arith_expr_t* node, bool dynamic_arith);
void CheckLhsExpr(syntax_asdl::arith_expr_t* node, bool dynamic_arith, syntax_asdl::word_t* blame_word);
syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);

class TdopParser : public gc_heap::Obj {
 public:
  TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser, optview::Parse* parse_opts);
  int CurrentId();
  bool AtToken(int token_type);
  void Eat(int token_type);
  bool Next();
  syntax_asdl::arith_expr_t* ParseUntil(int rbp);
  syntax_asdl::arith_expr_t* Parse();

  syntax_asdl::word_t* cur_word;
  int op_id;
  optview::Parse* parse_opts;
  tdop::ParserSpec* spec;
  word_parse::WordParser* w_parser;

  DISALLOW_COPY_AND_ASSIGN(TdopParser)
};
inline Str* fmt232() {
  gBuf.reset();
  gBuf.write_const("Left-hand side of this assignment is invalid", 44);
  return gBuf.getvalue();
}

inline Str* fmt233() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in prefix position", 38);
  return gBuf.getvalue();
}

inline Str* fmt234() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in infix position", 37);
  return gBuf.getvalue();
}

inline Str* fmt235(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Parser expected ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

inline Str* fmt236() {
  gBuf.reset();
  gBuf.write_const("Unexpected end of input", 23);
  return gBuf.getvalue();
}


}  // declare namespace tdop

namespace word_compile {  // declare
syntax_asdl::class_literal_term_t* EvalCharLiteralForRegex(syntax_asdl::Token* tok);
Str* EvalCStringToken(syntax_asdl::Token* tok);
Str* EvalSingleQuoted(syntax_asdl::single_quoted* part);

}  // declare namespace word_compile

namespace word_eval {  // declare
bool CheckCompatArray(Str* var_name, optview::Exec* opts);
bool CheckCompatArray(Str* var_name, optview::Exec* opts, bool is_plain_var_sub);
runtime_asdl::value_t* ResolveCompatArray(runtime_asdl::value_t* val);
Str* GetArrayItem(List<Str*>* strs, int index);
Str* _BackslashEscape(Str* s);
runtime_asdl::part_value_t* _ValueToPartValue(runtime_asdl::value_t* val, bool quoted);
List<List<Tuple3<Str*, bool, bool>*>*>* _MakeWordFrames(List<runtime_asdl::part_value_t*>* part_vals);
Str* _DecayPartValuesToString(List<runtime_asdl::part_value_t*>* part_vals, Str* join_char);
runtime_asdl::value_t* _PerformSlice(runtime_asdl::value_t* val, int begin, int length, bool has_length, syntax_asdl::braced_var_sub* part, runtime_asdl::value__Str* arg0_val);

class StringWordEvaluator : public gc_heap::Obj {
 public:
  StringWordEvaluator();
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind);

  DISALLOW_COPY_AND_ASSIGN(StringWordEvaluator)
};
Str* _GetDollarHyphen(optview::Exec* exec_opts);

class TildeEvaluator : public gc_heap::Obj {
 public:
  TildeEvaluator(state::Mem* mem, optview::Exec* exec_opts);
  Str* Eval(syntax_asdl::Token* token);

  optview::Exec* exec_opts;
  state::Mem* mem;

  DISALLOW_COPY_AND_ASSIGN(TildeEvaluator)
};

class AbstractWordEvaluator : public StringWordEvaluator {
 public:
  AbstractWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted);
  virtual runtime_asdl::part_value_t* _EvalProcessSub(syntax_asdl::command_sub* cs_part);
  runtime_asdl::value_t* _EvalVarNum(int var_num);
  Tuple2<runtime_asdl::value_t*, bool> _EvalSpecialVar(int op_id, bool quoted);
  bool _ApplyTestOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, Str* var_name, runtime_asdl::a_index_t* var_index, syntax_asdl::Token* blame_token);
  runtime_asdl::value_t* _EvalIndirectArrayExpansion(Str* name, Str* index);
  runtime_asdl::value_t* _ApplyPrefixOp(runtime_asdl::value_t* val, syntax_asdl::speck* prefix_op, syntax_asdl::Token* token);
  runtime_asdl::value_t* _ApplyUnarySuffixOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op);
  runtime_asdl::value_t* _PatSub(runtime_asdl::value_t* val, syntax_asdl::suffix_op__PatSub* op);
  runtime_asdl::value_t* _Slice(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Slice* op, Str* var_name, syntax_asdl::braced_var_sub* part);
  Tuple2<runtime_asdl::value__Str*, bool> _Nullary(runtime_asdl::value_t* val, syntax_asdl::Token* op, Str* var_name);
  Tuple2<runtime_asdl::value_t*, bool> _WholeArray(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part, bool quoted);
  Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*> _ArrayIndex(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part);
  void _EvalDoubleQuoted(List<syntax_asdl::word_part_t*>* parts, List<runtime_asdl::part_value_t*>* part_vals);
  Str* EvalDoubleQuotedToString(syntax_asdl::double_quoted* dq_part);
  runtime_asdl::value__Str* _DecayArray(runtime_asdl::value__MaybeStrArray* val);
  runtime_asdl::value_t* _EmptyStrOrError(runtime_asdl::value_t* val, syntax_asdl::Token* token);
  runtime_asdl::value_t* _EmptyMaybeStrArrayOrError(syntax_asdl::Token* token);
  void _EvalBracedVarSub(syntax_asdl::braced_var_sub* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted);
  Str* _PartValsToString(List<runtime_asdl::part_value_t*>* part_vals, int span_id);
  Str* EvalBracedVarSubToString(syntax_asdl::braced_var_sub* part);
  void _EvalSimpleVarSub(syntax_asdl::Token* token, List<runtime_asdl::part_value_t*>* part_vals, bool quoted);
  Str* EvalSimpleVarSubToString(syntax_asdl::Token* tok);
  void _EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted);
  void _EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted, bool is_subst);
  void _EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals);
  void _EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, bool is_subst);
  runtime_asdl::value__Str* EvalWordToPattern(syntax_asdl::word_t* UP_w);
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* UP_w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* UP_w, runtime_asdl::quote_t quote_kind);
  runtime_asdl::value__Str* EvalForPlugin(syntax_asdl::compound_word* w);
  runtime_asdl::value_t* EvalRhsWord(syntax_asdl::word_t* UP_w);
  void _EvalWordFrame(List<Tuple3<Str*, bool, bool>*>* frame, List<Str*>* argv);
  List<Str*>* _EvalWordToArgv(syntax_asdl::compound_word* w);
  runtime_asdl::cmd_value__Assign* _EvalAssignBuiltin(int builtin_id, Str* arg0, List<syntax_asdl::compound_word*>* words);
  runtime_asdl::cmd_value_t* StaticEvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign);
  runtime_asdl::cmd_value_t* EvalWordSequence2(List<syntax_asdl::compound_word*>* words);
  runtime_asdl::cmd_value_t* EvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign);
  List<Str*>* EvalWordSequence(List<syntax_asdl::compound_word*>* words);

  sh_expr_eval::ArithEvaluator* arith_ev;
  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  expr_eval::OilEvaluator* expr_ev;
  glob_::Globber* globber;
  state::Mem* mem;
  state::MutableOpts* mutable_opts;
  prompt::Evaluator* prompt_ev;
  split::SplitContext* splitter;
  word_eval::TildeEvaluator* tilde_ev;

  DISALLOW_COPY_AND_ASSIGN(AbstractWordEvaluator)
};
Tuple2<Str*, runtime_asdl::value__Str*> _SplitAssignArg(Str* arg, syntax_asdl::compound_word* w);

class NormalWordEvaluator : public AbstractWordEvaluator {
 public:
  NormalWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted);
  virtual runtime_asdl::part_value__String* _EvalProcessSub(syntax_asdl::command_sub* cs_part);

  vm::_Executor* shell_ex;

  DISALLOW_COPY_AND_ASSIGN(NormalWordEvaluator)
};

class CompletionWordEvaluator : public AbstractWordEvaluator {
 public:
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted);
  virtual runtime_asdl::part_value__String* _EvalProcessSub(syntax_asdl::command_sub* cs_part);

  DISALLOW_COPY_AND_ASSIGN(CompletionWordEvaluator)
};
inline Str* fmt237(int a0) {
  gBuf.reset();
  gBuf.write_const("The length index of a array slice can't be negative: ", 53);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

inline Str* fmt238() {
  gBuf.reset();
  gBuf.write_const("Can't slice associative arrays", 30);
  return gBuf.getvalue();
}

inline Str* fmt239() {
  gBuf.reset();
  gBuf.write_const("Error expanding tilde (e.g. invalid user)", 41);
  return gBuf.getvalue();
}

inline Str* fmt240(Str* a0) {
  gBuf.reset();
  gBuf.write_const("unset variable ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt241(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Bad indirect expansion: ", 24);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt242(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use @P on ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt243(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't use @Q on ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt244(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Var op ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" not implemented", 16);
  return gBuf.getvalue();
}

inline Str* fmt245() {
  gBuf.reset();
  gBuf.write_const("Can't index string with @", 25);
  return gBuf.getvalue();
}

inline Str* fmt246() {
  gBuf.reset();
  gBuf.write_const("Can't index string with *", 25);
  return gBuf.getvalue();
}

inline Str* fmt247(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't index string ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" with integer", 13);
  return gBuf.getvalue();
}

inline Str* fmt248(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined variable ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt249(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined array ", 16);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt250(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Array ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" can't be referred to as a scalar (without @ or *)", 50);
  return gBuf.getvalue();
}

inline Str* fmt251() {
  gBuf.reset();
  gBuf.write_const("Illegal array word part (strict_array)", 38);
  return gBuf.getvalue();
}

inline Str* fmt252(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Array ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" can't be referred to as a scalar (without @ or *)", 50);
  return gBuf.getvalue();
}

inline Str* fmt253() {
  gBuf.reset();
  gBuf.write_const("Unexpected array literal", 24);
  return gBuf.getvalue();
}

inline Str* fmt254() {
  gBuf.reset();
  gBuf.write_const("Unexpected associative array literal", 36);
  return gBuf.getvalue();
}

inline Str* fmt255(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't splice ", 13);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt256() {
  gBuf.reset();
  gBuf.write_const("This word should yield a string, but it contains an array", 57);
  return gBuf.getvalue();
}

inline Str* fmt257(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Runtime error: ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt258(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<I/O error: ", 12);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

inline Str* fmt259() {
  gBuf.reset();
  gBuf.write_const("LHS array not allowed in assignment builtin", 43);
  return gBuf.getvalue();
}

inline Str* fmt260() {
  gBuf.reset();
  gBuf.write_const("+= not allowed in assignment builtin", 36);
  return gBuf.getvalue();
}

inline Str* fmt261(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid variable name ", 22);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace word_eval

namespace word_parse {  // declare
extern List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS;

class WordEmitter : public gc_heap::Obj {
 public:
  WordEmitter();
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);

  DISALLOW_COPY_AND_ASSIGN(WordEmitter)
};

class WordParser : public WordEmitter {
 public:
  WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init(types_asdl::lex_mode_t lex_mode);
  void Reset();
  void _Peek();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::compound_word* _ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type);
  syntax_asdl::compound_word* _ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok);
  syntax_asdl::suffix_op__Slice* _ReadSliceVarOp();
  syntax_asdl::suffix_op__PatSub* _ReadPatSubVarOp();
  syntax_asdl::bracket_op_t* _ReadSubscript();
  syntax_asdl::braced_var_sub* _ParseVarOf();
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query);
  Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*> ReadBracedVarSub(syntax_asdl::Token* left_token);
  syntax_asdl::braced_var_sub* _ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted);
  syntax_asdl::single_quoted* _ReadSingleQuoted(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool is_oil_expr);
  syntax_asdl::word_part_t* _ReadDoubleQuotedLeftParts();
  syntax_asdl::word_part_t* _ReadLeftParts();
  syntax_asdl::word_part__ExtGlob* _ReadExtGlob();
  void _ReadLikeDQ(syntax_asdl::Token* left_dq_token, bool is_oil_expr, List<syntax_asdl::word_part_t*>* out_parts);
  syntax_asdl::double_quoted* _ReadDoubleQuoted();
  syntax_asdl::Token* ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::command_sub* _ReadCommandSub(int left_id);
  syntax_asdl::word_part__ExprSub* _ReadExprSub(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::command_t* ParseVarDecl(syntax_asdl::Token* kw_token);
  syntax_asdl::command_t* ParsePlaceMutation(syntax_asdl::Token* kw_token);
  syntax_asdl::expr_t* ParseBareDecl();
  syntax_asdl::expr_t* ParseCommandExpr();
  void ParseProc(syntax_asdl::command__Proc* node);
  void ParseImport(syntax_asdl::command__Import* node);
  syntax_asdl::arith_expr_t* _ReadArithExpr(int end_id);
  syntax_asdl::word_part__ArithSub* _ReadArithSub();
  Tuple2<syntax_asdl::arith_expr_t*, int> ReadDParen();
  void _NextNonSpace();
  syntax_asdl::command__ForExpr* ReadForExpression();
  syntax_asdl::word_part_t* _ReadArrayLiteral();
  void _ParseCallArguments(syntax_asdl::arg_list* arglist);
  bool _MaybeReadWholeWord(bool is_first, types_asdl::lex_mode_t lex_mode, List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::compound_word* _ReadCompoundWord(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::compound_word* _ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok);
  Tuple2<syntax_asdl::word_t*, bool> _ReadArithWord();
  Tuple2<syntax_asdl::word_t*, bool> _ReadWord(types_asdl::lex_mode_t lex_mode);
  int LookAhead();
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);
  void ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::compound_word* ReadForPlugin();
  void EmitDocToken(bool b);

  tdop::TdopParser* a_parser;
  alloc::Arena* arena;
  syntax_asdl::word_t* buffered_word;
  syntax_asdl::Token* cur_token;
  syntax_asdl::word_t* cursor;
  bool cursor_was_newline;
  bool emit_doc_token;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  optview::Parse* parse_opts;
  id_kind_asdl::Kind_t token_kind;
  int token_type;

  DISALLOW_COPY_AND_ASSIGN(WordParser)
};
inline Str* fmt262() {
  gBuf.reset();
  gBuf.write_const("Expected : or } in slice", 24);
  return gBuf.getvalue();
}

inline Str* fmt263() {
  gBuf.reset();
  gBuf.write_const("Pattern in ${x/pat/replace} must not be empty", 45);
  return gBuf.getvalue();
}

inline Str* fmt264(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after replacement string, got ", 41);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt265() {
  gBuf.reset();
  gBuf.write_const("Expected } or / to close pattern", 32);
  return gBuf.getvalue();
}

inline Str* fmt266() {
  gBuf.reset();
  gBuf.write_const("Expected ] to close subscript", 29);
  return gBuf.getvalue();
}

inline Str* fmt267() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt268() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt269() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt270(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${} (", 25);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt271(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${} (", 25);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt272() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

inline Str* fmt273() {
  gBuf.reset();
  gBuf.write_const("Expected } after length expression", 34);
  return gBuf.getvalue();
}

inline Str* fmt274() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${}", 23);
  return gBuf.getvalue();
}

inline Str* fmt275() {
  gBuf.reset();
  gBuf.write_const("Strings with backslashes should look like r'\\n' or c'\\n'", 56);
  return gBuf.getvalue();
}

inline Str* fmt276() {
  gBuf.reset();
  gBuf.write_const("Use \\xhh or \\u{...} instead of octal escapes in Oil strings", 59);
  return gBuf.getvalue();
}

inline Str* fmt277() {
  gBuf.reset();
  gBuf.write_const("Invalid hex escape in Oil string (must be \\xHH)", 47);
  return gBuf.getvalue();
}

inline Str* fmt278() {
  gBuf.reset();
  gBuf.write_const("Invalid char escape in C-style string literal", 45);
  return gBuf.getvalue();
}

inline Str* fmt279() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF in single-quoted string that began here", 54);
  return gBuf.getvalue();
}

inline Str* fmt280() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading extended glob that began here", 52);
  return gBuf.getvalue();
}

inline Str* fmt281() {
  gBuf.reset();
  gBuf.write_const("Invalid char escape in double quoted string", 43);
  return gBuf.getvalue();
}

inline Str* fmt282() {
  gBuf.reset();
  gBuf.write_const("Literal $ should be quoted like \\$", 34);
  return gBuf.getvalue();
}

inline Str* fmt283() {
  gBuf.reset();
  gBuf.write_const("Invalid backtick: use $(cmd) or \\` in Oil strings", 49);
  return gBuf.getvalue();
}

inline Str* fmt284() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading double-quoted string that began here", 59);
  return gBuf.getvalue();
}

inline Str* fmt285() {
  gBuf.reset();
  gBuf.write_const("Use $(cmd) instead of backticks (parse_backticks)", 49);
  return gBuf.getvalue();
}

inline Str* fmt286() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while looking for closing backtick", 49);
  return gBuf.getvalue();
}

inline Str* fmt287(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid proc name ", 18);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt288(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Unexpected token after arithmetic expression (", 46);
  gBuf.format_s(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

inline Str* fmt289() {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith sub", 34);
  return gBuf.getvalue();
}

inline Str* fmt290() {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith statement", 40);
  return gBuf.getvalue();
}

inline Str* fmt291() {
  gBuf.reset();
  gBuf.write_const("Expected ; here", 15);
  return gBuf.getvalue();
}

inline Str* fmt292() {
  gBuf.reset();
  gBuf.write_const("Expected ; here", 15);
  return gBuf.getvalue();
}

inline Str* fmt293() {
  gBuf.reset();
  gBuf.write_const("Expected ) to end for loop expression", 37);
  return gBuf.getvalue();
}

inline Str* fmt294() {
  gBuf.reset();
  gBuf.write_const("Expected ( after =", 18);
  return gBuf.getvalue();
}

inline Str* fmt295() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in array literal", 33);
  return gBuf.getvalue();
}

inline Str* fmt296() {
  gBuf.reset();
  gBuf.write_const("Expected associative array pair", 31);
  return gBuf.getvalue();
}

inline Str* fmt297() {
  gBuf.reset();
  gBuf.write_const("Invalid char escape (parse_backslash)", 37);
  return gBuf.getvalue();
}

inline Str* fmt298() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array literal", 36);
  return gBuf.getvalue();
}

inline Str* fmt299() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array splice", 35);
  return gBuf.getvalue();
}

inline Str* fmt300() {
  gBuf.reset();
  gBuf.write_const("Literal @ starting a word must be quoted (parse_at_all)", 55);
  return gBuf.getvalue();
}

inline Str* fmt301(Str* a0) {
  gBuf.reset();
  gBuf.write_const("next_byte ", 10);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

inline Str* fmt302() {
  gBuf.reset();
  gBuf.write_const("Literal $ should be quoted like \\$", 34);
  return gBuf.getvalue();
}

inline Str* fmt303() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after @()", 26);
  return gBuf.getvalue();
}

inline Str* fmt304(Str* a0) {
  gBuf.reset();
  gBuf.write_const("id = ", 5);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt305(Str* a0) {
  gBuf.reset();
  gBuf.write_const("id = ", 5);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

inline Str* fmt306() {
  gBuf.reset();
  gBuf.write_const("Word has unbalanced { }.  Maybe add a space or quote it like \\{", 63);
  return gBuf.getvalue();
}

inline Str* fmt307(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token while parsing arithmetic: ", 43);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace word_parse

namespace word_ {  // declare
int LiteralId(syntax_asdl::word_part_t* p);
Tuple3<bool, Str*, bool> _EvalWordPart(syntax_asdl::word_part_t* part);
Tuple3<bool, Str*, bool> StaticEval(syntax_asdl::word_t* UP_w);
int LeftMostSpanForPart(syntax_asdl::word_part_t* part);
int _RightMostSpanForPart(syntax_asdl::word_part_t* part);
int LeftMostSpanForWord(syntax_asdl::word_t* w);
int RightMostSpanForWord(syntax_asdl::word_t* w);
syntax_asdl::compound_word* TildeDetect(syntax_asdl::word_t* UP_w);
void TildeDetectAssign(syntax_asdl::compound_word* w);
List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words);
bool HasArrayPart(syntax_asdl::compound_word* w);
Str* ShFunctionName(syntax_asdl::compound_word* w);
syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w);
bool IsVarLike(syntax_asdl::compound_word* w);
Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> DetectShAssignment(syntax_asdl::compound_word* w);
Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* DetectAssocPair(syntax_asdl::compound_word* w);
Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> KeywordToken(syntax_asdl::compound_word* w);
syntax_asdl::Token* LiteralToken(syntax_asdl::word_t* UP_w);
int ArithId(syntax_asdl::word_t* w);
int BoolId(syntax_asdl::word_t* w);
int CommandId(syntax_asdl::word_t* w);
id_kind_asdl::Kind_t CommandKind(syntax_asdl::word_t* w);
bool IsVarSub(syntax_asdl::word_t* w);
int SpanForLhsExpr(syntax_asdl::sh_lhs_expr_t* node);
int SpanIdFromError(error::_ErrorWithLocation* error);
syntax_asdl::compound_word* ErrorWord(Str* error_str);
Str* Pretty(syntax_asdl::word_t* w);

class ctx_EmitDocToken : public gc_heap::Obj {
 public:
  ctx_EmitDocToken(word_parse::WordParser* w_parser);
  ~ctx_EmitDocToken();

  word_parse::WordParser* w_parser;

  DISALLOW_COPY_AND_ASSIGN(ctx_EmitDocToken)
};

}  // declare namespace word_

namespace grammar {  // declare

class Grammar : public gc_heap::Obj {
 public:
  Grammar();

  Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>* dfas;
  Dict<Str*, int>* keywords;
  List<int>* labels;
  Dict<int, Str*>* number2symbol;
  int start;
  List<List<Tuple2<int, int>*>*>* states;
  Dict<Str*, int>* symbol2label;
  Dict<Str*, int>* symbol2number;
  Dict<int, int>* tokens;

  DISALLOW_COPY_AND_ASSIGN(Grammar)
};

}  // declare namespace grammar

namespace pnode {  // declare

class PNode : public gc_heap::Obj {
 public:
  PNode(int typ, syntax_asdl::Token* tok, List<pnode::PNode*>* children);

  List<pnode::PNode*>* children;
  syntax_asdl::Token* tok;
  int typ;

  DISALLOW_COPY_AND_ASSIGN(PNode)
};

}  // declare namespace pnode

namespace cgi {  // declare
Str* escape(Str* s);

}  // declare namespace cgi

namespace os_path {  // declare
extern Str* extsep;
extern Str* sep;
Str* join(Str* s1, Str* s2);
Tuple2<Str*, Str*> split(Str* p);
Tuple2<Str*, Str*> _splitext(Str* p, Str* sep, Str* extsep);
Tuple2<Str*, Str*> splitext(Str* p);
Str* basename(Str* p);
Str* dirname(Str* p);
Str* normpath(Str* path);
bool isabs(Str* s);
Str* abspath(Str* path);
inline Str* fmt308(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("/", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace os_path

namespace qsn_native {  // declare
bool _IsWhitespace(Str* s);
List<syntax_asdl::Token*>* Parse(lexer::Lexer* lexer);
inline Str* fmt309() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in QSN string", 30);
  return gBuf.getvalue();
}

inline Str* fmt310() {
  gBuf.reset();
  gBuf.write_const("Expected closing single quote in QSN string", 43);
  return gBuf.getvalue();
}

inline Str* fmt311() {
  gBuf.reset();
  gBuf.write_const("Unexpected data after closing quote", 35);
  return gBuf.getvalue();
}

inline Str* fmt312() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after QSN string", 33);
  return gBuf.getvalue();
}


}  // declare namespace qsn_native

namespace qsn {  // declare
extern int BIT8_UTF8;
extern int BIT8_U_ESCAPE;
extern int BIT8_X_ESCAPE;
extern int MUST_QUOTE;
bool _encode(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts);
Str* maybe_shell_encode(Str* s);
Str* maybe_shell_encode(Str* s, int flags);
Str* maybe_encode(Str* s);
Str* maybe_encode(Str* s, int bit8_display);
Str* encode(Str* s, int bit8_display);
void _encode_bytes_x(Str* s, bool shell_compat, List<Str*>* parts);
extern int Ascii;
extern int Begin2;
extern int Begin3;
extern int Begin4;
extern int Cont;
extern int Invalid;
extern int Start;
extern int B2_1;
extern int B3_1;
extern int B4_1;
extern int B3_2;
extern int B4_2;
extern int B4_3;
bool _encode_runes(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts);
Str* maybe_tsv_encode(Str* s, int bit8_display);
Str* tsv_decode(Str* s);

}  // declare namespace qsn

namespace builtin_bracket {  // declare

class _StringWordEmitter : public word_parse::WordEmitter {
 public:
  _StringWordEmitter(runtime_asdl::cmd_value__Argv* cmd_val);
  virtual syntax_asdl::word__String* ReadWord(types_asdl::lex_mode_t unused_lex_mode);
  syntax_asdl::word__String* Read();
  Str* Peek(int offset);
  void Rewind(int offset);

  runtime_asdl::cmd_value__Argv* cmd_val;
  int i;
  int n;

  DISALLOW_COPY_AND_ASSIGN(_StringWordEmitter)
};

class _WordEvaluator : public word_eval::StringWordEvaluator {
 public:
  _WordEvaluator();
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind);

  DISALLOW_COPY_AND_ASSIGN(_WordEvaluator)
};
syntax_asdl::bool_expr_t* _TwoArgs(builtin_bracket::_StringWordEmitter* w_parser);
syntax_asdl::bool_expr_t* _ThreeArgs(builtin_bracket::_StringWordEmitter* w_parser);

class Test : public vm::_Builtin {
 public:
  Test(bool need_right_bracket, optview::Exec* exec_opts, state::Mem* mem, ui::ErrorFormatter* errfmt);
  virtual int Run(runtime_asdl::cmd_value__Argv* cmd_val);

  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  bool need_right_bracket;

  DISALLOW_COPY_AND_ASSIGN(Test)
};
inline Str* fmt313(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected unary operator, got ", 29);
  gBuf.format_r(a0);
  gBuf.write_const(" (2 args)", 9);
  return gBuf.getvalue();
}

inline Str* fmt314(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected binary operator, got ", 30);
  gBuf.format_r(a0);
  gBuf.write_const(" (3 args)", 9);
  return gBuf.getvalue();
}


}  // declare namespace builtin_bracket

namespace runtime {  // define
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::color_t;
using hnode_asdl::color_e;
int NO_SPID = -1;

hnode_asdl::hnode__Record* NewRecord(Str* node_type) {
  return Alloc<hnode__Record>(node_type, Alloc<List<hnode_asdl::field*>>(), false, str0, str1, Alloc<List<hnode_asdl::hnode_t*>>());
}

hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color) {
  if (s == nullptr) {
    return Alloc<hnode__Leaf>(str2, color_e::OtherConst);
  }
  else {
    return Alloc<hnode__Leaf>(s, e_color);
  }
}
Str* TRUE_STR = str3;
Str* FALSE_STR = str4;

}  // define namespace runtime

namespace vm {  // define
using runtime_asdl::CompoundStatus;

void InitCircularDeps(sh_expr_eval::ArithEvaluator* arith_ev, sh_expr_eval::BoolEvaluator* bool_ev, expr_eval::OilEvaluator* expr_ev, word_eval::NormalWordEvaluator* word_ev, cmd_eval::CommandEvaluator* cmd_ev, vm::_Executor* shell_ex, prompt::Evaluator* prompt_ev, dev::Tracer* tracer) {
  arith_ev->word_ev = word_ev;
  bool_ev->word_ev = word_ev;
  if (expr_ev) {
    expr_ev->shell_ex = shell_ex;
    expr_ev->word_ev = word_ev;
  }
  word_ev->arith_ev = arith_ev;
  word_ev->expr_ev = expr_ev;
  word_ev->prompt_ev = prompt_ev;
  word_ev->shell_ex = shell_ex;
  cmd_ev->shell_ex = shell_ex;
  cmd_ev->arith_ev = arith_ev;
  cmd_ev->bool_ev = bool_ev;
  cmd_ev->expr_ev = expr_ev;
  cmd_ev->word_ev = word_ev;
  cmd_ev->tracer = tracer;
  shell_ex->cmd_ev = cmd_ev;
  prompt_ev->word_ev = word_ev;
  arith_ev->CheckCircularDeps();
  bool_ev->CheckCircularDeps();
  if (expr_ev) {
    expr_ev->CheckCircularDeps();
  }
  word_ev->CheckCircularDeps();
  cmd_ev->CheckCircularDeps();
  shell_ex->CheckCircularDeps();
  prompt_ev->CheckCircularDeps();
}

_Executor::_Executor() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Executor)) {
  this->cmd_ev = nullptr;
}

void _Executor::CheckCircularDeps() {
  ;  // pass
}

int _Executor::RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val) {
  return 0;
}

int _Executor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork) {
  return RunSimpleCommand(cmd_val, do_fork, true);
}

int _Executor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs) {
  return 0;
}

int _Executor::RunBackgroundJob(syntax_asdl::command_t* node) {
  return 0;
}

void _Executor::RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out) {
  ;  // pass
}

int _Executor::RunSubshell(syntax_asdl::command_t* node) {
  return 0;
}

Str* _Executor::RunCommandSub(syntax_asdl::command_sub* cs_part) {
  return str5;
}

Str* _Executor::RunProcessSub(syntax_asdl::command_sub* cs_part) {
  return str6;
}

void _Executor::Time() {
  ;  // pass
}

bool _Executor::PushRedirects(List<runtime_asdl::redirect*>* redirects) {
  return true;
}

void _Executor::PopRedirects() {
  ;  // pass
}

void _Executor::PushProcessSub() {
  ;  // pass
}

void _Executor::PopProcessSub(runtime_asdl::CompoundStatus* compound_st) {
  ;  // pass
}

_AssignBuiltin::_AssignBuiltin() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_AssignBuiltin)) {
  ;  // pass
}

int _AssignBuiltin::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  throw Alloc<NotImplementedError>();
}

_Builtin::_Builtin() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Builtin)) {
  ;  // pass
}

int _Builtin::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  throw Alloc<NotImplementedError>();
}

ctx_Redirect::ctx_Redirect(vm::_Executor* shell_ex) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Redirect)) {
  this->shell_ex = shell_ex;
}

ctx_Redirect::~ctx_Redirect(){
  this->shell_ex->PopRedirects();
}

ctx_ProcessSub::ctx_ProcessSub(vm::_Executor* shell_ex, runtime_asdl::CompoundStatus* process_sub_status) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_ProcessSub)) {
  shell_ex->PushProcessSub();
  this->shell_ex = shell_ex;
  this->process_sub_status = process_sub_status;
}

ctx_ProcessSub::~ctx_ProcessSub(){
  this->shell_ex->PopProcessSub(this->process_sub_status);
}

}  // define namespace vm

namespace format {  // define
namespace hnode_e = hnode_asdl::hnode_e;
using hnode_asdl::hnode_t;
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::hnode__External;
using hnode_asdl::color_e;
using hnode_asdl::color_t;
using hnode_asdl::color_str;
using hnode_asdl::hnode_str;

format::ColorOutput* DetectConsoleOutput(mylib::Writer* f) {
  if (f->isatty()) {
    return Alloc<AnsiOutput>(f);
  }
  else {
    return Alloc<TextOutput>(f);
  }
}

ColorOutput::ColorOutput(mylib::Writer* f) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ColorOutput)) {
  this->f = f;
  this->num_chars = 0;
}

format::ColorOutput* ColorOutput::NewTempBuffer() {
  throw Alloc<NotImplementedError>();
}

void ColorOutput::FileHeader() {
  ;  // pass
}

void ColorOutput::FileFooter() {
  ;  // pass
}

void ColorOutput::PushColor(hnode_asdl::color_t e_color) {
  throw Alloc<NotImplementedError>();
}

void ColorOutput::PopColor() {
  throw Alloc<NotImplementedError>();
}

void ColorOutput::write(Str* s) {
  this->f->write(s);
  this->num_chars += len(s);
}

void ColorOutput::WriteRaw(Tuple2<Str*, int>* raw) {
  Str* s;
  int num_chars;
  StackRoots _roots({&s});

  Tuple2<Str*, int>* tup0 = raw;
  s = tup0->at0();
  num_chars = tup0->at1();
  this->f->write(s);
  this->num_chars += num_chars;
}

int ColorOutput::NumChars() {
  return this->num_chars;
}

Tuple2<Str*, int> ColorOutput::GetRaw() {
  mylib::BufWriter* f = static_cast<mylib::BufWriter*>(this->f);
  return (Tuple2<Str*, int>(f->getvalue(), this->num_chars));
}

TextOutput::TextOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::TextOutput* TextOutput::NewTempBuffer() {
  return Alloc<TextOutput>(Alloc<mylib::BufWriter>());
}

void TextOutput::PushColor(hnode_asdl::color_t e_color) {
  ;  // pass
}

void TextOutput::PopColor() {
  ;  // pass
}

HtmlOutput::HtmlOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::HtmlOutput* HtmlOutput::NewTempBuffer() {
  return Alloc<HtmlOutput>(Alloc<mylib::BufWriter>());
}

void HtmlOutput::FileHeader() {
  this->f->write(str7);
}

void HtmlOutput::FileFooter() {
  this->f->write(str8);
}

void HtmlOutput::PushColor(hnode_asdl::color_t e_color) {
  Str* css_class;
  StackRoots _roots({&css_class});

  if (e_color == color_e::TypeName) {
    css_class = str9;
  }
  else {
    if (e_color == color_e::StringConst) {
      css_class = str10;
    }
    else {
      if (e_color == color_e::OtherConst) {
        css_class = str11;
      }
      else {
        if (e_color == color_e::External) {
          css_class = str12;
        }
        else {
          if (e_color == color_e::UserType) {
            css_class = str13;
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
  this->f->write(fmt0(css_class));
}

void HtmlOutput::PopColor() {
  this->f->write(str15);
}

void HtmlOutput::write(Str* s) {
  this->f->write(cgi::escape(s));
  this->num_chars += len(s);
}

AnsiOutput::AnsiOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::AnsiOutput* AnsiOutput::NewTempBuffer() {
  return Alloc<AnsiOutput>(Alloc<mylib::BufWriter>());
}

void AnsiOutput::PushColor(hnode_asdl::color_t e_color) {
  if (e_color == color_e::TypeName) {
    this->f->write(ansi::YELLOW);
  }
  else {
    if (e_color == color_e::StringConst) {
      this->f->write(ansi::BOLD);
    }
    else {
      if (e_color == color_e::OtherConst) {
        this->f->write(ansi::GREEN);
      }
      else {
        if (e_color == color_e::External) {
          this->f->write(str_concat(ansi::BOLD, ansi::BLUE));
        }
        else {
          if (e_color == color_e::UserType) {
            this->f->write(ansi::GREEN);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
}

void AnsiOutput::PopColor() {
  this->f->write(ansi::RESET);
}
int INDENT = 2;

_PrettyPrinter::_PrettyPrinter(int max_col) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_PrettyPrinter)) {
  this->max_col = max_col;
}

bool _PrettyPrinter::_PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  int chars_so_far;
  int i;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;
  StackRoots _roots({&single_f, &s});

  all_fit = true;
  chars_so_far = prefix_len;
  i = 0;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next(), ++i) {
    hnode_asdl::hnode_t* val = it.Value();
    if (i != 0) {
      f->write(str16);
    }
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(val, single_f, (this->max_col - chars_so_far))) {
      Tuple2<Str*, int> tup1 = single_f->GetRaw();
      s = tup1.at0();
      num_chars = tup1.at1();
      f->WriteRaw((Alloc<Tuple2<Str*, int>>(s, num_chars)));
      chars_so_far += single_f->NumChars();
    }
    else {
      f->write(str17);
      this->PrintNode(val, f, (indent + INDENT));
      chars_so_far = 0;
      all_fit = false;
    }
  }
  return all_fit;
}

bool _PrettyPrinter::_PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  List<Tuple2<Str*, int>*>* pieces;
  int chars_so_far;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;
  int i;
  StackRoots _roots({&pieces, &single_f, &s});

  all_fit = true;
  pieces = Alloc<List<Tuple2<Str*, int>*>>();
  chars_so_far = prefix_len;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next()) {
    hnode_asdl::hnode_t* item = it.Value();
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(item, single_f, (this->max_col - chars_so_far))) {
      Tuple2<Str*, int> tup2 = single_f->GetRaw();
      s = tup2.at0();
      num_chars = tup2.at1();
      pieces->append((Alloc<Tuple2<Str*, int>>(s, num_chars)));
      chars_so_far += single_f->NumChars();
    }
    else {
      all_fit = false;
      break;
    }
  }
  if (all_fit) {
    i = 0;
    for (ListIter<Tuple2<Str*, int>*> it(pieces); !it.Done(); it.Next(), ++i) {
      Tuple2<Str*, int>* p = it.Value();
      if (i != 0) {
        f->write(str18);
      }
      f->WriteRaw(p);
    }
    f->write(str19);
  }
  return all_fit;
}

void _PrettyPrinter::_PrintRecord(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int indent) {
  Str* ind;
  Str* prefix;
  int prefix_len;
  bool all_fit;
  int i;
  Str* name;
  hnode_asdl::hnode_t* val;
  Str* ind1;
  hnode_asdl::hnode_t* UP_val;
  int tag;
  Str* name_str;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;
  StackRoots _roots({&ind, &prefix, &name, &val, &ind1, &UP_val, &name_str, &single_f, &s});

  ind = str_repeat(str20, indent);
  if (node->abbrev) {
    prefix = str_concat(ind, node->left);
    f->write(prefix);
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str21);
    }
    prefix_len = ((len(prefix) + len(node->node_type)) + 1);
    all_fit = this->_PrintWrappedArray(node->unnamed_fields, prefix_len, f, indent);
    if (!all_fit) {
      f->write(str22);
      f->write(ind);
    }
    f->write(node->right);
  }
  else {
    f->write(str_concat(ind, node->left));
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    f->write(str23);
    i = 0;
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      name = field->name;
      val = field->val;
      ind1 = str_repeat(str24, (indent + INDENT));
      UP_val = val;
      tag = val->tag_();
      if (tag == hnode_e::Array) {
        hnode__Array* val = static_cast<hnode__Array*>(UP_val);
        name_str = fmt1(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        if (!this->_PrintWholeArray(val->children, prefix_len, f, indent)) {
          f->write(str26);
          for (ListIter<hnode_asdl::hnode_t*> it(val->children); !it.Done(); it.Next()) {
            hnode_asdl::hnode_t* child = it.Value();
            this->PrintNode(child, f, ((indent + INDENT) + INDENT));
            f->write(str27);
          }
          f->write(fmt2(ind1));
        }
      }
      else {
        name_str = fmt3(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        single_f = f->NewTempBuffer();
        if (_TrySingleLine(val, single_f, (this->max_col - prefix_len))) {
          Tuple2<Str*, int> tup3 = single_f->GetRaw();
          s = tup3.at0();
          num_chars = tup3.at1();
          f->WriteRaw((Alloc<Tuple2<Str*, int>>(s, num_chars)));
        }
        else {
          f->write(str30);
          this->PrintNode(val, f, ((indent + INDENT) + INDENT));
        }
        i += 1;
      }
      f->write(str31);
    }
    f->write(str_concat(ind, node->right));
  }
}

void _PrettyPrinter::PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent) {
  Str* ind;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;
  hnode_asdl::hnode_t* UP_node;
  int tag;
  StackRoots _roots({&ind, &single_f, &s, &UP_node});

  ind = str_repeat(str32, indent);
  single_f = f->NewTempBuffer();
  single_f->write(ind);
  if (_TrySingleLine(node, single_f, (this->max_col - indent))) {
    Tuple2<Str*, int> tup4 = single_f->GetRaw();
    s = tup4.at0();
    num_chars = tup4.at1();
    f->WriteRaw((Alloc<Tuple2<Str*, int>>(s, num_chars)));
    return ;
  }
  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(qsn::maybe_encode(node->s));
    f->PopColor();
  }
  else {
    if (tag == hnode_e::External) {
      hnode__External* node = static_cast<hnode__External*>(UP_node);
      f->PushColor(color_e::External);
      f->write(repr(node->obj));
      f->PopColor();
    }
    else {
      if (tag == hnode_e::Record) {
        hnode__Record* node = static_cast<hnode__Record*>(UP_node);
        this->_PrintRecord(node, f, indent);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
}

bool _TrySingleLineObj(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int max_chars) {
  int i;
  f->write(node->left);
  if (node->abbrev) {
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str33);
    }
    i = 0;
    for (ListIter<hnode_asdl::hnode_t*> it(node->unnamed_fields); !it.Done(); it.Next(), ++i) {
      hnode_asdl::hnode_t* val = it.Value();
      if (i != 0) {
        f->write(str34);
      }
      if (!_TrySingleLine(val, f, max_chars)) {
        return false;
      }
    }
  }
  else {
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      f->write(fmt4(field->name));
      if (!_TrySingleLine(field->val, f, max_chars)) {
        return false;
      }
    }
  }
  f->write(node->right);
  return true;
}

bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars) {
  hnode_asdl::hnode_t* UP_node;
  int tag;
  int i;
  int num_chars_so_far;
  StackRoots _roots({&UP_node});

  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(qsn::maybe_encode(node->s));
    f->PopColor();
  }
  else {
    if (tag == hnode_e::External) {
      hnode__External* node = static_cast<hnode__External*>(UP_node);
      f->PushColor(color_e::External);
      f->write(repr(node->obj));
      f->PopColor();
    }
    else {
      if (tag == hnode_e::Array) {
        hnode__Array* node = static_cast<hnode__Array*>(UP_node);
        f->write(str36);
        i = 0;
        for (ListIter<hnode_asdl::hnode_t*> it(node->children); !it.Done(); it.Next(), ++i) {
          hnode_asdl::hnode_t* item = it.Value();
          if (i != 0) {
            f->write(str37);
          }
          if (!_TrySingleLine(item, f, max_chars)) {
            return false;
          }
        }
        f->write(str38);
      }
      else {
        if (tag == hnode_e::Record) {
          hnode__Record* node = static_cast<hnode__Record*>(UP_node);
          return _TrySingleLineObj(node, f, max_chars);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
  num_chars_so_far = f->NumChars();
  if (num_chars_so_far > max_chars) {
    return false;
  }
  return true;
}

void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f) {
  format::_PrettyPrinter* pp;
  StackRoots _roots({&pp});

  pp = Alloc<_PrettyPrinter>(100);
  pp->PrintNode(node, f, 0);
}

}  // define namespace format

namespace osh_eval {  // define

int main(List<Str*>* argv) {
  pyutil::_ResourceLoader* loader;
  bool login_shell;
  Dict<Str*, Str*>* environ;
  args::Reader* arg_r;
  int status;
  Str* msg;
  StackRoots _roots({&loader, &environ, &arg_r, &msg});

  loader = pyutil::GetResourceLoader();
  login_shell = false;
  environ = Alloc<Dict<Str*, Str*>>();
  environ->set(str39, posix::getcwd());
  environ->set(str40, str41);
  arg_r = Alloc<args::Reader>(argv, list_repeat(runtime::NO_SPID, len(argv)));
  try {
    status = pure::Main(str42, arg_r, environ, login_shell, loader, nullptr);
    return status;
  }
  catch (error::Usage* e) {
    println_stderr(fmt5(e->msg));
    return 2;
  }
  catch (RuntimeError* e) {
    msg = e->message;
    println_stderr(fmt6(msg));
    return 1;
  }
  catch (KeyboardInterrupt*) {
    print(str45);
    return 130;
  }
  catch (_OSError* e) {
    println_stderr(fmt7(pyutil::strerror(e)));
    return 2;
  }
}

}  // define namespace osh_eval

namespace alloc {  // define
using syntax_asdl::line_span;
using syntax_asdl::source_t;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;

ctx_Location::ctx_Location(alloc::Arena* arena, syntax_asdl::source_t* src) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Location)) {
  arena->PushSource(src);
  this->arena = arena;
}

ctx_Location::~ctx_Location(){
  this->arena->PopSource();
}

Arena::Arena() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Arena)) {
  this->line_vals = Alloc<List<Str*>>();
  this->line_nums = Alloc<List<int>>();
  this->line_srcs = Alloc<List<syntax_asdl::source_t*>>();
  this->line_num_strs = Alloc<Dict<int, Str*>>();
  this->spans = Alloc<List<syntax_asdl::line_span*>>();
  this->source_instances = Alloc<List<syntax_asdl::source_t*>>();
}

void Arena::PushSource(syntax_asdl::source_t* src) {
  this->source_instances->append(src);
}

void Arena::PopSource() {
  this->source_instances->pop();
}

int Arena::AddLine(Str* line, int line_num) {
  int line_id;
  line_id = len(this->line_vals);
  this->line_vals->append(line);
  this->line_nums->append(line_num);
  this->line_srcs->append(this->source_instances->index(-1));
  return line_id;
}

Str* Arena::GetLine(int line_id) {
  return this->line_vals->index(line_id);
}

int Arena::GetLineNumber(int line_id) {
  return this->line_nums->index(line_id);
}

Str* Arena::GetLineNumStr(int line_id) {
  int line_num;
  Str* s;
  StackRoots _roots({&s});

  line_num = this->line_nums->index(line_id);
  s = this->line_num_strs->get(line_num);
  if (s == nullptr) {
    s = str(line_num);
    this->line_num_strs->set(line_num, s);
  }
  return s;
}

syntax_asdl::source_t* Arena::GetLineSource(int line_id) {
  return this->line_srcs->index(line_id);
}

Str* Arena::GetLineSourceString(int line_id) {
  syntax_asdl::source_t* src;
  syntax_asdl::source_t* UP_src;
  int tag;
  StackRoots _roots({&src, &UP_src});

  src = this->line_srcs->index(line_id);
  UP_src = src;
  tag = src->tag_();
  if (tag == source_e::CFlag) {
    return str47;
  }
  if (tag == source_e::MainFile) {
    source__MainFile* src = static_cast<source__MainFile*>(UP_src);
    return src->path;
  }
  if (tag == source_e::SourcedFile) {
    source__SourcedFile* src = static_cast<source__SourcedFile*>(UP_src);
    return src->path;
  }
  return repr(src);
}

int Arena::AddLineSpan(int line_id, int col, int length) {
  int span_id;
  syntax_asdl::line_span* span;
  StackRoots _roots({&span});

  span_id = len(this->spans);
  span = Alloc<line_span>(line_id, col, length);
  this->spans->append(span);
  return span_id;
}

syntax_asdl::line_span* Arena::GetLineSpan(int span_id) {
  return this->spans->index(span_id);
}

int Arena::LastSpanId() {
  return len(this->spans);
}

}  // define namespace alloc

namespace ansi {  // define
Str* RESET = str48;
Str* BOLD = str49;
Str* UNDERLINE = str50;
Str* REVERSE = str51;
Str* RED = str52;
Str* GREEN = str53;
Str* YELLOW = str54;
Str* BLUE = str55;

}  // define namespace ansi

namespace dev {  // define
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Str;
using syntax_asdl::assign_op_e;

CrashDumper::CrashDumper(Str* crash_dump_dir) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(CrashDumper)) {
  this->crash_dump_dir = crash_dump_dir;
  this->do_collect = to_bool(crash_dump_dir);
  this->collected = false;
  this->var_stack = nullptr;
  this->argv_stack = nullptr;
  this->debug_stack = nullptr;
  this->error = nullptr;
}

void CrashDumper::MaybeCollect(void* cmd_ev, error::_ErrorWithLocation* err) {
  if (!this->do_collect) {
    return ;
  }
}

void CrashDumper::MaybeDump(int status) {
  if (!this->collected) {
    return ;
  }
}

Tracer::Tracer(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, state::Mem* mem, word_eval::NormalWordEvaluator* word_ev, util::_DebugFile* f) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Tracer)) {
  this->parse_ctx = parse_ctx;
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->mem = mem;
  this->word_ev = word_ev;
  this->f = f;
  this->parse_cache = Alloc<Dict<Str*, syntax_asdl::compound_word*>>();
}

Tuple2<Str*, Str*> Tracer::_EvalPS4() {
  Str* first_char;
  Str* ps4;
  runtime_asdl::value_t* val;
  Str* s;
  syntax_asdl::compound_word* ps4_word;
  word_parse::WordParser* w_parser;
  runtime_asdl::value__Str* prefix;
  StackRoots _roots({&first_char, &ps4, &val, &s, &ps4_word, &w_parser, &prefix});

  first_char = str56;
  ps4 = str57;
  val = this->mem->GetValue(str58);
  if (val->tag_() == value_e::Str) {
    s = static_cast<value__Str*>(val)->s;
    if (len(s)) {
      first_char = s->index(0);
      ps4 = s->slice(1);
    }
  }
  ps4_word = this->parse_cache->get(ps4);
  if (ps4_word == nullptr) {
    w_parser = this->parse_ctx->MakeWordParserForPlugin(ps4);
    try {
      ps4_word = w_parser->ReadForPlugin();
    }
    catch (error::Parse* e) {
      ps4_word = word_::ErrorWord(fmt8(e->UserErrorString()));
    }
    this->parse_cache->set(ps4, ps4_word);
  }
  this->mutable_opts->set_xtrace(false);
  try {
    prefix = this->word_ev->EvalForPlugin(ps4_word);
  }
  catch (std::exception) { }  return (Tuple2<Str*, Str*>(first_char, prefix->s));
}

void Tracer::OnSimpleCommand(List<Str*>* argv) {
  Str* first_char;
  Str* prefix;
  List<Str*>* tmp;
  Str* cmd;
  StackRoots _roots({&first_char, &prefix, &tmp, &cmd});

  if (!this->exec_opts->xtrace()) {
    return ;
  }
  Tuple2<Str*, Str*> tup0 = this->_EvalPS4();
  first_char = tup0.at0();
  prefix = tup0.at1();
  tmp = Alloc<List<Str*>>();
  for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
    Str* a = it.Value();
    tmp->append(qsn::maybe_shell_encode(a));
  }
  cmd = str60->join(tmp);
  println_stderr(fmt9(first_char, prefix, cmd));
}

void Tracer::OnShAssignment(runtime_asdl::lvalue_t* lval, syntax_asdl::assign_op_t op, runtime_asdl::value_t* val, int flags, runtime_asdl::scope_t which_scopes) {
  Str* first_char;
  Str* prefix;
  Str* op_str;
  StackRoots _roots({&first_char, &prefix, &op_str});

  if (!this->exec_opts->xtrace()) {
    return ;
  }
  Tuple2<Str*, Str*> tup1 = this->_EvalPS4();
  first_char = tup1.at0();
  prefix = tup1.at1();
  op_str = op == assign_op_e::PlusEqual ? str62 : str63;
}

void Tracer::Event() {
  ;  // pass
}

}  // define namespace dev

namespace error {  // define
int NO_SPID = -1;

_ControlFlow::_ControlFlow(syntax_asdl::Token* token, int arg) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_ControlFlow)) {
  this->token = token;
  this->arg = arg;
}

bool _ControlFlow::IsReturn() {
  namespace Id = id_kind_asdl::Id;
  return this->token->id == Id::ControlFlow_Return;
}

bool _ControlFlow::IsBreak() {
  namespace Id = id_kind_asdl::Id;
  return this->token->id == Id::ControlFlow_Break;
}

bool _ControlFlow::IsContinue() {
  namespace Id = id_kind_asdl::Id;
  return this->token->id == Id::ControlFlow_Continue;
}

int _ControlFlow::StatusCode() {
  return this->arg;
}

}  // define namespace error

namespace executor {  // define
namespace Id = id_kind_asdl::Id;
using runtime_asdl::redirect;
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command__Simple;
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__ControlFlow;
using syntax_asdl::command_sub;
using syntax_asdl::compound_word;
using syntax_asdl::Token;

_ProcessSubFrame::_ProcessSubFrame() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_ProcessSubFrame)) {
  this->to_close = Alloc<List<int>>();
  this->to_wait = Alloc<List<process::Process*>>();
  this->span_ids = Alloc<List<int>>();
}

ShellExecutor::ShellExecutor(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<int, vm::_Builtin*>* builtins, state::SearchPath* search_path, process::ExternalProgram* ext_prog, process::Waiter* waiter, process::JobState* job_state, process::FdState* fd_state, ui::ErrorFormatter* errfmt) : vm::_Executor() {
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->procs = procs;
  this->builtins = builtins;
  this->search_path = search_path;
  this->ext_prog = ext_prog;
  this->waiter = waiter;
  this->job_state = job_state;
  this->fd_state = fd_state;
  this->errfmt = errfmt;
  this->process_sub_stack = Alloc<List<executor::_ProcessSubFrame*>>();
}

void ShellExecutor::CheckCircularDeps() {
}

process::Process* ShellExecutor::_MakeProcess(syntax_asdl::command_t* node) {
  return _MakeProcess(node, true);
}

process::Process* ShellExecutor::_MakeProcess(syntax_asdl::command_t* node, bool inherit_errexit) {
  syntax_asdl::command_t* UP_node;
  process::SubProgramThunk* thunk;
  process::Process* p;
  StackRoots _roots({&UP_node, &thunk, &p});

  UP_node = node;
  if (node->tag_() == command_e::ControlFlow) {
    command__ControlFlow* node = static_cast<command__ControlFlow*>(UP_node);
    if (node->token->id != Id::ControlFlow_Exit) {
      e_die(fmt10(node->token->val), node->token);
    }
  }
  thunk = Alloc<process::SubProgramThunk>(this->cmd_ev, node, inherit_errexit);
  p = Alloc<process::Process>(thunk, this->job_state);
  return p;
}

int ShellExecutor::RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val) {
  vm::_Builtin* builtin_func;
  int status;
  Str* arg0;
  StackRoots _roots({&builtin_func, &arg0});

  builtin_func = this->builtins->index(builtin_id);
  this->errfmt->PushLocation(cmd_val->arg_spids->index(0));
  try {
    try {
      status = builtin_func->Run(cmd_val);
    }
    catch (error::Usage* e) {
      arg0 = cmd_val->argv->index(0);
      if (e->span_id == runtime::NO_SPID) {
        e->span_id = this->errfmt->CurrentLocation();
      }
      this->errfmt->PrefixPrint(e->msg, fmt11(arg0), e->span_id);
      status = 2;
    }
    catch (KeyboardInterrupt*) {
      if (this->exec_opts->interactive()) {
        print(str67);
        status = 130;
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }  return status;
}

int ShellExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork) {
  return RunSimpleCommand(cmd_val, do_fork, true);
}

int ShellExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs) {
  List<Str*>* argv;
  int span_id;
  Str* arg0;
  int builtin_id;
  int status;
  runtime_asdl::Proc* proc_node;
  Dict<Str*, Str*>* environ;
  Str* argv0_path;
  process::ExternalThunk* thunk;
  process::Process* p;
  StackRoots _roots({&argv, &arg0, &proc_node, &environ, &argv0_path, &thunk, &p});

  argv = cmd_val->argv;
  span_id = len(cmd_val->arg_spids) ? cmd_val->arg_spids->index(0) : runtime::NO_SPID;
  if (len(argv) == 0) {
    if (this->exec_opts->strict_argv()) {
      e_die(fmt12(), span_id);
    }
    else {
      return 0;
    }
  }
  arg0 = argv->index(0);
  builtin_id = consts::LookupAssignBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    this->errfmt->Print_(str69, span_id);
    return 1;
  }
  builtin_id = consts::LookupSpecialBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    status = this->RunBuiltin(builtin_id, cmd_val);
    return status;
  }
  if (call_procs) {
    proc_node = this->procs->get(arg0);
    if (proc_node != nullptr) {
      if ((this->exec_opts->strict_errexit() and this->mutable_opts->ErrExitIsDisabled())) {
        this->errfmt->Print_(str70, this->mutable_opts->ErrExitSpanId());
        this->errfmt->StderrLine(str71);
        e_die(fmt13(), span_id);
      }
      status = this->cmd_ev->RunProc(proc_node, argv->slice(1));
      return status;
    }
  }
  builtin_id = consts::LookupNormalBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    return this->RunBuiltin(builtin_id, cmd_val);
  }
  environ = this->mem->GetExported();
  if (cmd_val->block) {
    e_die(fmt14(arg0), cmd_val->block->spids->index(0));
  }
  argv0_path = this->search_path->CachedLookup(arg0);
  if (argv0_path == nullptr) {
    this->errfmt->Print_(fmt15(arg0), span_id);
    return 127;
  }
  if (do_fork) {
    thunk = Alloc<process::ExternalThunk>(this->ext_prog, argv0_path, cmd_val, environ);
    p = Alloc<process::Process>(thunk, this->job_state);
    status = p->Run(this->waiter);
    return status;
  }
  this->ext_prog->Exec(argv0_path, cmd_val, environ);
}

int ShellExecutor::RunBackgroundJob(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  process::Pipeline* pi;
  process::Process* p;
  int last_pid;
  int job_id;
  int pid;
  StackRoots _roots({&UP_node, &pi, &p});

  UP_node = node;
  if (UP_node->tag_() == command_e::Pipeline) {
    command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
    pi = Alloc<process::Pipeline>();
    for (ListIter<syntax_asdl::command_t*> it(node->children); !it.Done(); it.Next()) {
      syntax_asdl::command_t* child = it.Value();
      p = this->_MakeProcess(child);
      p->Init_ParentPipeline(pi);
      pi->Add(p);
    }
    pi->Start(this->waiter);
    last_pid = pi->LastPid();
    this->mem->last_bg_pid = last_pid;
    job_id = this->job_state->AddJob(pi);
    println_stderr(fmt16(job_id, last_pid));
  }
  else {
    p = this->_MakeProcess(node);
    pid = p->Start();
    this->mem->last_bg_pid = pid;
    job_id = this->job_state->AddJob(p);
    println_stderr(fmt17(job_id, pid));
  }
  return 0;
}

void ShellExecutor::RunPipeline(syntax_asdl::command__Pipeline* node, runtime_asdl::CompoundStatus* status_out) {
  process::Pipeline* pi;
  int n;
  syntax_asdl::command_t* child;
  process::Process* p;
  syntax_asdl::command_t* last_child;
  StackRoots _roots({&pi, &child, &p, &last_child});

  pi = Alloc<process::Pipeline>();
  n = len(node->children);
  for (int i = 0; i < (n - 1); ++i) {
    child = node->children->index(i);
    status_out->spids->append(location::SpanForCommand(child));
    p = this->_MakeProcess(child);
    p->Init_ParentPipeline(pi);
    pi->Add(p);
  }
  last_child = node->children->index((n - 1));
  pi->AddLast((Alloc<Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>>(this->cmd_ev, last_child)));
  status_out->spids->append(location::SpanForCommand(last_child));
  status_out->codes = pi->Run(this->waiter, this->fd_state);
}

int ShellExecutor::RunSubshell(syntax_asdl::command_t* node) {
  process::Process* p;
  StackRoots _roots({&p});

  p = this->_MakeProcess(node);
  return p->Run(this->waiter);
}

Str* ShellExecutor::RunCommandSub(syntax_asdl::command_sub* cs_part) {
  syntax_asdl::command_t* node;
  syntax_asdl::Token* tok;
  syntax_asdl::compound_word* cat_word;
  process::Process* p;
  int r;
  int w;
  List<Str*>* chunks;
  Str* byte_str;
  int status;
  StackRoots _roots({&node, &tok, &cat_word, &p, &chunks, &byte_str});

  if (!this->exec_opts->allow_command_sub()) {
    e_die(str77);
  }
  node = cs_part->child;
  if (node->tag_() == command_e::Simple) {
    command__Simple* simple = static_cast<command__Simple*>(node);
    if ((len(simple->words) == 0 and (len(simple->redirects) == 1 and simple->redirects->index(0)->op->id == Id::Redir_Less))) {
      tok = Alloc<Token>(Id::Lit_Chars, runtime::NO_SPID, str78);
      cat_word = Alloc<compound_word>(Alloc<List<syntax_asdl::word_part_t*>>(std::initializer_list<syntax_asdl::word_part_t*>{tok}));
      simple->words->append(cat_word);
    }
  }
  p = this->_MakeProcess(node, this->exec_opts->inherit_errexit());
  Tuple2<int, int> tup0 = posix::pipe();
  r = tup0.at0();
  w = tup0.at1();
  p->AddStateChange(Alloc<process::StdoutToPipe>(r, w));
  chunks = Alloc<List<Str*>>();
  posix::close(w);
  while (true) {
    byte_str = posix::read(r, 4096);
    if (len(byte_str) == 0) {
      break;
    }
    chunks->append(byte_str);
  }
  posix::close(r);
  status = p->Wait(this->waiter);
  if (this->exec_opts->command_sub_errexit()) {
    if (status != 0) {
      throw Alloc<error::ErrExit>(fmt18(status, ui::CommandType(node)), cs_part->left_token->span_id, status);
    }
  }
  else {
    this->cmd_ev->check_command_sub_status = true;
    this->mem->SetLastStatus(status);
  }
  return str80->join(chunks)->rstrip(str81);
}

Str* ShellExecutor::RunProcessSub(syntax_asdl::command_sub* cs_part) {
  process::Process* p;
  int r;
  int w;
  int op_id;
  process::ChildStateChange* redir;
  int pid;
  executor::_ProcessSubFrame* ps_frame;
  StackRoots _roots({&p, &redir, &ps_frame});

  p = this->_MakeProcess(cs_part->child);
  Tuple2<int, int> tup1 = posix::pipe();
  r = tup1.at0();
  w = tup1.at1();
  op_id = cs_part->left_token->id;
  if (op_id == Id::Left_ProcSubIn) {
    redir = Alloc<process::StdoutToPipe>(r, w);
  }
  else {
    if (op_id == Id::Left_ProcSubOut) {
      redir = Alloc<process::StdinFromPipe>(r, w);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  p->AddStateChange(redir);
  pid = p->Start();
  ps_frame = this->process_sub_stack->index(-1);
  ps_frame->to_wait->append(p);
  ps_frame->span_ids->append(cs_part->left_token->span_id);
  if (op_id == Id::Left_ProcSubIn) {
    posix::close(w);
    ps_frame->to_close->append(r);
  }
  else {
    if (op_id == Id::Left_ProcSubOut) {
      posix::close(r);
      ps_frame->to_close->append(w);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  if (op_id == Id::Left_ProcSubIn) {
    return fmt19(r);
  }
  else {
    if (op_id == Id::Left_ProcSubOut) {
      return fmt20(w);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
}

void ShellExecutor::MaybeWaitOnProcessSubs(executor::_ProcessSubFrame* frame, runtime_asdl::CompoundStatus* compound_st) {
  int i;
  int st;
  for (ListIter<int> it(frame->to_close); !it.Done(); it.Next()) {
    int fd = it.Value();
    posix::close(fd);
  }
  i = 0;
  for (ListIter<process::Process*> it(frame->to_wait); !it.Done(); it.Next(), ++i) {
    process::Process* p = it.Value();
    st = p->Wait(this->waiter);
    compound_st->codes->append(st);
    compound_st->spids->append(frame->span_ids->index(i));
    i += 1;
  }
}

void ShellExecutor::Time() {
  ;  // pass
}

bool ShellExecutor::PushRedirects(List<runtime_asdl::redirect*>* redirects) {
  return this->fd_state->Push(redirects, this->waiter);
}

void ShellExecutor::PopRedirects() {
  this->fd_state->Pop();
}

void ShellExecutor::PushProcessSub() {
  this->process_sub_stack->append(Alloc<_ProcessSubFrame>());
}

void ShellExecutor::PopProcessSub(runtime_asdl::CompoundStatus* compound_st) {
  executor::_ProcessSubFrame* frame;
  StackRoots _roots({&frame});

  frame = this->process_sub_stack->pop();
  this->MaybeWaitOnProcessSubs(frame, compound_st);
}

}  // define namespace executor

namespace main_loop {  // define
using syntax_asdl::command_t;
namespace command = syntax_asdl::command;
using syntax_asdl::parse_result__EmptyLine;
using syntax_asdl::parse_result__Eof;
using syntax_asdl::parse_result__Node;

int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena) {
  return Batch(cmd_ev, c_parser, arena, 0);
}

int Batch(cmd_eval::CommandEvaluator* cmd_ev, cmd_parse::CommandParser* c_parser, alloc::Arena* arena, int cmd_flags) {
  int status;
  syntax_asdl::command_t* node;
  bool is_return;
  bool is_fatal;
  StackRoots _roots({&node});

  status = 0;
  while (true) {
    try {
      node = c_parser->ParseLogicalLine();
      if (node == nullptr) {
        c_parser->CheckForPendingHereDocs();
        break;
      }
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      status = 2;
      break;
    }
    if (((cmd_flags & cmd_eval::IsMainProgram) and c_parser->line_reader->LastLineHint())) {
      cmd_flags |= cmd_eval::Optimize;
    }
    Tuple2<bool, bool> tup0 = cmd_ev->ExecuteAndCatch(node, cmd_flags);
    is_return = tup0.at0();
    is_fatal = tup0.at1();
    status = cmd_ev->LastStatus();
    if ((is_return or is_fatal)) {
      break;
    }
  }
  return status;
}

syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser) {
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command_t* node;
  StackRoots _roots({&children, &node});

  children = Alloc<List<syntax_asdl::command_t*>>();
  while (true) {
    node = c_parser->ParseLogicalLine();
    if (node == nullptr) {
      c_parser->CheckForPendingHereDocs();
      break;
    }
    children->append(node);
  }
  if (len(children) == 1) {
    return children->index(0);
  }
  else {
    return Alloc<command::CommandList>(children);
  }
}

}  // define namespace main_loop

namespace process {  // define
namespace Id = id_kind_asdl::Id;
using runtime_asdl::job_state_e;
using runtime_asdl::job_state_t;
namespace job_status = runtime_asdl::job_status;
using runtime_asdl::job_status_t;
using runtime_asdl::redirect;
namespace redirect_arg_e = runtime_asdl::redirect_arg_e;
using runtime_asdl::redirect_arg__Path;
using runtime_asdl::redirect_arg__CopyFd;
using runtime_asdl::redirect_arg__MoveFd;
using runtime_asdl::redirect_arg__HereDoc;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
namespace lvalue = runtime_asdl::lvalue;
using runtime_asdl::value__Str;
namespace redir_loc = syntax_asdl::redir_loc;
namespace redir_loc_e = syntax_asdl::redir_loc_e;
using syntax_asdl::redir_loc_t;
using syntax_asdl::redir_loc__VarName;
using syntax_asdl::redir_loc__Fd;
int NO_FD = -1;
int _SHELL_MIN_FD = 100;

_RedirFrame::_RedirFrame(int saved_fd, int orig_fd, bool forget) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_RedirFrame)) {
  this->saved_fd = saved_fd;
  this->orig_fd = orig_fd;
  this->forget = forget;
}

_FdFrame::_FdFrame() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_FdFrame)) {
  this->saved = Alloc<List<process::_RedirFrame*>>();
  this->need_wait = Alloc<List<Tuple2<process::Process*, process::Waiter*>*>>();
}

void _FdFrame::Forget() {
  for (ReverseListIter<process::_RedirFrame*> it(this->saved); !it.Done(); it.Next()) {
    process::_RedirFrame* rf = it.Value();
    if ((rf->saved_fd != NO_FD and rf->forget)) {
      posix::close(rf->saved_fd);
    }
  }
  this->saved->clear();
  this->need_wait->clear();
}

FdState::FdState(ui::ErrorFormatter* errfmt, process::JobState* job_state, state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(FdState)) {
  this->errfmt = errfmt;
  this->job_state = job_state;
  this->cur_frame = Alloc<_FdFrame>();
  this->stack = Alloc<List<process::_FdFrame*>>(std::initializer_list<process::_FdFrame*>{this->cur_frame});
  this->mem = mem;
}

mylib::LineReader* FdState::Open(Str* path) {
  int fd_mode;
  fd_mode = posix::O_RDONLY;
  return this->_Open(path, str85, fd_mode);
}

mylib::LineReader* FdState::_Open(Str* path, Str* c_mode, int fd_mode) {
  int fd;
  int new_fd;
  mylib::LineReader* f;
  StackRoots _roots({&f});

  fd = posix::open(path, fd_mode, 438);
  new_fd = fcntl_::fcntl(fd, fcntl_::F_DUPFD, _SHELL_MIN_FD);
  posix::close(fd);
  f = posix::fdopen(new_fd, c_mode);
  return f;
}

void FdState::_WriteFdToMem(Str* fd_name, int fd) {
  if (this->mem) {
    state::SetLocalShopt(this->mem, Alloc<lvalue::Named>(fd_name), Alloc<value::Str>(str(fd)));
  }
}

int FdState::_ReadFdFromMem(Str* fd_name) {
  runtime_asdl::value_t* val;
  StackRoots _roots({&val});

  val = this->mem->GetValue(fd_name);
  if (val->tag_() == value_e::Str) {
    try {
      return to_int(static_cast<value__Str*>(val)->s);
    }
    catch (ValueError*) {
      return NO_FD;
    }
  }
  return NO_FD;
}

bool FdState::_PushSave(int fd) {
  bool need_restore;
  int new_fd;
  need_restore = true;
  try {
    new_fd = fcntl_::fcntl(fd, fcntl_::F_DUPFD, _SHELL_MIN_FD);
  }
  catch (IOError* e) {
    if (e->errno == errno_::EBADF) {
      need_restore = false;
    }
    else {
      throw ;
    }
  }
  if (need_restore) {
    this->cur_frame->saved->append(Alloc<_RedirFrame>(new_fd, fd, true));
  }
  else {
    this->_PushClose(fd);
  }
  return need_restore;
}

int FdState::_PushDup(int fd1, syntax_asdl::redir_loc_t* loc) {
  syntax_asdl::redir_loc_t* UP_loc;
  Str* fd2_name;
  int new_fd;
  int fd2;
  bool need_restore;
  process::_RedirFrame* rf;
  StackRoots _roots({&UP_loc, &fd2_name, &rf});

  UP_loc = loc;
  if (loc->tag_() == redir_loc_e::VarName) {
    fd2_name = static_cast<redir_loc__VarName*>(UP_loc)->name;
    try {
      new_fd = fcntl_::fcntl(fd1, fcntl_::F_DUPFD, _SHELL_MIN_FD);
    }
    catch (IOError* e) {
      if (e->errno == errno_::EBADF) {
        this->errfmt->Print_(fmt21(fd1, pyutil::strerror(e)));
        return NO_FD;
      }
      else {
        throw ;
      }
    }
    this->_WriteFdToMem(fd2_name, new_fd);
  }
  else {
    if (loc->tag_() == redir_loc_e::Fd) {
      fd2 = static_cast<redir_loc__Fd*>(UP_loc)->fd;
      if (fd1 == fd2) {
        return NO_FD;
      }
      try {
        fcntl_::fcntl(fd1, fcntl_::F_GETFD);
      }
      catch (IOError* e) {
        this->errfmt->Print_(fmt22(fd1, pyutil::strerror(e)));
        throw ;
      }
      need_restore = this->_PushSave(fd2);
      try {
        posix::dup2(fd1, fd2);
      }
      catch (OSError* e) {
        this->errfmt->Print_(fmt23(fd1, pyutil::strerror(e)));
        if (need_restore) {
          rf = this->cur_frame->saved->pop();
          posix::dup2(rf->saved_fd, rf->orig_fd);
          posix::close(rf->saved_fd);
        }
        throw ;
      }
      new_fd = fd2;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  return new_fd;
}

bool FdState::_PushCloseFd(syntax_asdl::redir_loc_t* loc) {
  syntax_asdl::redir_loc_t* UP_loc;
  Str* fd_name;
  int fd;
  StackRoots _roots({&UP_loc, &fd_name});

  UP_loc = loc;
  if (loc->tag_() == redir_loc_e::VarName) {
    fd_name = static_cast<redir_loc__VarName*>(UP_loc)->name;
    fd = this->_ReadFdFromMem(fd_name);
    if (fd == NO_FD) {
      return false;
    }
  }
  else {
    if (loc->tag_() == redir_loc_e::Fd) {
      fd = static_cast<redir_loc__Fd*>(UP_loc)->fd;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  this->_PushSave(fd);
  return true;
}

void FdState::_PushClose(int fd) {
  this->cur_frame->saved->append(Alloc<_RedirFrame>(NO_FD, fd, false));
}

void FdState::_PushWait(process::Process* proc, process::Waiter* waiter) {
  this->cur_frame->need_wait->append((Alloc<Tuple2<process::Process*, process::Waiter*>>(proc, waiter)));
}

void FdState::_ApplyRedirect(runtime_asdl::redirect* r, process::Waiter* waiter) {
  runtime_asdl::redirect_arg_t* arg;
  runtime_asdl::redirect_arg_t* UP_arg;
  int mode;
  int open_fd;
  int new_fd;
  syntax_asdl::redir_loc_t* UP_loc;
  int fd;
  int read_fd;
  int write_fd;
  process::_HereDocWriterThunk* thunk;
  bool start_process;
  process::Process* here_proc;
  StackRoots _roots({&arg, &UP_arg, &UP_loc, &thunk, &here_proc});

  arg = r->arg;
  UP_arg = arg;
  switch (arg->tag_()) {
    case redirect_arg_e::Path: {
      redirect_arg__Path* arg = static_cast<redirect_arg__Path*>(UP_arg);
      if ((r->op_id == Id::Redir_Great || r->op_id == Id::Redir_AndGreat)) {
        mode = ((posix::O_CREAT | posix::O_WRONLY) | posix::O_TRUNC);
      }
      else {
        if (r->op_id == Id::Redir_Clobber) {
          mode = ((posix::O_CREAT | posix::O_WRONLY) | posix::O_TRUNC);
        }
        else {
          if ((r->op_id == Id::Redir_DGreat || r->op_id == Id::Redir_AndDGreat)) {
            mode = ((posix::O_CREAT | posix::O_WRONLY) | posix::O_APPEND);
          }
          else {
            if (r->op_id == Id::Redir_Less) {
              mode = posix::O_RDONLY;
            }
            else {
              if (r->op_id == Id::Redir_LessGreat) {
                mode = (posix::O_CREAT | posix::O_RDWR);
              }
              else {
                throw Alloc<NotImplementedError>(r->op_id);
              }
            }
          }
        }
      }
      try {
        open_fd = posix::open(arg->filename, mode, 438);
      }
      catch (OSError* e) {
        this->errfmt->Print_(fmt24(arg->filename, pyutil::strerror(e)), r->op_spid);
        throw ;
      }
      new_fd = this->_PushDup(open_fd, r->loc);
      if (new_fd != NO_FD) {
        posix::close(open_fd);
      }
      if ((r->op_id == Id::Redir_AndGreat || r->op_id == Id::Redir_AndDGreat)) {
        this->_PushDup(new_fd, Alloc<redir_loc::Fd>(2));
      }
    }
      break;
    case redirect_arg_e::CopyFd: {
      redirect_arg__CopyFd* arg = static_cast<redirect_arg__CopyFd*>(UP_arg);
      if (r->op_id == Id::Redir_GreatAnd) {
        this->_PushDup(arg->target_fd, r->loc);
      }
      else {
        if (r->op_id == Id::Redir_LessAnd) {
          this->_PushDup(arg->target_fd, r->loc);
        }
        else {
          throw Alloc<NotImplementedError>();
        }
      }
    }
      break;
    case redirect_arg_e::MoveFd: {
      redirect_arg__MoveFd* arg = static_cast<redirect_arg__MoveFd*>(UP_arg);
      new_fd = this->_PushDup(arg->target_fd, r->loc);
      if (new_fd != NO_FD) {
        posix::close(arg->target_fd);
        UP_loc = r->loc;
        if (r->loc->tag_() == redir_loc_e::Fd) {
          fd = static_cast<redir_loc__Fd*>(UP_loc)->fd;
        }
        else {
          fd = NO_FD;
        }
        this->cur_frame->saved->append(Alloc<_RedirFrame>(new_fd, fd, false));
      }
    }
      break;
    case redirect_arg_e::CloseFd: {
      this->_PushCloseFd(r->loc);
    }
      break;
    case redirect_arg_e::HereDoc: {
      redirect_arg__HereDoc* arg = static_cast<redirect_arg__HereDoc*>(UP_arg);
      Tuple2<int, int> tup0 = posix::pipe();
      read_fd = tup0.at0();
      write_fd = tup0.at1();
      this->_PushDup(read_fd, r->loc);
      this->_PushClose(read_fd);
      thunk = Alloc<_HereDocWriterThunk>(write_fd, arg->body);
      start_process = true;
      if (start_process) {
        here_proc = Alloc<Process>(thunk, this->job_state);
        this->_PushWait(here_proc, waiter);
        posix::close(write_fd);
      }
      else {
        posix::write(write_fd, arg->body);
        posix::close(write_fd);
      }
    }
      break;
  }
}

bool FdState::Push(List<runtime_asdl::redirect*>* redirects, process::Waiter* waiter) {
  process::_FdFrame* new_frame;
  StackRoots _roots({&new_frame});

  new_frame = Alloc<_FdFrame>();
  this->stack->append(new_frame);
  this->cur_frame = new_frame;
  for (ListIter<runtime_asdl::redirect*> it(redirects); !it.Done(); it.Next()) {
    runtime_asdl::redirect* r = it.Value();
    this->errfmt->PushLocation(r->op_spid);
    try {
      try {
        this->_ApplyRedirect(r, waiter);
      }
      catch (_OSError* e) {
        this->Pop();
        return false;
      }
    }
    catch (std::exception) { }  }
  return true;
}

bool FdState::PushStdinFromPipe(int r) {
  process::_FdFrame* new_frame;
  StackRoots _roots({&new_frame});

  new_frame = Alloc<_FdFrame>();
  this->stack->append(new_frame);
  this->cur_frame = new_frame;
  this->_PushDup(r, Alloc<redir_loc::Fd>(0));
  return true;
}

void FdState::Pop() {
  process::_FdFrame* frame;
  process::Process* proc;
  process::Waiter* waiter;
  int unused_status;
  StackRoots _roots({&frame, &proc, &waiter});

  frame = this->stack->pop();
  for (ReverseListIter<process::_RedirFrame*> it(frame->saved); !it.Done(); it.Next()) {
    process::_RedirFrame* rf = it.Value();
    if (rf->saved_fd == NO_FD) {
      try {
        posix::close(rf->orig_fd);
      }
      catch (OSError* e) {
        println_stderr(fmt25(rf->orig_fd, pyutil::strerror(e)));
        throw ;
      }
    }
    else {
      try {
        posix::dup2(rf->saved_fd, rf->orig_fd);
      }
      catch (OSError* e) {
        println_stderr(fmt26(rf->saved_fd, rf->orig_fd, pyutil::strerror(e)));
        throw ;
      }
      posix::close(rf->saved_fd);
    }
  }
  for (ListIter<Tuple2<process::Process*, process::Waiter*>*> it(frame->need_wait); !it.Done(); it.Next()) {
    Tuple2<process::Process*, process::Waiter*>* tup1 = it.Value();
    proc = tup1->at0();
    waiter = tup1->at1();
    unused_status = proc->Wait(waiter);
  }
}

void FdState::MakePermanent() {
  this->cur_frame->Forget();
}

ChildStateChange::ChildStateChange() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ChildStateChange)) {
  ;  // pass
}

void ChildStateChange::Apply() {
  throw Alloc<NotImplementedError>();
}

StdinFromPipe::StdinFromPipe(int pipe_read_fd, int w) {
  this->r = pipe_read_fd;
  this->w = w;
}

void StdinFromPipe::Apply() {
  posix::dup2(this->r, 0);
  posix::close(this->r);
  posix::close(this->w);
}

StdoutToPipe::StdoutToPipe(int r, int pipe_write_fd) {
  this->r = r;
  this->w = pipe_write_fd;
}

void StdoutToPipe::Apply() {
  posix::dup2(this->w, 1);
  posix::close(this->w);
  posix::close(this->r);
}

ExternalProgram::ExternalProgram(Str* hijack_shebang, process::FdState* fd_state, ui::ErrorFormatter* errfmt, util::_DebugFile* debug_f) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ExternalProgram)) {
  this->hijack_shebang = hijack_shebang;
  this->fd_state = fd_state;
  this->errfmt = errfmt;
  this->debug_f = debug_f;
}

void ExternalProgram::Exec(Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ) {
  this->_Exec(argv0_path, cmd_val->argv, cmd_val->arg_spids->index(0), environ, true);
}

void ExternalProgram::_Exec(Str* argv0_path, List<Str*>* argv, int argv0_spid, Dict<Str*, Str*>* environ, bool should_retry) {
  mylib::LineReader* f;
  List<Str*>* new_argv;
  int status;
  StackRoots _roots({&f, &new_argv});

  if (len(this->hijack_shebang)) {
    try {
      f = this->fd_state->Open(argv0_path);
    }
    catch (OSError* e) {
      ;  // pass
    }
  }
  try {
    posix::execve(argv0_path, argv, environ);
  }
  catch (OSError* e) {
    if ((e->errno == errno_::ENOEXEC and should_retry)) {
      new_argv = Alloc<List<Str*>>(std::initializer_list<Str*>{str94, argv0_path});
      new_argv->extend(argv->slice(1));
      this->_Exec(str95, new_argv, argv0_spid, environ, false);
    }
    this->errfmt->Print_(fmt27(argv0_path, pyutil::strerror(e)), argv0_spid);
    if (e->errno == errno_::EACCES) {
      status = 126;
    }
    else {
      if (e->errno == errno_::ENOENT) {
        status = 127;
      }
      else {
        status = 127;
      }
    }
    exit(status);
  }
}

Thunk::Thunk() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Thunk)) {
  ;  // pass
}

void Thunk::Run() {
  throw Alloc<NotImplementedError>();
}

Str* Thunk::DisplayLine() {
  throw Alloc<NotImplementedError>();
}

Str* Thunk::__str__() {
  return this->DisplayLine();
}

ExternalThunk::ExternalThunk(process::ExternalProgram* ext_prog, Str* argv0_path, runtime_asdl::cmd_value__Argv* cmd_val, Dict<Str*, Str*>* environ) {
  this->ext_prog = ext_prog;
  this->argv0_path = argv0_path;
  this->cmd_val = cmd_val;
  this->environ = environ;
}

Str* ExternalThunk::DisplayLine() {
  List<Str*>* tmp;
  StackRoots _roots({&tmp});

  tmp = Alloc<List<Str*>>();
  for (ListIter<Str*> it(this->cmd_val->argv); !it.Done(); it.Next()) {
    Str* a = it.Value();
    tmp->append(qsn::maybe_shell_encode(a));
  }
  return fmt28(str98->join(tmp));
}

void ExternalThunk::Run() {
  this->ext_prog->Exec(this->argv0_path, this->cmd_val, this->environ);
}

SubProgramThunk::SubProgramThunk(cmd_eval::CommandEvaluator* cmd_ev, syntax_asdl::command_t* node, bool inherit_errexit) {
  this->cmd_ev = cmd_ev;
  this->node = node;
  this->inherit_errexit = inherit_errexit;
}

Str* SubProgramThunk::DisplayLine() {
  return fmt29(ui::CommandType(this->node));
}

void SubProgramThunk::Run() {
  int status;
  if (!this->inherit_errexit) {
    this->cmd_ev->mutable_opts->DisableErrExit();
  }
  try {
    this->cmd_ev->ExecuteAndCatch(this->node, cmd_eval::Optimize);
    status = this->cmd_ev->LastStatus();
  }
  catch (util::UserExit* e) {
    status = e->status;
  }
  catch (KeyboardInterrupt*) {
    print(str100);
    status = 130;
  }
  catch (_OSError* e) {
    println_stderr(fmt30(pyutil::strerror(e)));
    status = 2;
  }
  exit(status);
}

_HereDocWriterThunk::_HereDocWriterThunk(int w, Str* body_str) {
  this->w = w;
  this->body_str = body_str;
}

Str* _HereDocWriterThunk::DisplayLine() {
  return str102;
}

void _HereDocWriterThunk::Run() {
  posix::write(this->w, this->body_str);
  posix::close(this->w);
  exit(0);
}

Job::Job() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Job)) {
  this->state = job_state_e::Running;
}

runtime_asdl::job_state_t Job::State() {
  return this->state;
}

void Job::Send_SIGCONT(process::Waiter* waiter) {
  ;  // pass
}

runtime_asdl::job_status_t* Job::JobWait(process::Waiter* waiter) {
  throw Alloc<NotImplementedError>();
}

Process::Process(process::Thunk* thunk, process::JobState* job_state) : Job() {
  this->thunk = thunk;
  this->job_state = job_state;
  this->parent_pipeline = nullptr;
  this->state_changes = Alloc<List<process::ChildStateChange*>>();
  this->close_r = -1;
  this->close_w = -1;
  this->pid = -1;
  this->status = -1;
}

void Process::Init_ParentPipeline(process::Pipeline* pi) {
  this->parent_pipeline = pi;
}

void Process::AddStateChange(process::ChildStateChange* s) {
  this->state_changes->append(s);
}

void Process::AddPipeToClose(int r, int w) {
  this->close_r = r;
  this->close_w = w;
}

void Process::MaybeClosePipe() {
  if (this->close_r != -1) {
    posix::close(this->close_r);
    posix::close(this->close_w);
  }
}

int Process::Start() {
  int pid;
  pid = posix::fork();
  if (pid < 0) {
    throw Alloc<RuntimeError>(str104);
  }
  else {
    if (pid == 0) {
      pyos::SignalState_AfterForkingChild();
      for (ListIter<process::ChildStateChange*> it(this->state_changes); !it.Done(); it.Next()) {
        process::ChildStateChange* st = it.Value();
        st->Apply();
      }
      this->thunk->Run();
    }
  }
  this->pid = pid;
  this->job_state->AddChildProcess(pid, this);
  return pid;
}

int Process::Wait(process::Waiter* waiter) {
  while (true) {
    if (!waiter->WaitForOne()) {
      break;
    }
    if (this->state != job_state_e::Running) {
      break;
    }
  }
  return this->status;
}

runtime_asdl::job_status_t* Process::JobWait(process::Waiter* waiter) {
  int exit_code;
  exit_code = this->Wait(waiter);
  return Alloc<job_status::Proc>(exit_code);
}

void Process::WhenStopped() {
  this->state = job_state_e::Stopped;
}

void Process::WhenDone(int pid, int status) {
  this->status = status;
  this->state = job_state_e::Done;
  if (this->parent_pipeline) {
    this->parent_pipeline->WhenDone(pid, status);
  }
}

int Process::Run(process::Waiter* waiter) {
  this->Start();
  return this->Wait(waiter);
}

Pipeline::Pipeline() : Job() {
  this->procs = Alloc<List<process::Process*>>();
  this->pids = Alloc<List<int>>();
  this->pipe_status = Alloc<List<int>>();
  this->status = -1;
  this->last_thunk = nullptr;
  this->last_pipe = nullptr;
}

void Pipeline::Add(process::Process* p) {
  int r;
  int w;
  process::Process* prev;
  StackRoots _roots({&prev});

  if (len(this->procs) == 0) {
    this->procs->append(p);
    return ;
  }
  Tuple2<int, int> tup2 = posix::pipe();
  r = tup2.at0();
  w = tup2.at1();
  prev = this->procs->index(-1);
  prev->AddStateChange(Alloc<StdoutToPipe>(r, w));
  p->AddStateChange(Alloc<StdinFromPipe>(r, w));
  p->AddPipeToClose(r, w);
  this->procs->append(p);
}

void Pipeline::AddLast(Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* thunk) {
  int r;
  int w;
  process::Process* prev;
  StackRoots _roots({&prev});

  this->last_thunk = thunk;
  if (len(this->procs) == 0) {
    return ;
  }
  Tuple2<int, int> tup3 = posix::pipe();
  r = tup3.at0();
  w = tup3.at1();
  prev = this->procs->index(-1);
  prev->AddStateChange(Alloc<StdoutToPipe>(r, w));
  this->last_pipe = (Alloc<Tuple2<int, int>>(r, w));
}

void Pipeline::Start(process::Waiter* waiter) {
  int i;
  int pid;
  i = 0;
  for (ListIter<process::Process*> it(this->procs); !it.Done(); it.Next(), ++i) {
    process::Process* proc = it.Value();
    pid = proc->Start();
    this->pids->append(pid);
    this->pipe_status->append(-1);
    proc->MaybeClosePipe();
  }
  if (this->last_thunk) {
    this->pipe_status->append(-1);
  }
}

int Pipeline::LastPid() {
  return this->pids->index(-1);
}

List<int>* Pipeline::Wait(process::Waiter* waiter) {
  while (true) {
    if (!waiter->WaitForOne()) {
      break;
    }
    if (this->state != job_state_e::Running) {
      break;
    }
  }
  return this->pipe_status;
}

runtime_asdl::job_status_t* Pipeline::JobWait(process::Waiter* waiter) {
  List<int>* pipe_status;
  StackRoots _roots({&pipe_status});

  pipe_status = this->Wait(waiter);
  return Alloc<job_status::Pipeline>(pipe_status);
}

List<int>* Pipeline::Run(process::Waiter* waiter, process::FdState* fd_state) {
  cmd_eval::CommandEvaluator* cmd_ev;
  syntax_asdl::command_t* node;
  int r;
  int w;
  StackRoots _roots({&cmd_ev, &node});

  this->Start(waiter);
  Tuple2<cmd_eval::CommandEvaluator*, syntax_asdl::command_t*>* tup4 = this->last_thunk;
  cmd_ev = tup4->at0();
  node = tup4->at1();
  if (this->last_pipe != nullptr) {
    Tuple2<int, int>* tup5 = this->last_pipe;
    r = tup5->at0();
    w = tup5->at1();
    posix::close(w);
    fd_state->PushStdinFromPipe(r);
    try {
      cmd_ev->ExecuteAndCatch(node);
    }
    catch (std::exception) { }    posix::close(r);
  }
  else {
    if (len(this->procs)) {
      cmd_ev->ExecuteAndCatch(node);
    }
    else {
      cmd_ev->_Execute(node);
    }
  }
  this->pipe_status->set(-1, cmd_ev->LastStatus());
  if (len(this->procs)) {
    return this->Wait(waiter);
  }
  else {
    return this->pipe_status;
  }
}

void Pipeline::WhenDone(int pid, int status) {
  int i;
  bool all_done;
  i = this->pids->index(pid);
  this->pipe_status->set(i, status);
  all_done = true;
  for (ListIter<int> it(this->pipe_status); !it.Done(); it.Next()) {
    int status = it.Value();
    if (status == -1) {
      all_done = false;
    }
  }
  if (all_done) {
    this->status = this->pipe_status->index(-1);
    this->state = job_state_e::Done;
  }
}

JobState::JobState() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(JobState)) {
  this->jobs = Alloc<Dict<int, process::Job*>>();
  this->child_procs = Alloc<Dict<int, process::Process*>>();
  this->last_stopped_pid = -1;
  this->job_id = 1;
}

void JobState::NotifyStopped(int pid) {
  this->last_stopped_pid = pid;
}

int JobState::GetLastStopped() {
  return this->last_stopped_pid;
}

int JobState::AddJob(process::Job* job) {
  int job_id;
  job_id = this->job_id;
  this->jobs->set(job_id, job);
  this->job_id += 1;
  return job_id;
}

void JobState::AddChildProcess(int pid, process::Process* proc) {
  this->child_procs->set(pid, proc);
}

process::Process* JobState::JobFromPid(int pid) {
  return this->child_procs->get(pid);
}

void JobState::List() {
}

void JobState::ListRecent() {
  ;  // pass
}

bool JobState::NoneAreRunning() {
  for (DictIter<int, process::Job*> it(this->jobs); !it.Done(); it.Next()) {
    int _ = it.Key();
    process::Job* job = it.Value();
    if (job->State() == job_state_e::Running) {
      return false;
    }
  }
  return true;
}

void JobState::MaybeRemove(int pid) {
  println_stderr(fmt31(pid));
}

Waiter::Waiter(process::JobState* job_state, optview::Exec* exec_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Waiter)) {
  this->job_state = job_state;
  this->exec_opts = exec_opts;
  this->last_status = 127;
}

bool Waiter::WaitForOne() {
  int pid;
  int status;
  process::Process* proc;
  bool term_sig;
  StackRoots _roots({&proc});

  try {
    Tuple2<int, int> tup6 = posix::waitpid(-1, WUNTRACED);
    pid = tup6.at0();
    status = tup6.at1();
  }
  catch (OSError* e) {
    if (e->errno == errno_::ECHILD) {
      return false;
    }
    else {
      throw ;
    }
  }
  catch (KeyboardInterrupt*) {
    if (this->exec_opts->interactive()) {
      return true;
    }
    else {
      throw ;
    }
  }
  if (!dict_contains(this->job_state->child_procs, pid)) {
    println_stderr(fmt32(pid));
    return true;
  }
  proc = this->job_state->child_procs->index(pid);
  if (WIFSIGNALED(status)) {
    term_sig = WTERMSIG(status);
    status = (128 + term_sig);
    if (term_sig == signal_::SIGINT) {
      print(str109);
    }
    proc->WhenDone(pid, status);
  }
  else {
    if (WIFEXITED(status)) {
      status = WEXITSTATUS(status);
      proc->WhenDone(pid, status);
    }
    else {
      if (WIFSTOPPED(status)) {
        println_stderr(str110);
        println_stderr(fmt33(pid));
        this->job_state->NotifyStopped(pid);
        proc->WhenStopped();
      }
    }
  }
  this->last_status = status;
  return true;
}

}  // define namespace process

namespace pure {  // define
namespace builtin_i = option_asdl::builtin_i;
namespace cmd_value = runtime_asdl::cmd_value;
namespace source = syntax_asdl::source;
namespace fmt = format;

runtime_asdl::cmd_value__Argv* MakeBuiltinArgv(List<Str*>* argv1) {
  List<Str*>* argv;
  StackRoots _roots({&argv});

  argv = Alloc<List<Str*>>(std::initializer_list<Str*>{str112});
  argv->extend(argv1);
  return Alloc<cmd_value::Argv>(argv, list_repeat(runtime::NO_SPID, len(argv)), nullptr);
}

void AddPure(Dict<int, vm::_Builtin*>* b, state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* procs, state::MutableOpts* mutable_opts, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt) {
  builtin_pure::Boolean* true_;
  StackRoots _roots({&true_});

  b->set(builtin_i::set, Alloc<builtin_pure::Set>(mutable_opts, mem));
  b->set(builtin_i::alias, Alloc<builtin_pure::Alias>(aliases, errfmt));
  b->set(builtin_i::unalias, Alloc<builtin_pure::UnAlias>(aliases, errfmt));
  b->set(builtin_i::hash, Alloc<builtin_pure::Hash>(search_path));
  b->set(builtin_i::getopts, Alloc<builtin_pure::GetOpts>(mem, errfmt));
  true_ = Alloc<builtin_pure::Boolean>(0);
  b->set(builtin_i::colon, true_);
  b->set(builtin_i::true_, true_);
  b->set(builtin_i::false_, Alloc<builtin_pure::Boolean>(1));
  b->set(builtin_i::shift, Alloc<builtin_assign::Shift>(mem));
  b->set(builtin_i::type, Alloc<builtin_meta::Type>(procs, aliases, search_path, errfmt));
}

void AddIO(Dict<int, vm::_Builtin*>* b, state::Mem* mem, state::DirStack* dir_stack, optview::Exec* exec_opts, split::SplitContext* splitter, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt) {
  builtin_misc::MapFile* mapfile;
  StackRoots _roots({&mapfile});

  mapfile = Alloc<builtin_misc::MapFile>(mem, errfmt);
  b->set(builtin_i::echo, Alloc<builtin_pure::Echo>(exec_opts));
  b->set(builtin_i::mapfile, mapfile);
  b->set(builtin_i::readarray, mapfile);
  b->set(builtin_i::read, Alloc<builtin_misc::Read>(splitter, mem, parse_ctx));
  b->set(builtin_i::cat, Alloc<builtin_misc::Cat>());
  b->set(builtin_i::test, Alloc<builtin_bracket::Test>(false, exec_opts, mem, errfmt));
  b->set(builtin_i::bracket, Alloc<builtin_bracket::Test>(true, exec_opts, mem, errfmt));
  b->set(builtin_i::pushd, Alloc<builtin_misc::Pushd>(mem, dir_stack, errfmt));
  b->set(builtin_i::popd, Alloc<builtin_misc::Popd>(mem, dir_stack, errfmt));
  b->set(builtin_i::dirs, Alloc<builtin_misc::Dirs>(mem, dir_stack, errfmt));
  b->set(builtin_i::pwd, Alloc<builtin_misc::Pwd>(mem, errfmt));
  b->set(builtin_i::times, Alloc<builtin_misc::Times>());
}

void AddMeta(Dict<int, vm::_Builtin*>* builtins, vm::_Executor* shell_ex, state::MutableOpts* mutable_opts, state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt) {
  builtins->set(builtin_i::builtin, Alloc<builtin_meta::Builtin>(shell_ex, errfmt));
  builtins->set(builtin_i::command, Alloc<builtin_meta::Command>(shell_ex, procs, aliases, search_path));
  builtins->set(builtin_i::run, Alloc<builtin_meta::Run_>(mutable_opts, mem, shell_ex, errfmt));
}

void AddBlock(Dict<int, vm::_Builtin*>* builtins, state::Mem* mem, state::MutableOpts* mutable_opts, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt) {
  builtins->set(builtin_i::cd, Alloc<builtin_misc::Cd>(mem, dir_stack, cmd_ev, errfmt));
  builtins->set(builtin_i::shopt, Alloc<builtin_pure::Shopt>(mutable_opts, cmd_ev));
}

Dict<int, vm::_AssignBuiltin*>* InitAssignmentBuiltins(state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* procs, ui::ErrorFormatter* errfmt) {
  Dict<int, vm::_AssignBuiltin*>* assign_b;
  builtin_assign::NewVar* new_var;
  StackRoots _roots({&assign_b, &new_var});

  assign_b = Alloc<Dict<int, vm::_AssignBuiltin*>>();
  new_var = Alloc<builtin_assign::NewVar>(mem, procs, errfmt);
  assign_b->set(builtin_i::declare, new_var);
  assign_b->set(builtin_i::typeset, new_var);
  assign_b->set(builtin_i::local, new_var);
  assign_b->set(builtin_i::export_, Alloc<builtin_assign::Export>(mem, errfmt));
  assign_b->set(builtin_i::readonly, Alloc<builtin_assign::Readonly>(mem, errfmt));
  return assign_b;
}

int Main(Str* lang, args::Reader* arg_r, Dict<Str*, Str*>* environ, bool login_shell, pyutil::_ResourceLoader* loader, void* line_input) {
  Str* argv0;
  args::_Attributes* attrs;
  arg_types::main* flag;
  alloc::Arena* arena;
  ui::ErrorFormatter* errfmt;
  builtin_misc::Help* help_builtin;
  Str* no_str;
  List<state::DebugFrame*>* debug_stack;
  Str* dollar0;
  state::DebugFrame* frame0;
  state::DebugFrame* frame1;
  Str* script_name;
  state::Mem* mem;
  state::OptHook* opt_hook;
  optview::Parse* parse_opts;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;
  Str* version_str;
  Dict<Str*, runtime_asdl::Proc*>* procs;
  process::JobState* job_state;
  process::FdState* fd_state;
  Dict<Str*, Str*>* aliases;
  grammar::Grammar* oil_grammar;
  parse_lib::ParseContext* parse_ctx;
  alloc::Arena* comp_arena;
  parse_lib::Trail* trail1;
  parse_lib::ParseContext* comp_ctx;
  alloc::Arena* hist_arena;
  parse_lib::Trail* trail2;
  parse_lib::ParseContext* hist_ctx;
  cmd_eval::Deps* cmd_deps;
  process::Waiter* waiter;
  int my_pid;
  Str* debug_path;
  Str* debug_dir;
  util::_DebugFile* debug_f;
  Str* interp;
  state::SearchPath* search_path;
  process::ExternalProgram* ext_prog;
  split::SplitContext* splitter;
  Str* crash_dump_dir;
  util::_DebugFile* trace_f;
  state::DirStack* dir_stack;
  Dict<int, vm::_Builtin*>* builtins;
  sh_expr_eval::ArithEvaluator* arith_ev;
  sh_expr_eval::BoolEvaluator* bool_ev;
  expr_eval::OilEvaluator* expr_ev;
  word_eval::NormalWordEvaluator* word_ev;
  Dict<int, vm::_AssignBuiltin*>* assign_b;
  cmd_eval::CommandEvaluator* cmd_ev;
  executor::ShellExecutor* shell_ex;
  prompt::Evaluator* prompt_ev;
  dev::Tracer* tracer;
  reader::_Reader* line_reader;
  mylib::LineReader* stdin;
  mylib::LineReader* f;
  cmd_parse::CommandParser* c_parser;
  int status;
  syntax_asdl::command_t* node;
  Str* input_path;
  List<int>* box;
  StackRoots _roots({&argv0, &attrs, &flag, &arena, &errfmt, &help_builtin, &no_str, &debug_stack, &dollar0, &frame0, &frame1, &script_name, &mem, &opt_hook, &parse_opts, &exec_opts, &mutable_opts, &version_str, &procs, &job_state, &fd_state, &aliases, &oil_grammar, &parse_ctx, &comp_arena, &trail1, &comp_ctx, &hist_arena, &trail2, &hist_ctx, &cmd_deps, &waiter, &debug_path, &debug_dir, &debug_f, &interp, &search_path, &ext_prog, &splitter, &crash_dump_dir, &trace_f, &dir_stack, &builtins, &arith_ev, &bool_ev, &expr_ev, &word_ev, &assign_b, &cmd_ev, &shell_ex, &prompt_ev, &tracer, &line_reader, &stdin, &f, &c_parser, &node, &input_path, &box});

  argv0 = arg_r->Peek();
  arg_r->Next();
  try {
    attrs = flag_spec::ParseMore(str113, arg_r);
  }
  catch (error::Usage* e) {
    println_stderr(fmt34(e->msg));
    return 2;
  }
  flag = Alloc<arg_types::main>(attrs->attrs);
  arena = Alloc<alloc::Arena>();
  errfmt = Alloc<ui::ErrorFormatter>(arena);
  help_builtin = Alloc<builtin_misc::Help>(loader, errfmt);
  if (flag->help) {
    help_builtin->Run(MakeBuiltinArgv(Alloc<List<Str*>>(std::initializer_list<Str*>{fmt35(lang)})));
    return 0;
  }
  if (flag->version) {
    pyutil::ShowAppVersion(str116, loader);
    return 0;
  }
  no_str = nullptr;
  debug_stack = Alloc<List<state::DebugFrame*>>();
  if (arg_r->AtEnd()) {
    dollar0 = argv0;
  }
  else {
    dollar0 = arg_r->Peek();
    frame0 = Alloc<state::DebugFrame>(dollar0, str117, no_str, state::LINE_ZERO, 0, 0);
    debug_stack->append(frame0);
  }
  frame1 = Alloc<state::DebugFrame>(no_str, no_str, no_str, runtime::NO_SPID, 0, 0);
  debug_stack->append(frame1);
  script_name = arg_r->Peek();
  arg_r->Next();
  mem = Alloc<state::Mem>(dollar0, arg_r->Rest(), arena, debug_stack);
  opt_hook = Alloc<state::OptHook>();
  Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> tup0 = state::MakeOpts(mem, opt_hook);
  parse_opts = tup0.at0();
  exec_opts = tup0.at1();
  mutable_opts = tup0.at2();
  mem->exec_opts = exec_opts;
  mutable_opts->Init();
  version_str = pyutil::GetVersion(loader);
  state::InitMem(mem, environ, version_str);
  procs = Alloc<Dict<Str*, runtime_asdl::Proc*>>();
  job_state = Alloc<process::JobState>();
  fd_state = Alloc<process::FdState>(errfmt, job_state, mem);
  if (attrs->show_options) {
    mutable_opts->ShowOptions(Alloc<List<Str*>>());
    return 0;
  }
  if (str_equals(lang, str118)) {
    mutable_opts->SetShoptOption(str119, true);
  }
  builtin_pure::SetShellOpts(mutable_opts, attrs->opt_changes, attrs->shopt_changes);
  aliases = Alloc<Dict<Str*, Str*>>();
  oil_grammar = nullptr;
  if ((flag->one_pass_parse and !exec_opts->noexec())) {
    e_usage(str120);
  }
  parse_ctx = Alloc<parse_lib::ParseContext>(arena, parse_opts, aliases, oil_grammar);
  parse_ctx->Init_OnePassParse(flag->one_pass_parse);
  comp_arena = Alloc<alloc::Arena>();
  comp_arena->PushSource(Alloc<source::Unused>(str121));
  trail1 = Alloc<parse_lib::Trail>();
  comp_ctx = Alloc<parse_lib::ParseContext>(comp_arena, parse_opts, aliases, oil_grammar);
  comp_ctx->Init_Trail(trail1);
  comp_ctx->Init_OnePassParse(true);
  hist_arena = Alloc<alloc::Arena>();
  hist_arena->PushSource(Alloc<source::Unused>(str122));
  trail2 = Alloc<parse_lib::Trail>();
  hist_ctx = Alloc<parse_lib::ParseContext>(hist_arena, parse_opts, aliases, oil_grammar);
  hist_ctx->Init_Trail(trail2);
  cmd_deps = Alloc<cmd_eval::Deps>();
  cmd_deps->mutable_opts = mutable_opts;
  cmd_deps->traps = Alloc<Dict<Str*, builtin_process::_TrapHandler*>>();
  cmd_deps->trap_nodes = Alloc<List<syntax_asdl::command_t*>>();
  waiter = Alloc<process::Waiter>(job_state, exec_opts);
  my_pid = posix::getpid();
  debug_path = str123;
  debug_dir = environ->get(str124);
  if (flag->debug_file != nullptr) {
    debug_path = flag->debug_file;
  }
  else {
    if (debug_dir != nullptr) {
      debug_path = os_path::join(debug_dir, fmt36(my_pid));
    }
  }
  if (len(debug_path)) {
    throw Alloc<NotImplementedError>();
  }
  else {
    debug_f = Alloc<util::NullDebugFile>();
  }
  cmd_deps->debug_f = debug_f;
  if (len(debug_path)) {
    println_stderr(fmt37(debug_path));
  }
  interp = environ->get(str127, str128);
  search_path = Alloc<state::SearchPath>(mem);
  ext_prog = Alloc<process::ExternalProgram>(interp, fd_state, errfmt, debug_f);
  splitter = Alloc<split::SplitContext>(mem);
  crash_dump_dir = environ->get(str129, str130);
  cmd_deps->dumper = Alloc<dev::CrashDumper>(crash_dump_dir);
  if (flag->xtrace_to_debug_file) {
    trace_f = debug_f;
  }
  else {
    trace_f = Alloc<util::DebugFile>(mylib::Stderr());
  }
  dir_stack = Alloc<state::DirStack>();
  builtins = Alloc<Dict<int, vm::_Builtin*>>();
  AddPure(builtins, mem, procs, mutable_opts, aliases, search_path, errfmt);
  AddIO(builtins, mem, dir_stack, exec_opts, splitter, parse_ctx, errfmt);
  builtins->set(builtin_i::help, help_builtin);
  arith_ev = Alloc<sh_expr_eval::ArithEvaluator>(mem, exec_opts, parse_ctx, errfmt);
  bool_ev = Alloc<sh_expr_eval::BoolEvaluator>(mem, exec_opts, parse_ctx, errfmt);
  expr_ev = nullptr;
  word_ev = Alloc<word_eval::NormalWordEvaluator>(mem, exec_opts, mutable_opts, splitter, errfmt);
  assign_b = InitAssignmentBuiltins(mem, procs, errfmt);
  cmd_ev = Alloc<cmd_eval::CommandEvaluator>(mem, exec_opts, errfmt, procs, assign_b, arena, cmd_deps);
  shell_ex = Alloc<executor::ShellExecutor>(mem, exec_opts, mutable_opts, procs, builtins, search_path, ext_prog, waiter, job_state, fd_state, errfmt);
  prompt_ev = Alloc<prompt::Evaluator>(lang, parse_ctx, mem);
  tracer = Alloc<dev::Tracer>(parse_ctx, exec_opts, mutable_opts, mem, word_ev, trace_f);
  vm::InitCircularDeps(arith_ev, bool_ev, expr_ev, word_ev, cmd_ev, shell_ex, prompt_ev, tracer);
  builtins->set(builtin_i::printf, Alloc<builtin_printf::Printf>(mem, exec_opts, parse_ctx, arith_ev, errfmt));
  builtins->set(builtin_i::unset, Alloc<builtin_assign::Unset>(mem, exec_opts, procs, parse_ctx, arith_ev, errfmt));
  builtins->set(builtin_i::eval, Alloc<builtin_meta::Eval>(parse_ctx, exec_opts, cmd_ev));
  AddMeta(builtins, shell_ex, mutable_opts, mem, procs, aliases, search_path, errfmt);
  AddBlock(builtins, mem, mutable_opts, dir_stack, cmd_ev, errfmt);
  if (flag->c != nullptr) {
    arena->PushSource(Alloc<source::CFlag>());
    line_reader = reader::StringLineReader(flag->c, arena);
    if (flag->i) {
      mutable_opts->set_interactive();
    }
  }
  else {
    if (flag->i) {
      throw Alloc<NotImplementedError>();
    }
    else {
      if (script_name == nullptr) {
        stdin = mylib::Stdin();
        arena->PushSource(Alloc<source::Stdin>(str131));
        line_reader = Alloc<reader::FileLineReader>(stdin, arena);
      }
      else {
        arena->PushSource(Alloc<source::MainFile>(script_name));
        try {
          f = fd_state->Open(script_name);
        }
        catch (OSError* e) {
          println_stderr(fmt38(script_name, pyutil::strerror(e)));
          return 1;
        }
        line_reader = Alloc<reader::FileLineReader>(f, arena);
      }
    }
  }
  c_parser = parse_ctx->MakeOshParser(line_reader);
  if (exec_opts->interactive()) {
    throw Alloc<NotImplementedError>();
  }
  if (exec_opts->noexec()) {
    status = 0;
    try {
      node = main_loop::ParseWholeFile(c_parser);
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      status = 2;
    }
    if (status == 0) {
      if (flag->parser_mem_dump != nullptr) {
        input_path = fmt39(posix::getpid());
        pyutil::CopyFile(input_path, flag->parser_mem_dump);
      }
      ui::PrintAst(node, flag);
    }
  }
  else {
    if (flag->parser_mem_dump != nullptr) {
      e_usage(str134);
    }
    try {
      status = main_loop::Batch(cmd_ev, c_parser, arena, cmd_eval::IsMainProgram);
    }
    catch (util::UserExit* e) {
      status = e->status;
    }
    box = Alloc<List<int>>(std::initializer_list<int>{status});
    cmd_ev->MaybeRunExitTrap(box);
    status = box->index(0);
  }
  if (flag->runtime_mem_dump != nullptr) {
    input_path = fmt40(posix::getpid());
    pyutil::CopyFile(input_path, flag->runtime_mem_dump);
  }
  return status;
}

NullExecutor::NullExecutor(optview::Exec* exec_opts, state::MutableOpts* mutable_opts, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<int, vm::_Builtin*>* builtins) : vm::_Executor() {
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->procs = procs;
  this->builtins = builtins;
}

int NullExecutor::RunBuiltin(int builtin_id, runtime_asdl::cmd_value__Argv* cmd_val) {
  vm::_Builtin* builtin_func;
  int status;
  StackRoots _roots({&builtin_func});

  builtin_func = this->builtins->index(builtin_id);
  try {
    try {
      status = builtin_func->Run(cmd_val);
    }
    catch (error::Usage* e) {
      status = 2;
    }
  }
  catch (std::exception) { }  return status;
}

int NullExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork) {
  return RunSimpleCommand(cmd_val, do_fork, true);
}

int NullExecutor::RunSimpleCommand(runtime_asdl::cmd_value__Argv* cmd_val, bool do_fork, bool call_procs) {
  List<Str*>* argv;
  int span_id;
  Str* arg0;
  int builtin_id;
  runtime_asdl::Proc* proc_node;
  int status;
  mylib::Writer* f;
  format::TextOutput* ast_f;
  hnode_asdl::hnode_t* tree;
  StackRoots _roots({&argv, &arg0, &proc_node, &f, &ast_f, &tree});

  argv = cmd_val->argv;
  span_id = len(cmd_val->arg_spids) ? cmd_val->arg_spids->index(0) : runtime::NO_SPID;
  arg0 = argv->index(0);
  builtin_id = consts::LookupSpecialBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    return this->RunBuiltin(builtin_id, cmd_val);
  }
  if (call_procs) {
    proc_node = this->procs->get(arg0);
    if (proc_node != nullptr) {
      if ((this->exec_opts->strict_errexit() and this->mutable_opts->ErrExitIsDisabled())) {
        e_die(fmt41(), span_id);
      }
      status = this->cmd_ev->RunProc(proc_node, argv->slice(1));
      return status;
    }
  }
  builtin_id = consts::LookupNormalBuiltin(arg0);
  if (builtin_id != consts::NO_INDEX) {
    return this->RunBuiltin(builtin_id, cmd_val);
  }
  println_stderr(str137);
  f = mylib::Stdout();
  ast_f = Alloc<fmt::TextOutput>(f);
  tree = cmd_val->PrettyTree();
  ast_f->FileHeader();
  fmt::PrintTree(tree, ast_f);
  ast_f->FileFooter();
  ast_f->write(str138);
  return 0;
}

}  // define namespace pure

namespace state {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace option_i = option_asdl::option_i;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__AssocArray;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::lvalue_t;
using runtime_asdl::lvalue__Named;
using runtime_asdl::lvalue__Indexed;
using runtime_asdl::lvalue__Keyed;
using runtime_asdl::scope_e;
using runtime_asdl::scope_t;
Str* _READLINE_DELIMS = str139;
int LINE_ZERO = -2;
int SetReadOnly = (1 << 0);
int ClearReadOnly = (1 << 1);
int SetExport = (1 << 2);
int ClearExport = (1 << 3);
int SetNameref = (1 << 4);
int ClearNameref = (1 << 5);

SearchPath::SearchPath(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(SearchPath)) {
  this->mem = mem;
  this->cache = Alloc<Dict<Str*, Str*>>();
}

Str* SearchPath::Lookup(Str* name) {
  return Lookup(name, true);
}

Str* SearchPath::Lookup(Str* name, bool exec_required) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* path_list;
  Str* full_path;
  bool found;
  StackRoots _roots({&val, &UP_val, &path_list, &full_path});

  if (str_contains(name, str140)) {
    if (path_stat::exists(name)) {
      return name;
    }
    else {
      return nullptr;
    }
  }
  val = this->mem->GetValue(str141);
  UP_val = val;
  if (val->tag_() == value_e::Str) {
    value__Str* val = static_cast<value__Str*>(UP_val);
    path_list = val->s->split(str142);
  }
  else {
    path_list = Alloc<List<Str*>>();
  }
  for (ListIter<Str*> it(path_list); !it.Done(); it.Next()) {
    Str* path_dir = it.Value();
    full_path = os_path::join(path_dir, name);
    if (exec_required) {
      found = posix::access(full_path, posix::X_OK);
    }
    else {
      found = path_stat::exists(full_path);
    }
    if (found) {
      return full_path;
    }
  }
  return nullptr;
}

Str* SearchPath::CachedLookup(Str* name) {
  Str* full_path;
  StackRoots _roots({&full_path});

  if (dict_contains(this->cache, name)) {
    return this->cache->index(name);
  }
  full_path = this->Lookup(name);
  if (full_path != nullptr) {
    this->cache->set(name, full_path);
  }
  return full_path;
}

void SearchPath::MaybeRemoveEntry(Str* name) {
  mylib::dict_remove(this->cache, name);
}

void SearchPath::ClearCache() {
  this->cache->clear();
}

List<Str*>* SearchPath::CachedCommands() {
  return this->cache->values();
}

ctx_Option::ctx_Option(state::MutableOpts* mutable_opts, List<int>* opt_nums, bool b) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Option)) {
  for (ListIter<int> it(opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    mutable_opts->Push(opt_num, b);
  }
  this->mutable_opts = mutable_opts;
  this->opt_nums = opt_nums;
}

ctx_Option::~ctx_Option(){
  for (ListIter<int> it(this->opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    this->mutable_opts->Pop(opt_num);
  }
}

ctx_AssignBuiltin::ctx_AssignBuiltin(state::MutableOpts* mutable_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_AssignBuiltin)) {
  this->do_pop = false;
  if (mutable_opts->Get(option_i::strict_errexit)) {
    mutable_opts->Push(option_i::allow_command_sub, false);
    this->do_pop = true;
  }
  this->mutable_opts = mutable_opts;
}

ctx_AssignBuiltin::~ctx_AssignBuiltin(){
  if (this->do_pop) {
    this->mutable_opts->Pop(option_i::allow_command_sub);
  }
}

ctx_ErrExit::ctx_ErrExit(state::MutableOpts* mutable_opts, bool errexit_val, int span_id) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_ErrExit)) {
  mutable_opts->PushErrExit(errexit_val, span_id);
  this->do_pop = false;
  if (mutable_opts->Get(option_i::strict_errexit)) {
    mutable_opts->Push(option_i::allow_command_sub, false);
    this->do_pop = true;
  }
  this->mutable_opts = mutable_opts;
}

ctx_ErrExit::~ctx_ErrExit(){
  if (this->do_pop) {
    this->mutable_opts->Pop(option_i::allow_command_sub);
  }
  this->mutable_opts->PopErrExit();
}

OptHook::OptHook() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(OptHook)) {
  ;  // pass
}

bool OptHook::OnChange(List<bool>* opt0_array, Str* opt_name, bool b) {
  return true;
}

List<bool>* InitOpts() {
  List<bool>* opt0_array;
  StackRoots _roots({&opt0_array});

  opt0_array = list_repeat(false, option_i::ARRAY_SIZE);
  for (ListIter<int> it(consts::DEFAULT_TRUE); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    opt0_array->set(opt_num, true);
  }
  return opt0_array;
}

Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> MakeOpts(state::Mem* mem, state::OptHook* opt_hook) {
  List<bool>* opt0_array;
  List<bool>* no_stack;
  List<List<bool>*>* opt_stacks;
  optview::Parse* parse_opts;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;
  StackRoots _roots({&opt0_array, &no_stack, &opt_stacks, &parse_opts, &exec_opts, &mutable_opts});

  opt0_array = InitOpts();
  no_stack = nullptr;
  opt_stacks = list_repeat(no_stack, option_i::ARRAY_SIZE);
  parse_opts = Alloc<optview::Parse>(opt0_array, opt_stacks);
  exec_opts = Alloc<optview::Exec>(opt0_array, opt_stacks);
  mutable_opts = Alloc<MutableOpts>(mem, opt0_array, opt_stacks, opt_hook);
  return (Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*>(parse_opts, exec_opts, mutable_opts));
}

int _ShoptOptionNum(Str* opt_name) {
  int opt_num;
  opt_num = match::MatchOption(opt_name);
  if (opt_num == 0) {
    e_usage(fmt42(opt_name));
  }
  return opt_num;
}

int _SetOptionNum(Str* opt_name) {
  int opt_num;
  opt_num = match::MatchOption(opt_name);
  if (opt_num == 0) {
    e_usage(fmt43(opt_name));
  }
  if (!list_contains(consts::SET_OPTION_NUMS, opt_num)) {
    e_usage(fmt44(opt_name));
  }
  return opt_num;
}

MutableOpts::MutableOpts(state::Mem* mem, List<bool>* opt0_array, List<List<bool>*>* opt_stacks, state::OptHook* opt_hook) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(MutableOpts)) {
  this->mem = mem;
  this->opt0_array = opt0_array;
  this->opt_stacks = opt_stacks;
  this->errexit_spid_stack = Alloc<List<int>>();
  this->opt_hook = opt_hook;
}

void MutableOpts::Init() {
  runtime_asdl::value_t* UP_shellopts;
  StackRoots _roots({&UP_shellopts});

  UP_shellopts = this->mem->GetValue(str146);
  if (UP_shellopts->tag_() == value_e::Str) {
    value__Str* shellopts = static_cast<value__Str*>(UP_shellopts);
    this->_InitOptionsFromEnv(shellopts->s);
  }
}

void MutableOpts::_InitOptionsFromEnv(Str* shellopts) {
  List<Str*>* lookup;
  Str* name;
  StackRoots _roots({&lookup, &name});

  lookup = shellopts->split(str147);
  for (ListIter<int> it(consts::SET_OPTION_NUMS); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    name = consts::OptionName(opt_num);
    if (list_contains(lookup, name)) {
      this->_SetOption(name, true);
    }
  }
}

void MutableOpts::Push(int opt_num, bool b) {
  List<bool>* overlay;
  StackRoots _roots({&overlay});

  overlay = this->opt_stacks->index(opt_num);
  if ((overlay == nullptr or len(overlay) == 0)) {
    this->opt_stacks->set(opt_num, Alloc<List<bool>>(std::initializer_list<bool>{b}));
  }
  else {
    overlay->append(b);
  }
}

bool MutableOpts::Pop(int opt_num) {
  List<bool>* overlay;
  StackRoots _roots({&overlay});

  overlay = this->opt_stacks->index(opt_num);
  return overlay->pop();
}

void MutableOpts::PushErrExit(bool b, int spid) {
  this->Push(option_i::errexit, b);
  this->errexit_spid_stack->append(spid);
}

bool MutableOpts::PopErrExit() {
  this->errexit_spid_stack->pop();
  return this->Pop(option_i::errexit);
}

void MutableOpts::PushDynamicScope(bool b) {
  if (!this->Get(option_i::dynamic_scope)) {
    b = false;
  }
  this->Push(option_i::dynamic_scope, b);
}

void MutableOpts::PopDynamicScope() {
  this->Pop(option_i::dynamic_scope);
}

bool MutableOpts::Get(int opt_num) {
  List<bool>* overlay;
  StackRoots _roots({&overlay});

  overlay = this->opt_stacks->index(opt_num);
  if ((overlay == nullptr or len(overlay) == 0)) {
    return this->opt0_array->index(opt_num);
  }
  else {
    return overlay->index(-1);
  }
}

void MutableOpts::_Set(int opt_num, bool b) {
  List<bool>* overlay;
  StackRoots _roots({&overlay});

  overlay = this->opt_stacks->index(opt_num);
  if ((overlay == nullptr or len(overlay) == 0)) {
    this->opt0_array->set(opt_num, b);
  }
  else {
    overlay->set(-1, b);
  }
}

void MutableOpts::set_interactive() {
  this->_Set(option_i::interactive, true);
}

void MutableOpts::set_emacs() {
  this->_Set(option_i::emacs, true);
}

void MutableOpts::set_xtrace(bool b) {
  this->_Set(option_i::xtrace, b);
}

void MutableOpts::_SetArrayByNum(int opt_num, bool b) {
  if ((list_contains(consts::PARSE_OPTION_NUMS, opt_num) and !this->mem->InGlobalNamespace())) {
    e_die(str148);
  }
  this->_Set(opt_num, b);
}

void MutableOpts::SetDeferredErrExit(bool b) {
  this->opt0_array->set(option_i::errexit, b);
}

void MutableOpts::DisableErrExit() {
  this->_Set(option_i::errexit, false);
}

bool MutableOpts::ErrExitIsDisabled() {
  List<bool>* overlay;
  StackRoots _roots({&overlay});

  overlay = this->opt_stacks->index(option_i::errexit);
  if ((overlay == nullptr or len(overlay) == 0)) {
    return false;
  }
  else {
    return (this->opt0_array->index(option_i::errexit) and !overlay->index(-1));
  }
}

int MutableOpts::ErrExitSpanId() {
  return this->errexit_spid_stack->index(0);
}

void MutableOpts::_SetOption(Str* opt_name, bool b) {
  int opt_num;
  bool success;
  opt_num = match::MatchOption(opt_name);
  if (opt_num == option_i::errexit) {
    this->SetDeferredErrExit(b);
  }
  else {
    if ((opt_num == option_i::verbose and b)) {
      println_stderr(str149);
    }
    this->_SetArrayByNum(opt_num, b);
  }
  success = this->opt_hook->OnChange(this->opt0_array, opt_name, b);
}

void MutableOpts::SetOption(Str* opt_name, bool b) {
  runtime_asdl::value_t* UP_val;
  Str* shellopts;
  runtime_asdl::value__Str* new_val;
  List<Str*>* names;
  StackRoots _roots({&UP_val, &shellopts, &new_val, &names});

  this->_SetOption(opt_name, b);
  UP_val = this->mem->GetValue(str150);
  value__Str* val = static_cast<value__Str*>(UP_val);
  shellopts = val->s;
  if (b) {
    if (!str_contains(shellopts, opt_name)) {
      new_val = Alloc<value::Str>(fmt45(shellopts, opt_name));
      this->mem->InternalSetGlobal(str152, new_val);
    }
  }
  else {
    if (str_contains(shellopts, opt_name)) {
      names = Alloc<List<Str*>>();
      for (ListIter<Str*> it(shellopts->split(str153)); !it.Done(); it.Next()) {
        Str* n = it.Value();
        if (!(str_equals(n, opt_name))) {
          names->append(n);
        }
      }
      new_val = Alloc<value::Str>(str154->join(names));
      this->mem->InternalSetGlobal(str155, new_val);
    }
  }
}

void MutableOpts::_SetGroup(List<int>* opt_nums, bool b) {
  bool b2;
  for (ListIter<int> it(opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    b2 = list_contains(consts::DEFAULT_TRUE, opt_num) ? !b : b;
    this->opt0_array->set(opt_num, b2);
  }
  this->SetDeferredErrExit(b);
}

void MutableOpts::SetShoptOption(Str* opt_name, bool b) {
  int opt_num;
  if (str_equals(opt_name, str156)) {
    this->_SetGroup(consts::OIL_BASIC, b);
    return ;
  }
  if (str_equals(opt_name, str157)) {
    this->_SetGroup(consts::OIL_ALL, b);
    return ;
  }
  if (str_equals(opt_name, str158)) {
    this->_SetGroup(consts::STRICT_ALL, b);
    return ;
  }
  opt_num = _ShoptOptionNum(opt_name);
  if (opt_num == option_i::errexit) {
    this->SetDeferredErrExit(b);
    return ;
  }
  this->_SetArrayByNum(opt_num, b);
}

void MutableOpts::ShowOptions(List<Str*>* opt_names) {
  int opt_num;
  bool b;
  StackRoots _roots({&opt_names});

  if (len(opt_names) == 0) {
    opt_names = Alloc<List<Str*>>();
    for (ListIter<int> it(consts::SET_OPTION_NUMS); !it.Done(); it.Next()) {
      int i = it.Value();
      opt_names->append(consts::OptionName(i));
    }
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* opt_name = it.Value();
    opt_num = _SetOptionNum(opt_name);
    b = this->Get(opt_num);
    print(fmt46(b ? str160 : str161, opt_name));
  }
}

void MutableOpts::ShowShoptOptions(List<Str*>* opt_names) {
  List<int>* opt_nums;
  int index;
  bool b;
  StackRoots _roots({&opt_nums});

  opt_nums = Alloc<List<int>>();
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* opt_name = it.Value();
    if (str_equals(opt_name, str162)) {
      opt_nums->extend(consts::OIL_BASIC);
    }
    else {
      if (str_equals(opt_name, str163)) {
        opt_nums->extend(consts::OIL_ALL);
      }
      else {
        if (str_equals(opt_name, str164)) {
          opt_nums->extend(consts::STRICT_ALL);
        }
        else {
          index = match::MatchOption(opt_name);
          if (index == 0) {
            e_usage(fmt47(opt_name));
          }
          opt_nums->append(index);
        }
      }
    }
  }
  if (len(opt_names) == 0) {
    opt_nums->extend(consts::VISIBLE_SHOPT_NUMS);
  }
  for (ListIter<int> it(opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    b = this->opt0_array->index(opt_num);
    print(fmt48(b ? str167 : str168, consts::OptionName(opt_num)));
  }
}

_ArgFrame::_ArgFrame(List<Str*>* argv) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_ArgFrame)) {
  this->argv = argv;
  this->num_shifted = 0;
}

runtime_asdl::value_t* _ArgFrame::GetArgNum(int arg_num) {
  int index;
  index = ((this->num_shifted + arg_num) - 1);
  if (index >= len(this->argv)) {
    return Alloc<value::Undef>();
  }
  return Alloc<value::Str>(this->argv->index(index));
}

List<Str*>* _ArgFrame::GetArgv() {
  return this->argv->slice(this->num_shifted);
}

int _ArgFrame::GetNumArgs() {
  return (len(this->argv) - this->num_shifted);
}

void _ArgFrame::SetArgv(List<Str*>* argv) {
  this->argv = argv;
  this->num_shifted = 0;
}

DirStack::DirStack() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(DirStack)) {
  this->stack = Alloc<List<Str*>>();
  this->Reset();
}

void DirStack::Reset() {
  this->stack->clear();
  this->stack->append(posix::getcwd());
}

void DirStack::Push(Str* entry) {
  this->stack->append(entry);
}

Str* DirStack::Pop() {
  if (len(this->stack) <= 1) {
    return nullptr;
  }
  this->stack->pop();
  return this->stack->index(-1);
}

List<Str*>* DirStack::Iter() {
  List<Str*>* ret;
  StackRoots _roots({&ret});

  ret = Alloc<List<Str*>>();
  ret->extend(this->stack);
  ret->reverse();
  return ret;
}

Str* _GetWorkingDir() {
  try {
    return posix::getcwd();
  }
  catch (OSError* e) {
    e_die(fmt49(pyutil::strerror(e)));
  }
}

DebugFrame::DebugFrame(Str* bash_source, Str* func_name, Str* source_name, int call_spid, int argv_i, int var_i) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(DebugFrame)) {
  this->bash_source = bash_source;
  this->func_name = func_name;
  this->source_name = source_name;
  this->call_spid = call_spid;
  this->argv_i = argv_i;
  this->var_i = var_i;
}

void _InitDefaults(state::Mem* mem) {
  SetGlobalString(mem, str171, split::DEFAULT_IFS);
  SetGlobalString(mem, str172, str(posix::getuid()));
  SetGlobalString(mem, str173, str(posix::geteuid()));
  SetGlobalString(mem, str174, str(posix::getppid()));
  SetGlobalString(mem, str175, libc::gethostname());
  SetGlobalString(mem, str176, pyos::OsType());
  SetGlobalString(mem, str177, str178);
  SetGlobalString(mem, str179, str180);
  SetGlobalString(mem, str181, _READLINE_DELIMS);
}

void _InitVarsFromEnv(state::Mem* mem, Dict<Str*, Str*>* environ) {
  runtime_asdl::value_t* val;
  StackRoots _roots({&val});

  for (DictIter<Str*, Str*> it(environ); !it.Done(); it.Next()) {
    Str* n = it.Key();
    Str* v = it.Value();
    mem->SetValue(Alloc<lvalue::Named>(n), Alloc<value::Str>(v), scope_e::GlobalOnly, SetExport);
  }
  val = mem->GetValue(str182);
  if (val->tag_() == value_e::Undef) {
    SetGlobalString(mem, str183, str184);
  }
  mem->SetValue(Alloc<lvalue::Named>(str185), nullptr, scope_e::GlobalOnly, SetReadOnly);
  val = mem->GetValue(str186);
  if (val->tag_() == value_e::Undef) {
    SetGlobalString(mem, str187, _GetWorkingDir());
  }
  mem->SetValue(Alloc<lvalue::Named>(str188), nullptr, scope_e::GlobalOnly, SetExport);
}

void InitMem(state::Mem* mem, Dict<Str*, Str*>* environ, Str* version_str) {
  runtime_asdl::value_t* val;
  Str* pwd;
  StackRoots _roots({&val, &pwd});

  SetGlobalString(mem, str189, version_str);
  _InitDefaults(mem);
  _InitVarsFromEnv(mem, environ);
  val = mem->GetValue(str190);
  pwd = static_cast<value__Str*>(val)->s;
  mem->SetPwd(pwd);
}

ctx_Call::ctx_Call(state::Mem* mem, state::MutableOpts* mutable_opts, runtime_asdl::Proc* proc, List<Str*>* argv) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Call)) {
  mem->PushCall(proc->name, proc->name_spid, argv);
  mutable_opts->PushDynamicScope(proc->dynamic_scope);
  this->mem = mem;
  this->mutable_opts = mutable_opts;
}

ctx_Call::~ctx_Call(){
  this->mutable_opts->PopDynamicScope();
  this->mem->PopCall();
}

ctx_Temp::ctx_Temp(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Temp)) {
  mem->PushTemp();
  this->mem = mem;
}

ctx_Temp::~ctx_Temp(){
  this->mem->PopTemp();
}

ctx_Status::ctx_Status(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Status)) {
  int last = mem->last_status->index(-1);
  mem->last_status->append(last);
  mem->pipe_status->append(Alloc<List<int>>());
  mem->process_sub_status->append(Alloc<List<int>>());
  this->mem = mem;
}

ctx_Status::~ctx_Status(){
  this->mem->last_status->pop();
  this->mem->pipe_status->pop();
  this->mem->process_sub_status->pop();
}

Mem::Mem(Str* dollar0, List<Str*>* argv, alloc::Arena* arena, List<state::DebugFrame*>* debug_stack) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Mem)) {
  this->exec_opts = nullptr;
  this->dollar0 = dollar0;
  this->argv_stack = Alloc<List<state::_ArgFrame*>>(std::initializer_list<state::_ArgFrame*>{Alloc<_ArgFrame>(argv)});
  this->var_stack = Alloc<List<Dict<Str*, runtime_asdl::cell*>*>>(std::initializer_list<Dict<Str*, runtime_asdl::cell*>*>{Alloc<Dict<Str*, runtime_asdl::cell*>>()});
  this->arena = arena;
  this->debug_stack = debug_stack;
  this->current_spid = runtime::NO_SPID;
  this->line_num = Alloc<value::Str>(str191);
  this->last_status = Alloc<List<int>>(std::initializer_list<int>{0});
  this->pipe_status = Alloc<List<List<int>*>>(std::initializer_list<List<int>*>{Alloc<List<int>>()});
  this->process_sub_status = Alloc<List<List<int>*>>(std::initializer_list<List<int>*>{Alloc<List<int>>()});
  this->last_bg_pid = -1;
  this->root_pid = posix::getpid();
  this->regex_matches = Alloc<List<Str*>>();
}

void Mem::SetPwd(Str* pwd) {
  this->pwd = pwd;
}

bool Mem::InGlobalNamespace() {
  return len(this->argv_stack) == 1;
}

Tuple3<void*, void*, void*> Mem::Dump() {
  throw Alloc<AssertionError>();
}

void Mem::SetCurrentSpanId(int span_id) {
  if (span_id == runtime::NO_SPID) {
    println_stderr(str198);
    return ;
  }
  this->current_spid = span_id;
}

int Mem::CurrentSpanId() {
  return this->current_spid;
}

int Mem::LastStatus() {
  return this->last_status->index(-1);
}

List<int>* Mem::PipeStatus() {
  return this->pipe_status->index(-1);
}

void Mem::SetLastStatus(int x) {
  this->last_status->set(-1, x);
}

void Mem::SetPipeStatus(List<int>* x) {
  this->pipe_status->set(-1, x);
}

void Mem::SetProcessSubStatus(List<int>* x) {
  this->process_sub_status->set(-1, x);
}

void Mem::PushCall(Str* func_name, int def_spid, List<Str*>* argv) {
  syntax_asdl::line_span* span;
  Str* source_str;
  StackRoots _roots({&span, &source_str});

  this->argv_stack->append(Alloc<_ArgFrame>(argv));
  this->var_stack->append(Alloc<Dict<Str*, runtime_asdl::cell*>>());
  span = this->arena->GetLineSpan(def_spid);
  source_str = this->arena->GetLineSourceString(span->line_id);
  this->_PushDebugStack(source_str, func_name, nullptr);
}

void Mem::PopCall() {
  this->_PopDebugStack();
  this->var_stack->pop();
  this->argv_stack->pop();
}

void Mem::PushSource(Str* source_name, List<Str*>* argv) {
  if (len(argv)) {
    this->argv_stack->append(Alloc<_ArgFrame>(argv));
  }
  this->_PushDebugStack(source_name, nullptr, source_name);
}

void Mem::PopSource(List<Str*>* argv) {
  this->_PopDebugStack();
  if (len(argv)) {
    this->argv_stack->pop();
  }
}

void Mem::PushTemp() {
  this->var_stack->append(Alloc<Dict<Str*, runtime_asdl::cell*>>());
  this->_PushDebugStack(nullptr, nullptr, nullptr);
}

void Mem::PopTemp() {
  this->_PopDebugStack();
  this->var_stack->pop();
}

Dict<Str*, runtime_asdl::cell*>* Mem::TopNamespace() {
  return this->var_stack->index(-1);
}

void Mem::_PushDebugStack(Str* bash_source, Str* func_name, Str* source_name) {
  int argv_i;
  int var_i;
  argv_i = (len(this->argv_stack) - 1);
  var_i = (len(this->var_stack) - 1);
  this->debug_stack->append(Alloc<DebugFrame>(bash_source, func_name, source_name, this->current_spid, argv_i, var_i));
}

void Mem::_PopDebugStack() {
  this->debug_stack->pop();
}

int Mem::Shift(int n) {
  state::_ArgFrame* frame;
  int num_args;
  StackRoots _roots({&frame});

  frame = this->argv_stack->index(-1);
  num_args = len(frame->argv);
  if ((frame->num_shifted + n) <= num_args) {
    frame->num_shifted += n;
    return 0;
  }
  else {
    return 1;
  }
}

runtime_asdl::value__Str* Mem::GetArg0() {
  return Alloc<value::Str>(this->dollar0);
}

runtime_asdl::value_t* Mem::GetArgNum(int arg_num) {
  if (arg_num == 0) {
    return Alloc<value::Str>(this->dollar0);
  }
  return this->argv_stack->index(-1)->GetArgNum(arg_num);
}

List<Str*>* Mem::GetArgv() {
  return this->argv_stack->index(-1)->GetArgv();
}

void Mem::SetArgv(List<Str*>* argv) {
  this->argv_stack->index(-1)->SetArgv(argv);
}

runtime_asdl::value_t* Mem::GetSpecialVar(int op_id) {
  int n;
  if (op_id == Id::VSub_Bang) {
    n = this->last_bg_pid;
    if (n == -1) {
      return Alloc<value::Undef>();
    }
  }
  else {
    if (op_id == Id::VSub_QMark) {
      n = this->last_status->index(-1);
    }
    else {
      if (op_id == Id::VSub_Pound) {
        n = this->argv_stack->index(-1)->GetNumArgs();
      }
      else {
        if (op_id == Id::VSub_Dollar) {
          n = this->root_pid;
        }
        else {
          throw Alloc<NotImplementedError>(op_id);
        }
      }
    }
  }
  return Alloc<value::Str>(str(n));
}

Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> Mem::_ResolveNameOnly(Str* name, runtime_asdl::scope_t which_scopes) {
  Dict<Str*, runtime_asdl::cell*>* name_map;
  runtime_asdl::cell* cell;
  runtime_asdl::cell* no_cell;
  StackRoots _roots({&name_map, &cell, &no_cell});

  if (which_scopes == scope_e::Dynamic) {
    for (int i = (len(this->var_stack) - 1); i > -1; i += -1) {
      name_map = this->var_stack->index(i);
      if (dict_contains(name_map, name)) {
        cell = name_map->index(name);
        return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(cell, name_map));
      }
    }
    no_cell = nullptr;
    return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(no_cell, this->var_stack->index(0)));
  }
  else {
    if (which_scopes == scope_e::LocalOnly) {
      name_map = this->var_stack->index(-1);
      return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
    }
    else {
      if (which_scopes == scope_e::GlobalOnly) {
        name_map = this->var_stack->index(0);
        return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
      }
      else {
        if (which_scopes == scope_e::LocalOrGlobal) {
          name_map = this->var_stack->index(-1);
          cell = name_map->get(name);
          if (cell) {
            return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(cell, name_map));
          }
          name_map = this->var_stack->index(0);
          return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
}

Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> Mem::_ResolveNameOrRef(Str* name, runtime_asdl::scope_t which_scopes) {
  return _ResolveNameOrRef(name, which_scopes, false);
}

Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> Mem::_ResolveNameOrRef(Str* name, runtime_asdl::scope_t which_scopes, bool ref_required) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  Str* new_name;
  Str* cell_name;
  StackRoots _roots({&cell, &name_map, &val, &UP_val, &new_name, &cell_name});

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup0 = this->_ResolveNameOnly(name, which_scopes);
  cell = tup0.at0();
  name_map = tup0.at1();
  if ((!cell or !cell->nameref)) {
    if (ref_required) {
      e_die(fmt50(name));
    }
    return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
  }
  val = cell->val;
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      if (this->exec_opts->strict_nameref()) {
        e_die(fmt51(name));
      }
      else {
        return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
      }
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      new_name = val->s;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  if (!match::IsValidVarName(new_name)) {
    if (this->exec_opts->strict_nameref()) {
      e_die(fmt52(name, new_name));
    }
    else {
      cell->nameref = false;
      return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
    }
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup1 = this->_ResolveNameOrRef(new_name, which_scopes);
  cell = tup1.at0();
  name_map = tup1.at1();
  cell_name = tup1.at2();
  return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, cell_name));
}

bool Mem::IsAssocArray(Str* name) {
  runtime_asdl::cell* cell;
  StackRoots _roots({&cell});

  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup2 = this->_ResolveNameOrRef(name, this->ScopesForReading());
  cell = tup2.at0();
  if (cell) {
    if (cell->val->tag_() == value_e::AssocArray) {
      return true;
    }
  }
  return false;
}

void Mem::_CheckOilKeyword(int keyword_id, Str* name, runtime_asdl::cell* cell) {
  if ((cell and (keyword_id == Id::KW_Var || keyword_id == Id::KW_Const))) {
    e_die(fmt53(name));
  }
  if ((cell == nullptr and (keyword_id == Id::KW_Set || keyword_id == Id::KW_SetLocal || keyword_id == Id::KW_SetGlobal))) {
    e_die(fmt54(name));
  }
}

void Mem::_DisallowNamerefCycle(Str* name, runtime_asdl::scope_t which_scopes, List<Str*>* ref_trail) {
  runtime_asdl::cell* cell;
  runtime_asdl::value_t* val;
  Str* new_name;
  StackRoots _roots({&cell, &val, &new_name});

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup3 = this->_ResolveNameOnly(name, which_scopes);
  cell = tup3.at0();
  if ((!cell or !cell->nameref)) {
    return ;
  }
  val = cell->val;
  if (val->tag_() != value_e::Str) {
    return ;
  }
  value__Str* str_val = static_cast<value__Str*>(val);
  new_name = str_val->s;
  if (list_contains(ref_trail, new_name)) {
    e_die(fmt55(str205->join(ref_trail)));
  }
  ref_trail->append(new_name);
  this->_DisallowNamerefCycle(new_name, which_scopes, ref_trail);
}

void Mem::SetValue(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t which_scopes) {
  SetValue(lval, val, which_scopes, 0);
}

void Mem::SetValue(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t which_scopes, int flags) {
  int keyword_id;
  bool ref_required;
  runtime_asdl::lvalue_t* UP_lval;
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  Str* cell_name;
  List<Str*>* ref_trail;
  int left_spid;
  runtime_asdl::value_t* UP_cell_val;
  List<Str*>* strs;
  int n;
  int index;
  StackRoots _roots({&UP_lval, &cell, &name_map, &cell_name, &val, &ref_trail, &UP_cell_val, &strs});

  keyword_id = (flags >> 8);
  ref_required = keyword_id == Id::KW_SetRef;
  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      if (keyword_id == Id::KW_SetRef) {
        lval->name = str_concat(str206, lval->name);
      }
      if (((flags & SetNameref) or (flags & ClearNameref))) {
        Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup4 = this->_ResolveNameOnly(lval->name, which_scopes);
        cell = tup4.at0();
        name_map = tup4.at1();
        cell_name = lval->name;
      }
      else {
        Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup5 = this->_ResolveNameOrRef(lval->name, which_scopes, ref_required);
        cell = tup5.at0();
        name_map = tup5.at1();
        cell_name = tup5.at2();
      }
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (cell) {
        if ((flags & ClearExport)) {
          cell->exported = false;
        }
        if ((flags & ClearReadOnly)) {
          cell->readonly = false;
        }
        if ((flags & ClearNameref)) {
          cell->nameref = false;
        }
        if (val != nullptr) {
          if (cell->readonly) {
            e_die(fmt56(lval->name));
          }
          cell->val = val;
        }
        if ((flags & SetExport)) {
          cell->exported = true;
        }
        if ((flags & SetReadOnly)) {
          cell->readonly = true;
        }
        if ((flags & SetNameref)) {
          cell->nameref = true;
        }
      }
      else {
        if (val == nullptr) {
          val = Alloc<value::Undef>();
        }
        cell = Alloc<runtime_asdl::cell>(to_bool((flags & SetExport)), to_bool((flags & SetReadOnly)), to_bool((flags & SetNameref)), val);
        name_map->set(cell_name, cell);
      }
      if ((cell->val->tag_() != value_e::Undef && cell->val->tag_() != value_e::Str)) {
        if (cell->exported) {
          e_die(str208);
        }
        if (cell->nameref) {
          e_die(str209);
        }
      }
      if (cell->nameref) {
        ref_trail = Alloc<List<Str*>>();
        this->_DisallowNamerefCycle(cell_name, which_scopes, ref_trail);
      }
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      value__Str* rval = static_cast<value__Str*>(val);
      left_spid = len(lval->spids) ? lval->spids->index(0) : runtime::NO_SPID;
      Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup6 = this->_ResolveNameOrRef(lval->name, which_scopes, ref_required);
      cell = tup6.at0();
      name_map = tup6.at1();
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (!cell) {
        this->_BindNewArrayWithEntry(name_map, lval, rval, flags);
        return ;
      }
      if (cell->readonly) {
        e_die(fmt57(), left_spid);
      }
      UP_cell_val = cell->val;
      switch (UP_cell_val->tag_()) {
        case value_e::Undef: {
          this->_BindNewArrayWithEntry(name_map, lval, rval, flags);
          return ;
        }
          break;
        case value_e::Str: {
          e_die(fmt58(), left_spid);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* cell_val = static_cast<value__MaybeStrArray*>(UP_cell_val);
          strs = cell_val->strs;
          n = len(strs);
          index = lval->index;
          if (index < 0) {
            index += n;
          }
          if ((0 <= index and index < n)) {
            strs->set(index, rval->s);
          }
          else {
            n = ((index - len(strs)) + 1);
            for (int i = 0; i < n; ++i) {
              strs->append(nullptr);
            }
            strs->set(lval->index, rval->s);
          }
          return ;
        }
          break;
      }
      e_die(fmt59(ui::ValType(cell->val)), left_spid);
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      value__Str* rval = static_cast<value__Str*>(val);
      left_spid = len(lval->spids) ? lval->spids->index(0) : runtime::NO_SPID;
      Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup7 = this->_ResolveNameOrRef(lval->name, which_scopes, ref_required);
      cell = tup7.at0();
      name_map = tup7.at1();
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (cell->readonly) {
        e_die(fmt60(), left_spid);
      }
      value__AssocArray* cell_val2 = static_cast<value__AssocArray*>(cell->val);
      cell_val2->d->set(lval->key, rval->s);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

void Mem::_BindNewArrayWithEntry(Dict<Str*, runtime_asdl::cell*>* name_map, runtime_asdl::lvalue__Indexed* lval, runtime_asdl::value__Str* val, int flags) {
  Str* no_str;
  List<Str*>* items;
  runtime_asdl::value__MaybeStrArray* new_value;
  bool readonly;
  StackRoots _roots({&no_str, &items, &new_value});

  no_str = nullptr;
  items = list_repeat(no_str, lval->index);
  items->append(val->s);
  new_value = Alloc<value::MaybeStrArray>(items);
  readonly = to_bool((flags & SetReadOnly));
  name_map->set(lval->name, Alloc<runtime_asdl::cell>(false, readonly, false, new_value));
}

void Mem::InternalSetGlobal(Str* name, runtime_asdl::value_t* new_val) {
  runtime_asdl::cell* cell;
  StackRoots _roots({&cell});

  cell = this->var_stack->index(0)->index(name);
  cell->val = new_val;
}

runtime_asdl::value_t* Mem::GetValue(Str* name) {
  return GetValue(name, scope_e::Shopt);
}

runtime_asdl::value_t* Mem::GetValue(Str* name, runtime_asdl::scope_t which_scopes) {
  List<Str*>* strs;
  syntax_asdl::line_span* span;
  int line_num;
  runtime_asdl::cell* cell;
  StackRoots _roots({&which_scopes, &strs, &span, &cell});

  if (which_scopes == scope_e::Shopt) {
    which_scopes = this->ScopesForReading();
  }
  if (str_equals(name, str214)) {
    return Alloc<value::MaybeStrArray>(this->GetArgv());
  }
  if (str_equals(name, str215)) {
    return Alloc<value::Str>(str(this->last_status->index(-1)));
  }
  if ((str_equals(name, str216) || str_equals(name, str217))) {
    return Alloc<value::MaybeStrArray>();
  }
  if (str_equals(name, str218)) {
    return Alloc<value::MaybeStrArray>();
  }
  if (str_equals(name, str219)) {
    strs = Alloc<List<Str*>>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->func_name != nullptr) {
        strs->append(frame->func_name);
      }
      if (frame->source_name != nullptr) {
        strs->append(str220);
      }
    }
    return Alloc<value::MaybeStrArray>(strs);
  }
  if (str_equals(name, str221)) {
    strs = Alloc<List<Str*>>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->bash_source != nullptr) {
        strs->append(frame->bash_source);
      }
    }
    return Alloc<value::MaybeStrArray>(strs);
  }
  if (str_equals(name, str222)) {
    strs = Alloc<List<Str*>>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->call_spid == runtime::NO_SPID) {
        continue;
      }
      if (frame->call_spid == LINE_ZERO) {
        strs->append(str223);
        continue;
      }
      span = this->arena->GetLineSpan(frame->call_spid);
      line_num = this->arena->GetLineNumber(span->line_id);
      strs->append(str(line_num));
    }
    return Alloc<value::MaybeStrArray>(strs);
  }
  if (str_equals(name, str224)) {
    span = this->arena->GetLineSpan(this->current_spid);
    this->line_num->s = str(this->arena->GetLineNumber(span->line_id));
    return this->line_num;
  }
  if (str_equals(name, str225)) {
    return Alloc<value::Str>(str(posix::getpid()));
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup8 = this->_ResolveNameOrRef(name, which_scopes);
  cell = tup8.at0();
  if (cell) {
    return cell->val;
  }
  return Alloc<value::Undef>();
}

runtime_asdl::cell* Mem::GetCell(Str* name) {
  return GetCell(name, scope_e::Shopt);
}

runtime_asdl::cell* Mem::GetCell(Str* name, runtime_asdl::scope_t which_scopes) {
  runtime_asdl::cell* cell;
  StackRoots _roots({&which_scopes, &cell});

  if (which_scopes == scope_e::Shopt) {
    which_scopes = this->ScopesForReading();
  }
  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup9 = this->_ResolveNameOnly(name, which_scopes);
  cell = tup9.at0();
  return cell;
}

bool Mem::Unset(runtime_asdl::lvalue_t* lval, bool strict) {
  runtime_asdl::lvalue_t* UP_lval;
  Str* var_name;
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  Str* cell_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* strs;
  int n;
  int last_index;
  int index;
  StackRoots _roots({&UP_lval, &var_name, &cell, &name_map, &cell_name, &val, &UP_val, &strs});

  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup10 = this->_ResolveNameOrRef(var_name, scope_e::Dynamic);
  cell = tup10.at0();
  name_map = tup10.at1();
  cell_name = tup10.at2();
  if (!cell) {
    return false;
  }
  if (cell->readonly) {
    throw Alloc<error::Runtime>(fmt61(var_name));
  }
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      name_map->remove(cell_name);
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      val = cell->val;
      UP_val = val;
      if (val->tag_() != value_e::MaybeStrArray) {
        throw Alloc<error::Runtime>(fmt62(var_name));
      }
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      strs = val->strs;
      n = len(strs);
      last_index = (n - 1);
      index = lval->index;
      if (index < 0) {
        index += n;
      }
      if (index == last_index) {
        strs->pop();
      }
      else {
        if ((0 <= index and index < last_index)) {
          strs->set(index, nullptr);
        }
        else {
          ;  // pass
        }
      }
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      val = cell->val;
      UP_val = val;
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      mylib::dict_remove(val->d, lval->key);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return true;
}

runtime_asdl::scope_t Mem::ScopesForReading() {
  return this->exec_opts->dynamic_scope() ? scope_e::Dynamic : scope_e::LocalOrGlobal;
}

runtime_asdl::scope_t Mem::ScopesForWriting() {
  return this->exec_opts->dynamic_scope() ? scope_e::Dynamic : scope_e::LocalOnly;
}

bool Mem::ClearFlag(Str* name, int flag) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  StackRoots _roots({&cell, &name_map});

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup11 = this->_ResolveNameOnly(name, this->ScopesForReading());
  cell = tup11.at0();
  name_map = tup11.at1();
  if (cell) {
    if ((flag & ClearExport)) {
      cell->exported = false;
    }
    if ((flag & ClearNameref)) {
      cell->nameref = false;
    }
    return true;
  }
  else {
    return false;
  }
}

Dict<Str*, Str*>* Mem::GetExported() {
  Dict<Str*, Str*>* exported;
  StackRoots _roots({&exported});

  exported = Alloc<Dict<Str*, Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      if ((cell->exported and cell->val->tag_() == value_e::Str)) {
        value__Str* val = static_cast<value__Str*>(cell->val);
        exported->set(name, val->s);
      }
    }
  }
  return exported;
}

List<Str*>* Mem::VarNames() {
  List<Str*>* ret;
  StackRoots _roots({&ret});

  ret = Alloc<List<Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      ret->append(name);
    }
  }
  return ret;
}

List<Str*>* Mem::VarNamesStartingWith(Str* prefix) {
  List<Str*>* names;
  StackRoots _roots({&names});

  names = Alloc<List<Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      if (name->startswith(prefix)) {
        names->append(name);
      }
    }
  }
  return names;
}

Dict<Str*, Str*>* Mem::GetAllVars() {
  Dict<Str*, Str*>* result;
  runtime_asdl::value_t* val;
  StackRoots _roots({&result, &val});

  result = Alloc<Dict<Str*, Str*>>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      val = cell->val;
      if (val->tag_() == value_e::Str) {
        value__Str* str_val = static_cast<value__Str*>(val);
        result->set(name, str_val->s);
      }
    }
  }
  return result;
}

Dict<Str*, runtime_asdl::cell*>* Mem::GetAllCells(runtime_asdl::scope_t which_scopes) {
  Dict<Str*, runtime_asdl::cell*>* result;
  List<Dict<Str*, runtime_asdl::cell*>*>* scopes;
  StackRoots _roots({&result, &scopes});

  result = Alloc<Dict<Str*, runtime_asdl::cell*>>();
  if (which_scopes == scope_e::Dynamic) {
    scopes = this->var_stack;
  }
  else {
    if (which_scopes == scope_e::LocalOnly) {
      scopes = this->var_stack->slice(-1);
    }
    else {
      if (which_scopes == scope_e::GlobalOnly) {
        scopes = this->var_stack->slice(0, 1);
      }
      else {
        if (which_scopes == scope_e::LocalOrGlobal) {
          scopes = Alloc<List<Dict<Str*, runtime_asdl::cell*>*>>(std::initializer_list<Dict<Str*, runtime_asdl::cell*>*>{this->var_stack->index(0)});
          if (len(this->var_stack) > 1) {
            scopes->append(this->var_stack->index(-1));
          }
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(scopes); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      result->set(name, cell);
    }
  }
  return result;
}

bool Mem::IsGlobalScope() {
  return len(this->var_stack) == 1;
}

void Mem::ClearMatches() {
  this->regex_matches->clear();
}

void Mem::SetMatches(List<Str*>* matches) {
  this->regex_matches = matches;
}

Str* Mem::GetMatch(int i) {
  if (i < len(this->regex_matches)) {
    return this->regex_matches->index(i);
  }
  else {
    return nullptr;
  }
}

void SetLocalShopt(state::Mem* mem, runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val) {
  SetLocalShopt(mem, lval, val, 0);
}

void SetLocalShopt(state::Mem* mem, runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, int flags) {
  runtime_asdl::scope_t which_scopes;
  StackRoots _roots({&which_scopes});

  which_scopes = mem->ScopesForWriting();
  mem->SetValue(lval, val, which_scopes, flags);
}

void SetRef(state::Mem* mem, runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val) {
  mem->SetValue(lval, val, scope_e::Dynamic);
}

void SetRefString(state::Mem* mem, Str* name, Str* s) {
  mem->SetValue(Alloc<lvalue::Named>(name), Alloc<value::Str>(s), scope_e::Dynamic);
}

void SetRefArray(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetValue(Alloc<lvalue::Named>(name), Alloc<value::MaybeStrArray>(a), scope_e::Dynamic);
}

void SetGlobalString(state::Mem* mem, Str* name, Str* s) {
  runtime_asdl::value__Str* val;
  StackRoots _roots({&val});

  val = Alloc<value::Str>(s);
  mem->SetValue(Alloc<lvalue::Named>(name), val, scope_e::GlobalOnly);
}

void SetGlobalArray(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetValue(Alloc<lvalue::Named>(name), Alloc<value::MaybeStrArray>(a), scope_e::GlobalOnly);
}

void ExportGlobalString(state::Mem* mem, Str* name, Str* s) {
  runtime_asdl::value__Str* val;
  StackRoots _roots({&val});

  val = Alloc<value::Str>(s);
  mem->SetValue(Alloc<lvalue::Named>(name), val, scope_e::GlobalOnly, SetExport);
}

Str* GetString(state::Mem* mem, Str* name) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  StackRoots _roots({&val, &UP_val});

  val = mem->GetValue(name);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      throw Alloc<error::Runtime>(fmt63(name));
    }
      break;
    case value_e::Str: {
      return static_cast<value__Str*>(UP_val)->s;
    }
      break;
    default: {
      throw Alloc<error::Runtime>(fmt64(name));
    }
  }
}

Str* MaybeString(state::Mem* mem, Str* name) {
  try {
    return GetString(mem, name);
  }
  catch (error::Runtime*) {
    return nullptr;
  }
}

int GetInteger(state::Mem* mem, Str* name) {
  runtime_asdl::value_t* val;
  Str* s;
  int i;
  StackRoots _roots({&val, &s});

  val = mem->GetValue(name);
  if (val->tag_() != value_e::Str) {
    throw Alloc<error::Runtime>(fmt65(name, ui::ValType(val)));
  }
  s = static_cast<value__Str*>(val)->s;
  try {
    i = to_int(s);
  }
  catch (ValueError*) {
    throw Alloc<error::Runtime>(fmt66(name, s));
  }
  return i;
}

}  // define namespace state

namespace ui {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
using syntax_asdl::command_t;
using syntax_asdl::command_str;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__Stdin;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;
using syntax_asdl::source__EvalArg;
using syntax_asdl::source__Alias;
using syntax_asdl::source__LValue;
using runtime_asdl::value_str;
using runtime_asdl::value_t;
namespace fmt = format;
using mylib::NewStr;

Str* ValType(runtime_asdl::value_t* val) {
  return NewStr(value_str(val->tag_()));
}

Str* CommandType(syntax_asdl::command_t* cmd) {
  return NewStr(command_str(cmd->tag_()));
}

Str* PrettyId(int id_) {
  return NewStr(Id_str(id_));
}

Str* PrettyToken(syntax_asdl::Token* tok, alloc::Arena* arena) {
  syntax_asdl::line_span* span;
  Str* line;
  Str* val;
  StackRoots _roots({&span, &line, &val});

  if (tok->id == Id::Eof_Real) {
    return str232;
  }
  span = arena->GetLineSpan(tok->span_id);
  line = arena->GetLine(span->line_id);
  val = line->slice(span->col, (span->col + span->length));
  return repr(val);
}

Str* PrettyDir(Str* dir_name, Str* home_dir) {
  if (home_dir != nullptr) {
    if ((str_equals(dir_name, home_dir) or dir_name->startswith(str_concat(home_dir, str233)))) {
      return str_concat(str234, dir_name->slice(len(home_dir)));
    }
  }
  return dir_name;
}

void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f) {
  f->write(str235);
  f->write(line->rstrip());
  f->write(str236);
  for (StrIter it(line->slice(0, col)); !it.Done(); it.Next()) {
    Str* c = it.Value();
    f->write(str_equals(c, str237) ? str238 : str239);
  }
  f->write(str240);
  f->write(str_repeat(str241, (length - 1)));
  f->write(str242);
}

void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f) {
  syntax_asdl::line_span* line_span;
  int orig_col;
  int line_id;
  syntax_asdl::source_t* src;
  Str* line;
  int line_num;
  syntax_asdl::source_t* UP_src;
  Str* source_str;
  syntax_asdl::line_span* span2;
  Str* line2;
  Str* outer_source;
  int lbracket_col;
  syntax_asdl::line_span* span;
  StackRoots _roots({&line_span, &src, &line, &UP_src, &source_str, &span2, &line2, &outer_source, &span});

  line_span = arena->GetLineSpan(span_id);
  orig_col = line_span->col;
  line_id = line_span->line_id;
  src = arena->GetLineSource(line_id);
  line = arena->GetLine(line_id);
  line_num = arena->GetLineNumber(line_id);
  if (src->tag_() != source_e::LValue) {
    _PrintCodeExcerpt(line, line_span->col, line_span->length, f);
  }
  UP_src = src;
  switch (src->tag_()) {
    case source_e::Interactive: {
      source_str = str243;
    }
      break;
    case source_e::CFlag: {
      source_str = str244;
    }
      break;
    case source_e::Stdin: {
      source__Stdin* src = static_cast<source__Stdin*>(UP_src);
      source_str = fmt67(src->comment);
    }
      break;
    case source_e::MainFile: {
      source__MainFile* src = static_cast<source__MainFile*>(UP_src);
      source_str = src->path;
    }
      break;
    case source_e::SourcedFile: {
      source__SourcedFile* src = static_cast<source__SourcedFile*>(UP_src);
      source_str = src->path;
    }
      break;
    case source_e::Alias: {
      source__Alias* src = static_cast<source__Alias*>(UP_src);
      source_str = fmt68(src->argv0);
    }
      break;
    case source_e::Backticks: {
      source_str = str247;
    }
      break;
    case source_e::LValue: {
      source__LValue* src = static_cast<source__LValue*>(UP_src);
      span2 = arena->GetLineSpan(src->left_spid);
      line2 = arena->GetLine(span2->line_id);
      outer_source = arena->GetLineSourceString(span2->line_id);
      source_str = fmt69(outer_source);
      line_num = arena->GetLineNumber(span2->line_id);
      lbracket_col = (span2->col + span2->length);
      _PrintCodeExcerpt(line2, (orig_col + lbracket_col), 1, f);
    }
      break;
    case source_e::EvalArg: {
      source__EvalArg* src = static_cast<source__EvalArg*>(UP_src);
      span = arena->GetLineSpan(src->eval_spid);
      line_num = arena->GetLineNumber(span->line_id);
      outer_source = arena->GetLineSourceString(span->line_id);
      source_str = fmt70(line_num, outer_source);
    }
      break;
    case source_e::Trap: {
      source_str = str250;
    }
      break;
    case source_e::Variable: {
      source_str = str251;
    }
      break;
    default: {
      source_str = repr(src);
    }
  }
  f->write(fmt71(source_str, line_num, prefix, msg));
}

void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena) {
  mylib::Writer* f;
  StackRoots _roots({&f});

  f = mylib::Stderr();
  if (span_id == runtime::NO_SPID) {
    f->write(fmt72(prefix, msg));
  }
  else {
    _PrintWithSpanId(prefix, msg, span_id, arena, f);
  }
}

void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  Str* msg;
  int span_id;
  StackRoots _roots({&msg});

  msg = err->UserErrorString();
  span_id = word_::SpanIdFromError(err);
  _PrintWithOptionalSpanId(prefix, msg, span_id, arena);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena) {
  PrettyPrintError(err, arena, str254);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  _pp(err, arena, prefix);
}

ErrorFormatter::ErrorFormatter(alloc::Arena* arena) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ErrorFormatter)) {
  this->arena = arena;
  this->last_spid = runtime::NO_SPID;
  this->spid_stack = Alloc<List<int>>();
}

void ErrorFormatter::PushLocation(int spid) {
  this->spid_stack->append(spid);
}

void ErrorFormatter::PopLocation() {
  this->spid_stack->pop();
}

int ErrorFormatter::CurrentLocation() {
  if (len(this->spid_stack)) {
    return this->spid_stack->index(-1);
  }
  else {
    return runtime::NO_SPID;
  }
}

void ErrorFormatter::PrefixPrint(Str* msg, Str* prefix, int span_id) {
  _PrintWithOptionalSpanId(prefix, msg, span_id, this->arena);
}

void ErrorFormatter::Print_(Str* msg) {
  Print_(msg, runtime::NO_SPID);
}

void ErrorFormatter::Print_(Str* msg, int span_id) {
  if (span_id == runtime::NO_SPID) {
    span_id = this->CurrentLocation();
  }
  _PrintWithOptionalSpanId(str255, msg, span_id, this->arena);
}

void ErrorFormatter::StderrLine(Str* msg) {
  println_stderr(msg);
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err) {
  PrettyPrintError(err, str256);
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix) {
  _pp(err, this->arena, prefix);
}

void PrintAst(syntax_asdl::command_t* node, arg_types::main* flag) {
  mylib::Writer* f;
  Str* afmt;
  format::ColorOutput* ast_f;
  hnode_asdl::hnode_t* tree;
  StackRoots _roots({&f, &afmt, &ast_f, &tree});

  if (maybe_str_equals(flag->ast_format, str257)) {
    println_stderr(str258);
  }
  else {
    f = mylib::Stdout();
    afmt = flag->ast_format;
    if ((maybe_str_equals(afmt, str259) || maybe_str_equals(afmt, str260))) {
      ast_f = fmt::DetectConsoleOutput(f);
    }
    else {
      if ((maybe_str_equals(afmt, str261) || maybe_str_equals(afmt, str262))) {
        ast_f = Alloc<fmt::HtmlOutput>(f);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
    if (str_contains(afmt, str263)) {
      tree = node->AbbreviatedTree();
    }
    else {
      tree = node->PrettyTree();
    }
    ast_f->FileHeader();
    fmt::PrintTree(tree, ast_f);
    ast_f->FileFooter();
    ast_f->write(str264);
  }
}

}  // define namespace ui

namespace util {  // define

UserExit::UserExit(int status) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(UserExit)) {
  this->status = status;
}

_DebugFile::_DebugFile() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_DebugFile)) {
  ;  // pass
}

void _DebugFile::log(Str* msg, void* args) {
  ;  // pass
}

void _DebugFile::write(Str* s) {
  ;  // pass
}

bool _DebugFile::isatty() {
  return false;
}

NullDebugFile::NullDebugFile() : _DebugFile() {
}

DebugFile::DebugFile(mylib::Writer* f) : _DebugFile() {
  this->f = f;
}

void DebugFile::log(Str* msg, void* args) {
  this->f->write(msg);
  this->f->write(str265);
  this->f->flush();
}

void DebugFile::write(Str* s) {
  this->f->write(s);
}

bool DebugFile::isatty() {
  return this->f->isatty();
}

}  // define namespace util

namespace args {  // define
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Int;
using runtime_asdl::value__Float;
using runtime_asdl::value__Str;
int String = 1;
int Int = 2;
int Float = 3;
int Bool = 4;

_Attributes::_Attributes(Dict<Str*, runtime_asdl::value_t*>* defaults) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Attributes)) {
  this->attrs = Alloc<Dict<Str*, runtime_asdl::value_t*>>();
  this->opt_changes = Alloc<List<Tuple2<Str*, bool>*>>();
  this->shopt_changes = Alloc<List<Tuple2<Str*, bool>*>>();
  this->show_options = false;
  this->actions = Alloc<List<Str*>>();
  this->saw_double_dash = false;
  for (DictIter<Str*, runtime_asdl::value_t*> it(defaults); !it.Done(); it.Next()) {
    Str* name = it.Key();
    runtime_asdl::value_t* v = it.Value();
    this->Set(name, v);
  }
}

void _Attributes::SetTrue(Str* name) {
  this->Set(name, Alloc<value::Bool>(true));
}

void _Attributes::Set(Str* name, runtime_asdl::value_t* val) {
  StackRoots _roots({&name});

  name = name->replace(str266, str267);
  this->attrs->set(name, val);
}

Reader::Reader(List<Str*>* argv, List<int>* spids) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Reader)) {
  this->argv = argv;
  this->spids = spids;
  this->n = len(argv);
  this->i = 0;
}

void Reader::Next() {
  this->i += 1;
}

Str* Reader::Peek() {
  if (this->i >= this->n) {
    return nullptr;
  }
  else {
    return this->argv->index(this->i);
  }
}

Tuple2<Str*, int> Reader::Peek2() {
  Str* no_str;
  StackRoots _roots({&no_str});

  if (this->i >= this->n) {
    no_str = nullptr;
    return (Tuple2<Str*, int>(no_str, -1));
  }
  else {
    return (Tuple2<Str*, int>(this->argv->index(this->i), this->spids->index(this->i)));
  }
}

Str* Reader::ReadRequired(Str* error_msg) {
  Str* arg;
  StackRoots _roots({&arg});

  arg = this->Peek();
  if (arg == nullptr) {
    e_usage(dynamic_fmt_dummy(), this->_FirstSpanId());
  }
  this->Next();
  return arg;
}

Tuple2<Str*, int> Reader::ReadRequired2(Str* error_msg) {
  Str* arg;
  int spid;
  StackRoots _roots({&arg});

  arg = this->Peek();
  if (arg == nullptr) {
    e_usage(dynamic_fmt_dummy(), this->_FirstSpanId());
  }
  spid = this->spids->index(this->i);
  this->Next();
  return (Tuple2<Str*, int>(arg, spid));
}

List<Str*>* Reader::Rest() {
  return this->argv->slice(this->i);
}

Tuple2<List<Str*>*, List<int>*> Reader::Rest2() {
  return (Tuple2<List<Str*>*, List<int>*>(this->argv->slice(this->i), this->spids->slice(this->i)));
}

bool Reader::AtEnd() {
  return this->i >= this->n;
}

int Reader::_FirstSpanId() {
  if (this->spids) {
    return this->spids->index(0);
  }
  else {
    return runtime::NO_SPID;
  }
}

int Reader::SpanId() {
  int i;
  if (this->spids) {
    if (this->i == this->n) {
      i = (this->n - 1);
    }
    else {
      i = this->i;
    }
    return this->spids->index(i);
  }
  else {
    return runtime::NO_SPID;
  }
}

_Action::_Action() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Action)) {
  ;  // pass
}

bool _Action::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  throw Alloc<NotImplementedError>();
}

_ArgAction::_ArgAction(Str* name, bool quit_parsing_flags, List<Str*>* valid) {
  this->name = name;
  this->quit_parsing_flags = quit_parsing_flags;
  this->valid = valid;
}

runtime_asdl::value_t* _ArgAction::_Value(Str* arg, int span_id) {
  throw Alloc<NotImplementedError>();
}

bool _ArgAction::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  Str* arg;
  runtime_asdl::value_t* val;
  StackRoots _roots({&arg, &val});

  if (attached_arg != nullptr) {
    arg = attached_arg;
  }
  else {
    arg_r->Next();
    arg = arg_r->Peek();
    if (arg == nullptr) {
      e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
    }
  }
  val = this->_Value(arg, arg_r->SpanId());
  out->Set(this->name, val);
  return this->quit_parsing_flags;
}

SetToInt::SetToInt(Str* name) : _ArgAction(name, false, nullptr) {
}

runtime_asdl::value_t* SetToInt::_Value(Str* arg, int span_id) {
  int i;
  try {
    i = to_int(arg);
  }
  catch (ValueError*) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  if (i < 0) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  return Alloc<value::Int>(i);
}

SetToFloat::SetToFloat(Str* name) : _ArgAction(name, false, nullptr) {
}

runtime_asdl::value_t* SetToFloat::_Value(Str* arg, int span_id) {
  double f;
  try {
    f = to_float(arg);
  }
  catch (ValueError*) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  if (f < 0) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  return Alloc<value::Float>(f);
}

SetToString::SetToString(Str* name, bool quit_parsing_flags, List<Str*>* valid) : _ArgAction(name, quit_parsing_flags, valid) {
}

runtime_asdl::value_t* SetToString::_Value(Str* arg, int span_id) {
  if ((this->valid != nullptr and !list_contains(this->valid, arg))) {
    e_usage(dynamic_fmt_dummy(), span_id);
  }
  return Alloc<value::Str>(arg);
}

SetAttachedBool::SetAttachedBool(Str* name) {
  this->name = name;
}

bool SetAttachedBool::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  bool b;
  if (attached_arg != nullptr) {
    if ((str_equals(attached_arg, str283) || str_equals(attached_arg, str284) || str_equals(attached_arg, str285) || str_equals(attached_arg, str286))) {
      b = false;
    }
    else {
      if ((str_equals(attached_arg, str287) || str_equals(attached_arg, str288) || str_equals(attached_arg, str289) || str_equals(attached_arg, str290))) {
        b = true;
      }
      else {
        e_usage(fmt73(attached_arg));
      }
    }
  }
  else {
    b = true;
  }
  out->Set(this->name, Alloc<value::Bool>(b));
  return false;
}

SetToTrue::SetToTrue(Str* name) {
  this->name = name;
}

bool SetToTrue::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  out->SetTrue(this->name);
  return false;
}

SetOption::SetOption(Str* name) {
  this->name = name;
}

bool SetOption::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  bool b;
  b = maybe_str_equals(attached_arg, str292);
  out->opt_changes->append((Alloc<Tuple2<Str*, bool>>(this->name, b)));
  return false;
}

SetNamedOption::SetNamedOption(bool shopt) {
  this->names = Alloc<List<Str*>>();
  this->shopt = shopt;
}

void SetNamedOption::Add(Str* name) {
  this->names->append(name);
}

bool SetNamedOption::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  bool b;
  Str* arg;
  Str* attr_name;
  List<Tuple2<Str*, bool>*>* changes;
  StackRoots _roots({&arg, &attr_name, &changes});

  b = maybe_str_equals(attached_arg, str293);
  arg_r->Next();
  arg = arg_r->Peek();
  if (arg == nullptr) {
    out->show_options = true;
    return true;
  }
  attr_name = arg;
  if (!list_contains(this->names, attr_name)) {
    e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
  }
  changes = this->shopt ? out->shopt_changes : out->opt_changes;
  changes->append((Alloc<Tuple2<Str*, bool>>(attr_name, b)));
  return false;
}

SetAction::SetAction(Str* name) {
  this->name = name;
}

bool SetAction::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  out->actions->append(this->name);
  return false;
}

SetNamedAction::SetNamedAction() {
  this->names = Alloc<List<Str*>>();
}

void SetNamedAction::Add(Str* name) {
  this->names->append(name);
}

bool SetNamedAction::OnMatch(Str* attached_arg, args::Reader* arg_r, args::_Attributes* out) {
  Str* arg;
  Str* attr_name;
  StackRoots _roots({&arg, &attr_name});

  arg_r->Next();
  arg = arg_r->Peek();
  if (arg == nullptr) {
    e_usage(str295);
  }
  attr_name = arg;
  if (!list_contains(this->names, attr_name)) {
    e_usage(fmt74(arg));
  }
  out->actions->append(attr_name);
  return false;
}

args::_Attributes* Parse(flag_spec::_FlagSpec* spec, args::Reader* arg_r) {
  args::_Attributes* out;
  Str* arg;
  args::_Action* action;
  int n;
  Str* ch;
  Str* attached_arg;
  StackRoots _roots({&out, &arg, &action, &ch, &attached_arg});

  out = Alloc<_Attributes>(spec->defaults);
  while (!arg_r->AtEnd()) {
    arg = arg_r->Peek();
    if (maybe_str_equals(arg, str297)) {
      out->saw_double_dash = true;
      arg_r->Next();
      break;
    }
    if ((len(spec->actions_long) and arg->startswith(str298))) {
      action = spec->actions_long->get(arg->slice(2));
      if (action == nullptr) {
        e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
      }
      action->OnMatch(nullptr, arg_r, out);
      arg_r->Next();
      continue;
    }
    else {
      if ((arg->startswith(str300) and len(arg) > 1)) {
        n = len(arg);
        for (int i = 1; i < n; ++i) {
          ch = arg->index(i);
          if (str_equals(ch, str301)) {
            ch = str302;
          }
          if (list_contains(spec->plus_flags, ch)) {
            out->Set(ch, Alloc<value::Str>(str303));
            continue;
          }
          if (list_contains(spec->arity0, ch)) {
            out->SetTrue(ch);
            continue;
          }
          if (dict_contains(spec->arity1, ch)) {
            action = spec->arity1->index(ch);
            attached_arg = i < (n - 1) ? arg->slice((i + 1)) : nullptr;
            action->OnMatch(attached_arg, arg_r, out);
            break;
          }
          e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
        }
        arg_r->Next();
      }
      else {
        if ((len(spec->plus_flags) and (arg->startswith(str306) and len(arg) > 1))) {
          n = len(arg);
          for (int i = 1; i < n; ++i) {
            ch = arg->index(i);
            if (list_contains(spec->plus_flags, ch)) {
              out->Set(ch, Alloc<value::Str>(str307));
              continue;
            }
            e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
          }
          arg_r->Next();
        }
        else {
          break;
        }
      }
    }
  }
  return out;
}

args::_Attributes* ParseLikeEcho(flag_spec::_FlagSpec* spec, args::Reader* arg_r) {
  args::_Attributes* out;
  Str* arg;
  Str* chars;
  bool done;
  StackRoots _roots({&out, &arg, &chars});

  out = Alloc<_Attributes>(spec->defaults);
  while (!arg_r->AtEnd()) {
    arg = arg_r->Peek();
    chars = arg->slice(1);
    if ((arg->startswith(str310) and len(chars))) {
      done = false;
      for (StrIter it(chars); !it.Done(); it.Next()) {
        Str* c = it.Value();
        if (!list_contains(spec->arity0, c)) {
          done = true;
          break;
        }
      }
      if (done) {
        break;
      }
      for (StrIter it(chars); !it.Done(); it.Next()) {
        Str* ch = it.Value();
        out->SetTrue(ch);
      }
    }
    else {
      break;
    }
    arg_r->Next();
  }
  return out;
}

args::_Attributes* ParseMore(flag_spec::_FlagSpecAndMore* spec, args::Reader* arg_r) {
  args::_Attributes* out;
  bool quit;
  Str* arg;
  args::_Action* action;
  Str* char0;
  Str* attached_arg;
  StackRoots _roots({&out, &arg, &action, &char0, &attached_arg});

  out = Alloc<_Attributes>(spec->defaults);
  quit = false;
  while (!arg_r->AtEnd()) {
    arg = arg_r->Peek();
    if (maybe_str_equals(arg, str311)) {
      out->saw_double_dash = true;
      arg_r->Next();
      break;
    }
    if (arg->startswith(str312)) {
      action = spec->actions_long->get(arg->slice(2));
      if (action == nullptr) {
        e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
      }
      action->OnMatch(nullptr, arg_r, out);
      arg_r->Next();
      continue;
    }
    if (((arg->startswith(str314) or arg->startswith(str315)) and len(arg) > 1)) {
      char0 = arg->index(0);
      for (StrIter it(arg->slice(1)); !it.Done(); it.Next()) {
        Str* ch = it.Value();
        action = spec->actions_short->get(ch);
        if (action == nullptr) {
          e_usage(dynamic_fmt_dummy(), arg_r->SpanId());
        }
        attached_arg = list_contains(spec->plus_flags, ch) ? char0 : nullptr;
        quit = action->OnMatch(attached_arg, arg_r, out);
      }
      arg_r->Next();
      if (quit) {
        break;
      }
      else {
        continue;
      }
    }
    break;
  }
  return out;
}
Str* _FLAG_ERE = str318;

args::_Attributes* ParseOil(flag_spec::_OilFlagSpec* spec, args::Reader* arg_r) {
  throw Alloc<AssertionError>();
}

}  // define namespace args

namespace lexer {  // define
using syntax_asdl::Token;
using syntax_asdl::line_span;
using types_asdl::lex_mode_t;
using id_kind_asdl::Id_t;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
Token gobj0(Id::Eol_Tok, runtime::NO_SPID, nullptr);
syntax_asdl::Token* _EOL_TOK = &gobj0;
LineLexer::LineLexer(Str* line, alloc::Arena* arena) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(LineLexer)) {
  this->arena = arena;
  this->arena_skip = false;
  this->last_span_id = runtime::NO_SPID;
  this->Reset(line, -1, 0);
}

void LineLexer::Reset(Str* line, int line_id, int line_pos) {
  this->line = line;
  this->line_id = line_id;
  this->line_pos = line_pos;
}

bool LineLexer::MaybeUnreadOne() {
  if (this->line_pos == 0) {
    return false;
  }
  else {
    this->line_pos -= 1;
    this->arena_skip = true;
    return true;
  }
}

int LineLexer::GetSpanIdForEof() {
  int line_id;
  if (this->line_id == -1) {
    line_id = this->arena->AddLine(str320, 0);
  }
  else {
    line_id = this->line_id;
  }
  return this->arena->AddLineSpan(line_id, this->line_pos, 0);
}

int LineLexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  int pos;
  int n;
  int tok_type;
  int end_pos;
  pos = this->line_pos;
  n = len(this->line);
  while (true) {
    if (pos == n) {
      return Id::Unknown_Tok;
    }
    Tuple2<int, int> tup1 = match::OneToken(lex_mode, this->line, pos);
    tok_type = tup1.at0();
    end_pos = tup1.at1();
    if (tok_type != Id::WS_Space) {
      break;
    }
    pos = end_pos;
  }
  return tok_type;
}

Str* LineLexer::ByteLookAhead() {
  int pos;
  pos = this->line_pos;
  if (pos == len(this->line)) {
    return str321;
  }
  else {
    return this->line->index(pos);
  }
}

syntax_asdl::Token* LineLexer::Read(types_asdl::lex_mode_t lex_mode) {
  Str* line;
  int line_pos;
  int tok_type;
  int end_pos;
  id_kind_asdl::Kind_t kind;
  Str* tok_val;
  int span_id;
  int tok_len;
  syntax_asdl::Token* t;
  StackRoots _roots({&line, &kind, &tok_val, &t});

  line = this->line;
  line_pos = this->line_pos;
  Tuple2<int, int> tup2 = match::OneToken(lex_mode, line, line_pos);
  tok_type = tup2.at0();
  end_pos = tup2.at1();
  if (tok_type == Id::Eol_Tok) {
    return _EOL_TOK;
  }
  kind = consts::GetKind(tok_type);
  if ((kind == Kind::Arith || kind == Kind::Op || kind == Kind::WS || kind == Kind::Ignored || kind == Kind::Eof)) {
    tok_val = nullptr;
  }
  else {
    tok_val = line->slice(line_pos, end_pos);
  }
  if (this->arena_skip) {
    span_id = this->last_span_id;
    this->arena_skip = false;
  }
  else {
    tok_len = (end_pos - line_pos);
    span_id = this->arena->AddLineSpan(this->line_id, line_pos, tok_len);
    this->last_span_id = span_id;
  }
  t = Alloc<Token>(tok_type, span_id, tok_val);
  this->line_pos = end_pos;
  return t;
}

Lexer::Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Lexer)) {
  this->line_lexer = line_lexer;
  this->line_reader = line_reader;
  this->line_id = -1;
  this->translation_stack = Alloc<List<Tuple2<int, int>*>>();
  this->emit_comp_dummy = false;
}

void Lexer::ResetInputObjects() {
  this->line_lexer->Reset(str322, -1, 0);
}

bool Lexer::MaybeUnreadOne() {
  return this->line_lexer->MaybeUnreadOne();
}

int Lexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  return this->line_lexer->LookAhead(lex_mode);
}

Str* Lexer::ByteLookAhead() {
  return this->line_lexer->ByteLookAhead();
}

void Lexer::EmitCompDummy() {
  this->emit_comp_dummy = true;
}

void Lexer::PushHint(int old_id, int new_id) {
  this->translation_stack->append((Alloc<Tuple2<int, int>>(old_id, new_id)));
}

syntax_asdl::Token* Lexer::_Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;
  int line_id;
  Str* line;
  int line_pos;
  int span_id;
  int id_;
  int old_id;
  int new_id;
  StackRoots _roots({&t, &line});

  t = this->line_lexer->Read(lex_mode);
  if (t->id == Id::Eol_Tok) {
    Tuple3<int, Str*, int> tup3 = this->line_reader->GetLine();
    line_id = tup3.at0();
    line = tup3.at1();
    line_pos = tup3.at2();
    if (line == nullptr) {
      span_id = this->line_lexer->GetSpanIdForEof();
      if (this->emit_comp_dummy) {
        id_ = Id::Lit_CompDummy;
        this->emit_comp_dummy = false;
      }
      else {
        id_ = Id::Eof_Real;
      }
      t = Alloc<Token>(id_, span_id, str323);
      return t;
    }
    this->line_lexer->Reset(line, line_id, line_pos);
    t = this->line_lexer->Read(lex_mode);
  }
  if (len(this->translation_stack)) {
    Tuple2<int, int>* tup4 = this->translation_stack->index(-1);
    old_id = tup4->at0();
    new_id = tup4->at1();
    if (t->id == old_id) {
      this->translation_stack->pop();
      t->id = new_id;
    }
  }
  return t;
}

syntax_asdl::Token* Lexer::Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;
  StackRoots _roots({&t});

  while (true) {
    t = this->_Read(lex_mode);
    if (t->id != Id::Ignored_LineCont) {
      break;
    }
  }
  return t;
}

}  // define namespace lexer

namespace location {  // define
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command_t;
using syntax_asdl::command__Simple;
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__AndOr;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__Sentence;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__WhileUntil;
using syntax_asdl::command__If;
using syntax_asdl::command__Case;
using syntax_asdl::command__TimeBlock;
using syntax_asdl::BraceGroup;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;

int SpanForCommand(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  int tag;
  StackRoots _roots({&UP_node});

  UP_node = node;
  tag = node->tag_();
  if (tag == command_e::Sentence) {
    command__Sentence* node = static_cast<command__Sentence*>(UP_node);
    return node->terminator->span_id;
  }
  if (tag == command_e::Simple) {
    command__Simple* node = static_cast<command__Simple*>(UP_node);
    if (len(node->words)) {
      return word_::LeftMostSpanForWord(node->words->index(0));
    }
    else {
      if (len(node->redirects)) {
        return node->redirects->index(0)->op->span_id;
      }
    }
  }
  if (tag == command_e::Pipeline) {
    command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::AndOr) {
    command__AndOr* node = static_cast<command__AndOr*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::DoGroup) {
    command__DoGroup* node = static_cast<command__DoGroup*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::BraceGroup) {
    BraceGroup* node = static_cast<BraceGroup*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::Subshell) {
    command__Subshell* node = static_cast<command__Subshell*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::WhileUntil) {
    command__WhileUntil* node = static_cast<command__WhileUntil*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::If) {
    command__If* node = static_cast<command__If*>(UP_node);
    return node->arms->index(0)->spids->index(0);
  }
  if (tag == command_e::Case) {
    command__Case* node = static_cast<command__Case*>(UP_node);
    return node->spids->index(0);
  }
  if (tag == command_e::TimeBlock) {
    command__TimeBlock* node = static_cast<command__TimeBlock*>(UP_node);
    return node->spids->index(0);
  }
  return runtime::NO_SPID;
}

int SpanForArithExpr(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  StackRoots _roots({&UP_node});

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      Token* token = static_cast<Token*>(UP_node);
      return token->span_id;
    }
      break;
    case arith_expr_e::Word: {
      compound_word* w = static_cast<compound_word*>(UP_node);
      return word_::LeftMostSpanForWord(w);
    }
      break;
  }
  return runtime::NO_SPID;
}

}  // define namespace location

namespace parse_lib {  // define
using id_kind_asdl::Id_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
using syntax_asdl::expr_t;
using syntax_asdl::word_t;
using syntax_asdl::redir;
using syntax_asdl::arg_list;
using syntax_asdl::name_type;
using types_asdl::lex_mode_e;

_BaseTrail::_BaseTrail() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_BaseTrail)) {
  this->words = Alloc<List<syntax_asdl::compound_word*>>();
  this->redirects = Alloc<List<syntax_asdl::redir*>>();
  this->tokens = Alloc<List<syntax_asdl::Token*>>();
  this->alias_words = Alloc<List<syntax_asdl::compound_word*>>();
  this->_expanding_alias = false;
}

void _BaseTrail::Clear() {
  ;  // pass
}

void _BaseTrail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects) {
  ;  // pass
}

void _BaseTrail::AppendToken(syntax_asdl::Token* token) {
  ;  // pass
}

void _BaseTrail::BeginAliasExpansion() {
  ;  // pass
}

void _BaseTrail::EndAliasExpansion() {
  ;  // pass
}

ctx_Alias::ctx_Alias(parse_lib::_BaseTrail* trail) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_Alias)) {
  trail->_expanding_alias = true;
  this->trail = trail;
}

ctx_Alias::~ctx_Alias(){
  this->trail->_expanding_alias = false;
}

Trail::Trail() : _BaseTrail() {
}

void Trail::Clear() {
  this->words->clear();
  this->redirects->clear();
  this->tokens->clear();
  this->alias_words->clear();
}

void Trail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir*>* redirects) {
  if (this->_expanding_alias) {
    this->alias_words = words;
    return ;
  }
  this->words = words;
  this->redirects = redirects;
}

void Trail::AppendToken(syntax_asdl::Token* token) {
  if (this->_expanding_alias) {
    return ;
  }
  this->tokens->append(token);
}

ParseContext::ParseContext(alloc::Arena* arena, optview::Parse* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ParseContext)) {
  this->arena = arena;
  this->parse_opts = parse_opts;
  this->aliases = aliases;
  this->e_parser = Alloc<expr_parse::ExprParser>(this, oil_grammar);
  if (oil_grammar) {
    this->tr = Alloc<expr_to_ast::Transformer>(oil_grammar);
  }
  else {
    this->tr = nullptr;
  }
  this->parsing_expr = false;
  this->trail = Alloc<_BaseTrail>();
  this->one_pass_parse = false;
}

void ParseContext::Init_Trail(parse_lib::_BaseTrail* trail) {
  this->trail = trail;
}

void ParseContext::Init_OnePassParse(bool b) {
  this->one_pass_parse = b;
}

lexer::Lexer* ParseContext::_MakeLexer(reader::_Reader* line_reader) {
  lexer::LineLexer* line_lexer;
  StackRoots _roots({&line_lexer});

  line_lexer = Alloc<lexer::LineLexer>(str325, this->arena);
  return Alloc<lexer::Lexer>(line_lexer, line_reader);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader) {
  return MakeOshParser(line_reader, false);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy) {
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;
  StackRoots _roots({&lx, &w_parser, &c_parser});

  lx = this->_MakeLexer(line_reader);
  if (emit_comp_dummy) {
    lx->EmitCompDummy();
  }
  w_parser = Alloc<word_parse::WordParser>(this, lx, line_reader);
  c_parser = Alloc<cmd_parse::CommandParser>(this, w_parser, lx, line_reader);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForHereDoc(reader::_Reader* line_reader) {
  lexer::Lexer* lx;
  StackRoots _roots({&lx});

  lx = this->_MakeLexer(line_reader);
  return Alloc<word_parse::WordParser>(this, lx, line_reader);
}

word_parse::WordParser* ParseContext::MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader) {
  return Alloc<word_parse::WordParser>(this, lx, line_reader);
}

tdop::TdopParser* ParseContext::MakeArithParser(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  tdop::TdopParser* a_parser;
  StackRoots _roots({&line_reader, &lx, &w_parser, &a_parser});

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  w_parser = Alloc<word_parse::WordParser>(this, lx, line_reader);
  w_parser->Init(lex_mode_e::Arith);
  a_parser = Alloc<tdop::TdopParser>(arith_parse::Spec(), w_parser, this->parse_opts);
  return a_parser;
}

cmd_parse::CommandParser* ParseContext::MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id) {
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;
  StackRoots _roots({&w_parser, &c_parser});

  w_parser = Alloc<word_parse::WordParser>(this, lexer, line_reader);
  c_parser = Alloc<cmd_parse::CommandParser>(this, w_parser, lexer, line_reader);
  c_parser->Init_EofId(eof_id);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForPlugin(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;
  StackRoots _roots({&line_reader, &lx});

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  return Alloc<word_parse::WordParser>(this, lx, line_reader);
}

Tuple2<pnode::PNode*, syntax_asdl::Token*> ParseContext::_ParseOil(lexer::Lexer* lexer, int start_symbol) {
  this->parsing_expr = true;
  try {
    return this->e_parser->Parse(lexer, start_symbol);
  }
  catch (std::exception) { }}

Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> ParseContext::ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__VarDecl* ast_node;
  StackRoots _roots({&pnode, &last_token, &ast_node});

  if (this->parsing_expr) {
    p_die(fmt75(), kw_token);
  }
  this->parsing_expr = true;
  try {
    Tuple2<pnode::PNode*, syntax_asdl::Token*> tup0 = this->e_parser->Parse(lexer, grammar_nt::oil_var_decl);
    pnode = tup0.at0();
    last_token = tup0.at1();
  }
  catch (std::exception) { }  ast_node = this->tr->MakeVarDecl(pnode);
  ast_node->keyword = kw_token;
  return (Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> ParseContext::ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__PlaceMutation* ast_node;
  StackRoots _roots({&pnode, &last_token, &ast_node});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup1 = this->e_parser->Parse(lexer, grammar_nt::oil_place_mutation);
  pnode = tup1.at0();
  last_token = tup1.at1();
  ast_node = this->tr->MakePlaceMutation(pnode);
  ast_node->keyword = kw_token;
  return (Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>(ast_node, last_token));
}

syntax_asdl::Token* ParseContext::ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  if (this->parsing_expr) {
    throw Alloc<AssertionError>();
  }
  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup2 = this->_ParseOil(lexer, grammar_nt::oil_arglist);
  pnode = tup2.at0();
  last_token = tup2.at1();
  this->tr->ArgList(pnode, out);
  return last_token;
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> ParseContext::ParseOilExpr(lexer::Lexer* lexer, int start_symbol) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::expr_t* ast_node;
  StackRoots _roots({&pnode, &last_token, &ast_node});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup3 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup3.at0();
  last_token = tup3.at1();
  ast_node = this->tr->Expr(pnode);
  return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> ParseContext::ParseOilForExpr(lexer::Lexer* lexer, int start_symbol) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;
  StackRoots _roots({&pnode, &last_token, &lvalue, &iterable});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup4 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup4.at0();
  last_token = tup4.at1();
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> tup5 = this->tr->OilForExpr(pnode);
  lvalue = tup5.at0();
  iterable = tup5.at1();
  return (Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>(lvalue, iterable, last_token));
}

syntax_asdl::Token* ParseContext::ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup6 = this->e_parser->Parse(lexer, grammar_nt::oil_proc);
  pnode = tup6.at0();
  last_token = tup6.at1();
  out->sig = this->tr->Proc(pnode);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup7 = this->e_parser->Parse(lexer, grammar_nt::named_func);
  pnode = tup7.at0();
  last_token = tup7.at1();
  this->tr->NamedFunc(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseDataType(lexer::Lexer* lexer, syntax_asdl::command__Data* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup8 = this->e_parser->Parse(lexer, grammar_nt::tea_data);
  pnode = tup8.at0();
  last_token = tup8.at1();
  this->tr->Data(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseEnum(lexer::Lexer* lexer, syntax_asdl::command__Enum* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup9 = this->e_parser->Parse(lexer, grammar_nt::tea_enum);
  pnode = tup9.at0();
  last_token = tup9.at1();
  this->tr->Enum(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseClass(lexer::Lexer* lexer, syntax_asdl::command__Class* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup10 = this->e_parser->Parse(lexer, grammar_nt::tea_class);
  pnode = tup10.at0();
  last_token = tup10.at1();
  this->tr->Class(pnode, out);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseImport(lexer::Lexer* lexer, syntax_asdl::command__Import* out) {
  pnode::PNode* pnode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&pnode, &last_token});

  Tuple2<pnode::PNode*, syntax_asdl::Token*> tup11 = this->e_parser->Parse(lexer, grammar_nt::tea_import);
  pnode = tup11.at0();
  last_token = tup11.at1();
  this->tr->Import(pnode, out);
  return last_token;
}

}  // define namespace parse_lib

namespace reader {  // define

_Reader::_Reader(alloc::Arena* arena) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_Reader)) {
  this->arena = arena;
  this->line_num = 1;
}

Str* _Reader::_GetLine() {
  throw Alloc<NotImplementedError>();
}

Tuple3<int, Str*, int> _Reader::GetLine() {
  Str* line;
  Str* eof_line;
  int line_id;
  StackRoots _roots({&line, &eof_line});

  line = this->_GetLine();
  if (line == nullptr) {
    eof_line = nullptr;
    return (Tuple3<int, Str*, int>(-1, eof_line, 0));
  }
  line_id = this->arena->AddLine(line, this->line_num);
  this->line_num += 1;
  return (Tuple3<int, Str*, int>(line_id, line, 0));
}

void _Reader::Reset() {
  ;  // pass
}

bool _Reader::LastLineHint() {
  return false;
}

DisallowedLineReader::DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token) : _Reader(arena) {
  this->blame_token = blame_token;
}

Str* DisallowedLineReader::_GetLine() {
  p_die(fmt76(), this->blame_token);
}

FileLineReader::FileLineReader(mylib::LineReader* f, alloc::Arena* arena) : _Reader(arena) {
  this->f = f;
  this->last_line_hint = false;
}

Str* FileLineReader::_GetLine() {
  Str* line;
  StackRoots _roots({&line});

  line = this->f->readline();
  if (len(line) == 0) {
    return nullptr;
  }
  if (!line->endswith(str328)) {
    this->last_line_hint = true;
  }
  return line;
}

bool FileLineReader::LastLineHint() {
  return this->last_line_hint;
}

reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena) {
  return Alloc<FileLineReader>(Alloc<mylib::BufLineReader>(s), arena);
}

VirtualLineReader::VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena) : _Reader(arena) {
  this->lines = lines;
  this->num_lines = len(lines);
  this->pos = 0;
}

Tuple3<int, Str*, int> VirtualLineReader::GetLine() {
  Str* eof_line;
  int line_id;
  Str* line;
  int start_offset;
  StackRoots _roots({&eof_line, &line});

  if (this->pos == this->num_lines) {
    eof_line = nullptr;
    return (Tuple3<int, Str*, int>(-1, eof_line, 0));
  }
  Tuple3<int, Str*, int>* tup0 = this->lines->index(this->pos);
  line_id = tup0->at0();
  line = tup0->at1();
  start_offset = tup0->at2();
  this->pos += 1;
  return (Tuple3<int, Str*, int>(line_id, line, start_offset));
}

}  // define namespace reader

namespace expr_parse {  // define
using syntax_asdl::Token;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
using syntax_asdl::compound_word;
using syntax_asdl::word_part_t;
namespace word_e = syntax_asdl::word_e;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Id_str;
using types_asdl::lex_mode_e;

int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok) {
  int typ;
  Str* type_str;
  StackRoots _roots({&type_str});

  if (tok->id == Id::Expr_Name) {
    if (dict_contains(gr->keywords, tok->val)) {
      return gr->keywords->index(tok->val);
    }
  }
  typ = tok->id;
  if (dict_contains(gr->tokens, typ)) {
    return gr->tokens->index(typ);
  }
  type_str = tok->id == Id::Unknown_Tok ? str329 : fmt77(ui::PrettyId(tok->id));
  p_die(fmt78(type_str), tok);
}
Dict<int, int> gdict0(std::initializer_list<int>{}, std::initializer_list<int>{});
Dict<int, int>* _OTHER_BALANCE = &gdict0;

syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex) {
  syntax_asdl::Token* last_token;
  bool prev_was_newline;
  int balance;
  syntax_asdl::Token* tok;
  int ilabel;
  StackRoots _roots({&last_token, &tok});

  last_token = nullptr;
  prev_was_newline = false;
  balance = 0;
  while (true) {
    if (last_token) {
      tok = last_token;
      last_token = nullptr;
    }
    else {
      tok = lex->Read(lex_mode_e::Expr);
    }
    if (consts::GetKind(tok->id) == Kind::Ignored) {
      continue;
    }
    if (tok->id == Id::Op_Newline) {
      if (balance > 0) {
        continue;
      }
      if (prev_was_newline) {
        continue;
      }
      prev_was_newline = true;
    }
    else {
      prev_was_newline = false;
    }
    balance += _OTHER_BALANCE->get(tok->id, 0);
    ilabel = _Classify(gr, tok);
    if (p->addtoken(tok->id, tok, ilabel)) {
      return tok;
    }
  }
}

ExprParser::ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ExprParser)) {
  this->parse_ctx = parse_ctx;
  this->gr = gr;
  this->push_parser = Alloc<parse::Parser>(gr);
}

Tuple2<pnode::PNode*, syntax_asdl::Token*> ExprParser::Parse(lexer::Lexer* lexer, int start_symbol) {
  syntax_asdl::Token* last_token;
  StackRoots _roots({&last_token});

  this->push_parser->setup(start_symbol);
  try {
    last_token = _PushOilTokens(this->parse_ctx, this->gr, this->push_parser, lexer);
  }
  catch (parse::ParseError* e) {
    p_die(fmt79(ui::PrettyId(e->tok->id)), e->tok);
  }
  return (Tuple2<pnode::PNode*, syntax_asdl::Token*>(this->push_parser->rootnode, last_token));
}

}  // define namespace expr_parse

namespace expr_to_ast {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
using syntax_asdl::speck;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
namespace expr = syntax_asdl::expr;
namespace expr_e = syntax_asdl::expr_e;
using syntax_asdl::expr_t;
using syntax_asdl::expr__Var;
using syntax_asdl::expr__Dict;
using syntax_asdl::expr_context_e;
namespace re = syntax_asdl::re;
using syntax_asdl::re_t;
namespace re_repeat = syntax_asdl::re_repeat;
using syntax_asdl::re_repeat_t;
namespace class_literal_term = syntax_asdl::class_literal_term;
using syntax_asdl::class_literal_term_t;
using syntax_asdl::posix_class;
using syntax_asdl::perl_class;
using syntax_asdl::name_type;
namespace place_expr = syntax_asdl::place_expr;
namespace place_expr_e = syntax_asdl::place_expr_e;
using syntax_asdl::place_expr_t;
using syntax_asdl::type_expr_t;
using syntax_asdl::comprehension;
using syntax_asdl::subscript;
using syntax_asdl::attribute;
namespace proc_sig = syntax_asdl::proc_sig;
using syntax_asdl::proc_sig_t;
using syntax_asdl::param;
using syntax_asdl::named_arg;
using syntax_asdl::arg_list;
using syntax_asdl::variant;
namespace variant_type = syntax_asdl::variant_type;
using syntax_asdl::variant_type_t;
Dict<Str*, Str*> gdict0(std::initializer_list<Str*>{}, std::initializer_list<Str*>{});
Dict<Str*, Str*>* PERL_CLASSES = &gdict0;
List<Str*> glist1 = {str333, str334, str335, str336, str337, str338, str339, str340, str341, str342, str343, str344};
List<Str*>* POSIX_CLASSES = &glist1;
Str* RANGE_POINT_TOO_LONG = str345;
int NT_OFFSET = 256;

bool ISNONTERMINAL(int x) {
  return x >= NT_OFFSET;
}

Transformer::Transformer(grammar::Grammar* gr) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Transformer)) {
  this->number2symbol = gr->number2symbol;
}

syntax_asdl::expr_t* Transformer::_AssocBinary(List<pnode::PNode*>* children) {
  int n;
  syntax_asdl::expr_t* left;
  pnode::PNode* op;
  syntax_asdl::expr_t* right;
  StackRoots _roots({&left, &op, &right});

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  left = this->Expr(children->index(0));
  op = children->index(1);
  if (n == 3) {
    right = this->Expr(children->index(2));
  }
  else {
    right = this->_AssocBinary(children->slice(2));
  }
  return Alloc<expr::Binary>(op->tok, left, right);
}

syntax_asdl::expr_t* Transformer::_Trailer(syntax_asdl::expr_t* base, pnode::PNode* p_trailer) {
  List<pnode::PNode*>* children;
  syntax_asdl::Token* op_tok;
  syntax_asdl::arg_list* arglist;
  pnode::PNode* p;
  pnode::PNode* p_args;
  List<syntax_asdl::expr_t*>* indices;
  int n;
  pnode::PNode* a;
  syntax_asdl::Token* attr;
  StackRoots _roots({&children, &op_tok, &arglist, &p, &p_args, &indices, &a, &attr});

  children = p_trailer->children;
  op_tok = children->index(0)->tok;
  if (op_tok->id == Id::Op_LParen) {
    arglist = Alloc<arg_list>();
    if (len(children) == 2) {
      return Alloc<expr::FuncCall>(base, arglist);
    }
    p = children->index(1);
    this->_Arglist(p->children, arglist);
    return Alloc<expr::FuncCall>(base, arglist);
  }
  if (op_tok->id == Id::Op_LBracket) {
    p_args = children->index(1);
    indices = Alloc<List<syntax_asdl::expr_t*>>();
    n = len(p_args->children);
    for (int i = 0; i < n; i += 2) {
      a = p_args->children->index(i);
      indices->append(this->_Subscript(a->children));
    }
    return Alloc<subscript>(base, indices);
  }
  if ((op_tok->id == Id::Expr_Dot || op_tok->id == Id::Expr_RArrow || op_tok->id == Id::Expr_DColon)) {
    attr = children->index(1)->tok;
    return Alloc<attribute>(base, op_tok, attr, expr_context_e::Store);
  }
  throw Alloc<AssertionError>();
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> Transformer::_DictPair(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;
  syntax_asdl::Token* tok0;
  int id_;
  StackRoots _roots({&children, &key, &value, &tok0});

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      key = this->Expr(children->index(0));
    }
    else {
      if (typ == grammar_nt::dq_string) {
        key = this->Expr(children->index(0));
      }
    }
    value = this->Expr(children->index(2));
    return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  tok0 = children->index(0)->tok;
  id_ = tok0->id;
  if (id_ == Id::Expr_Name) {
    key = Alloc<expr::Const>(tok0);
    if (len(children) >= 3) {
      value = this->Expr(children->index(2));
    }
    else {
      value = Alloc<expr::Implicit>();
    }
  }
  if (id_ == Id::Op_LBracket) {
    key = this->Expr(children->index(1));
    value = this->Expr(children->index(4));
    return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
}

syntax_asdl::expr__Dict* Transformer::_Dict(pnode::PNode* p_node) {
  List<syntax_asdl::expr_t*>* keys;
  List<syntax_asdl::expr_t*>* values;
  int n;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;
  StackRoots _roots({&keys, &values, &key, &value});

  if (!ISNONTERMINAL(p_node->typ)) {
    return Alloc<expr::Dict>(Alloc<List<syntax_asdl::expr_t*>>(), Alloc<List<syntax_asdl::expr_t*>>());
  }
  keys = Alloc<List<syntax_asdl::expr_t*>>();
  values = Alloc<List<syntax_asdl::expr_t*>>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> tup2 = this->_DictPair(p_node->children->index(i));
    key = tup2.at0();
    value = tup2.at1();
    keys->append(key);
    values->append(value);
  }
  return Alloc<expr::Dict>(keys, values);
}

syntax_asdl::expr_t* Transformer::_Tuple(List<pnode::PNode*>* children) {
  int n;
  List<syntax_asdl::expr_t*>* elts;
  pnode::PNode* p_node;
  StackRoots _roots({&elts, &p_node});

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  if (n == 2) {
    p_die(fmt80(), children->index(1)->tok);
  }
  elts = Alloc<List<syntax_asdl::expr_t*>>();
  for (int i = 0; i < n; i += 2) {
    p_node = children->index(i);
    elts->append(this->Expr(p_node));
  }
  return Alloc<expr::Tuple>(elts, expr_context_e::Store);
}

syntax_asdl::expr_t* Transformer::_TestlistComp(pnode::PNode* p_node, int id0) {
  List<pnode::PNode*>* children;
  int n;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  List<syntax_asdl::expr_t*>* elts;
  StackRoots _roots({&children, &elt, &comp, &elts});

  children = p_node->children;
  n = len(children);
  if ((n > 1 and children->index(1)->typ == grammar_nt::comp_for)) {
    elt = this->Expr(children->index(0));
    comp = this->_CompFor(children->index(1));
    if (id0 == Id::Op_LParen) {
      return Alloc<expr::GeneratorExp>(elt, Alloc<List<syntax_asdl::comprehension*>>(std::initializer_list<syntax_asdl::comprehension*>{comp}));
    }
    if (id0 == Id::Op_LBracket) {
      return Alloc<expr::ListComp>(elt, Alloc<List<syntax_asdl::comprehension*>>(std::initializer_list<syntax_asdl::comprehension*>{comp}));
    }
    throw Alloc<AssertionError>();
  }
  if (id0 == Id::Op_LParen) {
    if (len(children) == 1) {
      return this->Expr(children->index(0));
    }
    if (children->index(1)->tok->id == Id::Arith_Comma) {
      return this->_Tuple(children);
    }
    throw Alloc<NotImplementedError>(str347);
  }
  if (id0 == Id::Op_LBracket) {
    elts = Alloc<List<syntax_asdl::expr_t*>>();
    for (int i = 0; i < n; i += 2) {
      elts->append(this->Expr(children->index(i)));
    }
    return Alloc<expr::List>(elts, expr_context_e::Store);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::expr_t* Transformer::_Atom(List<pnode::PNode*>* children) {
  syntax_asdl::Token* tok;
  int id_;
  int n;
  int i;
  syntax_asdl::re_t* r;
  List<syntax_asdl::Token*>* flags;
  syntax_asdl::Token* trans_pref;
  StackRoots _roots({&tok, &r, &flags, &trans_pref});

  tok = children->index(0)->tok;
  id_ = tok->id;
  n = len(children);
  if (id_ == Id::Op_LParen) {
    if (n == 2) {
      return Alloc<expr::Tuple>(Alloc<List<syntax_asdl::expr_t*>>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBracket) {
    if (n == 2) {
      return Alloc<expr::List>(Alloc<List<syntax_asdl::expr_t*>>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBrace) {
    i = 1;
    if (children->index(i)->tok->id == Id::Op_Newline) {
      i += 1;
    }
    return this->_Dict(children->index(i));
  }
  if (id_ == Id::Arith_Slash) {
    r = this->_Regex(children->index(1));
    flags = Alloc<List<syntax_asdl::Token*>>();
    trans_pref = nullptr;
    return Alloc<expr::RegexLiteral>(children->index(0)->tok, r, flags, trans_pref);
  }
  if (id_ == Id::Expr_Func) {
    return Alloc<expr::Lambda>(Alloc<List<syntax_asdl::name_type*>>(), Alloc<expr::Implicit>());
  }
  throw Alloc<NotImplementedError>(Id_str(id_));
}

List<syntax_asdl::name_type*>* Transformer::_NameTypeList(pnode::PNode* p_node) {
  List<syntax_asdl::name_type*>* results;
  int n;
  pnode::PNode* p;
  List<pnode::PNode*>* children;
  syntax_asdl::type_expr_t* typ;
  syntax_asdl::name_type* node;
  StackRoots _roots({&results, &p, &children, &typ, &node});

  results = Alloc<List<syntax_asdl::name_type*>>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    children = p->children;
    if (len(children) == 2) {
      typ = this->_TypeExpr(children->index(1));
    }
    else {
      typ = nullptr;
    }
    node = Alloc<name_type>(children->index(0)->tok, typ);
    results->append(node);
  }
  return results;
}

syntax_asdl::comprehension* Transformer::_CompFor(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::expr_t* cond;
  StackRoots _roots({&children, &lhs, &iterable, &cond});

  children = p_node->children;
  lhs = this->_NameTypeList(children->index(1));
  iterable = this->Expr(children->index(3));
  if (len(children) >= 6) {
    cond = this->Expr(children->index(5));
  }
  else {
    cond = nullptr;
  }
  return Alloc<comprehension>(lhs, iterable, cond);
}

syntax_asdl::expr_t* Transformer::_CompareChain(List<pnode::PNode*>* children) {
  List<syntax_asdl::speck*>* cmp_ops;
  List<syntax_asdl::expr_t*>* comparators;
  syntax_asdl::expr_t* left;
  int i;
  int n;
  List<pnode::PNode*>* op_children;
  syntax_asdl::Token* tok1;
  syntax_asdl::speck* op;
  StackRoots _roots({&cmp_ops, &comparators, &left, &op_children, &tok1, &op});

  cmp_ops = Alloc<List<syntax_asdl::speck*>>();
  comparators = Alloc<List<syntax_asdl::expr_t*>>();
  left = this->Expr(children->index(0));
  i = 1;
  n = len(children);
  while (i < n) {
    op_children = children->index(i)->children;
    tok1 = op_children->index(0)->tok;
    if (len(op_children) == 2) {
      if (tok1->id == Id::Expr_Not) {
        op = Alloc<speck>(Id::Node_NotIn, tok1->span_id);
      }
      else {
        if (tok1->id == Id::Expr_Is) {
          op = Alloc<speck>(Id::Node_IsNot, tok1->span_id);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    else {
      op = Alloc<speck>(tok1->id, tok1->span_id);
    }
    cmp_ops->append(op);
    i += 1;
    comparators->append(this->Expr(children->index(i)));
    i += 1;
  }
  return Alloc<expr::Compare>(left, cmp_ops, comparators);
}

syntax_asdl::expr_t* Transformer::_Subscript(List<pnode::PNode*>* children) {
  int typ0;
  int n;
  syntax_asdl::expr_t* lower;
  syntax_asdl::expr_t* upper;
  StackRoots _roots({&lower, &upper});

  typ0 = children->index(0)->typ;
  n = len(children);
  if (ISNONTERMINAL(typ0)) {
    if (n == 3) {
      lower = this->Expr(children->index(0));
      upper = this->Expr(children->index(2));
    }
    else {
      if (n == 2) {
        lower = this->Expr(children->index(0));
        upper = nullptr;
      }
      else {
        return this->Expr(children->index(0));
      }
    }
  }
  else {
    lower = nullptr;
    if (n == 1) {
      upper = nullptr;
    }
    else {
      upper = this->Expr(children->index(1));
    }
  }
  return Alloc<expr::Slice>(lower, upper);
}

syntax_asdl::expr_t* Transformer::Expr(pnode::PNode* pnode) {
  int typ;
  syntax_asdl::Token* tok;
  List<pnode::PNode*>* children;
  syntax_asdl::expr_t* test;
  syntax_asdl::expr_t* body;
  syntax_asdl::expr_t* orelse;
  int n;
  List<syntax_asdl::name_type*>* params;
  syntax_asdl::Token* op_tok;
  pnode::PNode* op;
  pnode::PNode* e;
  syntax_asdl::expr_t* node;
  int i;
  syntax_asdl::expr_t* factor;
  Str* nt_name;
  int id_;
  StackRoots _roots({&tok, &children, &test, &body, &orelse, &params, &op_tok, &op, &e, &node, &factor, &nt_name});

  typ = pnode->typ;
  tok = pnode->tok;
  children = pnode->children;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::oil_expr) {
      return this->Expr(children->index(1));
    }
    if (typ == grammar_nt::command_expr) {
      return this->Expr(children->index(0));
    }
    if (typ == grammar_nt::atom) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      return this->_Atom(children);
    }
    if (typ == grammar_nt::testlist) {
      return this->_Tuple(children);
    }
    if (typ == grammar_nt::test) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      test = this->Expr(children->index(2));
      body = this->Expr(children->index(0));
      orelse = this->Expr(children->index(4));
      return Alloc<expr::IfExp>(test, body, orelse);
    }
    if (typ == grammar_nt::lambdef) {
      n = len(children);
      if (n == 4) {
        params = this->_NameTypeList(children->index(1));
      }
      else {
        params = Alloc<List<syntax_asdl::name_type*>>();
      }
      body = this->Expr(children->index((n - 1)));
      return Alloc<expr::Lambda>(params, body);
    }
    if (typ == grammar_nt::or_test) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::and_test) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::not_test) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      op_tok = children->index(0)->tok;
      return Alloc<expr::Unary>(op_tok, this->Expr(children->index(1)));
    }
    else {
      if (typ == grammar_nt::comparison) {
        if (len(children) == 1) {
          return this->Expr(children->index(0));
        }
        return this->_CompareChain(children);
      }
      else {
        if (typ == grammar_nt::range_expr) {
          n = len(children);
          if (n == 1) {
            return this->Expr(children->index(0));
          }
          if (n == 3) {
            return Alloc<expr::Range>(this->Expr(children->index(0)), this->Expr(children->index(2)));
          }
          throw Alloc<AssertionError>();
        }
        else {
          if (typ == grammar_nt::expr) {
            return this->_AssocBinary(children);
          }
        }
      }
    }
    if (typ == grammar_nt::xor_expr) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::and_expr) {
      return this->_AssocBinary(children);
    }
    else {
      if (typ == grammar_nt::shift_expr) {
        return this->_AssocBinary(children);
      }
      else {
        if (typ == grammar_nt::arith_expr) {
          return this->_AssocBinary(children);
        }
        else {
          if (typ == grammar_nt::term) {
            return this->_AssocBinary(children);
          }
          else {
            if (typ == grammar_nt::factor) {
              if (len(children) == 1) {
                return this->Expr(children->index(0));
              }
              op = children->index(0);
              e = children->index(1);
              return Alloc<expr::Unary>(op->tok, this->Expr(e));
            }
            else {
              if (typ == grammar_nt::power) {
                node = this->Expr(children->index(0));
                if (len(children) == 1) {
                  return node;
                }
                n = len(children);
                i = 1;
                while ((i < n and ISNONTERMINAL(children->index(i)->typ))) {
                  node = this->_Trailer(node, children->index(i));
                  i += 1;
                }
                if (i != n) {
                  op_tok = children->index(i)->tok;
                  factor = this->Expr(children->index((i + 1)));
                  node = Alloc<expr::Binary>(op_tok, node, factor);
                }
                return node;
              }
              else {
                if (typ == grammar_nt::oil_expr_sub) {
                  return this->Expr(children->index(0));
                }
                else {
                  if (typ == grammar_nt::sh_array_literal) {
                    return reinterpret_cast<sh_array_literal*>(children->index(1)->tok);
                  }
                  else {
                    if (typ == grammar_nt::sh_command_sub) {
                      return reinterpret_cast<command_sub*>(children->index(1)->tok);
                    }
                    else {
                      if (typ == grammar_nt::braced_var_sub) {
                        return reinterpret_cast<braced_var_sub*>(children->index(1)->tok);
                      }
                      else {
                        if (typ == grammar_nt::dq_string) {
                          return reinterpret_cast<double_quoted*>(children->index(1)->tok);
                        }
                        else {
                          if (typ == grammar_nt::sq_string) {
                            return reinterpret_cast<single_quoted*>(children->index(1)->tok);
                          }
                          else {
                            if (typ == grammar_nt::simple_var_sub) {
                              return Alloc<simple_var_sub>(children->index(0)->tok);
                            }
                            else {
                              nt_name = this->number2symbol->index(typ);
                              throw Alloc<AssertionError>();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    id_ = tok->id;
    if (id_ == Id::Expr_Name) {
      return Alloc<expr::Var>(tok);
    }
    if ((id_ == Id::Expr_DecInt || id_ == Id::Expr_BinInt || id_ == Id::Expr_OctInt || id_ == Id::Expr_HexInt || id_ == Id::Expr_Float)) {
      return Alloc<expr::Const>(tok);
    }
    if ((id_ == Id::Expr_Null || id_ == Id::Expr_True || id_ == Id::Expr_False)) {
      return Alloc<expr::Const>(tok);
    }
    throw Alloc<NotImplementedError>(Id_str(id_));
  }
}

syntax_asdl::expr_t* Transformer::_ArrayItem(pnode::PNode* p_node) {
  pnode::PNode* child0;
  int typ0;
  StackRoots _roots({&child0});

  child0 = p_node->children->index(0);
  typ0 = child0->typ;
  if (ISNONTERMINAL(typ0)) {
    return this->Expr(child0);
  }
  else {
    if (child0->tok->id == Id::Op_LParen) {
      return this->Expr(p_node->children->index(1));
    }
    return this->Expr(child0);
  }
}

List<syntax_asdl::place_expr_t*>* Transformer::_PlaceList(pnode::PNode* p_node) {
  List<syntax_asdl::place_expr_t*>* places;
  int n;
  pnode::PNode* p;
  syntax_asdl::expr_t* e;
  syntax_asdl::expr_t* UP_e;
  int tag;
  StackRoots _roots({&places, &p, &e, &UP_e});

  places = Alloc<List<syntax_asdl::place_expr_t*>>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    e = this->Expr(p);
    UP_e = e;
    tag = e->tag_();
    if (tag == expr_e::Var) {
      expr__Var* e = static_cast<expr__Var*>(UP_e);
      places->append(Alloc<place_expr::Var>(e->name));
    }
    else {
      if ((tag == place_expr_e::Var || tag == place_expr_e::Subscript || tag == place_expr_e::Attribute)) {
        places->append(reinterpret_cast<place_expr_t*>(UP_e));
      }
      else {
        p_die(fmt81(), p->tok ? p->tok : nullptr);
      }
    }
  }
  return places;
}

syntax_asdl::command__VarDecl* Transformer::MakeVarDecl(pnode::PNode* p_node) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* rhs;
  StackRoots _roots({&children, &lhs, &rhs});

  typ = p_node->typ;
  children = p_node->children;
  lhs = this->_NameTypeList(children->index(0));
  rhs = this->Expr(children->index(2));
  return Alloc<command::VarDecl>(nullptr, lhs, rhs);
}

syntax_asdl::command__PlaceMutation* Transformer::MakePlaceMutation(pnode::PNode* p_node) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::place_expr_t*>* place_list;
  syntax_asdl::Token* op_tok;
  syntax_asdl::expr_t* rhs;
  StackRoots _roots({&children, &place_list, &op_tok, &rhs});

  typ = p_node->typ;
  children = p_node->children;
  place_list = this->_PlaceList(children->index(0));
  op_tok = children->index(1)->tok;
  rhs = this->Expr(children->index(2));
  return Alloc<command::PlaceMutation>(nullptr, place_list, op_tok, rhs);
}

Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> Transformer::OilForExpr(pnode::PNode* pnode) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  Str* nt_name;
  StackRoots _roots({&children, &lhs, &iterable, &nt_name});

  typ = pnode->typ;
  children = pnode->children;
  if (typ == grammar_nt::oil_for) {
    lhs = this->_NameTypeList(children->index(1));
    iterable = this->Expr(children->index(3));
    return (Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>(lhs, iterable));
  }
  nt_name = this->number2symbol->index(typ);
  throw Alloc<AssertionError>();
}

void Transformer::_Argument(pnode::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist) {
  List<syntax_asdl::expr_t*>* positional;
  List<syntax_asdl::named_arg*>* named;
  List<pnode::PNode*>* children;
  int n;
  syntax_asdl::expr_t* arg;
  syntax_asdl::expr_t* spread_expr;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  syntax_asdl::named_arg* n1;
  StackRoots _roots({&positional, &named, &children, &arg, &spread_expr, &elt, &comp, &n1});

  positional = arglist->positional;
  named = arglist->named;
  children = p_node->children;
  n = len(children);
  if (n == 1) {
    arg = this->Expr(children->index(0));
    positional->append(arg);
    return ;
  }
  if (n == 2) {
    if (children->index(0)->tok->id == Id::Expr_Ellipsis) {
      spread_expr = this->Expr(children->index(1));
      if (do_named) {
        named->append(Alloc<named_arg>(nullptr, spread_expr));
      }
      else {
        positional->append(Alloc<expr::Spread>(spread_expr, expr_context_e::Store));
      }
      return ;
    }
    if (children->index(1)->typ == grammar_nt::comp_for) {
      elt = this->Expr(children->index(0));
      comp = this->_CompFor(children->index(1));
      arg = Alloc<expr::GeneratorExp>(elt, Alloc<List<syntax_asdl::comprehension*>>(std::initializer_list<syntax_asdl::comprehension*>{comp}));
      positional->append(arg);
      return ;
    }
    throw Alloc<AssertionError>();
  }
  if (n == 3) {
    n1 = Alloc<named_arg>(children->index(0)->tok, this->Expr(children->index(2)));
    named->append(n1);
    return ;
  }
  throw Alloc<NotImplementedError>();
}

void Transformer::_Arglist(List<pnode::PNode*>* children, syntax_asdl::arg_list* arglist) {
  bool do_named;
  do_named = false;
  for (ListIter<pnode::PNode*> it(children); !it.Done(); it.Next()) {
    pnode::PNode* p_child = it.Value();
    if (ISNONTERMINAL(p_child->typ)) {
      this->_Argument(p_child, do_named, arglist);
    }
    else {
      if (p_child->tok->id == Id::Op_Semi) {
        do_named = true;
      }
    }
  }
}

void Transformer::ArgList(pnode::PNode* pnode, syntax_asdl::arg_list* arglist) {
  pnode::PNode* p;
  StackRoots _roots({&p});

  if (len(pnode->children) == 2) {
    return ;
  }
  p = pnode->children->index(1);
  this->_Arglist(p->children, arglist);
}

syntax_asdl::type_expr_t* Transformer::_TypeExpr(pnode::PNode* pnode) {
  return nullptr;
}

List<syntax_asdl::type_expr_t*>* Transformer::_TypeExprList(pnode::PNode* pnode) {
  return nullptr;
}

syntax_asdl::param* Transformer::_ProcParam(pnode::PNode* pnode) {
  List<pnode::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::Token* prefix_tok;
  int i;
  pnode::PNode* child;
  syntax_asdl::Token* name_tok;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;
  StackRoots _roots({&children, &tok0, &prefix_tok, &child, &name_tok, &default_val, &type_});

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  prefix_tok = nullptr;
  i = 0;
  if (tok0->id == Id::Arith_Colon) {
    prefix_tok = tok0;
    i += 1;
  }
  child = children->index(i);
  if (child->tok->id == Id::Expr_Name) {
    name_tok = child->tok;
    default_val = nullptr;
    i += 1;
    if ((i < n and children->index(i)->tok->id == Id::Arith_Equal)) {
      i += 1;
      default_val = this->Expr(children->index(i));
    }
    type_ = nullptr;
    return Alloc<param>(prefix_tok, name_tok, type_, default_val);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::proc_sig_t* Transformer::_ProcParams(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int n;
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* rest;
  syntax_asdl::Token* block;
  int i;
  pnode::PNode* p;
  StackRoots _roots({&children, &params, &rest, &block, &p});

  children = p_node->children;
  n = len(children);
  params = Alloc<List<syntax_asdl::param*>>();
  rest = nullptr;
  block = nullptr;
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      params->append(this->_ProcParam(p));
    }
    else {
      if (p->tok->id == Id::Expr_At) {
        i += 1;
        rest = children->index(i)->tok;
      }
      else {
        if (p->tok->id == Id::Arith_Amp) {
          i += 1;
          block = children->index(i)->tok;
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    i += 2;
  }
  return Alloc<proc_sig::Closed>(params, rest, block);
}

syntax_asdl::param* Transformer::_FuncParam(pnode::PNode* pnode) {
  List<pnode::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;
  syntax_asdl::Token* prefix_tok;
  StackRoots _roots({&children, &tok0, &default_val, &type_, &prefix_tok});

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  if (tok0->id == Id::Expr_Name) {
    default_val = nullptr;
    type_ = nullptr;
    if ((n > 1 and children->index(1)->tok->id == Id::Arith_Equal)) {
      default_val = this->Expr(children->index(2));
    }
    else {
      if ((n > 2 and children->index(2)->tok->id == Id::Arith_Equal)) {
        default_val = this->Expr(children->index(3));
      }
    }
    prefix_tok = nullptr;
    return Alloc<param>(prefix_tok, tok0, type_, default_val);
  }
  throw Alloc<AssertionError>();
}

Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> Transformer::_FuncParams(pnode::PNode* p_node) {
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* splat;
  List<pnode::PNode*>* children;
  int n;
  pnode::PNode* p;
  StackRoots _roots({&params, &splat, &children, &p});

  params = Alloc<List<syntax_asdl::param*>>();
  splat = nullptr;
  children = p_node->children;
  n = len(children);
  for (int i = 0; i < n; ++i) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      params->append(this->_FuncParam(p));
    }
    else {
      if (p->tok->id == Id::Expr_Ellipsis) {
        splat = children->index((i + 1))->tok;
      }
    }
  }
  return (Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>(params, splat));
}

syntax_asdl::proc_sig_t* Transformer::Proc(pnode::PNode* pnode) {
  int typ;
  List<pnode::PNode*>* children;
  int n;
  syntax_asdl::proc_sig_t* sig;
  StackRoots _roots({&children, &sig});

  typ = pnode->typ;
  children = pnode->children;
  n = len(children);
  if (n == 1) {
    sig = Alloc<proc_sig::Open>();
  }
  else {
    if (n == 3) {
      sig = Alloc<proc_sig::Closed>();
    }
    else {
      if (n == 4) {
        sig = this->_ProcParams(children->index(1));
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  return sig;
}

syntax_asdl::command_t* Transformer::func_item(pnode::PNode* node) {
  if (node->tok->id == Id::Expr_While) {
    return Alloc<command::While>(this->Expr(node->children->index(1)), this->_Suite(node->children->index(2)));
  }
  else {
    if (node->tok->id == Id::Expr_For) {
      return Alloc<command::For>(this->_NameTypeList(node->children->index(1)), this->Expr(node->children->index(3)), this->_Suite(node->children->index(4)));
    }
    else {
      if (node->tok->id == Id::Expr_Break) {
        return Alloc<command::Break>();
      }
      else {
        if (node->tok->id == Id::Expr_Continue) {
          return Alloc<command::Continue>();
        }
        else {
          if (node->tok->id == Id::Expr_Return) {
            if (len(node->children) == 1) {
              return Alloc<command::Return>();
            }
            else {
              return Alloc<command::Return>(this->Expr(node->children->index(1)));
            }
          }
          else {
            if (node->tok->id == Id::Expr_Name) {
              return Alloc<command::NoOp>();
            }
            else {
              throw Alloc<NotImplementedError>(Id_str(node->tok->id));
            }
          }
        }
      }
    }
  }
}

List<syntax_asdl::command_t*>* Transformer::func_items(pnode::PNode* pnode) {
  List<syntax_asdl::command_t*>* result;
  int n;
  StackRoots _roots({&result});

  result = Alloc<List<syntax_asdl::command_t*>>();
  n = len(pnode->children);
  for (int i = 0; i < n; i += 2) {
    result->append(this->func_item(pnode->children->index(i)));
  }
  return result;
}

syntax_asdl::command__CommandList* Transformer::_Suite(pnode::PNode* pnode) {
  int n;
  int items_index;
  n = len(pnode->children);
  if (n == 2) {
    return Alloc<command::CommandList>(Alloc<List<syntax_asdl::command_t*>>());
  }
  if (n == 3) {
    if (pnode->children->index(1)->typ == grammar_nt::func_items) {
      items_index = 1;
    }
    else {
      return Alloc<command::CommandList>(Alloc<List<syntax_asdl::command_t*>>());
    }
  }
  if (n == 4) {
    items_index = 2;
  }
  return Alloc<command::CommandList>(this->func_items(pnode->children->index(items_index)));
}

void Transformer::TeaFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out) {
  List<pnode::PNode*>* children;
  int pos;
  int typ2;
  int id_;
  StackRoots _roots({&children});

  children = pnode->children;
  pos = 1;
  typ2 = children->index(pos)->typ;
  if (ISNONTERMINAL(typ2)) {
    Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> tup3 = this->_FuncParams(children->index(pos));
    out->pos_params = tup3.at0();
    out->pos_splat = tup3.at1();
    pos += 1;
  }
  id_ = children->index(pos)->tok->id;
  if (id_ == Id::Op_RParen) {
    pos += 1;
  }
  else {
    if (id_ == Id::Op_Semi) {
      Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> tup4 = this->_FuncParams(children->index((pos + 1)));
      out->named_params = tup4.at0();
      out->named_splat = tup4.at1();
      pos += 3;
    }
  }
  if (children->index(pos)->typ == grammar_nt::type_expr_list) {
    out->return_types = this->_TypeExprList(children->index(pos));
    pos += 1;
  }
  out->body = this->_Suite(children->index(pos));
}

void Transformer::NamedFunc(pnode::PNode* pnode, syntax_asdl::command__Func* out) {
  List<pnode::PNode*>* children;
  StackRoots _roots({&children});

  children = pnode->children;
  out->name = children->index(0)->tok;
  this->TeaFunc(children->index(1), out);
}

List<syntax_asdl::param*>* Transformer::_DataParams(pnode::PNode* p_node) {
  List<syntax_asdl::param*>* params;
  List<pnode::PNode*>* children;
  int n;
  StackRoots _roots({&params, &children});

  params = Alloc<List<syntax_asdl::param*>>();
  children = p_node->children;
  n = len(children);
  for (int i = 0; i < n; i += 2) {
    params->append(this->_FuncParam(children->index(i)));
  }
  return params;
}

void Transformer::Data(pnode::PNode* pnode, syntax_asdl::command__Data* out) {
  List<pnode::PNode*>* children;
  StackRoots _roots({&children});

  children = pnode->children;
  out->name = children->index(0)->tok;
  if (ISNONTERMINAL(children->index(2)->typ)) {
    out->params = this->_DataParams(children->index(2));
  }
}

syntax_asdl::variant_type_t* Transformer::_VariantType(pnode::PNode* pnode) {
  int n;
  n = len(pnode->children);
  if (n == 1) {
    return Alloc<variant_type::Ref>(pnode->children->index(0)->tok);
  }
  else {
    return Alloc<variant_type::Anon>(this->_DataParams(pnode->children->index(1)));
  }
}

syntax_asdl::variant* Transformer::_Variant(pnode::PNode* pnode) {
  syntax_asdl::variant_type_t* t;
  StackRoots _roots({&t});

  t = nullptr;
  if (len(pnode->children) == 2) {
    t = this->_VariantType(pnode->children->index(1));
  }
  return Alloc<variant>(pnode->children->index(0)->tok, t);
}

void Transformer::Enum(pnode::PNode* pnode, syntax_asdl::command__Enum* out) {
  List<pnode::PNode*>* children;
  int start;
  int n;
  pnode::PNode* p_node;
  StackRoots _roots({&children, &p_node});

  children = pnode->children;
  out->name = children->index(0)->tok;
  start = 2;
  if (children->index(start)->tok->id == Id::Op_Newline) {
    start = 3;
  }
  n = len(children);
  for (int i = start; i < (n - 1); i += 2) {
    p_node = children->index(i);
    out->variants->append(this->_Variant(p_node));
  }
}

void Transformer::Class(pnode::PNode* pnode, syntax_asdl::command__Class* out) {
  List<pnode::PNode*>* children;
  StackRoots _roots({&children});

  children = pnode->children;
  out->name = children->index(0)->tok;
  return ;
}

void Transformer::Import(pnode::PNode* pnode, syntax_asdl::command__Import* out) {
  List<pnode::PNode*>* children;
  int typ;
  StackRoots _roots({&children});

  children = pnode->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      single_quoted* sq_part = reinterpret_cast<single_quoted*>(children->index(0)->children->index(1)->tok);
      out->path = sq_part;
    }
  }
}

Str* Transformer::_RangeChar(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  List<syntax_asdl::Token*>* tokens;
  Str* s;
  syntax_asdl::Token* tok;
  StackRoots _roots({&children, &tokens, &s, &tok});

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      single_quoted* sq_part = reinterpret_cast<single_quoted*>(children->index(0)->children->index(1)->tok);
      tokens = sq_part->tokens;
      if (len(tokens) > 1) {
        p_die(dynamic_fmt_dummy(), sq_part);
      }
      if (len(tokens->index(0)->val) > 1) {
        p_die(dynamic_fmt_dummy(), sq_part);
      }
      s = tokens->index(0)->val->index(0);
      return s;
    }
    if (typ == grammar_nt::char_literal) {
      throw Alloc<AssertionError>();
    }
    throw Alloc<NotImplementedError>();
  }
  else {
    tok = p_node->tok;
    if ((tok->id == Id::Expr_Name || tok->id == Id::Expr_DecInt)) {
      if (len(tok->val) != 1) {
        p_die(dynamic_fmt_dummy(), tok);
      }
      return tok->val->index(0);
    }
    throw Alloc<NotImplementedError>();
  }
}

syntax_asdl::class_literal_term_t* Transformer::_NonRangeChars(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  pnode::PNode* p_child;
  StackRoots _roots({&children, &p_child});

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::sq_string) {
      return reinterpret_cast<single_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::simple_var_sub) {
      return Alloc<simple_var_sub>(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return Alloc<class_literal_term::CharLiteral>(children->index(0)->tok);
    }
    throw Alloc<NotImplementedError>();
  }
  else {
    return this->_NameInClass(nullptr, children->index(0)->tok);
  }
}

syntax_asdl::class_literal_term_t* Transformer::_ClassLiteralTerm(pnode::PNode* p_node) {
  List<pnode::PNode*>* children;
  int typ;
  pnode::PNode* p_child;
  int n;
  Str* start;
  Str* end;
  Str* nt_name;
  StackRoots _roots({&children, &p_child, &start, &end, &nt_name});

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::simple_var_sub) {
      return Alloc<simple_var_sub>(p_child->children->index(0)->tok);
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    n = len(children);
    if ((n == 1 and typ == grammar_nt::range_char)) {
      return this->_NonRangeChars(children->index(0));
    }
    if ((n == 3 and children->index(1)->tok->id == Id::Arith_Minus)) {
      start = this->_RangeChar(children->index(0));
      end = this->_RangeChar(children->index(2));
      return Alloc<class_literal_term::Range>(start, end);
    }
  }
  else {
    if (children->index(0)->tok->id == Id::Arith_Tilde) {
      return this->_NameInClass(children->index(0)->tok, children->index(1)->tok);
    }
    throw Alloc<AssertionError>();
  }
  nt_name = this->number2symbol->index(typ);
  throw Alloc<NotImplementedError>(nt_name);
}

List<syntax_asdl::class_literal_term_t*>* Transformer::_ClassLiteral(pnode::PNode* p_node) {
  List<syntax_asdl::class_literal_term_t*>* terms;
  StackRoots _roots({&terms});

  terms = Alloc<List<syntax_asdl::class_literal_term_t*>>();
  for (ListIter<pnode::PNode*> it(p_node->children->slice(1, -1)); !it.Done(); it.Next()) {
    pnode::PNode* c = it.Value();
    terms->append(this->_ClassLiteralTerm(c));
  }
  return terms;
}

syntax_asdl::re_t* Transformer::_NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;
  StackRoots _roots({&negated_speck, &val, &perl});

  if (negated_tok) {
    negated_speck = Alloc<speck>(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (maybe_str_equals(val, str352)) {
    if (negated_tok) {
      p_die(fmt82(), tok);
    }
    return tok;
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return Alloc<posix_class>(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return Alloc<perl_class>(negated_speck, perl);
  }
  if (val->index(0)->isupper()) {
    return Alloc<re::Splice>(tok);
  }
  p_die(fmt83(val), tok);
}

syntax_asdl::class_literal_term_t* Transformer::_NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;
  StackRoots _roots({&negated_speck, &val, &perl});

  if (negated_tok) {
    negated_speck = Alloc<speck>(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (len(val) == 1) {
    if (negated_tok) {
      p_die(fmt84(), tok);
    }
    return Alloc<class_literal_term::CharLiteral>(tok);
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return Alloc<posix_class>(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return Alloc<perl_class>(negated_speck, perl);
  }
  p_die(fmt85(val), tok);
}

syntax_asdl::re_t* Transformer::_ReAtom(pnode::PNode* p_atom) {
  List<pnode::PNode*>* children;
  int typ;
  pnode::PNode* p_child;
  syntax_asdl::Token* tok;
  syntax_asdl::re_t* regex;
  int n;
  syntax_asdl::Token* name_tok;
  StackRoots _roots({&children, &p_child, &tok, &regex, &name_tok});

  children = p_atom->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = p_atom->children->index(0);
    if (typ == grammar_nt::class_literal) {
      return Alloc<re::ClassLiteral>(false, this->_ClassLiteral(p_child));
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::sq_string) {
      return reinterpret_cast<single_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::simple_var_sub) {
      return Alloc<simple_var_sub>(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return children->index(0)->tok;
    }
    throw Alloc<NotImplementedError>(typ);
  }
  else {
    tok = children->index(0)->tok;
    if ((tok->id == Id::Expr_Dot || tok->id == Id::Arith_Caret || tok->id == Id::Expr_Dollar)) {
      return Alloc<speck>(tok->id, tok->span_id);
    }
    if (tok->id == Id::Expr_Name) {
      return this->_NameInRegex(nullptr, tok);
    }
    if (tok->id == Id::Expr_Symbol) {
      if ((str_equals(tok->val, str357) || str_equals(tok->val, str358) || str_equals(tok->val, str359))) {
        return tok;
      }
      p_die(fmt86(tok->val), tok);
    }
    if (tok->id == Id::Expr_At) {
      return Alloc<re::Splice>(children->index(1)->tok);
    }
    if (tok->id == Id::Arith_Tilde) {
      typ = children->index(1)->typ;
      if (ISNONTERMINAL(typ)) {
        return Alloc<re::ClassLiteral>(true, this->_ClassLiteral(children->index(1)));
      }
      else {
        return this->_NameInRegex(tok, children->index(1)->tok);
      }
    }
    if (tok->id == Id::Op_LParen) {
      return Alloc<re::Group>(this->_Regex(children->index(1)));
    }
    if (tok->id == Id::Arith_Less) {
      regex = this->_Regex(children->index(1));
      n = len(children);
      if (n == 5) {
        name_tok = children->index(3)->children->index(0)->tok;
      }
      else {
        name_tok = nullptr;
      }
      return Alloc<re::Capture>(regex, name_tok);
    }
    if (tok->id == Id::Arith_Colon) {
      throw Alloc<NotImplementedError>(Id_str(tok->id));
    }
    throw Alloc<NotImplementedError>(Id_str(tok->id));
  }
}

syntax_asdl::re_repeat_t* Transformer::_RepeatOp(pnode::PNode* p_repeat) {
  syntax_asdl::Token* tok;
  int id_;
  pnode::PNode* p_range;
  List<pnode::PNode*>* children;
  int n;
  StackRoots _roots({&tok, &p_range, &children});

  tok = p_repeat->children->index(0)->tok;
  id_ = tok->id;
  if ((id_ == Id::Arith_Plus || id_ == Id::Arith_Star || id_ == Id::Arith_QMark)) {
    return Alloc<re_repeat::Op>(tok);
  }
  if (id_ == Id::Op_LBrace) {
    p_range = p_repeat->children->index(1);
    children = p_range->children;
    n = len(children);
    if (n == 1) {
      return Alloc<re_repeat::Num>(children->index(0)->tok);
    }
    if (n == 2) {
      if (children->index(0)->tok->id == Id::Expr_DecInt) {
        return Alloc<re_repeat::Range>(children->index(0)->tok, nullptr);
      }
      else {
        return Alloc<re_repeat::Range>(nullptr, children->index(1)->tok);
      }
    }
    if (n == 3) {
      return Alloc<re_repeat::Range>(children->index(0)->tok, children->index(2)->tok);
    }
    throw Alloc<AssertionError>();
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::re_t* Transformer::_Regex(pnode::PNode* p_node) {
  int typ;
  List<pnode::PNode*>* children;
  List<syntax_asdl::re_t*>* alts;
  int n;
  pnode::PNode* c;
  int i;
  List<syntax_asdl::re_t*>* seq;
  syntax_asdl::re_t* r;
  syntax_asdl::re_repeat_t* repeat_op;
  Str* nt_name;
  StackRoots _roots({&children, &alts, &c, &seq, &r, &repeat_op, &nt_name});

  typ = p_node->typ;
  children = p_node->children;
  if (typ == grammar_nt::regex) {
    if (len(children) == 1) {
      return this->_Regex(children->index(0));
    }
    alts = Alloc<List<syntax_asdl::re_t*>>();
    n = len(p_node->children);
    for (int i = 0; i < n; i += 2) {
      c = p_node->children->index(i);
      alts->append(this->_Regex(c));
    }
    return Alloc<re::Alt>(alts);
  }
  if (typ == grammar_nt::re_alt) {
    i = 0;
    n = len(children);
    seq = Alloc<List<syntax_asdl::re_t*>>();
    while (i < n) {
      r = this->_ReAtom(children->index(i));
      i += 1;
      if ((i < n and children->index(i)->typ == grammar_nt::repeat_op)) {
        repeat_op = this->_RepeatOp(children->index(i));
        r = Alloc<re::Repeat>(r, repeat_op);
        i += 1;
      }
      seq->append(r);
    }
    if (len(seq) == 1) {
      return seq->index(0);
    }
    else {
      return Alloc<re::Seq>(seq);
    }
  }
  nt_name = this->number2symbol->index(typ);
  throw Alloc<NotImplementedError>(nt_name);
}

}  // define namespace expr_to_ast

namespace regex_translate {  // define
namespace class_literal_term_e = syntax_asdl::class_literal_term_e;
using syntax_asdl::class_literal_term__Range;
using syntax_asdl::class_literal_term__ByteSet;
using syntax_asdl::class_literal_term__CodePoint;
using syntax_asdl::class_literal_term__CharLiteral;
using syntax_asdl::posix_class;
using syntax_asdl::perl_class;
namespace re_e = syntax_asdl::re_e;
using syntax_asdl::re__ClassLiteral;
using syntax_asdl::re__Primitive;
using syntax_asdl::re__LiteralChars;
using syntax_asdl::re__Seq;
using syntax_asdl::re__Alt;
using syntax_asdl::re__Repeat;
using syntax_asdl::re__Group;
namespace re_repeat_e = syntax_asdl::re_repeat_e;
using syntax_asdl::re_repeat__Op;
using syntax_asdl::re_repeat__Num;
using syntax_asdl::re_repeat__Range;
namespace Id = id_kind_asdl::Id;
Dict<Str*, Str*> gdict0(std::initializer_list<Str*>{}, std::initializer_list<Str*>{});
Dict<Str*, Str*>* PERL_CLASS = &gdict0;

void _ClassLiteralToPosixEre(syntax_asdl::class_literal_term_t* term, List<Str*>* parts) {
  syntax_asdl::class_literal_term_t* UP_term;
  int tag;
  Str* start;
  Str* end;
  int code_point;
  Str* n;
  Str* chars;
  Str* pat;
  StackRoots _roots({&UP_term, &start, &end, &n, &chars, &pat});

  UP_term = term;
  tag = term->tag_();
  if (tag == class_literal_term_e::Range) {
    class_literal_term__Range* term = static_cast<class_literal_term__Range*>(UP_term);
    start = glob_::EreCharClassEscape(term->start);
    end = glob_::EreCharClassEscape(term->end);
    parts->append(fmt87(start, end));
    return ;
  }
  if (tag == class_literal_term_e::ByteSet) {
    class_literal_term__ByteSet* term = static_cast<class_literal_term__ByteSet*>(UP_term);
    parts->append(glob_::EreCharClassEscape(term->bytes));
    return ;
  }
  if (tag == class_literal_term_e::CodePoint) {
    class_literal_term__CodePoint* term = static_cast<class_literal_term__CodePoint*>(UP_term);
    code_point = term->i;
    if (code_point < 128) {
      parts->append(chr(code_point));
    }
    else {
      e_die(fmt88(code_point), term->spid);
    }
    return ;
  }
  if (tag == class_literal_term_e::PerlClass) {
    perl_class* term = static_cast<perl_class*>(UP_term);
    n = term->name;
    chars = PERL_CLASS->index(term->name);
    if (term->negated) {
      e_die(fmt89(), term->negated->span_id);
    }
    else {
      pat = fmt90(chars);
    }
    parts->append(pat);
    return ;
  }
  if (tag == class_literal_term_e::PosixClass) {
    posix_class* term = static_cast<posix_class*>(UP_term);
    n = term->name;
    if (term->negated) {
      e_die(fmt91(), term->negated->span_id);
    }
    else {
      pat = fmt92(n);
    }
    parts->append(pat);
    return ;
  }
  if (tag == class_literal_term_e::CharLiteral) {
    class_literal_term__CharLiteral* term = static_cast<class_literal_term__CharLiteral*>(UP_term);
    parts->append(term->tok->val);
    return ;
  }
  throw Alloc<NotImplementedError>(tag);
}

void AsPosixEre(syntax_asdl::re_t* node, List<Str*>* parts) {
  syntax_asdl::re_t* UP_node;
  int tag;
  int i;
  syntax_asdl::re_repeat_t* op;
  int op_tag;
  syntax_asdl::re_repeat_t* UP_op;
  int op_id;
  Str* lower;
  Str* upper;
  Str* n;
  Str* chars;
  Str* pat;
  StackRoots _roots({&UP_node, &op, &UP_op, &lower, &upper, &n, &chars, &pat});

  UP_node = node;
  tag = node->tag_();
  if (tag == re_e::Primitive) {
    re__Primitive* node = static_cast<re__Primitive*>(UP_node);
    if (node->id == Id::Re_Dot) {
      parts->append(str367);
    }
    else {
      if (node->id == Id::Re_Start) {
        parts->append(str368);
      }
      else {
        if (node->id == Id::Re_End) {
          parts->append(str369);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    return ;
  }
  if (tag == re_e::LiteralChars) {
    re__LiteralChars* node = static_cast<re__LiteralChars*>(UP_node);
    parts->append(glob_::ExtendedRegexEscape(node->s));
    return ;
  }
  if (tag == re_e::Seq) {
    re__Seq* node = static_cast<re__Seq*>(UP_node);
    for (ListIter<syntax_asdl::re_t*> it(node->children); !it.Done(); it.Next()) {
      syntax_asdl::re_t* c = it.Value();
      AsPosixEre(c, parts);
    }
    return ;
  }
  if (tag == re_e::Alt) {
    re__Alt* node = static_cast<re__Alt*>(UP_node);
    i = 0;
    for (ListIter<syntax_asdl::re_t*> it(node->children); !it.Done(); it.Next(), ++i) {
      syntax_asdl::re_t* c = it.Value();
      if (i != 0) {
        parts->append(str370);
      }
      AsPosixEre(c, parts);
    }
    return ;
  }
  if (tag == re_e::Repeat) {
    re__Repeat* node = static_cast<re__Repeat*>(UP_node);
    if (node->child->tag_() == re_e::LiteralChars) {
      re__LiteralChars* child = static_cast<re__LiteralChars*>(node->child);
      if (len(child->s) > 1) {
        e_die(fmt93(), child->spid);
      }
    }
    AsPosixEre(node->child, parts);
    op = node->op;
    op_tag = op->tag_();
    UP_op = op;
    if (op_tag == re_repeat_e::Op) {
      re_repeat__Op* op = static_cast<re_repeat__Op*>(UP_op);
      op_id = op->op->id;
      if (op_id == Id::Arith_Plus) {
        parts->append(str372);
      }
      else {
        if (op_id == Id::Arith_Star) {
          parts->append(str373);
        }
        else {
          if (op_id == Id::Arith_QMark) {
            parts->append(str374);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
      return ;
    }
    if (op_tag == re_repeat_e::Num) {
      re_repeat__Num* op = static_cast<re_repeat__Num*>(UP_op);
      parts->append(fmt94(op->times->val));
      return ;
    }
    if (op_tag == re_repeat_e::Range) {
      re_repeat__Range* op = static_cast<re_repeat__Range*>(UP_op);
      lower = op->lower ? op->lower->val : str376;
      upper = op->upper ? op->upper->val : str377;
      parts->append(fmt95(lower, upper));
      return ;
    }
    throw Alloc<NotImplementedError>(op_tag);
  }
  if ((tag == re_e::Group || tag == re_e::Capture)) {
    re__Group* node = static_cast<re__Group*>(UP_node);
    parts->append(str379);
    AsPosixEre(node->child, parts);
    parts->append(str380);
    return ;
  }
  if (tag == re_e::PerlClass) {
    perl_class* node = static_cast<perl_class*>(UP_node);
    n = node->name;
    chars = PERL_CLASS->index(node->name);
    if (node->negated) {
      pat = fmt96(chars);
    }
    else {
      pat = fmt97(chars);
    }
    parts->append(pat);
    return ;
  }
  if (tag == re_e::PosixClass) {
    posix_class* node = static_cast<posix_class*>(UP_node);
    n = node->name;
    if (node->negated) {
      pat = fmt98(n);
    }
    else {
      pat = fmt99(n);
    }
    parts->append(pat);
    return ;
  }
  if (tag == re_e::ClassLiteral) {
    re__ClassLiteral* node = static_cast<re__ClassLiteral*>(UP_node);
    parts->append(str385);
    if (node->negated) {
      parts->append(str386);
    }
    for (ListIter<syntax_asdl::class_literal_term_t*> it(node->terms); !it.Done(); it.Next()) {
      syntax_asdl::class_literal_term_t* term = it.Value();
      _ClassLiteralToPosixEre(term, parts);
    }
    parts->append(str387);
    return ;
  }
  throw Alloc<NotImplementedError>(tag);
}

}  // define namespace regex_translate

namespace arith_parse {  // define
namespace Id = id_kind_asdl::Id;
namespace arith_expr = syntax_asdl::arith_expr;
using syntax_asdl::arith_expr_t;
using syntax_asdl::word_t;

syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;
  StackRoots _roots({&right});

  right = p->ParseUntil(bp);
  tdop::CheckLhsExpr(right, p->parse_opts->parse_dynamic_arith(), w);
  return Alloc<arith_expr::UnaryAssign>(word_::ArithId(w), right);
}

syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;
  StackRoots _roots({&right});

  right = p->ParseUntil(bp);
  return Alloc<arith_expr::Unary>(Id::Node_UnaryPlus, right);
}

syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;
  StackRoots _roots({&right});

  right = p->ParseUntil(bp);
  return Alloc<arith_expr::Unary>(Id::Node_UnaryMinus, right);
}

syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  int arith_id;
  int op_id;
  arith_id = word_::ArithId(w);
  if (arith_id == Id::Arith_DPlus) {
    op_id = Id::Node_PostDPlus;
  }
  else {
    if (arith_id == Id::Arith_DMinus) {
      op_id = Id::Node_PostDMinus;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  tdop::CheckLhsExpr(left, p->parse_opts->parse_dynamic_arith(), w);
  return Alloc<arith_expr::UnaryAssign>(op_id, left);
}

syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp) {
  syntax_asdl::arith_expr_t* index;
  StackRoots _roots({&index});

  if (!tdop::IsIndexable(left, p->parse_opts->parse_dynamic_arith())) {
    p_die(fmt100(), w);
  }
  index = p->ParseUntil(0);
  p->Eat(Id::Arith_RBracket);
  return Alloc<arith_expr::Binary>(word_::ArithId(w), left, index);
}

syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp) {
  syntax_asdl::arith_expr_t* true_expr;
  syntax_asdl::arith_expr_t* false_expr;
  StackRoots _roots({&true_expr, &false_expr});

  true_expr = p->ParseUntil(0);
  p->Eat(Id::Arith_Colon);
  false_expr = p->ParseUntil(bp);
  return Alloc<arith_expr::TernaryOp>(left, true_expr, false_expr);
}

}  // define namespace arith_parse

namespace bool_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
using syntax_asdl::word_t;
namespace word_e = syntax_asdl::word_e;
namespace bool_expr = syntax_asdl::bool_expr;
using syntax_asdl::bool_expr_t;

BoolParser::BoolParser(word_parse::WordEmitter* w_parser) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(BoolParser)) {
  this->w_parser = w_parser;
  this->words = Alloc<List<syntax_asdl::word_t*>>();
  this->cur_word = nullptr;
  this->bool_id = Id::Undefined_Tok;
  this->bool_kind = Kind::Undefined;
}

void BoolParser::_NextOne(types_asdl::lex_mode_t lex_mode) {
  int n;
  syntax_asdl::word_t* w;
  StackRoots _roots({&w});

  n = len(this->words);
  if (n == 2) {
    this->words->set(0, this->words->index(1));
    this->cur_word = this->words->index(0);
    this->words->pop();
  }
  else {
    if ((n == 0 || n == 1)) {
      w = this->w_parser->ReadWord(lex_mode);
      if (n == 0) {
        this->words->append(w);
      }
      else {
        this->words->set(0, w);
      }
      this->cur_word = w;
    }
  }
  this->bool_id = word_::BoolId(this->cur_word);
  this->bool_kind = consts::GetKind(this->bool_id);
}

void BoolParser::_Next() {
  _Next(lex_mode_e::DBracket);
}

void BoolParser::_Next(types_asdl::lex_mode_t lex_mode) {
  while (true) {
    this->_NextOne(lex_mode);
    if (this->bool_id != Id::Op_Newline) {
      break;
    }
  }
}

syntax_asdl::word_t* BoolParser::_LookAhead() {
  int n;
  syntax_asdl::word_t* w;
  StackRoots _roots({&w});

  n = len(this->words);
  if (n != 1) {
    throw Alloc<AssertionError>();
  }
  w = this->w_parser->ReadWord(lex_mode_e::DBracket);
  this->words->append(w);
  return w;
}

syntax_asdl::bool_expr_t* BoolParser::Parse() {
  syntax_asdl::bool_expr_t* node;
  StackRoots _roots({&node});

  this->_Next();
  node = this->ParseExpr();
  if (this->bool_id != Id::Lit_DRightBracket) {
    p_die(fmt101(), this->cur_word);
  }
  return node;
}

bool BoolParser::_TestAtEnd() {
  return this->bool_id == Id::Lit_DRightBracket;
}

syntax_asdl::bool_expr_t* BoolParser::ParseForBuiltin() {
  syntax_asdl::bool_expr_t* node;
  StackRoots _roots({&node});

  this->_Next();
  node = this->ParseExpr();
  if (this->bool_id != Id::Eof_Real) {
    p_die(fmt102(word_::Pretty(this->cur_word)), this->cur_word);
  }
  return node;
}

syntax_asdl::bool_expr_t* BoolParser::ParseExpr() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;
  StackRoots _roots({&left, &right});

  left = this->ParseTerm();
  if ((this->bool_id == Id::Op_DPipe || this->bool_id == Id::BoolUnary_o)) {
    this->_Next();
    right = this->ParseExpr();
    return Alloc<bool_expr::LogicalOr>(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseTerm() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;
  StackRoots _roots({&left, &right});

  left = this->ParseNegatedFactor();
  if ((this->bool_id == Id::Op_DAmp || this->bool_id == Id::BoolUnary_a)) {
    this->_Next();
    right = this->ParseTerm();
    return Alloc<bool_expr::LogicalAnd>(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseNegatedFactor() {
  syntax_asdl::bool_expr_t* child;
  StackRoots _roots({&child});

  if (this->bool_id == Id::KW_Bang) {
    this->_Next();
    child = this->ParseFactor();
    return Alloc<bool_expr::LogicalNot>(child);
  }
  else {
    return this->ParseFactor();
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseFactor() {
  int op;
  syntax_asdl::word_t* w;
  int tag;
  syntax_asdl::compound_word* tilde;
  syntax_asdl::bool_expr_t* node;
  syntax_asdl::word_t* t2;
  int t2_bool_id;
  id_kind_asdl::Kind_t t2_bool_kind;
  syntax_asdl::word_t* left;
  bool is_regex;
  syntax_asdl::word_t* right;
  StackRoots _roots({&w, &tilde, &node, &t2, &t2_bool_kind, &left, &right});

  if (this->bool_kind == Kind::BoolUnary) {
    op = this->bool_id;
    this->_Next();
    w = this->cur_word;
    tag = w->tag_();
    if ((tag != word_e::Compound and tag != word_e::String)) {
      p_die(fmt103(), w);
    }
    this->_Next();
    tilde = word_::TildeDetect(w);
    if (tilde) {
      w = tilde;
    }
    node = Alloc<bool_expr::Unary>(op, w);
    return node;
  }
  if (this->bool_kind == Kind::Word) {
    t2 = this->_LookAhead();
    t2_bool_id = word_::BoolId(t2);
    t2_bool_kind = consts::GetKind(t2_bool_id);
    if ((t2_bool_kind == Kind::BoolBinary or (t2_bool_id == Id::Op_Less || t2_bool_id == Id::Op_Great))) {
      left = this->cur_word;
      this->_Next();
      op = this->bool_id;
      is_regex = t2_bool_id == Id::BoolBinary_EqualTilde;
      if (is_regex) {
        this->_Next(lex_mode_e::BashRegex);
      }
      else {
        this->_Next();
      }
      right = this->cur_word;
      if (is_regex) {
        ;  // pass
      }
      this->_Next();
      tilde = word_::TildeDetect(left);
      if (tilde) {
        left = tilde;
      }
      tilde = word_::TildeDetect(right);
      if (tilde) {
        right = tilde;
      }
      return Alloc<bool_expr::Binary>(op, left, right);
    }
    else {
      w = this->cur_word;
      tilde = word_::TildeDetect(w);
      if (tilde) {
        w = tilde;
      }
      this->_Next();
      return Alloc<bool_expr::WordTest>(w);
    }
  }
  if (this->bool_id == Id::Op_LParen) {
    this->_Next();
    node = this->ParseExpr();
    if (this->bool_id != Id::Op_RParen) {
      p_die(fmt104(word_::Pretty(this->cur_word)), this->cur_word);
    }
    this->_Next();
    return node;
  }
  p_die(fmt105(ui::PrettyId(this->bool_id)), this->cur_word);
}

}  // define namespace bool_parse

namespace braces {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__BracedTree;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__BracedTuple;
using syntax_asdl::word_part__BracedRange;
int NO_STEP = 0;

_NotARange::_NotARange(Str* s) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_NotARange)) {
  ;  // pass
}

_RangeParser::_RangeParser(match::SimpleLexer* lexer, int span_id) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_RangeParser)) {
  this->lexer = lexer;
  this->span_id = span_id;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str394;
}

void _RangeParser::_Next() {
  Tuple2<int, Str*> tup0 = this->lexer->Next();
  this->token_type = tup0.at0();
  this->token_val = tup0.at1();
}

Str* _RangeParser::_Eat(int token_type) {
  Str* val;
  StackRoots _roots({&val});

  if (this->token_type != token_type) {
    throw Alloc<_NotARange>(fmt106(token_type, this->token_type));
  }
  val = this->token_val;
  this->_Next();
  return val;
}

int _RangeParser::_ParseStep() {
  int step;
  this->_Next();
  step = to_int(this->_Eat(Id::Range_Int));
  if (step == 0) {
    p_die(fmt107(), this->span_id);
  }
  return step;
}

syntax_asdl::word_part__BracedRange* _RangeParser::_ParseRange(int range_kind) {
  Str* start;
  Str* end;
  int step;
  syntax_asdl::word_part__BracedRange* part;
  StackRoots _roots({&start, &end, &part});

  start = this->token_val;
  this->_Next();
  this->_Eat(Id::Range_Dots);
  end = this->_Eat(range_kind);
  if (this->token_type == Id::Range_Dots) {
    step = this->_ParseStep();
  }
  else {
    step = NO_STEP;
  }
  part = Alloc<word_part::BracedRange>(range_kind, start, end, step);
  return part;
}

syntax_asdl::word_part__BracedRange* _RangeParser::Parse() {
  syntax_asdl::word_part__BracedRange* part;
  int start;
  int end;
  int start_num;
  int end_num;
  bool upper1;
  bool upper2;
  StackRoots _roots({&part});

  this->_Next();
  if (this->token_type == Id::Range_Int) {
    part = this->_ParseRange(this->token_type);
    start = to_int(part->start);
    end = to_int(part->end);
    if (start < end) {
      if (part->step == NO_STEP) {
        part->step = 1;
      }
      if (part->step <= 0) {
        p_die(fmt108(part->step), this->span_id);
      }
    }
    else {
      if (start > end) {
        if (part->step == NO_STEP) {
          part->step = -1;
        }
        if (part->step >= 0) {
          p_die(fmt109(part->step), this->span_id);
        }
      }
      else {
        part->step = 1;
      }
    }
  }
  else {
    if (this->token_type == Id::Range_Char) {
      part = this->_ParseRange(this->token_type);
      start_num = ord(part->start->index(0));
      end_num = ord(part->end->index(0));
      if (start_num < end_num) {
        if (part->step == NO_STEP) {
          part->step = 1;
        }
        if (part->step <= 0) {
          p_die(fmt110(part->step), this->span_id);
        }
      }
      else {
        if (start_num > end_num) {
          if (part->step == NO_STEP) {
            part->step = -1;
          }
          if (part->step >= 0) {
            p_die(fmt111(part->step), this->span_id);
          }
        }
        else {
          part->step = 1;
        }
      }
      upper1 = part->start->isupper();
      upper2 = part->end->isupper();
      if (upper1 != upper2) {
        p_die(fmt112(), this->span_id);
      }
    }
    else {
      throw Alloc<_NotARange>(str402);
    }
  }
  this->_Eat(Id::Eol_Tok);
  return part;
}

syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok) {
  match::SimpleLexer* lexer;
  braces::_RangeParser* p;
  syntax_asdl::word_part__BracedRange* part;
  StackRoots _roots({&lexer, &p, &part});

  lexer = match::BraceRangeLexer(tok->val);
  p = Alloc<_RangeParser>(lexer, tok->span_id);
  try {
    part = p->Parse();
  }
  catch (_NotARange* e) {
    return nullptr;
  }
  part->spids->append(tok->span_id);
  return part;
}

_StackFrame::_StackFrame(List<syntax_asdl::word_part_t*>* cur_parts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_StackFrame)) {
  this->cur_parts = cur_parts;
  this->alt_part = Alloc<word_part::BracedTuple>();
  this->saw_comma = false;
}

syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* cur_parts;
  List<braces::_StackFrame*>* stack;
  bool found;
  int i;
  bool append;
  syntax_asdl::word_part_t* UP_part;
  int id_;
  braces::_StackFrame* new_frame;
  syntax_asdl::word_part_t* range_part;
  syntax_asdl::word_part_t* part2;
  braces::_StackFrame* frame;
  StackRoots _roots({&cur_parts, &stack, &UP_part, &new_frame, &range_part, &part2, &frame});

  cur_parts = Alloc<List<syntax_asdl::word_part_t*>>();
  stack = Alloc<List<braces::_StackFrame*>>();
  found = false;
  i = 0;
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next(), ++i) {
    syntax_asdl::word_part_t* part = it.Value();
    append = true;
    UP_part = part;
    if (part->tag_() == word_part_e::Literal) {
      Token* part = static_cast<Token*>(UP_part);
      id_ = part->id;
      if (id_ == Id::Lit_LBrace) {
        new_frame = Alloc<_StackFrame>(cur_parts);
        stack->append(new_frame);
        cur_parts = Alloc<List<syntax_asdl::word_part_t*>>();
        append = false;
        found = true;
      }
      else {
        if (id_ == Id::Lit_Comma) {
          if (len(stack)) {
            stack->index(-1)->saw_comma = true;
            stack->index(-1)->alt_part->words->append(Alloc<compound_word>(cur_parts));
            cur_parts = Alloc<List<syntax_asdl::word_part_t*>>();
            append = false;
          }
        }
        else {
          if (id_ == Id::Lit_RBrace) {
            if (len(stack) == 0) {
              return nullptr;
            }
            range_part = nullptr;
            if ((!stack->index(-1)->saw_comma and len(cur_parts) == 1)) {
              part2 = cur_parts->index(0);
              if (part2->tag_() == word_part_e::Literal) {
                Token* tok = static_cast<Token*>(part2);
                if (tok->id == Id::Lit_Chars) {
                  range_part = _RangePartDetect(tok);
                  if (range_part) {
                    frame = stack->pop();
                    cur_parts = frame->cur_parts;
                    cur_parts->append(range_part);
                    append = false;
                  }
                }
              }
            }
            if (!range_part) {
              if (!stack->index(-1)->saw_comma) {
                return nullptr;
              }
              stack->index(-1)->alt_part->words->append(Alloc<compound_word>(cur_parts));
              frame = stack->pop();
              cur_parts = frame->cur_parts;
              cur_parts->append(frame->alt_part);
              append = false;
            }
          }
        }
      }
    }
    if (append) {
      cur_parts->append(part);
    }
  }
  if (len(stack) != 0) {
    return nullptr;
  }
  if (found) {
    return Alloc<word::BracedTree>(cur_parts);
  }
  else {
    return nullptr;
  }
}

List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::word__BracedTree* brace_tree;
  StackRoots _roots({&out, &brace_tree});

  out = Alloc<List<syntax_asdl::word_t*>>();
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::compound_word* w = it.Value();
    if (len(w->parts) >= 3) {
      brace_tree = _BraceDetect(w);
      if (brace_tree) {
        out->append(brace_tree);
        continue;
      }
    }
    out->append(w);
  }
  return out;
}

int _LeadingZeros(Str* s) {
  int n;
  n = 0;
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* c = it.Value();
    if (str_equals(c, str403)) {
      n += 1;
    }
    else {
      break;
    }
  }
  return n;
}

Str* _IntToString(int i, int width) {
  Str* s;
  int n;
  Str* pad;
  StackRoots _roots({&s, &pad});

  s = str(i);
  n = len(s);
  if (n < width) {
    pad = str_repeat(str404, (width - n));
    return str_concat(pad, s);
  }
  else {
    return s;
  }
}

List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part) {
  List<Str*>* nums;
  int z1;
  int z2;
  int width;
  int n;
  int end;
  int step;
  List<Str*>* chars;
  int ord_end;
  StackRoots _roots({&nums, &chars});

  if (part->kind == Id::Range_Int) {
    nums = Alloc<List<Str*>>();
    z1 = _LeadingZeros(part->start);
    z2 = _LeadingZeros(part->end);
    if ((z1 == 0 and z2 == 0)) {
      width = 0;
    }
    else {
      if (z1 < z2) {
        width = len(part->end);
      }
      else {
        width = len(part->start);
      }
    }
    n = to_int(part->start);
    end = to_int(part->end);
    step = part->step;
    if (step > 0) {
      while (true) {
        nums->append(_IntToString(n, width));
        n += step;
        if (n > end) {
          break;
        }
      }
    }
    else {
      while (true) {
        nums->append(_IntToString(n, width));
        n += step;
        if (n < end) {
          break;
        }
      }
    }
    return nums;
  }
  else {
    chars = Alloc<List<Str*>>();
    n = ord(part->start);
    ord_end = ord(part->end);
    step = part->step;
    if (step > 0) {
      while (true) {
        chars->append(chr(n));
        n += step;
        if (n > ord_end) {
          break;
        }
      }
    }
    else {
      while (true) {
        chars->append(chr(n));
        n += step;
        if (n < ord_end) {
          break;
        }
      }
    }
    return chars;
  }
}

List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes) {
  List<List<syntax_asdl::word_part_t*>*>* out;
  List<syntax_asdl::word_part_t*>* prefix;
  syntax_asdl::word_part_t* expand_part;
  syntax_asdl::word_part_t* UP_part;
  List<List<syntax_asdl::word_part_t*>*>* expanded_alts;
  List<syntax_asdl::word_part_t*>* out_parts;
  List<Str*>* strs;
  List<syntax_asdl::word_part_t*>* out_parts_;
  syntax_asdl::Token* t;
  StackRoots _roots({&out, &prefix, &expand_part, &UP_part, &expanded_alts, &out_parts, &strs, &out_parts_, &t});

  out = Alloc<List<List<syntax_asdl::word_part_t*>*>>();
  prefix = parts->slice(0, first_alt_index);
  expand_part = parts->index(first_alt_index);
  UP_part = expand_part;
  switch (expand_part->tag_()) {
    case word_part_e::BracedTuple: {
      word_part__BracedTuple* expand_part = static_cast<word_part__BracedTuple*>(UP_part);
      expanded_alts = Alloc<List<List<syntax_asdl::word_part_t*>*>>();
      for (ListIter<syntax_asdl::compound_word*> it(expand_part->words); !it.Done(); it.Next()) {
        syntax_asdl::compound_word* w = it.Value();
        expanded_alts->extend(_BraceExpand(w->parts));
      }
      for (ListIter<List<syntax_asdl::word_part_t*>*> it(expanded_alts); !it.Done(); it.Next()) {
        List<syntax_asdl::word_part_t*>* alt_parts = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts = Alloc<List<syntax_asdl::word_part_t*>>();
          out_parts->extend(prefix);
          out_parts->extend(alt_parts);
          out_parts->extend(suffix);
          out->append(out_parts);
        }
      }
    }
      break;
    case word_part_e::BracedRange: {
      word_part__BracedRange* expand_part = static_cast<word_part__BracedRange*>(UP_part);
      strs = _RangeStrings(expand_part);
      for (ListIter<Str*> it(strs); !it.Done(); it.Next()) {
        Str* s = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts_ = Alloc<List<syntax_asdl::word_part_t*>>();
          out_parts_->extend(prefix);
          t = Alloc<Token>(Id::Lit_Chars, expand_part->spids->index(0), s);
          out_parts_->append(t);
          out_parts_->extend(suffix);
          out->append(out_parts_);
        }
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return out;
}

List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts) {
  int num_alts;
  int first_alt_index;
  int i;
  int tag;
  List<syntax_asdl::word_part_t*>* suffix;
  List<syntax_asdl::word_part_t*>* tail_parts;
  List<List<syntax_asdl::word_part_t*>*>* suffixes;
  StackRoots _roots({&suffix, &tail_parts, &suffixes});

  num_alts = 0;
  first_alt_index = -1;
  i = 0;
  for (ListIter<syntax_asdl::word_part_t*> it(parts); !it.Done(); it.Next(), ++i) {
    syntax_asdl::word_part_t* part = it.Value();
    tag = part->tag_();
    if ((tag == word_part_e::BracedTuple || tag == word_part_e::BracedRange)) {
      num_alts += 1;
      if (num_alts == 1) {
        first_alt_index = i;
      }
      else {
        if (num_alts == 2) {
          break;
        }
      }
    }
  }
  if (num_alts == 0) {
    return Alloc<List<List<syntax_asdl::word_part_t*>*>>(std::initializer_list<List<syntax_asdl::word_part_t*>*>{parts});
  }
  else {
    if (num_alts == 1) {
      suffix = parts->slice((first_alt_index + 1));
      return _ExpandPart(parts, first_alt_index, Alloc<List<List<syntax_asdl::word_part_t*>*>>(std::initializer_list<List<syntax_asdl::word_part_t*>*>{suffix}));
    }
    else {
      tail_parts = parts->slice((first_alt_index + 1));
      suffixes = _BraceExpand(tail_parts);
      return _ExpandPart(parts, first_alt_index, suffixes);
    }
  }
}

List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::compound_word*>* out;
  syntax_asdl::word_t* UP_w;
  List<List<syntax_asdl::word_part_t*>*>* parts_list;
  List<syntax_asdl::compound_word*>* tmp;
  StackRoots _roots({&out, &UP_w, &parts_list, &tmp});

  out = Alloc<List<syntax_asdl::compound_word*>>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    UP_w = w;
    switch (w->tag_()) {
      case word_e::BracedTree: {
        word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
        parts_list = _BraceExpand(w->parts);
        tmp = Alloc<List<syntax_asdl::compound_word*>>();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(parts_list); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* p = it.Value();
          tmp->append(Alloc<compound_word>(p));
        }
        out->extend(tmp);
      }
        break;
      case word_e::Compound: {
        compound_word* w = static_cast<compound_word*>(UP_w);
        out->append(w);
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  return out;
}

}  // define namespace braces

namespace builtin_assign {  // define
namespace builtin_i = option_asdl::builtin_i;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Str;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__AssocArray;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::scope_e;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::cmd_value__Assign;
namespace source = syntax_asdl::source;
int _OTHER = 0;
int _READONLY = 1;
int _EXPORT = 2;

int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags) {
  return _PrintVariables(mem, cmd_val, attrs, print_flags, _OTHER);
}

int _PrintVariables(state::Mem* mem, runtime_asdl::cmd_value__Assign* cmd_val, args::_Attributes* attrs, bool print_flags, int builtin) {
  Dict<Str*, runtime_asdl::value_t*>* flag;
  runtime_asdl::value_t* tmp_g;
  runtime_asdl::value_t* tmp_a;
  runtime_asdl::value_t* tmp_A;
  bool flag_g;
  bool flag_a;
  bool flag_A;
  runtime_asdl::value_t* tmp_n;
  runtime_asdl::value_t* tmp_r;
  runtime_asdl::value_t* tmp_x;
  Str* flag_n;
  Str* flag_r;
  Str* flag_x;
  runtime_asdl::scope_t which_scopes;
  bool print_all;
  Dict<Str*, runtime_asdl::cell*>* cells;
  List<Str*>* names;
  Str* name;
  Str* s;
  Str* invalid;
  int count;
  runtime_asdl::cell* cell;
  runtime_asdl::value_t* val;
  List<Str*>* decl;
  List<Str*>* flags;
  bool has_holes;
  bool first;
  int i;
  List<Str*>* body;
  Str* key_quoted;
  Str* value_quoted;
  StackRoots _roots({&flag, &tmp_g, &tmp_a, &tmp_A, &tmp_n, &tmp_r, &tmp_x, &flag_n, &flag_r, &flag_x, &which_scopes, &cells, &names, &name, &s, &invalid, &cell, &val, &decl, &flags, &body, &key_quoted, &value_quoted});

  flag = attrs->attrs;
  tmp_g = flag->get(str405);
  tmp_a = flag->get(str406);
  tmp_A = flag->get(str407);
  flag_g = (tmp_g and tmp_g->tag_() == value_e::Bool) ? static_cast<value__Bool*>(tmp_g)->b : false;
  flag_a = (tmp_a and tmp_a->tag_() == value_e::Bool) ? static_cast<value__Bool*>(tmp_a)->b : false;
  flag_A = (tmp_A and tmp_A->tag_() == value_e::Bool) ? static_cast<value__Bool*>(tmp_A)->b : false;
  tmp_n = flag->get(str408);
  tmp_r = flag->get(str409);
  tmp_x = flag->get(str410);
  flag_n = (tmp_n and tmp_n->tag_() == value_e::Str) ? static_cast<value__Str*>(tmp_n)->s : nullptr;
  flag_r = (tmp_r and tmp_r->tag_() == value_e::Str) ? static_cast<value__Str*>(tmp_r)->s : nullptr;
  flag_x = (tmp_x and tmp_x->tag_() == value_e::Str) ? static_cast<value__Str*>(tmp_x)->s : nullptr;
  if (cmd_val->builtin_id == builtin_i::local) {
    if ((flag_g and !mem->IsGlobalScope())) {
      return 1;
    }
    which_scopes = scope_e::LocalOnly;
  }
  else {
    if (flag_g) {
      which_scopes = scope_e::GlobalOnly;
    }
    else {
      which_scopes = mem->ScopesForReading();
    }
  }
  if (len(cmd_val->pairs) == 0) {
    print_all = true;
    cells = mem->GetAllCells(which_scopes);
    names = sorted(cells);
  }
  else {
    print_all = false;
    names = Alloc<List<Str*>>();
    cells = Alloc<Dict<Str*, runtime_asdl::cell*>>();
    for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
      runtime_asdl::assign_arg* pair = it.Value();
      name = pair->var_name;
      if ((pair->rval and pair->rval->tag_() == value_e::Str)) {
        s = static_cast<value__Str*>(pair->rval)->s;
        invalid = fmt113(name, s);
        names->append(invalid);
        cells->set(invalid, nullptr);
      }
      else {
        names->append(name);
        cells->set(name, mem->GetCell(name, which_scopes));
      }
    }
  }
  count = 0;
  for (ListIter<Str*> it(names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    cell = cells->index(name);
    if (cell == nullptr) {
      continue;
    }
    val = cell->val;
    if (val->tag_() == value_e::Undef) {
      continue;
    }
    if ((builtin == _READONLY and !cell->readonly)) {
      continue;
    }
    if ((builtin == _EXPORT and !cell->exported)) {
      continue;
    }
    if ((maybe_str_equals(flag_n, str412) and !cell->nameref)) {
      continue;
    }
    if ((maybe_str_equals(flag_n, str413) and cell->nameref)) {
      continue;
    }
    if ((maybe_str_equals(flag_r, str414) and !cell->readonly)) {
      continue;
    }
    if ((maybe_str_equals(flag_r, str415) and cell->readonly)) {
      continue;
    }
    if ((maybe_str_equals(flag_x, str416) and !cell->exported)) {
      continue;
    }
    if ((maybe_str_equals(flag_x, str417) and cell->exported)) {
      continue;
    }
    if ((flag_a and val->tag_() != value_e::MaybeStrArray)) {
      continue;
    }
    if ((flag_A and val->tag_() != value_e::AssocArray)) {
      continue;
    }
    decl = Alloc<List<Str*>>();
    if (print_flags) {
      flags = Alloc<List<Str*>>();
      if (cell->nameref) {
        flags->append(str418);
      }
      if (cell->readonly) {
        flags->append(str419);
      }
      if (cell->exported) {
        flags->append(str420);
      }
      if (val->tag_() == value_e::MaybeStrArray) {
        flags->append(str421);
      }
      else {
        if (val->tag_() == value_e::AssocArray) {
          flags->append(str422);
        }
      }
      if (len(flags) == 0) {
        flags->append(str423);
      }
      decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str424, str425->join(flags), str426, name}));
    }
    else {
      decl->append(name);
    }
    if (val->tag_() == value_e::Str) {
      value__Str* str_val = static_cast<value__Str*>(val);
      decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str427, qsn::maybe_shell_encode(str_val->s)}));
    }
    else {
      if (val->tag_() == value_e::MaybeStrArray) {
        value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
        has_holes = false;
        for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s == nullptr) {
            has_holes = true;
            break;
          }
        }
        if (has_holes) {
          decl->append(str428);
          first = true;
          i = 0;
          for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next(), ++i) {
            Str* element = it.Value();
            if (element != nullptr) {
              if (first) {
                decl->append(str429);
                first = false;
              }
              decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str430, name, str431, str(i), str432, qsn::maybe_shell_encode(element)}));
            }
          }
        }
        else {
          body = Alloc<List<Str*>>();
          for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
            Str* element = it.Value();
            if (len(body) > 0) {
              body->append(str433);
            }
            body->append(qsn::maybe_shell_encode(element));
          }
          decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str434, str435->join(body), str436}));
        }
      }
      else {
        if (val->tag_() == value_e::AssocArray) {
          value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
          body = Alloc<List<Str*>>();
          for (ListIter<Str*> it(sorted(assoc_val->d)); !it.Done(); it.Next()) {
            Str* key = it.Value();
            if (len(body) > 0) {
              body->append(str437);
            }
            key_quoted = qsn::maybe_shell_encode(key, qsn::MUST_QUOTE);
            value_quoted = qsn::maybe_shell_encode(assoc_val->d->index(key));
            body->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str438, key_quoted, str439, value_quoted}));
          }
          if (len(body) > 0) {
            decl->extend(Alloc<List<Str*>>(std::initializer_list<Str*>{str440, str441->join(body), str442}));
          }
        }
        else {
          ;  // pass
        }
      }
    }
    print(str443->join(decl));
    count += 1;
  }
  if ((print_all or count == len(names))) {
    return 0;
  }
  else {
    return 1;
  }
}

Export::Export(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
}

int Export::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  args::Reader* arg_r;
  args::_Attributes* attrs;
  arg_types::export_* arg;
  StackRoots _roots({&arg_r, &attrs, &arg});

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  attrs = flag_spec::Parse(str444, arg_r);
  arg = Alloc<arg_types::export_>(attrs->attrs);
  if (arg->f) {
    e_usage(str445);
  }
  if ((arg->p or len(cmd_val->pairs) == 0)) {
    return _PrintVariables(this->mem, cmd_val, attrs, true, _EXPORT);
  }
  if (arg->n) {
    for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
      runtime_asdl::assign_arg* pair = it.Value();
      if (pair->rval != nullptr) {
        e_usage(fmt114(), pair->spid);
      }
      this->mem->ClearFlag(pair->var_name, state::ClearExport);
    }
  }
  else {
    for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
      runtime_asdl::assign_arg* pair = it.Value();
      state::SetLocalShopt(this->mem, Alloc<lvalue::Named>(pair->var_name), pair->rval, state::SetExport);
    }
  }
  return 0;
}

runtime_asdl::value_t* _ReconcileTypes(runtime_asdl::value_t* rval, bool flag_a, bool flag_A, int span_id) {
  if ((flag_a and (rval != nullptr and rval->tag_() != value_e::MaybeStrArray))) {
    e_usage(fmt115(), span_id);
  }
  if ((flag_A and rval)) {
    if (rval->tag_() == value_e::MaybeStrArray) {
      value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(rval);
      if (len(array_val->strs) == 0) {
        return Alloc<value::AssocArray>(Alloc<Dict<Str*, Str*>>());
      }
    }
    if (rval->tag_() != value_e::AssocArray) {
      e_usage(fmt116(), span_id);
    }
  }
  return rval;
}

Readonly::Readonly(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
}

int Readonly::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  args::Reader* arg_r;
  args::_Attributes* attrs;
  arg_types::readonly* arg;
  runtime_asdl::value_t* rval;
  StackRoots _roots({&arg_r, &attrs, &arg, &rval});

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  attrs = flag_spec::Parse(str449, arg_r);
  arg = Alloc<arg_types::readonly>(attrs->attrs);
  if ((arg->p or len(cmd_val->pairs) == 0)) {
    return _PrintVariables(this->mem, cmd_val, attrs, true, _READONLY);
  }
  for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
    runtime_asdl::assign_arg* pair = it.Value();
    if (pair->rval == nullptr) {
      if (arg->a) {
        rval = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
      }
      else {
        if (arg->A) {
          rval = Alloc<value::AssocArray>(Alloc<Dict<Str*, Str*>>());
        }
        else {
          rval = nullptr;
        }
      }
    }
    else {
      rval = pair->rval;
    }
    rval = _ReconcileTypes(rval, arg->a, arg->A, pair->spid);
    state::SetLocalShopt(this->mem, Alloc<lvalue::Named>(pair->var_name), rval, state::SetReadOnly);
  }
  return 0;
}

NewVar::NewVar(state::Mem* mem, Dict<Str*, runtime_asdl::Proc*>* funcs, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->funcs = funcs;
  this->errfmt = errfmt;
}

int NewVar::_PrintFuncs(List<Str*>* names) {
  int status;
  status = 0;
  for (ListIter<Str*> it(names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    if (dict_contains(this->funcs, name)) {
      print(name);
    }
    else {
      status = 1;
    }
  }
  return status;
}

int NewVar::Run(runtime_asdl::cmd_value__Assign* cmd_val) {
  args::Reader* arg_r;
  args::_Attributes* attrs;
  arg_types::new_var* arg;
  int status;
  List<Str*>* names;
  runtime_asdl::scope_t which_scopes;
  int flags;
  int flags_to_clear;
  runtime_asdl::value_t* rval;
  runtime_asdl::value_t* old_val;
  StackRoots _roots({&arg_r, &attrs, &arg, &names, &which_scopes, &rval, &old_val});

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  attrs = flag_spec::Parse(str450, arg_r);
  arg = Alloc<arg_types::new_var>(attrs->attrs);
  status = 0;
  if (arg->f) {
    names = arg_r->Rest();
    if (len(names)) {
      status = this->_PrintFuncs(names);
    }
    else {
      e_usage(str451);
    }
    return status;
  }
  if (arg->F) {
    names = arg_r->Rest();
    if (len(names)) {
      status = this->_PrintFuncs(names);
    }
    else {
      for (ListIter<Str*> it(sorted(this->funcs)); !it.Done(); it.Next()) {
        Str* func_name = it.Value();
        print(fmt117(func_name));
      }
    }
    return status;
  }
  if (arg->p) {
    return _PrintVariables(this->mem, cmd_val, attrs, true);
  }
  else {
    if (len(cmd_val->pairs) == 0) {
      return _PrintVariables(this->mem, cmd_val, attrs, false);
    }
  }
  if (cmd_val->builtin_id == builtin_i::local) {
    which_scopes = scope_e::LocalOnly;
  }
  else {
    if (arg->g) {
      which_scopes = scope_e::GlobalOnly;
    }
    else {
      which_scopes = scope_e::LocalOnly;
    }
  }
  flags = 0;
  if (maybe_str_equals(arg->x, str453)) {
    flags |= state::SetExport;
  }
  if (maybe_str_equals(arg->r, str454)) {
    flags |= state::SetReadOnly;
  }
  if (maybe_str_equals(arg->n, str455)) {
    flags |= state::SetNameref;
  }
  flags_to_clear = 0;
  if (maybe_str_equals(arg->x, str456)) {
    flags |= state::ClearExport;
  }
  if (maybe_str_equals(arg->r, str457)) {
    flags |= state::ClearReadOnly;
  }
  if (maybe_str_equals(arg->n, str458)) {
    flags |= state::ClearNameref;
  }
  for (ListIter<runtime_asdl::assign_arg*> it(cmd_val->pairs); !it.Done(); it.Next()) {
    runtime_asdl::assign_arg* pair = it.Value();
    rval = pair->rval;
    if ((rval == nullptr and (arg->a or arg->A))) {
      old_val = this->mem->GetValue(pair->var_name);
      if (arg->a) {
        if (old_val->tag_() != value_e::MaybeStrArray) {
          rval = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
        }
      }
      else {
        if (arg->A) {
          if (old_val->tag_() != value_e::AssocArray) {
            rval = Alloc<value::AssocArray>(Alloc<Dict<Str*, Str*>>());
          }
        }
      }
    }
    rval = _ReconcileTypes(rval, arg->a, arg->A, pair->spid);
    this->mem->SetValue(Alloc<lvalue::Named>(pair->var_name), rval, which_scopes, flags);
  }
  return status;
}

Unset::Unset(state::Mem* mem, optview::Exec* exec_opts, Dict<Str*, runtime_asdl::Proc*>* funcs, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->funcs = funcs;
  this->parse_ctx = parse_ctx;
  this->arith_ev = arith_ev;
  this->errfmt = errfmt;
}

bool Unset::_UnsetVar(Str* arg, int spid, bool proc_fallback) {
  alloc::Arena* arena;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* anode;
  runtime_asdl::lvalue_t* lval;
  bool found;
  StackRoots _roots({&arena, &a_parser, &anode, &lval});

  arena = this->parse_ctx->arena;
  a_parser = this->parse_ctx->MakeArithParser(arg);
  {  // with
    alloc::ctx_Location ctx(arena, Alloc<source::ArgvWord>(spid));

    try {
      anode = a_parser->Parse();
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      e_usage(fmt118(), spid);
    }
  }
  lval = this->arith_ev->EvalArithLhs(anode, spid);
  if ((!this->exec_opts->eval_unsafe_arith() and lval->tag_() != lvalue_e::Named)) {
    e_usage(fmt119(), spid);
  }
  found = false;
  try {
    found = this->mem->Unset(lval, false);
  }
  catch (error::Runtime* e) {
    e->span_id = spid;
    ui::PrettyPrintError(e, arena);
    return false;
  }
  if ((proc_fallback and !found)) {
    if (dict_contains(this->funcs, arg)) {
      this->funcs->remove(arg);
    }
  }
  return true;
}

int Unset::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::unset* arg;
  List<Str*>* argv;
  List<int>* arg_spids;
  int i;
  int spid;
  StackRoots _roots({&attrs, &arg_r, &arg, &argv, &arg_spids});

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str461, cmd_val);
  attrs = tup0.at0();
  arg_r = tup0.at1();
  arg = Alloc<arg_types::unset>(attrs->attrs);
  Tuple2<List<Str*>*, List<int>*> tup1 = arg_r->Rest2();
  argv = tup1.at0();
  arg_spids = tup1.at1();
  i = 0;
  for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
    Str* name = it.Value();
    spid = arg_spids->index(i);
    if (arg->f) {
      if (dict_contains(this->funcs, name)) {
        this->funcs->remove(name);
      }
    }
    else {
      if (arg->v) {
        if (!this->_UnsetVar(name, spid, false)) {
          return 1;
        }
      }
      else {
        if (!this->_UnsetVar(name, spid, true)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

Shift::Shift(state::Mem* mem) {
  this->mem = mem;
}

int Shift::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  int num_args;
  int n;
  Str* arg;
  StackRoots _roots({&arg});

  num_args = (len(cmd_val->argv) - 1);
  if (num_args == 0) {
    n = 1;
  }
  else {
    if (num_args == 1) {
      arg = cmd_val->argv->index(1);
      try {
        n = to_int(arg);
      }
      catch (ValueError*) {
        e_usage(fmt120(arg));
      }
    }
    else {
      e_usage(str463);
    }
  }
  return this->mem->Shift(n);
}

}  // define namespace builtin_assign

namespace builtin_meta {  // define
namespace cmd_value = runtime_asdl::cmd_value;
namespace source = syntax_asdl::source;

Eval::Eval(parse_lib::ParseContext* parse_ctx, optview::Exec* exec_opts, cmd_eval::CommandEvaluator* cmd_ev) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->exec_opts = exec_opts;
  this->cmd_ev = cmd_ev;
}

int Eval::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  Str* code_str;
  int eval_spid;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::source__EvalArg* src;
  StackRoots _roots({&arg_r, &code_str, &line_reader, &c_parser, &src});

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str464, cmd_val);
  arg_r = tup0.at1();
  if (this->exec_opts->simple_eval_builtin()) {
    Tuple2<Str*, int> tup1 = arg_r->ReadRequired2(str465);
    code_str = tup1.at0();
    eval_spid = tup1.at1();
    if (!arg_r->AtEnd()) {
      e_usage(str466);
    }
  }
  else {
    code_str = str467->join(arg_r->Rest());
    eval_spid = cmd_val->arg_spids->index(0);
  }
  line_reader = reader::StringLineReader(code_str, this->arena);
  c_parser = this->parse_ctx->MakeOshParser(line_reader);
  src = Alloc<source::EvalArg>(eval_spid);
  {  // with
    alloc::ctx_Location ctx(this->arena, src);

    return main_loop::Batch(this->cmd_ev, c_parser, this->arena, cmd_eval::IsEvalSource);
  }
}

Source::Source(parse_lib::ParseContext* parse_ctx, state::SearchPath* search_path, cmd_eval::CommandEvaluator* cmd_ev, process::FdState* fd_state, ui::ErrorFormatter* errfmt) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->search_path = search_path;
  this->cmd_ev = cmd_ev;
  this->fd_state = fd_state;
  this->mem = cmd_ev->mem;
  this->errfmt = errfmt;
}

int Source::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  int call_spid;
  args::Reader* arg_r;
  Str* path;
  Str* resolved;
  mylib::LineReader* f;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* c_parser;
  List<Str*>* source_argv;
  syntax_asdl::source__SourcedFile* src;
  int status;
  StackRoots _roots({&arg_r, &path, &resolved, &f, &line_reader, &c_parser, &source_argv, &src});

  call_spid = cmd_val->arg_spids->index(0);
  Tuple2<args::_Attributes*, args::Reader*> tup2 = flag_spec::ParseCmdVal(str468, cmd_val);
  arg_r = tup2.at1();
  path = arg_r->Peek();
  if (path == nullptr) {
    e_usage(str469);
  }
  arg_r->Next();
  resolved = this->search_path->Lookup(path, false);
  if (resolved == nullptr) {
    resolved = path;
  }
  try {
    f = this->fd_state->Open(resolved);
  }
  catch (OSError* e) {
    this->errfmt->Print_(fmt121(path, pyutil::strerror(e)), cmd_val->arg_spids->index(1));
    return 1;
  }
  try {
    try {
      line_reader = Alloc<reader::FileLineReader>(f, this->arena);
      c_parser = this->parse_ctx->MakeOshParser(line_reader);
      source_argv = arg_r->Rest();
      this->mem->PushSource(path, source_argv);
      src = Alloc<source::SourcedFile>(path, call_spid);
      try {
        {  // with
          alloc::ctx_Location ctx(this->arena, src);

          status = main_loop::Batch(this->cmd_ev, c_parser, this->arena, cmd_eval::IsEvalSource);
        }
      }
      catch (std::exception) { }      return status;
    }
    catch (error::_ControlFlow* e) {
      if (e->IsReturn()) {
        return e->StatusCode();
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }}

Command::Command(vm::_Executor* shell_ex, Dict<Str*, runtime_asdl::Proc*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path) {
  this->shell_ex = shell_ex;
  this->funcs = funcs;
  this->aliases = aliases;
  this->search_path = search_path;
}

int Command::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::command* arg;
  int status;
  List<Str*>* names;
  Str* kind;
  Str* argument;
  StackRoots _roots({&attrs, &arg_r, &arg, &names, &kind, &argument, &cmd_val});

  Tuple2<args::_Attributes*, args::Reader*> tup3 = flag_spec::ParseCmdVal(str471, cmd_val);
  attrs = tup3.at0();
  arg_r = tup3.at1();
  arg = Alloc<arg_types::command>(attrs->attrs);
  if (arg->v) {
    status = 0;
    names = arg_r->Rest();
    for (ListIter<Tuple2<Str*, Str*>*> it(_ResolveNames(names, this->funcs, this->aliases, this->search_path)); !it.Done(); it.Next()) {
      Tuple2<Str*, Str*>* tup4 = it.Value();
      kind = tup4->at0();
      argument = tup4->at1();
      if (kind == nullptr) {
        status = 1;
      }
      else {
        print(argument);
      }
    }
    return status;
  }
  cmd_val = Alloc<cmd_value::Argv>(cmd_val->argv->slice(1), cmd_val->arg_spids->slice(1), nullptr);
  return this->shell_ex->RunSimpleCommand(cmd_val, true, false);
}

Builtin::Builtin(vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt) {
  this->shell_ex = shell_ex;
  this->errfmt = errfmt;
}

int Builtin::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  Str* name;
  int to_run;
  int span_id;
  runtime_asdl::cmd_value__Argv* cmd_val2;
  StackRoots _roots({&name, &cmd_val2});

  if (len(cmd_val->argv) == 1) {
    return 0;
  }
  name = cmd_val->argv->index(1);
  to_run = consts::LookupNormalBuiltin(name);
  if (to_run == consts::NO_INDEX) {
    to_run = consts::LookupSpecialBuiltin(name);
  }
  if (to_run == consts::NO_INDEX) {
    span_id = cmd_val->arg_spids->index(1);
    if (consts::LookupAssignBuiltin(name) != consts::NO_INDEX) {
      this->errfmt->Print_(str472, span_id);
    }
    else {
      this->errfmt->Print_(fmt122(name), span_id);
    }
    return 1;
  }
  cmd_val2 = Alloc<cmd_value::Argv>(cmd_val->argv->slice(1), cmd_val->arg_spids->slice(1), cmd_val->block);
  return this->shell_ex->RunBuiltin(to_run, cmd_val2);
}

int _AdjustStatus(Str* status_ok, int status) {
  if ((str_equals(status_ok->lower(), str474) and status == 141)) {
    status = 0;
  }
  return status;
}

Run_::Run_(state::MutableOpts* mutable_opts, state::Mem* mem, vm::_Executor* shell_ex, ui::ErrorFormatter* errfmt) {
  this->mutable_opts = mutable_opts;
  this->mem = mem;
  this->shell_ex = shell_ex;
  this->errfmt = errfmt;
}

int Run_::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::run* arg;
  List<Str*>* argv;
  List<int>* spids;
  runtime_asdl::cmd_value__Argv* cmd_val2;
  int failure_spid;
  int status;
  Str* var_name;
  StackRoots _roots({&attrs, &arg_r, &arg, &argv, &spids, &cmd_val2, &var_name});

  Tuple2<args::_Attributes*, args::Reader*> tup5 = flag_spec::ParseOilCmdVal(str475, cmd_val);
  attrs = tup5.at0();
  arg_r = tup5.at1();
  arg = Alloc<arg_types::run>(attrs->attrs);
  if (arg_r->Peek() == nullptr) {
    e_die(fmt123(), 2);
  }
  Tuple2<List<Str*>*, List<int>*> tup6 = arg_r->Rest2();
  argv = tup6.at0();
  spids = tup6.at1();
  cmd_val2 = Alloc<cmd_value::Argv>(argv, spids, cmd_val->block);
  failure_spid = runtime::NO_SPID;
  try {
    {  // with
      state::ctx_ErrExit ctx(this->mutable_opts, true, cmd_val->arg_spids->index(0));

      status = this->shell_ex->RunSimpleCommand(cmd_val2, true);
    }
  }
  catch (error::ErrExit* e) {
    status = e->exit_status;
    failure_spid = e->span_id;
  }
  if (arg->status_ok != nullptr) {
    status = _AdjustStatus(arg->status_ok, status);
  }
  if ((arg->allow_status_01 and (status != 0 && status != 1))) {
    if (failure_spid != runtime::NO_SPID) {
      this->errfmt->Print_(str477, failure_spid);
      this->errfmt->StderrLine(str478);
    }
    throw Alloc<error::ErrExit>(fmt124(status), spids->index(0), status);
  }
  if (arg->assign_status != nullptr) {
    var_name = arg->assign_status;
    if (var_name->startswith(str480)) {
      var_name = var_name->slice(1);
    }
    state::SetRefString(this->mem, var_name, str(status));
    return 0;
  }
  return status;
}

List<Tuple2<Str*, Str*>*>* _ResolveNames(List<Str*>* names, Dict<Str*, runtime_asdl::Proc*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path) {
  List<Tuple2<Str*, Str*>*>* results;
  Tuple2<Str*, Str*>* kind;
  Str* resolved;
  Str* no_str;
  StackRoots _roots({&results, &kind, &resolved, &no_str});

  results = Alloc<List<Tuple2<Str*, Str*>*>>();
  for (ListIter<Str*> it(names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    if (dict_contains(funcs, name)) {
      kind = (Alloc<Tuple2<Str*, Str*>>(str481, name));
    }
    else {
      if (dict_contains(aliases, name)) {
        kind = (Alloc<Tuple2<Str*, Str*>>(str482, name));
      }
      else {
        if (consts::LookupNormalBuiltin(name) != 0) {
          kind = (Alloc<Tuple2<Str*, Str*>>(str483, name));
        }
        else {
          if (consts::LookupSpecialBuiltin(name) != 0) {
            kind = (Alloc<Tuple2<Str*, Str*>>(str484, name));
          }
          else {
            if (consts::LookupAssignBuiltin(name) != 0) {
              kind = (Alloc<Tuple2<Str*, Str*>>(str485, name));
            }
            else {
              if (consts::IsControlFlow(name)) {
                kind = (Alloc<Tuple2<Str*, Str*>>(str486, name));
              }
              else {
                if (consts::IsKeyword(name)) {
                  kind = (Alloc<Tuple2<Str*, Str*>>(str487, name));
                }
                else {
                  resolved = search_path->Lookup(name);
                  if (resolved == nullptr) {
                    no_str = nullptr;
                    kind = (Alloc<Tuple2<Str*, Str*>>(no_str, name));
                  }
                  else {
                    kind = (Alloc<Tuple2<Str*, Str*>>(str488, resolved));
                  }
                }
              }
            }
          }
        }
      }
    }
    results->append(kind);
  }
  return results;
}

Type::Type(Dict<Str*, runtime_asdl::Proc*>* funcs, Dict<Str*, Str*>* aliases, state::SearchPath* search_path, ui::ErrorFormatter* errfmt) {
  this->funcs = funcs;
  this->aliases = aliases;
  this->search_path = search_path;
  this->errfmt = errfmt;
}

int Type::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::type* arg;
  Dict<Str*, runtime_asdl::Proc*>* funcs;
  int status;
  List<Tuple2<Str*, Str*>*>* r;
  Str* kind;
  Str* name;
  Str* resolved;
  StackRoots _roots({&attrs, &arg_r, &arg, &funcs, &r, &kind, &name, &resolved});

  Tuple2<args::_Attributes*, args::Reader*> tup7 = flag_spec::ParseCmdVal(str489, cmd_val);
  attrs = tup7.at0();
  arg_r = tup7.at1();
  arg = Alloc<arg_types::type>(attrs->attrs);
  if (arg->f) {
    funcs = Alloc<Dict<Str*, runtime_asdl::Proc*>>();
  }
  else {
    funcs = this->funcs;
  }
  status = 0;
  r = _ResolveNames(arg_r->Rest(), funcs, this->aliases, this->search_path);
  for (ListIter<Tuple2<Str*, Str*>*> it(r); !it.Done(); it.Next()) {
    Tuple2<Str*, Str*>* tup8 = it.Value();
    kind = tup8->at0();
    name = tup8->at1();
    if (kind == nullptr) {
      this->errfmt->StderrLine(fmt125(name));
      status = 1;
    }
    else {
      if (arg->t) {
        print(kind);
      }
      else {
        if (arg->p) {
          if (str_equals(kind, str491)) {
            print(name);
          }
        }
        else {
          if (arg->P) {
            if (str_equals(kind, str492)) {
              print(name);
            }
            else {
              resolved = this->search_path->Lookup(name);
              if (resolved == nullptr) {
                status = 1;
              }
              else {
                print(resolved);
              }
            }
          }
          else {
            print(fmt126(name, kind));
            if (str_equals(kind, str494)) {
              ;  // pass
            }
          }
        }
      }
    }
  }
  return status;
}

}  // define namespace builtin_meta

namespace builtin_misc {  // define
using runtime_asdl::span_e;
using runtime_asdl::cmd_value__Argv;
namespace lvalue = runtime_asdl::lvalue;
namespace value = runtime_asdl::value;
using runtime_asdl::scope_e;
namespace source = syntax_asdl::source;

Times::Times() : vm::_Builtin() {
}

int Times::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  pyos::PrintTimes();
  return 0;
}

Tuple2<bool, bool> _AppendParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans, int max_results, bool join_next, List<mylib::BufWriter*>* parts) {
  int start_index;
  bool last_span_was_black;
  runtime_asdl::span_t span_type;
  int end_index;
  mylib::BufWriter* buf;
  bool done;
  runtime_asdl::span_t last_span_type;
  StackRoots _roots({&span_type, &buf, &last_span_type});

  start_index = 0;
  last_span_was_black = false;
  for (ListIter<Tuple2<runtime_asdl::span_t, int>*> it(spans); !it.Done(); it.Next()) {
    Tuple2<runtime_asdl::span_t, int>* tup0 = it.Value();
    span_type = tup0->at0();
    end_index = tup0->at1();
    if (span_type == span_e::Black) {
      if ((join_next and parts)) {
        parts->index(-1)->write(s->slice(start_index, end_index));
        join_next = false;
      }
      else {
        buf = Alloc<mylib::BufWriter>();
        buf->write(s->slice(start_index, end_index));
        parts->append(buf);
      }
      last_span_was_black = true;
    }
    else {
      if (span_type == span_e::Delim) {
        if (join_next) {
          parts->index(-1)->write(s->slice(start_index, end_index));
          join_next = false;
        }
        last_span_was_black = false;
      }
      else {
        if (span_type == span_e::Backslash) {
          if (last_span_was_black) {
            join_next = true;
          }
          last_span_was_black = false;
        }
      }
    }
    if ((max_results and len(parts) >= max_results)) {
      join_next = true;
    }
    start_index = end_index;
  }
  done = true;
  if (len(spans)) {
    Tuple2<runtime_asdl::span_t, int>* tup1 = spans->index(-1);
    last_span_type = tup1->at0();
    if (last_span_type == span_e::Backslash) {
      done = false;
    }
  }
  return (Tuple2<bool, bool>(done, join_next));
}

Tuple2<Str*, bool> ReadLineFromStdin(Str* delim_char) {
  bool eof;
  List<Str*>* chars;
  Str* c;
  StackRoots _roots({&chars, &c});

  eof = false;
  chars = Alloc<List<Str*>>();
  while (true) {
    c = posix::read(0, 1);
    if (len(c) == 0) {
      eof = true;
      break;
    }
    if (maybe_str_equals(c, delim_char)) {
      break;
    }
    chars->append(c);
  }
  return (Tuple2<Str*, bool>(str495->join(chars), eof));
}

Str* _ReadLine() {
  List<Str*>* chars;
  Str* c;
  StackRoots _roots({&chars, &c});

  chars = Alloc<List<Str*>>();
  while (true) {
    c = posix::read(0, 1);
    if (len(c) == 0) {
      break;
    }
    chars->append(c);
    if (str_equals(c, str496)) {
      break;
    }
  }
  return str497->join(chars);
}

Str* _ReadAll() {
  List<Str*>* chunks;
  Str* c;
  StackRoots _roots({&chunks, &c});

  chunks = Alloc<List<Str*>>();
  while (true) {
    c = posix::read(0, 4096);
    if (len(c) == 0) {
      break;
    }
    chunks->append(c);
  }
  return str498->join(chunks);
}

Read::Read(split::SplitContext* splitter, state::Mem* mem, parse_lib::ParseContext* parse_ctx) {
  this->splitter = splitter;
  this->mem = mem;
  this->parse_ctx = parse_ctx;
  this->stdin = mylib::Stdin();
}

int Read::_Line(arg_types::read* arg, Str* var_name) {
  Str* line;
  alloc::Arena* arena;
  reader::FileLineReader* line_reader;
  lexer::Lexer* lexer;
  List<syntax_asdl::Token*>* tokens;
  List<Str*>* tmp;
  runtime_asdl::lvalue__Named* lhs;
  StackRoots _roots({&line, &arena, &line_reader, &lexer, &tokens, &tmp, &lhs});

  line = _ReadLine();
  if (len(line) == 0) {
    return 1;
  }
  if (!arg->with_eol) {
    if (line->endswith(str499)) {
      line = line->slice(0, -2);
    }
    else {
      if (line->endswith(str500)) {
        line = line->slice(0, -1);
      }
    }
  }
  if ((arg->q and line->startswith(str501))) {
    arena = this->parse_ctx->arena;
    line_reader = reader::StringLineReader(line, arena);
    lexer = this->parse_ctx->_MakeLexer(line_reader);
    try {
      {  // with
        alloc::ctx_Location ctx(arena, Alloc<source::Stdin>(str502));

        tokens = qsn_native::Parse(lexer);
      }
    }
    catch (error::Parse* e) {
      ui::PrettyPrintError(e, arena);
      return 1;
    }
    tmp = Alloc<List<Str*>>();
    for (ListIter<syntax_asdl::Token*> it(tokens); !it.Done(); it.Next()) {
      syntax_asdl::Token* t = it.Value();
      tmp->append(word_compile::EvalCStringToken(t));
    }
    line = str503->join(tmp);
  }
  lhs = Alloc<lvalue::Named>(var_name);
  this->mem->SetValue(lhs, Alloc<value::Str>(line), scope_e::LocalOnly);
  return 0;
}

int Read::_All(Str* var_name) {
  Str* contents;
  runtime_asdl::lvalue__Named* lhs;
  StackRoots _roots({&contents, &lhs});

  contents = _ReadAll();
  lhs = Alloc<lvalue::Named>(var_name);
  this->mem->SetValue(lhs, Alloc<value::Str>(contents), scope_e::LocalOnly);
  return 0;
}

int Read::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::read* arg;
  List<Str*>* names;
  Str* var_name;
  int var_spid;
  Str* next_arg;
  int next_spid;
  int fd;
  int bits;
  int status;
  pyos::TermState* term;
  StackRoots _roots({&attrs, &arg_r, &arg, &names, &var_name, &next_arg, &term});

  Tuple2<args::_Attributes*, args::Reader*> tup2 = flag_spec::ParseCmdVal(str504, cmd_val);
  attrs = tup2.at0();
  arg_r = tup2.at1();
  arg = Alloc<arg_types::read>(attrs->attrs);
  names = arg_r->Rest();
  if (arg->line) {
    Tuple2<Str*, int> tup3 = arg_r->Peek2();
    var_name = tup3.at0();
    var_spid = tup3.at1();
    if (var_name == nullptr) {
      var_name = str505;
    }
    else {
      if (var_name->startswith(str506)) {
        var_name = var_name->slice(1);
      }
      arg_r->Next();
    }
    Tuple2<Str*, int> tup4 = arg_r->Peek2();
    next_arg = tup4.at0();
    next_spid = tup4.at1();
    if (next_arg != nullptr) {
      throw Alloc<error::Usage>(str507, next_spid);
    }
    return this->_Line(arg, var_name);
  }
  if (arg->q) {
    e_usage(str508);
  }
  if (arg->all) {
    Tuple2<Str*, int> tup5 = arg_r->Peek2();
    var_name = tup5.at0();
    var_spid = tup5.at1();
    if (var_name == nullptr) {
      var_name = str509;
    }
    else {
      if (var_name->startswith(str510)) {
        var_name = var_name->slice(1);
      }
      arg_r->Next();
    }
    Tuple2<Str*, int> tup6 = arg_r->Peek2();
    next_arg = tup6.at0();
    next_spid = tup6.at1();
    if (next_arg != nullptr) {
      throw Alloc<error::Usage>(str511, next_spid);
    }
    return this->_All(var_name);
  }
  if (arg->q) {
    e_usage(str512);
  }
  fd = this->stdin->fileno();
  if (arg->t >= 0.0) {
    if (arg->t != 0.0) {
      e_die(str513);
    }
    else {
      return pyos::InputAvailable(fd) ? 0 : 1;
    }
  }
  bits = 0;
  if (this->stdin->isatty()) {
    bits |= pyos::TERM_ICANON;
    if (arg->s) {
      bits |= pyos::TERM_ECHO;
    }
    if (arg->p != nullptr) {
      mylib::Stderr()->write(arg->p);
    }
  }
  if (bits == 0) {
    status = this->_Read(arg, names);
  }
  else {
    term = Alloc<pyos::TermState>(fd, ~bits);
    try {
      status = this->_Read(arg, names);
    }
    catch (std::exception) { }  }
  return status;
}

Str* Read::_ReadN(int stdin_fd, int n) {
  List<Str*>* chunks;
  int bytes_left;
  Str* chunk;
  Str* s;
  StackRoots _roots({&chunks, &chunk, &s});

  chunks = Alloc<List<Str*>>();
  bytes_left = n;
  while (bytes_left > 0) {
    chunk = posix::read(stdin_fd, n);
    if (len(chunk) == 0) {
      break;
    }
    chunks->append(chunk);
    bytes_left -= len(chunk);
  }
  s = str514->join(chunks);
  return s;
}

int Read::_Read(arg_types::read* arg, List<Str*>* names) {
  Str* name;
  int stdin_fd;
  Str* s;
  int max_results;
  bool raw;
  Str* delim_char;
  List<mylib::BufWriter*>* parts;
  bool join_next;
  int status;
  Str* line;
  bool eof;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;
  bool done;
  List<Str*>* entries;
  int num_parts;
  StackRoots _roots({&name, &s, &delim_char, &parts, &line, &spans, &entries});

  if (arg->n >= 0) {
    if (len(names)) {
      name = names->index(0);
    }
    else {
      name = str515;
    }
    stdin_fd = this->stdin->fileno();
    s = this->_ReadN(stdin_fd, arg->n);
    state::SetRefString(this->mem, name, s);
    return len(s) == arg->n ? 0 : 1;
  }
  if (len(names) == 0) {
    names->append(str516);
  }
  if (arg->a != nullptr) {
    max_results = 0;
  }
  else {
    max_results = len(names);
  }
  if (arg->Z) {
    raw = true;
    delim_char = str517;
  }
  else {
    raw = arg->r;
    if (arg->d != nullptr) {
      if (len(arg->d)) {
        delim_char = arg->d->index(0);
      }
      else {
        delim_char = str518;
      }
    }
    else {
      delim_char = str519;
    }
  }
  parts = Alloc<List<mylib::BufWriter*>>();
  join_next = false;
  status = 0;
  while (true) {
    Tuple2<Str*, bool> tup7 = ReadLineFromStdin(delim_char);
    line = tup7.at0();
    eof = tup7.at1();
    if (eof) {
      status = 1;
    }
    if (len(line) == 0) {
      break;
    }
    spans = this->splitter->SplitForRead(line, !raw);
    Tuple2<bool, bool> tup8 = _AppendParts(line, spans, max_results, join_next, parts);
    done = tup8.at0();
    join_next = tup8.at1();
    if (done) {
      break;
    }
  }
  entries = Alloc<List<Str*>>();
  for (ListIter<mylib::BufWriter*> it(parts); !it.Done(); it.Next()) {
    mylib::BufWriter* buf = it.Value();
    entries->append(buf->getvalue());
  }
  num_parts = len(entries);
  if (arg->a != nullptr) {
    state::SetRefArray(this->mem, arg->a, entries);
  }
  else {
    for (int i = 0; i < max_results; ++i) {
      if (i < num_parts) {
        s = entries->index(i);
      }
      else {
        s = str520;
      }
      state::SetRefString(this->mem, names->index(i), s);
    }
  }
  return status;
}

MapFile::MapFile(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
  this->f = mylib::Stdin();
}

int MapFile::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::mapfile* arg;
  Str* var_name;
  List<Str*>* lines;
  Str* line;
  StackRoots _roots({&attrs, &arg_r, &arg, &var_name, &lines, &line});

  Tuple2<args::_Attributes*, args::Reader*> tup9 = flag_spec::ParseCmdVal(str521, cmd_val);
  attrs = tup9.at0();
  arg_r = tup9.at1();
  arg = Alloc<arg_types::mapfile>(attrs->attrs);
  Tuple2<Str*, int> tup10 = arg_r->Peek2();
  var_name = tup10.at0();
  if (var_name == nullptr) {
    var_name = str522;
  }
  lines = Alloc<List<Str*>>();
  while (true) {
    line = this->f->readline();
    if (len(line) == 0) {
      break;
    }
    if ((arg->t and line->endswith(str523))) {
      line = line->slice(0, -1);
    }
    lines->append(line);
  }
  state::SetRefArray(this->mem, var_name, lines);
  return 0;
}

Cd::Cd(state::Mem* mem, state::DirStack* dir_stack, cmd_eval::CommandEvaluator* cmd_ev, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->cmd_ev = cmd_ev;
  this->errfmt = errfmt;
}

int Cd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::cd* arg;
  Str* dest_dir;
  int arg_spid;
  runtime_asdl::value_t* val;
  Str* pwd;
  Str* abspath;
  Str* real_dest_dir;
  int err_num;
  Dict<Str*, runtime_asdl::cell*>* unused;
  StackRoots _roots({&attrs, &arg_r, &arg, &dest_dir, &val, &pwd, &abspath, &real_dest_dir, &unused});

  Tuple2<args::_Attributes*, args::Reader*> tup11 = flag_spec::ParseCmdVal(str524, cmd_val);
  attrs = tup11.at0();
  arg_r = tup11.at1();
  arg = Alloc<arg_types::cd>(attrs->attrs);
  Tuple2<Str*, int> tup12 = arg_r->Peek2();
  dest_dir = tup12.at0();
  arg_spid = tup12.at1();
  if (dest_dir == nullptr) {
    val = this->mem->GetValue(str525);
    try {
      dest_dir = state::GetString(this->mem, str526);
    }
    catch (error::Runtime* e) {
      this->errfmt->Print_(e->UserErrorString());
      return 1;
    }
  }
  if (str_equals(dest_dir, str527)) {
    try {
      dest_dir = state::GetString(this->mem, str528);
      print(dest_dir);
    }
    catch (error::Runtime* e) {
      this->errfmt->Print_(e->UserErrorString());
      return 1;
    }
  }
  try {
    pwd = state::GetString(this->mem, str529);
  }
  catch (error::Runtime* e) {
    this->errfmt->Print_(e->UserErrorString());
    return 1;
  }
  abspath = os_path::join(pwd, dest_dir);
  if (arg->P) {
    real_dest_dir = libc::realpath(abspath);
  }
  else {
    real_dest_dir = os_path::normpath(abspath);
  }
  err_num = pyos::Chdir(real_dest_dir);
  if (err_num != 0) {
    this->errfmt->Print_(fmt127(real_dest_dir, posix::strerror(err_num)), arg_spid);
    return 1;
  }
  state::ExportGlobalString(this->mem, str531, real_dest_dir);
  this->mem->SetPwd(real_dest_dir);
  if (cmd_val->block) {
    this->dir_stack->Push(real_dest_dir);
    try {
      unused = this->cmd_ev->EvalBlock(cmd_val->block);
    }
    catch (std::exception) { }  }
  else {
    state::ExportGlobalString(this->mem, str532, pwd);
    this->dir_stack->Reset();
  }
  return 0;
}
int WITH_LINE_NUMBERS = 1;
int WITHOUT_LINE_NUMBERS = 2;
int SINGLE_LINE = 3;

void _PrintDirStack(state::DirStack* dir_stack, int style, Str* home_dir) {
  int i;
  List<Str*>* parts;
  Str* s;
  StackRoots _roots({&parts, &s});

  if (style == WITH_LINE_NUMBERS) {
    i = 0;
    for (ListIter<Str*> it(dir_stack->Iter()); !it.Done(); it.Next(), ++i) {
      Str* entry = it.Value();
      print(fmt128(i, ui::PrettyDir(entry, home_dir)));
    }
  }
  else {
    if (style == WITHOUT_LINE_NUMBERS) {
      for (ListIter<Str*> it(dir_stack->Iter()); !it.Done(); it.Next()) {
        Str* entry = it.Value();
        print(ui::PrettyDir(entry, home_dir));
      }
    }
    else {
      if (style == SINGLE_LINE) {
        parts = Alloc<List<Str*>>();
        for (ListIter<Str*> it(dir_stack->Iter()); !it.Done(); it.Next()) {
          Str* entry = it.Value();
          parts->append(ui::PrettyDir(entry, home_dir));
        }
        s = str534->join(parts);
        print(s);
      }
    }
  }
}

Pushd::Pushd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->errfmt = errfmt;
}

int Pushd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  int num_args;
  Str* dest_dir;
  int err_num;
  StackRoots _roots({&dest_dir});

  num_args = (len(cmd_val->argv) - 1);
  if (num_args == 0) {
    this->errfmt->Print_(str535);
    return 1;
  }
  else {
    if (num_args > 1) {
      e_usage(str536);
    }
  }
  dest_dir = os_path::abspath(cmd_val->argv->index(1));
  err_num = pyos::Chdir(dest_dir);
  if (err_num != 0) {
    this->errfmt->Print_(fmt129(dest_dir, posix::strerror(err_num)), cmd_val->arg_spids->index(1));
    return 1;
  }
  this->dir_stack->Push(dest_dir);
  _PrintDirStack(this->dir_stack, SINGLE_LINE, state::MaybeString(this->mem, str538));
  state::ExportGlobalString(this->mem, str539, dest_dir);
  this->mem->SetPwd(dest_dir);
  return 0;
}

bool _PopDirStack(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  Str* dest_dir;
  int err_num;
  StackRoots _roots({&dest_dir});

  dest_dir = dir_stack->Pop();
  if (dest_dir == nullptr) {
    errfmt->Print_(str540);
    return false;
  }
  err_num = pyos::Chdir(dest_dir);
  if (err_num != 0) {
    errfmt->Print_(fmt130(dest_dir, posix::strerror(err_num)));
    return false;
  }
  state::SetGlobalString(mem, str542, dest_dir);
  mem->SetPwd(dest_dir);
  return true;
}

Popd::Popd(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->errfmt = errfmt;
}

int Popd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  if (len(cmd_val->arg_spids) > 1) {
    e_usage(fmt131(), cmd_val->arg_spids->index(1));
  }
  if (!_PopDirStack(this->mem, this->dir_stack, this->errfmt)) {
    return 1;
  }
  _PrintDirStack(this->dir_stack, SINGLE_LINE, state::MaybeString(this->mem, str544));
  return 0;
}

Dirs::Dirs(state::Mem* mem, state::DirStack* dir_stack, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->dir_stack = dir_stack;
  this->errfmt = errfmt;
}

int Dirs::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::dirs* arg;
  Str* home_dir;
  int style;
  StackRoots _roots({&attrs, &arg_r, &arg, &home_dir});

  Tuple2<args::_Attributes*, args::Reader*> tup13 = flag_spec::ParseCmdVal(str545, cmd_val);
  attrs = tup13.at0();
  arg_r = tup13.at1();
  arg = Alloc<arg_types::dirs>(attrs->attrs);
  home_dir = state::MaybeString(this->mem, str546);
  style = SINGLE_LINE;
  if (arg->l) {
    home_dir = nullptr;
  }
  if (arg->c) {
    this->dir_stack->Reset();
    return 0;
  }
  else {
    if (arg->v) {
      style = WITH_LINE_NUMBERS;
    }
    else {
      if (arg->p) {
        style = WITHOUT_LINE_NUMBERS;
      }
    }
  }
  _PrintDirStack(this->dir_stack, style, home_dir);
  return 0;
}

Pwd::Pwd(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
}

int Pwd::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::pwd* arg;
  Str* pwd;
  StackRoots _roots({&attrs, &arg_r, &arg, &pwd});

  Tuple2<args::_Attributes*, args::Reader*> tup14 = flag_spec::ParseCmdVal(str547, cmd_val);
  attrs = tup14.at0();
  arg_r = tup14.at1();
  arg = Alloc<arg_types::pwd>(attrs->attrs);
  pwd = this->mem->pwd;
  if (arg->P) {
    pwd = libc::realpath(pwd);
  }
  print(pwd);
  return 0;
}

Help::Help(pyutil::_ResourceLoader* loader, ui::ErrorFormatter* errfmt) {
  this->loader = loader;
  this->errfmt = errfmt;
}

List<Str*>* Help::_Groups() {
  Str* contents;
  List<Str*>* groups;
  StackRoots _roots({&contents, &groups});

  contents = this->loader->Get(str548);
  groups = contents->splitlines(false);
  return groups;
}

int Help::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  Str* topic;
  int blame_spid;
  Str* contents;
  StackRoots _roots({&attrs, &arg_r, &topic, &contents});

  Tuple2<args::_Attributes*, args::Reader*> tup15 = flag_spec::ParseCmdVal(str549, cmd_val);
  attrs = tup15.at0();
  arg_r = tup15.at1();
  Tuple2<Str*, int> tup16 = arg_r->Peek2();
  topic = tup16.at0();
  blame_spid = tup16.at1();
  if (topic == nullptr) {
    topic = str550;
    blame_spid = runtime::NO_SPID;
  }
  else {
    arg_r->Next();
  }
  try {
    contents = this->loader->Get(fmt132(topic));
  }
  catch (IOError*) {
    this->errfmt->Print_(fmt133(topic), blame_spid);
    return 1;
  }
  print(contents);
  return 0;
}

Cat::Cat() : vm::_Builtin() {
}

int Cat::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  Str* chunk;
  StackRoots _roots({&chunk});

  while (true) {
    chunk = posix::read(0, 4096);
    if (len(chunk) == 0) {
      break;
    }
    mylib::Stdout()->write(chunk);
  }
  return 0;
}

}  // define namespace builtin_misc

namespace builtin_printf {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using runtime_asdl::cmd_value__Argv;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Str;
namespace value = runtime_asdl::value;
namespace lvalue_e = runtime_asdl::lvalue_e;
namespace printf_part = syntax_asdl::printf_part;
namespace printf_part_e = syntax_asdl::printf_part_e;
using syntax_asdl::printf_part_t;
using syntax_asdl::printf_part__Literal;
using syntax_asdl::printf_part__Percent;
namespace source = syntax_asdl::source;
using syntax_asdl::Token;
using types_asdl::lex_mode_e;
using types_asdl::lex_mode_t;

_FormatStringParser::_FormatStringParser(lexer::Lexer* lexer) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_FormatStringParser)) {
  this->lexer = lexer;
}

void _FormatStringParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->cur_token = this->lexer->Read(lex_mode);
  this->token_type = this->cur_token->id;
  this->token_kind = consts::GetKind(this->token_type);
}

syntax_asdl::printf_part_t* _FormatStringParser::_ParseFormatStr() {
  syntax_asdl::printf_part__Percent* part;
  Str* flag;
  StackRoots _roots({&part, &flag});

  this->_Next(lex_mode_e::PrintfPercent);
  part = Alloc<printf_part::Percent>();
  while ((this->token_type == Id::Format_Flag || this->token_type == Id::Format_Zero)) {
    flag = this->cur_token->val;
    if (str_contains(str553, flag)) {
      p_die(fmt134(flag), this->cur_token);
    }
    part->flags->append(this->cur_token);
    this->_Next(lex_mode_e::PrintfPercent);
  }
  if ((this->token_type == Id::Format_Num || this->token_type == Id::Format_Star)) {
    part->width = this->cur_token;
    this->_Next(lex_mode_e::PrintfPercent);
  }
  if (this->token_type == Id::Format_Dot) {
    part->precision = this->cur_token;
    this->_Next(lex_mode_e::PrintfPercent);
    if ((this->token_type == Id::Format_Num || this->token_type == Id::Format_Star || this->token_type == Id::Format_Zero)) {
      part->precision = this->cur_token;
      this->_Next(lex_mode_e::PrintfPercent);
    }
  }
  if ((this->token_type == Id::Format_Type || this->token_type == Id::Format_Time)) {
    part->type = this->cur_token;
    if (str_contains(str555, part->type->val)) {
      p_die(fmt135(), part->type);
    }
    if (maybe_str_equals(part->type->val, str557)) {
      p_die(fmt136(), part->type);
    }
  }
  else {
    if (this->token_type == Id::Unknown_Tok) {
      p_die(fmt137(), this->cur_token);
    }
    else {
      p_die(fmt138(), this->cur_token);
    }
  }
  if ((part->precision and !str_contains(str561, part->type->val->index(-1)))) {
    p_die(dynamic_fmt_dummy(), part->precision);
  }
  return part;
}

List<syntax_asdl::printf_part_t*>* _FormatStringParser::Parse() {
  List<syntax_asdl::printf_part_t*>* parts;
  StackRoots _roots({&parts});

  this->_Next(lex_mode_e::PrintfOuter);
  parts = Alloc<List<syntax_asdl::printf_part_t*>>();
  while (true) {
    if ((this->token_kind == Kind::Char or (this->token_type == Id::Format_EscapedPercent or this->token_type == Id::Unknown_Backslash))) {
      parts->append(Alloc<printf_part::Literal>(this->cur_token));
    }
    else {
      if (this->token_type == Id::Format_Percent) {
        parts->append(this->_ParseFormatStr());
      }
      else {
        if (this->token_type == Id::Eof_Real) {
          break;
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
    this->_Next(lex_mode_e::PrintfOuter);
  }
  return parts;
}

Printf::Printf(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, sh_expr_eval::ArithEvaluator* arith_ev, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->parse_ctx = parse_ctx;
  this->arith_ev = arith_ev;
  this->errfmt = errfmt;
  this->parse_cache = Alloc<Dict<Str*, List<syntax_asdl::printf_part_t*>*>>();
  this->shell_start_time = time_::time();
}

int Printf::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::printf* arg;
  Str* fmt;
  int fmt_spid;
  List<Str*>* varargs;
  List<int>* spids;
  alloc::Arena* arena;
  List<syntax_asdl::printf_part_t*>* parts;
  reader::FileLineReader* line_reader;
  lexer::Lexer* lexer;
  builtin_printf::_FormatStringParser* parser;
  List<Str*>* out;
  int arg_index;
  int num_args;
  bool backslash_c;
  syntax_asdl::printf_part_t* UP_part;
  syntax_asdl::Token* token;
  Str* s;
  List<Str*>* flags;
  int width;
  Str* width_str;
  int width_spid;
  int precision;
  Str* precision_str;
  int precision_spid;
  int word_spid;
  Str* typ;
  List<Str*>* c_parts;
  match::SimpleLexer* lex;
  int id_;
  Str* tok_val;
  syntax_asdl::Token* tok;
  Str* p;
  int d;
  int blame_spid;
  runtime_asdl::cell* tzcell;
  double ts;
  Str* result;
  int v_spid;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* anode;
  runtime_asdl::lvalue_t* lval;
  StackRoots _roots({&attrs, &arg_r, &arg, &fmt, &varargs, &spids, &arena, &parts, &line_reader, &lexer, &parser, &out, &UP_part, &token, &s, &flags, &width_str, &precision_str, &typ, &c_parts, &lex, &tok_val, &tok, &p, &tzcell, &result, &a_parser, &anode, &lval});

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str563, cmd_val);
  attrs = tup0.at0();
  arg_r = tup0.at1();
  arg = Alloc<arg_types::printf>(attrs->attrs);
  Tuple2<Str*, int> tup1 = arg_r->ReadRequired2(str564);
  fmt = tup1.at0();
  fmt_spid = tup1.at1();
  Tuple2<List<Str*>*, List<int>*> tup2 = arg_r->Rest2();
  varargs = tup2.at0();
  spids = tup2.at1();
  arena = this->parse_ctx->arena;
  if (dict_contains(this->parse_cache, fmt)) {
    parts = this->parse_cache->index(fmt);
  }
  else {
    line_reader = reader::StringLineReader(fmt, arena);
    lexer = this->parse_ctx->_MakeLexer(line_reader);
    parser = Alloc<_FormatStringParser>(lexer);
    {  // with
      alloc::ctx_Location ctx(arena, Alloc<source::ArgvWord>(fmt_spid));

      try {
        parts = parser->Parse();
      }
      catch (error::Parse* e) {
        this->errfmt->PrettyPrintError(e);
        return 2;
      }
    }
    this->parse_cache->set(fmt, parts);
  }
  out = Alloc<List<Str*>>();
  arg_index = 0;
  num_args = len(varargs);
  backslash_c = false;
  while (true) {
    for (ListIter<syntax_asdl::printf_part_t*> it(parts); !it.Done(); it.Next()) {
      syntax_asdl::printf_part_t* part = it.Value();
      UP_part = part;
      if (part->tag_() == printf_part_e::Literal) {
        printf_part__Literal* part = static_cast<printf_part__Literal*>(UP_part);
        token = part->token;
        if (token->id == Id::Format_EscapedPercent) {
          s = str565;
        }
        else {
          s = word_compile::EvalCStringToken(token);
        }
        out->append(s);
      }
      else {
        if (part->tag_() == printf_part_e::Percent) {
          printf_part__Percent* part = static_cast<printf_part__Percent*>(UP_part);
          flags = Alloc<List<Str*>>();
          if (len(part->flags) > 0) {
            for (ListIter<syntax_asdl::Token*> it(part->flags); !it.Done(); it.Next()) {
              syntax_asdl::Token* flag_token = it.Value();
              flags->append(flag_token->val);
            }
          }
          width = -1;
          if (part->width) {
            if ((part->width->id == Id::Format_Num || part->width->id == Id::Format_Zero)) {
              width_str = part->width->val;
              width_spid = part->width->span_id;
            }
            else {
              if (part->width->id == Id::Format_Star) {
                if (arg_index < num_args) {
                  width_str = varargs->index(arg_index);
                  width_spid = spids->index(arg_index);
                  arg_index += 1;
                }
                else {
                  width_str = str566;
                  width_spid = runtime::NO_SPID;
                }
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
            try {
              width = to_int(width_str);
            }
            catch (ValueError*) {
              if (width_spid == runtime::NO_SPID) {
                width_spid = part->width->span_id;
              }
              this->errfmt->Print_(fmt139(width_str), width_spid);
              return 1;
            }
          }
          precision = -1;
          if (part->precision) {
            if (part->precision->id == Id::Format_Dot) {
              precision_str = str568;
              precision_spid = part->precision->span_id;
            }
            else {
              if ((part->precision->id == Id::Format_Num || part->precision->id == Id::Format_Zero)) {
                precision_str = part->precision->val;
                precision_spid = part->precision->span_id;
              }
              else {
                if (part->precision->id == Id::Format_Star) {
                  if (arg_index < num_args) {
                    precision_str = varargs->index(arg_index);
                    precision_spid = spids->index(arg_index);
                    arg_index += 1;
                  }
                  else {
                    precision_str = str569;
                    precision_spid = runtime::NO_SPID;
                  }
                }
                else {
                  throw Alloc<AssertionError>();
                }
              }
            }
            try {
              precision = to_int(precision_str);
            }
            catch (ValueError*) {
              if (precision_spid == runtime::NO_SPID) {
                precision_spid = part->precision->span_id;
              }
              this->errfmt->Print_(fmt140(precision_str), precision_spid);
              return 1;
            }
          }
          if (arg_index < num_args) {
            s = varargs->index(arg_index);
            word_spid = spids->index(arg_index);
            arg_index += 1;
          }
          else {
            s = str571;
            word_spid = runtime::NO_SPID;
          }
          typ = part->type->val;
          if (str_equals(typ, str572)) {
            if (precision >= 0) {
              s = s->slice(0, precision);
            }
          }
          else {
            if (str_equals(typ, str573)) {
              s = qsn::maybe_shell_encode(s);
            }
            else {
              if (str_equals(typ, str574)) {
                c_parts = Alloc<List<Str*>>();
                lex = match::EchoLexer(s);
                while (true) {
                  Tuple2<int, Str*> tup3 = lex->Next();
                  id_ = tup3.at0();
                  tok_val = tup3.at1();
                  if (id_ == Id::Eol_Tok) {
                    break;
                  }
                  tok = Alloc<Token>(id_, runtime::NO_SPID, tok_val);
                  p = word_compile::EvalCStringToken(tok);
                  if (p == nullptr) {
                    backslash_c = true;
                    break;
                  }
                  c_parts->append(p);
                }
                s = str575->join(c_parts);
              }
              else {
                if ((str_contains(str576, typ) or part->type->id == Id::Format_Time)) {
                  try {
                    d = to_int(s);
                  }
                  catch (ValueError*) {
                    if ((len(s) >= 1 and str_contains(str577, s->index(0)))) {
                      d = len(s) >= 2 ? ord(s->index(1)) : 0;
                    }
                    else {
                      if ((part->type->id == Id::Format_Time and (len(s) == 0 and word_spid == runtime::NO_SPID))) {
                        d = -1;
                      }
                      else {
                        if (word_spid == runtime::NO_SPID) {
                          blame_spid = part->type->span_id;
                        }
                        else {
                          blame_spid = word_spid;
                        }
                        this->errfmt->Print_(fmt141(s), blame_spid);
                        return 1;
                      }
                    }
                  }
                  if (str_contains(str579, typ)) {
                    s = str(d);
                  }
                  else {
                    if (str_contains(str580, typ)) {
                      if (d < 0) {
                        e_die(fmt142(d, typ), part->type->span_id);
                      }
                      if (str_equals(typ, str582)) {
                        s = str(d);
                      }
                      else {
                        if (str_equals(typ, str583)) {
                          s = mylib::octal(d);
                        }
                        else {
                          if (str_equals(typ, str584)) {
                            s = mylib::hex_lower(d);
                          }
                          else {
                            if (str_equals(typ, str585)) {
                              s = mylib::hex_upper(d);
                            }
                          }
                        }
                      }
                    }
                    else {
                      if (part->type->id == Id::Format_Time) {
                        tzcell = this->mem->GetCell(str586);
                        if ((tzcell and (tzcell->exported and tzcell->val->tag_() == value_e::Str))) {
                          value__Str* tzval = static_cast<value__Str*>(tzcell->val);
                          posix::putenv(str587, tzval->s);
                        }
                        time_::tzset();
                        if (d == -1) {
                          ts = time_::time();
                        }
                        else {
                          if (d == -2) {
                            ts = this->shell_start_time;
                          }
                          else {
                            ts = d;
                          }
                        }
                        s = time_::strftime(typ->slice(1, -2), time_::localtime(ts));
                        if (precision >= 0) {
                          s = s->slice(0, precision);
                        }
                      }
                      else {
                        throw Alloc<AssertionError>();
                      }
                    }
                  }
                }
                else {
                  throw Alloc<AssertionError>();
                }
              }
            }
          }
          if (width >= 0) {
            if (len(flags)) {
              if (list_contains(flags, str588)) {
                s = s->ljust(width, str589);
              }
              else {
                if (list_contains(flags, str590)) {
                  s = s->rjust(width, str591);
                }
                else {
                  ;  // pass
                }
              }
            }
            else {
              s = s->rjust(width, str592);
            }
          }
          out->append(s);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
      if (backslash_c) {
        break;
      }
    }
    if (arg_index >= num_args) {
      break;
    }
  }
  result = str593->join(out);
  if (arg->v != nullptr) {
    v_spid = runtime::NO_SPID;
    arena = this->parse_ctx->arena;
    a_parser = this->parse_ctx->MakeArithParser(arg->v);
    {  // with
      alloc::ctx_Location ctx(arena, Alloc<source::ArgvWord>(v_spid));

      try {
        anode = a_parser->Parse();
      }
      catch (error::Parse* e) {
        ui::PrettyPrintError(e, arena);
        e_usage(fmt143(), v_spid);
      }
    }
    lval = this->arith_ev->EvalArithLhs(anode, v_spid);
    if ((!this->exec_opts->eval_unsafe_arith() and lval->tag_() != lvalue_e::Named)) {
      e_usage(fmt144(), v_spid);
    }
    state::SetRef(this->mem, lval, Alloc<value::Str>(result));
  }
  else {
    mylib::Stdout()->write(result);
  }
  return 0;
}

}  // define namespace builtin_printf

namespace builtin_pure {  // define
namespace Id = id_kind_asdl::Id;
using syntax_asdl::Token;

Boolean::Boolean(int status) {
  this->status = status;
}

int Boolean::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  return this->status;
}

Alias::Alias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt) {
  this->aliases = aliases;
  this->errfmt = errfmt;
}

int Alias::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  List<Str*>* argv;
  Str* alias_exp;
  int status;
  int i;
  Str* name;
  StackRoots _roots({&arg_r, &argv, &alias_exp, &name});

  Tuple2<args::_Attributes*, args::Reader*> tup0 = flag_spec::ParseCmdVal(str596, cmd_val);
  arg_r = tup0.at1();
  argv = arg_r->Rest();
  if (len(argv) == 0) {
    for (ListIter<Str*> it(sorted(this->aliases)); !it.Done(); it.Next()) {
      Str* name = it.Value();
      alias_exp = this->aliases->index(name);
      print(fmt145(name, alias_exp));
    }
    return 0;
  }
  status = 0;
  i = 0;
  for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
    Str* arg = it.Value();
    Tuple2<Str*, Str*> tup1 = mylib::split_once(arg, str598);
    name = tup1.at0();
    alias_exp = tup1.at1();
    if (alias_exp == nullptr) {
      alias_exp = this->aliases->get(name);
      if (alias_exp == nullptr) {
        this->errfmt->Print_(fmt146(name), cmd_val->arg_spids->index(i));
        status = 1;
      }
      else {
        print(fmt147(name, alias_exp));
      }
    }
    else {
      this->aliases->set(name, alias_exp);
    }
  }
  return status;
}

UnAlias::UnAlias(Dict<Str*, Str*>* aliases, ui::ErrorFormatter* errfmt) {
  this->aliases = aliases;
  this->errfmt = errfmt;
}

int UnAlias::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  List<Str*>* argv;
  int status;
  int i;
  StackRoots _roots({&arg_r, &argv});

  Tuple2<args::_Attributes*, args::Reader*> tup2 = flag_spec::ParseCmdVal(str601, cmd_val);
  arg_r = tup2.at1();
  argv = arg_r->Rest();
  if (len(argv) == 0) {
    e_usage(str602);
  }
  status = 0;
  i = 0;
  for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
    Str* name = it.Value();
    if (dict_contains(this->aliases, name)) {
      this->aliases->remove(name);
    }
    else {
      this->errfmt->Print_(fmt148(name), cmd_val->arg_spids->index(i));
      status = 1;
    }
  }
  return status;
}

void SetShellOpts(state::MutableOpts* exec_opts, List<Tuple2<Str*, bool>*>* opt_changes, List<Tuple2<Str*, bool>*>* shopt_changes) {
  Str* opt_name;
  bool b;
  StackRoots _roots({&opt_name});

  for (ListIter<Tuple2<Str*, bool>*> it(opt_changes); !it.Done(); it.Next()) {
    Tuple2<Str*, bool>* tup3 = it.Value();
    opt_name = tup3->at0();
    b = tup3->at1();
    exec_opts->SetOption(opt_name, b);
  }
  for (ListIter<Tuple2<Str*, bool>*> it(shopt_changes); !it.Done(); it.Next()) {
    Tuple2<Str*, bool>* tup4 = it.Value();
    opt_name = tup4->at0();
    b = tup4->at1();
    exec_opts->SetShoptOption(opt_name, b);
  }
}

Set::Set(state::MutableOpts* exec_opts, state::Mem* mem) {
  this->exec_opts = exec_opts;
  this->mem = mem;
}

int Set::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  Dict<Str*, Str*>* mapping;
  Str* str_val;
  Str* code_str;
  args::Reader* arg_r;
  args::_Attributes* arg;
  StackRoots _roots({&mapping, &str_val, &code_str, &arg_r, &arg});

  if (len(cmd_val->argv) == 1) {
    mapping = this->mem->GetAllVars();
    for (ListIter<Str*> it(sorted(mapping)); !it.Done(); it.Next()) {
      Str* name = it.Value();
      str_val = mapping->index(name);
      code_str = fmt149(name, qsn::maybe_shell_encode(str_val));
      print(code_str);
    }
    return 0;
  }
  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  arg = flag_spec::ParseMore(str605, arg_r);
  if (arg->show_options) {
    this->exec_opts->ShowOptions(Alloc<List<Str*>>());
    return 0;
  }
  SetShellOpts(this->exec_opts, arg->opt_changes, arg->shopt_changes);
  if ((arg->saw_double_dash or !arg_r->AtEnd())) {
    this->mem->SetArgv(arg_r->Rest());
  }
  return 0;
}

Shopt::Shopt(state::MutableOpts* mutable_opts, cmd_eval::CommandEvaluator* cmd_ev) {
  this->mutable_opts = mutable_opts;
  this->cmd_ev = cmd_ev;
}

int Shopt::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::shopt* arg;
  List<Str*>* opt_names;
  int index;
  bool b;
  List<int>* opt_nums;
  Dict<Str*, runtime_asdl::cell*>* unused;
  StackRoots _roots({&attrs, &arg_r, &arg, &opt_names, &opt_nums, &unused});

  Tuple2<args::_Attributes*, args::Reader*> tup5 = flag_spec::ParseCmdVal(str606, cmd_val);
  attrs = tup5.at0();
  arg_r = tup5.at1();
  arg = Alloc<arg_types::shopt>(attrs->attrs);
  opt_names = arg_r->Rest();
  if (arg->p) {
    if (arg->o) {
      this->mutable_opts->ShowOptions(opt_names);
    }
    else {
      this->mutable_opts->ShowShoptOptions(opt_names);
    }
    return 0;
  }
  if (arg->q) {
    for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
      Str* name = it.Value();
      index = match::MatchOption(name);
      if (index == 0) {
        return 2;
      }
      if (!this->mutable_opts->opt0_array->index(index)) {
        return 1;
      }
    }
    return 0;
  }
  if (arg->s) {
    b = true;
  }
  else {
    if (arg->u) {
      b = false;
    }
    else {
      this->mutable_opts->ShowShoptOptions(opt_names);
      return 0;
    }
  }
  if (cmd_val->block) {
    opt_nums = Alloc<List<int>>();
    for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
      Str* name = it.Value();
      index = match::MatchOption(name);
      if (index == 0) {
        e_usage(fmt150(name));
      }
      opt_nums->append(index);
    }
    {  // with
      state::ctx_Option ctx(this->mutable_opts, opt_nums, b);

      unused = this->cmd_ev->EvalBlock(cmd_val->block);
    }
    return 0;
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* name = it.Value();
    this->mutable_opts->SetShoptOption(name, b);
  }
  return 0;
}

Hash::Hash(state::SearchPath* search_path) {
  this->search_path = search_path;
}

int Hash::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::hash* arg;
  List<Str*>* rest;
  int status;
  Str* full_path;
  List<Str*>* commands;
  StackRoots _roots({&attrs, &arg_r, &arg, &rest, &full_path, &commands});

  Tuple2<args::_Attributes*, args::Reader*> tup6 = flag_spec::ParseCmdVal(str608, cmd_val);
  attrs = tup6.at0();
  arg_r = tup6.at1();
  arg = Alloc<arg_types::hash>(attrs->attrs);
  rest = arg_r->Rest();
  if (arg->r) {
    if (len(rest)) {
      e_usage(str609);
    }
    this->search_path->ClearCache();
    return 0;
  }
  status = 0;
  if (len(rest)) {
    for (ListIter<Str*> it(rest); !it.Done(); it.Next()) {
      Str* cmd = it.Value();
      full_path = this->search_path->CachedLookup(cmd);
      if (full_path == nullptr) {
        println_stderr(fmt151(cmd));
        status = 1;
      }
    }
  }
  else {
    commands = this->search_path->CachedCommands();
    commands->sort();
    for (ListIter<Str*> it(commands); !it.Done(); it.Next()) {
      Str* cmd = it.Value();
      print(cmd);
    }
  }
  return status;
}

Dict<Str*, bool>* _ParseOptSpec(Str* spec_str) {
  Dict<Str*, bool>* spec;
  int i;
  int n;
  Str* ch;
  StackRoots _roots({&spec, &ch});

  spec = Alloc<Dict<Str*, bool>>();
  i = 0;
  n = len(spec_str);
  while (true) {
    if (i >= n) {
      break;
    }
    ch = spec_str->index(i);
    spec->set(ch, false);
    i += 1;
    if (i >= n) {
      break;
    }
    if (str_equals(spec_str->index(i), str611)) {
      spec->set(ch, true);
      i += 1;
    }
  }
  return spec;
}

GetOptsState::GetOptsState(state::Mem* mem, ui::ErrorFormatter* errfmt) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(GetOptsState)) {
  this->mem = mem;
  this->errfmt = errfmt;
  this->_optind = -1;
  this->flag_pos = 1;
}

int GetOptsState::_OptInd() {
  int result;
  try {
    result = state::GetInteger(this->mem, str612);
  }
  catch (error::Runtime* e) {
    this->errfmt->Print_(e->UserErrorString());
    result = -1;
  }
  return result;
}

Str* GetOptsState::GetArg(List<Str*>* argv) {
  int optind;
  int i;
  optind = this->_OptInd();
  if (optind == -1) {
    return nullptr;
  }
  this->_optind = optind;
  i = (optind - 1);
  if ((0 <= i and i < len(argv))) {
    return argv->index(i);
  }
  else {
    return nullptr;
  }
}

void GetOptsState::IncIndex() {
  state::SetRefString(this->mem, str613, str((this->_optind + 1)));
}

void GetOptsState::SetArg(Str* optarg) {
  state::SetRefString(this->mem, str614, optarg);
}

void GetOptsState::Fail() {
  state::SetRefString(this->mem, str615, str616);
}

Tuple2<int, Str*> _GetOpts(Dict<Str*, bool>* spec, List<Str*>* argv, builtin_pure::GetOptsState* my_state, ui::ErrorFormatter* errfmt) {
  Str* current;
  Str* flag_char;
  bool more_chars;
  Str* optarg;
  List<Str*>* tmp;
  StackRoots _roots({&current, &flag_char, &optarg, &tmp});

  current = my_state->GetArg(argv);
  if (current == nullptr) {
    my_state->Fail();
    return (Tuple2<int, Str*>(1, str617));
  }
  if ((!current->startswith(str618) or str_equals(current, str619))) {
    my_state->Fail();
    return (Tuple2<int, Str*>(1, str620));
  }
  flag_char = current->index(my_state->flag_pos);
  if (my_state->flag_pos < (len(current) - 1)) {
    my_state->flag_pos += 1;
    more_chars = true;
  }
  else {
    my_state->IncIndex();
    my_state->flag_pos = 1;
    more_chars = false;
  }
  if (!dict_contains(spec, flag_char)) {
    return (Tuple2<int, Str*>(0, str621));
  }
  if (spec->index(flag_char)) {
    if (more_chars) {
      optarg = current->slice(my_state->flag_pos);
    }
    else {
      optarg = my_state->GetArg(argv);
      if (optarg == nullptr) {
        my_state->Fail();
        errfmt->Print_(fmt152(current));
        tmp = Alloc<List<Str*>>();
        for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
          Str* a = it.Value();
          tmp->append(qsn::maybe_shell_encode(a));
        }
        println_stderr(fmt153(str624->join(tmp)));
        return (Tuple2<int, Str*>(0, str625));
      }
    }
    my_state->IncIndex();
    my_state->SetArg(optarg);
  }
  else {
    my_state->SetArg(str626);
  }
  return (Tuple2<int, Str*>(0, flag_char));
}

GetOpts::GetOpts(state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->mem = mem;
  this->errfmt = errfmt;
  this->my_state = Alloc<GetOptsState>(mem, errfmt);
  this->spec_cache = Alloc<Dict<Str*, Dict<Str*, bool>*>>();
}

int GetOpts::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  args::Reader* arg_r;
  Str* spec_str;
  Str* var_name;
  int var_spid;
  Dict<Str*, bool>* spec;
  List<Str*>* user_argv;
  int status;
  Str* flag_char;
  StackRoots _roots({&arg_r, &spec_str, &var_name, &spec, &user_argv, &flag_char});

  arg_r = Alloc<args::Reader>(cmd_val->argv, cmd_val->arg_spids);
  arg_r->Next();
  spec_str = arg_r->ReadRequired(str627);
  Tuple2<Str*, int> tup7 = arg_r->ReadRequired2(str628);
  var_name = tup7.at0();
  var_spid = tup7.at1();
  spec = this->spec_cache->get(spec_str);
  if (spec == nullptr) {
    spec = _ParseOptSpec(spec_str);
    this->spec_cache->set(spec_str, spec);
  }
  user_argv = arg_r->AtEnd() ? this->mem->GetArgv() : arg_r->Rest();
  Tuple2<int, Str*> tup8 = _GetOpts(spec, user_argv, this->my_state, this->errfmt);
  status = tup8.at0();
  flag_char = tup8.at1();
  if (match::IsValidVarName(var_name)) {
    state::SetRefString(this->mem, var_name, flag_char);
  }
  else {
    throw Alloc<error::Usage>(fmt154(var_name), var_spid);
  }
  return status;
}

Echo::Echo(optview::Exec* exec_opts) {
  this->exec_opts = exec_opts;
  this->f = mylib::Stdout();
}

int Echo::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  List<Str*>* argv;
  args::_Attributes* attrs;
  args::Reader* arg_r;
  arg_types::echo* arg;
  bool backslash_c;
  int arg0_spid;
  List<Str*>* new_argv;
  List<Str*>* parts;
  match::SimpleLexer* lex;
  int id_;
  Str* value;
  syntax_asdl::Token* tok;
  Str* p;
  int n;
  int i;
  StackRoots _roots({&argv, &attrs, &arg_r, &arg, &new_argv, &parts, &lex, &value, &tok, &p});

  argv = cmd_val->argv->slice(1);
  Tuple2<args::_Attributes*, args::Reader*> tup9 = flag_spec::ParseLikeEcho(str630, cmd_val);
  attrs = tup9.at0();
  arg_r = tup9.at1();
  arg = Alloc<arg_types::echo>(attrs->attrs);
  argv = arg_r->Rest();
  backslash_c = false;
  arg0_spid = cmd_val->arg_spids->index(0);
  if (arg->e) {
    new_argv = Alloc<List<Str*>>();
    for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
      Str* a = it.Value();
      parts = Alloc<List<Str*>>();
      lex = match::EchoLexer(a);
      while (!backslash_c) {
        Tuple2<int, Str*> tup10 = lex->Next();
        id_ = tup10.at0();
        value = tup10.at1();
        if (id_ == Id::Eol_Tok) {
          break;
        }
        tok = Alloc<Token>(id_, arg0_spid, value);
        p = word_compile::EvalCStringToken(tok);
        if (p == nullptr) {
          backslash_c = true;
          break;
        }
        parts->append(p);
      }
      new_argv->append(str631->join(parts));
      if (backslash_c) {
        break;
      }
    }
    argv = new_argv;
  }
  if (this->exec_opts->simple_echo()) {
    n = len(argv);
    if (n == 0) {
      ;  // pass
    }
    else {
      if (n == 1) {
        this->f->write(argv->index(0));
      }
      else {
        e_usage(str632);
      }
    }
  }
  else {
    i = 0;
    for (ListIter<Str*> it(argv); !it.Done(); it.Next(), ++i) {
      Str* a = it.Value();
      if (i != 0) {
        this->f->write(str633);
      }
      this->f->write(a);
    }
  }
  if ((!arg->n and !backslash_c)) {
    this->f->write(str634);
  }
  return 0;
}

}  // define namespace builtin_pure

namespace cmd_eval {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_str;
using syntax_asdl::compound_word;
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command_t;
using syntax_asdl::command__AndOr;
using syntax_asdl::command__Case;
using syntax_asdl::command__CommandList;
using syntax_asdl::command__ControlFlow;
using syntax_asdl::command__DBracket;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__DParen;
using syntax_asdl::command__ExpandedAlias;
using syntax_asdl::command__Expr;
using syntax_asdl::command__ForEach;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__Func;
using syntax_asdl::command__If;
using syntax_asdl::command__NoOp;
using syntax_asdl::command__OilForIn;
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__PlaceMutation;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Sentence;
using syntax_asdl::command__ShAssignment;
using syntax_asdl::command__ShFunction;
using syntax_asdl::command__Simple;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__TimeBlock;
using syntax_asdl::command__VarDecl;
using syntax_asdl::command__WhileUntil;
namespace condition_e = syntax_asdl::condition_e;
using syntax_asdl::condition_t;
using syntax_asdl::condition__Shell;
using syntax_asdl::condition__Oil;
using syntax_asdl::BraceGroup;
using syntax_asdl::assign_op_e;
using syntax_asdl::place_expr__Var;
namespace proc_sig_e = syntax_asdl::proc_sig_e;
using syntax_asdl::proc_sig__Closed;
namespace redir_param_e = syntax_asdl::redir_param_e;
using syntax_asdl::redir_param__HereDoc;
namespace proc_sig = syntax_asdl::proc_sig;
using runtime_asdl::quote_e;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::lvalue__ObjIndex;
using runtime_asdl::lvalue__ObjAttr;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::redirect;
namespace redirect_arg = runtime_asdl::redirect_arg;
using runtime_asdl::scope_e;
namespace cmd_value_e = runtime_asdl::cmd_value_e;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::cmd_value__Assign;
using runtime_asdl::CompoundStatus;
using runtime_asdl::Proc;
using types_asdl::redir_arg_type_e;
using error::_ControlFlow;
int IsMainProgram = (1 << 0);
int IsEvalSource = (1 << 1);
int Optimize = (1 << 2);
Dict<Str*, Str*> gdict0(std::initializer_list<Str*>{}, std::initializer_list<Str*>{});
Dict<Str*, Str*>* OIL_TYPE_NAMES = &gdict0;

Deps::Deps() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Deps)) {
  this->mutable_opts = nullptr;
  this->dumper = nullptr;
  this->debug_f = nullptr;
  this->traps = nullptr;
  this->trap_nodes = nullptr;
}

int _PackFlags(int keyword_id) {
  return _PackFlags(keyword_id, 0);
}

int _PackFlags(int keyword_id, int flags) {
  return ((keyword_id << 8) | flags);
}

bool _HasManyStatuses(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  StackRoots _roots({&UP_node});

  if (node->tag_() == command_e::Sentence) {
    command__Sentence* node1 = static_cast<command__Sentence*>(node);
    return _HasManyStatuses(node1->child);
  }
  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: 
    case command_e::DBracket: 
    case command_e::DParen: {
      return false;
    }
      break;
    case command_e::Pipeline: {
      return false;
    }
      break;
  }
  return true;
}

CommandEvaluator::CommandEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt, Dict<Str*, runtime_asdl::Proc*>* procs, Dict<int, vm::_AssignBuiltin*>* assign_builtins, alloc::Arena* arena, cmd_eval::Deps* cmd_deps) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(CommandEvaluator)) {
  this->shell_ex = nullptr;
  this->arith_ev = nullptr;
  this->bool_ev = nullptr;
  this->expr_ev = nullptr;
  this->word_ev = nullptr;
  this->tracer = nullptr;
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->errfmt = errfmt;
  this->procs = procs;
  this->assign_builtins = assign_builtins;
  this->arena = arena;
  this->mutable_opts = cmd_deps->mutable_opts;
  this->dumper = cmd_deps->dumper;
  this->debug_f = cmd_deps->debug_f;
  this->traps = cmd_deps->traps;
  this->trap_nodes = cmd_deps->trap_nodes;
  this->loop_level = 0;
  this->check_command_sub_status = false;
}

void CommandEvaluator::CheckCircularDeps() {
}

int CommandEvaluator::_RunAssignBuiltin(runtime_asdl::cmd_value__Assign* cmd_val) {
  vm::_AssignBuiltin* builtin_func;
  int status;
  Str* arg0;
  StackRoots _roots({&builtin_func, &arg0});

  this->errfmt->PushLocation(cmd_val->arg_spids->index(0));
  builtin_func = this->assign_builtins->get(cmd_val->builtin_id);
  if (builtin_func == nullptr) {
    e_die(fmt155(cmd_val->argv->index(0)), cmd_val->arg_spids->index(0));
  }
  try {
    try {
      status = builtin_func->Run(cmd_val);
    }
    catch (error::Usage* e) {
      arg0 = cmd_val->argv->index(0);
      if (e->span_id == runtime::NO_SPID) {
        e->span_id = this->errfmt->CurrentLocation();
      }
      this->errfmt->PrefixPrint(e->msg, fmt156(arg0), e->span_id);
      status = 2;
    }
    catch (KeyboardInterrupt*) {
      if (this->exec_opts->interactive()) {
        print(str637);
        status = 130;
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }  return status;
}

int CommandEvaluator::_SpanIdForShAssignment(syntax_asdl::command__ShAssignment* node) {
  return node->spids->index(0);
}

void CommandEvaluator::_CheckStatus(int status, syntax_asdl::command_t* node, int blame_spid) {
  syntax_asdl::command_t* UP_node;
  Str* reason;
  int span_id;
  StackRoots _roots({&UP_node, &reason});

  if ((this->exec_opts->errexit() and status != 0)) {
    UP_node = node;
    switch (node->tag_()) {
      case command_e::Simple: {
        command__Simple* node = static_cast<command__Simple*>(UP_node);
        reason = str638;
        span_id = location::SpanForCommand(node);
      }
        break;
      case command_e::ShAssignment: {
        command__ShAssignment* node = static_cast<command__ShAssignment*>(UP_node);
        reason = str639;
        span_id = this->_SpanIdForShAssignment(node);
      }
        break;
      case command_e::Subshell: {
        command__Subshell* node = static_cast<command__Subshell*>(UP_node);
        reason = str640;
        span_id = node->spids->index(0);
      }
        break;
      case command_e::Pipeline: {
        command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
        reason = str641;
        span_id = node->spids->index(0);
      }
        break;
      default: {
        reason = str642;
        span_id = runtime::NO_SPID;
      }
    }
    if (blame_spid != runtime::NO_SPID) {
      span_id = blame_spid;
    }
    throw Alloc<error::ErrExit>(fmt157(status, reason, posix::getpid()), span_id, status);
  }
}

runtime_asdl::redirect* CommandEvaluator::_EvalRedirect(syntax_asdl::redir* r) {
  runtime_asdl::redirect* result;
  syntax_asdl::redir_param_t* arg;
  syntax_asdl::redir_param_t* UP_arg;
  types_asdl::redir_arg_type_t redir_type;
  runtime_asdl::value__Str* val;
  Str* filename;
  Str* t;
  int target_fd;
  syntax_asdl::compound_word* w;
  StackRoots _roots({&result, &arg, &UP_arg, &redir_type, &val, &filename, &t, &w});

  result = Alloc<redirect>(r->op->id, r->op->span_id, r->loc, nullptr);
  arg = r->arg;
  UP_arg = arg;
  switch (arg->tag_()) {
    case redir_param_e::Word: {
      compound_word* arg_word = static_cast<compound_word*>(UP_arg);
      this->mem->SetCurrentSpanId(r->op->span_id);
      redir_type = consts::RedirArgType(r->op->id);
      if (redir_type == redir_arg_type_e::Path) {
        val = this->word_ev->EvalWordToString(arg_word);
        filename = val->s;
        if (len(filename) == 0) {
          throw Alloc<error::RedirectEval>(str644, arg_word);
        }
        result->arg = Alloc<redirect_arg::Path>(filename);
        return result;
      }
      else {
        if (redir_type == redir_arg_type_e::Desc) {
          val = this->word_ev->EvalWordToString(arg_word);
          t = val->s;
          if (len(t) == 0) {
            throw Alloc<error::RedirectEval>(str645, arg_word);
            return nullptr;
          }
          try {
            if (maybe_str_equals(t, str646)) {
              result->arg = Alloc<redirect_arg::CloseFd>();
            }
            else {
              if (str_equals(t->index(-1), str647)) {
                target_fd = to_int(t->slice(0, -1));
                result->arg = Alloc<redirect_arg::MoveFd>(target_fd);
              }
              else {
                result->arg = Alloc<redirect_arg::CopyFd>(to_int(t));
              }
            }
          }
          catch (ValueError*) {
            throw Alloc<error::RedirectEval>(fmt158(t), arg_word);
            return nullptr;
          }
          return result;
        }
        else {
          if (redir_type == redir_arg_type_e::Here) {
            val = this->word_ev->EvalWordToString(arg_word);
            result->arg = Alloc<redirect_arg::HereDoc>(str_concat(val->s, str649));
            return result;
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
      break;
    case redir_param_e::HereDoc: {
      redir_param__HereDoc* arg = static_cast<redir_param__HereDoc*>(UP_arg);
      w = Alloc<compound_word>(arg->stdin_parts);
      val = this->word_ev->EvalWordToString(w);
      result->arg = Alloc<redirect_arg::HereDoc>(val->s);
      return result;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

List<runtime_asdl::redirect*>* CommandEvaluator::_EvalRedirects(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  List<syntax_asdl::redir*>* redirects;
  List<runtime_asdl::redirect*>* result;
  StackRoots _roots({&UP_node, &redirects, &result});

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ExpandedAlias: {
      command__ExpandedAlias* node = static_cast<command__ExpandedAlias*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ShAssignment: {
      command__ShAssignment* node = static_cast<command__ShAssignment*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::BraceGroup: {
      BraceGroup* node = static_cast<BraceGroup*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::Subshell: {
      command__Subshell* node = static_cast<command__Subshell*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::DParen: {
      command__DParen* node = static_cast<command__DParen*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::DBracket: {
      command__DBracket* node = static_cast<command__DBracket*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ForEach: {
      command__ForEach* node = static_cast<command__ForEach*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::ForExpr: {
      command__ForExpr* node = static_cast<command__ForExpr*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::WhileUntil: {
      command__WhileUntil* node = static_cast<command__WhileUntil*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::If: {
      command__If* node = static_cast<command__If*>(UP_node);
      redirects = node->redirects;
    }
      break;
    case command_e::Case: {
      command__Case* node = static_cast<command__Case*>(UP_node);
      redirects = node->redirects;
    }
      break;
    default: {
      redirects = Alloc<List<syntax_asdl::redir*>>();
    }
  }
  result = Alloc<List<runtime_asdl::redirect*>>();
  for (ListIter<syntax_asdl::redir*> it(redirects); !it.Done(); it.Next()) {
    syntax_asdl::redir* redir = it.Value();
    result->append(this->_EvalRedirect(redir));
  }
  return result;
}

int CommandEvaluator::_RunSimpleCommand(runtime_asdl::cmd_value_t* cmd_val, bool do_fork) {
  runtime_asdl::cmd_value_t* UP_cmd_val;
  StackRoots _roots({&UP_cmd_val});

  UP_cmd_val = cmd_val;
  switch (UP_cmd_val->tag_()) {
    case cmd_value_e::Argv: {
      cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
      return this->shell_ex->RunSimpleCommand(cmd_val, do_fork);
    }
      break;
    case cmd_value_e::Assign: {
      cmd_value__Assign* cmd_val = static_cast<cmd_value__Assign*>(UP_cmd_val);
      return this->_RunAssignBuiltin(cmd_val);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

void CommandEvaluator::_EvalTempEnv(List<syntax_asdl::env_pair*>* more_env, int flags) {
  runtime_asdl::value__Str* val;
  StackRoots _roots({&val});

  for (ListIter<syntax_asdl::env_pair*> it(more_env); !it.Done(); it.Next()) {
    syntax_asdl::env_pair* e_pair = it.Value();
    val = this->word_ev->EvalWordToString(e_pair->val);
    this->mem->SetValue(Alloc<lvalue::Named>(e_pair->name), val, scope_e::LocalOnly, flags);
  }
}

void CommandEvaluator::_StrictErrExit(syntax_asdl::command_t* node) {
  Str* node_str;
  StackRoots _roots({&node_str});

  if (!(this->exec_opts->errexit() and this->exec_opts->strict_errexit())) {
    return ;
  }
  if (_HasManyStatuses(node)) {
    node_str = ui::CommandType(node);
    e_die(fmt159(node_str), location::SpanForCommand(node));
  }
}

void CommandEvaluator::_StrictErrExitList(List<syntax_asdl::command_t*>* node_list) {
  syntax_asdl::command_t* node;
  Str* node_str;
  StackRoots _roots({&node, &node_str});

  if (!(this->exec_opts->errexit() and this->exec_opts->strict_errexit())) {
    return ;
  }
  if (len(node_list) > 1) {
    e_die(fmt160(), location::SpanForCommand(node_list->index(0)));
  }
  node = node_list->index(0);
  if (_HasManyStatuses(node)) {
    node_str = ui::CommandType(node);
    e_die(fmt161(node_str), location::SpanForCommand(node));
  }
}

bool CommandEvaluator::_EvalCondition(syntax_asdl::condition_t* cond, int spid) {
  bool b;
  syntax_asdl::condition_t* UP_cond;
  int cond_status;
  StackRoots _roots({&UP_cond});

  b = false;
  UP_cond = cond;
  switch (cond->tag_()) {
    case condition_e::Shell: {
      condition__Shell* cond = static_cast<condition__Shell*>(UP_cond);
      this->_StrictErrExitList(cond->commands);
      {  // with
        state::ctx_ErrExit ctx(this->mutable_opts, false, spid);

        cond_status = this->_ExecuteList(cond->commands);
      }
      b = cond_status == 0;
    }
      break;
    case condition_e::Oil: {
    }
      break;
  }
  return b;
}

Tuple2<int, bool> CommandEvaluator::_Dispatch(syntax_asdl::command_t* node, runtime_asdl::CompoundStatus* pipeline_st) {
  bool check_errexit;
  syntax_asdl::command_t* UP_node;
  int span_id;
  List<syntax_asdl::compound_word*>* words;
  runtime_asdl::cmd_value_t* cmd_val;
  runtime_asdl::cmd_value_t* UP_cmd_val;
  List<Str*>* argv;
  bool is_other_special;
  int status;
  bool result;
  int i;
  runtime_asdl::scope_t which_scopes;
  int spid;
  runtime_asdl::value_t* val;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::value_t* old_val;
  runtime_asdl::value_t* UP_old_val;
  runtime_asdl::value_t* UP_val;
  int old_tag;
  int tag;
  List<Str*>* strs;
  int flags;
  int last_status;
  syntax_asdl::Token* tok;
  runtime_asdl::value__Str* str_val;
  int arg;
  bool ok;
  Str* msg;
  syntax_asdl::command_t* left;
  int n;
  syntax_asdl::command_t* child;
  int op_id;
  bool b;
  Str* iter_name;
  List<Str*>* iter_list;
  syntax_asdl::arith_expr_t* init;
  syntax_asdl::arith_expr_t* for_cond;
  syntax_asdl::command_t* body;
  syntax_asdl::arith_expr_t* update;
  int cond_int;
  List<runtime_asdl::value_t*>* defaults;
  bool done;
  Str* to_match;
  runtime_asdl::value__Str* pat_val;
  double s_real;
  double s_user;
  double s_sys;
  double e_real;
  double e_user;
  double e_sys;
  StackRoots _roots({&UP_node, &words, &cmd_val, &UP_cmd_val, &argv, &which_scopes, &val, &lval, &old_val, &UP_old_val, &UP_val, &strs, &tok, &str_val, &msg, &left, &child, &iter_name, &iter_list, &init, &for_cond, &body, &update, &defaults, &to_match, &pat_val});

  this->check_command_sub_status = false;
  check_errexit = false;
  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      check_errexit = true;
      if (len(node->words)) {
        span_id = word_::LeftMostSpanForWord(node->words->index(0));
        if (span_id != runtime::NO_SPID) {
          this->mem->SetCurrentSpanId(span_id);
        }
      }
      words = braces::BraceExpandWords(node->words);
      cmd_val = this->word_ev->EvalWordSequence2(words, true);
      UP_cmd_val = cmd_val;
      if (UP_cmd_val->tag_() == cmd_value_e::Argv) {
        cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
        argv = cmd_val->argv;
        cmd_val->block = node->block;
      }
      else {
        argv = Alloc<List<Str*>>(std::initializer_list<Str*>{str655});
        if (node->block) {
          e_die(fmt162(), node->block->spids->index(0));
        }
      }
      this->tracer->OnSimpleCommand(argv);
      if (len(node->more_env)) {
        is_other_special = false;
        if ((cmd_val->tag_() == cmd_value_e::Assign or is_other_special)) {
          this->_EvalTempEnv(node->more_env, 0);
          status = this->_RunSimpleCommand(cmd_val, node->do_fork);
        }
        else {
          {  // with
            state::ctx_Temp ctx(this->mem);

            this->_EvalTempEnv(node->more_env, state::SetExport);
            status = this->_RunSimpleCommand(cmd_val, node->do_fork);
          }
        }
      }
      else {
        status = this->_RunSimpleCommand(cmd_val, node->do_fork);
      }
    }
      break;
    case command_e::ExpandedAlias: {
      command__ExpandedAlias* node = static_cast<command__ExpandedAlias*>(UP_node);
      if (len(node->more_env)) {
        {  // with
          state::ctx_Temp ctx(this->mem);

          this->_EvalTempEnv(node->more_env, state::SetExport);
          status = this->_Execute(node->child);
        }
      }
      else {
        status = this->_Execute(node->child);
      }
    }
      break;
    case command_e::Sentence: {
      command__Sentence* node = static_cast<command__Sentence*>(UP_node);
      if (node->terminator->id == Id::Op_Semi) {
        status = this->_Execute(node->child);
      }
      else {
        status = this->shell_ex->RunBackgroundJob(node->child);
      }
    }
      break;
    case command_e::Pipeline: {
      command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
      check_errexit = true;
      if (len(node->stderr_indices)) {
        e_die(fmt163(), node->spids->index(0));
      }
      if (node->negated) {
        this->_StrictErrExit(node);
        pipeline_st->negated = true;
        {  // with
          state::ctx_ErrExit ctx(this->mutable_opts, false, node->spids->index(0));

          this->shell_ex->RunPipeline(node, pipeline_st);
        }
        check_errexit = false;
      }
      else {
        this->shell_ex->RunPipeline(node, pipeline_st);
      }
      status = -1;
    }
      break;
    case command_e::Subshell: {
      command__Subshell* node = static_cast<command__Subshell*>(UP_node);
      check_errexit = true;
      status = this->shell_ex->RunSubshell(node->child);
    }
      break;
    case command_e::DBracket: {
      command__DBracket* node = static_cast<command__DBracket*>(UP_node);
      span_id = node->spids->index(0);
      this->mem->SetCurrentSpanId(span_id);
      check_errexit = true;
      result = this->bool_ev->EvalB(node->expr);
      status = result ? 0 : 1;
    }
      break;
    case command_e::DParen: {
      command__DParen* node = static_cast<command__DParen*>(UP_node);
      span_id = node->spids->index(0);
      this->mem->SetCurrentSpanId(span_id);
      check_errexit = true;
      i = this->arith_ev->EvalToInt(node->child);
      status = i == 0 ? 1 : 0;
    }
      break;
    case command_e::VarDecl: {
      command__VarDecl* node = static_cast<command__VarDecl*>(UP_node);
    }
      break;
    case command_e::PlaceMutation: {
      status = 0;
    }
      break;
    case command_e::ShAssignment: {
      command__ShAssignment* node = static_cast<command__ShAssignment*>(UP_node);
      which_scopes = this->mem->ScopesForWriting();
      for (ListIter<syntax_asdl::assign_pair*> it(node->pairs); !it.Done(); it.Next()) {
        syntax_asdl::assign_pair* pair = it.Value();
        spid = pair->spids->index(0);
        this->mem->SetCurrentSpanId(spid);
        if (pair->op == assign_op_e::PlusEqual) {
          val = this->word_ev->EvalRhsWord(pair->rhs);
          lval = this->arith_ev->EvalShellLhs(pair->lhs, spid, which_scopes);
          old_val = sh_expr_eval::OldValue(lval, this->mem, this->exec_opts);
          UP_old_val = old_val;
          UP_val = val;
          old_tag = old_val->tag_();
          tag = val->tag_();
          if ((old_tag == value_e::Undef and tag == value_e::Str)) {
            ;  // pass
          }
          else {
            if ((old_tag == value_e::Undef and tag == value_e::MaybeStrArray)) {
              ;  // pass
            }
            else {
              if ((old_tag == value_e::Str and tag == value_e::Str)) {
                value__Str* old_val = static_cast<value__Str*>(UP_old_val);
                value__Str* str_to_append = static_cast<value__Str*>(UP_val);
                val = Alloc<value::Str>(str_concat(old_val->s, str_to_append->s));
              }
              else {
                if ((old_tag == value_e::Str and tag == value_e::MaybeStrArray)) {
                  e_die(str658);
                }
                else {
                  if ((old_tag == value_e::MaybeStrArray and tag == value_e::Str)) {
                    e_die(str659);
                  }
                  else {
                    if ((old_tag == value_e::MaybeStrArray and tag == value_e::MaybeStrArray)) {
                      value__MaybeStrArray* old_val = static_cast<value__MaybeStrArray*>(UP_old_val);
                      value__MaybeStrArray* to_append = static_cast<value__MaybeStrArray*>(UP_val);
                      strs = Alloc<List<Str*>>();
                      strs->extend(old_val->strs);
                      strs->extend(to_append->strs);
                      val = Alloc<value::MaybeStrArray>(strs);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          lval = this->arith_ev->EvalShellLhs(pair->lhs, spid, which_scopes);
          if (pair->rhs) {
            val = this->word_ev->EvalRhsWord(pair->rhs);
          }
          else {
            val = nullptr;
          }
        }
        flags = 0;
        this->mem->SetValue(lval, val, which_scopes, flags);
        this->tracer->OnShAssignment(lval, pair->op, val, flags, which_scopes);
      }
      if (this->check_command_sub_status) {
        last_status = this->mem->LastStatus();
        this->_CheckStatus(last_status, node, runtime::NO_SPID);
        status = last_status;
      }
      else {
        status = 0;
      }
    }
      break;
    case command_e::Expr: {
      command__Expr* node = static_cast<command__Expr*>(UP_node);
      status = 0;
    }
      break;
    case command_e::ControlFlow: {
      command__ControlFlow* node = static_cast<command__ControlFlow*>(UP_node);
      tok = node->token;
      if (node->arg_word) {
        str_val = this->word_ev->EvalWordToString(node->arg_word);
        try {
          arg = to_int(str_val->s);
        }
        catch (ValueError*) {
          e_die(fmt164(node->token->val, str_val->s), node->arg_word);
        }
      }
      else {
        if ((tok->id == Id::ControlFlow_Exit || tok->id == Id::ControlFlow_Return)) {
          arg = this->mem->LastStatus();
        }
        else {
          arg = 0;
        }
      }
      ok = true;
      if (((tok->id == Id::ControlFlow_Break || tok->id == Id::ControlFlow_Continue) and this->loop_level == 0)) {
        ok = false;
      }
      if (ok) {
        if (tok->id == Id::ControlFlow_Exit) {
          throw Alloc<util::UserExit>(arg);
        }
        else {
          throw Alloc<_ControlFlow>(tok, arg);
        }
      }
      else {
        msg = str661;
        if (this->exec_opts->strict_control_flow()) {
          e_die(dynamic_fmt_dummy(), tok);
        }
        else {
          this->errfmt->PrefixPrint(msg, str662, tok->span_id);
          status = 0;
        }
      }
    }
      break;
    case command_e::CommandList: {
      command__CommandList* node = static_cast<command__CommandList*>(UP_node);
      status = this->_ExecuteList(node->children);
      check_errexit = false;
    }
      break;
    case command_e::DoGroup: {
      command__DoGroup* node = static_cast<command__DoGroup*>(UP_node);
      status = this->_ExecuteList(node->children);
      check_errexit = false;
    }
      break;
    case command_e::BraceGroup: {
      BraceGroup* node = static_cast<BraceGroup*>(UP_node);
      status = this->_ExecuteList(node->children);
      check_errexit = false;
    }
      break;
    case command_e::AndOr: {
      command__AndOr* node = static_cast<command__AndOr*>(UP_node);
      left = node->children->index(0);
      this->_StrictErrExit(left);
      {  // with
        state::ctx_ErrExit ctx(this->mutable_opts, false, node->spids->index(0));

        status = this->_Execute(left);
      }
      i = 1;
      n = len(node->children);
      while (i < n) {
        child = node->children->index(i);
        op_id = node->ops->index((i - 1));
        if ((op_id == Id::Op_DPipe and status == 0)) {
          i += 1;
          continue;
        }
        else {
          if ((op_id == Id::Op_DAmp and status != 0)) {
            i += 1;
            continue;
          }
        }
        if (i == (n - 1)) {
          status = this->_Execute(child);
          check_errexit = true;
        }
        else {
          this->_StrictErrExit(child);
          {  // with
            state::ctx_ErrExit ctx(this->mutable_opts, false, node->spids->index(i));

            status = this->_Execute(child);
          }
        }
        i += 1;
      }
    }
      break;
    case command_e::WhileUntil: {
      command__WhileUntil* node = static_cast<command__WhileUntil*>(UP_node);
      status = 0;
      this->loop_level += 1;
      try {
        while (true) {
          try {
            b = this->_EvalCondition(node->cond, node->spids->index(0));
            if (node->keyword->id == Id::KW_Until) {
              b = !b;
            }
            if (!b) {
              break;
            }
            status = this->_Execute(node->body);
          }
          catch (_ControlFlow* e) {
            if (e->IsBreak()) {
              status = 0;
              break;
            }
            else {
              if (e->IsContinue()) {
                status = 0;
                continue;
              }
              else {
                throw ;
              }
            }
          }
        }
      }
      catch (std::exception) { }    }
      break;
    case command_e::ForEach: {
      command__ForEach* node = static_cast<command__ForEach*>(UP_node);
      this->mem->SetCurrentSpanId(node->spids->index(0));
      iter_name = node->iter_name;
      if (node->do_arg_iter) {
        iter_list = this->mem->GetArgv();
      }
      else {
        words = braces::BraceExpandWords(node->iter_words);
        iter_list = this->word_ev->EvalWordSequence(words);
      }
      status = 0;
      this->loop_level += 1;
      try {
        for (ListIter<Str*> it(iter_list); !it.Done(); it.Next()) {
          Str* x = it.Value();
          this->mem->SetValue(Alloc<lvalue::Named>(iter_name), Alloc<value::Str>(x), scope_e::LocalOnly);
          try {
            status = this->_Execute(node->body);
          }
          catch (_ControlFlow* e) {
            if (e->IsBreak()) {
              status = 0;
              break;
            }
            else {
              if (e->IsContinue()) {
                status = 0;
              }
              else {
                throw ;
              }
            }
          }
        }
      }
      catch (std::exception) { }    }
      break;
    case command_e::ForExpr: {
      command__ForExpr* node = static_cast<command__ForExpr*>(UP_node);
      status = 0;
      init = node->init;
      for_cond = node->cond;
      body = node->body;
      update = node->update;
      if (init) {
        this->arith_ev->Eval(init);
      }
      this->loop_level += 1;
      try {
        while (true) {
          if (for_cond) {
            cond_int = this->arith_ev->EvalToInt(for_cond);
            if (cond_int == 0) {
              break;
            }
          }
          try {
            status = this->_Execute(body);
          }
          catch (_ControlFlow* e) {
            if (e->IsBreak()) {
              status = 0;
              break;
            }
            else {
              if (e->IsContinue()) {
                status = 0;
              }
              else {
                throw ;
              }
            }
          }
          if (update) {
            this->arith_ev->Eval(update);
          }
        }
      }
      catch (std::exception) { }    }
      break;
    case command_e::OilForIn: {
      command__OilForIn* node = static_cast<command__OilForIn*>(UP_node);
      status = 0;
    }
      break;
    case command_e::ShFunction: {
      command__ShFunction* node = static_cast<command__ShFunction*>(UP_node);
      this->procs->set(node->name, Alloc<Proc>(node->name, node->spids->index(1), Alloc<proc_sig::Open>(), node->body, Alloc<List<runtime_asdl::value_t*>>(), true));
      status = 0;
    }
      break;
    case command_e::Proc: {
      command__Proc* node = static_cast<command__Proc*>(UP_node);
      defaults = nullptr;
      this->procs->set(node->name->val, Alloc<Proc>(node->name->val, node->name->span_id, node->sig, node->body, defaults, false));
      status = 0;
    }
      break;
    case command_e::Func: {
      command__Func* node = static_cast<command__Func*>(UP_node);
      status = 0;
    }
      break;
    case command_e::If: {
      command__If* node = static_cast<command__If*>(UP_node);
      done = false;
      for (ListIter<syntax_asdl::if_arm*> it(node->arms); !it.Done(); it.Next()) {
        syntax_asdl::if_arm* if_arm = it.Value();
        b = this->_EvalCondition(if_arm->cond, if_arm->spids->index(0));
        if (b) {
          status = this->_ExecuteList(if_arm->action);
          done = true;
          break;
        }
      }
      if ((!done and node->else_action != nullptr)) {
        status = this->_ExecuteList(node->else_action);
      }
    }
      break;
    case command_e::NoOp: {
      command__NoOp* node = static_cast<command__NoOp*>(UP_node);
      status = 0;
    }
      break;
    case command_e::Case: {
      command__Case* node = static_cast<command__Case*>(UP_node);
      str_val = this->word_ev->EvalWordToString(node->to_match);
      to_match = str_val->s;
      status = 0;
      done = false;
      for (ListIter<syntax_asdl::case_arm*> it(node->arms); !it.Done(); it.Next()) {
        syntax_asdl::case_arm* case_arm = it.Value();
        for (ListIter<syntax_asdl::word_t*> it(case_arm->pat_list); !it.Done(); it.Next()) {
          syntax_asdl::word_t* pat_word = it.Value();
          pat_val = this->word_ev->EvalWordToString(pat_word, quote_e::FnMatch);
          if (libc::fnmatch(pat_val->s, to_match, this->exec_opts->extglob())) {
            status = this->_ExecuteList(case_arm->action);
            done = true;
            break;
          }
        }
        if (done) {
          break;
        }
      }
    }
      break;
    case command_e::TimeBlock: {
      command__TimeBlock* node = static_cast<command__TimeBlock*>(UP_node);
      Tuple3<double, double, double> tup1 = pyos::Time();
      s_real = tup1.at0();
      s_user = tup1.at1();
      s_sys = tup1.at2();
      status = this->_Execute(node->pipeline);
      Tuple3<double, double, double> tup2 = pyos::Time();
      e_real = tup2.at0();
      e_user = tup2.at1();
      e_sys = tup2.at2();
      libc::print_time((e_real - s_real), (e_user - s_user), (e_sys - s_sys));
    }
      break;
    default: {
      throw Alloc<NotImplementedError>(node->tag_());
    }
  }
  return (Tuple2<int, bool>(status, check_errexit));
}

int CommandEvaluator::_Execute(syntax_asdl::command_t* node) {
  List<syntax_asdl::command_t*>* to_run;
  runtime_asdl::CompoundStatus* pipeline_st;
  runtime_asdl::CompoundStatus* process_sub_st;
  int errexit_spid;
  bool check_errexit;
  List<runtime_asdl::redirect*>* redirects;
  int status;
  List<int>* codes;
  int i;
  StackRoots _roots({&to_run, &pipeline_st, &process_sub_st, &redirects, &codes});

  if (len(this->trap_nodes)) {
    to_run = list(this->trap_nodes);
    this->trap_nodes->clear();
    for (ListIter<syntax_asdl::command_t*> it(to_run); !it.Done(); it.Next()) {
      syntax_asdl::command_t* trap_node = it.Value();
      this->_Execute(trap_node);
    }
  }
  pipeline_st = Alloc<CompoundStatus>();
  process_sub_st = Alloc<CompoundStatus>();
  errexit_spid = runtime::NO_SPID;
  check_errexit = true;
  {  // with
    vm::ctx_ProcessSub ctx(this->shell_ex, process_sub_st);

    try {
      redirects = this->_EvalRedirects(node);
    }
    catch (error::RedirectEval* e) {
      ui::PrettyPrintError(e, this->arena);
      redirects = nullptr;
    }
    if (redirects == nullptr) {
      status = 1;
    }
    else {
      if (this->shell_ex->PushRedirects(redirects)) {
        {  // with
          vm::ctx_Redirect ctx(this->shell_ex);

          Tuple2<int, bool> tup3 = this->_Dispatch(node, pipeline_st);
          status = tup3.at0();
          check_errexit = tup3.at1();
        }
        codes = pipeline_st->codes;
        if (len(codes)) {
          this->mem->SetPipeStatus(codes);
          if (this->exec_opts->pipefail()) {
            status = 0;
            i = 0;
            for (ListIter<int> it(codes); !it.Done(); it.Next(), ++i) {
              int st = it.Value();
              if (st != 0) {
                status = st;
                errexit_spid = pipeline_st->spids->index(i);
              }
            }
          }
          else {
            status = codes->index(-1);
          }
          if (pipeline_st->negated) {
            status = status == 0 ? 1 : 0;
          }
        }
      }
      else {
        status = 1;
      }
    }
  }
  if (len(process_sub_st->codes)) {
    codes = process_sub_st->codes;
    this->mem->SetProcessSubStatus(codes);
    if ((status == 0 and this->exec_opts->process_sub_fail())) {
      i = 0;
      for (ListIter<int> it(codes); !it.Done(); it.Next(), ++i) {
        int st = it.Value();
        if (st != 0) {
          status = st;
          errexit_spid = process_sub_st->spids->index(i);
        }
      }
    }
  }
  this->mem->SetLastStatus(status);
  if (check_errexit) {
    this->_CheckStatus(status, node, errexit_spid);
  }
  return status;
}

int CommandEvaluator::_ExecuteList(List<syntax_asdl::command_t*>* children) {
  int status;
  status = 0;
  for (ListIter<syntax_asdl::command_t*> it(children); !it.Done(); it.Next()) {
    syntax_asdl::command_t* child = it.Value();
    status = this->_Execute(child);
  }
  return status;
}

int CommandEvaluator::LastStatus() {
  return this->mem->LastStatus();
}

void CommandEvaluator::_NoForkLast(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  StackRoots _roots({&UP_node});

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      node->do_fork = false;
    }
      break;
    case command_e::Pipeline: {
      command__Pipeline* node = static_cast<command__Pipeline*>(UP_node);
      if (!node->negated) {
        this->_NoForkLast(node->children->index(-1));
      }
    }
      break;
    case command_e::Sentence: {
      command__Sentence* node = static_cast<command__Sentence*>(UP_node);
      this->_NoForkLast(node->child);
    }
      break;
    case command_e::CommandList: {
      command__CommandList* node = static_cast<command__CommandList*>(UP_node);
      this->_NoForkLast(node->children->index(-1));
    }
      break;
    case command_e::BraceGroup: {
      BraceGroup* node = static_cast<BraceGroup*>(UP_node);
      this->_NoForkLast(node->children->index(-1));
    }
      break;
  }
}

syntax_asdl::command_t* CommandEvaluator::_RemoveSubshells(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  StackRoots _roots({&UP_node});

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Subshell: {
      command__Subshell* node = static_cast<command__Subshell*>(UP_node);
      if (len(node->redirects) == 0) {
        return this->_RemoveSubshells(node->child);
      }
    }
      break;
  }
  return node;
}

Tuple2<bool, bool> CommandEvaluator::ExecuteAndCatch(syntax_asdl::command_t* node) {
  return ExecuteAndCatch(node, 0);
}

Tuple2<bool, bool> CommandEvaluator::ExecuteAndCatch(syntax_asdl::command_t* node, int cmd_flags) {
  bool is_return;
  bool is_fatal;
  bool is_errexit;
  error::_ErrorWithLocation* err;
  int status;
  bool is_eval;
  StackRoots _roots({&node, &err});

  if ((cmd_flags & Optimize)) {
    node = this->_RemoveSubshells(node);
    this->_NoForkLast(node);
  }
  is_return = false;
  is_fatal = false;
  is_errexit = false;
  err = nullptr;
  try {
    status = this->_Execute(node);
  }
  catch (_ControlFlow* e) {
    if ((cmd_flags & IsEvalSource)) {
      throw ;
    }
    else {
      if (e->IsReturn()) {
        is_return = true;
        status = e->StatusCode();
      }
      else {
        is_eval = false;
        this->errfmt->Print_(str663, e->token->span_id);
        is_fatal = true;
        status = 1;
      }
    }
  }
  catch (error::Parse* e) {
    this->dumper->MaybeCollect(this, e);
    throw ;
  }
  catch (error::ErrExit* e) {
    err = e;
    is_errexit = true;
  }
  catch (error::FatalRuntime* e) {
    err = e;
  }
  if (err) {
    status = err->ExitStatus();
    is_fatal = true;
    this->dumper->MaybeCollect(this, err);
    if (!err->HasLocation()) {
      err->span_id = this->mem->CurrentSpanId();
    }
    if ((is_errexit and !this->exec_opts->verbose_errexit())) {
      ;  // pass
    }
    else {
      ui::PrettyPrintError(err, this->arena, str664);
    }
  }
  this->dumper->MaybeDump(status);
  this->mem->SetLastStatus(status);
  return (Tuple2<bool, bool>(is_return, is_fatal));
}

void CommandEvaluator::MaybeRunExitTrap(List<int>* mut_status) {
  builtin_process::_TrapHandler* handler;
  bool is_return;
  bool is_fatal;
  StackRoots _roots({&handler});

  handler = this->traps->get(str665);
  if (handler) {
    try {
      Tuple2<bool, bool> tup4 = this->ExecuteAndCatch(handler->node);
      is_return = tup4.at0();
      is_fatal = tup4.at1();
    }
    catch (util::UserExit* e) {
      mut_status->set(0, e->status);
      return ;
    }
    if (is_return) {
      mut_status->set(0, this->LastStatus());
    }
  }
}

int CommandEvaluator::RunProc(runtime_asdl::Proc* proc, List<Str*>* argv) {
  syntax_asdl::proc_sig_t* sig;
  List<Str*>* proc_argv;
  int n_args;
  syntax_asdl::proc_sig_t* UP_sig;
  int i;
  bool is_out_param;
  Str* param_name;
  Str* arg_str;
  runtime_asdl::value_t* val;
  int flags;
  int n_params;
  runtime_asdl::value__MaybeStrArray* leftover;
  int status;
  StackRoots _roots({&sig, &proc_argv, &UP_sig, &param_name, &arg_str, &val, &leftover});

  sig = proc->sig;
  if (sig->tag_() == proc_sig_e::Closed) {
    proc_argv = Alloc<List<Str*>>();
  }
  else {
    proc_argv = argv;
  }
  {  // with
    state::ctx_Call ctx(this->mem, this->mutable_opts, proc, proc_argv);

    n_args = len(argv);
    UP_sig = sig;
    if (UP_sig->tag_() == proc_sig_e::Closed) {
      proc_sig__Closed* sig = static_cast<proc_sig__Closed*>(UP_sig);
      i = 0;
      for (ListIter<syntax_asdl::param*> it(sig->params); !it.Done(); it.Next(), ++i) {
        syntax_asdl::param* p = it.Value();
        is_out_param = (p->prefix != nullptr and p->prefix->id == Id::Arith_Colon);
        param_name = p->name->val;
        if (i < n_args) {
          arg_str = argv->index(i);
          if (is_out_param) {
            param_name = str_concat(str666, param_name);
            if (!arg_str->startswith(str667)) {
              e_die(fmt165(arg_str));
            }
            arg_str = arg_str->slice(1);
          }
          val = Alloc<value::Str>(arg_str);
        }
        else {
          val = proc->defaults->index(i);
          if (val == nullptr) {
            e_die(fmt166(p->name->val));
          }
        }
        if (is_out_param) {
          flags = state::SetNameref;
        }
        else {
          flags = 0;
        }
        this->mem->SetValue(Alloc<lvalue::Named>(param_name), val, scope_e::LocalOnly, flags);
      }
      n_params = len(sig->params);
      if (sig->rest) {
        leftover = Alloc<value::MaybeStrArray>(argv->slice(n_params));
        this->mem->SetValue(Alloc<lvalue::Named>(sig->rest->val), leftover, scope_e::LocalOnly);
      }
      else {
        if (n_args > n_params) {
          throw Alloc<TypeError>(fmt167(proc->name, n_params, n_args));
        }
      }
    }
    try {
      status = this->_Execute(proc->body);
    }
    catch (_ControlFlow* e) {
      if (e->IsReturn()) {
        status = e->StatusCode();
      }
      else {
        e_die(fmt168(e->token->val), e->token);
      }
    }
    catch (error::FatalRuntime* e) {
      this->dumper->MaybeCollect(this, e);
      throw ;
    }
  }
  return status;
}

Dict<Str*, runtime_asdl::cell*>* CommandEvaluator::EvalBlock(syntax_asdl::command_t* block) {
  int status;
  Dict<Str*, runtime_asdl::cell*>* namespace_;
  StackRoots _roots({&namespace_});

  status = 0;
  namespace_ = nullptr;
  this->mem->PushTemp();
  try {
    try {
      this->_Execute(block);
    }
    catch (_ControlFlow* e) {
      if (e->IsReturn()) {
        status = e->StatusCode();
      }
      else {
        throw ;
      }
    }
  }
  catch (std::exception) { }  return namespace_;
}

int CommandEvaluator::RunFuncForCompletion(runtime_asdl::Proc* proc, List<Str*>* argv) {
  int status;
  try {
    status = this->RunProc(proc, argv);
  }
  catch (error::FatalRuntime* e) {
    ui::PrettyPrintError(e, this->arena);
    status = e->ExitStatus();
  }
  catch (_ControlFlow* e) {
    this->errfmt->Print_(str672, e->token->span_id);
    status = 1;
  }
  return status;
}

}  // define namespace cmd_eval

namespace cmd_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
namespace condition = syntax_asdl::condition;
using syntax_asdl::condition_t;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__Simple;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__ForEach;
using syntax_asdl::command__WhileUntil;
using syntax_asdl::command__Case;
using syntax_asdl::command__If;
using syntax_asdl::command__ShFunction;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__DBracket;
using syntax_asdl::command__DParen;
using syntax_asdl::command__CommandList;
using syntax_asdl::command__Proc;
using syntax_asdl::BraceGroup;
using syntax_asdl::case_arm;
namespace sh_lhs_expr = syntax_asdl::sh_lhs_expr;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::redir;
namespace redir_param = syntax_asdl::redir_param;
using syntax_asdl::redir_param__HereDoc;
namespace redir_loc = syntax_asdl::redir_loc;
using syntax_asdl::redir_loc_t;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::assign_pair;
using syntax_asdl::env_pair;
using syntax_asdl::assign_op_e;
namespace source = syntax_asdl::source;
namespace parse_result = syntax_asdl::parse_result;
using syntax_asdl::parse_result_t;
using syntax_asdl::speck;
using syntax_asdl::name_type;

int _KeywordSpid(syntax_asdl::word_t* w) {
  return word_::LeftMostSpanForWord(w);
}

syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part;
  StackRoots _roots({&part});

  compound_word* w = static_cast<compound_word*>(UP_w);
  part = w->parts->index(0);
  return static_cast<Token*>(part);
}

Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir* h, Str* delimiter) {
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  bool strip_leading_tabs;
  int line_id;
  Str* line;
  int unused_offset;
  int start_offset;
  int n;
  int i;
  StackRoots _roots({&here_lines, &last_line, &line});

  here_lines = Alloc<List<Tuple3<int, Str*, int>*>>();
  last_line = nullptr;
  strip_leading_tabs = h->op->id == Id::Redir_DLessDash;
  while (true) {
    Tuple3<int, Str*, int> tup0 = line_reader->GetLine();
    line_id = tup0.at0();
    line = tup0.at1();
    unused_offset = tup0.at2();
    if (line == nullptr) {
      p_die(fmt169(), h->op);
    }
    start_offset = 0;
    if (strip_leading_tabs) {
      n = len(line);
      i = 0;
      while (i < n) {
        if (!(str_equals(line->index(i), str674))) {
          break;
        }
        i += 1;
      }
      start_offset = i;
    }
    if (str_equals(line->slice(start_offset)->rstrip(), delimiter)) {
      last_line = (Alloc<Tuple3<int, Str*, int>>(line_id, line, start_offset));
      break;
    }
    here_lines->append((Alloc<Tuple3<int, Str*, int>>(line_id, line, start_offset)));
  }
  return (Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*>(here_lines, last_line));
}

List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena) {
  List<syntax_asdl::Token*>* tokens;
  int line_id;
  Str* line;
  int start_offset;
  int span_id;
  syntax_asdl::Token* t;
  List<syntax_asdl::word_part_t*>* parts;
  StackRoots _roots({&tokens, &line, &t, &parts});

  tokens = Alloc<List<syntax_asdl::Token*>>();
  for (ListIter<Tuple3<int, Str*, int>*> it(here_lines); !it.Done(); it.Next()) {
    Tuple3<int, Str*, int>* tup1 = it.Value();
    line_id = tup1->at0();
    line = tup1->at1();
    start_offset = tup1->at2();
    span_id = arena->AddLineSpan(line_id, start_offset, len(line));
    t = Alloc<Token>(Id::Lit_Chars, span_id, line->slice(start_offset));
    tokens->append(t);
  }
  parts = Alloc<List<syntax_asdl::word_part_t*>>();
  for (ListIter<syntax_asdl::Token*> it(tokens); !it.Done(); it.Next()) {
    syntax_asdl::Token* t = it.Value();
    parts->append(static_cast<word_part_t*>(t));
  }
  return parts;
}

void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir* r, reader::_Reader* line_reader, alloc::Arena* arena) {
  bool ok;
  Str* delimiter;
  bool delim_quoted;
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  word_parse::WordParser* w_parser;
  int end_line_id;
  Str* end_line;
  int end_pos;
  StackRoots _roots({&delimiter, &here_lines, &last_line, &line_reader, &w_parser, &end_line});

  redir_param__HereDoc* h = static_cast<redir_param__HereDoc*>(r->arg);
  Tuple3<bool, Str*, bool> tup2 = word_::StaticEval(h->here_begin);
  ok = tup2.at0();
  delimiter = tup2.at1();
  delim_quoted = tup2.at2();
  if (!ok) {
    p_die(fmt170(), h->here_begin);
  }
  Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> tup3 = _ReadHereLines(line_reader, r, delimiter);
  here_lines = tup3.at0();
  last_line = tup3.at1();
  if (delim_quoted) {
    h->stdin_parts = _MakeLiteralHereLines(here_lines, arena);
  }
  else {
    line_reader = Alloc<reader::VirtualLineReader>(here_lines, arena);
    w_parser = parse_ctx->MakeWordParserForHereDoc(line_reader);
    w_parser->ReadHereDocBody(h->stdin_parts);
  }
  Tuple3<int, Str*, int>* tup4 = last_line;
  end_line_id = tup4->at0();
  end_line = tup4->at1();
  end_pos = tup4->at2();
  h->here_end_span_id = arena->AddLineSpan(end_line_id, end_pos, len(end_line));
}

syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena) {
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;
  syntax_asdl::compound_word* w;
  Str* var_name;
  syntax_asdl::assign_op_t op;
  syntax_asdl::sh_lhs_expr__Name* tmp;
  sh_lhs_expr_t* lhs;
  int left_spid;
  int right_spid;
  syntax_asdl::line_span* left_span;
  syntax_asdl::line_span* right_span;
  Str* line;
  Str* index_str;
  int spid1;
  int spid2;
  syntax_asdl::line_span* span1;
  syntax_asdl::line_span* span2;
  Str* code_str;
  tdop::TdopParser* a_parser;
  syntax_asdl::source__LValue* src;
  syntax_asdl::arith_expr_t* index_node;
  syntax_asdl::sh_lhs_expr__IndexedName* tmp3;
  int n;
  syntax_asdl::word_t* rhs;
  syntax_asdl::compound_word* tmp2;
  syntax_asdl::assign_pair* pair;
  StackRoots _roots({&left_token, &close_token, &w, &var_name, &op, &tmp, &lhs, &left_span, &right_span, &line, &index_str, &span1, &span2, &code_str, &a_parser, &src, &index_node, &tmp3, &rhs, &tmp2, &pair});

  Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup5 = preparsed;
  left_token = tup5->at0();
  close_token = tup5->at1();
  part_offset = tup5->at2();
  w = tup5->at3();
  if (left_token->id == Id::Lit_VarLike) {
    if (str_equals(left_token->val->index(-2), str676)) {
      var_name = left_token->val->slice(0, -2);
      op = assign_op_e::PlusEqual;
    }
    else {
      var_name = left_token->val->slice(0, -1);
      op = assign_op_e::Equal;
    }
    tmp = Alloc<sh_lhs_expr::Name>(var_name);
    tmp->spids->append(left_token->span_id);
    lhs = static_cast<sh_lhs_expr_t*>(tmp);
  }
  else {
    if ((left_token->id == Id::Lit_ArrayLhsOpen and parse_ctx->one_pass_parse)) {
      var_name = left_token->val->slice(0, -1);
      if (str_equals(close_token->val->index(-2), str677)) {
        op = assign_op_e::PlusEqual;
      }
      else {
        op = assign_op_e::Equal;
      }
      left_spid = (left_token->span_id + 1);
      right_spid = close_token->span_id;
      left_span = parse_ctx->arena->GetLineSpan(left_spid);
      right_span = parse_ctx->arena->GetLineSpan(right_spid);
      line = parse_ctx->arena->GetLine(left_span->line_id);
      index_str = line->slice(left_span->col, right_span->col);
      lhs = Alloc<sh_lhs_expr::UnparsedIndex>(var_name, index_str);
    }
    else {
      if (left_token->id == Id::Lit_ArrayLhsOpen) {
        var_name = left_token->val->slice(0, -1);
        if (str_equals(close_token->val->index(-2), str678)) {
          op = assign_op_e::PlusEqual;
        }
        else {
          op = assign_op_e::Equal;
        }
        spid1 = left_token->span_id;
        spid2 = close_token->span_id;
        span1 = arena->GetLineSpan(spid1);
        span2 = arena->GetLineSpan(spid2);
        if (span1->line_id == span2->line_id) {
          line = arena->GetLine(span1->line_id);
          code_str = line->slice((span1->col + span1->length), span2->col);
        }
        else {
          throw Alloc<NotImplementedError>(fmt171(span1->line_id, span2->line_id));
        }
        a_parser = parse_ctx->MakeArithParser(code_str);
        src = Alloc<source::LValue>(left_token->span_id, close_token->span_id);
        {  // with
          alloc::ctx_Location ctx(arena, src);

          index_node = a_parser->Parse();
        }
        tmp3 = Alloc<sh_lhs_expr::IndexedName>(var_name, index_node);
        tmp3->spids->append(left_token->span_id);
        lhs = static_cast<sh_lhs_expr_t*>(tmp3);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  n = len(w->parts);
  if (part_offset == n) {
    rhs = Alloc<word::Empty>();
  }
  else {
    tmp2 = Alloc<compound_word>(w->parts->slice(part_offset));
    word_::TildeDetectAssign(tmp2);
    rhs = tmp2;
  }
  pair = Alloc<syntax_asdl::assign_pair>(lhs, op, rhs, Alloc<List<int>>(std::initializer_list<int>{left_token->span_id}));
  return pair;
}

void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env) {
  syntax_asdl::Token* left_token;
  int part_offset;
  syntax_asdl::compound_word* w;
  Str* var_name;
  int n;
  syntax_asdl::word_t* val;
  syntax_asdl::env_pair* pair;
  StackRoots _roots({&left_token, &w, &var_name, &val, &pair});

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup6 = it.Value();
    left_token = tup6->at0();
    part_offset = tup6->at2();
    w = tup6->at3();
    if (left_token->id != Id::Lit_VarLike) {
      p_die(fmt172(), left_token);
    }
    if (str_equals(left_token->val->index(-2), str681)) {
      p_die(fmt173(), left_token);
    }
    var_name = left_token->val->slice(0, -1);
    n = len(w->parts);
    if (part_offset == n) {
      val = Alloc<word::Empty>();
    }
    else {
      val = Alloc<compound_word>(w->parts->slice(part_offset));
    }
    pair = Alloc<syntax_asdl::env_pair>(var_name, val, Alloc<List<int>>(std::initializer_list<int>{left_token->span_id}));
    more_env->append(pair);
  }
}

Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words) {
  List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list;
  List<syntax_asdl::compound_word*>* suffix_words;
  bool done_prefix;
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;
  StackRoots _roots({&preparsed_list, &suffix_words, &left_token, &close_token});

  preparsed_list = Alloc<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>>();
  suffix_words = Alloc<List<syntax_asdl::compound_word*>>();
  done_prefix = false;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::compound_word* w = it.Value();
    if (done_prefix) {
      suffix_words->append(w);
      continue;
    }
    Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> tup7 = word_::DetectShAssignment(w);
    left_token = tup7.at0();
    close_token = tup7.at1();
    part_offset = tup7.at2();
    if (left_token) {
      preparsed_list->append((Alloc<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>>(left_token, close_token, part_offset, w)));
    }
    else {
      done_prefix = true;
      suffix_words->append(w);
    }
  }
  return (Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>(preparsed_list, suffix_words));
}

syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir*>* redirects, syntax_asdl::BraceGroup* block) {
  syntax_asdl::compound_word* w;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__Simple* node;
  StackRoots _roots({&w, &words2, &words3, &more_env, &node});

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup8 = it.Value();
    w = tup8->at3();
    if (word_::HasArrayPart(w)) {
      p_die(fmt174(), w);
    }
  }
  words2 = braces::BraceDetectAll(suffix_words);
  words3 = word_::TildeDetectAll(words2);
  more_env = Alloc<List<syntax_asdl::env_pair*>>();
  _AppendMoreEnv(preparsed_list, more_env);
  node = Alloc<command::Simple>(words3, redirects, more_env, block, true);
  return node;
}
List<int> glist9 = {Id::KW_Do, Id::KW_Done, Id::KW_Then, Id::KW_Fi, Id::KW_Elif, Id::KW_Else, Id::KW_Esac};
List<int>* SECONDARY_KEYWORDS = &glist9;

CommandParser::CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(CommandParser)) {
  this->parse_ctx = parse_ctx;
  this->aliases = parse_ctx->aliases;
  this->w_parser = w_parser;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->arena = parse_ctx->arena;
  this->eof_id = Id::Eof_Real;
  this->aliases_in_flight = Alloc<List<Tuple2<Str*, int>*>>();
  this->allow_block = true;
  this->parse_opts = parse_ctx->parse_opts;
  this->Reset();
}

void CommandParser::Init_EofId(int eof_id) {
  this->eof_id = eof_id;
}

void CommandParser::Init_AliasesInFlight(List<Tuple2<Str*, int>*>* aliases_in_flight) {
  this->aliases_in_flight = aliases_in_flight;
}

void CommandParser::Reset() {
  this->next_lex_mode = lex_mode_e::ShCommand;
  this->cur_word = nullptr;
  this->c_kind = Kind::Undefined;
  this->c_id = Id::Undefined_Tok;
  this->pending_here_docs = Alloc<List<syntax_asdl::redir*>>();
}

void CommandParser::ResetInputObjects() {
  this->w_parser->Reset();
  this->lexer->ResetInputObjects();
  this->line_reader->Reset();
}

void CommandParser::_Next() {
  _Next(lex_mode_e::ShCommand);
}

void CommandParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

void CommandParser::_Peek() {
  syntax_asdl::word_t* w;
  StackRoots _roots({&w});

  if (this->next_lex_mode != lex_mode_e::Undefined) {
    w = this->w_parser->ReadWord(this->next_lex_mode);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Op_Newline) {
        for (ListIter<syntax_asdl::redir*> it(this->pending_here_docs); !it.Done(); it.Next()) {
          syntax_asdl::redir* h = it.Value();
          _ParseHereDocBody(this->parse_ctx, h, this->line_reader, this->arena);
        }
        this->pending_here_docs->clear();
      }
    }
    this->cur_word = w;
    this->c_kind = word_::CommandKind(this->cur_word);
    this->c_id = word_::CommandId(this->cur_word);
    this->next_lex_mode = lex_mode_e::Undefined;
  }
}

void CommandParser::_Eat(int c_id) {
  int actual_id;
  Str* msg;
  StackRoots _roots({&msg});

  actual_id = word_::CommandId(this->cur_word);
  msg = fmt175(ui::PrettyId(c_id), ui::PrettyId(actual_id));
  this->_Eat2(c_id, msg);
}

void CommandParser::_Eat2(int c_id, Str* msg) {
  this->_Peek();
  if (this->c_id != c_id) {
    p_die(dynamic_fmt_dummy(), this->cur_word);
  }
  this->_Next();
}

void CommandParser::_NewlineOk() {
  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    this->_Next();
    this->_Peek();
  }
}

bool CommandParser::_AtSecondaryKeyword() {
  if (list_contains(SECONDARY_KEYWORDS, this->c_id)) {
    return true;
  }
  return false;
}

syntax_asdl::redir* CommandParser::ParseRedirect() {
  Str* op_val;
  int pos;
  syntax_asdl::redir_loc_t* loc;
  syntax_asdl::redir_param__HereDoc* arg;
  syntax_asdl::redir* r;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::compound_word* tilde;
  StackRoots _roots({&op_val, &loc, &arg, &r, &arg_word, &tilde});

  this->_Peek();
  Token* op_tok = static_cast<Token*>(this->cur_word);
  op_val = op_tok->val;
  if (str_equals(op_val->index(0), str685)) {
    pos = op_val->find(str686);
    loc = Alloc<redir_loc::VarName>(op_val->slice(1, pos));
  }
  else {
    if (op_val->index(0)->isdigit()) {
      pos = 1;
      if (op_val->index(1)->isdigit()) {
        pos = 2;
      }
      loc = Alloc<redir_loc::Fd>(to_int(op_val->slice(0, pos)));
    }
    else {
      loc = Alloc<redir_loc::Fd>(consts::RedirDefaultFd(op_tok->id));
    }
  }
  this->_Next();
  this->_Peek();
  if ((op_tok->id == Id::Redir_DLess || op_tok->id == Id::Redir_DLessDash)) {
    arg = Alloc<redir_param::HereDoc>();
    arg->here_begin = this->cur_word;
    r = Alloc<redir>(op_tok, loc, arg);
    this->pending_here_docs->append(r);
    this->_Next();
    return r;
  }
  if (this->c_kind != Kind::Word) {
    p_die(fmt176(), this->cur_word);
  }
  arg_word = this->cur_word;
  tilde = word_::TildeDetect(arg_word);
  if (tilde) {
    arg_word = tilde;
  }
  this->_Next();
  return Alloc<redir>(op_tok, loc, static_cast<compound_word*>(arg_word));
}

List<syntax_asdl::redir*>* CommandParser::_ParseRedirectList() {
  List<syntax_asdl::redir*>* redirects;
  syntax_asdl::redir* node;
  StackRoots _roots({&redirects, &node});

  redirects = Alloc<List<syntax_asdl::redir*>>();
  while (true) {
    this->_Peek();
    if (this->c_kind != Kind::Redir) {
      break;
    }
    node = this->ParseRedirect();
    redirects->append(node);
    this->_Next();
  }
  return redirects;
}

Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*> CommandParser::_ScanSimpleCommand() {
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::BraceGroup* block;
  syntax_asdl::redir* node;
  StackRoots _roots({&redirects, &words, &block, &node});

  redirects = Alloc<List<syntax_asdl::redir*>>();
  words = Alloc<List<syntax_asdl::compound_word*>>();
  block = nullptr;
  while (true) {
    this->_Peek();
    if (this->c_kind == Kind::Redir) {
      node = this->ParseRedirect();
      redirects->append(node);
    }
    else {
      if (this->c_kind == Kind::Word) {
        if (this->parse_opts->parse_brace()) {
          if (this->c_id == Id::Lit_LBrace) {
            if (this->allow_block) {
              block = this->ParseBraceGroup();
            }
            break;
          }
          else {
            if (this->c_id == Id::Lit_RBrace) {
              break;
            }
          }
        }
        if (this->parse_opts->parse_triple_dots()) {
          ;  // pass
        }
        compound_word* w = static_cast<compound_word*>(this->cur_word);
        words->append(w);
      }
      else {
        if ((this->parse_opts->parse_amp() and this->c_id == Id::Op_Amp)) {
          p_die(fmt177(), this->cur_word);
        }
        else {
          break;
        }
      }
    }
    this->_Next();
  }
  return (Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*>(redirects, words, block));
}

syntax_asdl::command_t* CommandParser::_MaybeExpandAliases(List<syntax_asdl::compound_word*>* words) {
  List<Tuple2<Str*, int>*>* aliases_in_flight;
  Str* first_word_str;
  int argv0_spid;
  List<Str*>* expanded;
  int i;
  int n;
  syntax_asdl::compound_word* w;
  bool ok;
  Str* word_str;
  bool quoted;
  Str* alias_exp;
  int spid1;
  int spid2;
  syntax_asdl::line_span* span1;
  syntax_asdl::line_span* span2;
  Str* line;
  Str* piece;
  Str* code_str;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* cp;
  syntax_asdl::source__Alias* src;
  syntax_asdl::command__CommandList* node;
  StackRoots _roots({&aliases_in_flight, &first_word_str, &expanded, &w, &word_str, &alias_exp, &span1, &span2, &line, &piece, &code_str, &line_reader, &cp, &src, &node});

  aliases_in_flight = len(this->aliases_in_flight) ? this->aliases_in_flight : Alloc<List<Tuple2<Str*, int>*>>();
  first_word_str = nullptr;
  argv0_spid = word_::LeftMostSpanForWord(words->index(0));
  expanded = Alloc<List<Str*>>();
  i = 0;
  n = len(words);
  while (i < n) {
    w = words->index(i);
    Tuple3<bool, Str*, bool> tup10 = word_::StaticEval(w);
    ok = tup10.at0();
    word_str = tup10.at1();
    quoted = tup10.at2();
    if ((!ok or quoted)) {
      break;
    }
    alias_exp = this->aliases->get(word_str);
    if (alias_exp == nullptr) {
      break;
    }
    if (list_contains(aliases_in_flight, (Alloc<Tuple2<Str*, int>>(word_str, i)))) {
      break;
    }
    if (i == 0) {
      first_word_str = word_str;
    }
    aliases_in_flight->append((Alloc<Tuple2<Str*, int>>(word_str, i)));
    expanded->append(alias_exp);
    i += 1;
    if (!alias_exp->endswith(str689)) {
      expanded->append(str690);
      break;
    }
  }
  if (len(expanded) == 0) {
    return nullptr;
  }
  while (i < n) {
    w = words->index(i);
    spid1 = word_::LeftMostSpanForWord(w);
    spid2 = word_::RightMostSpanForWord(w);
    span1 = this->arena->GetLineSpan(spid1);
    span2 = this->arena->GetLineSpan(spid2);
    if (span1->line_id == span2->line_id) {
      line = this->arena->GetLine(span1->line_id);
      piece = line->slice(span1->col, (span2->col + span2->length));
      expanded->append(piece);
    }
    else {
      throw Alloc<NotImplementedError>(fmt178(span1->line_id, span2->line_id));
    }
    expanded->append(str692);
    i += 1;
  }
  code_str = str693->join(expanded);
  line_reader = reader::StringLineReader(code_str, this->arena);
  cp = this->parse_ctx->MakeOshParser(line_reader);
  cp->Init_AliasesInFlight(aliases_in_flight);
  src = Alloc<source::Alias>(first_word_str, argv0_spid);
  {  // with
    alloc::ctx_Location ctx(this->arena, src);

    {  // with
      parse_lib::ctx_Alias ctx(this->parse_ctx->trail);

      try {
        node = cp->_ParseCommandTerm();
      }
      catch (error::Parse* e) {
        throw ;
      }
    }
  }
  return node;
}

syntax_asdl::command_t* CommandParser::ParseSimpleCommand() {
  List<syntax_asdl::redir*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::BraceGroup* block;
  int block_spid;
  syntax_asdl::command__Simple* simple;
  syntax_asdl::word_part_t* part0;
  List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list;
  List<syntax_asdl::compound_word*>* suffix_words;
  syntax_asdl::Token* left_token;
  List<syntax_asdl::assign_pair*>* pairs;
  syntax_asdl::command__ShAssignment* assign;
  int left_spid;
  id_kind_asdl::Kind_t kind;
  syntax_asdl::Token* kw_token;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::command_t* expanded_node;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__ExpandedAlias* exp;
  syntax_asdl::command__Simple* node;
  StackRoots _roots({&redirects, &words, &block, &simple, &part0, &preparsed_list, &suffix_words, &left_token, &pairs, &assign, &kind, &kw_token, &arg_word, &expanded_node, &more_env, &exp, &node});

  Tuple3<List<syntax_asdl::redir*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::BraceGroup*> tup11 = this->_ScanSimpleCommand();
  redirects = tup11.at0();
  words = tup11.at1();
  block = tup11.at2();
  block_spid = block ? block->spids->index(0) : runtime::NO_SPID;
  if (len(words) == 0) {
    if (block) {
      p_die(fmt179(), block_spid);
    }
    simple = Alloc<command::Simple>();
    simple->redirects = redirects;
    return simple;
  }
  part0 = words->index(0)->parts->index(0);
  if (part0->tag_() == word_part_e::Literal) {
    Token* tok = static_cast<Token*>(part0);
    if (tok->id == Id::Lit_Equals) {
      p_die(fmt180(), tok);
    }
  }
  Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> tup12 = _SplitSimpleCommandPrefix(words);
  preparsed_list = tup12.at0();
  suffix_words = tup12.at1();
  if ((this->parse_opts->parse_equals() and len(preparsed_list))) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup13 = preparsed_list->index(0);
    left_token = tup13->at0();
    p_die(fmt181(), left_token);
  }
  this->parse_ctx->trail->SetLatestWords(suffix_words, redirects);
  if (len(suffix_words) == 0) {
    if (block) {
      p_die(fmt182(), block_spid);
    }
    pairs = Alloc<List<syntax_asdl::assign_pair*>>();
    for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed = it.Value();
      pairs->append(_MakeAssignPair(this->parse_ctx, preparsed, this->arena));
    }
    assign = Alloc<command::ShAssignment>(pairs, redirects);
    left_spid = word_::LeftMostSpanForWord(words->index(0));
    assign->spids->append(left_spid);
    return assign;
  }
  Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> tup14 = word_::KeywordToken(suffix_words->index(0));
  kind = tup14.at0();
  kw_token = tup14.at1();
  if (kind == Kind::ControlFlow) {
    if (block) {
      p_die(fmt183(), block_spid);
    }
    if ((!this->parse_opts->parse_ignored() and len(redirects))) {
      p_die(fmt184(), kw_token);
    }
    if (len(preparsed_list)) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup15 = preparsed_list->index(0);
      left_token = tup15->at0();
      p_die(fmt185(), left_token);
    }
    if (len(suffix_words) == 1) {
      arg_word = nullptr;
    }
    else {
      if (len(suffix_words) == 2) {
        arg_word = suffix_words->index(1);
      }
      else {
        p_die(fmt186(kw_token->val), suffix_words->index(2));
      }
    }
    return Alloc<command::ControlFlow>(kw_token, arg_word);
  }
  if ((!block and this->parse_opts->expand_aliases())) {
    expanded_node = this->_MaybeExpandAliases(suffix_words);
    if (expanded_node) {
      more_env = Alloc<List<syntax_asdl::env_pair*>>();
      _AppendMoreEnv(preparsed_list, more_env);
      exp = Alloc<command::ExpandedAlias>(expanded_node, redirects, more_env);
      return exp;
    }
  }
  node = _MakeSimpleCommand(preparsed_list, suffix_words, redirects, block);
  return node;
}

syntax_asdl::BraceGroup* CommandParser::ParseBraceGroup() {
  int left_spid;
  syntax_asdl::Token* doc_token;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::BraceGroup* node;
  StackRoots _roots({&doc_token, &c_list, &node});

  left_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::Lit_LBrace);
  doc_token = nullptr;
  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    this->_Next();
    {  // with
      word_::ctx_EmitDocToken ctx(this->w_parser);

      this->_Peek();
    }
  }
  if (this->c_id == Id::Ignored_Comment) {
    Token* doc_token = static_cast<Token*>(this->cur_word);
    this->_Next();
  }
  c_list = this->_ParseCommandList();
  this->_Eat(Id::Lit_RBrace);
  node = Alloc<BraceGroup>(doc_token, c_list->children, nullptr);
  node->spids->append(left_spid);
  return node;
}

syntax_asdl::command__DoGroup* CommandParser::ParseDoGroup() {
  int do_spid;
  syntax_asdl::command__CommandList* c_list;
  int done_spid;
  syntax_asdl::command__DoGroup* node;
  StackRoots _roots({&c_list, &node});

  this->_Eat(Id::KW_Do);
  do_spid = _KeywordSpid(this->cur_word);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::KW_Done);
  done_spid = _KeywordSpid(this->cur_word);
  node = Alloc<command::DoGroup>(c_list->children);
  node->spids->append(do_spid);
  node->spids->append(done_spid);
  return node;
}

Tuple2<List<syntax_asdl::compound_word*>*, int> CommandParser::ParseForWords() {
  List<syntax_asdl::compound_word*>* words;
  int semi_spid;
  StackRoots _roots({&words});

  words = Alloc<List<syntax_asdl::compound_word*>>();
  semi_spid = runtime::NO_SPID;
  while (true) {
    this->_Peek();
    if (this->c_id == Id::Op_Semi) {
      Token* tok = static_cast<Token*>(this->cur_word);
      semi_spid = tok->span_id;
      this->_Next();
      this->_NewlineOk();
      break;
    }
    else {
      if (this->c_id == Id::Op_Newline) {
        this->_Next();
        break;
      }
      else {
        if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
          break;
        }
      }
    }
    if (this->cur_word->tag_() != word_e::Compound) {
      p_die(fmt187(), this->cur_word);
    }
    compound_word* w2 = static_cast<compound_word*>(this->cur_word);
    words->append(w2);
    this->_Next();
  }
  return (Tuple2<List<syntax_asdl::compound_word*>*, int>(words, semi_spid));
}

syntax_asdl::command__ForExpr* CommandParser::_ParseForExprLoop() {
  syntax_asdl::command__ForExpr* node;
  StackRoots _roots({&node});

  node = this->w_parser->ReadForExpression();
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_Semi) {
    this->_Next();
    this->_NewlineOk();
  }
  else {
    if (this->c_id == Id::Op_Newline) {
      this->_Next();
    }
    else {
      if (this->c_id == Id::KW_Do) {
        ;  // pass
      }
      else {
        if (this->c_id == Id::Lit_LBrace) {
          ;  // pass
        }
        else {
          p_die(fmt188(), this->cur_word);
        }
      }
    }
  }
  if (this->c_id == Id::Lit_LBrace) {
    node->body = this->ParseBraceGroup();
  }
  else {
    node->body = this->ParseDoGroup();
  }
  return node;
}

syntax_asdl::command__ForEach* CommandParser::_ParseForEachLoop(int for_spid) {
  syntax_asdl::command__ForEach* node;
  bool ok;
  Str* iter_name;
  bool quoted;
  int in_spid;
  int semi_spid;
  List<syntax_asdl::compound_word*>* iter_words;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;
  StackRoots _roots({&node, &iter_name, &iter_words, &words2, &words3});

  node = Alloc<command::ForEach>();
  node->do_arg_iter = false;
  node->spids->append(for_spid);
  Tuple3<bool, Str*, bool> tup16 = word_::StaticEval(this->cur_word);
  ok = tup16.at0();
  iter_name = tup16.at1();
  quoted = tup16.at2();
  if ((!ok or quoted)) {
    p_die(fmt189(), this->cur_word);
  }
  if (!match::IsValidVarName(iter_name)) {
    p_die(fmt190(), this->cur_word);
  }
  node->iter_name = iter_name;
  this->_Next();
  this->_NewlineOk();
  in_spid = runtime::NO_SPID;
  semi_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_In) {
    this->_Next();
    in_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
    Tuple2<List<syntax_asdl::compound_word*>*, int> tup17 = this->ParseForWords();
    iter_words = tup17.at0();
    semi_spid = tup17.at1();
    words2 = braces::BraceDetectAll(iter_words);
    words3 = word_::TildeDetectAll(words2);
    node->iter_words = words3;
  }
  else {
    if (this->c_id == Id::Op_Semi) {
      node->do_arg_iter = true;
      this->_Next();
    }
    else {
      if (this->c_id == Id::KW_Do) {
        node->do_arg_iter = true;
      }
      else {
        p_die(fmt191(), this->cur_word);
      }
    }
  }
  this->_Peek();
  if (this->c_id == Id::Lit_LBrace) {
    node->body = this->ParseBraceGroup();
  }
  else {
    node->body = this->ParseDoGroup();
  }
  node->spids->append(in_spid);
  node->spids->append(semi_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseFor() {
  int for_spid;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::command_t* body;
  syntax_asdl::command__ForExpr* n1;
  syntax_asdl::command__ForEach* n2;
  StackRoots _roots({&lvalue, &iterable, &body, &n1, &n2});

  for_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::KW_For);
  if (this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> tup18 = this->parse_ctx->ParseOilForExpr(this->lexer, grammar_nt::oil_for);
    lvalue = tup18.at0();
    iterable = tup18.at1();
    this->_Peek();
    if (this->c_id == Id::Lit_LBrace) {
      body = this->ParseBraceGroup();
    }
    else {
      body = this->ParseDoGroup();
    }
    return Alloc<command::OilForIn>(lvalue, iterable, body);
  }
  else {
    this->_Peek();
    if (this->c_id == Id::Op_DLeftParen) {
      n1 = this->_ParseForExprLoop();
      n1->redirects = this->_ParseRedirectList();
      return n1;
    }
    else {
      n2 = this->_ParseForEachLoop(for_spid);
      n2->redirects = this->_ParseRedirectList();
      return n2;
    }
  }
}

syntax_asdl::command__WhileUntil* CommandParser::ParseWhileUntil(syntax_asdl::Token* keyword) {
  syntax_asdl::expr_t* enode;
  syntax_asdl::condition_t* cond;
  syntax_asdl::command__CommandList* commands;
  syntax_asdl::command_t* body_node;
  syntax_asdl::command__WhileUntil* node;
  StackRoots _roots({&enode, &cond, &commands, &body_node, &node});

  this->_Next();
  if ((this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen)) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup19 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup19.at0();
    cond = Alloc<condition::Oil>(enode);
  }
  else {
    this->allow_block = false;
    commands = this->_ParseCommandList();
    this->allow_block = true;
    cond = Alloc<condition::Shell>(commands->children);
  }
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
    body_node = this->ParseBraceGroup();
  }
  else {
    body_node = this->ParseDoGroup();
  }
  node = Alloc<command::WhileUntil>(keyword, cond, body_node, nullptr);
  node->spids->append(keyword->span_id);
  return node;
}

syntax_asdl::case_arm* CommandParser::ParseCaseItem() {
  int left_spid;
  List<syntax_asdl::word_t*>* pat_words;
  int rparen_spid;
  syntax_asdl::command__CommandList* c_list;
  List<syntax_asdl::command_t*>* action_children;
  int dsemi_spid;
  int last_spid;
  List<int>* spids;
  syntax_asdl::case_arm* arm;
  StackRoots _roots({&pat_words, &c_list, &action_children, &spids, &arm});

  this->lexer->PushHint(Id::Op_RParen, Id::Right_CasePat);
  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  if (this->c_id == Id::Op_LParen) {
    this->_Next();
  }
  pat_words = Alloc<List<syntax_asdl::word_t*>>();
  while (true) {
    this->_Peek();
    pat_words->append(this->cur_word);
    this->_Next();
    this->_Peek();
    if (this->c_id == Id::Op_Pipe) {
      this->_Next();
    }
    else {
      break;
    }
  }
  rparen_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::Right_CasePat);
  this->_NewlineOk();
  if ((this->c_id != Id::Op_DSemi && this->c_id != Id::KW_Esac)) {
    c_list = this->_ParseCommandTerm();
    action_children = c_list->children;
  }
  else {
    action_children = Alloc<List<syntax_asdl::command_t*>>();
  }
  dsemi_spid = runtime::NO_SPID;
  last_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Esac) {
    last_spid = word_::LeftMostSpanForWord(this->cur_word);
  }
  else {
    if (this->c_id == Id::Op_DSemi) {
      dsemi_spid = word_::LeftMostSpanForWord(this->cur_word);
      this->_Next();
    }
    else {
      p_die(fmt192(), this->cur_word);
    }
  }
  this->_NewlineOk();
  spids = Alloc<List<int>>(std::initializer_list<int>{left_spid, rparen_spid, dsemi_spid, last_spid});
  arm = Alloc<syntax_asdl::case_arm>(pat_words, action_children, spids);
  return arm;
}

void CommandParser::ParseCaseList(List<syntax_asdl::case_arm*>* arms) {
  syntax_asdl::case_arm* arm;
  StackRoots _roots({&arm});

  this->_Peek();
  while (true) {
    if (this->c_id == Id::KW_Esac) {
      break;
    }
    if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_RBrace)) {
      break;
    }
    if ((this->c_kind != Kind::Word and this->c_id != Id::Op_LParen)) {
      break;
    }
    arm = this->ParseCaseItem();
    arms->append(arm);
    this->_Peek();
  }
}

syntax_asdl::command__Case* CommandParser::ParseCase() {
  syntax_asdl::command__Case* case_node;
  int case_spid;
  int in_spid;
  int esac_spid;
  StackRoots _roots({&case_node});

  case_node = Alloc<command::Case>();
  case_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  this->_Peek();
  case_node->to_match = this->cur_word;
  this->_Next();
  this->_NewlineOk();
  in_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
    this->_Next();
  }
  else {
    this->_Eat(Id::KW_In);
  }
  this->_NewlineOk();
  if (this->c_id != Id::KW_Esac) {
    this->ParseCaseList(case_node->arms);
    this->_Peek();
  }
  esac_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_RBrace)) {
    this->_Next();
  }
  else {
    this->_Eat(Id::KW_Esac);
  }
  this->_Next();
  case_node->spids->append(case_spid);
  case_node->spids->append(in_spid);
  case_node->spids->append(esac_spid);
  return case_node;
}

void CommandParser::_ParseOilElifElse(syntax_asdl::command__If* if_node) {
  List<syntax_asdl::if_arm*>* arms;
  int elif_spid;
  syntax_asdl::expr_t* enode;
  syntax_asdl::condition_t* cond;
  syntax_asdl::command__CommandList* commands;
  syntax_asdl::BraceGroup* body;
  syntax_asdl::if_arm* arm;
  int else_spid;
  StackRoots _roots({&arms, &enode, &cond, &commands, &body, &arm});

  arms = if_node->arms;
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    if ((this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen)) {
      Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup20 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
      enode = tup20.at0();
      cond = Alloc<condition::Oil>(enode);
    }
    else {
      this->allow_block = false;
      commands = this->_ParseCommandList();
      this->allow_block = true;
      cond = Alloc<condition::Shell>(commands->children);
    }
    body = this->ParseBraceGroup();
    arm = Alloc<syntax_asdl::if_arm>(cond, body->children, Alloc<List<int>>(std::initializer_list<int>{elif_spid}));
    arms->append(arm);
  }
  this->_Peek();
  if (this->c_id == Id::KW_Else) {
    else_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    body = this->ParseBraceGroup();
    if_node->else_action = body->children;
  }
  else {
    else_spid = runtime::NO_SPID;
  }
  if_node->spids->append(else_spid);
}

syntax_asdl::command__If* CommandParser::_ParseOilIf(int if_spid, syntax_asdl::condition_t* cond) {
  syntax_asdl::command__If* if_node;
  syntax_asdl::BraceGroup* body1;
  syntax_asdl::if_arm* arm;
  StackRoots _roots({&if_node, &body1, &arm});

  if_node = Alloc<command::If>();
  body1 = this->ParseBraceGroup();
  arm = Alloc<syntax_asdl::if_arm>(cond, body1->children, Alloc<List<int>>(std::initializer_list<int>{if_spid}));
  if_node->arms->append(arm);
  this->_Peek();
  if ((this->c_id == Id::KW_Elif || this->c_id == Id::KW_Else)) {
    this->_ParseOilElifElse(if_node);
  }
  else {
    if_node->spids->append(runtime::NO_SPID);
  }
  return if_node;
}

void CommandParser::_ParseElifElse(syntax_asdl::command__If* if_node) {
  List<syntax_asdl::if_arm*>* arms;
  int elif_spid;
  syntax_asdl::command__CommandList* commands;
  syntax_asdl::condition__Shell* cond;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int else_spid;
  StackRoots _roots({&arms, &commands, &cond, &body, &arm});

  arms = if_node->arms;
  this->_Peek();
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    commands = this->_ParseCommandList();
    cond = Alloc<condition::Shell>(commands->children);
    then_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Eat(Id::KW_Then);
    body = this->_ParseCommandList();
    arm = Alloc<syntax_asdl::if_arm>(cond, body->children, Alloc<List<int>>(std::initializer_list<int>{elif_spid, then_spid}));
    arms->append(arm);
  }
  if (this->c_id == Id::KW_Else) {
    else_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    body = this->_ParseCommandList();
    if_node->else_action = body->children;
  }
  else {
    else_spid = runtime::NO_SPID;
  }
  if_node->spids->append(else_spid);
}

syntax_asdl::command__If* CommandParser::ParseIf() {
  int if_spid;
  syntax_asdl::command__If* if_node;
  syntax_asdl::expr_t* enode;
  syntax_asdl::condition_t* cond;
  syntax_asdl::command__CommandList* commands;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int fi_spid;
  StackRoots _roots({&if_node, &enode, &cond, &commands, &body, &arm});

  if_spid = _KeywordSpid(this->cur_word);
  if_node = Alloc<command::If>();
  this->_Next();
  if ((this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen)) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup21 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup21.at0();
    cond = Alloc<condition::Oil>(enode);
  }
  else {
    this->allow_block = false;
    commands = this->_ParseCommandList();
    this->allow_block = true;
    cond = Alloc<condition::Shell>(commands->children);
  }
  this->_Peek();
  if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
    return this->_ParseOilIf(if_spid, cond);
  }
  then_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Then);
  body = this->_ParseCommandList();
  arm = Alloc<syntax_asdl::if_arm>(cond, body->children, Alloc<List<int>>(std::initializer_list<int>{if_spid, then_spid}));
  if_node->arms->append(arm);
  if ((this->c_id == Id::KW_Elif || this->c_id == Id::KW_Else)) {
    this->_ParseElifElse(if_node);
  }
  else {
    if_node->spids->append(runtime::NO_SPID);
  }
  fi_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Fi);
  if_node->spids->append(fi_spid);
  return if_node;
}

syntax_asdl::command_t* CommandParser::ParseTime() {
  int time_spid;
  syntax_asdl::command_t* pipeline;
  syntax_asdl::command__TimeBlock* node;
  StackRoots _roots({&pipeline, &node});

  time_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  pipeline = this->ParsePipeline();
  node = Alloc<command::TimeBlock>(pipeline);
  node->spids->append(time_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCompoundCommand() {
  syntax_asdl::BraceGroup* n1;
  syntax_asdl::command__Subshell* n2;
  syntax_asdl::Token* keyword;
  syntax_asdl::command__WhileUntil* n3;
  syntax_asdl::command__If* n4;
  syntax_asdl::command__Case* n5;
  syntax_asdl::command__DBracket* n6;
  syntax_asdl::command__DParen* n7;
  syntax_asdl::Token* kw_token;
  StackRoots _roots({&n1, &n2, &keyword, &n3, &n4, &n5, &n6, &n7, &kw_token});

  if (this->c_id == Id::Lit_LBrace) {
    n1 = this->ParseBraceGroup();
    n1->redirects = this->_ParseRedirectList();
    return n1;
  }
  if (this->c_id == Id::Op_LParen) {
    n2 = this->ParseSubshell();
    n2->redirects = this->_ParseRedirectList();
    return n2;
  }
  if (this->c_id == Id::KW_For) {
    return this->ParseFor();
  }
  if ((this->c_id == Id::KW_While || this->c_id == Id::KW_Until)) {
    keyword = _KeywordToken(this->cur_word);
    n3 = this->ParseWhileUntil(keyword);
    n3->redirects = this->_ParseRedirectList();
    return n3;
  }
  if (this->c_id == Id::KW_If) {
    n4 = this->ParseIf();
    n4->redirects = this->_ParseRedirectList();
    return n4;
  }
  if (this->c_id == Id::KW_Case) {
    n5 = this->ParseCase();
    n5->redirects = this->_ParseRedirectList();
    return n5;
  }
  if (this->c_id == Id::KW_DLeftBracket) {
    n6 = this->ParseDBracket();
    n6->redirects = this->_ParseRedirectList();
    return n6;
  }
  if (this->c_id == Id::Op_DLeftParen) {
    n7 = this->ParseDParen();
    n7->redirects = this->_ParseRedirectList();
    return n7;
  }
  if (this->c_id == Id::KW_Time) {
    return this->ParseTime();
  }
  if ((this->c_id == Id::KW_Var || this->c_id == Id::KW_Const)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParseVarDecl(kw_token);
  }
  if ((this->c_id == Id::KW_SetVar || this->c_id == Id::KW_SetRef || this->c_id == Id::KW_SetLocal || this->c_id == Id::KW_SetGlobal)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  if ((this->parse_opts->parse_set() and this->c_id == Id::KW_Set)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  p_die(fmt193(), this->cur_word);
}

syntax_asdl::command__ShFunction* CommandParser::ParseFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;
  StackRoots _roots({&name, &func});

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt194(), cur_word);
  }
  this->_Next();
  this->_Peek();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
  this->_Next();
  this->_Eat2(Id::Right_ShFunction, str710);
  after_name_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
  this->_NewlineOk();
  func = Alloc<command::ShFunction>();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__ShFunction* CommandParser::ParseKshFunctionDef() {
  int left_spid;
  Str* name;
  int name_spid;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;
  StackRoots _roots({&name, &func});

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->_Peek();
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt195(), cur_word);
  }
  name_spid = word_::LeftMostSpanForWord(this->cur_word);
  after_name_spid = (name_spid + 1);
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_LParen) {
    this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
    this->_Next();
    this->_Eat(Id::Right_ShFunction);
    after_name_spid = (word_::LeftMostSpanForWord(this->cur_word) + 1);
  }
  this->_NewlineOk();
  func = Alloc<command::ShFunction>();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(name_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__Proc* CommandParser::ParseOilProc() {
  syntax_asdl::command__Proc* node;
  StackRoots _roots({&node});

  node = Alloc<command::Proc>();
  this->w_parser->ParseProc(node);
  this->_Next();
  node->body = this->ParseBraceGroup();
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCoproc() {
  throw Alloc<NotImplementedError>();
}

syntax_asdl::command__Subshell* CommandParser::ParseSubshell() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::command_t* child;
  syntax_asdl::command__Subshell* node;
  int right_spid;
  StackRoots _roots({&c_list, &child, &node});

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
  c_list = this->_ParseCommandList();
  if (len(c_list->children) == 1) {
    child = c_list->children->index(0);
  }
  else {
    child = c_list;
  }
  node = Alloc<command::Subshell>(child, nullptr);
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::Right_Subshell);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DBracket* CommandParser::ParseDBracket() {
  int left_spid;
  bool_parse::BoolParser* b_parser;
  syntax_asdl::bool_expr_t* bnode;
  int right_spid;
  syntax_asdl::command__DBracket* node;
  StackRoots _roots({&b_parser, &bnode, &node});

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  b_parser = Alloc<bool_parse::BoolParser>(this->w_parser);
  bnode = b_parser->Parse();
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  node = Alloc<command::DBracket>(bnode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DParen* CommandParser::ParseDParen() {
  int left_spid;
  syntax_asdl::arith_expr_t* anode;
  int right_spid;
  syntax_asdl::command__DParen* node;
  StackRoots _roots({&anode, &node});

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  Tuple2<syntax_asdl::arith_expr_t*, int> tup22 = this->w_parser->ReadDParen();
  anode = tup22.at0();
  right_spid = tup22.at1();
  node = Alloc<command::DParen>(anode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCommand() {
  syntax_asdl::command__Func* out0;
  syntax_asdl::command__Data* out1;
  syntax_asdl::command__Enum* out2;
  syntax_asdl::command__Class* out3;
  syntax_asdl::command__Import* out4;
  syntax_asdl::Token* keyword;
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::word_part_t* part0;
  StackRoots _roots({&out0, &out1, &out2, &out3, &out4, &keyword, &enode, &parts, &part0});

  this->_Peek();
  if (this->_AtSecondaryKeyword()) {
    p_die(fmt196(), this->cur_word);
  }
  if (this->c_id == Id::KW_Function) {
    return this->ParseKshFunctionDef();
  }
  if (this->c_id == Id::KW_Proc) {
    return this->ParseOilProc();
  }
  if (this->parse_opts->parse_tea()) {
    if (this->c_id == Id::KW_Func) {
      out0 = Alloc<command::Func>();
      this->parse_ctx->ParseFunc(this->lexer, out0);
      this->_Next();
      return out0;
    }
    if (this->c_id == Id::KW_Data) {
      out1 = Alloc<command::Data>();
      this->parse_ctx->ParseDataType(this->lexer, out1);
      this->_Next();
      return out1;
    }
    if (this->c_id == Id::KW_Enum) {
      out2 = Alloc<command::Enum>();
      this->parse_ctx->ParseEnum(this->lexer, out2);
      this->_Next();
      return out2;
    }
    if (this->c_id == Id::KW_Class) {
      out3 = Alloc<command::Class>();
      this->parse_ctx->ParseClass(this->lexer, out3);
      this->_Next();
      return out3;
    }
    if (this->c_id == Id::KW_Import) {
      out4 = Alloc<command::Import>();
      this->w_parser->ParseImport(out4);
      this->_Next();
      return out4;
    }
  }
  if ((this->c_id == Id::KW_DLeftBracket || this->c_id == Id::Op_DLeftParen || this->c_id == Id::Op_LParen || this->c_id == Id::Lit_LBrace || this->c_id == Id::KW_For || this->c_id == Id::KW_While || this->c_id == Id::KW_Until || this->c_id == Id::KW_If || this->c_id == Id::KW_Case || this->c_id == Id::KW_Time || this->c_id == Id::KW_Var || this->c_id == Id::KW_Const || this->c_id == Id::KW_SetVar || this->c_id == Id::KW_SetLocal || this->c_id == Id::KW_SetGlobal || this->c_id == Id::KW_SetRef)) {
    return this->ParseCompoundCommand();
  }
  if ((this->parse_opts->parse_set() and this->c_id == Id::KW_Set)) {
    return this->ParseCompoundCommand();
  }
  if ((this->c_id == Id::Lit_Underscore || this->c_id == Id::Lit_Equals)) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return Alloc<command::Expr>(Alloc<speck>(keyword->id, keyword->span_id), enode);
  }
  if (this->c_id == Id::Lit_RBrace) {
    p_die(fmt197(), this->cur_word);
  }
  if (this->c_kind == Kind::Redir) {
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Word) {
    compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
    if ((this->w_parser->LookAhead() == Id::Op_LParen and !word_::IsVarLike(cur_word))) {
      return this->ParseFunctionDef();
    }
    parts = cur_word->parts;
    if ((this->parse_opts->parse_equals() and len(parts) == 1)) {
      part0 = parts->index(0);
      if (part0->tag_() == word_part_e::Literal) {
        Token* tok = static_cast<Token*>(part0);
        if ((match::IsValidVarName(tok->val) and this->w_parser->LookAhead() == Id::Lit_Equals)) {
          enode = this->w_parser->ParseBareDecl();
          this->_Next();
          return Alloc<command::VarDecl>(nullptr, Alloc<List<syntax_asdl::name_type*>>(std::initializer_list<syntax_asdl::name_type*>{Alloc<name_type>(tok, nullptr)}), enode);
        }
      }
    }
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Eof) {
    p_die(fmt198(), this->cur_word);
  }
  p_die(fmt199(), this->cur_word);
}

syntax_asdl::command_t* CommandParser::ParsePipeline() {
  bool negated;
  int pipeline_spid;
  syntax_asdl::command_t* child;
  List<syntax_asdl::command_t*>* children;
  List<int>* no_stderrs;
  syntax_asdl::command__Pipeline* node;
  int pipe_index;
  List<int>* stderr_indices;
  StackRoots _roots({&child, &children, &no_stderrs, &node, &stderr_indices});

  negated = false;
  pipeline_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Bang) {
    pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    negated = true;
    this->_Next();
  }
  child = this->ParseCommand();
  children = Alloc<List<syntax_asdl::command_t*>>(std::initializer_list<syntax_asdl::command_t*>{child});
  this->_Peek();
  if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
    if (negated) {
      no_stderrs = Alloc<List<int>>();
      node = Alloc<command::Pipeline>(children, negated, no_stderrs);
      node->spids->append(pipeline_spid);
      return node;
    }
    else {
      return child;
    }
  }
  pipe_index = 0;
  stderr_indices = Alloc<List<int>>();
  if (this->c_id == Id::Op_PipeAmp) {
    stderr_indices->append(pipe_index);
  }
  pipe_index += 1;
  while (true) {
    if (pipeline_spid == runtime::NO_SPID) {
      pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    }
    this->_Next();
    this->_NewlineOk();
    child = this->ParseCommand();
    children->append(child);
    this->_Peek();
    if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
      break;
    }
    if (this->c_id == Id::Op_PipeAmp) {
      stderr_indices->append(pipe_index);
    }
    pipe_index += 1;
  }
  node = Alloc<command::Pipeline>(children, negated, stderr_indices);
  node->spids->append(pipeline_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseAndOr() {
  syntax_asdl::command_t* child;
  List<int>* ops;
  List<int>* op_spids;
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command__AndOr* node;
  StackRoots _roots({&child, &ops, &op_spids, &children, &node});

  child = this->ParsePipeline();
  this->_Peek();
  if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
    return child;
  }
  ops = Alloc<List<int>>();
  op_spids = Alloc<List<int>>();
  children = Alloc<List<syntax_asdl::command_t*>>(std::initializer_list<syntax_asdl::command_t*>{child});
  while (true) {
    ops->append(this->c_id);
    op_spids->append(word_::LeftMostSpanForWord(this->cur_word));
    this->_Next();
    this->_NewlineOk();
    child = this->ParsePipeline();
    children->append(child);
    this->_Peek();
    if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
      break;
    }
  }
  node = Alloc<command::AndOr>(ops, children);
  node->spids = op_spids;
  return node;
}

syntax_asdl::command_t* CommandParser::_ParseCommandLine() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;
  StackRoots _roots({&END_LIST, &children, &child});

  END_LIST = Alloc<List<int>>(std::initializer_list<int>{Id::Op_Newline, Id::Eof_Real});
  children = Alloc<List<syntax_asdl::command_t*>>();
  done = false;
  while (!done) {
    child = this->ParseAndOr();
    this->_Peek();
    if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
      Token* tok = static_cast<Token*>(this->cur_word);
      child = Alloc<command::Sentence>(child, tok);
      this->_Next();
      this->_Peek();
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
    }
    else {
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
      else {
        p_die(fmt200(), this->cur_word);
      }
    }
    children->append(child);
  }
  if (len(children) > 1) {
    return Alloc<command::CommandList>(children);
  }
  else {
    return children->index(0);
  }
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandTerm() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;
  StackRoots _roots({&END_LIST, &children, &child});

  END_LIST = Alloc<List<int>>(std::initializer_list<int>{this->eof_id, Id::Right_Subshell, Id::Lit_RBrace, Id::Op_DSemi});
  children = Alloc<List<syntax_asdl::command_t*>>();
  done = false;
  while (!done) {
    this->_Peek();
    if (this->_AtSecondaryKeyword()) {
      break;
    }
    child = this->ParseAndOr();
    this->_Peek();
    if (this->c_id == Id::Op_Newline) {
      this->_Next();
      this->_Peek();
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
    }
    else {
      if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
        Token* tok = static_cast<Token*>(this->cur_word);
        child = Alloc<command::Sentence>(child, tok);
        this->_Next();
        this->_Peek();
        if (this->c_id == Id::Op_Newline) {
          this->_Next();
          this->_Peek();
          if (list_contains(END_LIST, this->c_id)) {
            done = true;
          }
        }
        else {
          if (list_contains(END_LIST, this->c_id)) {
            done = true;
          }
        }
      }
      else {
        if (list_contains(END_LIST, this->c_id)) {
          done = true;
        }
        else {
          if ((this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace)) {
            done = true;
          }
          else {
            ;  // pass
          }
        }
      }
    }
    children->append(child);
  }
  this->_Peek();
  return Alloc<command::CommandList>(children);
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandList() {
  syntax_asdl::command__CommandList* node;
  StackRoots _roots({&node});

  this->_NewlineOk();
  node = this->_ParseCommandTerm();
  return node;
}

syntax_asdl::command_t* CommandParser::ParseLogicalLine() {
  syntax_asdl::command_t* node;
  StackRoots _roots({&node});

  this->_NewlineOk();
  this->_Peek();
  if (this->c_id == Id::Eof_Real) {
    return nullptr;
  }
  node = this->_ParseCommandLine();
  return node;
}

syntax_asdl::parse_result_t* CommandParser::ParseInteractiveLine() {
  syntax_asdl::command_t* node;
  StackRoots _roots({&node});

  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    return Alloc<parse_result::EmptyLine>();
  }
  if (this->c_id == Id::Eof_Real) {
    return Alloc<parse_result::Eof>();
  }
  node = this->_ParseCommandLine();
  return Alloc<parse_result::Node>(node);
}

syntax_asdl::command_t* CommandParser::ParseCommandSub() {
  syntax_asdl::command__CommandList* c_list;
  StackRoots _roots({&c_list});

  this->_NewlineOk();
  if (this->c_kind == Kind::Eof) {
    return Alloc<command::NoOp>();
  }
  c_list = this->_ParseCommandTerm();
  if (len(c_list->children) == 1) {
    return c_list->children->index(0);
  }
  else {
    return c_list;
  }
}

void CommandParser::CheckForPendingHereDocs() {
  syntax_asdl::redir* node;
  StackRoots _roots({&node});

  if (len(this->pending_here_docs)) {
    node = this->pending_here_docs->index(0);
    redir_param__HereDoc* h = static_cast<redir_param__HereDoc*>(node->arg);
    p_die(fmt201(), h->here_begin);
  }
}

}  // define namespace cmd_parse

namespace glob_ {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace word_part_e = syntax_asdl::word_part_e;
namespace glob_part_e = syntax_asdl::glob_part_e;
namespace glob_part = syntax_asdl::glob_part;
using syntax_asdl::glob_part_t;
using syntax_asdl::glob_part__Literal;
using syntax_asdl::glob_part__Operator;
using syntax_asdl::glob_part__CharClass;

bool LooksLikeGlob(Str* s) {
  bool left_bracket;
  int i;
  int n;
  Str* c;
  StackRoots _roots({&c});

  left_bracket = false;
  i = 0;
  n = len(s);
  while (i < n) {
    c = s->index(i);
    if (str_equals(c, str718)) {
      i += 1;
    }
    else {
      if ((str_equals(c, str719) or str_equals(c, str720))) {
        return true;
      }
      else {
        if (str_equals(c, str721)) {
          left_bracket = true;
        }
        else {
          if ((str_equals(c, str722) and left_bracket)) {
            return true;
          }
        }
      }
    }
    i += 1;
  }
  return false;
}

bool LooksLikeStaticGlob(syntax_asdl::compound_word* w) {
  bool left_bracket;
  int id_;
  left_bracket = false;
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    if (part->tag_() == word_part_e::Literal) {
      id_ = static_cast<Token*>(part)->id;
      if ((id_ == Id::Lit_Star || id_ == Id::Lit_QMark)) {
        return true;
      }
      else {
        if (id_ == Id::Lit_LBracket) {
          left_bracket = true;
        }
        else {
          if ((id_ == Id::Lit_RBracket and left_bracket)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}
Str* GLOB_META_CHARS = str723;

Str* GlobEscape(Str* s) {
  return pyutil::BackslashEscape(s, GLOB_META_CHARS);
}

Str* EreCharClassEscape(Str* s) {
  return pyutil::BackslashEscape(s, str724);
}
Str* ERE_META_CHARS = str725;

Str* ExtendedRegexEscape(Str* s) {
  return pyutil::BackslashEscape(s, ERE_META_CHARS);
}

Str* GlobUnescape(Str* s) {
  List<Str*>* unescaped;
  int i;
  int n;
  Str* c;
  Str* c2;
  StackRoots _roots({&unescaped, &c, &c2});

  unescaped = Alloc<List<Str*>>();
  i = 0;
  n = len(s);
  while (i < n) {
    c = s->index(i);
    if ((str_equals(c, str726) and i != (n - 1))) {
      i += 1;
      c2 = s->index(i);
      if (str_contains(GLOB_META_CHARS, c2)) {
        unescaped->append(c2);
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
    else {
      unescaped->append(c);
    }
    i += 1;
  }
  return str728->join(unescaped);
}

_GlobParser::_GlobParser(match::SimpleLexer* lexer) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_GlobParser)) {
  this->lexer = lexer;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str729;
  this->warnings = Alloc<List<Str*>>();
}

void _GlobParser::_Next() {
  Tuple2<int, Str*> tup0 = this->lexer->Next();
  this->token_type = tup0.at0();
  this->token_val = tup0.at1();
}

List<syntax_asdl::glob_part_t*>* _GlobParser::_ParseCharClass() {
  syntax_asdl::glob_part__Literal* first_token;
  int balance;
  List<Tuple2<int, Str*>*>* tokens;
  List<syntax_asdl::glob_part_t*>* parts;
  int id_;
  Str* s;
  bool negated;
  int id1;
  List<Str*>* strs;
  StackRoots _roots({&first_token, &tokens, &parts, &s, &strs});

  first_token = Alloc<glob_part::Literal>(this->token_type, this->token_val);
  balance = 1;
  tokens = Alloc<List<Tuple2<int, Str*>*>>();
  while (true) {
    this->_Next();
    if (this->token_type == Id::Eol_Tok) {
      this->warnings->append(str730);
      parts = Alloc<List<syntax_asdl::glob_part_t*>>(std::initializer_list<syntax_asdl::glob_part_t*>{first_token});
      for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
        Tuple2<int, Str*>* tup1 = it.Value();
        id_ = tup1->at0();
        s = tup1->at1();
        parts->append(Alloc<glob_part::Literal>(id_, s));
      }
      return parts;
    }
    if (this->token_type == Id::Glob_LBracket) {
      balance += 1;
    }
    else {
      if (this->token_type == Id::Glob_RBracket) {
        balance -= 1;
      }
    }
    if (balance == 0) {
      break;
    }
    tokens->append((Alloc<Tuple2<int, Str*>>(this->token_type, this->token_val)));
  }
  negated = false;
  if (len(tokens)) {
    Tuple2<int, Str*>* tup2 = tokens->index(0);
    id1 = tup2->at0();
    if ((id1 == Id::Glob_Bang || id1 == Id::Glob_Caret)) {
      negated = true;
      tokens = tokens->slice(1);
    }
  }
  strs = Alloc<List<Str*>>();
  for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
    Tuple2<int, Str*>* tup3 = it.Value();
    s = tup3->at1();
    strs->append(s);
  }
  return Alloc<List<syntax_asdl::glob_part_t*>>(std::initializer_list<syntax_asdl::glob_part_t*>{Alloc<glob_part::CharClass>(negated, strs)});
}

Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> _GlobParser::Parse() {
  List<syntax_asdl::glob_part_t*>* parts;
  int id_;
  Str* s;
  StackRoots _roots({&parts, &s});

  parts = Alloc<List<syntax_asdl::glob_part_t*>>();
  while (true) {
    this->_Next();
    id_ = this->token_type;
    s = this->token_val;
    if (id_ == Id::Eol_Tok) {
      break;
    }
    if ((id_ == Id::Glob_Star || id_ == Id::Glob_QMark)) {
      parts->append(Alloc<glob_part::Operator>(id_));
    }
    else {
      if (id_ == Id::Glob_LBracket) {
        parts->extend(this->_ParseCharClass());
      }
      else {
        parts->append(Alloc<glob_part::Literal>(id_, s));
      }
    }
    if (id_ == Id::Glob_RBracket) {
      this->warnings->append(str731);
    }
    if (id_ == Id::Glob_BadBackslash) {
      this->warnings->append(str732);
    }
  }
  return (Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*>(parts, this->warnings));
}
Str* _REGEX_CHARS_TO_ESCAPE = str733;

Str* _GenerateERE(List<syntax_asdl::glob_part_t*>* parts) {
  List<Str*>* out;
  int tag;
  syntax_asdl::glob_part_t* UP_part;
  Str* c;
  List<Str*>* good;
  bool literal_hyphen;
  bool literal_rbracket;
  StackRoots _roots({&out, &UP_part, &c, &good});

  out = Alloc<List<Str*>>();
  for (ListIter<syntax_asdl::glob_part_t*> it(parts); !it.Done(); it.Next()) {
    syntax_asdl::glob_part_t* part = it.Value();
    tag = part->tag_();
    UP_part = part;
    if (tag == glob_part_e::Literal) {
      glob_part__Literal* part = static_cast<glob_part__Literal*>(UP_part);
      if (part->id == Id::Glob_EscapedChar) {
        c = part->s->index(1);
        if (str_contains(_REGEX_CHARS_TO_ESCAPE, c)) {
          out->append(str734);
        }
        out->append(c);
      }
      else {
        if ((part->id == Id::Glob_CleanLiterals || part->id == Id::Glob_Bang)) {
          out->append(part->s);
        }
        else {
          if ((part->id == Id::Glob_OtherLiteral || part->id == Id::Glob_Caret)) {
            c = part->s;
            if (str_contains(_REGEX_CHARS_TO_ESCAPE, c)) {
              out->append(str735);
            }
            out->append(c);
          }
          else {
            if (part->id == Id::Glob_LBracket) {
              out->append(str736);
            }
            else {
              if (part->id == Id::Glob_RBracket) {
                out->append(str737);
              }
              else {
                if (part->id == Id::Glob_BadBackslash) {
                  out->append(str738);
                }
                else {
                  if (part->id == Id::Glob_Caret) {
                    out->append(str739);
                  }
                  else {
                    throw Alloc<AssertionError>();
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (tag == glob_part_e::Operator) {
        glob_part__Operator* part = static_cast<glob_part__Operator*>(UP_part);
        if (part->op_id == Id::Glob_QMark) {
          out->append(str740);
        }
        else {
          if (part->op_id == Id::Glob_Star) {
            out->append(str741);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
      else {
        if (tag == glob_part_e::CharClass) {
          glob_part__CharClass* part = static_cast<glob_part__CharClass*>(UP_part);
          out->append(str742);
          if (part->negated) {
            out->append(str743);
          }
          good = Alloc<List<Str*>>();
          literal_hyphen = false;
          literal_rbracket = false;
          for (ListIter<Str*> it(part->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            if (str_equals(s, str744)) {
              literal_hyphen = true;
              continue;
            }
            if (str_equals(s, str745)) {
              literal_rbracket = true;
              continue;
            }
            good->append(s);
          }
          if (literal_rbracket) {
            out->append(str746);
          }
          out->extend(good);
          if (literal_hyphen) {
            out->append(str747);
          }
          out->append(str748);
        }
      }
    }
  }
  return str749->join(out);
}

Tuple2<Str*, List<Str*>*> GlobToERE(Str* pat) {
  match::SimpleLexer* lexer;
  glob_::_GlobParser* p;
  List<syntax_asdl::glob_part_t*>* parts;
  List<Str*>* warnings;
  Str* regex;
  StackRoots _roots({&lexer, &p, &parts, &warnings, &regex});

  lexer = match::GlobLexer(pat);
  p = Alloc<_GlobParser>(lexer);
  Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> tup4 = p->Parse();
  parts = tup4.at0();
  warnings = tup4.at1();
  regex = _GenerateERE(parts);
  return (Tuple2<Str*, List<Str*>*>(regex, warnings));
}

Globber::Globber(optview::Exec* exec_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Globber)) {
  this->exec_opts = exec_opts;
}

int Globber::Expand(Str* arg, List<Str*>* out) {
  List<Str*>* results;
  Str* msg;
  int n;
  StackRoots _roots({&results, &msg});

  if (!LooksLikeGlob(arg)) {
    out->append(GlobUnescape(arg));
    return 1;
  }
  if (this->exec_opts->noglob()) {
    out->append(arg);
    return 1;
  }
  try {
    results = libc::glob(arg);
  }
  catch (RuntimeError* e) {
    msg = e->message;
    println_stderr(fmt202(arg, msg));
    throw ;
  }
  n = len(results);
  if (n) {
    for (ListIter<Str*> it(results); !it.Done(); it.Next()) {
      Str* name = it.Value();
      if ((name->startswith(str751) and !this->exec_opts->dashglob())) {
        n -= 1;
        continue;
      }
      out->append(name);
    }
    return n;
  }
  if (this->exec_opts->nullglob()) {
    return 0;
  }
  out->append(GlobUnescape(arg));
  return 1;
}

List<Str*>* Globber::OilFuncCall(Str* arg) {
  List<Str*>* out;
  StackRoots _roots({&out});

  out = Alloc<List<Str*>>();
  this->Expand(arg, out);
  return out;
}

}  // define namespace glob_

namespace prompt {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using syntax_asdl::command_t;
namespace source = syntax_asdl::source;
using syntax_asdl::compound_word;
Str* PROMPT_ERROR = str752;

_PromptEvaluatorCache::_PromptEvaluatorCache() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_PromptEvaluatorCache)) {
  this->cache = Alloc<Dict<Str*, Str*>>();
  this->euid = -1;
}

int _PromptEvaluatorCache::_GetEuid() {
  if (this->euid == -1) {
    this->euid = posix::geteuid();
  }
  return this->euid;
}

Str* _PromptEvaluatorCache::Get(Str* name) {
  Str* value;
  StackRoots _roots({&value});

  if (dict_contains(this->cache, name)) {
    return this->cache->index(name);
  }
  if (str_equals(name, str753)) {
    value = this->_GetEuid() == 0 ? str754 : str755;
  }
  else {
    if (str_equals(name, str756)) {
      value = libc::gethostname();
    }
    else {
      if (str_equals(name, str757)) {
        value = pyos::GetUserName(this->_GetEuid());
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  this->cache->set(name, value);
  return value;
}

Evaluator::Evaluator(Str* lang, parse_lib::ParseContext* parse_ctx, state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Evaluator)) {
  this->word_ev = nullptr;
  this->lang = lang;
  this->parse_ctx = parse_ctx;
  this->mem = mem;
  this->default_prompt = str_concat(lang, str758);
  this->cache = Alloc<_PromptEvaluatorCache>();
  this->tokens_cache = Alloc<Dict<Str*, List<Tuple2<int, Str*>*>*>>();
  this->parse_cache = Alloc<Dict<Str*, syntax_asdl::compound_word*>>();
}

void Evaluator::CheckCircularDeps() {
}

Str* Evaluator::_ReplaceBackslashCodes(List<Tuple2<int, Str*>*>* tokens) {
  List<Str*>* ret;
  int non_printing;
  int id_;
  Str* value;
  int i;
  Str* ch;
  Str* r;
  Str* hostname;
  Str* pwd;
  Str* home;
  runtime_asdl::value_t* val;
  StackRoots _roots({&ret, &value, &ch, &r, &hostname, &pwd, &home, &val});

  ret = Alloc<List<Str*>>();
  non_printing = 0;
  for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
    Tuple2<int, Str*>* tup0 = it.Value();
    id_ = tup0->at0();
    value = tup0->at1();
    if ((id_ == Id::PS_Literals || id_ == Id::PS_BadBackslash)) {
      ret->append(value);
    }
    else {
      if (id_ == Id::PS_Octal3) {
        i = to_int(value->slice(1), 8);
        ret->append(chr((i % 256)));
      }
      else {
        if (id_ == Id::PS_LBrace) {
          non_printing += 1;
          ret->append(str759);
        }
        else {
          if (id_ == Id::PS_RBrace) {
            non_printing -= 1;
            if (non_printing < 0) {
              return PROMPT_ERROR;
            }
            ret->append(str760);
          }
          else {
            if (id_ == Id::PS_Subst) {
              ch = value->slice(1);
              if (str_equals(ch, str761)) {
                r = this->cache->Get(str762);
              }
              else {
                if (str_equals(ch, str763)) {
                  r = this->cache->Get(str764);
                }
                else {
                  if (str_equals(ch, str765)) {
                    hostname = this->cache->Get(str766);
                    Tuple2<Str*, Str*> tup1 = mylib::split_once(hostname, str767);
                    r = tup1.at0();
                  }
                  else {
                    if (str_equals(ch, str768)) {
                      r = this->cache->Get(str769);
                    }
                    else {
                      if (str_equals(ch, str770)) {
                        try {
                          pwd = state::GetString(this->mem, str771);
                          home = state::MaybeString(this->mem, str772);
                          r = ui::PrettyDir(pwd, home);
                        }
                        catch (error::Runtime* e) {
                          r = fmt203(e->UserErrorString());
                        }
                      }
                      else {
                        if (str_equals(ch, str774)) {
                          val = this->mem->GetValue(str775);
                          if (val->tag_() == value_e::Str) {
                            value__Str* str_val = static_cast<value__Str*>(val);
                            r = os_path::basename(str_val->s);
                          }
                          else {
                            r = str776;
                          }
                        }
                        else {
                          r = consts::LookupCharPrompt(ch);
                          if (r == nullptr) {
                            r = fmt204(ch);
                          }
                        }
                      }
                    }
                  }
                }
              }
              ret->append(r->replace(str778, str779));
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
    }
  }
  if (non_printing != 0) {
    return PROMPT_ERROR;
  }
  return str781->join(ret);
}

Str* Evaluator::EvalPrompt(runtime_asdl::value_t* UP_val) {
  List<Tuple2<int, Str*>*>* tokens;
  Str* ps1_str;
  syntax_asdl::compound_word* ps1_word;
  word_parse::WordParser* w_parser;
  runtime_asdl::value__Str* val2;
  StackRoots _roots({&tokens, &ps1_str, &ps1_word, &w_parser, &val2});

  if (UP_val->tag_() != value_e::Str) {
    return this->default_prompt;
  }
  value__Str* val = static_cast<value__Str*>(UP_val);
  tokens = this->tokens_cache->get(val->s);
  if (tokens == nullptr) {
    tokens = match::Ps1Tokens(val->s);
    this->tokens_cache->set(val->s, tokens);
  }
  ps1_str = this->_ReplaceBackslashCodes(tokens);
  ps1_word = this->parse_cache->get(ps1_str);
  if (ps1_word == nullptr) {
    w_parser = this->parse_ctx->MakeWordParserForPlugin(ps1_str);
    try {
      ps1_word = w_parser->ReadForPlugin();
    }
    catch (error::Parse* e) {
      ps1_word = word_::ErrorWord(fmt205(e->UserErrorString()));
    }
    this->parse_cache->set(ps1_str, ps1_word);
  }
  val2 = this->word_ev->EvalForPlugin(ps1_word);
  return val2->s;
}

Str* Evaluator::EvalFirstPrompt() {
  runtime_asdl::value_t* val;
  StackRoots _roots({&val});

  if (str_equals(this->lang, str783)) {
    val = this->mem->GetValue(str784);
    return this->EvalPrompt(val);
  }
  else {
    return this->default_prompt;
  }
}

UserPlugin::UserPlugin(state::Mem* mem, parse_lib::ParseContext* parse_ctx, cmd_eval::CommandEvaluator* cmd_ev) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(UserPlugin)) {
  this->mem = mem;
  this->parse_ctx = parse_ctx;
  this->cmd_ev = cmd_ev;
  this->arena = parse_ctx->arena;
  this->parse_cache = Alloc<Dict<Str*, syntax_asdl::command_t*>>();
}

void UserPlugin::Run() {
  runtime_asdl::value_t* val;
  Str* prompt_cmd;
  syntax_asdl::command_t* node;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* c_parser;
  StackRoots _roots({&val, &prompt_cmd, &node, &line_reader, &c_parser});

  val = this->mem->GetValue(str785);
  if (val->tag_() != value_e::Str) {
    return ;
  }
  prompt_cmd = static_cast<value__Str*>(val)->s;
  node = this->parse_cache->get(prompt_cmd);
  if (node == nullptr) {
    line_reader = reader::StringLineReader(prompt_cmd, this->arena);
    c_parser = this->parse_ctx->MakeOshParser(line_reader);
    {  // with
      alloc::ctx_Location ctx(this->arena, Alloc<source::PromptCommand>(runtime::NO_SPID));

      try {
        node = main_loop::ParseWholeFile(c_parser);
      }
      catch (error::Parse* e) {
        ui::PrettyPrintError(e, this->arena);
        return ;
      }
    }
    this->parse_cache->set(prompt_cmd, node);
  }
  {  // with
    state::ctx_Status ctx(this->mem);

    this->cmd_ev->ExecuteAndCatch(node);
  }
}

}  // define namespace prompt

namespace sh_expr_eval {  // define
namespace Id = id_kind_asdl::Id;
using runtime_asdl::scope_t;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace lvalue = runtime_asdl::lvalue;
namespace lvalue_e = runtime_asdl::lvalue_e;
using runtime_asdl::lvalue_t;
using runtime_asdl::lvalue__Named;
using runtime_asdl::lvalue__Indexed;
using runtime_asdl::lvalue__Keyed;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__Int;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__AssocArray;
using runtime_asdl::value__Obj;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__Unary;
using syntax_asdl::arith_expr__Binary;
using syntax_asdl::arith_expr__UnaryAssign;
using syntax_asdl::arith_expr__BinaryAssign;
using syntax_asdl::arith_expr__TernaryOp;
namespace bool_expr_e = syntax_asdl::bool_expr_e;
using syntax_asdl::bool_expr_t;
using syntax_asdl::bool_expr__WordTest;
using syntax_asdl::bool_expr__LogicalNot;
using syntax_asdl::bool_expr__LogicalAnd;
using syntax_asdl::bool_expr__LogicalOr;
using syntax_asdl::bool_expr__Unary;
using syntax_asdl::bool_expr__Binary;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace sh_lhs_expr_e = syntax_asdl::sh_lhs_expr_e;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::sh_lhs_expr__Name;
using syntax_asdl::sh_lhs_expr__IndexedName;
namespace source = syntax_asdl::source;
using syntax_asdl::word_t;
using types_asdl::bool_arg_type_e;

runtime_asdl::value_t* _LookupVar(Str* name, state::Mem* mem, optview::Exec* exec_opts) {
  runtime_asdl::value_t* val;
  StackRoots _roots({&val});

  val = mem->GetValue(name);
  if ((val->tag_() == value_e::Undef and exec_opts->nounset())) {
    e_die(fmt206(name));
  }
  return val;
}

runtime_asdl::value_t* OldValue(runtime_asdl::lvalue_t* lval, state::Mem* mem, optview::Exec* exec_opts) {
  runtime_asdl::lvalue_t* UP_lval;
  Str* var_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::value__MaybeStrArray* array_val;
  Str* s;
  runtime_asdl::value__AssocArray* assoc_val;
  StackRoots _roots({&UP_lval, &var_name, &val, &UP_val, &array_val, &s, &assoc_val});

  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      var_name = lval->name;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  val = _LookupVar(var_name, mem, exec_opts);
  UP_val = val;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      return val;
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      array_val = nullptr;
      switch (val->tag_()) {
        case value_e::Undef: {
          array_val = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* tmp = static_cast<value__MaybeStrArray*>(UP_val);
          array_val = tmp;
        }
          break;
        default: {
          e_die(fmt207(ui::ValType(val)));
        }
      }
      s = word_eval::GetArrayItem(array_val->strs, lval->index);
      if (s == nullptr) {
        val = Alloc<value::Str>(str788);
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      assoc_val = nullptr;
      switch (val->tag_()) {
        case value_e::Undef: {
          throw Alloc<AssertionError>();
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* tmp2 = static_cast<value__AssocArray*>(UP_val);
          assoc_val = tmp2;
        }
          break;
        default: {
          e_die(fmt208(ui::ValType(val)));
        }
      }
      s = assoc_val->d->get(lval->key);
      if (s == nullptr) {
        val = Alloc<value::Str>(str790);
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return val;
}

ArithEvaluator::ArithEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ArithEvaluator)) {
  this->word_ev = nullptr;
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->parse_ctx = parse_ctx;
  this->errfmt = errfmt;
}

void ArithEvaluator::CheckCircularDeps() {
}

int ArithEvaluator::_StringToInteger(Str* s, int span_id) {
  int integer;
  Str* b;
  Str* digits;
  int base;
  int digit;
  alloc::Arena* arena;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* node2;
  StackRoots _roots({&b, &digits, &arena, &a_parser, &node2});

  if (s->startswith(str791)) {
    try {
      integer = to_int(s, 16);
    }
    catch (ValueError*) {
      e_strict(fmt209(s), span_id);
    }
    return integer;
  }
  if (s->startswith(str793)) {
    try {
      integer = to_int(s, 8);
    }
    catch (ValueError*) {
      e_strict(fmt210(s), span_id);
    }
    return integer;
  }
  if (str_contains(s, str795)) {
    Tuple2<Str*, Str*> tup0 = mylib::split_once(s, str796);
    b = tup0.at0();
    digits = tup0.at1();
    try {
      base = to_int(b);
    }
    catch (ValueError*) {
      e_strict(fmt211(b), span_id);
    }
    integer = 0;
    for (StrIter it(digits); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if (IsLower(ch)) {
        digit = ((ord(ch) - ord(str798)) + 10);
      }
      else {
        if (IsUpper(ch)) {
          digit = ((ord(ch) - ord(str799)) + 36);
        }
        else {
          if (str_equals(ch, str800)) {
            digit = 62;
          }
          else {
            if (str_equals(ch, str801)) {
              digit = 63;
            }
            else {
              if (ch->isdigit()) {
                digit = to_int(ch);
              }
              else {
                e_strict(fmt212(digits), span_id);
              }
            }
          }
        }
      }
      if (digit >= base) {
        e_strict(fmt213(digits, base), span_id);
      }
      integer = ((integer * base) + digit);
    }
    return integer;
  }
  try {
    integer = to_int(s);
  }
  catch (ValueError*) {
    if ((this->exec_opts->eval_unsafe_arith() and this->parse_ctx)) {
      if (len(s->strip()) == 0) {
        return 0;
      }
      arena = this->parse_ctx->arena;
      a_parser = this->parse_ctx->MakeArithParser(s);
      {  // with
        alloc::ctx_Location ctx(arena, Alloc<source::Variable>(span_id));

        try {
          node2 = a_parser->Parse();
        }
        catch (error::Parse* e) {
          ui::PrettyPrintError(e, arena);
          e_die(fmt214(), e->span_id);
        }
      }
      if (node2->tag_() == arith_expr_e::Word) {
        e_die(fmt215(s), span_id);
      }
      else {
        integer = this->EvalToInt(node2);
      }
    }
    else {
      if ((len(s->strip()) == 0 or match::IsValidVarName(s))) {
        e_strict(fmt216(s), span_id);
      }
      else {
        e_die(fmt217(s), span_id);
      }
    }
  }
  return integer;
}

int ArithEvaluator::_ValToIntOrError(runtime_asdl::value_t* val) {
  return _ValToIntOrError(val, runtime::NO_SPID);
}

int ArithEvaluator::_ValToIntOrError(runtime_asdl::value_t* val, int span_id) {
  runtime_asdl::value_t* UP_val;
  StackRoots _roots({&UP_val});

  try {
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        e_strict(fmt218(), span_id);
      }
        break;
      case value_e::Int: {
        value__Int* val = static_cast<value__Int*>(UP_val);
        return val->i;
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        return this->_StringToInteger(val->s, span_id);
      }
        break;
      case value_e::Obj: {
        throw Alloc<AssertionError>();
      }
        break;
    }
  }
  catch (error::Strict* e) {
    if (this->exec_opts->strict_arith()) {
      throw ;
    }
    else {
      return 0;
    }
  }
  e_die(fmt219(ui::ValType(val)), span_id);
}

Tuple2<int, runtime_asdl::lvalue_t*> ArithEvaluator::_EvalLhsAndLookupArith(syntax_asdl::arith_expr_t* node) {
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::value_t* val;
  int span_id;
  int i;
  StackRoots _roots({&lval, &val});

  lval = this->EvalArithLhs(node, runtime::NO_SPID);
  val = OldValue(lval, this->mem, this->exec_opts);
  if (((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray) and lval->tag_() == lvalue_e::Named)) {
    lvalue__Named* named_lval = static_cast<lvalue__Named*>(lval);
    if (word_eval::CheckCompatArray(named_lval->name, this->exec_opts)) {
      if (val->tag_() == value_e::MaybeStrArray) {
        lval = Alloc<lvalue::Indexed>(named_lval->name, 0);
      }
      else {
        if (val->tag_() == value_e::AssocArray) {
          lval = Alloc<lvalue::Keyed>(named_lval->name, str810);
        }
      }
      val = word_eval::ResolveCompatArray(val);
    }
  }
  span_id = location::SpanForArithExpr(node);
  i = this->_ValToIntOrError(val, span_id);
  return (Tuple2<int, runtime_asdl::lvalue_t*>(i, lval));
}

void ArithEvaluator::_Store(runtime_asdl::lvalue_t* lval, int new_int) {
  runtime_asdl::value__Str* val;
  StackRoots _roots({&val});

  val = Alloc<value::Str>(str(new_int));
  state::SetLocalShopt(this->mem, lval, val);
}

int ArithEvaluator::EvalToInt(syntax_asdl::arith_expr_t* node) {
  runtime_asdl::value_t* val;
  int span_id;
  int i;
  StackRoots _roots({&val});

  val = this->Eval(node);
  if (((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray) and node->tag_() == arith_expr_e::VarRef)) {
    Token* tok = static_cast<Token*>(node);
    if (word_eval::CheckCompatArray(tok->val, this->exec_opts)) {
      val = word_eval::ResolveCompatArray(val);
    }
  }
  span_id = location::SpanForArithExpr(node);
  i = this->_ValToIntOrError(val, span_id);
  return i;
}

runtime_asdl::value_t* ArithEvaluator::Eval(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  int op_id;
  int old_int;
  runtime_asdl::lvalue_t* lval;
  int new_int;
  int ret;
  int rhs_int;
  int rhs;
  int i;
  int lhs;
  runtime_asdl::value_t* left;
  runtime_asdl::value_t* UP_left;
  int index;
  Str* s;
  Str* key;
  runtime_asdl::value_t* val;
  int cond;
  StackRoots _roots({&UP_node, &lval, &left, &UP_left, &s, &key, &val});

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      Token* tok = static_cast<Token*>(UP_node);
      return _LookupVar(tok->val, this->mem, this->exec_opts);
    }
      break;
    case arith_expr_e::Word: {
      compound_word* w = static_cast<compound_word*>(UP_node);
      return this->word_ev->EvalWordToString(w);
    }
      break;
    case arith_expr_e::UnaryAssign: {
      arith_expr__UnaryAssign* node = static_cast<arith_expr__UnaryAssign*>(UP_node);
      op_id = node->op_id;
      Tuple2<int, runtime_asdl::lvalue_t*> tup1 = this->_EvalLhsAndLookupArith(node->child);
      old_int = tup1.at0();
      lval = tup1.at1();
      if (op_id == Id::Node_PostDPlus) {
        new_int = (old_int + 1);
        ret = old_int;
      }
      else {
        if (op_id == Id::Node_PostDMinus) {
          new_int = (old_int - 1);
          ret = old_int;
        }
        else {
          if (op_id == Id::Arith_DPlus) {
            new_int = (old_int + 1);
            ret = new_int;
          }
          else {
            if (op_id == Id::Arith_DMinus) {
              new_int = (old_int - 1);
              ret = new_int;
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
      this->_Store(lval, new_int);
      return Alloc<value::Int>(ret);
    }
      break;
    case arith_expr_e::BinaryAssign: {
      arith_expr__BinaryAssign* node = static_cast<arith_expr__BinaryAssign*>(UP_node);
      op_id = node->op_id;
      if (op_id == Id::Arith_Equal) {
        lval = this->EvalArithLhs(node->left, runtime::NO_SPID);
        rhs_int = this->EvalToInt(node->right);
        this->_Store(lval, rhs_int);
        return Alloc<value::Int>(rhs_int);
      }
      Tuple2<int, runtime_asdl::lvalue_t*> tup2 = this->_EvalLhsAndLookupArith(node->left);
      old_int = tup2.at0();
      lval = tup2.at1();
      rhs = this->EvalToInt(node->right);
      if (op_id == Id::Arith_PlusEqual) {
        new_int = (old_int + rhs);
      }
      else {
        if (op_id == Id::Arith_MinusEqual) {
          new_int = (old_int - rhs);
        }
        else {
          if (op_id == Id::Arith_StarEqual) {
            new_int = (old_int * rhs);
          }
          else {
            if (op_id == Id::Arith_SlashEqual) {
              if (rhs == 0) {
                e_die(str811);
              }
              new_int = (old_int / rhs);
            }
            else {
              if (op_id == Id::Arith_PercentEqual) {
                if (rhs == 0) {
                  e_die(str812);
                }
                new_int = (old_int % rhs);
              }
              else {
                if (op_id == Id::Arith_DGreatEqual) {
                  new_int = (old_int >> rhs);
                }
                else {
                  if (op_id == Id::Arith_DLessEqual) {
                    new_int = (old_int << rhs);
                  }
                  else {
                    if (op_id == Id::Arith_AmpEqual) {
                      new_int = (old_int & rhs);
                    }
                    else {
                      if (op_id == Id::Arith_PipeEqual) {
                        new_int = (old_int | rhs);
                      }
                      else {
                        if (op_id == Id::Arith_CaretEqual) {
                          new_int = (old_int ^ rhs);
                        }
                        else {
                          throw Alloc<AssertionError>();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      this->_Store(lval, new_int);
      return Alloc<value::Int>(new_int);
    }
      break;
    case arith_expr_e::Unary: {
      arith_expr__Unary* node = static_cast<arith_expr__Unary*>(UP_node);
      op_id = node->op_id;
      i = this->EvalToInt(node->child);
      if (op_id == Id::Node_UnaryPlus) {
        ret = i;
      }
      else {
        if (op_id == Id::Node_UnaryMinus) {
          ret = -i;
        }
        else {
          if (op_id == Id::Arith_Bang) {
            ret = i == 0 ? 1 : 0;
          }
          else {
            if (op_id == Id::Arith_Tilde) {
              ret = ~i;
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
      return Alloc<value::Int>(ret);
    }
      break;
    case arith_expr_e::Binary: {
      arith_expr__Binary* node = static_cast<arith_expr__Binary*>(UP_node);
      op_id = node->op_id;
      if (op_id == Id::Arith_DPipe) {
        lhs = this->EvalToInt(node->left);
        if (lhs == 0) {
          rhs = this->EvalToInt(node->right);
          ret = to_int(rhs != 0);
        }
        else {
          ret = 1;
        }
        return Alloc<value::Int>(ret);
      }
      if (op_id == Id::Arith_DAmp) {
        lhs = this->EvalToInt(node->left);
        if (lhs == 0) {
          ret = 0;
        }
        else {
          rhs = this->EvalToInt(node->right);
          ret = to_int(rhs != 0);
        }
        return Alloc<value::Int>(ret);
      }
      if (op_id == Id::Arith_LBracket) {
        left = this->Eval(node->left);
        UP_left = left;
        switch (left->tag_()) {
          case value_e::MaybeStrArray: {
            value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_left);
            index = this->EvalToInt(node->right);
            s = word_eval::GetArrayItem(array_val->strs, index);
          }
            break;
          case value_e::AssocArray: {
            value__AssocArray* left = static_cast<value__AssocArray*>(UP_left);
            key = this->EvalWordToString(node->right);
            s = left->d->get(key);
          }
            break;
          default: {
            e_die(fmt220(ui::ValType(left)));
          }
        }
        if (s == nullptr) {
          val = Alloc<value::Undef>();
        }
        else {
          val = Alloc<value::Str>(s);
        }
        return val;
      }
      if (op_id == Id::Arith_Comma) {
        this->EvalToInt(node->left);
        ret = this->EvalToInt(node->right);
        return Alloc<value::Int>(ret);
      }
      lhs = this->EvalToInt(node->left);
      rhs = this->EvalToInt(node->right);
      if (op_id == Id::Arith_Plus) {
        ret = (lhs + rhs);
      }
      else {
        if (op_id == Id::Arith_Minus) {
          ret = (lhs - rhs);
        }
        else {
          if (op_id == Id::Arith_Star) {
            ret = (lhs * rhs);
          }
          else {
            if (op_id == Id::Arith_Slash) {
              if (rhs == 0) {
                e_die(fmt221(), location::SpanForArithExpr(node->right));
              }
              ret = (lhs / rhs);
            }
            else {
              if (op_id == Id::Arith_Percent) {
                if (rhs == 0) {
                  e_die(fmt222(), location::SpanForArithExpr(node->right));
                }
                ret = (lhs % rhs);
              }
              else {
                if (op_id == Id::Arith_DStar) {
                  if (rhs < 0) {
                    e_die(str816);
                  }
                  ret = 1;
                  for (int i = 0; i < rhs; ++i) {
                    ret *= lhs;
                  }
                }
                else {
                  if (op_id == Id::Arith_DEqual) {
                    ret = to_int(lhs == rhs);
                  }
                  else {
                    if (op_id == Id::Arith_NEqual) {
                      ret = to_int(lhs != rhs);
                    }
                    else {
                      if (op_id == Id::Arith_Great) {
                        ret = to_int(lhs > rhs);
                      }
                      else {
                        if (op_id == Id::Arith_GreatEqual) {
                          ret = to_int(lhs >= rhs);
                        }
                        else {
                          if (op_id == Id::Arith_Less) {
                            ret = to_int(lhs < rhs);
                          }
                          else {
                            if (op_id == Id::Arith_LessEqual) {
                              ret = to_int(lhs <= rhs);
                            }
                            else {
                              if (op_id == Id::Arith_Pipe) {
                                ret = (lhs | rhs);
                              }
                              else {
                                if (op_id == Id::Arith_Amp) {
                                  ret = (lhs & rhs);
                                }
                                else {
                                  if (op_id == Id::Arith_Caret) {
                                    ret = (lhs ^ rhs);
                                  }
                                  else {
                                    if (op_id == Id::Arith_DLess) {
                                      ret = (lhs << rhs);
                                    }
                                    else {
                                      if (op_id == Id::Arith_DGreat) {
                                        ret = (lhs >> rhs);
                                      }
                                      else {
                                        throw Alloc<AssertionError>();
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return Alloc<value::Int>(ret);
    }
      break;
    case arith_expr_e::TernaryOp: {
      arith_expr__TernaryOp* node = static_cast<arith_expr__TernaryOp*>(UP_node);
      cond = this->EvalToInt(node->cond);
      if (cond) {
        return this->Eval(node->true_expr);
      }
      else {
        return this->Eval(node->false_expr);
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

Str* ArithEvaluator::EvalWordToString(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  runtime_asdl::value__Str* val;
  StackRoots _roots({&UP_node, &val});

  UP_node = node;
  if (node->tag_() == arith_expr_e::Word) {
    compound_word* w = static_cast<compound_word*>(UP_node);
    val = this->word_ev->EvalWordToString(w);
    return val->s;
  }
  else {
    e_die(str817);
  }
}

runtime_asdl::lvalue_t* ArithEvaluator::EvalShellLhs(syntax_asdl::sh_lhs_expr_t* node, int spid, runtime_asdl::scope_t which_scopes) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::lvalue__Named* lval1;
  Str* key;
  runtime_asdl::lvalue__Keyed* lval2;
  int index;
  runtime_asdl::lvalue__Indexed* lval3;
  StackRoots _roots({&UP_node, &lval, &lval1, &key, &lval2, &lval3});

  UP_node = node;
  lval = nullptr;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      lval1 = Alloc<lvalue::Named>(node->name);
      lval1->spids->append(spid);
      lval = lval1;
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      if (this->mem->IsAssocArray(node->name)) {
        key = this->EvalWordToString(node->index);
        lval2 = Alloc<lvalue::Keyed>(node->name, key);
        lval2->spids->append(node->spids->index(0));
        lval = lval2;
      }
      else {
        index = this->EvalToInt(node->index);
        lval3 = Alloc<lvalue::Indexed>(node->name, index);
        lval3->spids->append(node->spids->index(0));
        lval = lval3;
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return lval;
}

Tuple2<Str*, int> ArithEvaluator::_VarRefOrWord(syntax_asdl::arith_expr_t* anode) {
  syntax_asdl::arith_expr_t* UP_anode;
  Str* var_name;
  int span_id;
  Str* no_str;
  StackRoots _roots({&UP_anode, &var_name, &no_str});

  UP_anode = anode;
  switch (anode->tag_()) {
    case arith_expr_e::VarRef: {
      Token* tok = static_cast<Token*>(UP_anode);
      return (Tuple2<Str*, int>(tok->val, tok->span_id));
    }
      break;
    case arith_expr_e::Word: {
      compound_word* w = static_cast<compound_word*>(UP_anode);
      var_name = this->EvalWordToString(w);
      span_id = word_::LeftMostSpanForWord(w);
      return (Tuple2<Str*, int>(var_name, span_id));
    }
      break;
  }
  no_str = nullptr;
  return (Tuple2<Str*, int>(no_str, runtime::NO_SPID));
}

runtime_asdl::lvalue_t* ArithEvaluator::EvalArithLhs(syntax_asdl::arith_expr_t* anode, int span_id) {
  syntax_asdl::arith_expr_t* UP_anode;
  Str* var_name;
  Str* key;
  runtime_asdl::lvalue__Keyed* lval2;
  runtime_asdl::lvalue_t* lval;
  int index;
  runtime_asdl::lvalue__Indexed* lval3;
  runtime_asdl::lvalue__Named* lval1;
  StackRoots _roots({&UP_anode, &var_name, &key, &lval2, &lval, &lval3, &lval1});

  UP_anode = anode;
  if (anode->tag_() == arith_expr_e::Binary) {
    arith_expr__Binary* anode = static_cast<arith_expr__Binary*>(UP_anode);
    if (anode->op_id == Id::Arith_LBracket) {
      Tuple2<Str*, int> tup3 = this->_VarRefOrWord(anode->left);
      var_name = tup3.at0();
      span_id = tup3.at1();
      if (var_name != nullptr) {
        if (this->mem->IsAssocArray(var_name)) {
          key = this->EvalWordToString(anode->right);
          lval2 = Alloc<lvalue::Keyed>(var_name, key);
          lval2->spids->append(span_id);
          lval = lval2;
          return lval;
        }
        else {
          index = this->EvalToInt(anode->right);
          lval3 = Alloc<lvalue::Indexed>(var_name, index);
          lval3->spids->append(span_id);
          lval = lval3;
          return lval;
        }
      }
    }
  }
  Tuple2<Str*, int> tup4 = this->_VarRefOrWord(anode);
  var_name = tup4.at0();
  span_id = tup4.at1();
  if (var_name != nullptr) {
    lval1 = Alloc<lvalue::Named>(var_name);
    lval1->spids->append(span_id);
    lval = lval1;
    return lval;
  }
  e_die(fmt223(span_id), 2);
}

BoolEvaluator::BoolEvaluator(state::Mem* mem, optview::Exec* exec_opts, parse_lib::ParseContext* parse_ctx, ui::ErrorFormatter* errfmt) : ArithEvaluator(mem, exec_opts, parse_ctx, errfmt) {
  this->always_strict = false;
}

void BoolEvaluator::Init_AlwaysStrict() {
  this->always_strict = true;
}

int BoolEvaluator::_StringToIntegerOrError(Str* s) {
  return _StringToIntegerOrError(s, nullptr);
}

int BoolEvaluator::_StringToIntegerOrError(Str* s, syntax_asdl::word_t* blame_word) {
  int span_id;
  int i;
  if (blame_word) {
    span_id = word_::LeftMostSpanForWord(blame_word);
  }
  else {
    span_id = runtime::NO_SPID;
  }
  try {
    i = this->_StringToInteger(s, span_id);
  }
  catch (error::Strict* e) {
    if ((this->always_strict or this->exec_opts->strict_arith())) {
      throw ;
    }
    else {
      i = 0;
    }
  }
  return i;
}

Str* BoolEvaluator::_EvalCompoundWord(syntax_asdl::word_t* word) {
  return _EvalCompoundWord(word, quote_e::Default);
}

Str* BoolEvaluator::_EvalCompoundWord(syntax_asdl::word_t* word, runtime_asdl::quote_t quote_kind) {
  runtime_asdl::value__Str* val;
  StackRoots _roots({&val});

  val = this->word_ev->EvalWordToString(word, quote_kind);
  return val->s;
}

void BoolEvaluator::_SetRegexMatches(List<Str*>* matches) {
  state::SetGlobalArray(this->mem, str819, matches);
}

bool BoolEvaluator::EvalB(syntax_asdl::bool_expr_t* node) {
  syntax_asdl::bool_expr_t* UP_node;
  Str* s;
  bool b;
  int op_id;
  types_asdl::bool_arg_type_t arg_type;
  int index;
  runtime_asdl::value_t* val;
  runtime_asdl::quote_t quote_kind;
  Str* s1;
  Str* s2;
  int i1;
  int i2;
  List<Str*>* matches;
  Str* msg;
  StackRoots _roots({&UP_node, &s, &arg_type, &val, &quote_kind, &s1, &s2, &matches, &msg});

  UP_node = node;
  switch (node->tag_()) {
    case bool_expr_e::WordTest: {
      bool_expr__WordTest* node = static_cast<bool_expr__WordTest*>(UP_node);
      s = this->_EvalCompoundWord(node->w);
      return to_bool(s);
    }
      break;
    case bool_expr_e::LogicalNot: {
      bool_expr__LogicalNot* node = static_cast<bool_expr__LogicalNot*>(UP_node);
      b = this->EvalB(node->child);
      return !b;
    }
      break;
    case bool_expr_e::LogicalAnd: {
      bool_expr__LogicalAnd* node = static_cast<bool_expr__LogicalAnd*>(UP_node);
      if (this->EvalB(node->left)) {
        return this->EvalB(node->right);
      }
      else {
        return false;
      }
    }
      break;
    case bool_expr_e::LogicalOr: {
      bool_expr__LogicalOr* node = static_cast<bool_expr__LogicalOr*>(UP_node);
      if (this->EvalB(node->left)) {
        return true;
      }
      else {
        return this->EvalB(node->right);
      }
    }
      break;
    case bool_expr_e::Unary: {
      bool_expr__Unary* node = static_cast<bool_expr__Unary*>(UP_node);
      op_id = node->op_id;
      s = this->_EvalCompoundWord(node->child);
      arg_type = consts::BoolArgType(op_id);
      if (arg_type == bool_arg_type_e::Path) {
        return bool_stat::DoUnaryOp(op_id, s);
      }
      if (arg_type == bool_arg_type_e::Str) {
        if (op_id == Id::BoolUnary_z) {
          return !to_bool(s);
        }
        if (op_id == Id::BoolUnary_n) {
          return to_bool(s);
        }
        throw Alloc<AssertionError>();
      }
      if (arg_type == bool_arg_type_e::Other) {
        if (op_id == Id::BoolUnary_t) {
          return bool_stat::isatty(s, node->child);
        }
        if (op_id == Id::BoolUnary_o) {
          index = match::MatchOption(s);
          if (index == 0) {
            return false;
          }
          else {
            return this->exec_opts->opt0_array->index(index);
          }
        }
        if (op_id == Id::BoolUnary_v) {
          val = this->mem->GetValue(s);
          return val->tag_() != value_e::Undef;
        }
        e_die(fmt224(ui::PrettyId(op_id)));
      }
      throw Alloc<AssertionError>();
    }
      break;
    case bool_expr_e::Binary: {
      bool_expr__Binary* node = static_cast<bool_expr__Binary*>(UP_node);
      op_id = node->op_id;
      switch (op_id) {
        case Id::BoolBinary_GlobEqual: 
        case Id::BoolBinary_GlobDEqual: 
        case Id::BoolBinary_GlobNEqual: {
          quote_kind = quote_e::FnMatch;
        }
          break;
        case Id::BoolBinary_EqualTilde: {
          quote_kind = quote_e::ERE;
        }
          break;
        default: {
          quote_kind = quote_e::Default;
        }
      }
      s1 = this->_EvalCompoundWord(node->left);
      s2 = this->_EvalCompoundWord(node->right, quote_kind);
      arg_type = consts::BoolArgType(op_id);
      if (arg_type == bool_arg_type_e::Path) {
        return bool_stat::DoBinaryOp(op_id, s1, s2);
      }
      if (arg_type == bool_arg_type_e::Int) {
        i1 = this->_StringToIntegerOrError(s1, node->left);
        i2 = this->_StringToIntegerOrError(s2, node->right);
        if (op_id == Id::BoolBinary_eq) {
          return i1 == i2;
        }
        if (op_id == Id::BoolBinary_ne) {
          return i1 != i2;
        }
        if (op_id == Id::BoolBinary_gt) {
          return i1 > i2;
        }
        if (op_id == Id::BoolBinary_ge) {
          return i1 >= i2;
        }
        if (op_id == Id::BoolBinary_lt) {
          return i1 < i2;
        }
        if (op_id == Id::BoolBinary_le) {
          return i1 <= i2;
        }
        throw Alloc<AssertionError>();
      }
      if (arg_type == bool_arg_type_e::Str) {
        if ((op_id == Id::BoolBinary_GlobEqual || op_id == Id::BoolBinary_GlobDEqual)) {
          return libc::fnmatch(s2, s1, this->exec_opts->extglob());
        }
        if (op_id == Id::BoolBinary_GlobNEqual) {
          return !libc::fnmatch(s2, s1, this->exec_opts->extglob());
        }
        if ((op_id == Id::BoolBinary_Equal || op_id == Id::BoolBinary_DEqual)) {
          return str_equals(s1, s2);
        }
        if (op_id == Id::BoolBinary_NEqual) {
          return !(str_equals(s1, s2));
        }
        if (op_id == Id::BoolBinary_EqualTilde) {
          try {
            matches = libc::regex_match(s2, s1);
          }
          catch (RuntimeError* e) {
            msg = e->message;
            e_die(fmt225(s2, msg, node->right), 2);
          }
          if (matches == nullptr) {
            return false;
          }
          this->_SetRegexMatches(matches);
          return true;
        }
        if (op_id == Id::Op_Less) {
          return str_cmp(s1, s2) < 0;
        }
        if (op_id == Id::Op_Great) {
          return str_cmp(s1, s2) > 0;
        }
        throw Alloc<AssertionError>();
      }
    }
      break;
  }
  throw Alloc<AssertionError>();
}

}  // define namespace sh_expr_eval

namespace split {  // define
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::span_e;
using runtime_asdl::value__Str;
namespace emit_i = runtime_asdl::emit_i;
namespace char_kind_i = runtime_asdl::char_kind_i;
namespace state_i = runtime_asdl::state_i;
Str* DEFAULT_IFS = str822;

List<Str*>* _SpansToParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans) {
  List<mylib::BufWriter*>* parts;
  int start_index;
  bool join_next;
  bool last_span_was_black;
  runtime_asdl::span_t span_type;
  int end_index;
  mylib::BufWriter* buf;
  List<Str*>* result;
  StackRoots _roots({&parts, &span_type, &buf, &result});

  parts = Alloc<List<mylib::BufWriter*>>();
  start_index = 0;
  join_next = false;
  last_span_was_black = false;
  for (ListIter<Tuple2<runtime_asdl::span_t, int>*> it(spans); !it.Done(); it.Next()) {
    Tuple2<runtime_asdl::span_t, int>* tup0 = it.Value();
    span_type = tup0->at0();
    end_index = tup0->at1();
    if (span_type == span_e::Black) {
      if ((len(parts) and join_next)) {
        parts->index(-1)->write(s->slice(start_index, end_index));
        join_next = false;
      }
      else {
        buf = Alloc<mylib::BufWriter>();
        buf->write(s->slice(start_index, end_index));
        parts->append(buf);
      }
      last_span_was_black = true;
    }
    else {
      if (span_type == span_e::Backslash) {
        if (last_span_was_black) {
          join_next = true;
        }
        last_span_was_black = false;
      }
      else {
        last_span_was_black = false;
      }
    }
    start_index = end_index;
  }
  result = Alloc<List<Str*>>();
  for (ListIter<mylib::BufWriter*> it(parts); !it.Done(); it.Next()) {
    mylib::BufWriter* buf = it.Value();
    result->append(buf->getvalue());
  }
  return result;
}

SplitContext::SplitContext(state::Mem* mem) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(SplitContext)) {
  this->mem = mem;
  this->splitters = Alloc<Dict<Str*, split::IfsSplitter*>>();
}

split::IfsSplitter* SplitContext::_GetSplitter() {
  return _GetSplitter(nullptr);
}

split::IfsSplitter* SplitContext::_GetSplitter(Str* ifs) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  split::IfsSplitter* sp;
  mylib::BufWriter* ifs_whitespace;
  mylib::BufWriter* ifs_other;
  StackRoots _roots({&val, &UP_val, &ifs, &sp, &ifs_whitespace, &ifs_other});

  if (ifs == nullptr) {
    val = this->mem->GetValue(str823);
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        ifs = DEFAULT_IFS;
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        ifs = val->s;
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  sp = this->splitters->get(ifs);
  if (sp == nullptr) {
    ifs_whitespace = Alloc<mylib::BufWriter>();
    ifs_other = Alloc<mylib::BufWriter>();
    for (StrIter it(ifs); !it.Done(); it.Next()) {
      Str* c = it.Value();
      if (str_contains(str825, c)) {
        ifs_whitespace->write(c);
      }
      else {
        ifs_other->write(c);
      }
    }
    sp = Alloc<IfsSplitter>(ifs_whitespace->getvalue(), ifs_other->getvalue());
    this->splitters->set(ifs, sp);
  }
  return sp;
}

Str* SplitContext::GetJoinChar() {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  StackRoots _roots({&val, &UP_val});

  val = this->mem->GetValue(str826);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return str827;
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      if (len(val->s)) {
        return val->s->index(0);
      }
      else {
        return str828;
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

Str* SplitContext::Escape(Str* s) {
  split::IfsSplitter* sp;
  StackRoots _roots({&sp});

  sp = this->_GetSplitter();
  return sp->Escape(s);
}

List<Str*>* SplitContext::SplitForWordEval(Str* s) {
  return SplitForWordEval(s, nullptr);
}

List<Str*>* SplitContext::SplitForWordEval(Str* s, Str* ifs) {
  split::IfsSplitter* sp;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;
  StackRoots _roots({&sp, &spans});

  sp = this->_GetSplitter(ifs);
  spans = sp->Split(s, true);
  return _SpansToParts(s, spans);
}

List<Tuple2<runtime_asdl::span_t, int>*>* SplitContext::SplitForRead(Str* line, bool allow_escape) {
  split::IfsSplitter* sp;
  StackRoots _roots({&sp});

  sp = this->_GetSplitter();
  return sp->Split(line, allow_escape);
}

_BaseSplitter::_BaseSplitter(Str* escape_chars) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(_BaseSplitter)) {
  this->escape_chars = str_concat(escape_chars, str830);
}

Str* _BaseSplitter::Escape(Str* s) {
  return pyutil::BackslashEscape(s, this->escape_chars);
}

IfsSplitter::IfsSplitter(Str* ifs_whitespace, Str* ifs_other) : _BaseSplitter(str_concat(ifs_whitespace, ifs_other)) {
  this->ifs_whitespace = ifs_whitespace;
  this->ifs_other = ifs_other;
}

List<Tuple2<runtime_asdl::span_t, int>*>* IfsSplitter::Split(Str* s, bool allow_escape) {
  Str* ws_chars;
  Str* other_chars;
  int n;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;
  int i;
  int state;
  Str* c;
  int ch;
  int new_state;
  int action;
  StackRoots _roots({&ws_chars, &other_chars, &spans, &c});

  ws_chars = this->ifs_whitespace;
  other_chars = this->ifs_other;
  n = len(s);
  spans = Alloc<List<Tuple2<runtime_asdl::span_t, int>*>>();
  if (n == 0) {
    return spans;
  }
  i = 0;
  while ((i < n and str_contains(this->ifs_whitespace, s->index(i)))) {
    i += 1;
  }
  if (i != 0) {
    spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Delim, i)));
  }
  if (i == n) {
    return spans;
  }
  state = state_i::Start;
  while (state != state_i::Done) {
    if (i < n) {
      c = s->index(i);
      if (str_contains(ws_chars, c)) {
        ch = char_kind_i::DE_White;
      }
      else {
        if (str_contains(other_chars, c)) {
          ch = char_kind_i::DE_Gray;
        }
        else {
          if ((allow_escape and str_equals(c, str831))) {
            ch = char_kind_i::Backslash;
          }
          else {
            ch = char_kind_i::Black;
          }
        }
      }
    }
    else {
      if (i == n) {
        ch = char_kind_i::Sentinel;
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
    Tuple2<int, int> tup1 = consts::IfsEdge(state, ch);
    new_state = tup1.at0();
    action = tup1.at1();
    if (new_state == state_i::Invalid) {
      throw Alloc<AssertionError>();
    }
    if (action == emit_i::Part) {
      spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Black, i)));
    }
    else {
      if (action == emit_i::Delim) {
        spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Delim, i)));
      }
      else {
        if (action == emit_i::Empty) {
          spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Delim, i)));
          spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Black, i)));
        }
        else {
          if (action == emit_i::Escape) {
            spans->append((Alloc<Tuple2<runtime_asdl::span_t, int>>(span_e::Backslash, i)));
          }
          else {
            if (action == emit_i::Nothing) {
              ;  // pass
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
    }
    state = new_state;
    i += 1;
  }
  return spans;
}

}  // define namespace split

namespace string_ops {  // define
namespace Id = id_kind_asdl::Id;

Str* Utf8Encode(int code) {
  int num_cont_bytes;
  List<int>* bytes_;
  int b;
  List<Str*>* tmp;
  StackRoots _roots({&bytes_, &tmp});

  num_cont_bytes = 0;
  if (code <= 127) {
    return chr((code & 127));
  }
  else {
    if (code <= 2047) {
      num_cont_bytes = 1;
    }
    else {
      if (code <= 65535) {
        num_cont_bytes = 2;
      }
      else {
        if (code <= 1114111) {
          num_cont_bytes = 3;
        }
        else {
          return str833;
        }
      }
    }
  }
  bytes_ = Alloc<List<int>>();
  for (int _ = 0; _ < num_cont_bytes; ++_) {
    bytes_->append((128 | (code & 63)));
    code >>= 6;
  }
  b = ((30 << (6 - num_cont_bytes)) | (code & (63 >> num_cont_bytes)));
  bytes_->append(b);
  bytes_->reverse();
  tmp = Alloc<List<Str*>>();
  for (ListIter<int> it(bytes_); !it.Done(); it.Next()) {
    int b = it.Value();
    tmp->append(chr((b & 255)));
  }
  return str834->join(tmp);
}
Str* INCOMPLETE_CHAR = str835;
Str* INVALID_CONT = str836;
Str* INVALID_START = str837;

void _CheckContinuationByte(Str* byte) {
  if ((ord(byte) >> 6) != 2) {
    e_strict(INVALID_CONT);
  }
}

int _Utf8CharLen(int starting_byte) {
  if ((starting_byte >> 7) == 0) {
    return 1;
  }
  else {
    if ((starting_byte >> 5) == 6) {
      return 2;
    }
    else {
      if ((starting_byte >> 4) == 14) {
        return 3;
      }
      else {
        if ((starting_byte >> 3) == 30) {
          return 4;
        }
        else {
          e_strict(INVALID_START);
        }
      }
    }
  }
}

int _NextUtf8Char(Str* s, int i) {
  int n;
  int byte_as_int;
  int length;
  n = len(s);
  byte_as_int = ord(s->index(i));
  length = _Utf8CharLen(byte_as_int);
  for (int j = (i + 1); j < (i + length); ++j) {
    if (j >= n) {
      e_strict(INCOMPLETE_CHAR);
    }
    _CheckContinuationByte(s->index(j));
  }
  return (i + length);
}

int PreviousUtf8Char(Str* s, int i) {
  int orig_i;
  int byte_as_int;
  int offset;
  orig_i = i;
  while (i > 0) {
    i -= 1;
    byte_as_int = ord(s->index(i));
    if ((byte_as_int >> 6) != 2) {
      offset = (orig_i - i);
      if (offset != _Utf8CharLen(byte_as_int)) {
        e_strict(INVALID_START);
      }
      return i;
    }
  }
  e_strict(INVALID_START);
}

int CountUtf8Chars(Str* s) {
  int num_chars;
  int num_bytes;
  int i;
  num_chars = 0;
  num_bytes = len(s);
  i = 0;
  while (i < num_bytes) {
    i = _NextUtf8Char(s, i);
    num_chars += 1;
  }
  return num_chars;
}

int AdvanceUtf8Chars(Str* s, int num_chars, int byte_offset) {
  int num_bytes;
  int i;
  num_bytes = len(s);
  i = byte_offset;
  for (int _ = 0; _ < num_chars; ++_) {
    if (i >= num_bytes) {
      return i;
    }
    i = _NextUtf8Char(s, i);
  }
  return i;
}

Str* DoUnarySuffixOp(Str* s, syntax_asdl::suffix_op__Unary* op, Str* arg, bool extglob) {
  int n;
  int i;
  StackRoots _roots({&arg});

  if (!glob_::LooksLikeGlob(arg)) {
    arg = glob_::GlobUnescape(arg);
    if ((op->op_id == Id::VOp1_Pound || op->op_id == Id::VOp1_DPound)) {
      if ((len(arg) and s->startswith(arg))) {
        return s->slice(len(arg));
      }
      else {
        return s;
      }
    }
    else {
      if ((op->op_id == Id::VOp1_Percent || op->op_id == Id::VOp1_DPercent)) {
        if ((len(arg) and s->endswith(arg))) {
          return s->slice(0, -len(arg));
        }
        else {
          return s;
        }
      }
      else {
        if (op->op_id == Id::VOp1_Comma) {
          if (!(str_equals(arg, str838))) {
            e_die(fmt226(ui::PrettyId(op->op_id)));
          }
          if (len(s)) {
            return str_concat(s->index(0)->lower(), s->slice(1));
          }
          else {
            return s;
          }
        }
        else {
          if (op->op_id == Id::VOp1_DComma) {
            if (!(str_equals(arg, str840))) {
              e_die(fmt227(ui::PrettyId(op->op_id)));
            }
            return s->lower();
          }
          else {
            if (op->op_id == Id::VOp1_Caret) {
              if (!(str_equals(arg, str842))) {
                e_die(fmt228(ui::PrettyId(op->op_id)));
              }
              if (len(s)) {
                return str_concat(s->index(0)->upper(), s->slice(1));
              }
              else {
                return s;
              }
            }
            else {
              if (op->op_id == Id::VOp1_DCaret) {
                if (!(str_equals(arg, str844))) {
                  e_die(fmt229(ui::PrettyId(op->op_id)));
                }
                return s->upper();
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
          }
        }
      }
    }
  }
  n = len(s);
  if (op->op_id == Id::VOp1_Pound) {
    i = 0;
    while (true) {
      if (libc::fnmatch(arg, s->slice(0, i), extglob)) {
        return s->slice(i);
      }
      if (i >= n) {
        break;
      }
      i = _NextUtf8Char(s, i);
    }
    return s;
  }
  else {
    if (op->op_id == Id::VOp1_DPound) {
      i = n;
      while (true) {
        if (libc::fnmatch(arg, s->slice(0, i), extglob)) {
          return s->slice(i);
        }
        if (i == 0) {
          break;
        }
        i = PreviousUtf8Char(s, i);
      }
      return s;
    }
    else {
      if (op->op_id == Id::VOp1_Percent) {
        i = n;
        while (true) {
          if (libc::fnmatch(arg, s->slice(i), extglob)) {
            return s->slice(0, i);
          }
          if (i == 0) {
            break;
          }
          i = PreviousUtf8Char(s, i);
        }
        return s;
      }
      else {
        if (op->op_id == Id::VOp1_DPercent) {
          i = 0;
          while (true) {
            if (libc::fnmatch(arg, s->slice(i), extglob)) {
              return s->slice(0, i);
            }
            if (i >= n) {
              break;
            }
            i = _NextUtf8Char(s, i);
          }
          return s;
        }
        else {
          throw Alloc<NotImplementedError>(ui::PrettyId(op->op_id));
        }
      }
    }
  }
}

List<Tuple2<int, int>*>* _AllMatchPositions(Str* s, Str* regex) {
  List<Tuple2<int, int>*>* matches;
  int pos;
  int n;
  Tuple2<int, int>* m;
  int start;
  int end;
  StackRoots _roots({&matches, &m});

  matches = Alloc<List<Tuple2<int, int>*>>();
  pos = 0;
  n = len(s);
  while (pos < n) {
    m = libc::regex_first_group_match(regex, s, pos);
    if (m == nullptr) {
      break;
    }
    matches->append(m);
    Tuple2<int, int>* tup0 = m;
    start = tup0->at0();
    end = tup0->at1();
    pos = end;
  }
  return matches;
}

Str* _PatSubAll(Str* s, Str* regex, Str* replace_str) {
  List<Str*>* parts;
  int prev_end;
  int start;
  int end;
  StackRoots _roots({&parts});

  parts = Alloc<List<Str*>>();
  prev_end = 0;
  for (ListIter<Tuple2<int, int>*> it(_AllMatchPositions(s, regex)); !it.Done(); it.Next()) {
    Tuple2<int, int>* tup1 = it.Value();
    start = tup1->at0();
    end = tup1->at1();
    parts->append(s->slice(prev_end, start));
    parts->append(replace_str);
    prev_end = end;
  }
  parts->append(s->slice(prev_end));
  return str846->join(parts);
}

GlobReplacer::GlobReplacer(Str* regex, Str* replace_str, int slash_spid) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(GlobReplacer)) {
  this->regex = regex;
  this->replace_str = replace_str;
  this->slash_spid = slash_spid;
}

Str* GlobReplacer::Replace(Str* s, syntax_asdl::suffix_op__PatSub* op) {
  Str* regex;
  Str* msg;
  Tuple2<int, int>* m;
  int start;
  int end;
  StackRoots _roots({&regex, &msg, &m});

  regex = fmt230(this->regex);
  if (op->replace_mode == Id::Lit_Slash) {
    try {
      return _PatSubAll(s, regex, this->replace_str);
    }
    catch (RuntimeError* e) {
      msg = e->message;
      e_die(fmt231(regex, msg), this->slash_spid);
    }
  }
  if (op->replace_mode == Id::Lit_Pound) {
    regex = str_concat(str850, regex);
  }
  else {
    if (op->replace_mode == Id::Lit_Percent) {
      regex = str_concat(regex, str851);
    }
  }
  m = libc::regex_first_group_match(regex, s, 0);
  if (m == nullptr) {
    return s;
  }
  Tuple2<int, int>* tup2 = m;
  start = tup2->at0();
  end = tup2->at1();
  return str_concat(str_concat(s->slice(0, start), this->replace_str), s->slice(end));
}

Str* ShellQuoteB(Str* s) {
  StackRoots _roots({&s});

  s = s->replace(str852, str853)->replace(str854, str855);
  return pyutil::BackslashEscape(s, str856);
}

}  // define namespace string_ops

namespace tdop {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace arith_expr = syntax_asdl::arith_expr;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__Binary;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
using types_asdl::lex_mode_e;

bool IsIndexable(syntax_asdl::arith_expr_t* node, bool parse_dynamic_arith) {
  int tag;
  tag = node->tag_();
  if (tag == arith_expr_e::VarRef) {
    return true;
  }
  if ((parse_dynamic_arith and tag == arith_expr_e::Word)) {
    return true;
  }
  return false;
}

bool _VarRefOrWord(syntax_asdl::arith_expr_t* node, bool dynamic_arith) {
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      return true;
    }
      break;
    case arith_expr_e::Word: {
      if (dynamic_arith) {
        return true;
      }
    }
      break;
  }
  return false;
}

void CheckLhsExpr(syntax_asdl::arith_expr_t* node, bool dynamic_arith, syntax_asdl::word_t* blame_word) {
  syntax_asdl::arith_expr_t* UP_node;
  StackRoots _roots({&UP_node});

  UP_node = node;
  if (node->tag_() == arith_expr_e::Binary) {
    arith_expr__Binary* node = static_cast<arith_expr__Binary*>(UP_node);
    if ((node->op_id == Id::Arith_LBracket and _VarRefOrWord(node->left, dynamic_arith))) {
      return ;
    }
  }
  if (_VarRefOrWord(node, dynamic_arith)) {
    return ;
  }
  p_die(fmt232(), blame_word);
}

syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  p_die(fmt233(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::Token* var_name_token;
  StackRoots _roots({&var_name_token});

  var_name_token = word_::LooksLikeArithVar(w);
  if (var_name_token) {
    return var_name_token;
  }
  return static_cast<compound_word*>(w);
}

syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* r;
  StackRoots _roots({&r});

  r = p->ParseUntil(bp);
  p->Eat(Id::Arith_RParen);
  return r;
}

syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;
  StackRoots _roots({&right});

  right = p->ParseUntil(bp);
  return Alloc<arith_expr::Unary>(word_::ArithId(w), right);
}

syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp) {
  p_die(fmt234(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  return Alloc<arith_expr::Binary>(word_::ArithId(w), left, p->ParseUntil(rbp));
}

syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  CheckLhsExpr(left, p->parse_opts->parse_dynamic_arith(), w);
  return Alloc<arith_expr::BinaryAssign>(word_::ArithId(w), left, p->ParseUntil(rbp));
}

TdopParser::TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser, optview::Parse* parse_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(TdopParser)) {
  this->spec = spec;
  this->w_parser = w_parser;
  this->parse_opts = parse_opts;
  this->cur_word = nullptr;
  this->op_id = Id::Undefined_Tok;
}

int TdopParser::CurrentId() {
  return word_::CommandId(this->cur_word);
}

bool TdopParser::AtToken(int token_type) {
  return this->op_id == token_type;
}

void TdopParser::Eat(int token_type) {
  if (!this->AtToken(token_type)) {
    p_die(fmt235(ui::PrettyId(token_type), ui::PrettyId(this->op_id)), this->cur_word);
  }
  this->Next();
}

bool TdopParser::Next() {
  this->cur_word = this->w_parser->ReadWord(lex_mode_e::Arith);
  this->op_id = word_::ArithId(this->cur_word);
  return true;
}

syntax_asdl::arith_expr_t* TdopParser::ParseUntil(int rbp) {
  syntax_asdl::word_t* t;
  tdop::NullInfo* null_info;
  syntax_asdl::arith_expr_t* node;
  tdop::LeftInfo* left_info;
  StackRoots _roots({&t, &null_info, &node, &left_info});

  if ((this->op_id == Id::Eof_Real || this->op_id == Id::Eof_RParen || this->op_id == Id::Eof_Backtick)) {
    p_die(fmt236(), this->cur_word);
  }
  t = this->cur_word;
  null_info = this->spec->LookupNud(this->op_id);
  this->Next();
  node = null_info->nud(this, t, null_info->bp);
  while (true) {
    t = this->cur_word;
    left_info = this->spec->LookupLed(this->op_id);
    if (rbp >= left_info->lbp) {
      break;
    }
    this->Next();
    node = left_info->led(this, t, node, left_info->rbp);
  }
  return node;
}

syntax_asdl::arith_expr_t* TdopParser::Parse() {
  this->Next();
  return this->ParseUntil(0);
}

}  // define namespace tdop

namespace word_compile {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
namespace class_literal_term = syntax_asdl::class_literal_term;
using syntax_asdl::class_literal_term_t;
using syntax_asdl::single_quoted;

syntax_asdl::class_literal_term_t* EvalCharLiteralForRegex(syntax_asdl::Token* tok) {
  int id_;
  Str* value;
  Str* c;
  Str* s;
  int i;
  StackRoots _roots({&value, &c, &s});

  id_ = tok->id;
  value = tok->val;
  if (id_ == Id::Char_OneChar) {
    c = value->index(1);
    s = consts::LookupCharC(c);
    return Alloc<class_literal_term::ByteSet>(s, tok->span_id);
  }
  else {
    if (id_ == Id::Char_Hex) {
      s = value->slice(2);
      i = to_int(s, 16);
      return Alloc<class_literal_term::ByteSet>(chr(i), tok->span_id);
    }
    else {
      if (id_ == Id::Char_UBraced) {
        s = value->slice(3, -1);
        i = to_int(s, 16);
        return Alloc<class_literal_term::CodePoint>(i, tok->span_id);
      }
      else {
        if (id_ == Id::Expr_Name) {
          return nullptr;
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
    }
  }
}

Str* EvalCStringToken(syntax_asdl::Token* tok) {
  int id_;
  Str* value;
  Str* c;
  Str* s;
  int i;
  StackRoots _roots({&value, &c, &s});

  id_ = tok->id;
  value = tok->val;
  if ((id_ == Id::Char_Literals || id_ == Id::Unknown_Backslash)) {
    return value;
  }
  else {
    if (id_ == Id::Char_OneChar) {
      c = value->index(1);
      return consts::LookupCharC(c);
    }
    else {
      if (id_ == Id::Char_Stop) {
        return nullptr;
      }
      else {
        if ((id_ == Id::Char_Octal3 || id_ == Id::Char_Octal4)) {
          if (id_ == Id::Char_Octal3) {
            s = value->slice(1);
          }
          else {
            s = value->slice(2);
          }
          i = to_int(s, 8);
          if (i >= 256) {
            i = (i % 256);
          }
          return chr(i);
        }
        else {
          if (id_ == Id::Char_Hex) {
            s = value->slice(2);
            i = to_int(s, 16);
            return chr(i);
          }
          else {
            if ((id_ == Id::Char_Unicode4 || id_ == Id::Char_Unicode8)) {
              s = value->slice(2);
              i = to_int(s, 16);
              return string_ops::Utf8Encode(i);
            }
            else {
              if (id_ == Id::Char_UBraced) {
                s = value->slice(3, -1);
                i = to_int(s, 16);
                return string_ops::Utf8Encode(i);
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
          }
        }
      }
    }
  }
}

Str* EvalSingleQuoted(syntax_asdl::single_quoted* part) {
  List<Str*>* tmp;
  Str* s;
  StackRoots _roots({&tmp, &s});

  if ((part->left->id == Id::Left_SingleQuote || part->left->id == Id::Left_RSingleQuote)) {
    tmp = Alloc<List<Str*>>();
    for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
      syntax_asdl::Token* t = it.Value();
      tmp->append(t->val);
    }
    s = str862->join(tmp);
  }
  else {
    if (part->left->id == Id::Left_CSingleQuote) {
      tmp = Alloc<List<Str*>>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(EvalCStringToken(t));
      }
      s = str863->join(tmp);
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  return s;
}

}  // define namespace word_compile

namespace word_eval {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Kind_str;
using syntax_asdl::braced_var_sub;
using syntax_asdl::Token;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
namespace bracket_op_e = syntax_asdl::bracket_op_e;
using syntax_asdl::bracket_op__ArrayIndex;
using syntax_asdl::bracket_op__WholeArray;
namespace suffix_op_e = syntax_asdl::suffix_op_e;
using syntax_asdl::suffix_op__PatSub;
using syntax_asdl::suffix_op__Slice;
using syntax_asdl::suffix_op__Unary;
using syntax_asdl::sh_array_literal;
using syntax_asdl::single_quoted;
using syntax_asdl::double_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::command_sub;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__EscapedLiteral;
using syntax_asdl::word_part__AssocArrayLiteral;
using syntax_asdl::word_part__ExprSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__FuncCall;
using syntax_asdl::word_part__Splice;
using syntax_asdl::word_part__TildeSub;
namespace part_value = runtime_asdl::part_value;
namespace part_value_e = runtime_asdl::part_value_e;
using runtime_asdl::part_value_t;
using runtime_asdl::part_value__String;
using runtime_asdl::part_value__Array;
namespace value = runtime_asdl::value;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
using runtime_asdl::value__AssocArray;
using runtime_asdl::value__MaybeStrArray;
using runtime_asdl::value__Obj;
namespace lvalue = runtime_asdl::lvalue;
using runtime_asdl::lvalue_t;
using runtime_asdl::assign_arg;
namespace cmd_value_e = runtime_asdl::cmd_value_e;
using runtime_asdl::cmd_value_t;
namespace cmd_value = runtime_asdl::cmd_value;
using runtime_asdl::cmd_value__Assign;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace a_index = runtime_asdl::a_index;
namespace a_index_e = runtime_asdl::a_index_e;
using runtime_asdl::a_index_t;
using runtime_asdl::a_index__Int;
using runtime_asdl::a_index__Str;
List<Str*> glist0 = {str864, str865, str866};
List<Str*>* _STRING_AND_ARRAY = &glist0;

bool CheckCompatArray(Str* var_name, optview::Exec* opts) {
  return CheckCompatArray(var_name, opts, true);
}

bool CheckCompatArray(Str* var_name, optview::Exec* opts, bool is_plain_var_sub) {
  return (opts->compat_array() or (is_plain_var_sub and list_contains(_STRING_AND_ARRAY, var_name)));
}

runtime_asdl::value_t* ResolveCompatArray(runtime_asdl::value_t* val) {
  Str* s;
  StackRoots _roots({&s});

  if (val->tag_() == value_e::MaybeStrArray) {
    value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
    s = len(array_val->strs) ? array_val->strs->index(0) : nullptr;
  }
  else {
    if (val->tag_() == value_e::AssocArray) {
      value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
      s = dict_contains(assoc_val->d, str867) ? assoc_val->d->index(str868) : nullptr;
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  if (s == nullptr) {
    return Alloc<value::Undef>();
  }
  else {
    return Alloc<value::Str>(s);
  }
}

Str* GetArrayItem(List<Str*>* strs, int index) {
  int n;
  Str* s;
  StackRoots _roots({&s});

  n = len(strs);
  if (index < 0) {
    index += n;
  }
  if ((0 <= index and index < n)) {
    s = strs->index(index);
  }
  else {
    s = nullptr;
  }
  return s;
}

Str* _BackslashEscape(Str* s) {
  return s->replace(str869, str870);
}

runtime_asdl::part_value_t* _ValueToPartValue(runtime_asdl::value_t* val, bool quoted) {
  runtime_asdl::value_t* UP_val;
  StackRoots _roots({&UP_val});

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return Alloc<part_value::String>(str871, quoted, !quoted);
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      return Alloc<part_value::String>(val->s, quoted, !quoted);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      return Alloc<part_value::Array>(val->strs);
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      return Alloc<part_value::Array>(val->d->values());
    }
      break;
    case value_e::Obj: {
      throw Alloc<AssertionError>();
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

List<List<Tuple3<Str*, bool, bool>*>*>* _MakeWordFrames(List<runtime_asdl::part_value_t*>* part_vals) {
  List<Tuple3<Str*, bool, bool>*>* current;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  runtime_asdl::part_value_t* UP_p;
  bool is_first;
  Tuple3<Str*, bool, bool>* portion;
  StackRoots _roots({&current, &frames, &UP_p, &portion});

  current = Alloc<List<Tuple3<Str*, bool, bool>*>>();
  frames = Alloc<List<List<Tuple3<Str*, bool, bool>*>*>>(std::initializer_list<List<Tuple3<Str*, bool, bool>*>*>{current});
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* p = it.Value();
    UP_p = p;
    switch (p->tag_()) {
      case part_value_e::String: {
        part_value__String* p = static_cast<part_value__String*>(UP_p);
        current->append((Alloc<Tuple3<Str*, bool, bool>>(p->s, p->quoted, p->do_split)));
      }
        break;
      case part_value_e::Array: {
        part_value__Array* p = static_cast<part_value__Array*>(UP_p);
        is_first = true;
        for (ListIter<Str*> it(p->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s == nullptr) {
            continue;
          }
          portion = (Alloc<Tuple3<Str*, bool, bool>>(s, true, false));
          if (is_first) {
            current->append(portion);
            is_first = false;
          }
          else {
            current = Alloc<List<Tuple3<Str*, bool, bool>*>>(std::initializer_list<Tuple3<Str*, bool, bool>*>{portion});
            frames->append(current);
          }
        }
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  return frames;
}

Str* _DecayPartValuesToString(List<runtime_asdl::part_value_t*>* part_vals, Str* join_char) {
  List<Str*>* out;
  runtime_asdl::part_value_t* UP_p;
  List<Str*>* tmp;
  StackRoots _roots({&out, &UP_p, &tmp});

  out = Alloc<List<Str*>>();
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* p = it.Value();
    UP_p = p;
    switch (p->tag_()) {
      case part_value_e::String: {
        part_value__String* p = static_cast<part_value__String*>(UP_p);
        out->append(p->s);
      }
        break;
      default: {
        part_value__Array* p = static_cast<part_value__Array*>(UP_p);
        tmp = Alloc<List<Str*>>();
        for (ListIter<Str*> it(p->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            tmp->append(s);
          }
        }
        out->append(join_char->join(tmp));
      }
    }
  }
  return str872->join(out);
}

runtime_asdl::value_t* _PerformSlice(runtime_asdl::value_t* val, int begin, int length, bool has_length, syntax_asdl::braced_var_sub* part, runtime_asdl::value__Str* arg0_val) {
  runtime_asdl::value_t* UP_val;
  Str* s;
  int n;
  int byte_begin;
  int num_iters;
  int byte_end;
  Str* substr;
  runtime_asdl::value_t* result;
  List<Str*>* orig;
  int i;
  List<Str*>* strs;
  int count;
  StackRoots _roots({&UP_val, &s, &substr, &result, &orig, &strs});

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      s = val->s;
      n = len(s);
      if (begin < 0) {
        byte_begin = n;
        num_iters = -begin;
        for (int _ = 0; _ < num_iters; ++_) {
          byte_begin = string_ops::PreviousUtf8Char(s, byte_begin);
        }
      }
      else {
        byte_begin = string_ops::AdvanceUtf8Chars(s, begin, 0);
      }
      if (has_length) {
        if (length < 0) {
          byte_end = n;
          num_iters = -length;
          for (int _ = 0; _ < num_iters; ++_) {
            byte_end = string_ops::PreviousUtf8Char(s, byte_end);
          }
        }
        else {
          byte_end = string_ops::AdvanceUtf8Chars(s, length, byte_begin);
        }
      }
      else {
        byte_end = len(s);
      }
      substr = s->slice(byte_begin, byte_end);
      result = Alloc<value::Str>(substr);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      if ((has_length and length < 0)) {
        e_die(fmt237(length), part);
      }
      if (arg0_val != nullptr) {
        orig = Alloc<List<Str*>>(std::initializer_list<Str*>{arg0_val->s});
        orig->extend(val->strs);
      }
      else {
        orig = val->strs;
      }
      n = len(orig);
      if (begin < 0) {
        i = (n + begin);
      }
      else {
        i = begin;
      }
      strs = Alloc<List<Str*>>();
      count = 0;
      while (i < n) {
        if ((has_length and count == length)) {
          break;
        }
        s = orig->index(i);
        if (s != nullptr) {
          strs->append(s);
          count += 1;
        }
        i += 1;
      }
      result = Alloc<value::MaybeStrArray>(strs);
    }
      break;
    case value_e::AssocArray: {
      e_die(fmt238(), part);
    }
      break;
    default: {
      throw Alloc<NotImplementedError>(val->tag_());
    }
  }
  return result;
}

StringWordEvaluator::StringWordEvaluator() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(StringWordEvaluator)) {
  ;  // pass
}

runtime_asdl::value__Str* StringWordEvaluator::EvalWordToString(syntax_asdl::word_t* w) {
  return EvalWordToString(w, quote_e::Default);
}

runtime_asdl::value__Str* StringWordEvaluator::EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind) {
  throw Alloc<NotImplementedError>();
}

Str* _GetDollarHyphen(optview::Exec* exec_opts) {
  List<Str*>* chars;
  StackRoots _roots({&chars});

  chars = Alloc<List<Str*>>();
  if (exec_opts->interactive()) {
    chars->append(str875);
  }
  if (exec_opts->errexit()) {
    chars->append(str876);
  }
  if (exec_opts->noglob()) {
    chars->append(str877);
  }
  if (exec_opts->noexec()) {
    chars->append(str878);
  }
  if (exec_opts->nounset()) {
    chars->append(str879);
  }
  if (exec_opts->xtrace()) {
    chars->append(str880);
  }
  if (exec_opts->noclobber()) {
    chars->append(str881);
  }
  return str882->join(chars);
}

TildeEvaluator::TildeEvaluator(state::Mem* mem, optview::Exec* exec_opts) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(TildeEvaluator)) {
  this->mem = mem;
  this->exec_opts = exec_opts;
}

Str* TildeEvaluator::Eval(syntax_asdl::Token* token) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  Str* result;
  StackRoots _roots({&val, &UP_val, &result});

  if (maybe_str_equals(token->val, str883)) {
    val = this->mem->GetValue(str884);
    UP_val = val;
    if (val->tag_() == value_e::Str) {
      value__Str* val = static_cast<value__Str*>(UP_val);
      return val->s;
    }
    result = pyos::GetMyHomeDir();
  }
  else {
    result = pyos::GetHomeDir(token->val->slice(1));
  }
  if (result == nullptr) {
    if (this->exec_opts->strict_tilde()) {
      e_die(fmt239(), token);
    }
    else {
      return token->val;
    }
  }
  return result;
}

AbstractWordEvaluator::AbstractWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt) {
  this->arith_ev = nullptr;
  this->expr_ev = nullptr;
  this->prompt_ev = nullptr;
  this->tilde_ev = Alloc<TildeEvaluator>(mem, exec_opts);
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->mutable_opts = mutable_opts;
  this->splitter = splitter;
  this->errfmt = errfmt;
  this->globber = Alloc<glob_::Globber>(exec_opts);
}

void AbstractWordEvaluator::CheckCircularDeps() {
  throw Alloc<NotImplementedError>();
}

runtime_asdl::part_value_t* AbstractWordEvaluator::_EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted) {
  throw Alloc<NotImplementedError>();
}

runtime_asdl::part_value_t* AbstractWordEvaluator::_EvalProcessSub(syntax_asdl::command_sub* cs_part) {
  throw Alloc<NotImplementedError>();
}

runtime_asdl::value_t* AbstractWordEvaluator::_EvalVarNum(int var_num) {
  return this->mem->GetArgNum(var_num);
}

Tuple2<runtime_asdl::value_t*, bool> AbstractWordEvaluator::_EvalSpecialVar(int op_id, bool quoted) {
  bool maybe_decay_array;
  List<Str*>* argv;
  runtime_asdl::value_t* val;
  StackRoots _roots({&argv, &val});

  maybe_decay_array = false;
  if ((op_id == Id::VSub_At || op_id == Id::VSub_Star)) {
    argv = this->mem->GetArgv();
    val = Alloc<value::MaybeStrArray>(argv);
    if (op_id == Id::VSub_At) {
      maybe_decay_array = !quoted;
    }
    else {
      maybe_decay_array = true;
    }
  }
  else {
    if (op_id == Id::VSub_Hyphen) {
      val = Alloc<value::Str>(_GetDollarHyphen(this->exec_opts));
    }
    else {
      val = this->mem->GetSpecialVar(op_id);
    }
  }
  return (Tuple2<runtime_asdl::value_t*, bool>(val, maybe_decay_array));
}

bool AbstractWordEvaluator::_ApplyTestOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, Str* var_name, runtime_asdl::a_index_t* var_index, syntax_asdl::Token* blame_token) {
  runtime_asdl::value_t* UP_val;
  bool is_falsey;
  List<runtime_asdl::part_value_t*>* assign_part_vals;
  Str* rhs_str;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::a_index_t* UP_var_index;
  List<runtime_asdl::part_value_t*>* error_part_vals;
  Str* error_str;
  StackRoots _roots({&UP_val, &assign_part_vals, &rhs_str, &lval, &UP_var_index, &error_part_vals, &error_str});

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      is_falsey = true;
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      if ((op->op_id == Id::VTest_ColonHyphen || op->op_id == Id::VTest_ColonEquals || op->op_id == Id::VTest_ColonQMark || op->op_id == Id::VTest_ColonPlus)) {
        is_falsey = len(val->s) == 0;
      }
      else {
        is_falsey = false;
      }
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      is_falsey = len(val->strs) == 0;
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      is_falsey = len(val->d) == 0;
    }
      break;
    default: {
      throw Alloc<NotImplementedError>(val->tag_());
    }
  }
  if ((op->op_id == Id::VTest_ColonHyphen || op->op_id == Id::VTest_Hyphen)) {
    if (is_falsey) {
      this->_EvalWordToParts(op->arg_word, quoted, part_vals, true);
      return true;
    }
    else {
      return false;
    }
  }
  else {
    if ((op->op_id == Id::VTest_ColonPlus || op->op_id == Id::VTest_Plus)) {
      if (is_falsey) {
        return false;
      }
      else {
        this->_EvalWordToParts(op->arg_word, quoted, part_vals, true);
        return true;
      }
    }
    else {
      if ((op->op_id == Id::VTest_ColonEquals || op->op_id == Id::VTest_Equals)) {
        if (is_falsey) {
          assign_part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
          this->_EvalWordToParts(op->arg_word, quoted, assign_part_vals, true);
          part_vals->extend(assign_part_vals);
          if (var_name == nullptr) {
            e_die(str886);
          }
          else {
            rhs_str = _DecayPartValuesToString(assign_part_vals, this->splitter->GetJoinChar());
            if (var_index == nullptr) {
              lval = Alloc<lvalue::Named>(var_name);
            }
            else {
              UP_var_index = var_index;
              switch (var_index->tag_()) {
                case a_index_e::Int: {
                  a_index__Int* var_index = static_cast<a_index__Int*>(UP_var_index);
                  lval = Alloc<lvalue::Indexed>(var_name, var_index->i);
                }
                  break;
                case a_index_e::Str: {
                  a_index__Str* var_index = static_cast<a_index__Str*>(UP_var_index);
                  lval = Alloc<lvalue::Keyed>(var_name, var_index->s);
                }
                  break;
                default: {
                  throw Alloc<AssertionError>();
                }
              }
            }
            state::SetLocalShopt(this->mem, lval, Alloc<value::Str>(rhs_str));
          }
          return true;
        }
        else {
          return false;
        }
      }
      else {
        if ((op->op_id == Id::VTest_ColonQMark || op->op_id == Id::VTest_QMark)) {
          if (is_falsey) {
            error_part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
            this->_EvalWordToParts(op->arg_word, quoted, error_part_vals, true);
            error_str = _DecayPartValuesToString(error_part_vals, this->splitter->GetJoinChar());
            e_die(fmt240(error_str), blame_token);
          }
          else {
            return false;
          }
        }
        else {
          throw Alloc<NotImplementedError>(op->op_id);
        }
      }
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_EvalIndirectArrayExpansion(Str* name, Str* index) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  int index_num;
  Str* s;
  StackRoots _roots({&val, &UP_val, &s});

  if (!match::IsValidVarName(name)) {
    return nullptr;
  }
  val = this->mem->GetValue(name);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return Alloc<value::Undef>();
    }
      break;
    case value_e::Str: {
      return nullptr;
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      if ((str_equals(index, str888) || str_equals(index, str889))) {
        return Alloc<value::MaybeStrArray>(val->strs);
      }
      try {
        index_num = to_int(index);
      }
      catch (ValueError*) {
        return nullptr;
      }
      if (index_num < len(val->strs)) {
        return Alloc<value::Str>(val->strs->index(index_num));
      }
      else {
        return Alloc<value::Undef>();
      }
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      if ((str_equals(index, str890) || str_equals(index, str891))) {
        throw Alloc<NotImplementedError>();
      }
      s = val->d->get(index);
      if (s != nullptr) {
        return Alloc<value::Str>(s);
      }
      else {
        return Alloc<value::Undef>();
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_ApplyPrefixOp(runtime_asdl::value_t* val, syntax_asdl::speck* prefix_op, syntax_asdl::Token* token) {
  int op_id;
  runtime_asdl::value_t* UP_val;
  int length;
  int i;
  Str* name;
  Str* index;
  runtime_asdl::value_t* result;
  List<Str*>* indices;
  StackRoots _roots({&UP_val, &name, &index, &result, &indices});

  op_id = prefix_op->id;
  if (op_id == Id::VSub_Pound) {
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        try {
          length = string_ops::CountUtf8Chars(val->s);
        }
        catch (error::Strict* e) {
          e->span_id = token->span_id;
          if (this->exec_opts->strict_word_eval()) {
            throw ;
          }
          else {
            this->errfmt->PrettyPrintError(e, str892);
            return Alloc<value::Str>(str893);
          }
        }
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        length = 0;
        for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            length += 1;
          }
        }
      }
        break;
      case value_e::AssocArray: {
        value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
        length = len(val->d);
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
    return Alloc<value::Str>(str(length));
  }
  else {
    if (op_id == Id::VSub_Bang) {
      UP_val = val;
      switch (val->tag_()) {
        case value_e::Str: {
          value__Str* val = static_cast<value__Str*>(UP_val);
          if (match::IsValidVarName(val->s)) {
            return this->mem->GetValue(val->s);
          }
          try {
            return this->mem->GetArgNum(to_int(val->s));
          }
          catch (ValueError*) {
            ;  // pass
          }
          if ((maybe_str_equals(val->s, str894) || maybe_str_equals(val->s, str895))) {
            return Alloc<value::MaybeStrArray>(this->mem->GetArgv());
          }
          i = val->s->find(str896);
          if ((i >= 0 and str_equals(val->s->index(-1), str897))) {
            name = val->s->slice(0, i);
            index = val->s->slice((i + 1), -1);
            result = this->_EvalIndirectArrayExpansion(name, index);
            if (result != nullptr) {
              return result;
            }
          }
          e_die(fmt241(val->s), token);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          indices = Alloc<List<Str*>>();
          i = 0;
          for (ListIter<Str*> it(val->strs); !it.Done(); it.Next(), ++i) {
            Str* s = it.Value();
            if (s != nullptr) {
              indices->append(str(i));
            }
          }
          return Alloc<value::MaybeStrArray>(indices);
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
          return Alloc<value::MaybeStrArray>(val->d->keys());
        }
          break;
        default: {
          throw Alloc<NotImplementedError>(val->tag_());
        }
      }
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_ApplyUnarySuffixOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op) {
  id_kind_asdl::Kind_t op_kind;
  runtime_asdl::value__Str* arg_val;
  bool extglob;
  runtime_asdl::value_t* UP_val;
  Str* s;
  runtime_asdl::value_t* new_val;
  List<Str*>* strs;
  StackRoots _roots({&op_kind, &arg_val, &UP_val, &s, &new_val, &strs});

  op_kind = consts::GetKind(op->op_id);
  if (op_kind == Kind::VOp1) {
    arg_val = this->EvalWordToString(op->arg_word, quote_e::FnMatch);
    extglob = this->exec_opts->extglob();
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        s = string_ops::DoUnarySuffixOp(val->s, op, arg_val->s, extglob);
        new_val = Alloc<value::Str>(s);
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        strs = Alloc<List<Str*>>();
        for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            strs->append(string_ops::DoUnarySuffixOp(s, op, arg_val->s, extglob));
          }
        }
        new_val = Alloc<value::MaybeStrArray>(strs);
      }
        break;
      case value_e::AssocArray: {
        value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
        strs = Alloc<List<Str*>>();
        for (ListIter<Str*> it(val->d->values()); !it.Done(); it.Next()) {
          Str* s = it.Value();
          strs->append(string_ops::DoUnarySuffixOp(s, op, arg_val->s, extglob));
        }
        new_val = Alloc<value::MaybeStrArray>(strs);
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  else {
    throw Alloc<AssertionError>();
  }
  return new_val;
}

runtime_asdl::value_t* AbstractWordEvaluator::_PatSub(runtime_asdl::value_t* val, syntax_asdl::suffix_op__PatSub* op) {
  runtime_asdl::value__Str* pat_val;
  runtime_asdl::value__Str* replace_val;
  Str* replace_str;
  Str* regex;
  List<Str*>* warnings;
  string_ops::GlobReplacer* replacer;
  Str* s;
  List<Str*>* strs;
  StackRoots _roots({&pat_val, &replace_val, &replace_str, &regex, &warnings, &replacer, &s, &val, &strs});

  pat_val = this->EvalWordToString(op->pat, quote_e::FnMatch);
  if (op->replace) {
    replace_val = this->EvalWordToString(op->replace);
    replace_str = replace_val->s;
  }
  else {
    replace_str = str899;
  }
  Tuple2<Str*, List<Str*>*> tup1 = glob_::GlobToERE(pat_val->s);
  regex = tup1.at0();
  warnings = tup1.at1();
  if (len(warnings)) {
    ;  // pass
  }
  replacer = Alloc<string_ops::GlobReplacer>(regex, replace_str, op->spids->index(0));
  switch (val->tag_()) {
    case value_e::Str: {
      value__Str* str_val = static_cast<value__Str*>(val);
      s = replacer->Replace(str_val->s, op);
      val = Alloc<value::Str>(s);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
      strs = Alloc<List<Str*>>();
      for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
        Str* s = it.Value();
        if (s != nullptr) {
          strs->append(replacer->Replace(s, op));
        }
      }
      val = Alloc<value::MaybeStrArray>(strs);
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
      strs = Alloc<List<Str*>>();
      for (ListIter<Str*> it(assoc_val->d->values()); !it.Done(); it.Next()) {
        Str* s = it.Value();
        strs->append(replacer->Replace(s, op));
      }
      val = Alloc<value::MaybeStrArray>(strs);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return val;
}

runtime_asdl::value_t* AbstractWordEvaluator::_Slice(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Slice* op, Str* var_name, syntax_asdl::braced_var_sub* part) {
  int begin;
  bool has_length;
  int length;
  runtime_asdl::value__Str* arg0_val;
  StackRoots _roots({&arg0_val, &val});

  if (op->begin) {
    begin = this->arith_ev->EvalToInt(op->begin);
  }
  else {
    begin = 0;
  }
  has_length = false;
  length = -1;
  if (op->length) {
    has_length = true;
    length = this->arith_ev->EvalToInt(op->length);
  }
  try {
    arg0_val = nullptr;
    if (var_name == nullptr) {
      arg0_val = this->mem->GetArg0();
    }
    val = _PerformSlice(val, begin, length, has_length, part, arg0_val);
  }
  catch (error::Strict* e) {
    if (this->exec_opts->strict_word_eval()) {
      throw ;
    }
    else {
      this->errfmt->PrettyPrintError(e, str900);
      switch (val->tag_()) {
        case value_e::Str: {
          val = Alloc<value::Str>(str901);
        }
          break;
        case value_e::MaybeStrArray: {
          val = Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
        }
          break;
        default: {
          throw Alloc<NotImplementedError>();
        }
      }
    }
  }
  return val;
}

Tuple2<runtime_asdl::value__Str*, bool> AbstractWordEvaluator::_Nullary(runtime_asdl::value_t* val, syntax_asdl::Token* op, Str* var_name) {
  runtime_asdl::value_t* UP_val;
  bool quoted2;
  int op_id;
  Str* prompt;
  Str* p;
  runtime_asdl::value__Str* result;
  List<Str*>* tmp;
  List<Str*>* chars;
  runtime_asdl::cell* cell;
  StackRoots _roots({&UP_val, &prompt, &p, &result, &tmp, &chars, &cell});

  UP_val = val;
  quoted2 = false;
  op_id = op->id;
  if (op_id == Id::VOp0_P) {
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* str_val = static_cast<value__Str*>(UP_val);
        prompt = this->prompt_ev->EvalPrompt(str_val);
        p = prompt->replace(str902, str903)->replace(str904, str905);
        result = Alloc<value::Str>(p);
      }
        break;
      default: {
        e_die(fmt242(ui::ValType(val)));
      }
    }
  }
  else {
    if (op_id == Id::VOp0_Q) {
      switch (val->tag_()) {
        case value_e::Str: {
          value__Str* str_val = static_cast<value__Str*>(UP_val);
          result = Alloc<value::Str>(qsn::maybe_shell_encode(str_val->s));
          quoted2 = true;
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
          tmp = Alloc<List<Str*>>();
          for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            tmp->append(qsn::maybe_shell_encode(s));
          }
          result = Alloc<value::Str>(str907->join(tmp));
        }
          break;
        default: {
          e_die(fmt243(ui::ValType(val)));
        }
      }
    }
    else {
      if (op_id == Id::VOp0_a) {
        chars = Alloc<List<Str*>>();
        switch (val->tag_()) {
          case value_e::MaybeStrArray: {
            chars->append(str909);
          }
            break;
          case value_e::AssocArray: {
            chars->append(str910);
          }
            break;
        }
        if (var_name != nullptr) {
          cell = this->mem->GetCell(var_name);
          if (cell) {
            if (cell->readonly) {
              chars->append(str911);
            }
            if (cell->exported) {
              chars->append(str912);
            }
            if (cell->nameref) {
              chars->append(str913);
            }
          }
        }
        result = Alloc<value::Str>(str914->join(chars));
      }
      else {
        e_die(fmt244(op->val), op);
      }
    }
  }
  return (Tuple2<runtime_asdl::value__Str*, bool>(result, quoted2));
}

Tuple2<runtime_asdl::value_t*, bool> AbstractWordEvaluator::_WholeArray(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part, bool quoted) {
  int op_id;
  bool maybe_decay_array;
  runtime_asdl::value_t* UP_val;
  StackRoots _roots({&UP_val, &val});

  bracket_op__WholeArray* bracket_op = static_cast<bracket_op__WholeArray*>(part->bracket_op);
  op_id = bracket_op->op_id;
  if (op_id == Id::Lit_At) {
    maybe_decay_array = !quoted;
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        val = this->_EmptyMaybeStrArrayOrError(part->token);
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        e_die(fmt245(), part);
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        val = Alloc<value::MaybeStrArray>(val->strs);
      }
        break;
    }
  }
  else {
    if (op_id == Id::Arith_Star) {
      maybe_decay_array = true;
      UP_val = val;
      switch (val->tag_()) {
        case value_e::Undef: {
          val = this->_EmptyMaybeStrArrayOrError(part->token);
        }
          break;
        case value_e::Str: {
          value__Str* val = static_cast<value__Str*>(UP_val);
          e_die(fmt246(), part);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          val = Alloc<value::MaybeStrArray>(val->strs);
        }
          break;
      }
    }
    else {
      throw Alloc<AssertionError>();
    }
  }
  return (Tuple2<runtime_asdl::value_t*, bool>(val, maybe_decay_array));
}

Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*> AbstractWordEvaluator::_ArrayIndex(runtime_asdl::value_t* val, syntax_asdl::braced_var_sub* part) {
  runtime_asdl::a_index_t* var_index;
  syntax_asdl::arith_expr_t* anode;
  runtime_asdl::value_t* UP_val;
  int index;
  Str* s;
  Str* key;
  StackRoots _roots({&var_index, &anode, &UP_val, &s, &val, &key});

  var_index = nullptr;
  bracket_op__ArrayIndex* bracket_op = static_cast<bracket_op__ArrayIndex*>(part->bracket_op);
  anode = bracket_op->expr;
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      ;  // pass
    }
      break;
    case value_e::Str: {
      e_die(fmt247(part->token->val), part->token);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
      index = this->arith_ev->EvalToInt(anode);
      var_index = Alloc<a_index::Int>(index);
      s = GetArrayItem(array_val->strs, index);
      if (s == nullptr) {
        val = Alloc<value::Undef>();
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* assoc_val = static_cast<value__AssocArray*>(UP_val);
      key = this->arith_ev->EvalWordToString(anode);
      var_index = Alloc<a_index::Str>(key);
      s = assoc_val->d->get(key);
      if (s == nullptr) {
        val = Alloc<value::Undef>();
      }
      else {
        val = Alloc<value::Str>(s);
      }
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  return (Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*>(val, var_index));
}

void AbstractWordEvaluator::_EvalDoubleQuoted(List<syntax_asdl::word_part_t*>* parts, List<runtime_asdl::part_value_t*>* part_vals) {
  runtime_asdl::part_value__String* v;
  StackRoots _roots({&v});

  if (len(parts) == 0) {
    v = Alloc<part_value::String>(str919, true, false);
    part_vals->append(v);
    return ;
  }
  for (ListIter<syntax_asdl::word_part_t*> it(parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* p = it.Value();
    this->_EvalWordPart(p, part_vals, true);
  }
}

Str* AbstractWordEvaluator::EvalDoubleQuotedToString(syntax_asdl::double_quoted* dq_part) {
  List<runtime_asdl::part_value_t*>* part_vals;
  StackRoots _roots({&part_vals});

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalDoubleQuoted(dq_part->parts, part_vals);
  return this->_PartValsToString(part_vals, dq_part->left->span_id);
}

runtime_asdl::value__Str* AbstractWordEvaluator::_DecayArray(runtime_asdl::value__MaybeStrArray* val) {
  Str* sep;
  List<Str*>* tmp;
  StackRoots _roots({&sep, &tmp});

  sep = this->splitter->GetJoinChar();
  tmp = Alloc<List<Str*>>();
  for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
    Str* s = it.Value();
    if (s != nullptr) {
      tmp->append(s);
    }
  }
  return Alloc<value::Str>(sep->join(tmp));
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyStrOrError(runtime_asdl::value_t* val, syntax_asdl::Token* token) {
  Str* name;
  StackRoots _roots({&name});

  if (val->tag_() != value_e::Undef) {
    return val;
  }
  if (!this->exec_opts->nounset()) {
    return Alloc<value::Str>(str920);
  }
  name = token->val->startswith(str921) ? token->val->slice(1) : token->val;
  e_die(fmt248(name), token);
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyMaybeStrArrayOrError(syntax_asdl::Token* token) {
  if (this->exec_opts->nounset()) {
    e_die(fmt249(token->val), token);
  }
  else {
    return Alloc<value::MaybeStrArray>(Alloc<List<Str*>>());
  }
}

void AbstractWordEvaluator::_EvalBracedVarSub(syntax_asdl::braced_var_sub* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  bool maybe_decay_array;
  Str* var_name;
  List<Str*>* names;
  Str* sep;
  runtime_asdl::value_t* val;
  int var_num;
  runtime_asdl::a_index_t* var_index;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::bracket_op_t* UP_bracket_op;
  syntax_asdl::suffix_op_t* tmp;
  bool undef_check;
  syntax_asdl::suffix_op_t* suffix_op;
  syntax_asdl::suffix_op_t* UP_op;
  bool quoted2;
  syntax_asdl::suffix_op_t* op;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::part_value_t* part_val;
  StackRoots _roots({&var_name, &names, &sep, &val, &var_index, &bracket_op, &UP_bracket_op, &tmp, &suffix_op, &UP_op, &op, &UP_val, &part_val});

  maybe_decay_array = false;
  var_name = nullptr;
  if (part->token->id == Id::VSub_Name) {
    if ((part->prefix_op != nullptr and (part->bracket_op == nullptr and (part->suffix_op != nullptr and part->suffix_op->tag_() == suffix_op_e::Nullary)))) {
      Token* suffix_op_ = static_cast<Token*>(part->suffix_op);
      if (consts::GetKind(suffix_op_->id) == Kind::VOp3) {
        names = this->mem->VarNamesStartingWith(part->token->val);
        names->sort();
        Token* suffix_op_ = static_cast<Token*>(part->suffix_op);
        if ((quoted and suffix_op_->id == Id::VOp3_At)) {
          part_vals->append(Alloc<part_value::Array>(names));
        }
        else {
          sep = this->splitter->GetJoinChar();
          part_vals->append(Alloc<part_value::String>(sep->join(names), quoted, true));
        }
        return ;
      }
    }
    var_name = part->token->val;
    val = this->mem->GetValue(var_name);
  }
  else {
    if (part->token->id == Id::VSub_Number) {
      var_num = to_int(part->token->val);
      val = this->_EvalVarNum(var_num);
    }
    else {
      Tuple2<runtime_asdl::value_t*, bool> tup2 = this->_EvalSpecialVar(part->token->id, quoted);
      val = tup2.at0();
      maybe_decay_array = tup2.at1();
    }
  }
  var_index = nullptr;
  if (part->bracket_op) {
    bracket_op = part->bracket_op;
    UP_bracket_op = bracket_op;
    switch (bracket_op->tag_()) {
      case bracket_op_e::WholeArray: {
        Tuple2<runtime_asdl::value_t*, bool> tup3 = this->_WholeArray(val, part, quoted);
        val = tup3.at0();
        maybe_decay_array = tup3.at1();
      }
        break;
      case bracket_op_e::ArrayIndex: {
        bracket_op__ArrayIndex* bracket_op = static_cast<bracket_op__ArrayIndex*>(UP_bracket_op);
        Tuple2<runtime_asdl::value_t*, runtime_asdl::a_index_t*> tup4 = this->_ArrayIndex(val, part);
        val = tup4.at0();
        var_index = tup4.at1();
      }
        break;
      default: {
        throw Alloc<AssertionError>();
      }
    }
  }
  else {
    if ((var_name and (val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray))) {
      if (CheckCompatArray(var_name, this->exec_opts, !(part->prefix_op or part->suffix_op))) {
        val = ResolveCompatArray(val);
      }
      else {
        tmp = part->suffix_op;
        if ((tmp and (tmp->tag_() == suffix_op_e::Nullary and static_cast<Token*>(tmp)->id == Id::VOp0_a))) {
          ;  // pass
        }
        else {
          e_die(fmt250(var_name), part);
        }
      }
    }
  }
  undef_check = true;
  suffix_op = part->suffix_op;
  UP_op = suffix_op;
  if ((suffix_op != nullptr and suffix_op->tag_() == suffix_op_e::Unary)) {
    suffix_op__Unary* suffix_op = static_cast<suffix_op__Unary*>(UP_op);
    if (consts::GetKind(suffix_op->op_id) == Kind::VTest) {
      undef_check = false;
    }
  }
  if (undef_check) {
    val = this->_EmptyStrOrError(val, part->token);
  }
  if (part->prefix_op) {
    val = this->_ApplyPrefixOp(val, part->prefix_op, part->token);
  }
  quoted2 = false;
  if (suffix_op) {
    op = suffix_op;
    switch (suffix_op->tag_()) {
      case suffix_op_e::Nullary: {
        Token* op = static_cast<Token*>(UP_op);
        Tuple2<runtime_asdl::value__Str*, bool> tup5 = this->_Nullary(val, op, var_name);
        val = tup5.at0();
        quoted2 = tup5.at1();
      }
        break;
      case suffix_op_e::Unary: {
        suffix_op__Unary* op = static_cast<suffix_op__Unary*>(UP_op);
        if (consts::GetKind(op->op_id) == Kind::VTest) {
          if (this->_ApplyTestOp(val, op, quoted, part_vals, var_name, var_index, part->token)) {
            return ;
          }
        }
        else {
          val = this->_ApplyUnarySuffixOp(val, op);
        }
      }
        break;
      case suffix_op_e::PatSub: {
        suffix_op__PatSub* op = static_cast<suffix_op__PatSub*>(UP_op);
        val = this->_PatSub(val, op);
      }
        break;
      case suffix_op_e::Slice: {
        suffix_op__Slice* op = static_cast<suffix_op__Slice*>(UP_op);
        val = this->_Slice(val, op, var_name, part);
      }
        break;
    }
  }
  UP_val = val;
  if (val->tag_() == value_e::MaybeStrArray) {
    value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
    if (maybe_decay_array) {
      val = this->_DecayArray(array_val);
    }
    else {
      val = array_val;
    }
  }
  part_val = _ValueToPartValue(val, (quoted or quoted2));
  part_vals->append(part_val);
}

Str* AbstractWordEvaluator::_PartValsToString(List<runtime_asdl::part_value_t*>* part_vals, int span_id) {
  List<Str*>* strs;
  runtime_asdl::part_value_t* UP_part_val;
  Str* s;
  List<Str*>* tmp;
  StackRoots _roots({&strs, &UP_part_val, &s, &tmp});

  strs = Alloc<List<Str*>>();
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* part_val = it.Value();
    UP_part_val = part_val;
    switch (part_val->tag_()) {
      case part_value_e::String: {
        part_value__String* part_val = static_cast<part_value__String*>(UP_part_val);
        s = part_val->s;
      }
        break;
      case part_value_e::Array: {
        part_value__Array* part_val = static_cast<part_value__Array*>(UP_part_val);
        if (this->exec_opts->strict_array()) {
          e_die(fmt251(), span_id);
        }
        else {
          tmp = Alloc<List<Str*>>();
          for (ListIter<Str*> it(part_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            if (s != nullptr) {
              tmp->append(s);
            }
          }
          s = str926->join(tmp);
        }
      }
        break;
    }
    strs->append(s);
  }
  return str927->join(strs);
}

Str* AbstractWordEvaluator::EvalBracedVarSubToString(syntax_asdl::braced_var_sub* part) {
  List<runtime_asdl::part_value_t*>* part_vals;
  StackRoots _roots({&part_vals});

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalBracedVarSub(part, part_vals, false);
  return this->_PartValsToString(part_vals, part->spids->index(0));
}

void AbstractWordEvaluator::_EvalSimpleVarSub(syntax_asdl::Token* token, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  bool maybe_decay_array;
  Str* var_name;
  runtime_asdl::value_t* val;
  int var_num;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::part_value_t* v;
  StackRoots _roots({&var_name, &val, &UP_val, &v});

  maybe_decay_array = false;
  if (token->id == Id::VSub_DollarName) {
    var_name = token->val->slice(1);
    val = this->mem->GetValue(var_name);
    if ((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray)) {
      if (CheckCompatArray(var_name, this->exec_opts)) {
        val = ResolveCompatArray(val);
      }
      else {
        e_die(fmt252(var_name), token);
      }
    }
  }
  else {
    if (token->id == Id::VSub_Number) {
      var_num = to_int(token->val->slice(1));
      val = this->_EvalVarNum(var_num);
    }
    else {
      Tuple2<runtime_asdl::value_t*, bool> tup6 = this->_EvalSpecialVar(token->id, quoted);
      val = tup6.at0();
      maybe_decay_array = tup6.at1();
    }
  }
  val = this->_EmptyStrOrError(val, token);
  UP_val = val;
  if (val->tag_() == value_e::MaybeStrArray) {
    value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
    if (maybe_decay_array) {
      val = this->_DecayArray(array_val);
    }
    else {
      val = array_val;
    }
  }
  v = _ValueToPartValue(val, quoted);
  part_vals->append(v);
}

Str* AbstractWordEvaluator::EvalSimpleVarSubToString(syntax_asdl::Token* tok) {
  List<runtime_asdl::part_value_t*>* part_vals;
  StackRoots _roots({&part_vals});

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalSimpleVarSub(tok, part_vals, false);
  return this->_PartValsToString(part_vals, tok->span_id);
}

void AbstractWordEvaluator::_EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  _EvalWordPart(part, part_vals, quoted, false);
}

void AbstractWordEvaluator::_EvalWordPart(syntax_asdl::word_part_t* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted, bool is_subst) {
  syntax_asdl::word_part_t* UP_part;
  runtime_asdl::part_value__String* v;
  Str* tval;
  Str* s;
  int id_;
  runtime_asdl::part_value_t* sv;
  int num;
  syntax_asdl::Token* op;
  Str* op_str;
  int i;
  Str* var_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* items;
  StackRoots _roots({&UP_part, &v, &tval, &s, &sv, &op, &op_str, &var_name, &val, &UP_val, &items});

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      e_die(fmt253(), part);
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      word_part__AssocArrayLiteral* part = static_cast<word_part__AssocArrayLiteral*>(UP_part);
      e_die(fmt254(), part);
    }
      break;
    case word_part_e::Literal: {
      Token* part = static_cast<Token*>(UP_part);
      v = Alloc<part_value::String>(part->val, quoted, is_subst);
      part_vals->append(v);
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      tval = part->token->val;
      s = tval->index(1);
      v = Alloc<part_value::String>(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      s = word_compile::EvalSingleQuoted(part);
      v = Alloc<part_value::String>(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      this->_EvalDoubleQuoted(part->parts, part_vals);
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      id_ = part->left_token->id;
      if ((id_ == Id::Left_DollarParen || id_ == Id::Left_AtParen || id_ == Id::Left_Backtick)) {
        sv = this->_EvalCommandSub(part, quoted);
      }
      else {
        if ((id_ == Id::Left_ProcSubIn || id_ == Id::Left_ProcSubOut)) {
          sv = this->_EvalProcessSub(part);
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
      part_vals->append(sv);
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      this->_EvalSimpleVarSub(part->token, part_vals, quoted);
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      this->_EvalBracedVarSub(part, part_vals, quoted);
    }
      break;
    case word_part_e::TildeSub: {
      word_part__TildeSub* part = static_cast<word_part__TildeSub*>(UP_part);
      s = this->tilde_ev->Eval(part->token);
      v = Alloc<part_value::String>(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      num = this->arith_ev->EvalToInt(part->anode);
      v = Alloc<part_value::String>(str(num), quoted, !quoted);
      part_vals->append(v);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      op = part->op;
      if (op->id == Id::ExtGlob_Comma) {
        op_str = str931;
      }
      else {
        op_str = op->val;
      }
      part_vals->append(Alloc<part_value::String>(op_str, false, false));
      i = 0;
      for (ListIter<syntax_asdl::compound_word*> it(part->arms); !it.Done(); it.Next(), ++i) {
        syntax_asdl::compound_word* w = it.Value();
        if (i != 0) {
          part_vals->append(Alloc<part_value::String>(str932, false, false));
        }
        this->_EvalWordToParts(w, false, part_vals);
      }
      part_vals->append(Alloc<part_value::String>(str933, false, false));
    }
      break;
    case word_part_e::Splice: {
      word_part__Splice* part = static_cast<word_part__Splice*>(UP_part);
      var_name = part->name->val->slice(1);
      val = this->mem->GetValue(var_name);
      UP_val = val;
      switch (val->tag_()) {
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          items = val->strs;
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
          items = val->d->keys();
        }
          break;
        case value_e::Obj: {
          // if not PYTHON
          {
            throw Alloc<AssertionError>();
          }
          // endif MYCPP
        }
          break;
        default: {
          e_die(fmt255(var_name), part);
        }
      }
      part_vals->append(Alloc<part_value::Array>(items));
    }
      break;
    case word_part_e::FuncCall: {
      word_part__FuncCall* part = static_cast<word_part__FuncCall*>(UP_part);
    }
      break;
    case word_part_e::ExprSub: {
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

void AbstractWordEvaluator::_EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals) {
  _EvalWordToParts(w, quoted, part_vals, false);
}

void AbstractWordEvaluator::_EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, bool is_subst) {
  syntax_asdl::word_t* UP_w;
  StackRoots _roots({&UP_w});

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
        syntax_asdl::word_part_t* p = it.Value();
        this->_EvalWordPart(p, part_vals, quoted, is_subst);
      }
    }
      break;
    case word_e::Empty: {
      part_vals->append(Alloc<part_value::String>(str935, quoted, !quoted));
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalWordToPattern(syntax_asdl::word_t* UP_w) {
  ;  // pass
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalWordToString(syntax_asdl::word_t* UP_w) {
  return EvalWordToString(UP_w, quote_e::Default);
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalWordToString(syntax_asdl::word_t* UP_w, runtime_asdl::quote_t quote_kind) {
  List<runtime_asdl::part_value_t*>* part_vals;
  List<Str*>* strs;
  runtime_asdl::part_value_t* UP_part_val;
  Str* s;
  List<Str*>* tmp;
  StackRoots _roots({&part_vals, &strs, &UP_part_val, &s, &tmp});

  if (UP_w->tag_() == word_e::Empty) {
    return Alloc<value::Str>(str936);
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* p = it.Value();
    this->_EvalWordPart(p, part_vals, false);
  }
  strs = Alloc<List<Str*>>();
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* part_val = it.Value();
    UP_part_val = part_val;
    switch (part_val->tag_()) {
      case part_value_e::String: {
        part_value__String* part_val = static_cast<part_value__String*>(UP_part_val);
        s = part_val->s;
        if (part_val->quoted) {
          if (quote_kind == quote_e::FnMatch) {
            s = glob_::GlobEscape(s);
          }
          else {
            if (quote_kind == quote_e::ERE) {
              s = glob_::ExtendedRegexEscape(s);
            }
          }
        }
      }
        break;
      case part_value_e::Array: {
        part_value__Array* part_val = static_cast<part_value__Array*>(UP_part_val);
        if (this->exec_opts->strict_array()) {
          e_die(fmt256(), w);
        }
        else {
          tmp = Alloc<List<Str*>>();
          for (ListIter<Str*> it(part_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            if (s != nullptr) {
              tmp->append(s);
            }
          }
          s = str938->join(tmp);
        }
      }
        break;
    }
    strs->append(s);
  }
  return Alloc<value::Str>(str939->join(strs));
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalForPlugin(syntax_asdl::compound_word* w) {
  runtime_asdl::value__Str* val;
  StackRoots _roots({&val});

  {  // with
    state::ctx_Status ctx(this->mem);

    try {
      val = this->EvalWordToString(w);
    }
    catch (error::FatalRuntime* e) {
      val = Alloc<value::Str>(fmt257(e->UserErrorString()));
    }
    catch (_OSError* e) {
      val = Alloc<value::Str>(fmt258(pyutil::strerror(e)));
    }
    catch (KeyboardInterrupt*) {
      val = Alloc<value::Str>(str942);
    }
  }
  return val;
}

runtime_asdl::value_t* AbstractWordEvaluator::EvalRhsWord(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part0;
  syntax_asdl::word_part_t* UP_part0;
  int tag;
  List<syntax_asdl::word_t*>* array_words;
  List<syntax_asdl::compound_word*>* words;
  List<Str*>* strs;
  Dict<Str*, Str*>* d;
  int n;
  int i;
  runtime_asdl::value__Str* k;
  runtime_asdl::value__Str* v;
  StackRoots _roots({&part0, &UP_part0, &array_words, &words, &strs, &d, &k, &v});

  if (UP_w->tag_() == word_e::Empty) {
    return Alloc<value::Str>(str943);
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) == 1) {
    part0 = w->parts->index(0);
    UP_part0 = part0;
    tag = part0->tag_();
    if (tag == word_part_e::ShArrayLiteral) {
      sh_array_literal* part0 = static_cast<sh_array_literal*>(UP_part0);
      array_words = part0->words;
      words = braces::BraceExpandWords(array_words);
      strs = this->EvalWordSequence(words);
      return Alloc<value::MaybeStrArray>(strs);
    }
    if (tag == word_part_e::AssocArrayLiteral) {
      word_part__AssocArrayLiteral* part0 = static_cast<word_part__AssocArrayLiteral*>(UP_part0);
      d = Alloc<Dict<Str*, Str*>>();
      n = len(part0->pairs);
      i = 0;
      while (i < n) {
        k = this->EvalWordToString(part0->pairs->index(i));
        v = this->EvalWordToString(part0->pairs->index((i + 1)));
        d->set(k->s, v->s);
        i += 2;
      }
      return Alloc<value::AssocArray>(d);
    }
  }
  return this->EvalWordToString(w);
}

void AbstractWordEvaluator::_EvalWordFrame(List<Tuple3<Str*, bool, bool>*>* frame, List<Str*>* argv) {
  bool all_empty;
  bool all_quoted;
  bool any_quoted;
  Str* s;
  bool quoted;
  List<Str*>* tmp;
  Str* a;
  bool will_glob;
  List<Str*>* frags;
  Str* frag;
  bool do_split;
  Str* flat;
  List<Str*>* args;
  StackRoots _roots({&s, &tmp, &a, &frags, &frag, &flat, &args});

  all_empty = true;
  all_quoted = true;
  any_quoted = false;
  for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
    Tuple3<Str*, bool, bool>* tup7 = it.Value();
    s = tup7->at0();
    quoted = tup7->at1();
    if (len(s)) {
      all_empty = false;
    }
    if (quoted) {
      any_quoted = true;
    }
    else {
      all_quoted = false;
    }
  }
  if ((all_empty and !any_quoted)) {
    return ;
  }
  if (all_quoted) {
    tmp = Alloc<List<Str*>>();
    for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
      Tuple3<Str*, bool, bool>* tup8 = it.Value();
      s = tup8->at0();
      tmp->append(s);
    }
    a = str944->join(tmp);
    argv->append(a);
    return ;
  }
  will_glob = !this->exec_opts->noglob();
  frags = Alloc<List<Str*>>();
  for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
    Tuple3<Str*, bool, bool>* tup9 = it.Value();
    frag = tup9->at0();
    quoted = tup9->at1();
    do_split = tup9->at2();
    if ((will_glob and quoted)) {
      frag = glob_::GlobEscape(frag);
    }
    else {
      frag = _BackslashEscape(frag);
    }
    if (do_split) {
      frag = _BackslashEscape(frag);
    }
    else {
      frag = this->splitter->Escape(frag);
    }
    frags->append(frag);
  }
  flat = str945->join(frags);
  args = this->splitter->SplitForWordEval(flat);
  if ((!args and any_quoted)) {
    argv->append(str946);
    return ;
  }
  for (ListIter<Str*> it(args); !it.Done(); it.Next()) {
    Str* a = it.Value();
    this->globber->Expand(a, argv);
  }
}

List<Str*>* AbstractWordEvaluator::_EvalWordToArgv(syntax_asdl::compound_word* w) {
  List<runtime_asdl::part_value_t*>* part_vals;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  List<Str*>* argv;
  List<Str*>* tmp;
  Str* s;
  StackRoots _roots({&part_vals, &frames, &argv, &tmp, &s});

  part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
  this->_EvalWordToParts(w, false, part_vals);
  frames = _MakeWordFrames(part_vals);
  argv = Alloc<List<Str*>>();
  for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
    List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
    if (len(frame)) {
      tmp = Alloc<List<Str*>>();
      for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
        Tuple3<Str*, bool, bool>* tup10 = it.Value();
        s = tup10->at0();
        tmp->append(s);
      }
      argv->append(str947->join(tmp));
    }
  }
  return argv;
}

runtime_asdl::cmd_value__Assign* AbstractWordEvaluator::_EvalAssignBuiltin(int builtin_id, Str* arg0, List<syntax_asdl::compound_word*>* words) {
  bool eval_to_pairs;
  bool started_pairs;
  List<Str*>* flags;
  List<int>* flag_spids;
  List<runtime_asdl::assign_arg*>* assign_args;
  int n;
  syntax_asdl::compound_word* w;
  int word_spid;
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;
  Str* tok_val;
  Str* var_name;
  syntax_asdl::word_t* rhs_word;
  syntax_asdl::compound_word* tmp;
  runtime_asdl::value_t* right;
  runtime_asdl::assign_arg* arg2;
  List<Str*>* argv;
  Str* left;
  StackRoots _roots({&flags, &flag_spids, &assign_args, &w, &left_token, &close_token, &tok_val, &var_name, &rhs_word, &tmp, &right, &arg2, &argv, &left});

  eval_to_pairs = true;
  started_pairs = false;
  flags = Alloc<List<Str*>>(std::initializer_list<Str*>{arg0});
  flag_spids = Alloc<List<int>>(std::initializer_list<int>{word_::LeftMostSpanForWord(words->index(0))});
  assign_args = Alloc<List<runtime_asdl::assign_arg*>>();
  n = len(words);
  for (int i = 1; i < n; ++i) {
    w = words->index(i);
    word_spid = word_::LeftMostSpanForWord(w);
    if (word_::IsVarLike(w)) {
      started_pairs = true;
    }
    if (started_pairs) {
      Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> tup11 = word_::DetectShAssignment(w);
      left_token = tup11.at0();
      close_token = tup11.at1();
      part_offset = tup11.at2();
      if (left_token) {
        if (left_token->id != Id::Lit_VarLike) {
          e_die(fmt259(), w);
        }
        tok_val = left_token->val;
        if (str_equals(tok_val->index(-2), str949)) {
          e_die(fmt260(), w);
        }
        var_name = tok_val->slice(0, -1);
        if (part_offset == len(w->parts)) {
          rhs_word = Alloc<word::Empty>();
        }
        else {
          tmp = Alloc<compound_word>(w->parts->slice(part_offset));
          word_::TildeDetectAssign(tmp);
          rhs_word = tmp;
        }
        {  // with
          state::ctx_AssignBuiltin ctx(this->mutable_opts);

          right = this->EvalRhsWord(rhs_word);
        }
        arg2 = Alloc<assign_arg>(var_name, right, word_spid);
        assign_args->append(arg2);
      }
      else {
        argv = this->_EvalWordToArgv(w);
        for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
          Str* arg = it.Value();
          Tuple2<Str*, runtime_asdl::value__Str*> tup12 = _SplitAssignArg(arg, w);
          left = tup12.at0();
          right = tup12.at1();
          arg2 = Alloc<assign_arg>(left, right, word_spid);
          assign_args->append(arg2);
        }
      }
    }
    else {
      argv = this->_EvalWordToArgv(w);
      for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
        Str* arg = it.Value();
        if ((arg->startswith(str951) or arg->startswith(str952))) {
          flags->append(arg);
          flag_spids->append(word_spid);
          if ((str_contains(arg, str953) or str_contains(arg, str954))) {
            eval_to_pairs = false;
          }
        }
        else {
          if (eval_to_pairs) {
            Tuple2<Str*, runtime_asdl::value__Str*> tup13 = _SplitAssignArg(arg, w);
            left = tup13.at0();
            right = tup13.at1();
            arg2 = Alloc<assign_arg>(left, right, word_spid);
            assign_args->append(arg2);
            started_pairs = true;
          }
          else {
            flags->append(arg);
          }
        }
      }
    }
  }
  return Alloc<cmd_value::Assign>(builtin_id, flags, flag_spids, assign_args);
}

runtime_asdl::cmd_value_t* AbstractWordEvaluator::StaticEvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign) {
  List<Str*>* strs;
  List<int>* spids;
  int n;
  int i;
  int word_spid;
  List<Str*>* strs0;
  Str* arg0;
  int builtin_id;
  runtime_asdl::value__Str* val;
  int num_appended;
  List<runtime_asdl::part_value_t*>* part_vals;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  List<Str*>* tmp;
  Str* s;
  StackRoots _roots({&strs, &spids, &strs0, &arg0, &val, &part_vals, &frames, &tmp, &s});

  strs = Alloc<List<Str*>>();
  spids = Alloc<List<int>>();
  n = 0;
  i = 0;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next(), ++i) {
    syntax_asdl::compound_word* w = it.Value();
    word_spid = word_::LeftMostSpanForWord(w);
    if (i == 0) {
      strs0 = this->_EvalWordToArgv(w);
      if (len(strs0) == 1) {
        arg0 = strs0->index(0);
        builtin_id = consts::LookupAssignBuiltin(arg0);
        if (builtin_id != consts::NO_INDEX) {
          return this->_EvalAssignBuiltin(builtin_id, arg0, words);
        }
      }
      strs->extend(strs0);
      for (ListIter<Str*> it(strs0); !it.Done(); it.Next()) {
        Str* _ = it.Value();
        spids->append(word_spid);
      }
      continue;
    }
    if (glob_::LooksLikeStaticGlob(w)) {
      val = this->EvalWordToString(w);
      num_appended = this->globber->Expand(val->s, strs);
      for (int _ = 0; _ < num_appended; ++_) {
        spids->append(word_spid);
      }
      continue;
    }
    part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
    this->_EvalWordToParts(w, false, part_vals);
    frames = _MakeWordFrames(part_vals);
    for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
      List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
      if (len(frame)) {
        tmp = Alloc<List<Str*>>();
        for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
          Tuple3<Str*, bool, bool>* tup14 = it.Value();
          s = tup14->at0();
          tmp->append(s);
        }
        strs->append(str955->join(tmp));
        spids->append(word_spid);
      }
    }
  }
  return Alloc<cmd_value::Argv>(strs, spids, nullptr);
}

runtime_asdl::cmd_value_t* AbstractWordEvaluator::EvalWordSequence2(List<syntax_asdl::compound_word*>* words) {
  return EvalWordSequence2(words, false);
}

runtime_asdl::cmd_value_t* AbstractWordEvaluator::EvalWordSequence2(List<syntax_asdl::compound_word*>* words, bool allow_assign) {
  List<Str*>* strs;
  List<int>* spids;
  int n;
  int i;
  List<runtime_asdl::part_value_t*>* part_vals;
  runtime_asdl::part_value_t* val0;
  runtime_asdl::part_value_t* UP_val0;
  int builtin_id;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  int n_next;
  int spid;
  StackRoots _roots({&strs, &spids, &part_vals, &val0, &UP_val0, &frames});

  if (this->exec_opts->simple_word_eval()) {
    return this->StaticEvalWordSequence2(words, allow_assign);
  }
  strs = Alloc<List<Str*>>();
  spids = Alloc<List<int>>();
  n = 0;
  i = 0;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next(), ++i) {
    syntax_asdl::compound_word* w = it.Value();
    part_vals = Alloc<List<runtime_asdl::part_value_t*>>();
    this->_EvalWordToParts(w, false, part_vals);
    if ((allow_assign and (i == 0 and len(part_vals) == 1))) {
      val0 = part_vals->index(0);
      UP_val0 = val0;
      if (val0->tag_() == part_value_e::String) {
        part_value__String* val0 = static_cast<part_value__String*>(UP_val0);
        if (!val0->quoted) {
          builtin_id = consts::LookupAssignBuiltin(val0->s);
          if (builtin_id != consts::NO_INDEX) {
            return this->_EvalAssignBuiltin(builtin_id, val0->s, words);
          }
        }
      }
    }
    frames = _MakeWordFrames(part_vals);
    for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
      List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
      this->_EvalWordFrame(frame, strs);
    }
    n_next = len(strs);
    spid = word_::LeftMostSpanForWord(w);
    for (int _ = 0; _ < (n_next - n); ++_) {
      spids->append(spid);
    }
    n = n_next;
  }
  return Alloc<cmd_value::Argv>(strs, spids, nullptr);
}

List<Str*>* AbstractWordEvaluator::EvalWordSequence(List<syntax_asdl::compound_word*>* words) {
  runtime_asdl::cmd_value_t* UP_cmd_val;
  StackRoots _roots({&UP_cmd_val});

  UP_cmd_val = this->EvalWordSequence2(words);
  cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
  return cmd_val->argv;
}

Tuple2<Str*, runtime_asdl::value__Str*> _SplitAssignArg(Str* arg, syntax_asdl::compound_word* w) {
  int i;
  Str* prefix;
  runtime_asdl::value__Str* no_str;
  StackRoots _roots({&prefix, &no_str});

  i = arg->find(str956);
  prefix = arg->slice(0, i);
  if ((i != -1 and match::IsValidVarName(prefix))) {
    return (Tuple2<Str*, runtime_asdl::value__Str*>(prefix, Alloc<value::Str>(arg->slice((i + 1)))));
  }
  else {
    if (match::IsValidVarName(arg)) {
      no_str = nullptr;
      return (Tuple2<Str*, runtime_asdl::value__Str*>(arg, no_str));
    }
    else {
      e_die(fmt261(arg), w);
    }
  }
}

NormalWordEvaluator::NormalWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, state::MutableOpts* mutable_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt) : AbstractWordEvaluator(mem, exec_opts, mutable_opts, splitter, errfmt) {
  this->shell_ex = nullptr;
}

void NormalWordEvaluator::CheckCircularDeps() {
}

runtime_asdl::part_value_t* NormalWordEvaluator::_EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted) {
  Str* stdout;
  List<Str*>* strs;
  StackRoots _roots({&stdout, &strs});

  stdout = this->shell_ex->RunCommandSub(cs_part);
  if (cs_part->left_token->id == Id::Left_AtParen) {
    strs = this->splitter->SplitForWordEval(stdout);
    return Alloc<part_value::Array>(strs);
  }
  else {
    return Alloc<part_value::String>(stdout, quoted, !quoted);
  }
}

runtime_asdl::part_value__String* NormalWordEvaluator::_EvalProcessSub(syntax_asdl::command_sub* cs_part) {
  Str* dev_path;
  StackRoots _roots({&dev_path});

  dev_path = this->shell_ex->RunProcessSub(cs_part);
  return Alloc<part_value::String>(dev_path, true, false);
}
Str* _DUMMY = str958;

void CompletionWordEvaluator::CheckCircularDeps() {
}

runtime_asdl::part_value_t* CompletionWordEvaluator::_EvalCommandSub(syntax_asdl::command_sub* cs_part, bool quoted) {
  if (cs_part->left_token->id == Id::Left_AtParen) {
    return Alloc<part_value::Array>(Alloc<List<Str*>>(std::initializer_list<Str*>{_DUMMY}));
  }
  else {
    return Alloc<part_value::String>(_DUMMY, quoted, !quoted);
  }
}

runtime_asdl::part_value__String* CompletionWordEvaluator::_EvalProcessSub(syntax_asdl::command_sub* cs_part) {
  return Alloc<part_value::String>(str959, true, false);
}

}  // define namespace word_eval

namespace word_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
using syntax_asdl::Token;
using syntax_asdl::speck;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
using syntax_asdl::arith_expr_t;
namespace bracket_op = syntax_asdl::bracket_op;
using syntax_asdl::bracket_op_t;
namespace suffix_op = syntax_asdl::suffix_op;
using syntax_asdl::suffix_op_t;
using syntax_asdl::suffix_op__Slice;
using syntax_asdl::suffix_op__PatSub;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__ExprSub;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Import;
using syntax_asdl::expr_t;
namespace source = syntax_asdl::source;
using syntax_asdl::arg_list;
List<id_kind_asdl::Kind_t> glist0 = {Kind::Eof, Kind::WS, Kind::Op, Kind::Right};
List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS = &glist0;

WordEmitter::WordEmitter() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(WordEmitter)) {
  ;  // pass
}

syntax_asdl::word_t* WordEmitter::ReadWord(types_asdl::lex_mode_t lex_mode) {
  throw Alloc<NotImplementedError>();
}

WordParser::WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->parse_opts = parse_ctx->parse_opts;
  this->a_parser = Alloc<tdop::TdopParser>(arith_parse::Spec(), this, this->parse_opts);
  this->Reset();
}

void WordParser::Init(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

void WordParser::Reset() {
  this->cur_token = nullptr;
  this->token_kind = Kind::Undefined;
  this->token_type = Id::Undefined_Tok;
  this->next_lex_mode = lex_mode_e::ShCommand;
  this->cursor = nullptr;
  this->cursor_was_newline = false;
  this->buffered_word = nullptr;
  this->emit_doc_token = false;
}

void WordParser::_Peek() {
  if (this->next_lex_mode != lex_mode_e::Undefined) {
    this->cur_token = this->lexer->Read(this->next_lex_mode);
    this->token_type = this->cur_token->id;
    this->token_kind = consts::GetKind(this->token_type);
    this->parse_ctx->trail->AppendToken(this->cur_token);
    this->next_lex_mode = lex_mode_e::Undefined;
  }
}

void WordParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

syntax_asdl::word_t* WordParser::_ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode) {
  syntax_asdl::compound_word* w;
  StackRoots _roots({&w});

  w = this->_ReadVarOpArg2(arg_lex_mode, Id::Undefined_Tok, true);
  if ((len(w->parts) == 0 and arg_lex_mode == lex_mode_e::VSub_ArgDQ)) {
    return Alloc<word::Empty>();
  }
  return w;
}

syntax_asdl::compound_word* WordParser::_ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type) {
  return _ReadVarOpArg2(arg_lex_mode, eof_type, false);
}

syntax_asdl::compound_word* WordParser::_ReadVarOpArg2(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;
  syntax_asdl::compound_word* tilde;
  StackRoots _roots({&w, &tilde});

  this->_Next(arg_lex_mode);
  this->_Peek();
  w = this->_ReadCompoundWord3(arg_lex_mode, eof_type, empty_ok);
  tilde = word_::TildeDetect(w);
  if (tilde) {
    w = tilde;
  }
  return w;
}

syntax_asdl::suffix_op__Slice* WordParser::_ReadSliceVarOp() {
  int cur_id;
  syntax_asdl::arith_expr_t* begin;
  syntax_asdl::arith_expr_t* no_length;
  syntax_asdl::arith_expr_t* length;
  StackRoots _roots({&begin, &no_length, &length});

  this->_Next(lex_mode_e::Arith);
  this->_Peek();
  cur_id = this->token_type;
  if (this->token_type == Id::Arith_Colon) {
    begin = nullptr;
  }
  else {
    begin = this->a_parser->Parse();
    cur_id = this->a_parser->CurrentId();
  }
  if (cur_id == Id::Arith_RBrace) {
    no_length = nullptr;
    return Alloc<suffix_op::Slice>(begin, no_length);
  }
  if (cur_id == Id::Arith_Colon) {
    this->_Next(lex_mode_e::Arith);
    length = this->_ReadArithExpr(Id::Arith_RBrace);
    return Alloc<suffix_op::Slice>(begin, length);
  }
  p_die(fmt262(), this->cur_token);
  throw Alloc<AssertionError>();
}

syntax_asdl::suffix_op__PatSub* WordParser::_ReadPatSubVarOp() {
  syntax_asdl::compound_word* pat;
  int replace_mode;
  syntax_asdl::word_part_t* UP_first_part;
  int lit_id;
  syntax_asdl::compound_word* tilde;
  syntax_asdl::word_t* replace;
  StackRoots _roots({&pat, &UP_first_part, &tilde, &replace});

  pat = this->_ReadVarOpArg2(lex_mode_e::VSub_ArgUnquoted, Id::Lit_Slash);
  if ((len(pat->parts) == 1 and word_::LiteralId(pat->parts->index(0)) == Id::Lit_Slash)) {
    this->_Next(lex_mode_e::VSub_ArgUnquoted);
    this->_Peek();
    pat->parts->append(this->cur_token);
  }
  if (len(pat->parts) == 0) {
    p_die(fmt263(), this->cur_token);
  }
  replace_mode = Id::Undefined_Tok;
  UP_first_part = pat->parts->index(0);
  if (UP_first_part->tag_() == word_part_e::Literal) {
    lit_id = static_cast<Token*>(UP_first_part)->id;
    if ((lit_id == Id::Lit_Slash || lit_id == Id::Lit_Pound || lit_id == Id::Lit_Percent)) {
      pat->parts->pop(0);
      replace_mode = lit_id;
    }
  }
  tilde = word_::TildeDetect(pat);
  if (tilde) {
    pat = tilde;
  }
  if (this->token_type == Id::Right_DollarBrace) {
    return Alloc<suffix_op::PatSub>(pat, nullptr, replace_mode);
  }
  if (this->token_type == Id::Lit_Slash) {
    replace = this->_ReadVarOpArg(lex_mode_e::VSub_ArgUnquoted);
    this->_Peek();
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt264(ui::PrettyId(this->token_type)), this->cur_token);
    }
    return Alloc<suffix_op::PatSub>(pat, replace, replace_mode);
  }
  p_die(fmt265(), this->cur_token);
}

syntax_asdl::bracket_op_t* WordParser::_ReadSubscript() {
  int next_id;
  syntax_asdl::bracket_op_t* op;
  syntax_asdl::arith_expr_t* anode;
  StackRoots _roots({&op, &anode});

  next_id = this->lexer->LookAhead(lex_mode_e::Arith);
  if ((next_id == Id::Lit_At || next_id == Id::Arith_Star)) {
    op = Alloc<bracket_op::WholeArray>(next_id);
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
  }
  else {
    this->_Next(lex_mode_e::Arith);
    anode = this->_ReadArithExpr(Id::Arith_RBracket);
    op = Alloc<bracket_op::ArrayIndex>(anode);
  }
  if (this->token_type != Id::Arith_RBracket) {
    p_die(fmt266(), this->cur_token);
  }
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  return op;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarOf() {
  syntax_asdl::Token* name_token;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::braced_var_sub* part;
  StackRoots _roots({&name_token, &bracket_op, &part});

  this->_Peek();
  name_token = this->cur_token;
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  if (this->token_type == Id::VOp2_LBracket) {
    bracket_op = this->_ReadSubscript();
  }
  else {
    bracket_op = nullptr;
  }
  part = Alloc<braced_var_sub>();
  part->token = name_token;
  part->bracket_op = bracket_op;
  return part;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode) {
  return _ParseVarExpr(arg_lex_mode, false);
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query) {
  syntax_asdl::braced_var_sub* part;
  id_kind_asdl::Kind_t op_kind;
  int op_id;
  syntax_asdl::word_t* arg_word;
  int op_spid;
  syntax_asdl::suffix_op__PatSub* patsub_op;
  suffix_op_t* temp;
  StackRoots _roots({&part, &op_kind, &arg_word, &patsub_op, &temp});

  part = this->_ParseVarOf();
  this->_Peek();
  if (this->token_type == Id::Right_DollarBrace) {
    return part;
  }
  op_kind = this->token_kind;
  if (op_kind == Kind::VTest) {
    op_id = this->token_type;
    arg_word = this->_ReadVarOpArg(arg_lex_mode);
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt267(), this->cur_token);
    }
    part->suffix_op = Alloc<suffix_op::Unary>(op_id, arg_word);
  }
  else {
    if (op_kind == Kind::VOp0) {
      part->suffix_op = this->cur_token;
      this->_Next(lex_mode_e::VSub_2);
      this->_Peek();
    }
    else {
      if (op_kind == Kind::VOp1) {
        op_id = this->token_type;
        arg_word = this->_ReadVarOpArg(lex_mode_e::VSub_ArgUnquoted);
        if (this->token_type != Id::Right_DollarBrace) {
          p_die(fmt268(), this->cur_token);
        }
        part->suffix_op = Alloc<suffix_op::Unary>(op_id, arg_word);
      }
      else {
        if (op_kind == Kind::VOp2) {
          if (this->token_type == Id::VOp2_Slash) {
            op_spid = this->cur_token->span_id;
            patsub_op = this->_ReadPatSubVarOp();
            patsub_op->spids->append(op_spid);
            temp = static_cast<suffix_op_t*>(patsub_op);
            part->suffix_op = temp;
          }
          else {
            if (this->token_type == Id::VOp2_Colon) {
              part->suffix_op = this->_ReadSliceVarOp();
              if (this->token_type != Id::Arith_RBrace) {
                p_die(fmt269(), this->cur_token);
              }
            }
            else {
              p_die(fmt270(str969), this->cur_token);
            }
          }
        }
        else {
          if (op_kind == Kind::VOp3) {
            if (allow_query) {
              part->suffix_op = this->cur_token;
              this->_Next(lex_mode_e::VSub_2);
              this->_Peek();
            }
            else {
              p_die(fmt271(str971), this->cur_token);
            }
          }
        }
      }
    }
  }
  if ((this->token_type != Id::Right_DollarBrace && this->token_type != Id::Arith_RBrace)) {
    p_die(fmt272(), this->cur_token);
  }
  return part;
}

Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*> WordParser::ReadBracedVarSub(syntax_asdl::Token* left_token) {
  syntax_asdl::braced_var_sub* part;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&part, &last_token});

  part = this->_ReadBracedVarSub(left_token, false);
  last_token = this->cur_token;
  return (Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*>(part, last_token));
}

syntax_asdl::braced_var_sub* WordParser::_ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted) {
  types_asdl::lex_mode_t arg_lex_mode;
  int ty;
  int next_id;
  syntax_asdl::braced_var_sub* part;
  int right_spid;
  StackRoots _roots({&arg_lex_mode, &part});

  if (d_quoted) {
    arg_lex_mode = lex_mode_e::VSub_ArgDQ;
  }
  else {
    arg_lex_mode = lex_mode_e::VSub_ArgUnquoted;
  }
  this->_Next(lex_mode_e::VSub_1);
  this->_Peek();
  ty = this->token_type;
  if (ty == Id::VSub_Pound) {
    next_id = this->lexer->LookAhead(lex_mode_e::VSub_1);
    if ((next_id != Id::Unknown_Tok && next_id != Id::Right_DollarBrace)) {
      this->_Next(lex_mode_e::VSub_1);
      part = this->_ParseVarOf();
      this->_Peek();
      if (this->token_type != Id::Right_DollarBrace) {
        p_die(fmt273(), this->cur_token);
      }
      part->prefix_op = Alloc<speck>(ty, this->cur_token->span_id);
    }
    else {
      part = this->_ParseVarExpr(arg_lex_mode);
    }
  }
  else {
    if (ty == Id::VSub_Bang) {
      next_id = this->lexer->LookAhead(lex_mode_e::VSub_1);
      if ((next_id != Id::Unknown_Tok && next_id != Id::Right_DollarBrace)) {
        this->_Next(lex_mode_e::VSub_1);
        part = this->_ParseVarExpr(arg_lex_mode, true);
        part->prefix_op = Alloc<speck>(ty, this->cur_token->span_id);
      }
      else {
        part = this->_ParseVarExpr(arg_lex_mode);
      }
    }
    else {
      if (this->token_kind == Kind::VSub) {
        part = this->_ParseVarExpr(arg_lex_mode);
      }
      else {
        p_die(fmt274(), this->cur_token);
      }
    }
  }
  part->spids->append(left_token->span_id);
  right_spid = this->cur_token->span_id;
  part->spids->append(right_spid);
  return part;
}

syntax_asdl::single_quoted* WordParser::_ReadSingleQuoted(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::Token*>* tokens;
  syntax_asdl::single_quoted* node;
  StackRoots _roots({&left_token, &tokens, &node});

  left_token = this->cur_token;
  tokens = Alloc<List<syntax_asdl::Token*>>();
  this->ReadSingleQuoted(lex_mode, left_token, tokens, false);
  node = Alloc<single_quoted>(left_token, tokens, false);
  node->spids->append(left_token->span_id);
  node->spids->append(this->cur_token->span_id);
  return node;
}

syntax_asdl::Token* WordParser::ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool is_oil_expr) {
  bool no_backslashes;
  bool done;
  syntax_asdl::Token* tok;
  StackRoots _roots({&tok});

  no_backslashes = (is_oil_expr and left_token->id == Id::Left_SingleQuote);
  done = false;
  while (!done) {
    this->_Next(lex_mode);
    this->_Peek();
    if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Char)) {
      tok = this->cur_token;
      if ((no_backslashes and str_contains(tok->val, str975))) {
        p_die(fmt275(), tok);
      }
      if (is_oil_expr) {
        if (this->token_type == Id::Char_Octal3) {
          p_die(fmt276(), tok);
        }
        if ((this->token_type == Id::Char_Hex and len(this->cur_token->val) != 4)) {
          p_die(fmt277(), tok);
        }
      }
      tokens->append(tok);
    }
    else {
      if (this->token_kind == Kind::Unknown) {
        tok = this->cur_token;
        if ((is_oil_expr or !this->parse_opts->parse_backslash())) {
          p_die(fmt278(), tok);
        }
        tokens->append(tok);
      }
      else {
        if (this->token_kind == Kind::Eof) {
          p_die(fmt279(), left_token);
        }
        else {
          if (this->token_kind == Kind::Right) {
            done = true;
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
  return this->cur_token;
}

syntax_asdl::word_part_t* WordParser::_ReadDoubleQuotedLeftParts() {
  if ((this->token_type == Id::Left_DollarParen || this->token_type == Id::Left_Backtick)) {
    return this->_ReadCommandSub(this->token_type);
  }
  if (this->token_type == Id::Left_DollarBrace) {
    return this->_ReadBracedVarSub(this->cur_token, true);
  }
  if (this->token_type == Id::Left_DollarDParen) {
    return this->_ReadArithSub();
  }
  if (this->token_type == Id::Left_DollarBracket) {
    return this->_ReadExprSub(lex_mode_e::DQ);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::word_part_t* WordParser::_ReadLeftParts() {
  if (this->token_type == Id::Left_DoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_DollarDoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if ((this->token_type == Id::Left_SingleQuote || this->token_type == Id::Left_RSingleQuote)) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_Raw);
  }
  if (this->token_type == Id::Left_CSingleQuote) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_C);
  }
  if ((this->token_type == Id::Left_DollarParen || this->token_type == Id::Left_Backtick || this->token_type == Id::Left_ProcSubIn || this->token_type == Id::Left_ProcSubOut)) {
    return this->_ReadCommandSub(this->token_type);
  }
  if (this->token_type == Id::Left_DollarBrace) {
    return this->_ReadBracedVarSub(this->cur_token, false);
  }
  if (this->token_type == Id::Left_DollarDParen) {
    return this->_ReadArithSub();
  }
  if (this->token_type == Id::Left_DollarBracket) {
    return this->_ReadExprSub(lex_mode_e::ShCommand);
  }
  throw Alloc<AssertionError>();
}

syntax_asdl::word_part__ExtGlob* WordParser::_ReadExtGlob() {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::compound_word*>* arms;
  List<int>* spids;
  bool read_word;
  syntax_asdl::compound_word* w;
  syntax_asdl::word_part__ExtGlob* part;
  StackRoots _roots({&left_token, &arms, &spids, &w, &part});

  left_token = this->cur_token;
  arms = Alloc<List<syntax_asdl::compound_word*>>();
  spids = Alloc<List<int>>();
  spids->append(left_token->span_id);
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ExtGlob);
  this->_Next(lex_mode_e::ExtGlob);
  read_word = false;
  while (true) {
    this->_Peek();
    if (this->token_type == Id::Right_ExtGlob) {
      if (!read_word) {
        arms->append(Alloc<compound_word>());
      }
      spids->append(this->cur_token->span_id);
      break;
    }
    else {
      if (this->token_type == Id::Op_Pipe) {
        if (!read_word) {
          arms->append(Alloc<compound_word>());
        }
        read_word = false;
        this->_Next(lex_mode_e::ExtGlob);
      }
      else {
        if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Left || this->token_kind == Kind::VSub || this->token_kind == Kind::ExtGlob)) {
          w = this->_ReadCompoundWord(lex_mode_e::ExtGlob);
          arms->append(w);
          read_word = true;
        }
        else {
          if (this->token_kind == Kind::Eof) {
            p_die(fmt280(), left_token);
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
  part = Alloc<word_part::ExtGlob>(left_token, arms);
  part->spids->extend(spids);
  return part;
}

void WordParser::_ReadLikeDQ(syntax_asdl::Token* left_dq_token, bool is_oil_expr, List<syntax_asdl::word_part_t*>* out_parts) {
  bool done;
  syntax_asdl::word_part_t* part;
  StackRoots _roots({&part});

  done = false;
  while (!done) {
    this->_Next(lex_mode_e::DQ);
    this->_Peek();
    if (this->token_kind == Kind::Lit) {
      if (this->token_type == Id::Lit_EscapedChar) {
        part = Alloc<word_part::EscapedLiteral>(this->cur_token);
      }
      else {
        if (this->token_type == Id::Lit_BadBackslash) {
          if ((is_oil_expr or !this->parse_opts->parse_backslash())) {
            p_die(fmt281(), this->cur_token);
          }
        }
        else {
          if (this->token_type == Id::Lit_Dollar) {
            if ((is_oil_expr or !this->parse_opts->parse_dollar())) {
              p_die(fmt282(), this->cur_token);
            }
          }
        }
        part = this->cur_token;
      }
      out_parts->append(part);
    }
    else {
      if (this->token_kind == Kind::Left) {
        if ((this->token_type == Id::Left_Backtick and is_oil_expr)) {
          p_die(fmt283(), this->cur_token);
        }
        part = this->_ReadDoubleQuotedLeftParts();
        out_parts->append(part);
      }
      else {
        if (this->token_kind == Kind::VSub) {
          part = Alloc<simple_var_sub>(this->cur_token);
          out_parts->append(part);
        }
        else {
          if (this->token_kind == Kind::Right) {
            if (left_dq_token) {
              done = true;
            }
            else {
              out_parts->append(this->cur_token);
            }
          }
          else {
            if (this->token_kind == Kind::Eof) {
              if (left_dq_token) {
                p_die(fmt284(), left_dq_token);
              }
              else {
                done = true;
              }
            }
            else {
              throw Alloc<AssertionError>();
            }
          }
        }
      }
    }
  }
}

syntax_asdl::double_quoted* WordParser::_ReadDoubleQuoted() {
  syntax_asdl::Token* left_dq_token;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::double_quoted* dq_part;
  StackRoots _roots({&left_dq_token, &parts, &dq_part});

  left_dq_token = this->cur_token;
  parts = Alloc<List<syntax_asdl::word_part_t*>>();
  this->_ReadLikeDQ(left_dq_token, false, parts);
  dq_part = Alloc<double_quoted>(left_dq_token, parts, false);
  dq_part->spids->append(left_dq_token->span_id);
  dq_part->spids->append(this->cur_token->span_id);
  return dq_part;
}

syntax_asdl::Token* WordParser::ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(left_token, true, parts);
  return this->cur_token;
}

syntax_asdl::command_sub* WordParser::_ReadCommandSub(int left_id) {
  syntax_asdl::Token* left_token;
  int left_spid;
  int right_id;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::command_t* node;
  int right_spid;
  List<Str*>* parts;
  Str* code_str;
  alloc::Arena* arena;
  reader::FileLineReader* line_reader;
  syntax_asdl::command_sub* cs_part;
  StackRoots _roots({&left_token, &c_parser, &node, &parts, &code_str, &arena, &line_reader, &cs_part});

  left_token = this->cur_token;
  left_spid = left_token->span_id;
  if ((left_id == Id::Left_DollarParen || left_id == Id::Left_AtParen || left_id == Id::Left_ProcSubIn || left_id == Id::Left_ProcSubOut)) {
    this->_Next(lex_mode_e::ShCommand);
    right_id = Id::Eof_RParen;
    this->lexer->PushHint(Id::Op_RParen, right_id);
    c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
    node = c_parser->ParseCommandSub();
    right_spid = c_parser->w_parser->cur_token->span_id;
  }
  else {
    if ((left_id == Id::Left_Backtick and this->parse_ctx->one_pass_parse)) {
      right_id = Id::Eof_Backtick;
      this->lexer->PushHint(Id::Left_Backtick, right_id);
      c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
      node = c_parser->ParseCommandSub();
      right_spid = c_parser->w_parser->cur_token->span_id;
    }
    else {
      if (left_id == Id::Left_Backtick) {
        if (!this->parse_opts->parse_backticks()) {
          p_die(fmt285(), left_token);
        }
        this->_Next(lex_mode_e::Backtick);
        parts = Alloc<List<Str*>>();
        while (true) {
          this->_Peek();
          if (this->token_type == Id::Backtick_Quoted) {
            parts->append(this->cur_token->val->slice(1));
          }
          else {
            if (this->token_type == Id::Backtick_Other) {
              parts->append(this->cur_token->val);
            }
            else {
              if (this->token_type == Id::Backtick_Right) {
                break;
              }
              else {
                if (this->token_type == Id::Eof_Real) {
                  p_die(fmt286(), left_token);
                }
                else {
                  throw Alloc<AssertionError>();
                }
              }
            }
          }
          this->_Next(lex_mode_e::Backtick);
        }
        right_spid = this->cur_token->span_id;
        code_str = str988->join(parts);
        arena = this->parse_ctx->arena;
        line_reader = reader::StringLineReader(code_str, arena);
        c_parser = this->parse_ctx->MakeOshParser(line_reader);
        {  // with
          alloc::ctx_Location ctx(arena, Alloc<source::Backticks>(left_spid, right_spid));

          node = c_parser->ParseCommandSub();
        }
      }
      else {
        throw Alloc<AssertionError>();
      }
    }
  }
  cs_part = Alloc<command_sub>(left_token, node);
  cs_part->spids->append(left_spid);
  cs_part->spids->append(right_spid);
  return cs_part;
}

syntax_asdl::word_part__ExprSub* WordParser::_ReadExprSub(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  syntax_asdl::expr_t* enode;
  syntax_asdl::word_part__ExprSub* node;
  StackRoots _roots({&left_token, &enode, &node});

  left_token = this->cur_token;
  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup1 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr_sub);
  enode = tup1.at0();
  this->_Next(lex_mode);
  node = Alloc<word_part::ExprSub>(left_token, enode);
  return node;
}

syntax_asdl::command_t* WordParser::ParseVarDecl(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__VarDecl* enode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&enode, &last_token});

  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> tup2 = this->parse_ctx->ParseVarDecl(kw_token, this->lexer);
  enode = tup2.at0();
  last_token = tup2.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::command_t* WordParser::ParsePlaceMutation(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__PlaceMutation* enode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&enode, &last_token});

  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> tup3 = this->parse_ctx->ParsePlaceMutation(kw_token, this->lexer);
  enode = tup3.at0();
  last_token = tup3.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::expr_t* WordParser::ParseBareDecl() {
  syntax_asdl::expr_t* enode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&enode, &last_token});

  this->_Next(lex_mode_e::Expr);
  this->_Peek();
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup4 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::command_expr);
  enode = tup4.at0();
  last_token = tup4.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::expr_t* WordParser::ParseCommandExpr() {
  syntax_asdl::expr_t* enode;
  syntax_asdl::Token* last_token;
  StackRoots _roots({&enode, &last_token});

  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup5 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::command_expr);
  enode = tup5.at0();
  last_token = tup5.at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  return enode;
}

void WordParser::ParseProc(syntax_asdl::command__Proc* node) {
  syntax_asdl::Token* last_token;
  StackRoots _roots({&last_token});

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Lit_Chars) {
    p_die(fmt287(ui::PrettyToken(this->cur_token, this->arena)), this->cur_token);
  }
  node->name = this->cur_token;
  last_token = this->parse_ctx->ParseProc(this->lexer, node);
  if (last_token->id == Id::Op_LBrace) {
    last_token->id = Id::Lit_LBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
}

void WordParser::ParseImport(syntax_asdl::command__Import* node) {
  syntax_asdl::Token* last_token;
  StackRoots _roots({&last_token});

  last_token = this->parse_ctx->ParseImport(this->lexer, node);
  this->buffered_word = last_token;
}

syntax_asdl::arith_expr_t* WordParser::_ReadArithExpr(int end_id) {
  syntax_asdl::arith_expr_t* anode;
  int cur_id;
  StackRoots _roots({&anode});

  anode = this->a_parser->Parse();
  cur_id = this->a_parser->CurrentId();
  if ((end_id != Id::Undefined_Tok and cur_id != end_id)) {
    p_die(fmt288(ui::PrettyId(cur_id), ui::PrettyId(end_id)), this->a_parser->cur_word);
  }
  return anode;
}

syntax_asdl::word_part__ArithSub* WordParser::_ReadArithSub() {
  int left_span_id;
  syntax_asdl::arith_expr_t* anode;
  int right_span_id;
  syntax_asdl::word_part__ArithSub* node;
  StackRoots _roots({&anode, &node});

  left_span_id = this->cur_token->span_id;
  this->lexer->PushHint(Id::Op_RParen, Id::Right_DollarDParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr(Id::Arith_RParen);
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Right_DollarDParen) {
    p_die(fmt289(), this->cur_token);
  }
  right_span_id = this->cur_token->span_id;
  node = Alloc<word_part::ArithSub>(anode);
  node->spids->append(left_span_id);
  node->spids->append(right_span_id);
  return node;
}

Tuple2<syntax_asdl::arith_expr_t*, int> WordParser::ReadDParen() {
  syntax_asdl::arith_expr_t* anode;
  StackRoots _roots({&anode});

  this->lexer->PushHint(Id::Op_RParen, Id::Op_DRightParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr(Id::Arith_RParen);
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Op_DRightParen) {
    p_die(fmt290(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  return (Tuple2<syntax_asdl::arith_expr_t*, int>(anode, this->cur_token->span_id));
}

void WordParser::_NextNonSpace() {
  while (true) {
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    if ((this->token_kind != Kind::Ignored && this->token_kind != Kind::WS)) {
      break;
    }
  }
}

syntax_asdl::command__ForExpr* WordParser::ReadForExpression() {
  int cur_id;
  syntax_asdl::arith_expr_t* init_node;
  syntax_asdl::arith_expr_t* cond_node;
  syntax_asdl::arith_expr_t* update_node;
  syntax_asdl::command__ForExpr* node;
  StackRoots _roots({&init_node, &cond_node, &update_node, &node});

  this->_NextNonSpace();
  this->_Peek();
  cur_id = this->token_type;
  if (cur_id == Id::Arith_Semi) {
    init_node = nullptr;
  }
  else {
    init_node = this->a_parser->Parse();
    cur_id = this->a_parser->CurrentId();
  }
  this->_NextNonSpace();
  if (cur_id != Id::Arith_Semi) {
    p_die(fmt291(), this->a_parser->cur_word);
  }
  this->_Peek();
  cur_id = this->token_type;
  if (cur_id == Id::Arith_Semi) {
    cond_node = nullptr;
  }
  else {
    cond_node = this->a_parser->Parse();
    cur_id = this->a_parser->CurrentId();
  }
  this->_NextNonSpace();
  if (cur_id != Id::Arith_Semi) {
    p_die(fmt292(), this->a_parser->cur_word);
  }
  this->_Peek();
  cur_id = this->token_type;
  if (cur_id == Id::Arith_RParen) {
    update_node = nullptr;
  }
  else {
    update_node = this->_ReadArithExpr(Id::Arith_RParen);
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt293(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  node = Alloc<command::ForExpr>();
  node->init = init_node;
  node->cond = cond_node;
  node->update = update_node;
  return node;
}

syntax_asdl::word_part_t* WordParser::_ReadArrayLiteral() {
  syntax_asdl::Token* left_token;
  int paren_spid;
  word_parse::WordParser* w_parser;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::word_t* w;
  List<syntax_asdl::word_t*>* no_words;
  syntax_asdl::sh_array_literal* node;
  Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* pair;
  syntax_asdl::compound_word* k;
  syntax_asdl::compound_word* v;
  List<syntax_asdl::compound_word*>* pairs;
  int n;
  syntax_asdl::compound_word* w2;
  syntax_asdl::word_part__AssocArrayLiteral* node2;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;
  StackRoots _roots({&left_token, &w_parser, &words, &w, &no_words, &node, &pair, &k, &v, &pairs, &w2, &node2, &words2, &words3});

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->cur_token->id != Id::Op_LParen) {
    p_die(fmt294(), this->cur_token);
  }
  left_token = this->cur_token;
  paren_spid = this->cur_token->span_id;
  w_parser = this->parse_ctx->MakeWordParser(this->lexer, this->line_reader);
  words = Alloc<List<syntax_asdl::compound_word*>>();
  while (true) {
    w = w_parser->ReadWord(lex_mode_e::ShCommand);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Right_ShArrayLiteral) {
        break;
      }
      else {
        if (tok->id == Id::Op_Newline) {
          continue;
        }
        else {
          p_die(fmt295(), w);
        }
      }
    }
    words->append(static_cast<compound_word*>(w));
  }
  if (len(words) == 0) {
    no_words = Alloc<List<syntax_asdl::word_t*>>();
    node = Alloc<sh_array_literal>(left_token, no_words);
    node->spids->append(left_token->span_id);
    return node;
  }
  pair = word_::DetectAssocPair(words->index(0));
  if (pair) {
    Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup6 = pair;
    k = tup6->at0();
    v = tup6->at1();
    pairs = Alloc<List<syntax_asdl::compound_word*>>(std::initializer_list<syntax_asdl::compound_word*>{k, v});
    n = len(words);
    for (int i = 1; i < n; ++i) {
      w2 = words->index(i);
      pair = word_::DetectAssocPair(w2);
      if (!pair) {
        p_die(fmt296(), w2);
      }
      Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup7 = pair;
      k = tup7->at0();
      v = tup7->at1();
      pairs->append(k);
      pairs->append(v);
    }
    node2 = Alloc<word_part::AssocArrayLiteral>(left_token, pairs);
    node2->spids->append(paren_spid);
    return node2;
  }
  words2 = braces::BraceDetectAll(words);
  words3 = word_::TildeDetectAll(words2);
  node = Alloc<sh_array_literal>(left_token, words3);
  node->spids->append(paren_spid);
  return node;
}

void WordParser::_ParseCallArguments(syntax_asdl::arg_list* arglist) {
  this->lexer->PushHint(Id::Op_RParen, Id::Op_RParen);
  this->parse_ctx->ParseOilArgList(this->lexer, arglist);
}

bool WordParser::_MaybeReadWholeWord(bool is_first, types_asdl::lex_mode_t lex_mode, List<syntax_asdl::word_part_t*>* parts) {
  bool done;
  Str* tok_val;
  Str* ch;
  syntax_asdl::word_part_t* part;
  int next_id;
  syntax_asdl::word_part_t* part2;
  syntax_asdl::Token* splice_token;
  syntax_asdl::arg_list* arglist;
  StackRoots _roots({&tok_val, &ch, &part, &part2, &splice_token, &arglist});

  done = false;
  if (this->token_type == Id::Lit_EscapedChar) {
    if (!this->parse_opts->parse_backslash()) {
      tok_val = this->cur_token->val;
      ch = tok_val->index(1);
      if (!pyutil::IsValidCharEscape(ord(ch))) {
        p_die(fmt297(), this->cur_token);
      }
    }
    part = Alloc<word_part::EscapedLiteral>(this->cur_token);
  }
  else {
    part = this->cur_token;
  }
  if ((is_first and this->token_type == Id::Lit_VarLike)) {
    parts->append(part);
    next_id = this->lexer->LookAhead(lex_mode);
    if (next_id == Id::Op_LParen) {
      this->lexer->PushHint(Id::Op_RParen, Id::Right_ShArrayLiteral);
      part2 = this->_ReadArrayLiteral();
      parts->append(part2);
      this->_Next(lex_mode);
      this->_Peek();
      if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
        p_die(fmt298(), this->cur_token);
      }
      done = true;
    }
  }
  else {
    if ((is_first and (this->parse_opts->parse_at() and this->token_type == Id::Lit_Splice))) {
      splice_token = this->cur_token;
      next_id = this->lexer->LookAhead(lex_mode);
      if (next_id == Id::Op_LParen) {
        arglist = Alloc<arg_list>();
        this->_ParseCallArguments(arglist);
        part2 = Alloc<word_part::FuncCall>(splice_token, arglist);
      }
      else {
        part2 = Alloc<word_part::Splice>(splice_token);
      }
      parts->append(part2);
      this->_Next(lex_mode);
      this->_Peek();
      if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
        p_die(fmt299(), this->cur_token);
      }
      done = true;
    }
    else {
      if ((is_first and (this->parse_opts->parse_at_all() and this->token_type == Id::Lit_At))) {
        p_die(fmt300(), this->cur_token);
      }
      else {
        parts->append(part);
      }
    }
  }
  return done;
}

syntax_asdl::compound_word* WordParser::_ReadCompoundWord(types_asdl::lex_mode_t lex_mode) {
  return this->_ReadCompoundWord3(lex_mode, Id::Undefined_Tok, true);
}

syntax_asdl::compound_word* WordParser::_ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;
  int num_parts;
  int brace_count;
  bool done;
  bool allow_done;
  Str* next_byte;
  syntax_asdl::Token* vsub_token;
  syntax_asdl::word_part_t* part;
  int next_id;
  syntax_asdl::arg_list* arglist;
  syntax_asdl::command_sub* cs_part;
  StackRoots _roots({&w, &next_byte, &vsub_token, &part, &arglist, &cs_part});

  w = Alloc<compound_word>();
  num_parts = 0;
  brace_count = 0;
  done = false;
  while (!done) {
    this->_Peek();
    allow_done = (empty_ok or num_parts != 0);
    if ((allow_done and this->token_type == eof_type)) {
      done = true;
    }
    else {
      if ((this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary)) {
        if (this->token_type == Id::Lit_LBrace) {
          brace_count += 1;
        }
        else {
          if (this->token_type == Id::Lit_RBrace) {
            brace_count -= 1;
          }
          else {
            if (this->token_type == Id::Lit_Dollar) {
              if (!this->parse_opts->parse_dollar()) {
                if ((num_parts == 0 and lex_mode == lex_mode_e::ShCommand)) {
                  next_byte = this->lexer->ByteLookAhead();
                  if (str_equals(next_byte, str1003)) {
                    println_stderr(fmt301(next_byte));
                  }
                }
                p_die(fmt302(), this->cur_token);
              }
            }
          }
        }
        done = this->_MaybeReadWholeWord(num_parts == 0, lex_mode, w->parts);
      }
      else {
        if (this->token_kind == Kind::VSub) {
          vsub_token = this->cur_token;
          part = Alloc<simple_var_sub>(vsub_token);
          if (this->token_type == Id::VSub_DollarName) {
            next_id = this->lexer->LookAhead(lex_mode);
            if (next_id == Id::Op_LParen) {
              arglist = Alloc<arg_list>();
              this->_ParseCallArguments(arglist);
              part = Alloc<word_part::FuncCall>(vsub_token, arglist);
            }
          }
          w->parts->append(part);
        }
        else {
          if (this->token_kind == Kind::ExtGlob) {
            if ((this->parse_opts->parse_at() and (this->token_type == Id::ExtGlob_At and num_parts == 0))) {
              cs_part = this->_ReadCommandSub(Id::Left_AtParen);
              cs_part->left_token->id = Id::Left_AtParen;
              part = cs_part;
              this->_Peek();
              if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
                p_die(fmt303(), this->cur_token);
              }
              done = true;
            }
            else {
              part = this->_ReadExtGlob();
            }
            w->parts->append(part);
          }
          else {
            if (this->token_kind == Kind::Left) {
              part = this->_ReadLeftParts();
              if ((this->parse_opts->parse_triple_quoted() and (lex_mode == lex_mode_e::ShCommand and num_parts == 0))) {
                if ((part->tag_() == word_part_e::SingleQuoted and len(static_cast<single_quoted*>(part)->tokens) == 0)) {
                  next_id = this->lexer->LookAhead(lex_mode_e::ShCommand);
                  if (next_id == Id::Left_SingleQuote) {
                    println_stderr(fmt304(ui::PrettyId(next_id)));
                  }
                }
                if ((part->tag_() == word_part_e::DoubleQuoted and len(static_cast<double_quoted*>(part)->parts) == 0)) {
                  next_id = this->lexer->LookAhead(lex_mode_e::ShCommand);
                  if (next_id == Id::Left_DoubleQuote) {
                    println_stderr(fmt305(ui::PrettyId(next_id)));
                  }
                }
              }
              w->parts->append(part);
            }
            else {
              if (this->token_kind == Kind::Right) {
                if (this->token_type == Id::Right_DoubleQuote) {
                  ;  // pass
                }
                else {
                  if (this->token_type == Id::Right_Subshell) {
                    if (this->lexer->MaybeUnreadOne()) {
                      this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
                      this->_Next(lex_mode);
                    }
                    done = true;
                  }
                  else {
                    done = true;
                  }
                }
              }
              else {
                if (this->token_kind == Kind::Ignored) {
                  done = true;
                }
                else {
                  if ((this->token_type == Id::Op_RParen || this->token_type == Id::Eof_RParen)) {
                    if (this->lexer->MaybeUnreadOne()) {
                      if (this->token_type == Id::Eof_RParen) {
                        this->lexer->PushHint(Id::Op_RParen, Id::Eof_RParen);
                      }
                      this->_Next(lex_mode);
                    }
                  }
                  done = true;
                }
              }
            }
          }
        }
      }
    }
    if (!done) {
      this->_Next(lex_mode);
      num_parts += 1;
    }
  }
  if ((this->parse_opts->parse_brace() and (num_parts > 1 and brace_count != 0))) {
    p_die(fmt306(), w);
  }
  return w;
}

Tuple2<syntax_asdl::word_t*, bool> WordParser::_ReadArithWord() {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;
  StackRoots _roots({&no_word, &w});

  this->_Peek();
  if (this->token_kind == Kind::Unknown) {
    p_die(fmt307(this->cur_token->val), this->cur_token);
  }
  else {
    if (this->token_kind == Kind::Eof) {
      return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
    }
    else {
      if (this->token_kind == Kind::Ignored) {
        this->_Next(lex_mode_e::Arith);
        no_word = nullptr;
        return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
      }
      else {
        if ((this->token_kind == Kind::Arith || this->token_kind == Kind::Right)) {
          this->_Next(lex_mode_e::Arith);
          return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
        }
        else {
          if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Left || this->token_kind == Kind::VSub)) {
            w = this->_ReadCompoundWord(lex_mode_e::Arith);
            return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
}

Tuple2<syntax_asdl::word_t*, bool> WordParser::_ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;
  StackRoots _roots({&no_word, &w});

  no_word = nullptr;
  this->_Peek();
  if (this->token_kind == Kind::Eof) {
    return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
  }
  else {
    if ((this->token_kind == Kind::Op || this->token_kind == Kind::Redir || this->token_kind == Kind::Arith)) {
      this->_Next(lex_mode);
      if (this->token_type == Id::Op_Newline) {
        if (this->cursor_was_newline) {
          return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
        }
      }
      return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
    }
    else {
      if (this->token_kind == Kind::Right) {
        if ((this->token_type != Id::Right_Subshell && this->token_type != Id::Right_ShFunction && this->token_type != Id::Right_CasePat && this->token_type != Id::Right_ShArrayLiteral)) {
          throw Alloc<AssertionError>();
        }
        this->_Next(lex_mode);
        return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
      }
      else {
        if ((this->token_kind == Kind::Ignored || this->token_kind == Kind::WS)) {
          this->_Next(lex_mode);
          return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
        }
        else {
          if ((this->token_kind == Kind::VSub || this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::Left || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary || this->token_kind == Kind::ExtGlob)) {
            if (this->token_type == Id::Lit_Pound) {
              this->_Next(lex_mode_e::Comment);
              this->_Peek();
              return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
            }
            else {
              if (this->token_type == Id::Lit_TPound) {
                this->_Next(lex_mode_e::Comment);
                this->_Peek();
                if ((this->token_type == Id::Ignored_Comment and this->emit_doc_token)) {
                  return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
                }
                return (Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
              }
              else {
                w = this->_ReadCompoundWord(lex_mode);
                return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
              }
            }
          }
          else {
            throw Alloc<AssertionError>();
          }
        }
      }
    }
  }
}

int WordParser::LookAhead() {
  if (this->cur_token->id == Id::WS_Space) {
    return this->lexer->LookAhead(lex_mode_e::ShCommand);
  }
  else {
    return this->cur_token->id;
  }
}

syntax_asdl::word_t* WordParser::ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* w;
  bool need_more;
  StackRoots _roots({&w});

  if (this->buffered_word) {
    w = this->buffered_word;
    this->buffered_word = nullptr;
  }
  else {
    while (true) {
      if (lex_mode == lex_mode_e::Arith) {
        Tuple2<syntax_asdl::word_t*, bool> tup8 = this->_ReadArithWord();
        w = tup8.at0();
        need_more = tup8.at1();
      }
      else {
        if ((lex_mode == lex_mode_e::ShCommand || lex_mode == lex_mode_e::DBracket || lex_mode == lex_mode_e::BashRegex)) {
          Tuple2<syntax_asdl::word_t*, bool> tup9 = this->_ReadWord(lex_mode);
          w = tup9.at0();
          need_more = tup9.at1();
        }
        else {
          throw Alloc<AssertionError>();
        }
      }
      if (!need_more) {
        break;
      }
    }
  }
  this->cursor = w;
  this->cursor_was_newline = word_::CommandId(this->cursor) == Id::Op_Newline;
  return this->cursor;
}

void WordParser::ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(nullptr, false, parts);
}

syntax_asdl::compound_word* WordParser::ReadForPlugin() {
  syntax_asdl::compound_word* w;
  StackRoots _roots({&w});

  w = Alloc<compound_word>();
  this->_ReadLikeDQ(nullptr, false, w->parts);
  return w;
}

void WordParser::EmitDocToken(bool b) {
  this->emit_doc_token = b;
}

}  // define namespace word_parse

namespace word_ {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
namespace word_part = syntax_asdl::word_part;
using syntax_asdl::word_part_t;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part__AssocArrayLiteral;
using syntax_asdl::word_part__EscapedLiteral;
using syntax_asdl::word_part__TildeSub;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__Splice;
using syntax_asdl::word_part__FuncCall;
using syntax_asdl::word_part__ExprSub;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__BracedTree;
using syntax_asdl::word__String;
namespace sh_lhs_expr_e = syntax_asdl::sh_lhs_expr_e;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::sh_lhs_expr__Name;
using syntax_asdl::sh_lhs_expr__IndexedName;

int LiteralId(syntax_asdl::word_part_t* p) {
  syntax_asdl::word_part_t* UP_part;
  StackRoots _roots({&UP_part});

  UP_part = p;
  if (p->tag_() == word_part_e::Literal) {
    return static_cast<Token*>(UP_part)->id;
  }
  else {
    return Id::Undefined_Tok;
  }
}

Tuple3<bool, Str*, bool> _EvalWordPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  Str* val;
  Str* s;
  List<Str*>* tmp;
  List<Str*>* strs;
  bool ok;
  StackRoots _roots({&UP_part, &val, &s, &tmp, &strs});

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      return (Tuple3<bool, Str*, bool>(false, str1013, false));
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      return (Tuple3<bool, Str*, bool>(false, str1014, false));
    }
      break;
    case word_part_e::Literal: {
      Token* tok = static_cast<Token*>(UP_part);
      return (Tuple3<bool, Str*, bool>(true, tok->val, false));
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      val = part->token->val;
      s = val->index(1);
      return (Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      tmp = Alloc<List<Str*>>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(t->val);
      }
      s = str1015->join(tmp);
      return (Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      strs = Alloc<List<Str*>>();
      for (ListIter<syntax_asdl::word_part_t*> it(part->parts); !it.Done(); it.Next()) {
        syntax_asdl::word_part_t* p = it.Value();
        Tuple3<bool, Str*, bool> tup0 = _EvalWordPart(p);
        ok = tup0.at0();
        s = tup0.at1();
        if (!ok) {
          return (Tuple3<bool, Str*, bool>(false, str1016, true));
        }
        strs->append(s);
      }
      return (Tuple3<bool, Str*, bool>(true, str1017->join(strs), true));
    }
      break;
    case word_part_e::CommandSub: 
    case word_part_e::SimpleVarSub: 
    case word_part_e::BracedVarSub: 
    case word_part_e::TildeSub: 
    case word_part_e::ArithSub: 
    case word_part_e::ExtGlob: 
    case word_part_e::Splice: {
      return (Tuple3<bool, Str*, bool>(false, str1018, false));
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

Tuple3<bool, Str*, bool> StaticEval(syntax_asdl::word_t* UP_w) {
  bool quoted;
  List<Str*>* strs;
  bool ok;
  Str* s;
  bool q;
  StackRoots _roots({&strs, &s});

  quoted = false;
  if (UP_w->tag_() != word_e::Compound) {
    return (Tuple3<bool, Str*, bool>(false, str1019, quoted));
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  strs = Alloc<List<Str*>>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    Tuple3<bool, Str*, bool> tup1 = _EvalWordPart(part);
    ok = tup1.at0();
    s = tup1.at1();
    q = tup1.at2();
    if (!ok) {
      return (Tuple3<bool, Str*, bool>(false, str1020, quoted));
    }
    if (q) {
      quoted = true;
    }
    strs->append(s);
  }
  return (Tuple3<bool, Str*, bool>(true, str1021->join(strs), quoted));
}

int LeftMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  StackRoots _roots({&UP_part});

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      word_part__AssocArrayLiteral* part = static_cast<word_part__AssocArrayLiteral*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::Literal: {
      Token* tok = static_cast<Token*>(UP_part);
      return tok->span_id;
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::TildeSub: {
      word_part__TildeSub* part = static_cast<word_part__TildeSub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::BracedTuple: {
      return runtime::NO_SPID;
    }
      break;
    case word_part_e::Splice: {
      word_part__Splice* part = static_cast<word_part__Splice*>(UP_part);
      return part->name->span_id;
    }
      break;
    case word_part_e::FuncCall: {
      word_part__FuncCall* part = static_cast<word_part__FuncCall*>(UP_part);
      return part->name->span_id;
    }
      break;
    case word_part_e::ExprSub: {
      word_part__ExprSub* part = static_cast<word_part__ExprSub*>(UP_part);
      return part->left->span_id;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int _RightMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  int spid;
  StackRoots _roots({&UP_part});

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      return LeftMostSpanForWord(part->words->index(0));
    }
      break;
    case word_part_e::Literal: {
      Token* tok = static_cast<Token*>(UP_part);
      return tok->span_id;
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      spid = part->spids->index(1);
      return spid;
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::TildeSub: {
      return runtime::NO_SPID;
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      return part->spids->index(1);
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int LeftMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  StackRoots _roots({&UP_w});

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts)) {
        return LeftMostSpanForPart(w->parts->index(0));
      }
      else {
        return runtime::NO_SPID;
      }
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->span_id;
    }
      break;
    case word_e::Empty: {
      return runtime::NO_SPID;
    }
      break;
    case word_e::BracedTree: {
      word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
      return LeftMostSpanForPart(w->parts->index(0));
    }
      break;
    case word_e::String: {
      word__String* w = static_cast<word__String*>(UP_w);
      return w->span_id;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int RightMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  syntax_asdl::word_part_t* end;
  StackRoots _roots({&UP_w, &end});

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) == 0) {
        throw Alloc<AssertionError>();
      }
      else {
        end = w->parts->index(-1);
        return _RightMostSpanForPart(end);
      }
    }
      break;
    case word_e::Empty: {
      return runtime::NO_SPID;
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->span_id;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

syntax_asdl::compound_word* TildeDetect(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part0;
  List<syntax_asdl::word_part_t*>* new_parts;
  syntax_asdl::word_part_t* part1;
  int id_;
  StackRoots _roots({&part0, &new_parts, &part1});

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) == 0) {
    return nullptr;
  }
  part0 = w->parts->index(0);
  if (LiteralId(part0) != Id::Lit_TildeLike) {
    return nullptr;
  }
  Token* tok0 = static_cast<Token*>(part0);
  new_parts = Alloc<List<syntax_asdl::word_part_t*>>(std::initializer_list<syntax_asdl::word_part_t*>{Alloc<word_part::TildeSub>(tok0)});
  if (len(w->parts) == 1) {
    return Alloc<compound_word>(new_parts);
  }
  part1 = w->parts->index(1);
  id_ = LiteralId(part1);
  if (id_ == Id::Lit_Slash) {
    new_parts->extend(w->parts->slice(1));
    return Alloc<compound_word>(new_parts);
  }
  if ((id_ == Id::Lit_Chars and static_cast<Token*>(part1)->val->startswith(str1023))) {
    new_parts->extend(w->parts->slice(1));
    return Alloc<compound_word>(new_parts);
  }
  return nullptr;
}

void TildeDetectAssign(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* parts;
  int n;
  bool do_expand;
  syntax_asdl::word_part_t* cur;
  syntax_asdl::word_part_t* next_part;
  bool is_tilde;
  StackRoots _roots({&parts, &cur, &next_part});

  parts = w->parts;
  n = len(parts);
  parts->append(nullptr);
  do_expand = true;
  for (int i = 0; i < n; ++i) {
    cur = parts->index(i);
    if ((do_expand and LiteralId(cur) == Id::Lit_TildeLike)) {
      next_part = parts->index((i + 1));
      if (next_part) {
        is_tilde = (LiteralId(next_part) == Id::Lit_Colon or (LiteralId(next_part) == Id::Lit_Chars and static_cast<Token*>(next_part)->val->startswith(str1024)));
      }
      else {
        is_tilde = true;
      }
      if (is_tilde) {
        parts->set(i, Alloc<word_part::TildeSub>(static_cast<Token*>(cur)));
      }
    }
    do_expand = LiteralId(cur) == Id::Lit_Colon;
  }
  parts->pop();
}

List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::compound_word* t;
  StackRoots _roots({&out, &t});

  out = Alloc<List<syntax_asdl::word_t*>>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    t = TildeDetect(w);
    if (t) {
      out->append(t);
    }
    else {
      out->append(w);
    }
  }
  return out;
}

bool HasArrayPart(syntax_asdl::compound_word* w) {
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    if (part->tag_() == word_part_e::ShArrayLiteral) {
      return true;
    }
  }
  return false;
}

Str* ShFunctionName(syntax_asdl::compound_word* w) {
  bool ok;
  Str* s;
  bool quoted;
  StackRoots _roots({&s});

  Tuple3<bool, Str*, bool> tup2 = StaticEval(w);
  ok = tup2.at0();
  s = tup2.at1();
  quoted = tup2.at2();
  if ((!ok or quoted)) {
    return str1025;
  }
  return s;
}

syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;
  StackRoots _roots({&UP_part0});

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  UP_part0 = w->parts->index(0);
  if (LiteralId(UP_part0) != Id::Lit_ArithVarLike) {
    return nullptr;
  }
  return static_cast<Token*>(UP_part0);
}

bool IsVarLike(syntax_asdl::compound_word* w) {
  if (len(w->parts) == 0) {
    return false;
  }
  return LiteralId(w->parts->index(0)) == Id::Lit_VarLike;
}

Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> DetectShAssignment(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  int n;
  syntax_asdl::word_part_t* UP_part0;
  int id0;
  syntax_asdl::word_part_t* UP_part;
  StackRoots _roots({&no_token, &UP_part0, &UP_part});

  no_token = nullptr;
  n = len(w->parts);
  if (n == 0) {
    return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
  }
  UP_part0 = w->parts->index(0);
  id0 = LiteralId(UP_part0);
  if (id0 == Id::Lit_VarLike) {
    Token* tok = static_cast<Token*>(UP_part0);
    return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(tok, no_token, 1));
  }
  if (id0 == Id::Lit_ArrayLhsOpen) {
    Token* tok0 = static_cast<Token*>(UP_part0);
    if (n < 2) {
      return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
    }
    for (int i = 1; i < n; ++i) {
      UP_part = w->parts->index(i);
      if (LiteralId(UP_part) == Id::Lit_ArrayLhsClose) {
        Token* tok_close = static_cast<Token*>(UP_part);
        return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(tok0, tok_close, (i + 1)));
      }
    }
  }
  return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
}

Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* DetectAssocPair(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* parts;
  int n;
  int id_;
  syntax_asdl::compound_word* key;
  syntax_asdl::compound_word* value;
  Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* ret;
  StackRoots _roots({&parts, &key, &value, &ret});

  parts = w->parts;
  if (LiteralId(parts->index(0)) != Id::Lit_LBracket) {
    return nullptr;
  }
  n = len(parts);
  for (int i = 0; i < n; ++i) {
    id_ = LiteralId(parts->index(i));
    if (id_ == Id::Lit_ArrayLhsClose) {
      key = Alloc<compound_word>(parts->slice(1, i));
      value = Alloc<compound_word>(parts->slice((i + 1)));
      ret = (Alloc<Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>>(key, value));
      return ret;
    }
  }
  return nullptr;
}

Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> KeywordToken(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  syntax_asdl::word_part_t* UP_part0;
  int token_type;
  id_kind_asdl::Kind_t token_kind;
  StackRoots _roots({&no_token, &UP_part0, &token_kind});

  no_token = nullptr;
  if (len(w->parts) != 1) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
  }
  UP_part0 = w->parts->index(0);
  token_type = LiteralId(UP_part0);
  if (token_type == Id::Undefined_Tok) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
  }
  token_kind = consts::GetKind(token_type);
  if (token_kind == Kind::ControlFlow) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(token_kind, static_cast<Token*>(UP_part0)));
  }
  return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
}

syntax_asdl::Token* LiteralToken(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part0;
  StackRoots _roots({&part0});

  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  part0 = w->parts->index(0);
  if (part0->tag_() == word_part_e::Literal) {
    return static_cast<Token*>(part0);
  }
  return nullptr;
}

int ArithId(syntax_asdl::word_t* w) {
  if (w->tag_() == word_e::Token) {
    Token* tok = static_cast<Token*>(w);
    return tok->id;
  }
  return Id::Word_Compound;
}

int BoolId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;
  StackRoots _roots({&UP_w, &token_kind});

  UP_w = w;
  switch (w->tag_()) {
    case word_e::String: {
      word__String* w = static_cast<word__String*>(UP_w);
      return w->id;
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->id;
    }
      break;
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) != 1) {
        return Id::Word_Compound;
      }
      token_type = LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      if ((token_type == Id::KW_Bang || token_type == Id::Lit_DRightBracket)) {
        return token_type;
      }
      token_kind = consts::GetKind(token_type);
      if ((token_kind == Kind::BoolUnary || token_kind == Kind::BoolBinary)) {
        return token_type;
      }
      return Id::Word_Compound;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

int CommandId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;
  StackRoots _roots({&UP_w, &token_kind});

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->id;
    }
      break;
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) != 1) {
        return Id::Word_Compound;
      }
      token_type = LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      else {
        if ((token_type == Id::Lit_LBrace || token_type == Id::Lit_RBrace || token_type == Id::Lit_Equals || token_type == Id::Lit_Underscore || token_type == Id::ControlFlow_Return)) {
          return token_type;
        }
      }
      token_kind = consts::GetKind(token_type);
      if (token_kind == Kind::KW) {
        return token_type;
      }
      return Id::Word_Compound;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
}

id_kind_asdl::Kind_t CommandKind(syntax_asdl::word_t* w) {
  if (w->tag_() == word_e::Token) {
    Token* tok = static_cast<Token*>(w);
    return consts::GetKind(tok->id);
  }
  return Kind::Word;
}

bool IsVarSub(syntax_asdl::word_t* w) {
  return false;
}

int SpanForLhsExpr(syntax_asdl::sh_lhs_expr_t* node) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  List<int>* spids;
  StackRoots _roots({&UP_node, &spids});

  UP_node = node;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      spids = node->spids;
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      spids = node->spids;
    }
      break;
    default: {
      throw Alloc<AssertionError>();
    }
  }
  if (len(spids)) {
    return spids->index(0);
  }
  else {
    return runtime::NO_SPID;
  }
}

int SpanIdFromError(error::_ErrorWithLocation* error) {
  if (error->span_id != runtime::NO_SPID) {
    return error->span_id;
  }
  if (error->token) {
    return error->token->span_id;
  }
  if (error->part) {
    return LeftMostSpanForPart(error->part);
  }
  if (error->word) {
    return LeftMostSpanForWord(error->word);
  }
  return runtime::NO_SPID;
}

syntax_asdl::compound_word* ErrorWord(Str* error_str) {
  syntax_asdl::Token* t;
  StackRoots _roots({&t});

  t = Alloc<Token>(Id::Lit_Chars, runtime::NO_SPID, error_str);
  return Alloc<compound_word>(Alloc<List<syntax_asdl::word_part_t*>>(std::initializer_list<syntax_asdl::word_part_t*>{t}));
}

Str* Pretty(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  StackRoots _roots({&UP_w});

  UP_w = w;
  if (w->tag_() == word_e::String) {
    word__String* w = static_cast<word__String*>(UP_w);
    if (w->id == Id::Eof_Real) {
      return str1026;
    }
    else {
      return repr(w->s);
    }
  }
  else {
    return str(w);
  }
}

ctx_EmitDocToken::ctx_EmitDocToken(word_parse::WordParser* w_parser) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(ctx_EmitDocToken)) {
  w_parser->EmitDocToken(true);
  this->w_parser = w_parser;
}

ctx_EmitDocToken::~ctx_EmitDocToken(){
  this->w_parser->EmitDocToken(false);
}

}  // define namespace word_

namespace grammar {  // define

Grammar::Grammar() : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(Grammar)) {
  this->symbol2number = Alloc<Dict<Str*, int>>();
  this->number2symbol = Alloc<Dict<int, Str*>>();
  this->states = Alloc<List<List<Tuple2<int, int>*>*>>();
  this->dfas = Alloc<Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>>();
  this->labels = Alloc<List<int>>(std::initializer_list<int>{0});
  this->keywords = Alloc<Dict<Str*, int>>();
  this->tokens = Alloc<Dict<int, int>>();
  this->symbol2label = Alloc<Dict<Str*, int>>();
  this->start = 256;
}

}  // define namespace grammar

namespace pnode {  // define

PNode::PNode(int typ, syntax_asdl::Token* tok, List<pnode::PNode*>* children) : gc_heap::Obj(Tag::FixedSize, kZeroMask, sizeof(PNode)) {
  this->typ = typ;
  this->tok = tok;
  this->children = children;
}

}  // define namespace pnode

namespace cgi {  // define

Str* escape(Str* s) {
  StackRoots _roots({&s});

  s = s->replace(str1034, str1035);
  s = s->replace(str1036, str1037);
  s = s->replace(str1038, str1039);
  return s;
}

}  // define namespace cgi

namespace os_path {  // define
Str* extsep = str1040;
Str* sep = str1041;

Str* join(Str* s1, Str* s2) {
  if ((s2->startswith(str1042) or len(s1) == 0)) {
    return s2;
  }
  if (s1->endswith(str1043)) {
    return str_concat(s1, s2);
  }
  return fmt308(s1, s2);
}

Tuple2<Str*, Str*> split(Str* p) {
  int i;
  Str* head;
  Str* tail;
  StackRoots _roots({&head, &tail});

  i = (p->rfind(str1045) + 1);
  head = p->slice(0, i);
  tail = p->slice(i);
  if ((len(head) and !(str_equals(head, str_repeat(str1046, len(head)))))) {
    head = head->rstrip(str1047);
  }
  return (Tuple2<Str*, Str*>(head, tail));
}

Tuple2<Str*, Str*> _splitext(Str* p, Str* sep, Str* extsep) {
  int sepIndex;
  int dotIndex;
  int filenameIndex;
  sepIndex = p->rfind(sep);
  dotIndex = p->rfind(extsep);
  if (dotIndex > sepIndex) {
    filenameIndex = (sepIndex + 1);
    while (filenameIndex < dotIndex) {
      if (!(str_equals(p->index(filenameIndex), extsep))) {
        return (Tuple2<Str*, Str*>(p->slice(0, dotIndex), p->slice(dotIndex)));
      }
      filenameIndex += 1;
    }
  }
  return (Tuple2<Str*, Str*>(p, str1048));
}

Tuple2<Str*, Str*> splitext(Str* p) {
  return _splitext(p, sep, extsep);
}

Str* basename(Str* p) {
  int i;
  i = (p->rfind(str1049) + 1);
  return p->slice(i);
}

Str* dirname(Str* p) {
  int i;
  Str* head;
  StackRoots _roots({&head});

  i = (p->rfind(str1050) + 1);
  head = p->slice(0, i);
  if ((head and !(str_equals(head, str_repeat(str1051, len(head)))))) {
    head = head->rstrip(str1052);
  }
  return head;
}

Str* normpath(Str* path) {
  Str* slash;
  Str* dot;
  int initial_slashes;
  List<Str*>* comps;
  List<Str*>* new_comps;
  StackRoots _roots({&slash, &dot, &comps, &new_comps, &path});

  slash = str1053;
  dot = str1054;
  if (str_equals(path, str1055)) {
    return dot;
  }
  initial_slashes = path->startswith(str1056);
  if ((initial_slashes and (path->startswith(str1057) and !path->startswith(str1058)))) {
    initial_slashes = 2;
  }
  comps = path->split(str1059);
  new_comps = Alloc<List<Str*>>();
  for (ListIter<Str*> it(comps); !it.Done(); it.Next()) {
    Str* comp = it.Value();
    if ((len(comp) == 0 or str_equals(comp, str1060))) {
      continue;
    }
    if ((!(str_equals(comp, str1061)) or ((initial_slashes == 0 and len(new_comps) == 0) or (len(new_comps) and str_equals(new_comps->index(-1), str1062))))) {
      new_comps->append(comp);
    }
    else {
      if (len(new_comps)) {
        new_comps->pop();
      }
    }
  }
  comps = new_comps;
  path = slash->join(comps);
  if (initial_slashes) {
    path = str_concat(str_repeat(slash, initial_slashes), path);
  }
  return len(path) ? path : dot;
}

bool isabs(Str* s) {
  return s->startswith(str1063);
}

Str* abspath(Str* path) {
  Str* cwd;
  StackRoots _roots({&cwd, &path});

  if (!isabs(path)) {
    cwd = posix::getcwd();
    path = join(cwd, path);
  }
  return normpath(path);
}

}  // define namespace os_path

namespace qsn_native {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using syntax_asdl::Token;
using types_asdl::lex_mode_e;
using types_asdl::lex_mode_t;

bool _IsWhitespace(Str* s) {
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* ch = it.Value();
    if (!str_contains(str1064, ch)) {
      return false;
    }
  }
  return true;
}

List<syntax_asdl::Token*>* Parse(lexer::Lexer* lexer) {
  syntax_asdl::Token* tok;
  List<syntax_asdl::Token*>* result;
  id_kind_asdl::Kind_t kind;
  StackRoots _roots({&tok, &result, &kind});

  tok = lexer->Read(lex_mode_e::QSN);
  result = Alloc<List<syntax_asdl::Token*>>();
  while (true) {
    tok = lexer->Read(lex_mode_e::QSN);
    if (tok->id == Id::Unknown_Tok) {
      p_die(fmt309(), tok);
    }
    kind = consts::GetKind(tok->id);
    if (kind != Kind::Char) {
      break;
    }
    result->append(tok);
  }
  if (tok->id != Id::Right_SingleQuote) {
    p_die(fmt310(), tok);
  }
  tok = lexer->Read(lex_mode_e::SQ_C);
  if (tok->id == Id::Char_Literals) {
    if (!_IsWhitespace(tok->val)) {
      p_die(fmt311(), tok);
    }
    tok = lexer->Read(lex_mode_e::QSN);
  }
  if (tok->id != Id::Eof_Real) {
    p_die(fmt312(), tok);
  }
  return result;
}

}  // define namespace qsn_native

namespace qsn {  // define
int BIT8_UTF8 = 0;
int BIT8_U_ESCAPE = 1;
int BIT8_X_ESCAPE = 2;
int MUST_QUOTE = 4;

bool _encode(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts) {
  if (bit8_display == BIT8_X_ESCAPE) {
    _encode_bytes_x(s, shell_compat, parts);
    return true;
  }
  else {
    return _encode_runes(s, bit8_display, shell_compat, parts);
  }
}

Str* maybe_shell_encode(Str* s) {
  return maybe_shell_encode(s, 0);
}

Str* maybe_shell_encode(Str* s, int flags) {
  int quote;
  int must_quote;
  int bit8_display;
  List<Str*>* parts;
  bool valid_utf8;
  Str* prefix;
  StackRoots _roots({&parts, &prefix});

  quote = 0;
  must_quote = (flags & 4);
  bit8_display = (flags & 3);
  if (len(s) == 0) {
    quote = 1;
  }
  else {
    for (StrIter it(s); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if ((!must_quote and IsPlainChar(ch))) {
        continue;
      }
      quote = 1;
      if ((str_contains(str1069, ch) or IsUnprintableLow(ch))) {
        quote = 2;
        break;
      }
    }
  }
  if (quote == 0) {
    return s;
  }
  parts = Alloc<List<Str*>>();
  valid_utf8 = _encode(s, bit8_display, true, parts);
  if ((!valid_utf8 or quote == 2)) {
    prefix = str1070;
  }
  else {
    prefix = str1071;
  }
  parts->append(str1072);
  return str_concat(prefix, str1073->join(parts));
}

Str* maybe_encode(Str* s) {
  return maybe_encode(s, BIT8_UTF8);
}

Str* maybe_encode(Str* s, int bit8_display) {
  int quote;
  List<Str*>* parts;
  StackRoots _roots({&parts});

  quote = 0;
  if (len(s) == 0) {
    quote = 1;
  }
  else {
    for (StrIter it(s); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if (IsPlainChar(ch)) {
        continue;
      }
      quote = 1;
    }
  }
  if (!quote) {
    return s;
  }
  parts = Alloc<List<Str*>>();
  parts->append(str1074);
  _encode(s, bit8_display, false, parts);
  parts->append(str1075);
  return str1076->join(parts);
}

Str* encode(Str* s, int bit8_display) {
  List<Str*>* parts;
  StackRoots _roots({&parts});

  parts = Alloc<List<Str*>>();
  parts->append(str1077);
  _encode(s, bit8_display, false, parts);
  parts->append(str1078);
  return str1079->join(parts);
}

void _encode_bytes_x(Str* s, bool shell_compat, List<Str*>* parts) {
  Str* part;
  StackRoots _roots({&part});

  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* byte = it.Value();
    if (str_equals(byte, str1080)) {
      part = str1081;
    }
    else {
      if (str_equals(byte, str1082)) {
        part = str1083;
      }
      else {
        if (str_equals(byte, str1084)) {
          part = str1085;
        }
        else {
          if (str_equals(byte, str1086)) {
            part = str1087;
          }
          else {
            if (str_equals(byte, str1088)) {
              part = str1089;
            }
            else {
              if (str_equals(byte, str1090)) {
                part = shell_compat ? str1091 : str1092;
              }
              else {
                if (IsUnprintableLow(byte)) {
                  part = XEscape(byte);
                }
                else {
                  if (IsUnprintableHigh(byte)) {
                    part = XEscape(byte);
                  }
                  else {
                    part = byte;
                  }
                }
              }
            }
          }
        }
      }
    }
    parts->append(part);
  }
}
int Ascii = 0;
int Begin2 = 1;
int Begin3 = 2;
int Begin4 = 3;
int Cont = 4;
int Invalid = 5;
int Start = 0;
int B2_1 = 1;
int B3_1 = 2;
int B4_1 = 3;
int B3_2 = 4;
int B4_2 = 5;
int B4_3 = 6;

bool _encode_runes(Str* s, int bit8_display, bool shell_compat, List<Str*>* parts) {
  bool valid_utf8;
  int state;
  Str* r1;
  Str* r2;
  Str* r3;
  int b;
  int typ;
  Str* out;
  int rune;
  StackRoots _roots({&r1, &r2, &r3, &out});

  valid_utf8 = true;
  state = Start;
  r1 = str1093;
  r2 = str1094;
  r3 = str1095;
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* byte = it.Value();
    b = ord(byte);
    if (b < 127) {
      typ = Ascii;
    }
    else {
      if ((b >> 6) == 2) {
        typ = Cont;
      }
      else {
        if ((b >> 5) == 6) {
          typ = Begin2;
        }
        else {
          if ((b >> 4) == 14) {
            typ = Begin3;
          }
          else {
            if ((b >> 3) == 30) {
              typ = Begin4;
            }
            else {
              typ = Invalid;
            }
          }
        }
      }
    }
    if (typ != Cont) {
      if (state >= B2_1) {
        valid_utf8 = false;
        parts->append(XEscape(r1));
      }
      if (state >= B3_2) {
        parts->append(XEscape(r2));
      }
      if (state >= B4_3) {
        parts->append(XEscape(r3));
      }
    }
    if (typ == Ascii) {
      state = Start;
      if (str_equals(byte, str1096)) {
        out = str1097;
      }
      else {
        if (str_equals(byte, str1098)) {
          out = str1099;
        }
        else {
          if (str_equals(byte, str1100)) {
            out = str1101;
          }
          else {
            if (str_equals(byte, str1102)) {
              out = str1103;
            }
            else {
              if (str_equals(byte, str1104)) {
                out = str1105;
              }
              else {
                if (str_equals(byte, str1106)) {
                  out = shell_compat ? str1107 : str1108;
                }
                else {
                  if (IsUnprintableLow(byte)) {
                    if (bit8_display == BIT8_U_ESCAPE) {
                      out = UEscape(ord(byte));
                    }
                    else {
                      out = XEscape(byte);
                    }
                  }
                  else {
                    out = byte;
                  }
                }
              }
            }
          }
        }
      }
      parts->append(out);
    }
    else {
      if (typ == Begin2) {
        state = B2_1;
        r1 = byte;
      }
      else {
        if (typ == Begin3) {
          state = B3_1;
          r1 = byte;
        }
        else {
          if (typ == Begin4) {
            state = B4_1;
            r1 = byte;
          }
          else {
            if (typ == Invalid) {
              state = Start;
              parts->append(XEscape(byte));
              valid_utf8 = false;
            }
            else {
              if (typ == Cont) {
                if (state == Start) {
                  parts->append(XEscape(byte));
                  valid_utf8 = false;
                }
                else {
                  if (state == B2_1) {
                    if (bit8_display == BIT8_UTF8) {
                      out = str_concat(r1, byte);
                    }
                    else {
                      rune = (ord(byte) & 63);
                      rune |= ((ord(r1) & 31) << 6);
                      out = UEscape(rune);
                    }
                    parts->append(out);
                    state = Start;
                  }
                  else {
                    if (state == B3_1) {
                      r2 = byte;
                      state = B3_2;
                    }
                    else {
                      if (state == B3_2) {
                        if (bit8_display == BIT8_UTF8) {
                          out = str_concat(str_concat(r1, r2), byte);
                        }
                        else {
                          rune = (ord(byte) & 63);
                          rune |= ((ord(r2) & 63) << 6);
                          rune |= ((ord(r1) & 15) << 12);
                          out = UEscape(rune);
                        }
                        parts->append(out);
                        state = Start;
                      }
                      else {
                        if (state == B4_1) {
                          r2 = byte;
                          state = B4_2;
                        }
                        else {
                          if (state == B4_2) {
                            r3 = byte;
                            state = B4_3;
                          }
                          else {
                            if (state == B4_3) {
                              if (bit8_display == BIT8_UTF8) {
                                out = str_concat(str_concat(str_concat(r1, r2), r3), byte);
                              }
                              else {
                                rune = (ord(byte) & 63);
                                rune |= ((ord(r3) & 63) << 6);
                                rune |= ((ord(r2) & 63) << 12);
                                rune |= ((ord(r1) & 7) << 18);
                                out = UEscape(rune);
                              }
                              parts->append(out);
                              state = Start;
                            }
                            else {
                              throw Alloc<AssertionError>();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                throw Alloc<AssertionError>();
              }
            }
          }
        }
      }
    }
  }
  if (state >= B2_1) {
    valid_utf8 = false;
    parts->append(XEscape(r1));
  }
  if (state >= B3_2) {
    parts->append(XEscape(r2));
  }
  if (state >= B4_3) {
    parts->append(XEscape(r3));
  }
  return valid_utf8;
}

Str* maybe_tsv_encode(Str* s, int bit8_display) {
  ;  // pass
}

Str* tsv_decode(Str* s) {
  ;  // pass
}

}  // define namespace qsn

namespace builtin_bracket {  // define
namespace Id = id_kind_asdl::Id;
namespace value = runtime_asdl::value;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__String;
namespace bool_expr = syntax_asdl::bool_expr;
using types_asdl::lex_mode_e;

_StringWordEmitter::_StringWordEmitter(runtime_asdl::cmd_value__Argv* cmd_val) {
  this->cmd_val = cmd_val;
  this->i = 0;
  this->n = len(cmd_val->argv);
}

syntax_asdl::word__String* _StringWordEmitter::ReadWord(types_asdl::lex_mode_t unused_lex_mode) {
  syntax_asdl::word__String* w;
  Str* s;
  int left_spid;
  int id_;
  StackRoots _roots({&w, &s});

  if (this->i == this->n) {
    w = Alloc<word::String>(Id::Eof_Real, str1109, runtime::NO_SPID);
    return w;
  }
  s = this->cmd_val->argv->index(this->i);
  left_spid = this->cmd_val->arg_spids->index(this->i);
  this->i += 1;
  id_ = match::BracketUnary(s);
  if (id_ == Id::Undefined_Tok) {
    id_ = match::BracketBinary(s);
  }
  if (id_ == Id::Undefined_Tok) {
    id_ = match::BracketOther(s);
  }
  if (id_ == Id::Undefined_Tok) {
    id_ = Id::Word_Compound;
  }
  w = Alloc<word::String>(id_, s, left_spid);
  return w;
}

syntax_asdl::word__String* _StringWordEmitter::Read() {
  return this->ReadWord(lex_mode_e::ShCommand);
}

Str* _StringWordEmitter::Peek(int offset) {
  return this->cmd_val->argv->index((this->i + offset));
}

void _StringWordEmitter::Rewind(int offset) {
  this->i -= offset;
}

_WordEvaluator::_WordEvaluator() : word_eval::StringWordEvaluator() {
}

runtime_asdl::value__Str* _WordEvaluator::EvalWordToString(syntax_asdl::word_t* w) {
  return EvalWordToString(w, quote_e::Default);
}

runtime_asdl::value__Str* _WordEvaluator::EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind) {
  word__String* string_word = static_cast<word__String*>(w);
  return Alloc<value::Str>(string_word->s);
}

syntax_asdl::bool_expr_t* _TwoArgs(builtin_bracket::_StringWordEmitter* w_parser) {
  syntax_asdl::word__String* w0;
  syntax_asdl::word__String* w1;
  Str* s0;
  int unary_id;
  StackRoots _roots({&w0, &w1, &s0});

  w0 = w_parser->Read();
  w1 = w_parser->Read();
  s0 = w0->s;
  if (maybe_str_equals(s0, str1110)) {
    return Alloc<bool_expr::LogicalNot>(Alloc<bool_expr::WordTest>(w1));
  }
  unary_id = Id::Undefined_Tok;
  if (w0->s->startswith(str1111)) {
    if (maybe_str_equals(s0, str1112)) {
      unary_id = Id::BoolUnary_d;
    }
    else {
      if (maybe_str_equals(s0, str1113)) {
        unary_id = Id::BoolUnary_e;
      }
      else {
        if (maybe_str_equals(s0, str1114)) {
          unary_id = Id::BoolUnary_f;
        }
        else {
          if (maybe_str_equals(s0, str1115)) {
            unary_id = Id::BoolUnary_L;
          }
        }
      }
    }
  }
  if (unary_id == Id::Undefined_Tok) {
    unary_id = match::BracketUnary(w0->s);
  }
  if (unary_id == Id::Undefined_Tok) {
    p_die(fmt313(w0->s), w0);
  }
  return Alloc<bool_expr::Unary>(unary_id, w1);
}

syntax_asdl::bool_expr_t* _ThreeArgs(builtin_bracket::_StringWordEmitter* w_parser) {
  syntax_asdl::word__String* w0;
  syntax_asdl::word__String* w1;
  syntax_asdl::word__String* w2;
  int binary_id;
  syntax_asdl::bool_expr_t* child;
  StackRoots _roots({&w0, &w1, &w2, &child});

  w0 = w_parser->Read();
  w1 = w_parser->Read();
  w2 = w_parser->Read();
  binary_id = match::BracketBinary(w1->s);
  if (binary_id != Id::Undefined_Tok) {
    return Alloc<bool_expr::Binary>(binary_id, w0, w2);
  }
  if (maybe_str_equals(w1->s, str1117)) {
    return Alloc<bool_expr::LogicalAnd>(Alloc<bool_expr::WordTest>(w0), Alloc<bool_expr::WordTest>(w2));
  }
  if (maybe_str_equals(w1->s, str1118)) {
    return Alloc<bool_expr::LogicalOr>(Alloc<bool_expr::WordTest>(w0), Alloc<bool_expr::WordTest>(w2));
  }
  if (maybe_str_equals(w0->s, str1119)) {
    w_parser->Rewind(2);
    child = _TwoArgs(w_parser);
    return Alloc<bool_expr::LogicalNot>(child);
  }
  if ((maybe_str_equals(w0->s, str1120) and maybe_str_equals(w2->s, str1121))) {
    return Alloc<bool_expr::WordTest>(w1);
  }
  p_die(fmt314(w1->s), w1);
}

Test::Test(bool need_right_bracket, optview::Exec* exec_opts, state::Mem* mem, ui::ErrorFormatter* errfmt) {
  this->need_right_bracket = need_right_bracket;
  this->exec_opts = exec_opts;
  this->mem = mem;
  this->errfmt = errfmt;
}

int Test::Run(runtime_asdl::cmd_value__Argv* cmd_val) {
  List<Str*>* strs;
  builtin_bracket::_StringWordEmitter* w_parser;
  bool_parse::BoolParser* b_parser;
  syntax_asdl::bool_expr_t* bool_node;
  int n;
  syntax_asdl::word__String* w;
  Str* a0;
  syntax_asdl::bool_expr_t* child;
  builtin_bracket::_WordEvaluator* word_ev;
  sh_expr_eval::BoolEvaluator* bool_ev;
  bool b;
  int status;
  StackRoots _roots({&strs, &w_parser, &b_parser, &bool_node, &w, &a0, &child, &word_ev, &bool_ev});

  if (this->need_right_bracket) {
    if (this->exec_opts->simple_test_builtin()) {
      e_usage(str1123);
    }
    strs = cmd_val->argv;
    if ((!strs or !(str_equals(strs->index(-1), str1124)))) {
      this->errfmt->Print_(str1125, cmd_val->arg_spids->index(0));
      return 2;
    }
    cmd_val->argv->pop();
    cmd_val->arg_spids->pop();
  }
  w_parser = Alloc<_StringWordEmitter>(cmd_val);
  w_parser->Read();
  b_parser = Alloc<bool_parse::BoolParser>(w_parser);
  bool_node = nullptr;
  n = (len(cmd_val->argv) - 1);
  if ((this->exec_opts->simple_test_builtin() and n > 3)) {
    e_usage(str1126);
  }
  try {
    if (n == 0) {
      return 1;
    }
    else {
      if (n == 1) {
        w = w_parser->Read();
        bool_node = Alloc<bool_expr::WordTest>(w);
      }
      else {
        if (n == 2) {
          bool_node = _TwoArgs(w_parser);
        }
        else {
          if (n == 3) {
            bool_node = _ThreeArgs(w_parser);
          }
        }
      }
    }
    if (n == 4) {
      a0 = w_parser->Peek(0);
      if (str_equals(a0, str1127)) {
        w_parser->Read();
        child = _ThreeArgs(w_parser);
        bool_node = Alloc<bool_expr::LogicalNot>(child);
      }
      else {
        if ((str_equals(a0, str1128) and str_equals(w_parser->Peek(3), str1129))) {
          w_parser->Read();
          bool_node = _TwoArgs(w_parser);
        }
        else {
          ;  // pass
        }
      }
    }
    if (bool_node == nullptr) {
      bool_node = b_parser->ParseForBuiltin();
    }
  }
  catch (error::Parse* e) {
    this->errfmt->PrettyPrintError(e, str1130);
    return 2;
  }
  word_ev = Alloc<_WordEvaluator>();
  bool_ev = Alloc<sh_expr_eval::BoolEvaluator>(this->mem, this->exec_opts, nullptr, this->errfmt);
  bool_ev->Init_AlwaysStrict();
  bool_ev->word_ev = word_ev;
  bool_ev->CheckCircularDeps();
  try {
    b = bool_ev->EvalB(bool_node);
  }
  catch (error::_ErrorWithLocation* e) {
    this->errfmt->PrettyPrintError(e, str1131);
    return 2;
  }
  status = b ? 0 : 1;
  return status;
}

}  // define namespace builtin_bracket

int main(int argc, char **argv) {
  gc_heap::gHeap.Init(400 << 20);  // 400 MiB matches dumb_alloc.cc
  auto* args = Alloc<List<Str*>>();
  for (int i = 0; i < argc; ++i) {
    args->append(Alloc<Str>(argv[i]));
  }
  int status;

  // For benchmarking
  char* repeat = getenv("REPEAT");
  if (repeat) {
    Str* r = Alloc<Str>(repeat);
    int n = to_int(r);
    log("Running %d times", n);
    for (int i = 0; i < n; ++i) { 
      status = osh_eval::main(args);
    }
    // TODO: clear memory?
  } else {
    status = osh_eval::main(args);
  }

  dumb_alloc::Summarize();
  return status;
}
