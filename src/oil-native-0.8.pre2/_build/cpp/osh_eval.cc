// osh_eval.cc: translated from Python by mycpp

#include "dumb_alloc.h"
#include "mylib.h"
#include "preamble.h"  // hard-coded stuff

Str* str0 = new Str("(");
Str* str1 = new Str(")");
Str* str2 = new Str("_");
Str* str3 = new Str("T");
Str* str4 = new Str("F");
Str* str5 = new Str("\n<html>\n  <head>\n     <title>oil AST</title>\n     <style>\n      .n { color: brown }\n      .s { font-weight: bold }\n      .o { color: darkgreen }\n     </style>\n  </head>\n  <body>\n    <pre>\n");
Str* str6 = new Str("\n    </pre>\n  </body>\n</html>\n    ");
Str* str7 = new Str("n");
Str* str8 = new Str("s");
Str* str9 = new Str("o");
Str* str10 = new Str("o");
Str* str11 = new Str("o");
Str* str12 = new Str("<span class=\"%s\">");
Str* str13 = new Str("</span>");
Str* str14 = new Str("\u001b[0;0m");
Str* str15 = new Str("\u001b[1m");
Str* str16 = new Str("\u001b[31m");
Str* str17 = new Str("\u001b[32m");
Str* str18 = new Str("\u001b[34m");
Str* str19 = new Str("\u001b[33m");
Str* str20 = new Str("\u001b[36m");
Str* str21 = new Str(" ");
Str* str22 = new Str("\n");
Str* str23 = new Str(" ");
Str* str24 = new Str("]");
Str* str25 = new Str(" ");
Str* str26 = new Str(" ");
Str* str27 = new Str("\n");
Str* str28 = new Str("\n");
Str* str29 = new Str(" ");
Str* str30 = new Str("%s%s: [");
Str* str31 = new Str("\n");
Str* str32 = new Str("\n");
Str* str33 = new Str("%s]");
Str* str34 = new Str("%s%s: ");
Str* str35 = new Str("\n");
Str* str36 = new Str("\n");
Str* str37 = new Str(" ");
Str* str38 = new Str(" ");
Str* str39 = new Str(" ");
Str* str40 = new Str(" %s:");
Str* str41 = new Str("[");
Str* str42 = new Str(" ");
Str* str43 = new Str("]");
Str* str44 = new Str("arg %r");
Str* str45 = new Str("arith val %d");
Str* str46 = new Str("Unhandled node %s");
Str* str47 = new Str("-n");
Str* str48 = new Str("-a");
Str* str49 = new Str("none");
Str* str50 = new Str("-c");
Str* str51 = new Str("");
Str* str52 = new Str("\n");
Str* str53 = new Str("-c flag");
Str* str54 = new Str("Span ID out of range: %d is greater than %d");
Str* str55 = new Str(" \t\n\"'><=;|&(:");
Str* str56 = new Str("/");
Str* str57 = new Str("PATH");
Str* str58 = new Str(":");
Str* str59 = new Str("SHELLOPTS");
Str* str60 = new Str(":");
Str* str61 = new Str("Syntax options must be set at the top level (outside any function)");
Str* str62 = new Str("got invalid option %r");
Str* str63 = new Str("errexit");
Str* str64 = new Str("verbose");
Str* str65 = new Str("Warning: set -o verbose not implemented");
Str* str66 = new Str("got invalid option %r");
Str* str67 = new Str("SHELLOPTS");
Str* str68 = new Str("%s:%s");
Str* str69 = new Str("SHELLOPTS");
Str* str70 = new Str(":");
Str* str71 = new Str(":");
Str* str72 = new Str("SHELLOPTS");
Str* str73 = new Str("oil:basic");
Str* str74 = new Str("oil:all");
Str* str75 = new Str("strict:all");
Str* str76 = new Str("got invalid option %r");
Str* str77 = new Str("got invalid option %r");
Str* str78 = new Str("errexit");
Str* str79 = new Str("set %so %s");
Str* str80 = new Str("-");
Str* str81 = new Str("+");
Str* str82 = new Str("got invalid option %r");
Str* str83 = new Str("shopt -%s %s");
Str* str84 = new Str("s");
Str* str85 = new Str("u");
Str* str86 = new Str("<_ArgFrame %s %d at %x>");
Str* str87 = new Str("Can't determine working directory: %s");
Str* str88 = new Str("IFS");
Str* str89 = new Str("UID");
Str* str90 = new Str("EUID");
Str* str91 = new Str("PPID");
Str* str92 = new Str("HOSTNAME");
Str* str93 = new Str("OSTYPE");
Str* str94 = new Str("OPTIND");
Str* str95 = new Str("1");
Str* str96 = new Str("PS4");
Str* str97 = new Str("+ ");
Str* str98 = new Str("COMP_WORDBREAKS");
Str* str99 = new Str("SHELLOPTS");
Str* str100 = new Str("SHELLOPTS");
Str* str101 = new Str("");
Str* str102 = new Str("SHELLOPTS");
Str* str103 = new Str("PWD");
Str* str104 = new Str("PWD");
Str* str105 = new Str("PWD");
Str* str106 = new Str("PWD");
Str* str107 = new Str("");
Str* str108 = new Str("");
Str* str109 = new Str("<Mem");
Str* str110 = new Str("  -- %d --");
Str* str111 = new Str("  %s %s");
Str* str112 = new Str(">");
Str* str113 = new Str("\n");
Str* str114 = new Str("\n");
Str* str115 = new Str("Warning: span_id undefined in SetCurrentSpanId");
Str* str116 = new Str("nameref %r is undefined");
Str* str117 = new Str("nameref %r contains invalid variable name %r");
Str* str118 = new Str("%r has already been declared");
Str* str119 = new Str("%r hasn't been declared");
Str* str120 = new Str("nameref cycle: %s");
Str* str121 = new Str(" -> ");
Str* str122 = new Str("Can't assign to readonly value %r");
Str* str123 = new Str("Only strings can be exported");
Str* str124 = new Str("nameref must be a string");
Str* str125 = new Str("Can't assign to readonly array");
Str* str126 = new Str("Can't assign to items in a string");
Str* str127 = new Str("Object of type %s can't be indexed");
Str* str128 = new Str("Can't assign to readonly associative array");
Str* str129 = new Str("ARGV");
Str* str130 = new Str("PIPESTATUS");
Str* str131 = new Str("FUNCNAME");
Str* str132 = new Str("source");
Str* str133 = new Str("BASH_SOURCE");
Str* str134 = new Str("BASH_LINENO");
Str* str135 = new Str("0");
Str* str136 = new Str("LINENO");
Str* str137 = new Str("EOF");
Str* str138 = new Str("/");
Str* str139 = new Str("~");
Str* str140 = new Str("  ");
Str* str141 = new Str("\n  ");
Str* str142 = new Str("\t");
Str* str143 = new Str("\t");
Str* str144 = new Str(" ");
Str* str145 = new Str("^");
Str* str146 = new Str("~");
Str* str147 = new Str("\n");
Str* str148 = new Str("[ interactive ]");
Str* str149 = new Str("[ -c flag ]");
Str* str150 = new Str("[ stdin%s ]");
Str* str151 = new Str("[ expansion of alias %r ]");
Str* str152 = new Str("[ backticks at ... ]");
Str* str153 = new Str("[ array LValue in %s ]");
Str* str154 = new Str("[ eval at line %d of %s ]");
Str* str155 = new Str("[ trap ]");
Str* str156 = new Str("%s:%d: %s%s\n");
Str* str157 = new Str("[??? no location ???] %s%s\n");
Str* str158 = new Str("");
Str* str159 = new Str("");
Str* str160 = new Str("<LineLexer at pos %d of line %r (id = %d)>");
Str* str161 = new Str("");
Str* str162 = new Str("");
Str* str163 = new Str("");
Str* str164 = new Str("<Trail %s %s %s %s>");
Str* str165 = new Str("");
Str* str166 = new Str("ShAssignment expression can't be nested like this");
Str* str167 = new Str("Here docs aren't allowed in expressions");
Str* str168 = new Str("  ");
Str* str169 = new Str("-");
Str* str170 = new Str("%s%d %s %s\n");
Str* str171 = new Str("");
Str* str172 = new Str(" (%s)");
Str* str173 = new Str("Unexpected token in expression mode%s");
Str* str174 = new Str("Syntax error in expression");
Str* str175 = new Str("alnum");
Str* str176 = new Str("cntrl");
Str* str177 = new Str("lower");
Str* str178 = new Str("space");
Str* str179 = new Str("alpha");
Str* str180 = new Str("digit");
Str* str181 = new Str("print");
Str* str182 = new Str("upper");
Str* str183 = new Str("blank");
Str* str184 = new Str("graph");
Str* str185 = new Str("punct");
Str* str186 = new Str("xdigit");
Str* str187 = new Str("Range start/end shouldn't have more than one character");
Str* str188 = new Str("Write singleton tuples with tup(), not a trailing comma");
Str* str189 = new Str("testlist_comp");
Str* str190 = new Str("PNode type %d (%s) wasn't handled");
Str* str191 = new Str("Can't assign to this expression");
Str* str192 = new Str("PNode type %d (%s) wasn't handled");
Str* str193 = new Str("TODO");
Str* str194 = new Str("dot");
Str* str195 = new Str("Can't negate this symbol");
Str* str196 = new Str("%r isn't a character class");
Str* str197 = new Str("Can't negate this symbol");
Str* str198 = new Str("%r isn't a character class");
Str* str199 = new Str("%start");
Str* str200 = new Str("%end");
Str* str201 = new Str("dot");
Str* str202 = new Str("Unexpected token %r in regex");
Str* str203 = new Str("This value can't be assigned to");
Str* str204 = new Str("The [ operarator doesn't apply to this expression");
Str* str205 = new Str("Expected ]]");
Str* str206 = new Str("Unexpected trailing word %s");
Str* str207 = new Str("Invalid argument to unary operator");
Str* str208 = new Str("Expected ), got %s");
Str* str209 = new Str("Unexpected token in boolean expression");
Str* str210 = new Str("");
Str* str211 = new Str("Expected %d, got %d");
Str* str212 = new Str("Step can't be 0");
Str* str213 = new Str("Invalid step %d for ascending integer range");
Str* str214 = new Str("Invalid step %d for descending integer range");
Str* str215 = new Str("Invalid step %d for ascending character range");
Str* str216 = new Str("Invalid step %d for descending character range");
Str* str217 = new Str("Mismatched cases in character range");
Str* str218 = new Str("");
Str* str219 = new Str("0");
Str* str220 = new Str("0");
Str* str221 = new Str("Couldn't find terminator for here doc that starts here");
Str* str222 = new Str("\t");
Str* str223 = new Str("Invalid here doc delimiter");
Str* str224 = new Str("+");
Str* str225 = new Str("+");
Str* str226 = new Str("+");
Str* str227 = new Str("%d != %d");
Str* str228 = new Str("Environment binding shouldn't look like an array assignment");
Str* str229 = new Str("+");
Str* str230 = new Str("Expected = in environment binding, got +=");
Str* str231 = new Str("Environment bindings can't contain array literals");
Str* str232 = new Str("Expected word type %s, got %s");
Str* str233 = new Str("Invalid token after redirect operator");
Str* str234 = new Str(" ");
Str* str235 = new Str(" ");
Str* str236 = new Str("line IDs %d != %d");
Str* str237 = new Str(" ");
Str* str238 = new Str("");
Str* str239 = new Str("Unexpected block");
Str* str240 = new Str("=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression");
Str* str241 = new Str("name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =");
Str* str242 = new Str("Unexpected block");
Str* str243 = new Str("Unexpected block");
Str* str244 = new Str("Control flow shouldn't have redirects");
Str* str245 = new Str("Control flow shouldn't have environment bindings");
Str* str246 = new Str("Unexpected argument to %r");
Str* str247 = new Str("Invalid word in for loop");
Str* str248 = new Str("Invalid word after for expression");
Str* str249 = new Str("Loop variable name should be a constant");
Str* str250 = new Str("Invalid loop variable name");
Str* str251 = new Str("Unexpected word after for loop variable");
Str* str252 = new Str("Expected ;; or esac");
Str* str253 = new Str("Unexpected word while parsing compound command");
Str* str254 = new Str("Invalid function name");
Str* str255 = new Str("Expected ) in function definition");
Str* str256 = new Str("Invalid KSH-style function name");
Str* str257 = new Str("Unexpected word when parsing command");
Str* str258 = new Str("Unexpected right brace");
Str* str259 = new Str("Unexpected EOF while parsing command");
Str* str260 = new Str("Invalid word while parsing command");
Str* str261 = new Str("Unexpected word while parsing command line");
Str* str262 = new Str("Unterminated here doc began here");
Str* str263 = new Str("\\");
Str* str264 = new Str("*");
Str* str265 = new Str("?");
Str* str266 = new Str("[");
Str* str267 = new Str("]");
Str* str268 = new Str("\\*?[]-:!");
Str* str269 = new Str("\\^-");
Str* str270 = new Str("\\?*+{}^$.()|");
Str* str271 = new Str("\\");
Str* str272 = new Str("Unexpected escaped character %r");
Str* str273 = new Str("");
Str* str274 = new Str("");
Str* str275 = new Str("Malformed character class; treating as literal");
Str* str276 = new Str("Got unescaped right bracket");
Str* str277 = new Str("Got unescaped trailing backslash");
Str* str278 = new Str(".|^$()+*?[]{}\\");
Str* str279 = new Str("\\");
Str* str280 = new Str("\\");
Str* str281 = new Str("\\[");
Str* str282 = new Str("\\]");
Str* str283 = new Str("\\\\");
Str* str284 = new Str(".");
Str* str285 = new Str(".*");
Str* str286 = new Str("[");
Str* str287 = new Str("^");
Str* str288 = new Str("]");
Str* str289 = new Str("");
Str* str290 = new Str("Error expanding glob %r: %s");
Str* str291 = new Str("-");
Str* str292 = new Str("0x");
Str* str293 = new Str("Invalid hex constant %r");
Str* str294 = new Str("0");
Str* str295 = new Str("Invalid octal constant %r");
Str* str296 = new Str("#");
Str* str297 = new Str("#");
Str* str298 = new Str("Invalid base for numeric constant %r");
Str* str299 = new Str("a");
Str* str300 = new Str("z");
Str* str301 = new Str("a");
Str* str302 = new Str("A");
Str* str303 = new Str("Z");
Str* str304 = new Str("A");
Str* str305 = new Str("@");
Str* str306 = new Str("_");
Str* str307 = new Str("Invalid digits for numeric constant %r");
Str* str308 = new Str("Digits %r out of range for base %d");
Str* str309 = new Str("Invalid integer constant %r");
Str* str310 = new Str("Undefined variable %r");
Str* str311 = new Str("Can't assign to characters of string %r");
Str* str312 = new Str("Undefined variable can't be indexed");
Str* str313 = new Str("");
Str* str314 = new Str("");
Str* str315 = new Str("");
Str* str316 = new Str("Undefined value in arithmetic context");
Str* str317 = new Str("warning: ");
Str* str318 = new Str("Expected a value convertible to integer, got %s");
Str* str319 = new Str("Can't use assignment like ++ or += on arrays");
Str* str320 = new Str("Divide by zero");
Str* str321 = new Str("Divide by zero");
Str* str322 = new Str("Expected array or assoc in index expression, got %s");
Str* str323 = new Str("Divide by zero");
Str* str324 = new Str("Divide by zero");
Str* str325 = new Str("Exponent can't be less than zero");
Str* str326 = new Str("Associative array keys must be strings: $x 'x' \"$x\" etc.");
Str* str327 = new Str("warning: ");
Str* str328 = new Str("BASH_REMATCH");
Str* str329 = new Str("Invalid file descriptor %r");
Str* str330 = new Str("%s isn't implemented");
Str* str331 = new Str("Invalid regex %r");
Str* str332 = new Str(" \t\n");
Str* str333 = new Str("IFS");
Str* str334 = new Str("IFS shouldn't be an array");
Str* str335 = new Str(" \t\n");
Str* str336 = new Str("IFS");
Str* str337 = new Str(" ");
Str* str338 = new Str("");
Str* str339 = new Str("IFS shouldn't be an array");
Str* str340 = new Str("\\");
Str* str341 = new Str("\\");
Str* str342 = new Str("Invalid transition from %r with %r");
Str* str343 = new Str("\u00ef\u00bf\u00bd");
Str* str344 = new Str("");
Str* str345 = new Str("Incomplete UTF-8 character");
Str* str346 = new Str("Invalid UTF-8 continuation byte");
Str* str347 = new Str("Invalid start of UTF-8 character");
Str* str348 = new Str("");
Str* str349 = new Str("%s can't have an argument");
Str* str350 = new Str("");
Str* str351 = new Str("%s can't have an argument");
Str* str352 = new Str("");
Str* str353 = new Str("%s can't have an argument");
Str* str354 = new Str("");
Str* str355 = new Str("%s can't have an argument");
Str* str356 = new Str("");
Str* str357 = new Str("<_GlobReplacer regex %r r %r>");
Str* str358 = new Str("(%s)");
Str* str359 = new Str("Error matching regex %r: %s");
Str* str360 = new Str("^");
Str* str361 = new Str("$");
Str* str362 = new Str("'");
Str* str363 = new Str("'");
Str* str364 = new Str("'\\''");
Str* str365 = new Str("'");
Str* str366 = new Str("'\t\r\n");
Str* str367 = new Str("\\");
Str* str368 = new Str("\\\\");
Str* str369 = new Str("'");
Str* str370 = new Str("\\'");
Str* str371 = new Str("\t");
Str* str372 = new Str("\\t");
Str* str373 = new Str("\r");
Str* str374 = new Str("\\r");
Str* str375 = new Str("\n");
Str* str376 = new Str("\\n");
Str* str377 = new Str("$'");
Str* str378 = new Str("'");
Str* str379 = new Str("'");
Str* str380 = new Str("'");
Str* str381 = new Str("\r");
Str* str382 = new Str("<INVALID CR>");
Str* str383 = new Str("\n");
Str* str384 = new Str("<INVALID NEWLINE>");
Str* str385 = new Str(" `~!$&*()[]{}\\|;'\"<>?");
Str* str386 = new Str("Token can't be used in prefix position");
Str* str387 = new Str("Token can't be used in infix position");
Str* str388 = new Str("Left-hand side of this assignment is invalid");
Str* str389 = new Str("Parser expected %s, got %s");
Str* str390 = new Str("Unexpected end of input");
Str* str391 = new Str("Invalid token %s");
Str* str392 = new Str("warning: Invalid backslash escape in C-style string");
Str* str393 = new Str("BASH_SOURCE");
Str* str394 = new Str("");
Str* str395 = new Str("");
Str* str396 = new Str("\\");
Str* str397 = new Str("\\\\");
Str* str398 = new Str("");
Str* str399 = new Str("The start index of a string slice can't be negative: %d");
Str* str400 = new Str("The length of a string slice can't be negative: %d");
Str* str401 = new Str("The length index of a array slice can't be negative: %d");
Str* str402 = new Str("Can't slice associative arrays");
Str* str403 = new Str("i");
Str* str404 = new Str("e");
Str* str405 = new Str("u");
Str* str406 = new Str("x");
Str* str407 = new Str("n");
Str* str408 = new Str("");
Str* str409 = new Str("~");
Str* str410 = new Str("HOME");
Str* str411 = new Str("@");
Str* str412 = new Str("*");
Str* str413 = new Str("@");
Str* str414 = new Str("*");
Str* str415 = new Str("warning: ");
Str* str416 = new Str("-1");
Str* str417 = new Str("@");
Str* str418 = new Str("*");
Str* str419 = new Str("[");
Str* str420 = new Str("]");
Str* str421 = new Str("Bad indirect expansion: %r");
Str* str422 = new Str("");
Str* str423 = new Str("");
Str* str424 = new Str("Undefined variable");
Str* str425 = new Str("$");
Str* str426 = new Str("Undefined variable %r");
Str* str427 = new Str("");
Str* str428 = new Str("Undefined array %r");
Str* str429 = new Str("Can't index string with @");
Str* str430 = new Str("Can't index string with *");
Str* str431 = new Str("Can't index string %r with integer");
Str* str432 = new Str("Array %r can't be referred to as a scalar (without @ or *)");
Str* str433 = new Str("\u0001");
Str* str434 = new Str("");
Str* str435 = new Str("\u0002");
Str* str436 = new Str("");
Str* str437 = new Str("Can't assign to special variable");
Str* str438 = new Str("unset variable %r");
Str* str439 = new Str("");
Str* str440 = new Str("warning: ");
Str* str441 = new Str("");
Str* str442 = new Str("Illegal array word part (strict_array)");
Str* str443 = new Str(" ");
Str* str444 = new Str("");
Str* str445 = new Str("Array %r can't be referred to as a scalar (without @ or *)");
Str* str446 = new Str("Unexpected array literal");
Str* str447 = new Str("Unexpected associative array literal");
Str* str448 = new Str("|");
Str* str449 = new Str(")");
Str* str450 = new Str("Can't splice %r");
Str* str451 = new Str("");
Str* str452 = new Str("");
Str* str453 = new Str("This word should yield a string, but it contains an array");
Str* str454 = new Str(" ");
Str* str455 = new Str("");
Str* str456 = new Str("<Runtime error: %s>");
Str* str457 = new Str("<I/O error: %s>");
Str* str458 = new Str("<I/O error: %s>");
Str* str459 = new Str("<Ctrl-C>");
Str* str460 = new Str("");
Str* str461 = new Str("");
Str* str462 = new Str("");
Str* str463 = new Str("");
Str* str464 = new Str("");
Str* str465 = new Str("LHS array not allowed in assignment builtin");
Str* str466 = new Str("+");
Str* str467 = new Str("+= not allowed in assignment builtin");
Str* str468 = new Str("-");
Str* str469 = new Str("+");
Str* str470 = new Str("");
Str* str471 = new Str("=");
Str* str472 = new Str("Invalid variable name %r");
Str* str473 = new Str("__NO_COMMAND_SUB__");
Str* str474 = new Str("__NO_PROCESS_SUB__");
Str* str475 = new Str("Expected : or } in slice");
Str* str476 = new Str("/");
Str* str477 = new Str("Pattern in ${x/pat/replace} must not be empty");
Str* str478 = new Str("Expected } after replacement string, got %s");
Str* str479 = new Str("Expected } or / to close pattern");
Str* str480 = new Str("Expected ] to close subscript");
Str* str481 = new Str("Expected } to close ${");
Str* str482 = new Str("Expected } to close ${");
Str* str483 = new Str("Expected } to close ${");
Str* str484 = new Str("Unexpected token in ${} (%s)");
Str* str485 = new Str("VOp2");
Str* str486 = new Str("Unexpected token in ${} (%s)");
Str* str487 = new Str("VOp3");
Str* str488 = new Str("Expected } to close ${");
Str* str489 = new Str("Expected } after length expression");
Str* str490 = new Str("Unexpected token in ${}");
Str* str491 = new Str("\\");
Str* str492 = new Str("Strings with backslashes should look like r'\\n' or c'\\n'");
Str* str493 = new Str("Unexpected EOF in single-quoted string that began here");
Str* str494 = new Str("Unexpected EOF reading extended glob that began here");
Str* str495 = new Str("Unexpected EOF reading double-quoted string that began here");
Str* str496 = new Str("Unexpected EOF while looking for closing backtick");
Str* str497 = new Str("");
Str* str498 = new Str("Invalid proc name %s");
Str* str499 = new Str("Expected first ) to end arith sub");
Str* str500 = new Str("Expected second ) to end arith sub");
Str* str501 = new Str("Expected first ) to end arith statement");
Str* str502 = new Str("Expected second ) to end arith statement");
Str* str503 = new Str("Expected ) to end for loop expression");
Str* str504 = new Str("Expected ( after =");
Str* str505 = new Str("Unexpected token in array literal");
Str* str506 = new Str("Expected associative array pair");
Str* str507 = new Str("Unexpected token after array literal");
Str* str508 = new Str("Unexpected token after array splice");
Str* str509 = new Str("Word has unbalanced { }.  Maybe add a space or quote it like \\{");
Str* str510 = new Str("Unexpected token in arithmetic context");
Str* str511 = new Str("Unhandled: %s (%s)");
Str* str512 = new Str("Invalid lex state %s");
Str* str513 = new Str("");
Str* str514 = new Str("");
Str* str515 = new Str("");
Str* str516 = new Str("");
Str* str517 = new Str("");
Str* str518 = new Str("");
Str* str519 = new Str("");
Str* str520 = new Str("");
Str* str521 = new Str("");
Str* str522 = new Str("Compound shouldn't be empty");
Str* str523 = new Str("/");
Str* str524 = new Str("");
Str* str525 = new Str("EOF");
Str* str526 = new Str("%s: type=%d, tok=%r");
Str* str527 = new Str("typ");
Str* str528 = new Str("tok");
Str* str529 = new Str("children");
Str* str530 = new Str("-");
Str* str531 = new Str("with %d children");
Str* str532 = new Str("");
Str* str533 = new Str("(PNode %s %s %s)");
Str* str534 = new Str("too much input");
Str* str535 = new Str("bad input");
Str* str536 = new Str("&");
Str* str537 = new Str("&amp;");
Str* str538 = new Str("<");
Str* str539 = new Str("&lt;");
Str* str540 = new Str(">");
Str* str541 = new Str("&gt;");

namespace runtime {  // forward declare

}  // forward declare namespace runtime

namespace format {  // forward declare
  class ColorOutput;
  class TextOutput;
  class HtmlOutput;
  class AnsiOutput;
  class _PrettyPrinter;

}  // forward declare namespace format

namespace osh_eval {  // forward declare
  class TestEvaluator;

}  // forward declare namespace osh_eval

namespace alloc {  // forward declare
  class Arena;

}  // forward declare namespace alloc

namespace error {  // forward declare
  class RedirectEval;
  class FatalRuntime;
  class Strict;
  class ErrExit;

}  // forward declare namespace error

namespace state {  // forward declare
  class SearchPath;
  class _ErrExit;
  class _Getter;
  class OptHook;
  class MutableOpts;
  class _ArgFrame;
  class DirStack;
  class DebugFrame;
  class Mem;

}  // forward declare namespace state

namespace ui {  // forward declare
  class ErrorFormatter;

}  // forward declare namespace ui

namespace lexer {  // forward declare
  class LineLexer;
  class Lexer;

}  // forward declare namespace lexer

namespace location {  // forward declare

}  // forward declare namespace location

namespace parse_lib {  // forward declare
  class _BaseTrail;
  class _NullTrail;
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
  class ParseTreePrinter;
  class ExprParser;

}  // forward declare namespace expr_parse

namespace expr_to_ast {  // forward declare
  class Transformer;

}  // forward declare namespace expr_to_ast

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

namespace cmd_parse {  // forward declare
  class CommandParser;

}  // forward declare namespace cmd_parse

namespace glob_ {  // forward declare
  class _GlobParser;
  class Globber;

}  // forward declare namespace glob_

namespace sh_expr_eval {  // forward declare
  class _ExprEvaluator;
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
  class AbstractWordEvaluator;
  class NormalWordEvaluator;
  class CompletionWordEvaluator;

}  // forward declare namespace word_eval

namespace word_parse {  // forward declare
  class WordEmitter;
  class WordParser;

}  // forward declare namespace word_parse

namespace word_ {  // forward declare

}  // forward declare namespace word_

namespace grammar {  // forward declare
  class Grammar;

}  // forward declare namespace grammar

namespace parse {  // forward declare
  class ParseError;
  class PNode;
  class _StackItem;
  class Parser;

}  // forward declare namespace parse

namespace cgi {  // forward declare

}  // forward declare namespace cgi

namespace runtime {  // declare
extern int NO_SPID;
hnode_asdl::hnode__Record* NewRecord(Str* node_type);
hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color);
extern Str* TRUE_STR;
extern Str* FALSE_STR;

}  // declare namespace runtime

namespace format {  // declare
format::ColorOutput* DetectConsoleOutput(mylib::Writer* f);

class ColorOutput {
 public:
  ColorOutput(mylib::Writer* f);
  virtual format::ColorOutput* NewTempBuffer();
  virtual void FileHeader();
  virtual void FileFooter();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  virtual void write(Str* s);
  void WriteRaw(Tuple2<Str*, int>* raw);
  int NumChars();
  Tuple2<Str*, int> GetRaw();

  mylib::Writer* f;
  int num_chars;
};

class TextOutput : public ColorOutput {
 public:
  TextOutput(mylib::Writer* f);
  virtual format::TextOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
};

class HtmlOutput : public ColorOutput {
 public:
  HtmlOutput(mylib::Writer* f);
  virtual format::HtmlOutput* NewTempBuffer();
  virtual void FileHeader();
  virtual void FileFooter();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  virtual void write(Str* s);
};

class AnsiOutput : public ColorOutput {
 public:
  AnsiOutput(mylib::Writer* f);
  virtual format::AnsiOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
};
extern int INDENT;

class _PrettyPrinter {
 public:
  _PrettyPrinter(int max_col);
  bool _PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  bool _PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  void _PrintRecord(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int indent);
  void PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent);

  int max_col;
};
bool _TrySingleLineObj(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int max_chars);
bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars);
void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f);
Str* fmt0(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<span class=\"", 13);
  gBuf.format_s(a0);
  gBuf.write_const("\">", 2);
  return gBuf.getvalue();
}

Str* fmt1(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const(": [", 3);
  return gBuf.getvalue();
}

Str* fmt2(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

Str* fmt3(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const(": ", 2);
  return gBuf.getvalue();
}

Str* fmt4(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" ", 1);
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  return gBuf.getvalue();
}


}  // declare namespace format

namespace osh_eval {  // declare
syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser);

class TestEvaluator {
 public:
  TestEvaluator(sh_expr_eval::ArithEvaluator* arith_ev, word_eval::NormalWordEvaluator* word_ev);
  void Eval(syntax_asdl::command_t* node);

  sh_expr_eval::ArithEvaluator* arith_ev;
  word_eval::NormalWordEvaluator* word_ev;
};
Tuple4<int, bool, Str*, bool> Parse(List<Str*>* argv);
int main(List<Str*>* argv);
Str* fmt5(Str* a0) {
  gBuf.reset();
  gBuf.write_const("arg ", 4);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt6(int a0) {
  gBuf.reset();
  gBuf.write_const("arith val ", 10);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

Str* fmt7(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unhandled node ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}


}  // declare namespace osh_eval

namespace alloc {  // declare

class Arena {
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
};
Str* fmt8(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Span ID out of range: ", 22);
  gBuf.format_d(a0);
  gBuf.write_const(" is greater than ", 17);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}


}  // declare namespace alloc

namespace error {  // declare
extern int NO_SPID;

class RedirectEval : public _ErrorWithLocation {
 public:
};

class FatalRuntime : public _ErrorWithLocation {
 public:
};

class Strict : public _ErrorWithLocation {
 public:
};

class ErrExit : public FatalRuntime {
 public:
};

}  // declare namespace error

namespace state {  // declare
extern int LINE_ZERO;
extern int SetReadOnly;
extern int ClearReadOnly;
extern int SetExport;
extern int ClearExport;
extern int SetNameref;
extern int ClearNameref;

class SearchPath {
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
};

class _ErrExit {
 public:
  _ErrExit();
  void Push(int span_id);
  void Pop();
  int SpidIfDisabled();
  void Set(bool b);
  void Disable();
  bool value();

  bool _value;
  List<int>* stack;
};

class _Getter {
 public:
  _Getter(List<bool>* opt_array, Str* opt_name);
  bool __call__();

  int num;
  List<bool>* opt_array;
};

class OptHook {
 public:
  bool OnChange(List<bool>* opt_array, Str* opt_name, bool b);
};
Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> MakeOpts(state::Mem* mem, state::OptHook* opt_hook);

class MutableOpts {
 public:
  MutableOpts(state::Mem* mem, List<bool>* opt_array, state::_ErrExit* errexit, state::OptHook* opt_hook);
  void _InitOptionsFromEnv(Str* shellopts);
  void set_interactive();
  void set_xtrace(bool b);
  void _SetArrayByName(Str* opt_name, bool b);
  void _SetOption(Str* opt_name, bool b);
  void SetOption(Str* opt_name, bool b);
  void _SetGroup(List<int>* opt_nums, bool b);
  void SetShoptOption(Str* opt_name, bool b);
  void ShowOptions(List<Str*>* opt_names);
  void ShowShoptOptions(List<Str*>* opt_names);

  state::_ErrExit* errexit;
  state::Mem* mem;
  List<bool>* opt_array;
  state::OptHook* opt_hook;
};

class _ArgFrame {
 public:
  _ArgFrame(List<Str*>* argv);
  Dict<Str*, void*>* Dump();
  runtime_asdl::value_t* GetArgNum(int arg_num);
  List<Str*>* GetArgv();
  int GetNumArgs();
  void SetArgv(List<Str*>* argv);

  List<Str*>* argv;
  int num_shifted;
};

class DirStack {
 public:
  DirStack();
  void Reset();
  void Push(Str* entry);
  Str* Pop();
  List<Str*>* Iter();

  List<Str*>* stack;
};
Str* _GetWorkingDir();

class DebugFrame {
 public:
  DebugFrame(Str* bash_source, Str* func_name, Str* source_name, int call_spid, int argv_i, int var_i);

  int argv_i;
  Str* bash_source;
  int call_spid;
  Str* func_name;
  Str* source_name;
  int var_i;
};
void _InitDefaults(state::Mem* mem);
void _InitVarsFromEnv(state::Mem* mem, Dict<Str*, Str*>* environ);
void InitMem(state::Mem* mem, Dict<Str*, Str*>* environ);

class Mem {
 public:
  Mem(Str* dollar0, List<Str*>* argv, alloc::Arena* arena, List<state::DebugFrame*>* debug_stack);
  void SetPwd(Str* pwd);
  bool InGlobalNamespace();
  Tuple3<void*, void*, void*> Dump();
  void SetCurrentSpanId(int span_id);
  int CurrentSpanId();
  void PushStatusFrame();
  void PopStatusFrame();
  int LastStatus();
  List<int>* PipeStatus();
  void SetLastStatus(int x);
  void SetPipeStatus(List<int>* x);
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
  runtime_asdl::value_t* GetArgNum(int arg_num);
  List<Str*>* GetArgv();
  void SetArgv(List<Str*>* argv);
  runtime_asdl::value_t* GetSpecialVar(int op_id);
  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> _ResolveNameOnly(Str* name, runtime_asdl::scope_t lookup_mode);
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> _ResolveNameOrRef(Str* name, runtime_asdl::scope_t lookup_mode);
  bool IsAssocArray(Str* name, runtime_asdl::scope_t lookup_mode);
  void _CheckOilKeyword(int keyword_id, Str* name, runtime_asdl::cell* cell);
  void _DisallowNamerefCycle(Str* name, List<Str*>* ref_trail);
  void SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode);
  void SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode, int flags);
  void _BindNewArrayWithEntry(Dict<Str*, runtime_asdl::cell*>* name_map, runtime_asdl::lvalue__Indexed* lval, runtime_asdl::value__Str* val, int flags);
  void InternalSetGlobal(Str* name, runtime_asdl::value_t* new_val);
  runtime_asdl::value_t* GetVar(Str* name);
  runtime_asdl::value_t* GetVar(Str* name, runtime_asdl::scope_t lookup_mode);
  runtime_asdl::cell* GetCell(Str* name);
  Tuple2<bool, bool> Unset(runtime_asdl::lvalue__Named* lval, runtime_asdl::scope_t lookup_mode);
  bool ClearFlag(Str* name, int flag, runtime_asdl::scope_t lookup_mode);
  Dict<Str*, Str*>* GetExported();
  List<Str*>* VarNames();
  List<Str*>* VarNamesStartingWith(Str* prefix);
  Dict<Str*, Str*>* GetAllVars();

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
  Str* pwd;
  int root_pid;
  runtime_asdl::value__Str* source_name;
  List<Dict<Str*, runtime_asdl::cell*>*>* var_stack;
};
void SetLocalString(state::Mem* mem, Str* name, Str* s);
void SetStringDynamic(state::Mem* mem, Str* name, Str* s);
void SetArrayDynamic(state::Mem* mem, Str* name, List<Str*>* a);
void SetGlobalString(state::Mem* mem, Str* name, Str* s);
void SetGlobalArray(state::Mem* mem, Str* name, List<Str*>* a);
void SetLocalArray(state::Mem* mem, Str* name, List<Str*>* a);
void ExportGlobalString(state::Mem* mem, Str* name, Str* s);
runtime_asdl::value_t* GetGlobal(state::Mem* mem, Str* name);
Str* fmt9(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt10(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt11(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt12(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt13(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt14(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("set ", 4);
  gBuf.format_s(a0);
  gBuf.write_const("o ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt15(Str* a0) {
  gBuf.reset();
  gBuf.write_const("got invalid option ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt16(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("shopt -", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt17(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't determine working directory: ", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt18(Str* a0) {
  gBuf.reset();
  gBuf.write_const("nameref ", 8);
  gBuf.format_r(a0);
  gBuf.write_const(" is undefined", 13);
  return gBuf.getvalue();
}

Str* fmt19(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("nameref ", 8);
  gBuf.format_r(a0);
  gBuf.write_const(" contains invalid variable name ", 32);
  gBuf.format_r(a1);
  return gBuf.getvalue();
}

Str* fmt20(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" has already been declared", 26);
  return gBuf.getvalue();
}

Str* fmt21(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" hasn't been declared", 21);
  return gBuf.getvalue();
}

Str* fmt22(Str* a0) {
  gBuf.reset();
  gBuf.write_const("nameref cycle: ", 15);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt23(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly value ", 31);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt24() {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly array", 30);
  return gBuf.getvalue();
}

Str* fmt25() {
  gBuf.reset();
  gBuf.write_const("Can't assign to items in a string", 33);
  return gBuf.getvalue();
}

Str* fmt26(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Object of type ", 15);
  gBuf.format_s(a0);
  gBuf.write_const(" can't be indexed", 17);
  return gBuf.getvalue();
}

Str* fmt27() {
  gBuf.reset();
  gBuf.write_const("Can't assign to readonly associative array", 42);
  return gBuf.getvalue();
}


}  // declare namespace state

namespace ui {  // declare
Str* ValType(runtime_asdl::value_t* val);
Str* PrettyId(int id_);
Str* PrettyToken(syntax_asdl::Token* tok, alloc::Arena* arena);
Str* PrettyDir(Str* dir_name, runtime_asdl::value_t* UP_home_dir);
void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f);
void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f);
void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena);
void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);

class ErrorFormatter {
 public:
  ErrorFormatter(alloc::Arena* arena);
  void PushLocation(int spid);
  void PopLocation();
  int CurrentLocation();
  void PrettyPrintError(error::_ErrorWithLocation* err);
  void PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix);

  alloc::Arena* arena;
  int last_spid;
  List<int>* spid_stack;
};
Str* fmt28(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ stdin", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt29(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ expansion of alias ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt30(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ array LValue in ", 18);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt31(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[ eval at line ", 15);
  gBuf.format_d(a0);
  gBuf.write_const(" of ", 4);
  gBuf.format_s(a1);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt32(Str* a0, int a1, Str* a2, Str* a3) {
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

Str* fmt33(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[??? no location ???] ", 22);
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}


}  // declare namespace ui

namespace lexer {  // declare

class LineLexer {
 public:
  LineLexer(Str* line, alloc::Arena* arena);
  void Reset(Str* line, int line_id, int line_pos);
  bool MaybeUnreadOne();
  int GetSpanIdForEof();
  int LookAhead(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  alloc::Arena* arena;
  bool arena_skip;
  int last_span_id;
  Str* line;
  int line_id;
  int line_pos;
};

class Lexer {
 public:
  Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader);
  void ResetInputObjects();
  bool MaybeUnreadOne();
  int LookAhead(types_asdl::lex_mode_t lex_mode);
  void EmitCompDummy();
  void PushHint(int old_id, int new_id);
  syntax_asdl::Token* _Read(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  bool emit_comp_dummy;
  int line_id;
  lexer::LineLexer* line_lexer;
  reader::_Reader* line_reader;
  List<Tuple2<int, int>*>* translation_stack;
};

}  // declare namespace lexer

namespace location {  // declare
int SpanForCommand(syntax_asdl::command_t* node);
int SpanForArithExpr(syntax_asdl::arith_expr_t* node);

}  // declare namespace location

namespace parse_lib {  // declare

class _BaseTrail {
 public:
  _BaseTrail();
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);
  virtual void BeginAliasExpansion();
  virtual void EndAliasExpansion();

  List<syntax_asdl::compound_word*>* alias_words;
  bool expanding_alias;
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::Token*>* tokens;
  List<syntax_asdl::compound_word*>* words;
};

class _NullTrail : public _BaseTrail {
 public:
};

class Trail : public _BaseTrail {
 public:
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);
  virtual void BeginAliasExpansion();
  virtual void EndAliasExpansion();

  List<syntax_asdl::compound_word*>* alias_words;
  bool expanding_alias;
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::compound_word*>* words;
};

class ParseContext {
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
  Tuple2<parse::PNode*, syntax_asdl::Token*> _ParseOil(lexer::Lexer* lexer, int start_symbol);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  syntax_asdl::Token* ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> ParseOilExpr(lexer::Lexer* lexer, int start_symbol);
  Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> ParseOilForExpr(lexer::Lexer* lexer, int start_symbol);
  syntax_asdl::Token* ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out);
  syntax_asdl::Token* ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out);

  Dict<Str*, Str*>* aliases;
  alloc::Arena* arena;
  expr_parse::ExprParser* e_parser;
  bool one_pass_parse;
  optview::Parse* parse_opts;
  bool parsing_expr;
  expr_to_ast::Transformer* tr;
  parse_lib::_BaseTrail* trail;
};
Str* fmt34() {
  gBuf.reset();
  gBuf.write_const("ShAssignment expression can't be nested like this", 49);
  return gBuf.getvalue();
}


}  // declare namespace parse_lib

namespace reader {  // declare

class _Reader {
 public:
  _Reader(alloc::Arena* arena);
  virtual Str* _GetLine();
  virtual Tuple3<int, Str*, int> GetLine();
  void Reset();

  alloc::Arena* arena;
  int line_num;
};

class DisallowedLineReader : public _Reader {
 public:
  DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token);
  virtual Str* _GetLine();

  syntax_asdl::Token* blame_token;
};

class FileLineReader : public _Reader {
 public:
  FileLineReader(mylib::LineReader* f, alloc::Arena* arena);
  virtual Str* _GetLine();

  mylib::LineReader* f;
};
reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena);

class VirtualLineReader : public _Reader {
 public:
  VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena);
  virtual Tuple3<int, Str*, int> GetLine();

  List<Tuple3<int, Str*, int>*>* lines;
  int num_lines;
  int pos;
};
Str* fmt35() {
  gBuf.reset();
  gBuf.write_const("Here docs aren't allowed in expressions", 39);
  return gBuf.getvalue();
}


}  // declare namespace reader

namespace expr_parse {  // declare

class ParseTreePrinter {
 public:
  ParseTreePrinter(Dict<int, Str*>* names);
  void _Print(parse::PNode* pnode, int indent, int i);
  void Print(parse::PNode* pnode);

  mylib::Writer* f;
  Dict<int, Str*>* names;
};
int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok);
syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex);

class ExprParser {
 public:
  ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr);
  Tuple2<parse::PNode*, syntax_asdl::Token*> Parse(lexer::Lexer* lexer, int start_symbol);

  grammar::Grammar* gr;
  parse_lib::ParseContext* parse_ctx;
  parse::Parser* push_parser;
};
Str* fmt36(Str* a0, int a1, Str* a2, Str* a3) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_d(a1);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a2);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a3);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}

Str* fmt37(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" (", 2);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt38(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in expression mode", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}


}  // declare namespace expr_parse

namespace expr_to_ast {  // declare
extern Dict<Str*, Str*>* PERL_CLASSES;
extern List<Str*>* POSIX_CLASSES;
extern Str* RANGE_POINT_TOO_LONG;
extern int NT_OFFSET;
bool ISNONTERMINAL(int x);

class Transformer {
 public:
  Transformer(grammar::Grammar* gr);
  syntax_asdl::expr_t* _AssocBinary(List<parse::PNode*>* children);
  syntax_asdl::expr_t* _Trailer(syntax_asdl::expr_t* base, parse::PNode* p_trailer);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> _DictPair(parse::PNode* p_node);
  syntax_asdl::expr__Dict* _Dict(parse::PNode* p_node);
  syntax_asdl::expr_t* _Tuple(List<parse::PNode*>* children);
  syntax_asdl::expr_t* _TestlistComp(parse::PNode* p_node, int id0);
  syntax_asdl::expr_t* _Atom(List<parse::PNode*>* children);
  List<syntax_asdl::name_type*>* _NameTypeList(parse::PNode* p_node);
  syntax_asdl::comprehension* _CompFor(parse::PNode* p_node);
  syntax_asdl::expr_t* _CompareChain(List<parse::PNode*>* children);
  syntax_asdl::expr_t* _Subscript(List<parse::PNode*>* children);
  syntax_asdl::expr_t* Expr(parse::PNode* pnode);
  syntax_asdl::expr_t* _ArrayItem(parse::PNode* p_node);
  List<syntax_asdl::place_expr_t*>* _PlaceList(parse::PNode* p_node);
  syntax_asdl::command__VarDecl* MakeVarDecl(parse::PNode* p_node);
  syntax_asdl::command__PlaceMutation* MakePlaceMutation(parse::PNode* p_node);
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> OilForExpr(parse::PNode* pnode);
  void _Argument(parse::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist);
  void _Arglist(List<parse::PNode*>* children, syntax_asdl::arg_list* arglist);
  void ArgList(parse::PNode* pnode, syntax_asdl::arg_list* arglist);
  syntax_asdl::type_expr_t* _TypeExpr(parse::PNode* pnode);
  List<syntax_asdl::type_expr_t*>* _TypeExprList(parse::PNode* pnode);
  Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*> _ProcParam(parse::PNode* pnode);
  syntax_asdl::proc_sig_t* _ProcParams(parse::PNode* p_node);
  syntax_asdl::param* _FuncParam(parse::PNode* pnode);
  Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> _FuncParams(parse::PNode* p_node);
  syntax_asdl::proc_sig_t* Proc(parse::PNode* pnode);
  void Func(parse::PNode* pnode, syntax_asdl::command__Func* out);
  Str* _RangeChar(parse::PNode* p_node);
  syntax_asdl::class_literal_term_t* _NonRangeChars(parse::PNode* p_node);
  syntax_asdl::class_literal_term_t* _ClassLiteralTerm(parse::PNode* p_node);
  List<syntax_asdl::class_literal_term_t*>* _ClassLiteral(parse::PNode* p_node);
  syntax_asdl::re_t* _NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::class_literal_term_t* _NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::re_t* _ReAtom(parse::PNode* p_atom);
  syntax_asdl::re_repeat_t* _RepeatOp(parse::PNode* p_repeat);
  syntax_asdl::re_t* _Regex(parse::PNode* p_node);

  Dict<int, Str*>* number2symbol;
};
Str* fmt39() {
  gBuf.reset();
  gBuf.write_const("Write singleton tuples with tup(), not a trailing comma", 55);
  return gBuf.getvalue();
}

Str* fmt40() {
  gBuf.reset();
  gBuf.write_const("Can't assign to this expression", 31);
  return gBuf.getvalue();
}

Str* fmt41() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

Str* fmt42(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

Str* fmt43() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

Str* fmt44(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

Str* fmt45(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" in regex", 9);
  return gBuf.getvalue();
}


}  // declare namespace expr_to_ast

namespace arith_parse {  // declare
syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp);
syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp);
Str* fmt46() {
  gBuf.reset();
  gBuf.write_const("This value can't be assigned to", 31);
  return gBuf.getvalue();
}

Str* fmt47() {
  gBuf.reset();
  gBuf.write_const("The [ operarator doesn't apply to this expression", 49);
  return gBuf.getvalue();
}


}  // declare namespace arith_parse

namespace bool_parse {  // declare

class BoolParser {
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

  id_kind_asdl::Kind_t b_kind;
  syntax_asdl::word_t* cur_word;
  int op_id;
  word_parse::WordEmitter* w_parser;
  List<syntax_asdl::word_t*>* words;
};
Str* fmt48() {
  gBuf.reset();
  gBuf.write_const("Expected ]]", 11);
  return gBuf.getvalue();
}

Str* fmt49(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected trailing word ", 25);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt50() {
  gBuf.reset();
  gBuf.write_const("Invalid argument to unary operator", 34);
  return gBuf.getvalue();
}

Str* fmt51(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ), got ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt52() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in boolean expression", 38);
  return gBuf.getvalue();
}


}  // declare namespace bool_parse

namespace braces {  // declare
extern int NO_STEP;

class _NotARange {
 public:
  _NotARange(Str* s);
};

class _RangeParser {
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
};
syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok);

class _StackFrame {
 public:
  _StackFrame(List<syntax_asdl::word_part_t*>* cur_parts);

  syntax_asdl::word_part__BracedTuple* alt_part;
  List<syntax_asdl::word_part_t*>* cur_parts;
  bool saw_comma;
};
syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w);
List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words);
int _LeadingZeros(Str* s);
Str* _IntToString(int i, int width);
List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part);
List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes);
List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts);
List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words);
Str* fmt53(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Expected ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt54() {
  gBuf.reset();
  gBuf.write_const("Step can't be 0", 15);
  return gBuf.getvalue();
}

Str* fmt55(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending integer range", 28);
  return gBuf.getvalue();
}

Str* fmt56(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending integer range", 29);
  return gBuf.getvalue();
}

Str* fmt57(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending character range", 30);
  return gBuf.getvalue();
}

Str* fmt58(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending character range", 31);
  return gBuf.getvalue();
}

Str* fmt59() {
  gBuf.reset();
  gBuf.write_const("Mismatched cases in character range", 35);
  return gBuf.getvalue();
}


}  // declare namespace braces

namespace cmd_parse {  // declare
int _KeywordSpid(syntax_asdl::word_t* w);
syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w);
Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir__HereDoc* h, Str* delimiter);
List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena);
void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir__HereDoc* h, reader::_Reader* line_reader, alloc::Arena* arena);
syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena);
void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env);
Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words);
syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir_t*>* redirects, syntax_asdl::command_t* block);
extern List<int>* SECONDARY_KEYWORDS;

class CommandParser {
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
  syntax_asdl::redir_t* ParseRedirect();
  List<syntax_asdl::redir_t*>* _ParseRedirectList();
  Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*> _ScanSimpleCommand();
  syntax_asdl::command_t* _MaybeExpandAliases(List<syntax_asdl::compound_word*>* words);
  syntax_asdl::command_t* ParseSimpleCommand();
  syntax_asdl::command__BraceGroup* ParseBraceGroup();
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
  syntax_asdl::command__If* _ParseOilIf(int if_spid, List<syntax_asdl::command_t*>* cond_list);
  void _ParseElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* ParseIf();
  syntax_asdl::command_t* ParseTime();
  syntax_asdl::command_t* ParseCompoundCommand();
  syntax_asdl::command__ShFunction* ParseFunctionDef();
  syntax_asdl::command__ShFunction* ParseKshFunctionDef();
  syntax_asdl::command__Proc* ParseOilProc();
  syntax_asdl::command__Func* ParseOilFunc();
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
  List<syntax_asdl::redir__HereDoc*>* pending_here_docs;
  bool return_expr;
  word_parse::WordParser* w_parser;
};
Str* fmt60() {
  gBuf.reset();
  gBuf.write_const("Couldn't find terminator for here doc that starts here", 54);
  return gBuf.getvalue();
}

Str* fmt61() {
  gBuf.reset();
  gBuf.write_const("Invalid here doc delimiter", 26);
  return gBuf.getvalue();
}

Str* fmt62(int a0, int a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt63() {
  gBuf.reset();
  gBuf.write_const("Environment binding shouldn't look like an array assignment", 59);
  return gBuf.getvalue();
}

Str* fmt64() {
  gBuf.reset();
  gBuf.write_const("Expected = in environment binding, got +=", 41);
  return gBuf.getvalue();
}

Str* fmt65() {
  gBuf.reset();
  gBuf.write_const("Environment bindings can't contain array literals", 49);
  return gBuf.getvalue();
}

Str* fmt66(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Expected word type ", 19);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt67() {
  gBuf.reset();
  gBuf.write_const("Invalid token after redirect operator", 37);
  return gBuf.getvalue();
}

Str* fmt68(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("line IDs ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt69() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

Str* fmt70() {
  gBuf.reset();
  gBuf.write_const("=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression", 108);
  return gBuf.getvalue();
}

Str* fmt71() {
  gBuf.reset();
  gBuf.write_const("name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =", 101);
  return gBuf.getvalue();
}

Str* fmt72() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

Str* fmt73() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

Str* fmt74() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have redirects", 37);
  return gBuf.getvalue();
}

Str* fmt75() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have environment bindings", 48);
  return gBuf.getvalue();
}

Str* fmt76(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected argument to ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt77() {
  gBuf.reset();
  gBuf.write_const("Invalid word in for loop", 24);
  return gBuf.getvalue();
}

Str* fmt78() {
  gBuf.reset();
  gBuf.write_const("Invalid word after for expression", 33);
  return gBuf.getvalue();
}

Str* fmt79() {
  gBuf.reset();
  gBuf.write_const("Loop variable name should be a constant", 39);
  return gBuf.getvalue();
}

Str* fmt80() {
  gBuf.reset();
  gBuf.write_const("Invalid loop variable name", 26);
  return gBuf.getvalue();
}

Str* fmt81() {
  gBuf.reset();
  gBuf.write_const("Unexpected word after for loop variable", 39);
  return gBuf.getvalue();
}

Str* fmt82() {
  gBuf.reset();
  gBuf.write_const("Expected ;; or esac", 19);
  return gBuf.getvalue();
}

Str* fmt83() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing compound command", 46);
  return gBuf.getvalue();
}

Str* fmt84() {
  gBuf.reset();
  gBuf.write_const("Invalid function name", 21);
  return gBuf.getvalue();
}

Str* fmt85() {
  gBuf.reset();
  gBuf.write_const("Invalid KSH-style function name", 31);
  return gBuf.getvalue();
}

Str* fmt86() {
  gBuf.reset();
  gBuf.write_const("Unexpected word when parsing command", 36);
  return gBuf.getvalue();
}

Str* fmt87() {
  gBuf.reset();
  gBuf.write_const("Unexpected right brace", 22);
  return gBuf.getvalue();
}

Str* fmt88() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while parsing command", 36);
  return gBuf.getvalue();
}

Str* fmt89() {
  gBuf.reset();
  gBuf.write_const("Invalid word while parsing command", 34);
  return gBuf.getvalue();
}

Str* fmt90() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing command line", 42);
  return gBuf.getvalue();
}

Str* fmt91() {
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

class _GlobParser {
 public:
  _GlobParser(match::SimpleLexer* lexer);
  void _Next();
  List<syntax_asdl::glob_part_t*>* _ParseCharClass();
  Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> Parse();

  match::SimpleLexer* lexer;
  int token_type;
  Str* token_val;
  List<Str*>* warnings;
};
Str* _GenerateERE(List<syntax_asdl::glob_part_t*>* parts);
Tuple2<Str*, List<Str*>*> GlobToERE(Str* pat);

class Globber {
 public:
  Globber(optview::Exec* exec_opts);
  int Expand(Str* arg, List<Str*>* out);
  List<Str*>* OilFuncCall(Str* arg);

  optview::Exec* exec_opts;
};
Str* fmt92(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error expanding glob ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace glob_

namespace sh_expr_eval {  // declare
int _StringToInteger(Str* s);
int _StringToInteger(Str* s, int span_id);
runtime_asdl::value_t* _LookupVar(Str* name, state::Mem* mem, optview::Exec* exec_opts);
runtime_asdl::lvalue_t* EvalLhs(syntax_asdl::sh_lhs_expr_t* node, sh_expr_eval::ArithEvaluator* arith_ev, state::Mem* mem, int spid, runtime_asdl::scope_t lookup_mode);
runtime_asdl::lvalue_t* _EvalLhsArith(syntax_asdl::sh_lhs_expr_t* node, state::Mem* mem, sh_expr_eval::ArithEvaluator* arith_ev);
Tuple2<runtime_asdl::value_t*, runtime_asdl::lvalue_t*> EvalLhsAndLookup(syntax_asdl::sh_lhs_expr_t* node, sh_expr_eval::ArithEvaluator* arith_ev, state::Mem* mem, optview::Exec* exec_opts);
Tuple2<runtime_asdl::value_t*, runtime_asdl::lvalue_t*> EvalLhsAndLookup(syntax_asdl::sh_lhs_expr_t* node, sh_expr_eval::ArithEvaluator* arith_ev, state::Mem* mem, optview::Exec* exec_opts, runtime_asdl::scope_t lookup_mode);

class _ExprEvaluator {
 public:
  _ExprEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt);
  void CheckCircularDeps();

  ui::ErrorFormatter* errfmt;
  optview::Exec* exec_opts;
  state::Mem* mem;
  word_eval::StringWordEvaluator* word_ev;
};

class ArithEvaluator : public _ExprEvaluator {
 public:
  ArithEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt);
  int _ValToIntOrError(runtime_asdl::value_t* val);
  int _ValToIntOrError(runtime_asdl::value_t* val, int span_id);
  Tuple2<int, runtime_asdl::lvalue_t*> _EvalLhsAndLookupArith(syntax_asdl::sh_lhs_expr_t* node);
  void _Store(runtime_asdl::lvalue_t* lval, int new_int);
  int EvalToInt(syntax_asdl::arith_expr_t* node);
  runtime_asdl::value_t* Eval(syntax_asdl::arith_expr_t* node);
  Str* EvalWordToString(syntax_asdl::arith_expr_t* node);
};

class BoolEvaluator : public _ExprEvaluator {
 public:
  BoolEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt);
  void Init_AlwaysStrict();
  int _StringToIntegerOrError(Str* s);
  int _StringToIntegerOrError(Str* s, syntax_asdl::word_t* blame_word);
  Str* _EvalCompoundWord(syntax_asdl::word_t* word);
  Str* _EvalCompoundWord(syntax_asdl::word_t* word, runtime_asdl::quote_t quote_kind);
  void _SetRegexMatches(List<Str*>* matches);
  bool Eval(syntax_asdl::bool_expr_t* node);

  bool always_strict;
};
Str* fmt93(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid hex constant ", 21);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt94(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid octal constant ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt95(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid base for numeric constant ", 34);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt96(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid digits for numeric constant ", 36);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt97(Str* a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Digits ", 7);
  gBuf.format_r(a0);
  gBuf.write_const(" out of range for base ", 23);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt98(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid integer constant ", 25);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt99(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined variable ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt100(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't assign to characters of string ", 37);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt101() {
  gBuf.reset();
  gBuf.write_const("Undefined value in arithmetic context", 37);
  return gBuf.getvalue();
}

Str* fmt102(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected a value convertible to integer, got ", 45);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt103(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected array or assoc in index expression, got ", 49);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt104() {
  gBuf.reset();
  gBuf.write_const("Divide by zero", 14);
  return gBuf.getvalue();
}

Str* fmt105() {
  gBuf.reset();
  gBuf.write_const("Divide by zero", 14);
  return gBuf.getvalue();
}

Str* fmt106(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid file descriptor ", 24);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt107(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" isn't implemented", 18);
  return gBuf.getvalue();
}

Str* fmt108(Str* a0, syntax_asdl::word_t* a1) {
  gBuf.reset();
  gBuf.write_const("Invalid regex ", 14);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace sh_expr_eval

namespace split {  // declare
extern Str* DEFAULT_IFS;
List<Str*>* _SpansToParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans);

class SplitContext {
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
};

class _BaseSplitter {
 public:
  _BaseSplitter(Str* escape_chars);
  Str* Escape(Str* s);

  Str* escape_chars;
};

class IfsSplitter : public _BaseSplitter {
 public:
  IfsSplitter(Str* ifs_whitespace, Str* ifs_other);
  List<Tuple2<runtime_asdl::span_t, int>*>* Split(Str* s, bool allow_escape);

  Str* ifs_other;
  Str* ifs_whitespace;
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
int _PreviousUtf8Char(Str* s, int i);
int CountUtf8Chars(Str* s);
int AdvanceUtf8Chars(Str* s, int num_chars, int byte_offset);
Str* DoUnarySuffixOp(Str* s, syntax_asdl::suffix_op__Unary* op, Str* arg);
List<Tuple2<int, int>*>* _AllMatchPositions(Str* s, Str* regex);
Str* _PatSubAll(Str* s, Str* regex, Str* replace_str);

class GlobReplacer {
 public:
  GlobReplacer(Str* regex, Str* replace_str, int slash_spid);
  Str* Replace(Str* s, syntax_asdl::suffix_op__PatSub* op);

  Str* regex;
  Str* replace_str;
  int slash_spid;
};
Str* ShellQuote(Str* s);
Str* ShellQuoteOneLine(Str* s);
Str* ShellQuoteB(Str* s);
Str* fmt109(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

Str* fmt110(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

Str* fmt111(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

Str* fmt112(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(" can't have an argument", 23);
  return gBuf.getvalue();
}

Str* fmt113(Str* a0) {
  gBuf.reset();
  gBuf.write_const("(", 1);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt114(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Error matching regex ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}


}  // declare namespace string_ops

namespace tdop {  // declare
bool IsIndexable(syntax_asdl::arith_expr_t* node);
syntax_asdl::sh_lhs_expr_t* ToLValue(syntax_asdl::arith_expr_t* node);
syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);

class TdopParser {
 public:
  TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser);
  bool AtToken(int token_type);
  void Eat(int token_type);
  bool Next();
  syntax_asdl::arith_expr_t* ParseUntil(int rbp);
  syntax_asdl::arith_expr_t* Parse();

  syntax_asdl::word_t* cur_word;
  int op_id;
  tdop::ParserSpec* spec;
  word_parse::WordParser* w_parser;
};
Str* fmt115() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in prefix position", 38);
  return gBuf.getvalue();
}

Str* fmt116() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in infix position", 37);
  return gBuf.getvalue();
}

Str* fmt117() {
  gBuf.reset();
  gBuf.write_const("Left-hand side of this assignment is invalid", 44);
  return gBuf.getvalue();
}

Str* fmt118(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Parser expected ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt119() {
  gBuf.reset();
  gBuf.write_const("Unexpected end of input", 23);
  return gBuf.getvalue();
}


}  // declare namespace tdop

namespace word_compile {  // declare
syntax_asdl::class_literal_term_t* EvalCharLiteralForRegex(syntax_asdl::Token* tok);
Str* EvalCStringToken(int id_, Str* value);

}  // declare namespace word_compile

namespace word_eval {  // declare
Str* EvalSingleQuoted(syntax_asdl::single_quoted* part);
Str* _BackslashEscape(Str* s);
runtime_asdl::part_value_t* _ValueToPartValue(runtime_asdl::value_t* val, bool quoted);
List<List<Tuple3<Str*, bool, bool>*>*>* _MakeWordFrames(List<runtime_asdl::part_value_t*>* part_vals);
Str* _DecayPartValuesToString(List<runtime_asdl::part_value_t*>* part_vals, Str* join_char);
runtime_asdl::value_t* _PerformSlice(runtime_asdl::value_t* val, int begin, int length, bool has_length, syntax_asdl::braced_var_sub* part);

class StringWordEvaluator {
 public:
  runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w);
  virtual runtime_asdl::value__Str* EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind);
};
Str* _GetDollarHyphen(optview::Exec* exec_opts);

class AbstractWordEvaluator : public StringWordEvaluator {
 public:
  AbstractWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value_t* _EvalCommandSub(syntax_asdl::command_t* part, bool quoted);
  virtual runtime_asdl::part_value_t* _EvalProcessSub(syntax_asdl::command_t* part, int id_);
  Str* _EvalTildeSub(syntax_asdl::Token* token);
  runtime_asdl::value_t* _EvalVarNum(int var_num);
  Tuple2<runtime_asdl::value_t*, bool> _EvalSpecialVar(int op_id, bool quoted);
  Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t> _ApplyTestOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op, bool quoted, List<runtime_asdl::part_value_t*>* part_vals);
  runtime_asdl::value_t* _EvalIndirectArrayExpansion(Str* name, Str* index);
  runtime_asdl::value_t* _ApplyPrefixOp(runtime_asdl::value_t* val, syntax_asdl::speck* prefix_op, syntax_asdl::Token* token);
  runtime_asdl::value_t* _ApplyUnarySuffixOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op);
  void _EvalDoubleQuoted(List<syntax_asdl::word_part_t*>* parts, List<runtime_asdl::part_value_t*>* part_vals);
  Str* EvalDoubleQuotedToString(syntax_asdl::double_quoted* dq_part);
  runtime_asdl::value__Str* _DecayArray(runtime_asdl::value__MaybeStrArray* val);
  runtime_asdl::value__Str* _BashArrayCompat(runtime_asdl::value__MaybeStrArray* val);
  runtime_asdl::value_t* _EmptyStrOrError(runtime_asdl::value_t* val);
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
  prompt::Evaluator* prompt_ev;
  split::SplitContext* splitter;
};
Tuple2<runtime_asdl::lvalue__Named*, runtime_asdl::value__Str*> _SplitAssignArg(Str* arg, syntax_asdl::compound_word* w);

class NormalWordEvaluator : public AbstractWordEvaluator {
 public:
  NormalWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt);
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value__String* _EvalCommandSub(syntax_asdl::command_t* node, bool quoted);
  virtual runtime_asdl::part_value__String* _EvalProcessSub(syntax_asdl::command_t* node, int id_);

  cmd_exec::Executor* ex;
};

class CompletionWordEvaluator : public AbstractWordEvaluator {
 public:
  virtual void CheckCircularDeps();
  virtual runtime_asdl::part_value__String* _EvalCommandSub(syntax_asdl::command_t* node, bool quoted);
  virtual runtime_asdl::part_value__String* _EvalProcessSub(syntax_asdl::command_t* node, int id_);
};
Str* fmt120(int a0) {
  gBuf.reset();
  gBuf.write_const("The start index of a string slice can't be negative: ", 53);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

Str* fmt121(int a0) {
  gBuf.reset();
  gBuf.write_const("The length of a string slice can't be negative: ", 48);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

Str* fmt122(int a0) {
  gBuf.reset();
  gBuf.write_const("The length index of a array slice can't be negative: ", 53);
  gBuf.format_d(a0);
  return gBuf.getvalue();
}

Str* fmt123() {
  gBuf.reset();
  gBuf.write_const("Can't slice associative arrays", 30);
  return gBuf.getvalue();
}

Str* fmt124(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Bad indirect expansion: ", 24);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt125(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined variable ", 19);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt126(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Undefined array ", 16);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt127() {
  gBuf.reset();
  gBuf.write_const("Can't index string with @", 25);
  return gBuf.getvalue();
}

Str* fmt128() {
  gBuf.reset();
  gBuf.write_const("Can't index string with *", 25);
  return gBuf.getvalue();
}

Str* fmt129(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't index string ", 19);
  gBuf.format_r(a0);
  gBuf.write_const(" with integer", 13);
  return gBuf.getvalue();
}

Str* fmt130(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Array ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" can't be referred to as a scalar (without @ or *)", 50);
  return gBuf.getvalue();
}

Str* fmt131(Str* a0) {
  gBuf.reset();
  gBuf.write_const("unset variable ", 15);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt132() {
  gBuf.reset();
  gBuf.write_const("Illegal array word part (strict_array)", 38);
  return gBuf.getvalue();
}

Str* fmt133(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Array ", 6);
  gBuf.format_r(a0);
  gBuf.write_const(" can't be referred to as a scalar (without @ or *)", 50);
  return gBuf.getvalue();
}

Str* fmt134() {
  gBuf.reset();
  gBuf.write_const("Unexpected array literal", 24);
  return gBuf.getvalue();
}

Str* fmt135() {
  gBuf.reset();
  gBuf.write_const("Unexpected associative array literal", 36);
  return gBuf.getvalue();
}

Str* fmt136(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Can't splice ", 13);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt137() {
  gBuf.reset();
  gBuf.write_const("This word should yield a string, but it contains an array", 57);
  return gBuf.getvalue();
}

Str* fmt138(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<Runtime error: ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

Str* fmt139(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<I/O error: ", 12);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

Str* fmt140(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<I/O error: ", 12);
  gBuf.format_s(a0);
  gBuf.write_const(">", 1);
  return gBuf.getvalue();
}

Str* fmt141() {
  gBuf.reset();
  gBuf.write_const("LHS array not allowed in assignment builtin", 43);
  return gBuf.getvalue();
}

Str* fmt142() {
  gBuf.reset();
  gBuf.write_const("+= not allowed in assignment builtin", 36);
  return gBuf.getvalue();
}

Str* fmt143(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid variable name ", 22);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}


}  // declare namespace word_eval

namespace word_parse {  // declare
extern List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS;

class WordEmitter {
 public:
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);
};

class WordParser : public WordEmitter {
 public:
  WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init(types_asdl::lex_mode_t lex_mode);
  void Reset();
  void _Peek();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::word_t* _ReadVarOpArg3(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok);
  syntax_asdl::suffix_op__Slice* _ReadSliceVarOp();
  syntax_asdl::suffix_op__PatSub* _ReadPatSubVarOp(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::bracket_op_t* _ReadSubscript();
  syntax_asdl::braced_var_sub* _ParseVarOf();
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query);
  Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*> ReadBracedVarSub(syntax_asdl::Token* left_token);
  syntax_asdl::braced_var_sub* _ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted);
  syntax_asdl::single_quoted* _ReadSingleQuoted(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool no_backslashes);
  syntax_asdl::word_part_t* _ReadDoubleQuotedLeftParts();
  syntax_asdl::word_part_t* _ReadLeftParts();
  syntax_asdl::word_part__ExtGlob* _ReadExtGlob();
  void _ReadLikeDQ(syntax_asdl::Token* left_dq_token, List<syntax_asdl::word_part_t*>* out_parts);
  syntax_asdl::double_quoted* _ReadDoubleQuoted();
  syntax_asdl::Token* ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::command_sub* _ReadCommandSub(int left_id);
  syntax_asdl::word_part__ExprSub* _ReadExprSub(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::command_t* ParseVarDecl(syntax_asdl::Token* kw_token);
  syntax_asdl::command_t* ParsePlaceMutation(syntax_asdl::Token* kw_token);
  syntax_asdl::expr_t* ParseBareDecl();
  syntax_asdl::expr_t* ParseCommandExpr();
  void ParseProc(syntax_asdl::command__Proc* node);
  void ParseFunc(syntax_asdl::command__Func* node);
  syntax_asdl::arith_expr_t* _ReadArithExpr();
  syntax_asdl::word_part__ArithSub* _ReadArithSub();
  Tuple2<syntax_asdl::arith_expr_t*, int> ReadDParen();
  void _NextNonSpace();
  syntax_asdl::command__ForExpr* ReadForExpression();
  syntax_asdl::word_part_t* _ReadArrayLiteral();
  void _ParseCallArguments(syntax_asdl::arg_list* arglist);
  syntax_asdl::compound_word* _ReadCompoundWord(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::compound_word* _ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok);
  Tuple2<syntax_asdl::word_t*, bool> _ReadArithWord();
  Tuple2<syntax_asdl::word_t*, bool> _ReadWord(types_asdl::lex_mode_t lex_mode);
  int LookAhead();
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);
  void ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::compound_word* ReadForPlugin();

  alloc::Arena* arena;
  syntax_asdl::word_t* buffered_word;
  syntax_asdl::Token* cur_token;
  syntax_asdl::word_t* cursor;
  bool cursor_was_newline;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  optview::Parse* parse_opts;
  id_kind_asdl::Kind_t token_kind;
  int token_type;
};
Str* fmt144() {
  gBuf.reset();
  gBuf.write_const("Expected : or } in slice", 24);
  return gBuf.getvalue();
}

Str* fmt145() {
  gBuf.reset();
  gBuf.write_const("Pattern in ${x/pat/replace} must not be empty", 45);
  return gBuf.getvalue();
}

Str* fmt146(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after replacement string, got ", 41);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt147() {
  gBuf.reset();
  gBuf.write_const("Expected } or / to close pattern", 32);
  return gBuf.getvalue();
}

Str* fmt148() {
  gBuf.reset();
  gBuf.write_const("Expected ] to close subscript", 29);
  return gBuf.getvalue();
}

Str* fmt149() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

Str* fmt150() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

Str* fmt151() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

Str* fmt152(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${} (", 25);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt153(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${} (", 25);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt154() {
  gBuf.reset();
  gBuf.write_const("Expected } to close ${", 22);
  return gBuf.getvalue();
}

Str* fmt155() {
  gBuf.reset();
  gBuf.write_const("Expected } after length expression", 34);
  return gBuf.getvalue();
}

Str* fmt156() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in ${}", 23);
  return gBuf.getvalue();
}

Str* fmt157() {
  gBuf.reset();
  gBuf.write_const("Strings with backslashes should look like r'\\n' or c'\\n'", 56);
  return gBuf.getvalue();
}

Str* fmt158() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF in single-quoted string that began here", 54);
  return gBuf.getvalue();
}

Str* fmt159() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading extended glob that began here", 52);
  return gBuf.getvalue();
}

Str* fmt160() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading double-quoted string that began here", 59);
  return gBuf.getvalue();
}

Str* fmt161() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while looking for closing backtick", 49);
  return gBuf.getvalue();
}

Str* fmt162(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid proc name ", 18);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt163() {
  gBuf.reset();
  gBuf.write_const("Expected first ) to end arith sub", 33);
  return gBuf.getvalue();
}

Str* fmt164() {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith sub", 34);
  return gBuf.getvalue();
}

Str* fmt165() {
  gBuf.reset();
  gBuf.write_const("Expected first ) to end arith statement", 39);
  return gBuf.getvalue();
}

Str* fmt166() {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith statement", 40);
  return gBuf.getvalue();
}

Str* fmt167() {
  gBuf.reset();
  gBuf.write_const("Expected ) to end for loop expression", 37);
  return gBuf.getvalue();
}

Str* fmt168() {
  gBuf.reset();
  gBuf.write_const("Expected ( after =", 18);
  return gBuf.getvalue();
}

Str* fmt169() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in array literal", 33);
  return gBuf.getvalue();
}

Str* fmt170() {
  gBuf.reset();
  gBuf.write_const("Expected associative array pair", 31);
  return gBuf.getvalue();
}

Str* fmt171() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array literal", 36);
  return gBuf.getvalue();
}

Str* fmt172() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array splice", 35);
  return gBuf.getvalue();
}

Str* fmt173() {
  gBuf.reset();
  gBuf.write_const("Word has unbalanced { }.  Maybe add a space or quote it like \\{", 63);
  return gBuf.getvalue();
}

Str* fmt174() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in arithmetic context", 38);
  return gBuf.getvalue();
}


}  // declare namespace word_parse

namespace word_ {  // declare
int _LiteralId(syntax_asdl::word_part_t* p);
Tuple3<bool, Str*, bool> _EvalWordPart(syntax_asdl::word_part_t* part);
Tuple3<bool, Str*, bool> StaticEval(syntax_asdl::word_t* UP_w);
int LeftMostSpanForPart(syntax_asdl::word_part_t* part);
int _RightMostSpanForPart(syntax_asdl::word_part_t* part);
int LeftMostSpanForWord(syntax_asdl::word_t* w);
int RightMostSpanForWord(syntax_asdl::word_t* w);
syntax_asdl::compound_word* TildeDetect(syntax_asdl::word_t* UP_w);
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
Str* Pretty(syntax_asdl::word_t* w);

}  // declare namespace word_

namespace grammar {  // declare

class Grammar {
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
};

}  // declare namespace grammar

namespace parse {  // declare

class ParseError {
 public:
  ParseError(Str* msg, int type_, syntax_asdl::Token* tok);

  Str* msg;
  syntax_asdl::Token* tok;
  int type;
};

class PNode {
 public:
  PNode(int typ, syntax_asdl::Token* tok, List<parse::PNode*>* children);

  List<parse::PNode*>* children;
  syntax_asdl::Token* tok;
  int typ;
};

class _StackItem {
 public:
  _StackItem(Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* dfa, int state, parse::PNode* node);

  Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* dfa;
  parse::PNode* node;
  int state;
};

class Parser {
 public:
  Parser(grammar::Grammar* grammar);
  void setup(int start);
  bool addtoken(int typ, syntax_asdl::Token* opaque, int ilabel);
  void shift(int typ, syntax_asdl::Token* opaque, int newstate);
  void push(int typ, syntax_asdl::Token* opaque, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* newdfa, int newstate);
  void pop();

  grammar::Grammar* grammar;
  parse::PNode* rootnode;
  List<parse::_StackItem*>* stack;
};

}  // declare namespace parse

namespace cgi {  // declare
Str* escape(Str* s);

}  // declare namespace cgi

namespace runtime {  // define
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::color_t;
using hnode_asdl::color_e;
int NO_SPID = -1;

hnode_asdl::hnode__Record* NewRecord(Str* node_type) {
  return new hnode__Record(node_type, new List<hnode_asdl::field*>(), false, str0, str1, new List<hnode_asdl::hnode_t*>());
}

hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color) {
  if (s == nullptr) {
    return new hnode__Leaf(str2, color_e::OtherConst);
  }
  else {
    return new hnode__Leaf(s, e_color);
  }
}
Str* TRUE_STR = str3;
Str* FALSE_STR = str4;

}  // define namespace runtime

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
    return new AnsiOutput(f);
  }
  else {
    return new TextOutput(f);
  }
}

ColorOutput::ColorOutput(mylib::Writer* f) {
  this->f = f;
  this->num_chars = 0;
}

format::ColorOutput* ColorOutput::NewTempBuffer() {
  throw new NotImplementedError();
}

void ColorOutput::FileHeader() {
  ;  // pass
}

void ColorOutput::FileFooter() {
  ;  // pass
}

void ColorOutput::PushColor(hnode_asdl::color_t e_color) {
  throw new NotImplementedError();
}

void ColorOutput::PopColor() {
  throw new NotImplementedError();
}

void ColorOutput::write(Str* s) {
  this->f->write(s);
  this->num_chars += len(s);
}

void ColorOutput::WriteRaw(Tuple2<Str*, int>* raw) {
  Str* s;
  int num_chars;

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
  return new TextOutput(new mylib::BufWriter());
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
  return new HtmlOutput(new mylib::BufWriter());
}

void HtmlOutput::FileHeader() {
  this->f->write(str5);
}

void HtmlOutput::FileFooter() {
  this->f->write(str6);
}

void HtmlOutput::PushColor(hnode_asdl::color_t e_color) {
  Str* css_class;

  if (e_color == color_e::TypeName) {
    css_class = str7;
  }
  else {
    if (e_color == color_e::StringConst) {
      css_class = str8;
    }
    else {
      if (e_color == color_e::OtherConst) {
        css_class = str9;
      }
      else {
        if (e_color == color_e::External) {
          css_class = str10;
        }
        else {
          if (e_color == color_e::UserType) {
            css_class = str11;
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
  this->f->write(fmt0(css_class));
}

void HtmlOutput::PopColor() {
  this->f->write(str13);
}

void HtmlOutput::write(Str* s) {
  this->f->write(cgi::escape(s));
  this->num_chars += len(s);
}
Str* _RESET = str14;
Str* _BOLD = str15;
Str* _RED = str16;
Str* _GREEN = str17;
Str* _BLUE = str18;
Str* _YELLOW = str19;
Str* _CYAN = str20;

AnsiOutput::AnsiOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::AnsiOutput* AnsiOutput::NewTempBuffer() {
  return new AnsiOutput(new mylib::BufWriter());
}

void AnsiOutput::PushColor(hnode_asdl::color_t e_color) {
  if (e_color == color_e::TypeName) {
    this->f->write(_YELLOW);
  }
  else {
    if (e_color == color_e::StringConst) {
      this->f->write(_BOLD);
    }
    else {
      if (e_color == color_e::OtherConst) {
        this->f->write(_GREEN);
      }
      else {
        if (e_color == color_e::External) {
          this->f->write(str_concat(_BOLD, _BLUE));
        }
        else {
          if (e_color == color_e::UserType) {
            this->f->write(_GREEN);
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
}

void AnsiOutput::PopColor() {
  this->f->write(_RESET);
}
int INDENT = 2;

_PrettyPrinter::_PrettyPrinter(int max_col) {
  this->max_col = max_col;
}

bool _PrettyPrinter::_PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  int chars_so_far;
  int i;
  format::ColorOutput* single_f;
  Str* s;
  int num_chars;

  all_fit = true;
  chars_so_far = prefix_len;
  i = 0;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next(), ++i) {
    hnode_asdl::hnode_t* val = it.Value();
    if (i != 0) {
      f->write(str21);
    }
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(val, single_f, this->max_col - chars_so_far)) {
      Tuple2<Str*, int> tup1 = single_f->GetRaw();
      s = tup1.at0();
      num_chars = tup1.at1();
      f->WriteRaw((new Tuple2<Str*, int>(s, num_chars)));
      chars_so_far += single_f->NumChars();
    }
    else {
      f->write(str22);
      this->PrintNode(val, f, indent + INDENT);
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

  all_fit = true;
  pieces = new List<Tuple2<Str*, int>*>();
  chars_so_far = prefix_len;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next()) {
    hnode_asdl::hnode_t* item = it.Value();
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(item, single_f, this->max_col - chars_so_far)) {
      Tuple2<Str*, int> tup2 = single_f->GetRaw();
      s = tup2.at0();
      num_chars = tup2.at1();
      pieces->append((new Tuple2<Str*, int>(s, num_chars)));
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
        f->write(str23);
      }
      f->WriteRaw(p);
    }
    f->write(str24);
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

  ind = str_repeat(str25, indent);
  if (node->abbrev) {
    prefix = str_concat(ind, node->left);
    f->write(prefix);
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str26);
    }
    prefix_len = len(prefix) + len(node->node_type) + 1;
    all_fit = this->_PrintWrappedArray(node->unnamed_fields, prefix_len, f, indent);
    if (!all_fit) {
      f->write(str27);
      f->write(ind);
    }
    f->write(node->right);
  }
  else {
    f->write(str_concat(ind, node->left));
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    f->write(str28);
    i = 0;
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      name = field->name;
      val = field->val;
      ind1 = str_repeat(str29, indent + INDENT);
      UP_val = val;
      tag = val->tag_();
      if (tag == hnode_e::Array) {
        hnode__Array* val = static_cast<hnode__Array*>(UP_val);
        name_str = fmt1(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        if (!this->_PrintWholeArray(val->children, prefix_len, f, indent)) {
          f->write(str31);
          for (ListIter<hnode_asdl::hnode_t*> it(val->children); !it.Done(); it.Next()) {
            hnode_asdl::hnode_t* child = it.Value();
            this->PrintNode(child, f, indent + INDENT + INDENT);
            f->write(str32);
          }
          f->write(fmt2(ind1));
        }
      }
      else {
        name_str = fmt3(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        single_f = f->NewTempBuffer();
        if (_TrySingleLine(val, single_f, this->max_col - prefix_len)) {
          Tuple2<Str*, int> tup3 = single_f->GetRaw();
          s = tup3.at0();
          num_chars = tup3.at1();
          f->WriteRaw((new Tuple2<Str*, int>(s, num_chars)));
        }
        else {
          f->write(str35);
          this->PrintNode(val, f, indent + INDENT + INDENT);
        }
        i += 1;
      }
      f->write(str36);
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

  ind = str_repeat(str37, indent);
  single_f = f->NewTempBuffer();
  single_f->write(ind);
  if (_TrySingleLine(node, single_f, this->max_col - indent)) {
    Tuple2<Str*, int> tup4 = single_f->GetRaw();
    s = tup4.at0();
    num_chars = tup4.at1();
    f->WriteRaw((new Tuple2<Str*, int>(s, num_chars)));
    return ;
  }
  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(pretty::String(node->s));
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
        throw new AssertionError();
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
      f->write(str38);
    }
    i = 0;
    for (ListIter<hnode_asdl::hnode_t*> it(node->unnamed_fields); !it.Done(); it.Next(), ++i) {
      hnode_asdl::hnode_t* val = it.Value();
      if (i != 0) {
        f->write(str39);
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

  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(pretty::String(node->s));
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
        f->write(str41);
        i = 0;
        for (ListIter<hnode_asdl::hnode_t*> it(node->children); !it.Done(); it.Next(), ++i) {
          hnode_asdl::hnode_t* item = it.Value();
          if (i != 0) {
            f->write(str42);
          }
          if (!_TrySingleLine(item, f, max_chars)) {
            return false;
          }
        }
        f->write(str43);
      }
      else {
        if (tag == hnode_e::Record) {
          hnode__Record* node = static_cast<hnode__Record*>(UP_node);
          return _TrySingleLineObj(node, f, max_chars);
        }
        else {
          throw new AssertionError();
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

  pp = new _PrettyPrinter(100);
  pp->PrintNode(node, f, 0);
}

}  // define namespace format

namespace osh_eval {  // define
namespace source = syntax_asdl::source;
using syntax_asdl::source_t;
namespace command = syntax_asdl::command;
namespace command_e = syntax_asdl::command_e;
using syntax_asdl::command_t;
using syntax_asdl::command_str;
using syntax_asdl::command__Simple;
using syntax_asdl::command__DParen;
namespace fmt = format;
using mylib::NewStr;

syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser) {
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command_t* node;

  children = new List<syntax_asdl::command_t*>();
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
    return new command::CommandList(children);
  }
}

TestEvaluator::TestEvaluator(sh_expr_eval::ArithEvaluator* arith_ev, word_eval::NormalWordEvaluator* word_ev) {
  this->arith_ev = arith_ev;
  this->word_ev = word_ev;
}

void TestEvaluator::Eval(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  List<syntax_asdl::compound_word*>* words;
  runtime_asdl::value__Str* val;
  runtime_asdl::value_t* a;

  UP_node = node;
  switch (node->tag_()) {
    case command_e::Simple: {
      command__Simple* node = static_cast<command__Simple*>(UP_node);
      words = braces::BraceExpandWords(node->words);
      for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
        syntax_asdl::compound_word* w = it.Value();
        val = this->word_ev->EvalWordToString(w);
        println_stderr(fmt5(val->s));
      }
    }
      break;
    case command_e::DParen: {
      command__DParen* node = static_cast<command__DParen*>(UP_node);
      a = this->arith_ev->Eval(node->child);
      println_stderr(fmt6(a->tag_()));
    }
      break;
    default: {
      println_stderr(fmt7(NewStr(command_str(node->tag_()))));
    }
  }
}

Tuple4<int, bool, Str*, bool> Parse(List<Str*>* argv) {
  int i;
  bool flag_a;
  Str* flag_c;
  bool flag_n;
  int n;

  i = 0;
  flag_a = true;
  flag_c = nullptr;
  flag_n = false;
  n = len(argv);
  while (i < n) {
    if (str_equals(argv->index(i), str47)) {
      flag_n = true;
    }
    else {
      if (str_equals(argv->index(i), str48)) {
        if (i >= n) {
          throw new AssertionError();
        }
        i += 1;
        if (str_equals(argv->index(i), str49)) {
          flag_a = false;
        }
      }
      else {
        if (str_equals(argv->index(i), str50)) {
          if (i >= n) {
            throw new AssertionError();
          }
          i += 1;
          flag_c = argv->index(i);
        }
        else {
          break;
        }
      }
    }
    i += 1;
  }
  return (Tuple4<int, bool, Str*, bool>(i, flag_a, flag_c, flag_n));
}

int main(List<Str*>* argv) {
  alloc::Arena* arena;
  Str* dollar0;
  List<state::DebugFrame*>* debug_stack;
  state::Mem* mem;
  state::OptHook* opt_hook;
  optview::Parse* parse_opts;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;
  Dict<Str*, Str*>* aliases;
  grammar::Grammar* oil_grammar;
  parse_lib::ParseContext* parse_ctx;
  int i;
  bool flag_a;
  Str* flag_c;
  bool flag_n;
  reader::FileLineReader* line_reader;
  syntax_asdl::source_t* src;
  Str* path;
  mylib::LineReader* f;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::command_t* node;
  hnode_asdl::hnode_t* tree;
  format::ColorOutput* ast_f;
  ui::ErrorFormatter* errfmt;
  split::SplitContext* splitter;
  sh_expr_eval::ArithEvaluator* arith_ev;
  word_eval::NormalWordEvaluator* word_ev;
  osh_eval::TestEvaluator* test_ev;

  arena = new alloc::Arena();
  dollar0 = argv->index(0);
  debug_stack = new List<state::DebugFrame*>();
  mem = new state::Mem(dollar0, argv, arena, debug_stack);
  opt_hook = new state::OptHook();
  Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> tup0 = state::MakeOpts(mem, opt_hook);
  parse_opts = tup0.at0();
  exec_opts = tup0.at1();
  mutable_opts = tup0.at2();
  aliases = new Dict<Str*, Str*>();
  oil_grammar = nullptr;
  parse_ctx = new parse_lib::ParseContext(arena, parse_opts, aliases, oil_grammar);
  argv = argv->slice(1);
  Tuple4<int, bool, Str*, bool> tup1 = Parse(argv);
  i = tup1.at0();
  flag_a = tup1.at1();
  flag_c = tup1.at2();
  flag_n = tup1.at3();
  argv = argv->slice(i);
  if (flag_c) {
    line_reader = reader::StringLineReader(flag_c, arena);
    src = new source::CFlag();
  }
  else {
    if (len(argv) == 0) {
      line_reader = new reader::FileLineReader(mylib::Stdin(), arena);
      src = new source::Stdin(str51);
    }
    else {
      if (len(argv) == 1) {
        path = argv->index(0);
        f = mylib::open(path);
        line_reader = new reader::FileLineReader(f, arena);
        src = new source::MainFile(path);
      }
      else {
        throw new AssertionError();
      }
    }
  }
  arena->PushSource(src);
  c_parser = parse_ctx->MakeOshParser(line_reader);
  try {
    node = ParseWholeFile(c_parser);
  }
  catch (error::Parse* e) {
    ui::PrettyPrintError(e, arena);
    return 2;
  }
  if (flag_n) {
    if (flag_a) {
      tree = node->PrettyTree();
      ast_f = fmt::DetectConsoleOutput(mylib::Stdout());
      fmt::PrintTree(tree, ast_f);
      ast_f->write(str52);
    }
    return 0;
  }
  errfmt = new ui::ErrorFormatter(arena);
  splitter = new split::SplitContext(mem);
  arith_ev = new sh_expr_eval::ArithEvaluator(mem, exec_opts, errfmt);
  word_ev = new word_eval::NormalWordEvaluator(mem, exec_opts, splitter, errfmt);
  arith_ev->word_ev = word_ev;
  word_ev->arith_ev = arith_ev;
  test_ev = new TestEvaluator(arith_ev, word_ev);
  test_ev->Eval(node);
  return 0;
}

}  // define namespace osh_eval

namespace alloc {  // define
using syntax_asdl::line_span;
using syntax_asdl::source_t;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;

Arena::Arena() {
  this->line_vals = new List<Str*>();
  this->line_nums = new List<int>();
  this->line_srcs = new List<syntax_asdl::source_t*>();
  this->line_num_strs = new Dict<int, Str*>();
  this->spans = new List<syntax_asdl::line_span*>();
  this->source_instances = new List<syntax_asdl::source_t*>();
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

  line_num = this->line_nums->index(line_id);
  try {
    return this->line_num_strs->index(line_num);
  }
  catch (KeyError*) {
    s = str(line_num);
this->line_num_strs->set(line_num, s);
    return s;
  }
}

syntax_asdl::source_t* Arena::GetLineSource(int line_id) {
  return this->line_srcs->index(line_id);
}

Str* Arena::GetLineSourceString(int line_id) {
  syntax_asdl::source_t* src;
  syntax_asdl::source_t* UP_src;
  int tag;

  src = this->line_srcs->index(line_id);
  UP_src = src;
  tag = src->tag_();
  if (tag == source_e::CFlag) {
    return str53;
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

  span_id = len(this->spans);
  span = new line_span(line_id, col, length);
  this->spans->append(span);
  return span_id;
}

syntax_asdl::line_span* Arena::GetLineSpan(int span_id) {
  try {
    return this->spans->index(span_id);
  }
  catch (IndexError*) {
    println_stderr(fmt8(span_id, len(this->spans)));
    throw ;
  }
}

int Arena::LastSpanId() {
  return len(this->spans);
}

}  // define namespace alloc

namespace error {  // define
int NO_SPID = -1;

}  // define namespace error

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
Str* _READLINE_DELIMS = str55;
int LINE_ZERO = -2;
int SetReadOnly = 1 << 0;
int ClearReadOnly = 1 << 1;
int SetExport = 1 << 2;
int ClearExport = 1 << 3;
int SetNameref = 1 << 4;
int ClearNameref = 1 << 5;

SearchPath::SearchPath(state::Mem* mem) {
  this->mem = mem;
  this->cache = new Dict<Str*, Str*>();
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

  if (str_contains(name, str56)) {
    if (path_stat::exists(name)) {
      return name;
    }
    else {
      return nullptr;
    }
  }
  val = this->mem->GetVar(str57);
  UP_val = val;
  if (val->tag_() == value_e::Str) {
    value__Str* val = static_cast<value__Str*>(UP_val);
    path_list = val->s->split(str58);
  }
  else {
    path_list = new List<Str*>();
  }
  for (ListIter<Str*> it(path_list); !it.Done(); it.Next()) {
    Str* path_dir = it.Value();
    full_path = os_path::join(path_dir, name);
    if (exec_required) {
      found = posix::access(full_path, posix::X_OK_);
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
  try {
    this->cache->remove(name);
  }
  catch (KeyError*) {
    ;  // pass
  }
}

void SearchPath::ClearCache() {
  this->cache->clear();
}

List<Str*>* SearchPath::CachedCommands() {
  return this->cache->values();
}

_ErrExit::_ErrExit() {
  this->_value = false;
  this->stack = new List<int>();
}

void _ErrExit::Push(int span_id) {
  if (this->_value) {
    this->_value = false;
    this->stack->append(span_id);
  }
  else {
    this->stack->append(runtime::NO_SPID);
  }
}

void _ErrExit::Pop() {
  this->_value = this->stack->pop() != runtime::NO_SPID;
}

int _ErrExit::SpidIfDisabled() {
  for (ListIter<int> it(this->stack); !it.Done(); it.Next()) {
    int n = it.Value();
    if (n != runtime::NO_SPID) {
      return n;
    }
  }
  return runtime::NO_SPID;
}

void _ErrExit::Set(bool b) {
  int i;

  i = 0;
  for (ListIter<int> it(this->stack); !it.Done(); it.Next(), ++i) {
    int n = it.Value();
    if (n != runtime::NO_SPID) {
this->stack->set(i, b ? 0 : runtime::NO_SPID);
      return ;
    }
  }
  this->_value = b;
}

void _ErrExit::Disable() {
  this->_value = false;
}

bool _ErrExit::value() {
  return this->_value;
}

_Getter::_Getter(List<bool>* opt_array, Str* opt_name) {
  this->opt_array = opt_array;
  this->num = match::MatchOption(opt_name);
}

bool _Getter::__call__() {
  return this->opt_array->index(this->num);
}

bool OptHook::OnChange(List<bool>* opt_array, Str* opt_name, bool b) {
  return true;
}

Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*> MakeOpts(state::Mem* mem, state::OptHook* opt_hook) {
  List<bool>* opt_array;
  state::_ErrExit* errexit;
  optview::Parse* parse_opts;
  optview::Exec* exec_opts;
  state::MutableOpts* mutable_opts;

  opt_array = list_repeat(false, option_i::ARRAY_SIZE);
  errexit = new _ErrExit();
  parse_opts = new optview::Parse(opt_array);
  exec_opts = new optview::Exec(opt_array, errexit);
  mutable_opts = new MutableOpts(mem, opt_array, errexit, opt_hook);
  return (Tuple3<optview::Parse*, optview::Exec*, state::MutableOpts*>(parse_opts, exec_opts, mutable_opts));
}

MutableOpts::MutableOpts(state::Mem* mem, List<bool>* opt_array, state::_ErrExit* errexit, state::OptHook* opt_hook) {
  this->mem = mem;
  this->opt_array = opt_array;
  this->errexit = errexit;
  for (ListIter<int> it(consts::DEFAULT_TRUE); !it.Done(); it.Next()) {
    int opt_num = it.Value();
this->opt_array->set(opt_num, true);
  }
  this->opt_hook = opt_hook;
  runtime_asdl::value_t* UP_shellopts = this->mem->GetVar(str59);
  if (UP_shellopts->tag_() == value_e::Str) {
    value__Str* shellopts = static_cast<value__Str*>(UP_shellopts);
    this->_InitOptionsFromEnv(shellopts->s);
  }
}

void MutableOpts::_InitOptionsFromEnv(Str* shellopts) {
  List<Str*>* lookup;

  lookup = shellopts->split(str60);
  for (ListIter<Str*> it(consts::SET_OPTION_NAMES); !it.Done(); it.Next()) {
    Str* name = it.Value();
    if (list_contains(lookup, name)) {
      this->_SetOption(name, true);
    }
  }
}

void MutableOpts::set_interactive() {
this->opt_array->set(option_i::interactive, true);
}

void MutableOpts::set_xtrace(bool b) {
this->opt_array->set(option_i::xtrace, b);
}

void MutableOpts::_SetArrayByName(Str* opt_name, bool b) {
  int index;

  if (list_contains(consts::PARSE_OPTION_NAMES, opt_name) and !this->mem->InGlobalNamespace()) {
    e_die(str61);
  }
  index = match::MatchOption(opt_name);
  if (index == 0) {
    e_usage(fmt9(opt_name));
  }
this->opt_array->set(index, b);
}

void MutableOpts::_SetOption(Str* opt_name, bool b) {
  bool success;

  if (str_equals(opt_name, str63)) {
    this->errexit->Set(b);
  }
  else {
    if (str_equals(opt_name, str64) and b) {
      println_stderr(str65);
    }
    this->_SetArrayByName(opt_name, b);
  }
  success = this->opt_hook->OnChange(this->opt_array, opt_name, b);
}

void MutableOpts::SetOption(Str* opt_name, bool b) {
  runtime_asdl::value_t* UP_val;
  Str* shellopts;
  runtime_asdl::value__Str* new_val;
  List<Str*>* names;

  if (!list_contains(consts::SET_OPTION_NAMES, opt_name)) {
    e_usage(fmt10(opt_name));
  }
  this->_SetOption(opt_name, b);
  UP_val = this->mem->GetVar(str67);
  value__Str* val = static_cast<value__Str*>(UP_val);
  shellopts = val->s;
  if (b) {
    if (!str_contains(shellopts, opt_name)) {
      new_val = new value::Str(fmt11(shellopts, opt_name));
      this->mem->InternalSetGlobal(str69, new_val);
    }
  }
  else {
    if (str_contains(shellopts, opt_name)) {
      names = new List<Str*>();
      for (ListIter<Str*> it(shellopts->split(str70)); !it.Done(); it.Next()) {
        Str* n = it.Value();
        names->append(n);
      }
      new_val = new value::Str(str71->join(names));
      this->mem->InternalSetGlobal(str72, new_val);
    }
  }
}

void MutableOpts::_SetGroup(List<int>* opt_nums, bool b) {
  bool b2;

  for (ListIter<int> it(opt_nums); !it.Done(); it.Next()) {
    int opt_num = it.Value();
    b2 = list_contains(consts::DEFAULT_TRUE, opt_num) ? !b : b;
this->opt_array->set(opt_num, b2);
  }
  this->errexit->Set(b);
}

void MutableOpts::SetShoptOption(Str* opt_name, bool b) {
  if (str_equals(opt_name, str73)) {
    this->_SetGroup(consts::OIL_BASIC, b);
    return ;
  }
  if (str_equals(opt_name, str74)) {
    this->_SetGroup(consts::OIL_ALL, b);
    return ;
  }
  if (str_equals(opt_name, str75)) {
    this->_SetGroup(consts::STRICT_ALL, b);
    return ;
  }
  if (!list_contains(consts::SHOPT_OPTION_NAMES, opt_name)) {
    e_usage(fmt12(opt_name));
  }
  this->_SetArrayByName(opt_name, b);
}

void MutableOpts::ShowOptions(List<Str*>* opt_names) {
  bool b;
  int index;

  if (len(opt_names) == 0) {
    opt_names = consts::SET_OPTION_NAMES;
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* opt_name = it.Value();
    if (!list_contains(consts::SET_OPTION_NAMES, opt_name)) {
      e_usage(fmt13(opt_name));
    }
    if (str_equals(opt_name, str78)) {
      b = this->errexit->value();
    }
    else {
      index = match::MatchOption(opt_name);
      b = this->opt_array->index(index);
    }
    print(fmt14(b ? str80 : str81, opt_name));
  }
}

void MutableOpts::ShowShoptOptions(List<Str*>* opt_names) {
  int index;
  bool b;

  if (len(opt_names) == 0) {
    opt_names = consts::VISIBLE_SHOPT_NAMES;
  }
  for (ListIter<Str*> it(opt_names); !it.Done(); it.Next()) {
    Str* opt_name = it.Value();
    index = match::MatchOption(opt_name);
    if (index == 0) {
      e_usage(fmt15(opt_name));
    }
    b = this->opt_array->index(index);
    print(fmt16(b ? str84 : str85, opt_name));
  }
}

_ArgFrame::_ArgFrame(List<Str*>* argv) {
  this->argv = argv;
  this->num_shifted = 0;
}

Dict<Str*, void*>* _ArgFrame::Dump() {
  return new Dict<Str*, void*>({});
}

runtime_asdl::value_t* _ArgFrame::GetArgNum(int arg_num) {
  int index;

  index = this->num_shifted + arg_num - 1;
  if (index >= len(this->argv)) {
    return new value::Undef();
  }
  return new value::Str(this->argv->index(index));
}

List<Str*>* _ArgFrame::GetArgv() {
  return this->argv->slice(this->num_shifted);
}

int _ArgFrame::GetNumArgs() {
  return len(this->argv) - this->num_shifted;
}

void _ArgFrame::SetArgv(List<Str*>* argv) {
  this->argv = argv;
  this->num_shifted = 0;
}

DirStack::DirStack() {
  this->stack = new List<Str*>();
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

  ret = new List<Str*>();
  ret->extend(this->stack);
  ret->reverse();
  return ret;
}

Str* _GetWorkingDir() {
  try {
    return posix::getcwd();
  }
  catch (OSError* e) {
    e_die(fmt17(pyutil::strerror_OS(e)));
  }
}

DebugFrame::DebugFrame(Str* bash_source, Str* func_name, Str* source_name, int call_spid, int argv_i, int var_i) {
  this->bash_source = bash_source;
  this->func_name = func_name;
  this->source_name = source_name;
  this->call_spid = call_spid;
  this->argv_i = argv_i;
  this->var_i = var_i;
}

void _InitDefaults(state::Mem* mem) {
  SetGlobalString(mem, str88, split::DEFAULT_IFS);
  SetGlobalString(mem, str89, str(posix::getuid()));
  SetGlobalString(mem, str90, str(posix::geteuid()));
  SetGlobalString(mem, str91, str(posix::getppid()));
  SetGlobalString(mem, str92, libc::gethostname());
  SetGlobalString(mem, str93, posix::uname()->index(0)->lower());
  SetGlobalString(mem, str94, str95);
  SetGlobalString(mem, str96, str97);
  SetGlobalString(mem, str98, _READLINE_DELIMS);
}

void _InitVarsFromEnv(state::Mem* mem, Dict<Str*, Str*>* environ) {
  runtime_asdl::value_t* val;

  for (DictIter<Str*, Str*> it(environ); !it.Done(); it.Next()) {
    Str* n = it.Key();
    Str* v = it.Value();
    mem->SetVar(new lvalue::Named(n), new value::Str(v), scope_e::GlobalOnly, SetExport);
  }
  val = mem->GetVar(str99);
  if (val->tag_() == value_e::Undef) {
    SetGlobalString(mem, str100, str101);
  }
  mem->SetVar(new lvalue::Named(str102), nullptr, scope_e::GlobalOnly, SetReadOnly);
  val = mem->GetVar(str103);
  if (val->tag_() == value_e::Undef) {
    SetGlobalString(mem, str104, _GetWorkingDir());
  }
  mem->SetVar(new lvalue::Named(str105), nullptr, scope_e::GlobalOnly, SetExport);
}

void InitMem(state::Mem* mem, Dict<Str*, Str*>* environ) {
  runtime_asdl::value_t* val;
  Str* pwd;

  _InitDefaults(mem);
  _InitVarsFromEnv(mem, environ);
  val = mem->GetVar(str106);
  pwd = static_cast<value__Str*>(val)->s;
  mem->SetPwd(pwd);
}

Mem::Mem(Str* dollar0, List<Str*>* argv, alloc::Arena* arena, List<state::DebugFrame*>* debug_stack) {
  this->exec_opts = nullptr;
  this->dollar0 = dollar0;
  this->argv_stack = new List<state::_ArgFrame*>({new _ArgFrame(argv)});
  this->var_stack = new List<Dict<Str*, runtime_asdl::cell*>*>({new Dict<Str*, runtime_asdl::cell*>()});
  this->arena = arena;
  this->debug_stack = debug_stack;
  this->current_spid = runtime::NO_SPID;
  this->source_name = new value::Str(str107);
  this->line_num = new value::Str(str108);
  this->last_status = new List<int>({0});
  this->pipe_status = new List<List<int>*>({new List<int>()});
  this->last_bg_pid = -1;
  this->root_pid = posix::getpid();
}

void Mem::SetPwd(Str* pwd) {
  this->pwd = pwd;
}

bool Mem::InGlobalNamespace() {
  return len(this->argv_stack) == 1;
}

Tuple3<void*, void*, void*> Mem::Dump() {
  throw new AssertionError();
}

void Mem::SetCurrentSpanId(int span_id) {
  if (span_id == runtime::NO_SPID) {
    println_stderr(str115);
    return ;
  }
  this->current_spid = span_id;
}

int Mem::CurrentSpanId() {
  return this->current_spid;
}

void Mem::PushStatusFrame() {
  this->last_status->append(0);
  this->pipe_status->append(new List<int>());
}

void Mem::PopStatusFrame() {
  this->last_status->pop();
  this->pipe_status->pop();
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

void Mem::PushCall(Str* func_name, int def_spid, List<Str*>* argv) {
  syntax_asdl::line_span* span;
  Str* source_str;

  this->argv_stack->append(new _ArgFrame(argv));
  this->var_stack->append(new Dict<Str*, runtime_asdl::cell*>());
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
    this->argv_stack->append(new _ArgFrame(argv));
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
  this->var_stack->append(new Dict<Str*, runtime_asdl::cell*>());
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

  argv_i = len(this->argv_stack) - 1;
  var_i = len(this->var_stack) - 1;
  this->debug_stack->append(new DebugFrame(bash_source, func_name, source_name, this->current_spid, argv_i, var_i));
}

void Mem::_PopDebugStack() {
  this->debug_stack->pop();
}

int Mem::Shift(int n) {
  state::_ArgFrame* frame;
  int num_args;

  frame = this->argv_stack->index(-1);
  num_args = len(frame->argv);
  if (frame->num_shifted + n <= num_args) {
    frame->num_shifted += n;
    return 0;
  }
  else {
    return 1;
  }
}

runtime_asdl::value_t* Mem::GetArgNum(int arg_num) {
  if (arg_num == 0) {
    return new value::Str(this->dollar0);
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
      return new value::Undef();
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
          throw new NotImplementedError(op_id);
        }
      }
    }
  }
  return new value::Str(str(n));
}

Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> Mem::_ResolveNameOnly(Str* name, runtime_asdl::scope_t lookup_mode) {
  Dict<Str*, runtime_asdl::cell*>* name_map;
  runtime_asdl::cell* cell;
  runtime_asdl::cell* no_cell;

  if (lookup_mode == scope_e::Dynamic) {
    for (int i = len(this->var_stack) - 1; i < -1; i += -1) {
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
    if (lookup_mode == scope_e::LocalOnly) {
      name_map = this->var_stack->index(-1);
      return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
    }
    else {
      if (lookup_mode == scope_e::GlobalOnly) {
        name_map = this->var_stack->index(0);
        return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
      }
      else {
        if (lookup_mode == scope_e::LocalOrGlobal) {
          name_map = this->var_stack->index(-1);
          cell = name_map->get(name);
          if (cell) {
            return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(cell, name_map));
          }
          name_map = this->var_stack->index(0);
          return (Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*>(name_map->get(name), name_map));
        }
        else {
          throw new AssertionError();
        }
      }
    }
  }
}

Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> Mem::_ResolveNameOrRef(Str* name, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  Str* new_name;
  Str* cell_name;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup0 = this->_ResolveNameOnly(name, lookup_mode);
  cell = tup0.at0();
  name_map = tup0.at1();
  if (!cell or !cell->nameref) {
    return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
  }
  val = cell->val;
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      if (this->exec_opts->strict_nameref()) {
        e_die(fmt18(name));
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
      throw new AssertionError();
    }
  }
  if (!match::IsValidVarName(new_name)) {
    if (this->exec_opts->strict_nameref()) {
      e_die(fmt19(name, new_name));
    }
    else {
      cell->nameref = false;
      return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, name));
    }
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup1 = this->_ResolveNameOrRef(new_name, lookup_mode);
  cell = tup1.at0();
  name_map = tup1.at1();
  cell_name = tup1.at2();
  return (Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*>(cell, name_map, cell_name));
}

bool Mem::IsAssocArray(Str* name, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;

  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup2 = this->_ResolveNameOrRef(name, lookup_mode);
  cell = tup2.at0();
  if (cell) {
    if (cell->val->tag_() == value_e::AssocArray) {
      return true;
    }
  }
  return false;
}

void Mem::_CheckOilKeyword(int keyword_id, Str* name, runtime_asdl::cell* cell) {
  if (cell and (keyword_id == Id::KW_Var || keyword_id == Id::KW_Const)) {
    e_die(fmt20(name));
  }
  if (cell == nullptr and (keyword_id == Id::KW_Set || keyword_id == Id::KW_SetGlobal)) {
    e_die(fmt21(name));
  }
}

void Mem::_DisallowNamerefCycle(Str* name, List<Str*>* ref_trail) {
  runtime_asdl::cell* cell;
  runtime_asdl::value_t* val;
  Str* new_name;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup3 = this->_ResolveNameOnly(name, scope_e::Dynamic);
  cell = tup3.at0();
  if (!cell or !cell->nameref) {
    return ;
  }
  val = cell->val;
  if (val->tag_() != value_e::Str) {
    return ;
  }
  value__Str* str_val = static_cast<value__Str*>(val);
  new_name = str_val->s;
  if (list_contains(ref_trail, new_name)) {
    e_die(fmt22(str121->join(ref_trail)));
  }
  ref_trail->append(new_name);
  this->_DisallowNamerefCycle(new_name, ref_trail);
}

void Mem::SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode) {
  SetVar(lval, val, lookup_mode, 0);
}

void Mem::SetVar(runtime_asdl::lvalue_t* lval, runtime_asdl::value_t* val, runtime_asdl::scope_t lookup_mode, int flags) {
  int keyword_id;
  runtime_asdl::lvalue_t* UP_lval;
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  Str* cell_name;
  List<Str*>* ref_trail;
  int left_spid;
  runtime_asdl::value_t* UP_cell_val;
  List<Str*>* strs;
  int n;

  keyword_id = flags >> 8;
  UP_lval = lval;
  switch (lval->tag_()) {
    case lvalue_e::Named: {
      lvalue__Named* lval = static_cast<lvalue__Named*>(UP_lval);
      if (flags & SetNameref or flags & ClearNameref) {
        Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup4 = this->_ResolveNameOnly(lval->name, lookup_mode);
        cell = tup4.at0();
        name_map = tup4.at1();
        cell_name = lval->name;
      }
      else {
        Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup5 = this->_ResolveNameOrRef(lval->name, lookup_mode);
        cell = tup5.at0();
        name_map = tup5.at1();
        cell_name = tup5.at2();
      }
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (cell) {
        if (flags & ClearExport) {
          cell->exported = false;
        }
        if (flags & ClearReadOnly) {
          cell->readonly = false;
        }
        if (flags & ClearNameref) {
          cell->nameref = false;
        }
        if (val != nullptr) {
          if (cell->readonly) {
            e_die(fmt23(lval->name));
          }
          cell->val = val;
        }
        if (flags & SetExport) {
          cell->exported = true;
        }
        if (flags & SetReadOnly) {
          cell->readonly = true;
        }
        if (flags & SetNameref) {
          cell->nameref = true;
        }
      }
      else {
        if (val == nullptr) {
          val = new value::Undef();
        }
        cell = new runtime_asdl::cell(new bool(flags & SetExport), new bool(flags & SetReadOnly), new bool(flags & SetNameref), val);
name_map->set(cell_name, cell);
      }
      if ((cell->val->tag_() != value_e::Undef && cell->val->tag_() != value_e::Str)) {
        if (cell->exported) {
          e_die(str123);
        }
        if (cell->nameref) {
          e_die(str124);
        }
      }
      if (cell->nameref) {
        ref_trail = new List<Str*>();
        this->_DisallowNamerefCycle(cell_name, ref_trail);
      }
    }
      break;
    case lvalue_e::Indexed: {
      lvalue__Indexed* lval = static_cast<lvalue__Indexed*>(UP_lval);
      value__Str* rval = static_cast<value__Str*>(val);
      left_spid = lval->spids ? lval->spids->index(0) : runtime::NO_SPID;
      Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup6 = this->_ResolveNameOrRef(lval->name, lookup_mode);
      cell = tup6.at0();
      name_map = tup6.at1();
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (!cell) {
        this->_BindNewArrayWithEntry(name_map, lval, rval, flags);
        return ;
      }
      if (cell->readonly) {
        e_die(fmt24(), left_spid);
      }
      UP_cell_val = cell->val;
      switch (UP_cell_val->tag_()) {
        case value_e::Undef: {
          this->_BindNewArrayWithEntry(name_map, lval, rval, flags);
          return ;
        }
          break;
        case value_e::Str: {
          e_die(fmt25(), left_spid);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* cell_val = static_cast<value__MaybeStrArray*>(UP_cell_val);
          strs = cell_val->strs;
          try {
strs->set(lval->index, rval->s);
          }
          catch (IndexError*) {
            n = lval->index - len(strs) + 1;
            for (int i = 0; i < n; ++i) {
              strs->append(nullptr);
            }
strs->set(lval->index, rval->s);
          }
          return ;
        }
          break;
      }
      e_die(fmt26(ui::ValType(cell->val)), left_spid);
    }
      break;
    case lvalue_e::Keyed: {
      lvalue__Keyed* lval = static_cast<lvalue__Keyed*>(UP_lval);
      value__Str* rval = static_cast<value__Str*>(val);
      left_spid = lval->spids ? lval->spids->index(0) : runtime::NO_SPID;
      Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup7 = this->_ResolveNameOrRef(lval->name, lookup_mode);
      cell = tup7.at0();
      name_map = tup7.at1();
      this->_CheckOilKeyword(keyword_id, lval->name, cell);
      if (cell->readonly) {
        e_die(fmt27(), left_spid);
      }
      value__AssocArray* cell_val2 = static_cast<value__AssocArray*>(cell->val);
cell_val2->d->set(lval->key, rval->s);
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

void Mem::_BindNewArrayWithEntry(Dict<Str*, runtime_asdl::cell*>* name_map, runtime_asdl::lvalue__Indexed* lval, runtime_asdl::value__Str* val, int flags) {
  Str* no_str;
  List<Str*>* items;
  runtime_asdl::value__MaybeStrArray* new_value;
  bool readonly;

  no_str = nullptr;
  items = list_repeat(no_str, lval->index);
  items->append(val->s);
  new_value = new value::MaybeStrArray(items);
  readonly = new bool(flags & SetReadOnly);
name_map->set(lval->name, new runtime_asdl::cell(false, readonly, false, new_value));
}

void Mem::InternalSetGlobal(Str* name, runtime_asdl::value_t* new_val) {
  runtime_asdl::cell* cell;

  cell = this->var_stack->index(0)->index(name);
  cell->val = new_val;
}

runtime_asdl::value_t* Mem::GetVar(Str* name) {
  return GetVar(name, scope_e::Dynamic);
}

runtime_asdl::value_t* Mem::GetVar(Str* name, runtime_asdl::scope_t lookup_mode) {
  List<Str*>* strs;
  syntax_asdl::line_span* span;
  int line_num;
  runtime_asdl::cell* cell;

  if (str_equals(name, str129)) {
    return new value::MaybeStrArray(this->GetArgv());
  }
  if (str_equals(name, str130)) {
    return new value::MaybeStrArray();
  }
  if (str_equals(name, str131)) {
    strs = new List<Str*>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->func_name) {
        strs->append(frame->func_name);
      }
      if (frame->source_name) {
        strs->append(str132);
      }
    }
    return new value::MaybeStrArray(strs);
  }
  if (str_equals(name, str133)) {
    strs = new List<Str*>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->bash_source) {
        strs->append(frame->bash_source);
      }
    }
    return new value::MaybeStrArray(strs);
  }
  if (str_equals(name, str134)) {
    strs = new List<Str*>();
    for (ReverseListIter<state::DebugFrame*> it(this->debug_stack); !it.Done(); it.Next()) {
      state::DebugFrame* frame = it.Value();
      if (frame->call_spid == runtime::NO_SPID) {
        continue;
      }
      if (frame->call_spid == LINE_ZERO) {
        strs->append(str135);
        continue;
      }
      span = this->arena->GetLineSpan(frame->call_spid);
      line_num = this->arena->GetLineNumber(span->line_id);
      strs->append(str(line_num));
    }
    return new value::MaybeStrArray(strs);
  }
  if (str_equals(name, str136)) {
    span = this->arena->GetLineSpan(this->current_spid);
    this->line_num->s = str(this->arena->GetLineNumber(span->line_id));
    return this->line_num;
  }
  Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup8 = this->_ResolveNameOrRef(name, lookup_mode);
  cell = tup8.at0();
  if (cell) {
    return cell->val;
  }
  return new value::Undef();
}

runtime_asdl::cell* Mem::GetCell(Str* name) {
  runtime_asdl::cell* cell;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup9 = this->_ResolveNameOnly(name, scope_e::Dynamic);
  cell = tup9.at0();
  return cell;
}

Tuple2<bool, bool> Mem::Unset(runtime_asdl::lvalue__Named* lval, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;
  Str* cell_name;
  bool found;

  if (lval->tag == lvalue_e::Named) {
    Tuple3<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*, Str*> tup10 = this->_ResolveNameOrRef(lval->name, lookup_mode);
    cell = tup10.at0();
    name_map = tup10.at1();
    cell_name = tup10.at2();
    if (cell) {
      found = true;
      if (cell->readonly) {
        return (Tuple2<bool, bool>(false, found));
      }
      name_map->index(cell_name)->val = new value::Undef();
      cell->exported = false;
      return (Tuple2<bool, bool>(true, found));
    }
    else {
      return (Tuple2<bool, bool>(true, false));
    }
  }
  else {
    if (lval->tag == lvalue_e::Indexed) {
      throw new NotImplementedError();
    }
    else {
      throw new AssertionError();
    }
  }
}

bool Mem::ClearFlag(Str* name, int flag, runtime_asdl::scope_t lookup_mode) {
  runtime_asdl::cell* cell;
  Dict<Str*, runtime_asdl::cell*>* name_map;

  Tuple2<runtime_asdl::cell*, Dict<Str*, runtime_asdl::cell*>*> tup11 = this->_ResolveNameOnly(name, lookup_mode);
  cell = tup11.at0();
  name_map = tup11.at1();
  if (cell) {
    if (flag & ClearExport) {
      cell->exported = false;
    }
    if (flag & ClearNameref) {
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

  exported = new Dict<Str*, Str*>();
  for (ListIter<Dict<Str*, runtime_asdl::cell*>*> it(this->var_stack); !it.Done(); it.Next()) {
    Dict<Str*, runtime_asdl::cell*>* scope = it.Value();
    for (DictIter<Str*, runtime_asdl::cell*> it(scope); !it.Done(); it.Next()) {
      Str* name = it.Key();
      runtime_asdl::cell* cell = it.Value();
      if (cell->exported and cell->val->tag_() == value_e::Str) {
        value__Str* val = static_cast<value__Str*>(cell->val);
exported->set(name, val->s);
      }
    }
  }
  return exported;
}

List<Str*>* Mem::VarNames() {
  List<Str*>* ret;

  ret = new List<Str*>();
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

  names = new List<Str*>();
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

  result = new Dict<Str*, Str*>();
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

void SetLocalString(state::Mem* mem, Str* name, Str* s) {
  mem->SetVar(new lvalue::Named(name), new value::Str(s), scope_e::LocalOnly);
}

void SetStringDynamic(state::Mem* mem, Str* name, Str* s) {
  mem->SetVar(new lvalue::Named(name), new value::Str(s), scope_e::Dynamic);
}

void SetArrayDynamic(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetVar(new lvalue::Named(name), new value::MaybeStrArray(a), scope_e::Dynamic);
}

void SetGlobalString(state::Mem* mem, Str* name, Str* s) {
  runtime_asdl::value__Str* val;

  val = new value::Str(s);
  mem->SetVar(new lvalue::Named(name), val, scope_e::GlobalOnly);
}

void SetGlobalArray(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetVar(new lvalue::Named(name), new value::MaybeStrArray(a), scope_e::GlobalOnly);
}

void SetLocalArray(state::Mem* mem, Str* name, List<Str*>* a) {
  mem->SetVar(new lvalue::Named(name), new value::MaybeStrArray(a), scope_e::LocalOnly);
}

void ExportGlobalString(state::Mem* mem, Str* name, Str* s) {
  runtime_asdl::value__Str* val;

  val = new value::Str(s);
  mem->SetVar(new lvalue::Named(name), val, scope_e::GlobalOnly, SetExport);
}

runtime_asdl::value_t* GetGlobal(state::Mem* mem, Str* name) {
  return mem->GetVar(name, scope_e::GlobalOnly);
}

}  // define namespace state

namespace ui {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
using syntax_asdl::command_t;
namespace command = syntax_asdl::command;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__Stdin;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;
using syntax_asdl::source__EvalArg;
using syntax_asdl::source__Alias;
using syntax_asdl::source__LValue;
using runtime_asdl::value_str;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
namespace fmt = format;
using mylib::NewStr;

Str* ValType(runtime_asdl::value_t* val) {
  return NewStr(value_str(val->tag_()));
}

Str* PrettyId(int id_) {
  return NewStr(Id_str(id_));
}

Str* PrettyToken(syntax_asdl::Token* tok, alloc::Arena* arena) {
  syntax_asdl::line_span* span;
  Str* line;
  Str* val;

  if (tok->id == Id::Eof_Real) {
    return str137;
  }
  span = arena->GetLineSpan(tok->span_id);
  line = arena->GetLine(span->line_id);
  val = line->slice(span->col, span->col + span->length);
  return repr(val);
}

Str* PrettyDir(Str* dir_name, runtime_asdl::value_t* UP_home_dir) {
  Str* home_dir;

  if (UP_home_dir and UP_home_dir->tag_() == value_e::Str) {
    home_dir = static_cast<value__Str*>(UP_home_dir)->s;
    if (dir_name == home_dir or dir_name->startswith(str_concat(home_dir, str138))) {
      return str_concat(str139, dir_name->slice(len(home_dir)));
    }
  }
  return dir_name;
}

void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f) {
  f->write(str140);
  f->write(line->rstrip());
  f->write(str141);
  for (StrIter it(line->slice(0, col)); !it.Done(); it.Next()) {
    Str* c = it.Value();
    f->write(str_equals(c, str142) ? str143 : str144);
  }
  f->write(str145);
  f->write(str_repeat(str146, length - 1));
  f->write(str147);
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
      source_str = str148;
    }
      break;
    case source_e::CFlag: {
      source_str = str149;
    }
      break;
    case source_e::Stdin: {
      source__Stdin* src = static_cast<source__Stdin*>(UP_src);
      source_str = fmt28(src->comment);
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
      source_str = fmt29(src->argv0);
    }
      break;
    case source_e::Backticks: {
      source_str = str152;
    }
      break;
    case source_e::LValue: {
      source__LValue* src = static_cast<source__LValue*>(UP_src);
      span2 = arena->GetLineSpan(src->left_spid);
      line2 = arena->GetLine(span2->line_id);
      outer_source = arena->GetLineSourceString(span2->line_id);
      source_str = fmt30(outer_source);
      line_num = arena->GetLineNumber(span2->line_id);
      lbracket_col = span2->col + span2->length;
      _PrintCodeExcerpt(line2, orig_col + lbracket_col, 1, f);
    }
      break;
    case source_e::EvalArg: {
      source__EvalArg* src = static_cast<source__EvalArg*>(UP_src);
      span = arena->GetLineSpan(src->eval_spid);
      line_num = arena->GetLineNumber(span->line_id);
      outer_source = arena->GetLineSourceString(span->line_id);
      source_str = fmt31(line_num, outer_source);
    }
      break;
    case source_e::Trap: {
      source_str = str155;
    }
      break;
    default: {
      source_str = repr(src);
    }
  }
  f->write(fmt32(source_str, line_num, prefix, msg));
}

void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena) {
  mylib::Writer* f;

  f = mylib::Stderr();
  if (span_id == runtime::NO_SPID) {
    f->write(fmt33(prefix, msg));
  }
  else {
    _PrintWithSpanId(prefix, msg, span_id, arena, f);
  }
}

void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  Str* msg;
  int span_id;

  msg = err->UserErrorString();
  span_id = word_::SpanIdFromError(err);
  _PrintWithOptionalSpanId(prefix, msg, span_id, arena);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena) {
  PrettyPrintError(err, arena, str158);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  _pp(err, arena, prefix);
}

ErrorFormatter::ErrorFormatter(alloc::Arena* arena) {
  this->arena = arena;
  this->last_spid = runtime::NO_SPID;
  this->spid_stack = new List<int>();
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

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err) {
  PrettyPrintError(err, str159);
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix) {
  _pp(err, this->arena, prefix);
}

}  // define namespace ui

namespace lexer {  // define
using syntax_asdl::Token;
using syntax_asdl::line_span;
using types_asdl::lex_mode_t;
using id_kind_asdl::Id_t;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
syntax_asdl::Token* _EOL_TOK = new Token(Id::Eol_Tok, runtime::NO_SPID, nullptr);

LineLexer::LineLexer(Str* line, alloc::Arena* arena) {
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
    line_id = this->arena->AddLine(str161, 0);
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
    Tuple2<int, int> tup0 = match::OneToken(lex_mode, this->line, pos);
    tok_type = tup0.at0();
    end_pos = tup0.at1();
    if (tok_type != Id::WS_Space) {
      break;
    }
    pos = end_pos;
  }
  return tok_type;
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

  line = this->line;
  line_pos = this->line_pos;
  Tuple2<int, int> tup1 = match::OneToken(lex_mode, line, line_pos);
  tok_type = tup1.at0();
  end_pos = tup1.at1();
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
    tok_len = end_pos - line_pos;
    span_id = this->arena->AddLineSpan(this->line_id, line_pos, tok_len);
    this->last_span_id = span_id;
  }
  t = new Token(tok_type, span_id, tok_val);
  this->line_pos = end_pos;
  return t;
}

Lexer::Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader) {
  this->line_lexer = line_lexer;
  this->line_reader = line_reader;
  this->line_id = -1;
  this->translation_stack = new List<Tuple2<int, int>*>();
  this->emit_comp_dummy = false;
}

void Lexer::ResetInputObjects() {
  this->line_lexer->Reset(str162, -1, 0);
}

bool Lexer::MaybeUnreadOne() {
  return this->line_lexer->MaybeUnreadOne();
}

int Lexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  return this->line_lexer->LookAhead(lex_mode);
}

void Lexer::EmitCompDummy() {
  this->emit_comp_dummy = true;
}

void Lexer::PushHint(int old_id, int new_id) {
  this->translation_stack->append((new Tuple2<int, int>(old_id, new_id)));
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

  t = this->line_lexer->Read(lex_mode);
  if (t->id == Id::Eol_Tok) {
    Tuple3<int, Str*, int> tup2 = this->line_reader->GetLine();
    line_id = tup2.at0();
    line = tup2.at1();
    line_pos = tup2.at2();
    if (line == nullptr) {
      span_id = this->line_lexer->GetSpanIdForEof();
      if (this->emit_comp_dummy) {
        id_ = Id::Lit_CompDummy;
        this->emit_comp_dummy = false;
      }
      else {
        id_ = Id::Eof_Real;
      }
      t = new Token(id_, span_id, str163);
      return t;
    }
    this->line_lexer->Reset(line, line_id, line_pos);
    t = this->line_lexer->Read(lex_mode);
  }
  if (len(this->translation_stack)) {
    Tuple2<int, int>* tup3 = this->translation_stack->index(-1);
    old_id = tup3->at0();
    new_id = tup3->at1();
    if (t->id == old_id) {
      this->translation_stack->pop();
      t->id = new_id;
    }
  }
  return t;
}

syntax_asdl::Token* Lexer::Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;

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
using syntax_asdl::command__Pipeline;
using syntax_asdl::command__AndOr;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__BraceGroup;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__WhileUntil;
using syntax_asdl::command__If;
using syntax_asdl::command__Case;
using syntax_asdl::command__TimeBlock;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__ArithWord;

int SpanForCommand(syntax_asdl::command_t* node) {
  syntax_asdl::command_t* UP_node;
  int tag;

  UP_node = node;
  tag = node->tag_();
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
    command__BraceGroup* node = static_cast<command__BraceGroup*>(UP_node);
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

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      return runtime::NO_SPID;
    }
      break;
    case arith_expr_e::ArithWord: {
      arith_expr__ArithWord* node = static_cast<arith_expr__ArithWord*>(UP_node);
      return word_::LeftMostSpanForWord(node->w);
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
using syntax_asdl::command_t;
using syntax_asdl::command__VarDecl;
using syntax_asdl::command__PlaceMutation;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Func;
using syntax_asdl::expr_t;
using syntax_asdl::word_t;
using syntax_asdl::redir_t;
using syntax_asdl::arg_list;
using syntax_asdl::name_type;
using types_asdl::lex_mode_e;

_BaseTrail::_BaseTrail() {
  this->words = new List<syntax_asdl::compound_word*>();
  this->redirects = new List<syntax_asdl::redir_t*>();
  this->tokens = new List<syntax_asdl::Token*>();
  this->alias_words = new List<syntax_asdl::compound_word*>();
  this->expanding_alias = false;
}

void _BaseTrail::Clear() {
  ;  // pass
}

void _BaseTrail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects) {
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

void Trail::Clear() {
  this->words->clear();
  this->redirects->clear();
  this->tokens->clear();
  this->alias_words->clear();
}

void Trail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects) {
  if (this->expanding_alias) {
    this->alias_words = words;
    return ;
  }
  this->words = words;
  this->redirects = redirects;
}

void Trail::AppendToken(syntax_asdl::Token* token) {
  if (this->expanding_alias) {
    return ;
  }
  this->tokens->append(token);
}

void Trail::BeginAliasExpansion() {
  this->expanding_alias = true;
}

void Trail::EndAliasExpansion() {
  this->expanding_alias = false;
}

ParseContext::ParseContext(alloc::Arena* arena, optview::Parse* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar) {
  this->arena = arena;
  this->parse_opts = parse_opts;
  this->aliases = aliases;
  this->e_parser = new expr_parse::ExprParser(this, oil_grammar);
  if (oil_grammar) {
    this->tr = new expr_to_ast::Transformer(oil_grammar);
  }
  else {
    this->tr = nullptr;
  }
  this->parsing_expr = false;
  this->trail = new _NullTrail();
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

  line_lexer = new lexer::LineLexer(str165, this->arena);
  return new lexer::Lexer(line_lexer, line_reader);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader) {
  return MakeOshParser(line_reader, false);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy) {
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;

  lx = this->_MakeLexer(line_reader);
  if (emit_comp_dummy) {
    lx->EmitCompDummy();
  }
  w_parser = new word_parse::WordParser(this, lx, line_reader);
  c_parser = new cmd_parse::CommandParser(this, w_parser, lx, line_reader);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForHereDoc(reader::_Reader* line_reader) {
  lexer::Lexer* lx;

  lx = this->_MakeLexer(line_reader);
  return new word_parse::WordParser(this, lx, line_reader);
}

word_parse::WordParser* ParseContext::MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader) {
  return new word_parse::WordParser(this, lx, line_reader);
}

tdop::TdopParser* ParseContext::MakeArithParser(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  tdop::TdopParser* a_parser;

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  w_parser = new word_parse::WordParser(this, lx, line_reader);
  w_parser->Init(lex_mode_e::Arith);
  a_parser = new tdop::TdopParser(arith_parse::Spec(), w_parser);
  return a_parser;
}

cmd_parse::CommandParser* ParseContext::MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id) {
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;

  w_parser = new word_parse::WordParser(this, lexer, line_reader);
  c_parser = new cmd_parse::CommandParser(this, w_parser, lexer, line_reader);
  c_parser->Init_EofId(eof_id);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForPlugin(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  return new word_parse::WordParser(this, lx, line_reader);
}

Tuple2<parse::PNode*, syntax_asdl::Token*> ParseContext::_ParseOil(lexer::Lexer* lexer, int start_symbol) {
  this->parsing_expr = true;
  try {
    return this->e_parser->Parse(lexer, start_symbol);
  }
  catch (std::exception) { }}

Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*> ParseContext::ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__VarDecl* ast_node;

  if (this->parsing_expr) {
    p_die(fmt34(), kw_token);
  }
  this->parsing_expr = true;
  try {
    Tuple2<parse::PNode*, syntax_asdl::Token*> tup0 = this->e_parser->Parse(lexer, grammar_nt::oil_var_decl);
    pnode = tup0.at0();
    last_token = tup0.at1();
  }
  catch (std::exception) { }  ast_node = this->tr->MakeVarDecl(pnode);
  ast_node->keyword = kw_token;
  return (Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*> ParseContext::ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__PlaceMutation* ast_node;

  Tuple2<parse::PNode*, syntax_asdl::Token*> tup1 = this->e_parser->Parse(lexer, grammar_nt::oil_place_mutation);
  pnode = tup1.at0();
  last_token = tup1.at1();
  ast_node = this->tr->MakePlaceMutation(pnode);
  ast_node->keyword = kw_token;
  return (Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>(ast_node, last_token));
}

syntax_asdl::Token* ParseContext::ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;

  if (this->parsing_expr) {
    throw new AssertionError();
  }
  Tuple2<parse::PNode*, syntax_asdl::Token*> tup2 = this->_ParseOil(lexer, grammar_nt::oil_arglist);
  pnode = tup2.at0();
  last_token = tup2.at1();
  this->tr->ArgList(pnode, out);
  return last_token;
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> ParseContext::ParseOilExpr(lexer::Lexer* lexer, int start_symbol) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::expr_t* ast_node;

  Tuple2<parse::PNode*, syntax_asdl::Token*> tup3 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup3.at0();
  last_token = tup3.at1();
  ast_node = this->tr->Expr(pnode);
  return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> ParseContext::ParseOilForExpr(lexer::Lexer* lexer, int start_symbol) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;

  Tuple2<parse::PNode*, syntax_asdl::Token*> tup4 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup4.at0();
  last_token = tup4.at1();
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> tup5 = this->tr->OilForExpr(pnode);
  lvalue = tup5.at0();
  iterable = tup5.at1();
  return (Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>(lvalue, iterable, last_token));
}

syntax_asdl::Token* ParseContext::ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<parse::PNode*, syntax_asdl::Token*> tup6 = this->e_parser->Parse(lexer, grammar_nt::oil_proc);
  pnode = tup6.at0();
  last_token = tup6.at1();
  out->sig = this->tr->Proc(pnode);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<parse::PNode*, syntax_asdl::Token*> tup7 = this->e_parser->Parse(lexer, grammar_nt::oil_func);
  pnode = tup7.at0();
  last_token = tup7.at1();
  this->tr->Func(pnode, out);
  return last_token;
}

}  // define namespace parse_lib

namespace reader {  // define

_Reader::_Reader(alloc::Arena* arena) {
  this->arena = arena;
  this->line_num = 1;
}

Str* _Reader::_GetLine() {
  throw new NotImplementedError();
}

Tuple3<int, Str*, int> _Reader::GetLine() {
  Str* line;
  Str* eof_line;
  int line_id;

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

DisallowedLineReader::DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token) : _Reader(arena) {
  this->blame_token = blame_token;
}

Str* DisallowedLineReader::_GetLine() {
  p_die(fmt35(), this->blame_token);
}

FileLineReader::FileLineReader(mylib::LineReader* f, alloc::Arena* arena) : _Reader(arena) {
  this->f = f;
}

Str* FileLineReader::_GetLine() {
  Str* line;

  line = this->f->readline();
  if (len(line) == 0) {
    return nullptr;
  }
  return line;
}

reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena) {
  return new FileLineReader(new mylib::BufLineReader(s), arena);
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

ParseTreePrinter::ParseTreePrinter(Dict<int, Str*>* names) {
  this->names = names;
  this->f = mylib::Stdout();
}

void ParseTreePrinter::_Print(parse::PNode* pnode, int indent, int i) {
  Str* ind;
  Str* v;

  ind = str_repeat(str168, indent);
  if (pnode->tok) {
    v = pnode->tok->val;
  }
  else {
    v = str169;
  }
  this->f->write(fmt36(ind, i, this->names->index(pnode->typ), v));
  if (pnode->children != nullptr) {
    i = 0;
    for (ListIter<parse::PNode*> it(pnode->children); !it.Done(); it.Next(), ++i) {
      parse::PNode* child = it.Value();
      this->_Print(child, indent + 1, i);
    }
  }
}

void ParseTreePrinter::Print(parse::PNode* pnode) {
  this->_Print(pnode, 0, 0);
}

int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok) {
  int typ;
  Str* type_str;

  if (tok->id == Id::Expr_Name) {
    if (dict_contains(gr->keywords, tok->val)) {
      return gr->keywords->index(tok->val);
    }
  }
  typ = tok->id;
  if (dict_contains(gr->tokens, typ)) {
    return gr->tokens->index(typ);
  }
  type_str = tok->id == Id::Unknown_Tok ? str171 : fmt37(ui::PrettyId(tok->id));
  p_die(fmt38(type_str), tok);
}
Dict<int, int>* _OTHER_BALANCE = new Dict<int, int>({});

syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex) {
  syntax_asdl::Token* last_token;
  int balance;
  syntax_asdl::Token* tok;
  int ilabel;

  last_token = nullptr;
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
    if (balance > 0 and tok->id == Id::Op_Newline) {
      continue;
    }
    balance += _OTHER_BALANCE->get(tok->id, 0);
    ilabel = _Classify(gr, tok);
    if (p->addtoken(tok->id, tok, ilabel)) {
      return tok;
    }
  }
}

ExprParser::ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr) {
  this->parse_ctx = parse_ctx;
  this->gr = gr;
  this->push_parser = new parse::Parser(gr);
}

Tuple2<parse::PNode*, syntax_asdl::Token*> ExprParser::Parse(lexer::Lexer* lexer, int start_symbol) {
  syntax_asdl::Token* last_token;

  this->push_parser->setup(start_symbol);
  try {
    last_token = _PushOilTokens(this->parse_ctx, this->gr, this->push_parser, lexer);
  }
  catch (parse::ParseError* e) {
    throw new error::Parse(str174, e->tok);
  }
  return (Tuple2<parse::PNode*, syntax_asdl::Token*>(this->push_parser->rootnode, last_token));
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
using syntax_asdl::command__VarDecl;
using syntax_asdl::command__PlaceMutation;
using syntax_asdl::command__Func;
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
using parse::PNode;
Dict<Str*, Str*>* PERL_CLASSES = new Dict<Str*, Str*>({});
List<Str*>* POSIX_CLASSES = new List<Str*>({str175, str176, str177, str178, str179, str180, str181, str182, str183, str184, str185, str186});
Str* RANGE_POINT_TOO_LONG = str187;
int NT_OFFSET = 256;

bool ISNONTERMINAL(int x) {
  return x >= NT_OFFSET;
}

Transformer::Transformer(grammar::Grammar* gr) {
  this->number2symbol = gr->number2symbol;
}

syntax_asdl::expr_t* Transformer::_AssocBinary(List<parse::PNode*>* children) {
  int n;
  syntax_asdl::expr_t* left;
  parse::PNode* op;
  syntax_asdl::expr_t* right;

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
  return new expr::Binary(op->tok, left, right);
}

syntax_asdl::expr_t* Transformer::_Trailer(syntax_asdl::expr_t* base, parse::PNode* p_trailer) {
  List<parse::PNode*>* children;
  syntax_asdl::Token* op_tok;
  syntax_asdl::arg_list* arglist;
  parse::PNode* p;
  parse::PNode* p_args;
  List<syntax_asdl::expr_t*>* indices;
  int n;
  parse::PNode* a;
  syntax_asdl::Token* attr;

  children = p_trailer->children;
  op_tok = children->index(0)->tok;
  if (op_tok->id == Id::Op_LParen) {
    arglist = new arg_list();
    if (len(children) == 2) {
      return new expr::FuncCall(base, arglist);
    }
    p = children->index(1);
    this->_Arglist(p->children, arglist);
    return new expr::FuncCall(base, arglist);
  }
  if (op_tok->id == Id::Op_LBracket) {
    p_args = children->index(1);
    indices = new List<syntax_asdl::expr_t*>();
    n = len(p_args->children);
    for (int i = 0; i < n; i += 2) {
      a = p_args->children->index(i);
      indices->append(this->_Subscript(a->children));
    }
    return new subscript(base, indices);
  }
  if ((op_tok->id == Id::Expr_Dot || op_tok->id == Id::Expr_RArrow || op_tok->id == Id::Expr_DColon)) {
    attr = children->index(1)->tok;
    return new attribute(base, op_tok, attr, expr_context_e::Store);
  }
  throw new AssertionError();
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> Transformer::_DictPair(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;
  syntax_asdl::Token* tok0;
  int id_;

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
    key = new expr::Const(tok0);
    if (len(children) >= 3) {
      value = this->Expr(children->index(2));
    }
    else {
      value = new expr::Implicit();
    }
  }
  if (id_ == Id::Op_LBracket) {
    key = this->Expr(children->index(1));
    value = this->Expr(children->index(4));
    return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  return (Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
}

syntax_asdl::expr__Dict* Transformer::_Dict(parse::PNode* p_node) {
  List<syntax_asdl::expr_t*>* keys;
  List<syntax_asdl::expr_t*>* values;
  List<parse::PNode*>* children;
  int n;
  int i;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;

  if (!ISNONTERMINAL(p_node->typ)) {
    return new expr::Dict(new List<syntax_asdl::expr_t*>(), new List<syntax_asdl::expr_t*>());
  }
  keys = new List<syntax_asdl::expr_t*>();
  values = new List<syntax_asdl::expr_t*>();
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*> tup0 = this->_DictPair(children->index(i));
    key = tup0.at0();
    value = tup0.at1();
    keys->append(key);
    values->append(value);
    i += 2;
  }
  return new expr::Dict(keys, values);
}

syntax_asdl::expr_t* Transformer::_Tuple(List<parse::PNode*>* children) {
  int n;
  List<syntax_asdl::expr_t*>* elts;
  parse::PNode* p_node;

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  if (n == 2) {
    p_die(fmt39(), children->index(1)->tok);
  }
  elts = new List<syntax_asdl::expr_t*>();
  for (int i = 0; i < n; i += 2) {
    p_node = children->index(i);
    elts->append(this->Expr(p_node));
  }
  return new expr::Tuple(elts, expr_context_e::Store);
}

syntax_asdl::expr_t* Transformer::_TestlistComp(parse::PNode* p_node, int id0) {
  List<parse::PNode*>* children;
  int n;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  List<syntax_asdl::expr_t*>* elts;

  children = p_node->children;
  n = len(children);
  if (n > 1 and children->index(1)->typ == grammar_nt::comp_for) {
    elt = this->Expr(children->index(0));
    comp = this->_CompFor(children->index(1));
    if (id0 == Id::Op_LParen) {
      return new expr::GeneratorExp(elt, new List<syntax_asdl::comprehension*>({comp}));
    }
    if (id0 == Id::Op_LBracket) {
      return new expr::ListComp(elt, new List<syntax_asdl::comprehension*>({comp}));
    }
    throw new AssertionError();
  }
  if (id0 == Id::Op_LParen) {
    if (children->index(1)->tok->id == Id::Arith_Comma) {
      return this->_Tuple(children);
    }
    throw new NotImplementedError(str189);
  }
  if (id0 == Id::Op_LBracket) {
    elts = new List<syntax_asdl::expr_t*>();
    for (int i = 0; i < n; i += 2) {
      elts->append(this->Expr(children->index(i)));
    }
    return new expr::List(elts, expr_context_e::Store);
  }
  throw new AssertionError();
}

syntax_asdl::expr_t* Transformer::_Atom(List<parse::PNode*>* children) {
  syntax_asdl::Token* tok;
  int id_;
  int n;
  syntax_asdl::re_t* r;
  List<syntax_asdl::Token*>* flags;
  syntax_asdl::Token* trans_pref;

  tok = children->index(0)->tok;
  id_ = tok->id;
  n = len(children);
  if (id_ == Id::Op_LParen) {
    if (n == 2) {
      return new expr::Tuple(new List<syntax_asdl::expr_t*>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBracket) {
    if (n == 2) {
      return new expr::List(new List<syntax_asdl::expr_t*>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBrace) {
    return this->_Dict(children->index(1));
  }
  if (id_ == Id::Arith_Slash) {
    r = this->_Regex(children->index(1));
    flags = new List<syntax_asdl::Token*>();
    trans_pref = nullptr;
    return new expr::RegexLiteral(children->index(0)->tok, r, flags, trans_pref);
  }
  throw new NotImplementedError(Id_str(id_));
}

List<syntax_asdl::name_type*>* Transformer::_NameTypeList(parse::PNode* p_node) {
  List<syntax_asdl::name_type*>* results;
  int n;
  parse::PNode* p;
  List<parse::PNode*>* children;
  syntax_asdl::type_expr_t* typ;
  syntax_asdl::name_type* node;

  results = new List<syntax_asdl::name_type*>();
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
    node = new name_type(children->index(0)->tok, typ);
    results->append(node);
  }
  return results;
}

syntax_asdl::comprehension* Transformer::_CompFor(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::expr_t* cond;

  children = p_node->children;
  lhs = this->_NameTypeList(children->index(1));
  iterable = this->Expr(children->index(3));
  if (len(children) >= 6) {
    cond = this->Expr(children->index(5));
  }
  else {
    cond = nullptr;
  }
  return new comprehension(lhs, iterable, cond);
}

syntax_asdl::expr_t* Transformer::_CompareChain(List<parse::PNode*>* children) {
  List<syntax_asdl::speck*>* cmp_ops;
  List<syntax_asdl::expr_t*>* comparators;
  syntax_asdl::expr_t* left;
  int i;
  int n;
  List<parse::PNode*>* op_children;
  syntax_asdl::Token* tok1;
  syntax_asdl::speck* op;

  cmp_ops = new List<syntax_asdl::speck*>();
  comparators = new List<syntax_asdl::expr_t*>();
  left = this->Expr(children->index(0));
  i = 1;
  n = len(children);
  while (i < n) {
    op_children = children->index(i)->children;
    tok1 = op_children->index(0)->tok;
    if (len(op_children) == 2) {
      if (tok1->id == Id::Expr_Not) {
        op = new speck(Id::Node_NotIn, tok1->span_id);
      }
      else {
        if (tok1->id == Id::Expr_Is) {
          op = new speck(Id::Node_IsNot, tok1->span_id);
        }
        else {
          throw new AssertionError();
        }
      }
    }
    else {
      op = new speck(tok1->id, tok1->span_id);
    }
    cmp_ops->append(op);
    i += 1;
    comparators->append(this->Expr(children->index(i)));
    i += 1;
  }
  return new expr::Compare(left, cmp_ops, comparators);
}

syntax_asdl::expr_t* Transformer::_Subscript(List<parse::PNode*>* children) {
  int typ0;
  int n;
  syntax_asdl::expr_t* lower;
  syntax_asdl::expr_t* upper;

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
  return new expr::Slice(lower, upper);
}

syntax_asdl::expr_t* Transformer::Expr(parse::PNode* pnode) {
  int typ;
  syntax_asdl::Token* tok;
  List<parse::PNode*>* children;
  syntax_asdl::expr_t* test;
  syntax_asdl::expr_t* body;
  syntax_asdl::expr_t* orelse;
  int n;
  List<syntax_asdl::name_type*>* params;
  syntax_asdl::Token* op_tok;
  parse::PNode* op;
  parse::PNode* e;
  syntax_asdl::expr_t* node;
  int i;
  syntax_asdl::expr_t* factor;
  syntax_asdl::Token* left_tok;
  List<syntax_asdl::expr_t*>* items;
  Str* nt_name;
  int id_;

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
      return new expr::IfExp(test, body, orelse);
    }
    if (typ == grammar_nt::lambdef) {
      n = len(children);
      if (n == 4) {
        params = this->_NameTypeList(children->index(1));
      }
      else {
        params = new List<syntax_asdl::name_type*>();
      }
      body = this->Expr(children->index(n - 1));
      return new expr::Lambda(params, body);
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
      return new expr::Unary(op_tok, this->Expr(children->index(1)));
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
            return new expr::Range(this->Expr(children->index(0)), this->Expr(children->index(2)));
          }
          throw new AssertionError();
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
              return new expr::Unary(op->tok, this->Expr(e));
            }
            else {
              if (typ == grammar_nt::power) {
                node = this->Expr(children->index(0));
                if (len(children) == 1) {
                  return node;
                }
                n = len(children);
                i = 1;
                while (i < n and ISNONTERMINAL(children->index(i)->typ)) {
                  node = this->_Trailer(node, children->index(i));
                  i += 1;
                }
                if (i != n) {
                  op_tok = children->index(i)->tok;
                  factor = this->Expr(children->index(i + 1));
                  node = new expr::Binary(op_tok, node, factor);
                }
                return node;
              }
              else {
                if (typ == grammar_nt::array_literal) {
                  left_tok = children->index(0)->tok;
                  items = new List<syntax_asdl::expr_t*>();
                  for (ListIter<parse::PNode*> it(children->slice(1, -1)); !it.Done(); it.Next()) {
                    parse::PNode* p = it.Value();
                    items->append(this->_ArrayItem(p));
                  }
                  return new expr::ArrayLiteral(left_tok, items);
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
                                return new simple_var_sub(children->index(0)->tok);
                              }
                              else {
                                nt_name = this->number2symbol->index(typ);
                                throw new AssertionError();
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
  else {
    id_ = tok->id;
    if (id_ == Id::Expr_Name) {
      return new expr::Var(tok);
    }
    if ((id_ == Id::Expr_DecInt || id_ == Id::Expr_BinInt || id_ == Id::Expr_OctInt || id_ == Id::Expr_HexInt || id_ == Id::Expr_Float)) {
      return new expr::Const(tok);
    }
    if ((id_ == Id::Expr_Null || id_ == Id::Expr_True || id_ == Id::Expr_False)) {
      return new expr::Const(tok);
    }
    throw new NotImplementedError(Id_str(id_));
  }
}

syntax_asdl::expr_t* Transformer::_ArrayItem(parse::PNode* p_node) {
  parse::PNode* child0;
  int typ0;

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

List<syntax_asdl::place_expr_t*>* Transformer::_PlaceList(parse::PNode* p_node) {
  List<syntax_asdl::place_expr_t*>* places;
  int n;
  parse::PNode* p;
  syntax_asdl::expr_t* e;
  syntax_asdl::expr_t* UP_e;
  int tag;

  places = new List<syntax_asdl::place_expr_t*>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    e = this->Expr(p);
    UP_e = e;
    tag = e->tag_();
    if (tag == expr_e::Var) {
      expr__Var* e = static_cast<expr__Var*>(UP_e);
      places->append(new place_expr::Var(e->name));
    }
    else {
      if ((tag == place_expr_e::Var || tag == place_expr_e::Subscript || tag == place_expr_e::Attribute)) {
        places->append(reinterpret_cast<place_expr_t*>(UP_e));
      }
      else {
        p_die(fmt40(), p->tok ? p->tok : nullptr);
      }
    }
  }
  return places;
}

syntax_asdl::command__VarDecl* Transformer::MakeVarDecl(parse::PNode* p_node) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* rhs;

  typ = p_node->typ;
  children = p_node->children;
  lhs = this->_NameTypeList(children->index(0));
  rhs = this->Expr(children->index(2));
  return new command::VarDecl(nullptr, lhs, rhs);
}

syntax_asdl::command__PlaceMutation* Transformer::MakePlaceMutation(parse::PNode* p_node) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::place_expr_t*>* place_list;
  syntax_asdl::Token* op_tok;
  syntax_asdl::expr_t* rhs;

  typ = p_node->typ;
  children = p_node->children;
  place_list = this->_PlaceList(children->index(0));
  op_tok = children->index(1)->tok;
  rhs = this->Expr(children->index(2));
  return new command::PlaceMutation(nullptr, place_list, op_tok, rhs);
}

Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*> Transformer::OilForExpr(parse::PNode* pnode) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  Str* nt_name;

  typ = pnode->typ;
  children = pnode->children;
  if (typ == grammar_nt::oil_for) {
    lhs = this->_NameTypeList(children->index(1));
    iterable = this->Expr(children->index(3));
    return (Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>(lhs, iterable));
  }
  nt_name = this->number2symbol->index(typ);
  throw new AssertionError();
}

void Transformer::_Argument(parse::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist) {
  List<syntax_asdl::expr_t*>* positional;
  List<syntax_asdl::named_arg*>* named;
  List<parse::PNode*>* children;
  int n;
  syntax_asdl::expr_t* arg;
  syntax_asdl::expr_t* spread_expr;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  syntax_asdl::named_arg* n1;

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
        named->append(new named_arg(nullptr, spread_expr));
      }
      else {
        positional->append(new expr::Spread(spread_expr, expr_context_e::Store));
      }
      return ;
    }
    if (children->index(1)->typ == grammar_nt::comp_for) {
      elt = this->Expr(children->index(0));
      comp = this->_CompFor(children->index(1));
      arg = new expr::GeneratorExp(elt, new List<syntax_asdl::comprehension*>({comp}));
      positional->append(arg);
      return ;
    }
    throw new AssertionError();
  }
  if (n == 3) {
    n1 = new named_arg(children->index(0)->tok, this->Expr(children->index(2)));
    named->append(n1);
    return ;
  }
  throw new NotImplementedError();
}

void Transformer::_Arglist(List<parse::PNode*>* children, syntax_asdl::arg_list* arglist) {
  bool do_named;

  do_named = false;
  for (ListIter<parse::PNode*> it(children); !it.Done(); it.Next()) {
    parse::PNode* p_child = it.Value();
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

void Transformer::ArgList(parse::PNode* pnode, syntax_asdl::arg_list* arglist) {
  parse::PNode* p;

  if (len(pnode->children) == 2) {
    return ;
  }
  p = pnode->children->index(1);
  this->_Arglist(p->children, arglist);
}

syntax_asdl::type_expr_t* Transformer::_TypeExpr(parse::PNode* pnode) {
  return nullptr;
}

List<syntax_asdl::type_expr_t*>* Transformer::_TypeExprList(parse::PNode* pnode) {
  return nullptr;
}

Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*> Transformer::_ProcParam(parse::PNode* pnode) {
  List<parse::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::expr_t* default_val;

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  if (tok0->id == Id::Expr_Name) {
    default_val = nullptr;
    if (n > 1 and children->index(1)->tok->id == Id::Arith_Equal) {
      default_val = this->Expr(children->index(2));
    }
    return (Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*>(tok0, default_val));
  }
  throw new AssertionError();
}

syntax_asdl::proc_sig_t* Transformer::_ProcParams(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int n;
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* rest;
  syntax_asdl::Token* block;
  int i;
  parse::PNode* p;
  syntax_asdl::Token* name;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;

  children = p_node->children;
  n = len(children);
  params = new List<syntax_asdl::param*>();
  rest = nullptr;
  block = nullptr;
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*> tup1 = this->_ProcParam(p);
      name = tup1.at0();
      default_val = tup1.at1();
      type_ = nullptr;
      params->append(new param(name, type_, default_val));
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
          throw new AssertionError();
        }
      }
    }
    i += 2;
  }
  return new proc_sig::Closed(params, rest, block);
}

syntax_asdl::param* Transformer::_FuncParam(parse::PNode* pnode) {
  List<parse::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  if (tok0->id == Id::Expr_Name) {
    default_val = nullptr;
    type_ = nullptr;
    if (n > 1 and children->index(1)->tok->id == Id::Arith_Equal) {
      default_val = this->Expr(children->index(2));
    }
    else {
      if (n > 2 and children->index(2)->tok->id == Id::Arith_Equal) {
        default_val = this->Expr(children->index(3));
      }
    }
    return new param(tok0, type_, default_val);
  }
  throw new AssertionError();
}

Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> Transformer::_FuncParams(parse::PNode* p_node) {
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* splat;
  List<parse::PNode*>* children;
  int n;
  int i;
  parse::PNode* p;

  params = new List<syntax_asdl::param*>();
  splat = nullptr;
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      params->append(this->_FuncParam(p));
    }
    else {
      if (p->tok->id == Id::Expr_Ellipsis) {
        splat = children->index(i + 1)->tok;
      }
    }
    i += 1;
  }
  return (Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>(params, splat));
}

syntax_asdl::proc_sig_t* Transformer::Proc(parse::PNode* pnode) {
  int typ;
  List<parse::PNode*>* children;
  int n;
  syntax_asdl::proc_sig_t* sig;

  typ = pnode->typ;
  children = pnode->children;
  n = len(children);
  if (n == 1) {
    sig = new proc_sig::Open();
  }
  else {
    if (n == 3) {
      sig = new proc_sig::Closed();
    }
    else {
      if (n == 4) {
        sig = this->_ProcParams(children->index(1));
      }
      else {
        throw new AssertionError();
      }
    }
  }
  return sig;
}

void Transformer::Func(parse::PNode* pnode, syntax_asdl::command__Func* out) {
  List<parse::PNode*>* children;
  int pos;
  int typ2;
  int id_;

  children = pnode->children;
  out->name = children->index(0)->tok;
  pos = 2;
  typ2 = children->index(pos)->typ;
  if (ISNONTERMINAL(typ2)) {
    Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> tup2 = this->_FuncParams(children->index(2));
    out->pos_params = tup2.at0();
    out->pos_splat = tup2.at1();
    pos += 1;
  }
  id_ = children->index(pos)->tok->id;
  if (id_ == Id::Op_RParen) {
    pos += 1;
  }
  else {
    if (id_ == Id::Op_Semi) {
      Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*> tup3 = this->_FuncParams(children->index(pos + 1));
      out->named_params = tup3.at0();
      out->named_splat = tup3.at1();
      pos += 3;
    }
  }
  if (ISNONTERMINAL(children->index(pos)->typ)) {
    out->return_types = this->_TypeExprList(children->index(pos));
  }
}

Str* Transformer::_RangeChar(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  List<syntax_asdl::Token*>* tokens;
  Str* s;
  syntax_asdl::Token* tok;

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
      throw new AssertionError();
    }
    throw new NotImplementedError();
  }
  else {
    tok = p_node->tok;
    if ((tok->id == Id::Expr_Name || tok->id == Id::Expr_DecInt)) {
      if (len(tok->val) != 1) {
        p_die(dynamic_fmt_dummy(), tok);
      }
      return tok->val->index(0);
    }
    throw new NotImplementedError();
  }
}

syntax_asdl::class_literal_term_t* Transformer::_NonRangeChars(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  parse::PNode* p_child;

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
      return new simple_var_sub(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return new class_literal_term::CharLiteral(children->index(0)->tok);
    }
    throw new NotImplementedError();
  }
  else {
    return this->_NameInClass(nullptr, children->index(0)->tok);
  }
}

syntax_asdl::class_literal_term_t* Transformer::_ClassLiteralTerm(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  parse::PNode* p_child;
  int n;
  Str* start;
  Str* end;
  Str* nt_name;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::simple_var_sub) {
      return new simple_var_sub(p_child->children->index(0)->tok);
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    n = len(children);
    if (n == 1 and typ == grammar_nt::range_char) {
      return this->_NonRangeChars(children->index(0));
    }
    if (n == 3 and children->index(1)->tok->id == Id::Arith_Minus) {
      start = this->_RangeChar(children->index(0));
      end = this->_RangeChar(children->index(2));
      return new class_literal_term::Range(start, end);
    }
  }
  else {
    if (children->index(0)->tok->id == Id::Arith_Tilde) {
      return this->_NameInClass(children->index(0)->tok, children->index(1)->tok);
    }
    throw new AssertionError();
  }
  nt_name = this->number2symbol->index(typ);
  throw new NotImplementedError(nt_name);
}

List<syntax_asdl::class_literal_term_t*>* Transformer::_ClassLiteral(parse::PNode* p_node) {
  List<syntax_asdl::class_literal_term_t*>* terms;

  terms = new List<syntax_asdl::class_literal_term_t*>();
  for (ListIter<parse::PNode*> it(p_node->children->slice(1, -1)); !it.Done(); it.Next()) {
    parse::PNode* c = it.Value();
    terms->append(this->_ClassLiteralTerm(c));
  }
  return terms;
}

syntax_asdl::re_t* Transformer::_NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;

  if (negated_tok) {
    negated_speck = new speck(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (val == str194) {
    if (negated_tok) {
      p_die(fmt41(), tok);
    }
    return tok;
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return new posix_class(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return new perl_class(negated_speck, perl);
  }
  if (val->index(0)->isupper()) {
    return new re::Splice(tok);
  }
  p_die(fmt42(val), tok);
}

syntax_asdl::class_literal_term_t* Transformer::_NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;

  if (negated_tok) {
    negated_speck = new speck(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (len(val) == 1) {
    if (negated_tok) {
      p_die(fmt43(), tok);
    }
    return new class_literal_term::CharLiteral(tok);
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return new posix_class(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return new perl_class(negated_speck, perl);
  }
  p_die(fmt44(val), tok);
}

syntax_asdl::re_t* Transformer::_ReAtom(parse::PNode* p_atom) {
  List<parse::PNode*>* children;
  int typ;
  parse::PNode* p_child;
  syntax_asdl::Token* tok;
  syntax_asdl::re_t* regex;
  int n;
  syntax_asdl::Token* name_tok;

  children = p_atom->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = p_atom->children->index(0);
    if (typ == grammar_nt::class_literal) {
      return new re::ClassLiteral(false, this->_ClassLiteral(p_child));
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
      return new simple_var_sub(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return children->index(0)->tok;
    }
    throw new NotImplementedError(typ);
  }
  else {
    tok = children->index(0)->tok;
    if ((tok->id == Id::Expr_Dot || tok->id == Id::Arith_Caret || tok->id == Id::Expr_Dollar)) {
      return new speck(tok->id, tok->span_id);
    }
    if (tok->id == Id::Expr_Name) {
      return this->_NameInRegex(nullptr, tok);
    }
    if (tok->id == Id::Expr_Symbol) {
      if ((tok->val == str199 || tok->val == str200 || tok->val == str201)) {
        return tok;
      }
      p_die(fmt45(tok->val), tok);
    }
    if (tok->id == Id::Expr_At) {
      return new re::Splice(children->index(1)->tok);
    }
    if (tok->id == Id::Arith_Tilde) {
      typ = children->index(1)->typ;
      if (ISNONTERMINAL(typ)) {
        return new re::ClassLiteral(true, this->_ClassLiteral(children->index(1)));
      }
      else {
        return this->_NameInRegex(tok, children->index(1)->tok);
      }
    }
    if (tok->id == Id::Op_LParen) {
      return new re::Group(this->_Regex(children->index(1)));
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
      return new re::Capture(regex, name_tok);
    }
    if (tok->id == Id::Arith_Colon) {
      throw new NotImplementedError(Id_str(tok->id));
    }
    throw new NotImplementedError(Id_str(tok->id));
  }
}

syntax_asdl::re_repeat_t* Transformer::_RepeatOp(parse::PNode* p_repeat) {
  syntax_asdl::Token* tok;
  int id_;
  parse::PNode* p_range;
  List<parse::PNode*>* children;
  int n;

  tok = p_repeat->children->index(0)->tok;
  id_ = tok->id;
  if ((id_ == Id::Arith_Plus || id_ == Id::Arith_Star || id_ == Id::Arith_QMark)) {
    return new re_repeat::Op(tok);
  }
  if (id_ == Id::Op_LBrace) {
    p_range = p_repeat->children->index(1);
    children = p_range->children;
    n = len(children);
    if (n == 1) {
      return new re_repeat::Num(children->index(0)->tok);
    }
    if (n == 2) {
      if (children->index(0)->tok->id == Id::Expr_DecInt) {
        return new re_repeat::Range(children->index(0)->tok, nullptr);
      }
      else {
        return new re_repeat::Range(nullptr, children->index(1)->tok);
      }
    }
    if (n == 3) {
      return new re_repeat::Range(children->index(0)->tok, children->index(2)->tok);
    }
    throw new AssertionError();
  }
  throw new AssertionError();
}

syntax_asdl::re_t* Transformer::_Regex(parse::PNode* p_node) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::re_t*>* alts;
  int n;
  parse::PNode* c;
  int i;
  List<syntax_asdl::re_t*>* seq;
  syntax_asdl::re_t* r;
  syntax_asdl::re_repeat_t* repeat_op;
  Str* nt_name;

  typ = p_node->typ;
  children = p_node->children;
  if (typ == grammar_nt::regex) {
    if (len(children) == 1) {
      return this->_Regex(children->index(0));
    }
    alts = new List<syntax_asdl::re_t*>();
    n = len(p_node->children);
    for (int i = 0; i < n; i += 2) {
      c = p_node->children->index(i);
      alts->append(this->_Regex(c));
    }
    return new re::Alt(alts);
  }
  if (typ == grammar_nt::re_alt) {
    i = 0;
    n = len(children);
    seq = new List<syntax_asdl::re_t*>();
    while (i < n) {
      r = this->_ReAtom(children->index(i));
      i += 1;
      if (i < n and children->index(i)->typ == grammar_nt::repeat_op) {
        repeat_op = this->_RepeatOp(children->index(i));
        r = new re::Repeat(r, repeat_op);
        i += 1;
      }
      seq->append(r);
    }
    if (len(seq) == 1) {
      return seq->index(0);
    }
    else {
      return new re::Seq(seq);
    }
  }
  nt_name = this->number2symbol->index(typ);
  throw new NotImplementedError(nt_name);
}

}  // define namespace expr_to_ast

namespace arith_parse {  // define
namespace Id = id_kind_asdl::Id;
namespace arith_expr = syntax_asdl::arith_expr;
using syntax_asdl::arith_expr_t;
using syntax_asdl::word_t;

syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;
  syntax_asdl::sh_lhs_expr_t* child;

  right = p->ParseUntil(bp);
  child = tdop::ToLValue(right);
  if (child == nullptr) {
    p_die(fmt46(), w);
  }
  return new arith_expr::UnaryAssign(word_::ArithId(w), child);
}

syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return new arith_expr::Unary(Id::Node_UnaryPlus, right);
}

syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return new arith_expr::Unary(Id::Node_UnaryMinus, right);
}

syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  int op_id;
  syntax_asdl::sh_lhs_expr_t* child;

  if (word_::ArithId(w) == Id::Arith_DPlus) {
    op_id = Id::Node_PostDPlus;
  }
  else {
    if (word_::ArithId(w) == Id::Arith_DMinus) {
      op_id = Id::Node_PostDMinus;
    }
    else {
      throw new AssertionError();
    }
  }
  child = tdop::ToLValue(left);
  return new arith_expr::UnaryAssign(op_id, child);
}

syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp) {
  syntax_asdl::arith_expr_t* index;

  if (!tdop::IsIndexable(left)) {
    p_die(fmt47(), w);
  }
  index = p->ParseUntil(0);
  p->Eat(Id::Arith_RBracket);
  return new arith_expr::Binary(word_::ArithId(w), left, index);
}

syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp) {
  syntax_asdl::arith_expr_t* true_expr;
  syntax_asdl::arith_expr_t* false_expr;

  true_expr = p->ParseUntil(bp);
  p->Eat(Id::Arith_Colon);
  false_expr = p->ParseUntil(bp);
  return new arith_expr::TernaryOp(left, true_expr, false_expr);
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

BoolParser::BoolParser(word_parse::WordEmitter* w_parser) {
  this->w_parser = w_parser;
  this->words = new List<syntax_asdl::word_t*>();
  this->cur_word = nullptr;
  this->op_id = Id::Undefined_Tok;
  this->b_kind = Kind::Undefined;
}

void BoolParser::_NextOne(types_asdl::lex_mode_t lex_mode) {
  int n;
  syntax_asdl::word_t* w;

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
  this->op_id = word_::BoolId(this->cur_word);
  this->b_kind = consts::GetKind(this->op_id);
}

void BoolParser::_Next() {
  _Next(lex_mode_e::DBracket);
}

void BoolParser::_Next(types_asdl::lex_mode_t lex_mode) {
  while (true) {
    this->_NextOne(lex_mode);
    if (this->op_id != Id::Op_Newline) {
      break;
    }
  }
}

syntax_asdl::word_t* BoolParser::_LookAhead() {
  int n;
  syntax_asdl::word_t* w;

  n = len(this->words);
  if (n != 1) {
    throw new AssertionError();
  }
  w = this->w_parser->ReadWord(lex_mode_e::DBracket);
  this->words->append(w);
  return w;
}

syntax_asdl::bool_expr_t* BoolParser::Parse() {
  syntax_asdl::bool_expr_t* node;

  this->_Next();
  node = this->ParseExpr();
  if (this->op_id != Id::Lit_DRightBracket) {
    p_die(fmt48(), this->cur_word);
  }
  return node;
}

bool BoolParser::_TestAtEnd() {
  return this->op_id == Id::Lit_DRightBracket;
}

syntax_asdl::bool_expr_t* BoolParser::ParseForBuiltin() {
  syntax_asdl::bool_expr_t* node;

  this->_Next();
  node = this->ParseExpr();
  if (this->op_id != Id::Eof_Real) {
    p_die(fmt49(word_::Pretty(this->cur_word)), this->cur_word);
  }
  return node;
}

syntax_asdl::bool_expr_t* BoolParser::ParseExpr() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;

  left = this->ParseTerm();
  if ((this->op_id == Id::Op_DPipe || this->op_id == Id::BoolUnary_o)) {
    this->_Next();
    right = this->ParseExpr();
    return new bool_expr::LogicalOr(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseTerm() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;

  left = this->ParseNegatedFactor();
  if ((this->op_id == Id::Op_DAmp || this->op_id == Id::BoolUnary_a)) {
    this->_Next();
    right = this->ParseTerm();
    return new bool_expr::LogicalAnd(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseNegatedFactor() {
  syntax_asdl::bool_expr_t* child;

  if (this->op_id == Id::KW_Bang) {
    this->_Next();
    child = this->ParseFactor();
    return new bool_expr::LogicalNot(child);
  }
  else {
    return this->ParseFactor();
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseFactor() {
  int op;
  syntax_asdl::word_t* w;
  int tag;
  syntax_asdl::bool_expr_t* node;
  syntax_asdl::word_t* t2;
  int t2_op_id;
  id_kind_asdl::Kind_t t2_b_kind;
  syntax_asdl::word_t* left;
  bool is_regex;
  syntax_asdl::word_t* right;

  if (this->b_kind == Kind::BoolUnary) {
    op = this->op_id;
    this->_Next();
    w = this->cur_word;
    tag = w->tag_();
    if (tag != word_e::Compound and tag != word_e::String) {
      p_die(fmt50(), w);
    }
    this->_Next();
    node = new bool_expr::Unary(op, w);
    return node;
  }
  if (this->b_kind == Kind::Word) {
    t2 = this->_LookAhead();
    t2_op_id = word_::BoolId(t2);
    t2_b_kind = consts::GetKind(t2_op_id);
    if (t2_b_kind == Kind::BoolBinary or (t2_op_id == Id::Op_Less || t2_op_id == Id::Op_Great)) {
      left = this->cur_word;
      this->_Next();
      op = this->op_id;
      is_regex = t2_op_id == Id::BoolBinary_EqualTilde;
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
      return new bool_expr::Binary(op, left, right);
    }
    else {
      w = this->cur_word;
      this->_Next();
      return new bool_expr::WordTest(w);
    }
  }
  if (this->op_id == Id::Op_LParen) {
    this->_Next();
    node = this->ParseExpr();
    if (this->op_id != Id::Op_RParen) {
      p_die(fmt51(word_::Pretty(this->cur_word)), this->cur_word);
    }
    this->_Next();
    return node;
  }
  p_die(fmt52(), this->cur_word);
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

_NotARange::_NotARange(Str* s) {
  ;  // pass
}

_RangeParser::_RangeParser(match::SimpleLexer* lexer, int span_id) {
  this->lexer = lexer;
  this->span_id = span_id;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str210;
}

void _RangeParser::_Next() {
  Tuple2<int, Str*> tup0 = this->lexer->Next();
  this->token_type = tup0.at0();
  this->token_val = tup0.at1();
}

Str* _RangeParser::_Eat(int token_type) {
  Str* val;

  if (this->token_type != token_type) {
    throw new _NotARange(fmt53(token_type, this->token_type));
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
    p_die(fmt54(), this->span_id);
  }
  return step;
}

syntax_asdl::word_part__BracedRange* _RangeParser::_ParseRange(int range_kind) {
  Str* start;
  Str* end;
  int step;
  syntax_asdl::word_part__BracedRange* part;

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
  part = new word_part::BracedRange(range_kind, start, end, step);
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
        p_die(fmt55(part->step), this->span_id);
      }
    }
    else {
      if (start > end) {
        if (part->step == NO_STEP) {
          part->step = -1;
        }
        if (part->step >= 0) {
          p_die(fmt56(part->step), this->span_id);
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
          p_die(fmt57(part->step), this->span_id);
        }
      }
      else {
        if (start_num > end_num) {
          if (part->step == NO_STEP) {
            part->step = -1;
          }
          if (part->step >= 0) {
            p_die(fmt58(part->step), this->span_id);
          }
        }
        else {
          part->step = 1;
        }
      }
      upper1 = part->start->isupper();
      upper2 = part->end->isupper();
      if (upper1 != upper2) {
        p_die(fmt59(), this->span_id);
      }
    }
    else {
      throw new _NotARange(str218);
    }
  }
  this->_Eat(Id::Eol_Tok);
  return part;
}

syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok) {
  match::SimpleLexer* lexer;
  braces::_RangeParser* p;
  syntax_asdl::word_part__BracedRange* part;

  lexer = match::BraceRangeLexer(tok->val);
  p = new _RangeParser(lexer, tok->span_id);
  try {
    part = p->Parse();
  }
  catch (_NotARange* e) {
    return nullptr;
  }
  part->spids->append(tok->span_id);
  return part;
}

_StackFrame::_StackFrame(List<syntax_asdl::word_part_t*>* cur_parts) {
  this->cur_parts = cur_parts;
  this->alt_part = new word_part::BracedTuple();
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

  cur_parts = new List<syntax_asdl::word_part_t*>();
  stack = new List<braces::_StackFrame*>();
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
        new_frame = new _StackFrame(cur_parts);
        stack->append(new_frame);
        cur_parts = new List<syntax_asdl::word_part_t*>();
        append = false;
        found = true;
      }
      else {
        if (id_ == Id::Lit_Comma) {
          if (len(stack)) {
            stack->index(-1)->saw_comma = true;
            stack->index(-1)->alt_part->words->append(new compound_word(cur_parts));
            cur_parts = new List<syntax_asdl::word_part_t*>();
            append = false;
          }
        }
        else {
          if (id_ == Id::Lit_RBrace) {
            if (len(stack) == 0) {
              return nullptr;
            }
            range_part = nullptr;
            if (!stack->index(-1)->saw_comma and len(cur_parts) == 1) {
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
              stack->index(-1)->alt_part->words->append(new compound_word(cur_parts));
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
    return new word::BracedTree(cur_parts);
  }
  else {
    return nullptr;
  }
}

List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::word__BracedTree* brace_tree;

  out = new List<syntax_asdl::word_t*>();
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
    if (str_equals(c, str219)) {
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

  s = str(i);
  n = len(s);
  if (n < width) {
    pad = str_repeat(str220, width - n);
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

  if (part->kind == Id::Range_Int) {
    nums = new List<Str*>();
    z1 = _LeadingZeros(part->start);
    z2 = _LeadingZeros(part->end);
    if (z1 == 0 and z2 == 0) {
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
    chars = new List<Str*>();
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

  out = new List<List<syntax_asdl::word_part_t*>*>();
  prefix = parts->slice(0, first_alt_index);
  expand_part = parts->index(first_alt_index);
  UP_part = expand_part;
  switch (expand_part->tag_()) {
    case word_part_e::BracedTuple: {
      word_part__BracedTuple* expand_part = static_cast<word_part__BracedTuple*>(UP_part);
      expanded_alts = new List<List<syntax_asdl::word_part_t*>*>();
      for (ListIter<syntax_asdl::compound_word*> it(expand_part->words); !it.Done(); it.Next()) {
        syntax_asdl::compound_word* w = it.Value();
        expanded_alts->extend(_BraceExpand(w->parts));
      }
      for (ListIter<List<syntax_asdl::word_part_t*>*> it(expanded_alts); !it.Done(); it.Next()) {
        List<syntax_asdl::word_part_t*>* alt_parts = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts = new List<syntax_asdl::word_part_t*>();
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
          out_parts_ = new List<syntax_asdl::word_part_t*>();
          out_parts_->extend(prefix);
          t = new Token(Id::Lit_Chars, expand_part->spids->index(0), s);
          out_parts_->append(t);
          out_parts_->extend(suffix);
          out->append(out_parts_);
        }
      }
    }
      break;
    default: {
      throw new AssertionError();
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
    return new List<List<syntax_asdl::word_part_t*>*>({parts});
  }
  else {
    if (num_alts == 1) {
      suffix = parts->slice(first_alt_index + 1);
      return _ExpandPart(parts, first_alt_index, new List<List<syntax_asdl::word_part_t*>*>({suffix}));
    }
    else {
      tail_parts = parts->slice(first_alt_index + 1);
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

  out = new List<syntax_asdl::compound_word*>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    UP_w = w;
    switch (w->tag_()) {
      case word_e::BracedTree: {
        word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
        parts_list = _BraceExpand(w->parts);
        tmp = new List<syntax_asdl::compound_word*>();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(parts_list); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* p = it.Value();
          tmp->append(new compound_word(p));
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
        throw new AssertionError();
      }
    }
  }
  return out;
}

}  // define namespace braces

namespace cmd_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__Simple;
using syntax_asdl::command__BraceGroup;
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
using syntax_asdl::command__Func;
using syntax_asdl::command__Proc;
using syntax_asdl::case_arm;
namespace sh_lhs_expr = syntax_asdl::sh_lhs_expr;
using syntax_asdl::sh_lhs_expr_t;
namespace redir = syntax_asdl::redir;
using syntax_asdl::redir_t;
using syntax_asdl::redir__HereDoc;
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

  compound_word* w = static_cast<compound_word*>(UP_w);
  part = w->parts->index(0);
  return static_cast<Token*>(part);
}

Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir__HereDoc* h, Str* delimiter) {
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  bool strip_leading_tabs;
  int line_id;
  Str* line;
  int unused_offset;
  int start_offset;
  int n;
  int i;

  here_lines = new List<Tuple3<int, Str*, int>*>();
  last_line = nullptr;
  strip_leading_tabs = h->op->id == Id::Redir_DLessDash;
  while (true) {
    Tuple3<int, Str*, int> tup0 = line_reader->GetLine();
    line_id = tup0.at0();
    line = tup0.at1();
    unused_offset = tup0.at2();
    if (!line) {
      p_die(fmt60(), h->op);
    }
    start_offset = 0;
    if (strip_leading_tabs) {
      n = len(line);
      i = 0;
      while (i < n) {
        if (!(str_equals(line->index(i), str222))) {
          break;
        }
        i += 1;
      }
      start_offset = i;
    }
    if (str_equals(line->slice(start_offset)->rstrip(), delimiter)) {
      last_line = (new Tuple3<int, Str*, int>(line_id, line, start_offset));
      break;
    }
    here_lines->append((new Tuple3<int, Str*, int>(line_id, line, start_offset)));
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

  tokens = new List<syntax_asdl::Token*>();
  for (ListIter<Tuple3<int, Str*, int>*> it(here_lines); !it.Done(); it.Next()) {
    Tuple3<int, Str*, int>* tup1 = it.Value();
    line_id = tup1->at0();
    line = tup1->at1();
    start_offset = tup1->at2();
    span_id = arena->AddLineSpan(line_id, start_offset, len(line));
    t = new Token(Id::Lit_Chars, span_id, line->slice(start_offset));
    tokens->append(t);
  }
  parts = new List<syntax_asdl::word_part_t*>();
  for (ListIter<syntax_asdl::Token*> it(tokens); !it.Done(); it.Next()) {
    syntax_asdl::Token* t = it.Value();
    parts->append(static_cast<word_part_t*>(t));
  }
  return parts;
}

void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir__HereDoc* h, reader::_Reader* line_reader, alloc::Arena* arena) {
  bool ok;
  Str* delimiter;
  bool delim_quoted;
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  word_parse::WordParser* w_parser;
  int end_line_id;
  Str* end_line;
  int end_pos;

  Tuple3<bool, Str*, bool> tup2 = word_::StaticEval(h->here_begin);
  ok = tup2.at0();
  delimiter = tup2.at1();
  delim_quoted = tup2.at2();
  if (!ok) {
    p_die(fmt61(), h->here_begin);
  }
  Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*> tup3 = _ReadHereLines(line_reader, h, delimiter);
  here_lines = tup3.at0();
  last_line = tup3.at1();
  if (delim_quoted) {
    h->stdin_parts = _MakeLiteralHereLines(here_lines, arena);
  }
  else {
    line_reader = new reader::VirtualLineReader(here_lines, arena);
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
  syntax_asdl::arith_expr_t* index_node;
  syntax_asdl::sh_lhs_expr__IndexedName* tmp3;
  int n;
  syntax_asdl::word_t* val;
  syntax_asdl::compound_word* tilde;
  syntax_asdl::assign_pair* pair;

  Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup5 = preparsed;
  left_token = tup5->at0();
  close_token = tup5->at1();
  part_offset = tup5->at2();
  w = tup5->at3();
  if (left_token->id == Id::Lit_VarLike) {
    if (str_equals(left_token->val->index(-2), str224)) {
      var_name = left_token->val->slice(0, -2);
      op = assign_op_e::PlusEqual;
    }
    else {
      var_name = left_token->val->slice(0, -1);
      op = assign_op_e::Equal;
    }
    tmp = new sh_lhs_expr::Name(var_name);
    tmp->spids->append(left_token->span_id);
    lhs = static_cast<sh_lhs_expr_t*>(tmp);
  }
  else {
    if (left_token->id == Id::Lit_ArrayLhsOpen and parse_ctx->one_pass_parse) {
      var_name = left_token->val->slice(0, -1);
      if (str_equals(close_token->val->index(-2), str225)) {
        op = assign_op_e::PlusEqual;
      }
      else {
        op = assign_op_e::Equal;
      }
      left_spid = left_token->span_id + 1;
      right_spid = close_token->span_id;
      left_span = parse_ctx->arena->GetLineSpan(left_spid);
      right_span = parse_ctx->arena->GetLineSpan(right_spid);
      line = parse_ctx->arena->GetLine(left_span->line_id);
      index_str = line->slice(left_span->col, right_span->col);
      lhs = new sh_lhs_expr::UnparsedIndex(var_name, index_str);
    }
    else {
      if (left_token->id == Id::Lit_ArrayLhsOpen) {
        var_name = left_token->val->slice(0, -1);
        if (str_equals(close_token->val->index(-2), str226)) {
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
          code_str = line->slice(span1->col + span1->length, span2->col);
        }
        else {
          throw new NotImplementedError(fmt62(span1->line_id, span2->line_id));
        }
        a_parser = parse_ctx->MakeArithParser(code_str);
        arena->PushSource(new source::LValue(left_token->span_id, close_token->span_id));
        try {
          index_node = a_parser->Parse();
        }
        catch (std::exception) { }        tmp3 = new sh_lhs_expr::IndexedName(var_name, index_node);
        tmp3->spids->append(left_token->span_id);
        lhs = static_cast<sh_lhs_expr_t*>(tmp3);
      }
      else {
        throw new AssertionError();
      }
    }
  }
  n = len(w->parts);
  if (part_offset == n) {
    val = new word::Empty();
  }
  else {
    val = new compound_word(w->parts->slice(part_offset));
    tilde = word_::TildeDetect(val);
    if (tilde) {
      val = tilde;
    }
  }
  pair = new syntax_asdl::assign_pair(lhs, op, val, new List<int>({left_token->span_id}));
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

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup6 = it.Value();
    left_token = tup6->at0();
    part_offset = tup6->at2();
    w = tup6->at3();
    if (left_token->id != Id::Lit_VarLike) {
      p_die(fmt63(), left_token);
    }
    if (str_equals(left_token->val->index(-2), str229)) {
      p_die(fmt64(), left_token);
    }
    var_name = left_token->val->slice(0, -1);
    n = len(w->parts);
    if (part_offset == n) {
      val = new word::Empty();
    }
    else {
      val = new compound_word(w->parts->slice(part_offset));
    }
    pair = new syntax_asdl::env_pair(var_name, val, new List<int>({left_token->span_id}));
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

  preparsed_list = new List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>();
  suffix_words = new List<syntax_asdl::compound_word*>();
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
      preparsed_list->append((new Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>(left_token, close_token, part_offset, w)));
    }
    else {
      done_prefix = true;
      suffix_words->append(w);
    }
  }
  return (Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>(preparsed_list, suffix_words));
}

syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir_t*>* redirects, syntax_asdl::command_t* block) {
  syntax_asdl::compound_word* w;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__Simple* node;

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup8 = it.Value();
    w = tup8->at3();
    if (word_::HasArrayPart(w)) {
      p_die(fmt65(), w);
    }
  }
  words2 = braces::BraceDetectAll(suffix_words);
  words3 = word_::TildeDetectAll(words2);
  more_env = new List<syntax_asdl::env_pair*>();
  _AppendMoreEnv(preparsed_list, more_env);
  node = new command::Simple(words3, redirects, more_env, block);
  return node;
}
List<int>* SECONDARY_KEYWORDS = new List<int>({Id::KW_Do, Id::KW_Done, Id::KW_Then, Id::KW_Fi, Id::KW_Elif, Id::KW_Else, Id::KW_Esac});

CommandParser::CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader) {
  this->parse_ctx = parse_ctx;
  this->aliases = parse_ctx->aliases;
  this->w_parser = w_parser;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->arena = parse_ctx->arena;
  this->eof_id = Id::Eof_Real;
  this->aliases_in_flight = nullptr;
  this->allow_block = true;
  this->return_expr = false;
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
  this->pending_here_docs = new List<syntax_asdl::redir__HereDoc*>();
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

  if (this->next_lex_mode != lex_mode_e::Undefined) {
    w = this->w_parser->ReadWord(this->next_lex_mode);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Op_Newline) {
        for (ListIter<syntax_asdl::redir__HereDoc*> it(this->pending_here_docs); !it.Done(); it.Next()) {
          syntax_asdl::redir__HereDoc* h = it.Value();
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

  actual_id = word_::CommandId(this->cur_word);
  msg = fmt66(ui::PrettyId(c_id), ui::PrettyId(actual_id));
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

syntax_asdl::redir_t* CommandParser::ParseRedirect() {
  Str* first_char;
  int fd;
  syntax_asdl::redir__HereDoc* h;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::compound_word* tilde;

  this->_Peek();
  Token* op_tok = static_cast<Token*>(this->cur_word);
  first_char = op_tok->val->index(0);
  if (first_char->isdigit()) {
    fd = to_int(first_char);
  }
  else {
    fd = runtime::NO_SPID;
  }
  this->_Next();
  this->_Peek();
  if ((op_tok->id == Id::Redir_DLess || op_tok->id == Id::Redir_DLessDash)) {
    h = new redir::HereDoc();
    h->op = op_tok;
    h->fd = fd;
    h->here_begin = this->cur_word;
    this->pending_here_docs->append(h);
    this->_Next();
    return h;
  }
  if (this->c_kind != Kind::Word) {
    p_die(fmt67(), this->cur_word);
  }
  arg_word = this->cur_word;
  tilde = word_::TildeDetect(arg_word);
  if (tilde) {
    arg_word = tilde;
  }
  this->_Next();
  return new redir::Redir(op_tok, fd, arg_word);
}

List<syntax_asdl::redir_t*>* CommandParser::_ParseRedirectList() {
  List<syntax_asdl::redir_t*>* redirects;
  syntax_asdl::redir_t* node;

  redirects = new List<syntax_asdl::redir_t*>();
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

Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*> CommandParser::_ScanSimpleCommand() {
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::command__BraceGroup* block;
  syntax_asdl::redir_t* node;

  redirects = new List<syntax_asdl::redir_t*>();
  words = new List<syntax_asdl::compound_word*>();
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
        compound_word* w = static_cast<compound_word*>(this->cur_word);
        words->append(w);
      }
      else {
        break;
      }
    }
    this->_Next();
  }
  return (Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*>(redirects, words, block));
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
  parse_lib::_BaseTrail* trail;
  syntax_asdl::command__CommandList* node;

  aliases_in_flight = this->aliases_in_flight ? this->aliases_in_flight : new List<Tuple2<Str*, int>*>();
  first_word_str = nullptr;
  argv0_spid = word_::LeftMostSpanForWord(words->index(0));
  expanded = new List<Str*>();
  i = 0;
  n = len(words);
  while (i < n) {
    w = words->index(i);
    Tuple3<bool, Str*, bool> tup9 = word_::StaticEval(w);
    ok = tup9.at0();
    word_str = tup9.at1();
    quoted = tup9.at2();
    if (!ok or quoted) {
      break;
    }
    alias_exp = this->aliases->get(word_str);
    if (alias_exp == nullptr) {
      break;
    }
    if (list_contains(aliases_in_flight, (new Tuple2<Str*, int>(word_str, i)))) {
      break;
    }
    if (i == 0) {
      first_word_str = word_str;
    }
    aliases_in_flight->append((new Tuple2<Str*, int>(word_str, i)));
    expanded->append(alias_exp);
    i += 1;
    if (!alias_exp->endswith(str234)) {
      expanded->append(str235);
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
      piece = line->slice(span1->col, span2->col + span2->length);
      expanded->append(piece);
    }
    else {
      throw new NotImplementedError(fmt68(span1->line_id, span2->line_id));
    }
    expanded->append(str237);
    i += 1;
  }
  code_str = str238->join(expanded);
  line_reader = reader::StringLineReader(code_str, this->arena);
  cp = this->parse_ctx->MakeOshParser(line_reader);
  cp->Init_AliasesInFlight(aliases_in_flight);
  this->arena->PushSource(new source::Alias(first_word_str, argv0_spid));
  trail = this->parse_ctx->trail;
  trail->BeginAliasExpansion();
  try {
    try {
      node = cp->_ParseCommandTerm();
    }
    catch (error::Parse* e) {
      throw ;
    }
  }
  catch (std::exception) { }  return node;
}

syntax_asdl::command_t* CommandParser::ParseSimpleCommand() {
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::command__BraceGroup* block;
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

  Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*> tup10 = this->_ScanSimpleCommand();
  redirects = tup10.at0();
  words = tup10.at1();
  block = tup10.at2();
  block_spid = block ? block->spids->index(0) : runtime::NO_SPID;
  if (len(words) == 0) {
    if (block) {
      p_die(fmt69(), block_spid);
    }
    simple = new command::Simple();
    simple->redirects = redirects;
    return simple;
  }
  part0 = words->index(0)->parts->index(0);
  if (part0->tag_() == word_part_e::Literal) {
    Token* tok = static_cast<Token*>(part0);
    if (tok->id == Id::Lit_Equals) {
      p_die(fmt70(), tok);
    }
  }
  Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*> tup11 = _SplitSimpleCommandPrefix(words);
  preparsed_list = tup11.at0();
  suffix_words = tup11.at1();
  if (this->parse_opts->parse_equals() and len(preparsed_list)) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup12 = preparsed_list->index(0);
    left_token = tup12->at0();
    p_die(fmt71(), left_token);
  }
  this->parse_ctx->trail->SetLatestWords(suffix_words, redirects);
  if (len(suffix_words) == 0) {
    if (block) {
      p_die(fmt72(), block_spid);
    }
    pairs = new List<syntax_asdl::assign_pair*>();
    for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed = it.Value();
      pairs->append(_MakeAssignPair(this->parse_ctx, preparsed, this->arena));
    }
    assign = new command::ShAssignment(pairs, redirects);
    left_spid = word_::LeftMostSpanForWord(words->index(0));
    assign->spids->append(left_spid);
    return assign;
  }
  Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*> tup13 = word_::KeywordToken(suffix_words->index(0));
  kind = tup13.at0();
  kw_token = tup13.at1();
  if (kind == Kind::ControlFlow) {
    if (block) {
      p_die(fmt73(), block_spid);
    }
    if (len(redirects)) {
      p_die(fmt74(), kw_token);
    }
    if (len(preparsed_list)) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup14 = preparsed_list->index(0);
      left_token = tup14->at0();
      p_die(fmt75(), left_token);
    }
    if (len(suffix_words) == 1) {
      arg_word = nullptr;
    }
    else {
      if (len(suffix_words) == 2) {
        arg_word = suffix_words->index(1);
      }
      else {
        p_die(fmt76(kw_token->val), suffix_words->index(2));
      }
    }
    return new command::ControlFlow(kw_token, arg_word);
  }
  if (!block) {
    expanded_node = this->_MaybeExpandAliases(suffix_words);
    if (expanded_node) {
      more_env = new List<syntax_asdl::env_pair*>();
      _AppendMoreEnv(preparsed_list, more_env);
      exp = new command::ExpandedAlias(expanded_node, redirects, more_env);
      return exp;
    }
  }
  node = _MakeSimpleCommand(preparsed_list, suffix_words, redirects, block);
  return node;
}

syntax_asdl::command__BraceGroup* CommandParser::ParseBraceGroup() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::command__BraceGroup* node;

  left_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::Lit_LBrace);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::Lit_RBrace);
  node = new command::BraceGroup(c_list->children, nullptr);
  node->spids->append(left_spid);
  return node;
}

syntax_asdl::command__DoGroup* CommandParser::ParseDoGroup() {
  int do_spid;
  syntax_asdl::command__CommandList* c_list;
  int done_spid;
  syntax_asdl::command__DoGroup* node;

  this->_Eat(Id::KW_Do);
  do_spid = _KeywordSpid(this->cur_word);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::KW_Done);
  done_spid = _KeywordSpid(this->cur_word);
  node = new command::DoGroup(c_list->children, nullptr);
  node->spids->append(do_spid);
  node->spids->append(done_spid);
  return node;
}

Tuple2<List<syntax_asdl::compound_word*>*, int> CommandParser::ParseForWords() {
  List<syntax_asdl::compound_word*>* words;
  int semi_spid;

  words = new List<syntax_asdl::compound_word*>();
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
        if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace) {
          break;
        }
      }
    }
    if (this->cur_word->tag_() != word_e::Compound) {
      p_die(fmt77(), this->cur_word);
    }
    compound_word* w2 = static_cast<compound_word*>(this->cur_word);
    words->append(w2);
    this->_Next();
  }
  return (Tuple2<List<syntax_asdl::compound_word*>*, int>(words, semi_spid));
}

syntax_asdl::command__ForExpr* CommandParser::_ParseForExprLoop() {
  syntax_asdl::command__ForExpr* node;

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
          p_die(fmt78(), this->cur_word);
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

  node = new command::ForEach();
  node->do_arg_iter = false;
  node->spids->append(for_spid);
  Tuple3<bool, Str*, bool> tup15 = word_::StaticEval(this->cur_word);
  ok = tup15.at0();
  iter_name = tup15.at1();
  quoted = tup15.at2();
  if (!ok or quoted) {
    p_die(fmt79(), this->cur_word);
  }
  if (!match::IsValidVarName(iter_name)) {
    p_die(fmt80(), this->cur_word);
  }
  node->iter_name = iter_name;
  this->_Next();
  this->_NewlineOk();
  in_spid = runtime::NO_SPID;
  semi_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_In) {
    this->_Next();
    in_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
    Tuple2<List<syntax_asdl::compound_word*>*, int> tup16 = this->ParseForWords();
    iter_words = tup16.at0();
    semi_spid = tup16.at1();
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
        p_die(fmt81(), this->cur_word);
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

  for_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::KW_For);
  if (this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*> tup17 = this->parse_ctx->ParseOilForExpr(this->lexer, grammar_nt::oil_for);
    lvalue = tup17.at0();
    iterable = tup17.at1();
    this->_Peek();
    if (this->c_id == Id::Lit_LBrace) {
      body = this->ParseBraceGroup();
    }
    else {
      body = this->ParseDoGroup();
    }
    return new command::OilForIn(lvalue, iterable, body);
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
  List<syntax_asdl::command_t*>* cond_list;
  syntax_asdl::command__CommandList* cond;
  syntax_asdl::command_t* body_node;
  syntax_asdl::command__WhileUntil* node;

  this->_Next();
  if (this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup18 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup18.at0();
    cond_list = new List<syntax_asdl::command_t*>({new command::OilCondition(enode)});
  }
  else {
    this->allow_block = false;
    cond = this->_ParseCommandList();
    this->allow_block = true;
    cond_list = cond->children;
  }
  this->_Peek();
  if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace) {
    body_node = this->ParseBraceGroup();
  }
  else {
    body_node = this->ParseDoGroup();
  }
  node = new command::WhileUntil(keyword, cond_list, body_node, nullptr);
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

  this->lexer->PushHint(Id::Op_RParen, Id::Right_CasePat);
  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  if (this->c_id == Id::Op_LParen) {
    this->_Next();
  }
  pat_words = new List<syntax_asdl::word_t*>();
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
    action_children = new List<syntax_asdl::command_t*>();
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
      p_die(fmt82(), this->cur_word);
    }
  }
  this->_NewlineOk();
  spids = new List<int>({left_spid, rparen_spid, dsemi_spid, last_spid});
  arm = new syntax_asdl::case_arm(pat_words, action_children, spids);
  return arm;
}

void CommandParser::ParseCaseList(List<syntax_asdl::case_arm*>* arms) {
  syntax_asdl::case_arm* arm;

  this->_Peek();
  while (true) {
    if (this->c_id == Id::KW_Esac) {
      break;
    }
    if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_RBrace) {
      break;
    }
    if (this->c_kind != Kind::Word and this->c_id != Id::Op_LParen) {
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

  case_node = new command::Case();
  case_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  this->_Peek();
  case_node->to_match = this->cur_word;
  this->_Next();
  this->_NewlineOk();
  in_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace) {
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
  if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_RBrace) {
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
  List<syntax_asdl::command_t*>* cond_list;
  syntax_asdl::command__CommandList* cond;
  syntax_asdl::command__BraceGroup* body;
  syntax_asdl::if_arm* arm;
  int else_spid;

  arms = if_node->arms;
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    if (this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen) {
      Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup19 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
      enode = tup19.at0();
      cond_list = new List<syntax_asdl::command_t*>({new command::OilCondition(enode)});
    }
    else {
      this->allow_block = false;
      cond = this->_ParseCommandList();
      this->allow_block = true;
      cond_list = cond->children;
    }
    body = this->ParseBraceGroup();
    arm = new syntax_asdl::if_arm(cond_list, body->children, new List<int>({elif_spid}));
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

syntax_asdl::command__If* CommandParser::_ParseOilIf(int if_spid, List<syntax_asdl::command_t*>* cond_list) {
  syntax_asdl::command__If* if_node;
  syntax_asdl::command__BraceGroup* body1;
  syntax_asdl::if_arm* arm;

  if_node = new command::If();
  body1 = this->ParseBraceGroup();
  arm = new syntax_asdl::if_arm(cond_list, body1->children, new List<int>({if_spid}));
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
  syntax_asdl::command__CommandList* cond;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int else_spid;

  arms = if_node->arms;
  this->_Peek();
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    cond = this->_ParseCommandList();
    then_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Eat(Id::KW_Then);
    body = this->_ParseCommandList();
    arm = new syntax_asdl::if_arm(cond->children, body->children, new List<int>({elif_spid, then_spid}));
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
  List<syntax_asdl::command_t*>* cond_list;
  syntax_asdl::command__CommandList* cond;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int fi_spid;

  if_spid = _KeywordSpid(this->cur_word);
  if_node = new command::If();
  this->_Next();
  if (this->parse_opts->parse_paren() and this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup20 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup20.at0();
    cond_list = new List<syntax_asdl::command_t*>({new command::OilCondition(enode)});
  }
  else {
    this->allow_block = false;
    cond = this->_ParseCommandList();
    this->allow_block = true;
    cond_list = cond->children;
  }
  this->_Peek();
  if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace) {
    return this->_ParseOilIf(if_spid, cond_list);
  }
  then_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Then);
  body = this->_ParseCommandList();
  arm = new syntax_asdl::if_arm(cond_list, body->children, new List<int>({if_spid, then_spid}));
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

  time_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  pipeline = this->ParsePipeline();
  node = new command::TimeBlock(pipeline);
  node->spids->append(time_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCompoundCommand() {
  syntax_asdl::command__BraceGroup* n1;
  syntax_asdl::command__Subshell* n2;
  syntax_asdl::Token* keyword;
  syntax_asdl::command__WhileUntil* n3;
  syntax_asdl::command__If* n4;
  syntax_asdl::command__Case* n5;
  syntax_asdl::command__DBracket* n6;
  syntax_asdl::command__DParen* n7;
  syntax_asdl::Token* kw_token;

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
  if ((this->c_id == Id::KW_SetVar || this->c_id == Id::KW_SetRef || this->c_id == Id::KW_SetGlobal)) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  if (this->parse_opts->parse_set() and this->c_id == Id::KW_Set) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  p_die(fmt83(), this->cur_word);
}

syntax_asdl::command__ShFunction* CommandParser::ParseFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt84(), cur_word);
  }
  this->_Next();
  this->_Peek();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
  this->_Next();
  this->_Eat2(Id::Right_ShFunction, str255);
  after_name_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
  this->_NewlineOk();
  func = new command::ShFunction();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__ShFunction* CommandParser::ParseKshFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->_Peek();
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt85(), cur_word);
  }
  after_name_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_LParen) {
    this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
    this->_Next();
    this->_Eat(Id::Right_ShFunction);
    after_name_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
  }
  this->_NewlineOk();
  func = new command::ShFunction();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__Proc* CommandParser::ParseOilProc() {
  syntax_asdl::command__Proc* node;

  node = new command::Proc();
  this->w_parser->ParseProc(node);
  this->_Next();
  this->return_expr = true;
  node->body = this->ParseBraceGroup();
  this->return_expr = false;
  return node;
}

syntax_asdl::command__Func* CommandParser::ParseOilFunc() {
  syntax_asdl::command__Func* node;

  node = new command::Func();
  this->w_parser->ParseFunc(node);
  this->_Next();
  this->return_expr = true;
  node->body = this->ParseBraceGroup();
  this->return_expr = false;
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCoproc() {
  throw new NotImplementedError();
}

syntax_asdl::command__Subshell* CommandParser::ParseSubshell() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::command__Subshell* node;
  int right_spid;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
  c_list = this->_ParseCommandList();
  node = new command::Subshell(c_list, nullptr);
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

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  b_parser = new bool_parse::BoolParser(this->w_parser);
  bnode = b_parser->Parse();
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  node = new command::DBracket(bnode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DParen* CommandParser::ParseDParen() {
  int left_spid;
  syntax_asdl::arith_expr_t* anode;
  int right_spid;
  syntax_asdl::command__DParen* node;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  Tuple2<syntax_asdl::arith_expr_t*, int> tup21 = this->w_parser->ReadDParen();
  anode = tup21.at0();
  right_spid = tup21.at1();
  node = new command::DParen(anode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCommand() {
  syntax_asdl::Token* keyword;
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::word_part_t* part0;

  this->_Peek();
  if (this->_AtSecondaryKeyword()) {
    p_die(fmt86(), this->cur_word);
  }
  if (this->c_id == Id::KW_Function) {
    return this->ParseKshFunctionDef();
  }
  if (this->c_id == Id::KW_Func) {
    return this->ParseOilFunc();
  }
  if (this->c_id == Id::KW_Proc) {
    return this->ParseOilProc();
  }
  if ((this->c_id == Id::KW_DLeftBracket || this->c_id == Id::Op_DLeftParen || this->c_id == Id::Op_LParen || this->c_id == Id::Lit_LBrace || this->c_id == Id::KW_For || this->c_id == Id::KW_While || this->c_id == Id::KW_Until || this->c_id == Id::KW_If || this->c_id == Id::KW_Case || this->c_id == Id::KW_Time || this->c_id == Id::KW_Var || this->c_id == Id::KW_Const || this->c_id == Id::KW_SetVar || this->c_id == Id::KW_SetGlobal || this->c_id == Id::KW_SetRef)) {
    return this->ParseCompoundCommand();
  }
  if (this->parse_opts->parse_set() and this->c_id == Id::KW_Set) {
    return this->ParseCompoundCommand();
  }
  if (this->return_expr and this->c_id == Id::ControlFlow_Return) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return new command::Return(keyword, enode);
  }
  if ((this->c_id == Id::KW_Pass || this->c_id == Id::Lit_Equals)) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return new command::Expr(new speck(keyword->id, keyword->span_id), enode);
  }
  if (this->c_id == Id::Lit_RBrace) {
    p_die(fmt87(), this->cur_word);
  }
  if (this->c_kind == Kind::Redir) {
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Word) {
    compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
    if (this->w_parser->LookAhead() == Id::Op_LParen and !word_::IsVarLike(cur_word)) {
      return this->ParseFunctionDef();
    }
    parts = cur_word->parts;
    if (this->parse_opts->parse_equals() and len(parts) == 1) {
      part0 = parts->index(0);
      if (part0->tag_() == word_part_e::Literal) {
        Token* tok = static_cast<Token*>(part0);
        if (match::IsValidVarName(tok->val) and this->w_parser->LookAhead() == Id::Lit_Equals) {
          enode = this->w_parser->ParseBareDecl();
          this->_Next();
          return new command::VarDecl(nullptr, new List<syntax_asdl::name_type*>({new name_type(tok, nullptr)}), enode);
        }
      }
    }
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Eof) {
    p_die(fmt88(), this->cur_word);
  }
  p_die(fmt89(), this->cur_word);
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

  negated = false;
  pipeline_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Bang) {
    pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    negated = true;
    this->_Next();
  }
  child = this->ParseCommand();
  children = new List<syntax_asdl::command_t*>({child});
  this->_Peek();
  if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
    if (negated) {
      no_stderrs = new List<int>();
      node = new command::Pipeline(children, negated, no_stderrs);
      node->spids->append(pipeline_spid);
      return node;
    }
    else {
      return child;
    }
  }
  pipe_index = 0;
  stderr_indices = new List<int>();
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
  node = new command::Pipeline(children, negated, stderr_indices);
  node->spids->append(pipeline_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseAndOr() {
  syntax_asdl::command_t* child;
  List<int>* ops;
  List<int>* op_spids;
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command__AndOr* node;

  child = this->ParsePipeline();
  this->_Peek();
  if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
    return child;
  }
  ops = new List<int>();
  op_spids = new List<int>();
  children = new List<syntax_asdl::command_t*>({child});
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
  node = new command::AndOr(ops, children);
  node->spids = op_spids;
  return node;
}

syntax_asdl::command_t* CommandParser::_ParseCommandLine() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;

  END_LIST = new List<int>({Id::Op_Newline, Id::Eof_Real});
  children = new List<syntax_asdl::command_t*>();
  done = false;
  while (!done) {
    child = this->ParseAndOr();
    this->_Peek();
    if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
      Token* tok = static_cast<Token*>(this->cur_word);
      child = new command::Sentence(child, tok);
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
        p_die(fmt90(), this->cur_word);
      }
    }
    children->append(child);
  }
  if (len(children) > 1) {
    return new command::CommandList(children);
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

  END_LIST = new List<int>({this->eof_id, Id::Right_Subshell, Id::Lit_RBrace, Id::Op_DSemi});
  children = new List<syntax_asdl::command_t*>();
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
        child = new command::Sentence(child, tok);
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
          if (this->parse_opts->parse_brace() and this->c_id == Id::Lit_LBrace) {
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
  return new command::CommandList(children);
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandList() {
  syntax_asdl::command__CommandList* node;

  this->_NewlineOk();
  node = this->_ParseCommandTerm();
  return node;
}

syntax_asdl::command_t* CommandParser::ParseLogicalLine() {
  syntax_asdl::command_t* node;

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

  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    return new parse_result::EmptyLine();
  }
  if (this->c_id == Id::Eof_Real) {
    return new parse_result::Eof();
  }
  node = this->_ParseCommandLine();
  return new parse_result::Node(node);
}

syntax_asdl::command_t* CommandParser::ParseCommandSub() {
  syntax_asdl::command__CommandList* node;

  this->_NewlineOk();
  if (this->c_kind == Kind::Eof) {
    return new command::NoOp();
  }
  node = this->_ParseCommandTerm();
  return node;
}

void CommandParser::CheckForPendingHereDocs() {
  syntax_asdl::redir__HereDoc* node;

  if (len(this->pending_here_docs)) {
    node = this->pending_here_docs->index(0);
    p_die(fmt91(), node->here_begin);
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

  left_bracket = false;
  i = 0;
  n = len(s);
  while (i < n) {
    c = s->index(i);
    if (str_equals(c, str263)) {
      i += 1;
    }
    else {
      if (str_equals(c, str264) or str_equals(c, str265)) {
        return true;
      }
      else {
        if (str_equals(c, str266)) {
          left_bracket = true;
        }
        else {
          if (str_equals(c, str267) and left_bracket) {
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
          if (id_ == Id::Lit_RBracket and left_bracket) {
            return true;
          }
        }
      }
    }
  }
  return false;
}
Str* GLOB_META_CHARS = str268;

Str* GlobEscape(Str* s) {
  return util::BackslashEscape(s, GLOB_META_CHARS);
}

Str* EreCharClassEscape(Str* s) {
  return util::BackslashEscape(s, str269);
}
Str* ERE_META_CHARS = str270;

Str* ExtendedRegexEscape(Str* s) {
  return util::BackslashEscape(s, ERE_META_CHARS);
}

Str* GlobUnescape(Str* s) {
  List<Str*>* unescaped;
  int i;
  int n;
  Str* c;
  Str* c2;

  unescaped = new List<Str*>();
  i = 0;
  n = len(s);
  while (i < n) {
    c = s->index(i);
    if (str_equals(c, str271)) {
      i += 1;
      c2 = s->index(i);
      if (str_contains(GLOB_META_CHARS, c2)) {
        unescaped->append(c2);
      }
      else {
        throw new AssertionError();
      }
    }
    else {
      unescaped->append(c);
    }
    i += 1;
  }
  return str273->join(unescaped);
}

_GlobParser::_GlobParser(match::SimpleLexer* lexer) {
  this->lexer = lexer;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str274;
  this->warnings = new List<Str*>();
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

  first_token = new glob_part::Literal(this->token_type, this->token_val);
  balance = 1;
  tokens = new List<Tuple2<int, Str*>*>();
  while (true) {
    this->_Next();
    if (this->token_type == Id::Eol_Tok) {
      this->warnings->append(str275);
      parts = new List<syntax_asdl::glob_part_t*>({first_token});
      for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
        Tuple2<int, Str*>* tup1 = it.Value();
        id_ = tup1->at0();
        s = tup1->at1();
        parts->append(new glob_part::Literal(id_, s));
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
    tokens->append((new Tuple2<int, Str*>(this->token_type, this->token_val)));
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
  strs = new List<Str*>();
  for (ListIter<Tuple2<int, Str*>*> it(tokens); !it.Done(); it.Next()) {
    Tuple2<int, Str*>* tup3 = it.Value();
    s = tup3->at1();
    strs->append(s);
  }
  return new List<syntax_asdl::glob_part_t*>({new glob_part::CharClass(negated, strs)});
}

Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> _GlobParser::Parse() {
  List<syntax_asdl::glob_part_t*>* parts;
  int id_;
  Str* s;

  parts = new List<syntax_asdl::glob_part_t*>();
  while (true) {
    this->_Next();
    id_ = this->token_type;
    s = this->token_val;
    if (id_ == Id::Eol_Tok) {
      break;
    }
    if ((id_ == Id::Glob_Star || id_ == Id::Glob_QMark)) {
      parts->append(new glob_part::Operator(id_));
    }
    else {
      if (id_ == Id::Glob_LBracket) {
        parts->extend(this->_ParseCharClass());
      }
      else {
        parts->append(new glob_part::Literal(id_, s));
      }
    }
    if (id_ == Id::Glob_RBracket) {
      this->warnings->append(str276);
    }
    if (id_ == Id::Glob_BadBackslash) {
      this->warnings->append(str277);
    }
  }
  return (Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*>(parts, this->warnings));
}
Str* _REGEX_CHARS_TO_ESCAPE = str278;

Str* _GenerateERE(List<syntax_asdl::glob_part_t*>* parts) {
  List<Str*>* out;
  int tag;
  syntax_asdl::glob_part_t* UP_part;
  Str* c;

  out = new List<Str*>();
  for (ListIter<syntax_asdl::glob_part_t*> it(parts); !it.Done(); it.Next()) {
    syntax_asdl::glob_part_t* part = it.Value();
    tag = part->tag_();
    UP_part = part;
    if (tag == glob_part_e::Literal) {
      glob_part__Literal* part = static_cast<glob_part__Literal*>(UP_part);
      if (part->id == Id::Glob_EscapedChar) {
        c = part->s->index(1);
        if (str_contains(_REGEX_CHARS_TO_ESCAPE, c)) {
          out->append(str279);
        }
        out->append(c);
      }
      else {
        if (part->id == Id::Glob_CleanLiterals) {
          out->append(part->s);
        }
        else {
          if (part->id == Id::Glob_OtherLiteral) {
            c = part->s;
            if (str_contains(_REGEX_CHARS_TO_ESCAPE, c)) {
              out->append(str280);
            }
            out->append(c);
          }
          else {
            if (part->id == Id::Glob_LBracket) {
              out->append(str281);
            }
            else {
              if (part->id == Id::Glob_RBracket) {
                out->append(str282);
              }
              else {
                if (part->id == Id::Glob_BadBackslash) {
                  out->append(str283);
                }
                else {
                  throw new AssertionError();
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
          out->append(str284);
        }
        else {
          if (part->op_id == Id::Glob_Star) {
            out->append(str285);
          }
          else {
            throw new AssertionError();
          }
        }
      }
      else {
        if (tag == glob_part_e::CharClass) {
          glob_part__CharClass* part = static_cast<glob_part__CharClass*>(UP_part);
          out->append(str286);
          if (part->negated) {
            out->append(str287);
          }
          for (ListIter<Str*> it(part->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            out->append(s);
          }
          out->append(str288);
        }
      }
    }
  }
  return str289->join(out);
}

Tuple2<Str*, List<Str*>*> GlobToERE(Str* pat) {
  match::SimpleLexer* lexer;
  glob_::_GlobParser* p;
  List<syntax_asdl::glob_part_t*>* parts;
  List<Str*>* warnings;
  Str* regex;

  lexer = match::GlobLexer(pat);
  p = new _GlobParser(lexer);
  Tuple2<List<syntax_asdl::glob_part_t*>*, List<Str*>*> tup4 = p->Parse();
  parts = tup4.at0();
  warnings = tup4.at1();
  regex = _GenerateERE(parts);
  return (Tuple2<Str*, List<Str*>*>(regex, warnings));
}

Globber::Globber(optview::Exec* exec_opts) {
  this->exec_opts = exec_opts;
}

int Globber::Expand(Str* arg, List<Str*>* out) {
  List<Str*>* results;
  Str* msg;
  int n;

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
    println_stderr(fmt92(arg, msg));
    throw ;
  }
  n = len(results);
  if (n) {
    for (ListIter<Str*> it(results); !it.Done(); it.Next()) {
      Str* name = it.Value();
      if (name->startswith(str291) and !this->exec_opts->dashglob()) {
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

  out = new List<Str*>();
  this->Expand(arg, out);
  return out;
}

}  // define namespace glob_

namespace sh_expr_eval {  // define
namespace Id = id_kind_asdl::Id;
using runtime_asdl::scope_e;
using runtime_asdl::scope_t;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
namespace lvalue = runtime_asdl::lvalue;
using runtime_asdl::lvalue_t;
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
using syntax_asdl::arith_expr__VarRef;
using syntax_asdl::arith_expr__ArithWord;
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
namespace sh_lhs_expr_e = syntax_asdl::sh_lhs_expr_e;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::sh_lhs_expr__Name;
using syntax_asdl::sh_lhs_expr__IndexedName;
using syntax_asdl::word_t;
using types_asdl::bool_arg_type_e;

int _StringToInteger(Str* s) {
  return _StringToInteger(s, runtime::NO_SPID);
}

int _StringToInteger(Str* s, int span_id) {
  int integer;
  List<Str*>* parts;
  Str* b;
  Str* digits;
  int base;
  int n;
  int digit;

  if (s->startswith(str292)) {
    try {
      integer = to_int(s, 16);
    }
    catch (ValueError*) {
      e_die(fmt93(s), span_id);
    }
    return integer;
  }
  if (s->startswith(str294)) {
    try {
      integer = to_int(s, 8);
    }
    catch (ValueError*) {
      e_die(fmt94(s), span_id);
    }
    return integer;
  }
  if (str_contains(s, str296)) {
    parts = s->split(str297, 1);
    b = parts->index(0);
    digits = parts->index(1);
    try {
      base = to_int(b);
    }
    catch (ValueError*) {
      e_die(fmt95(b), span_id);
    }
    integer = 0;
    n = 1;
    for (StrIter it(digits); !it.Done(); it.Next()) {
      Str* ch = it.Value();
      if (str299 <= ch and ch <= str300) {
        digit = ord(ch) - ord(str301) + 10;
      }
      else {
        if (str302 <= ch and ch <= str303) {
          digit = ord(ch) - ord(str304) + 36;
        }
        else {
          if (str_equals(ch, str305)) {
            digit = 62;
          }
          else {
            if (str_equals(ch, str306)) {
              digit = 63;
            }
            else {
              if (ch->isdigit()) {
                digit = to_int(ch);
              }
              else {
                e_die(fmt96(digits), span_id);
              }
            }
          }
        }
      }
      if (digit >= base) {
        e_die(fmt97(digits, base), span_id);
      }
      integer += digit * n;
      n *= base;
    }
    return integer;
  }
  try {
    integer = to_int(s);
  }
  catch (ValueError*) {
    e_die(fmt98(s), span_id);
  }
  return integer;
}

runtime_asdl::value_t* _LookupVar(Str* name, state::Mem* mem, optview::Exec* exec_opts) {
  runtime_asdl::value_t* val;

  val = mem->GetVar(name);
  if (val->tag_() == value_e::Undef and exec_opts->nounset()) {
    e_die(fmt99(name));
  }
  return val;
}

runtime_asdl::lvalue_t* EvalLhs(syntax_asdl::sh_lhs_expr_t* node, sh_expr_eval::ArithEvaluator* arith_ev, state::Mem* mem, int spid, runtime_asdl::scope_t lookup_mode) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::lvalue__Named* lval1;
  Str* key;
  runtime_asdl::lvalue__Keyed* lval2;
  int index;
  runtime_asdl::lvalue__Indexed* lval3;

  UP_node = node;
  lval = nullptr;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      lval1 = new lvalue::Named(node->name);
      lval1->spids->append(spid);
      lval = lval1;
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      if (mem->IsAssocArray(node->name, lookup_mode)) {
        key = arith_ev->EvalWordToString(node->index);
        lval2 = new lvalue::Keyed(node->name, key);
        lval2->spids->append(node->spids->index(0));
        lval = lval2;
      }
      else {
        index = arith_ev->EvalToInt(node->index);
        lval3 = new lvalue::Indexed(node->name, index);
        lval3->spids->append(node->spids->index(0));
        lval = lval3;
      }
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
  return lval;
}

runtime_asdl::lvalue_t* _EvalLhsArith(syntax_asdl::sh_lhs_expr_t* node, state::Mem* mem, sh_expr_eval::ArithEvaluator* arith_ev) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  runtime_asdl::lvalue_t* lval;
  Str* key;
  int index;

  UP_node = node;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      lval = new lvalue::Named(node->name);
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      if (mem->IsAssocArray(node->name, scope_e::Dynamic)) {
        key = arith_ev->EvalWordToString(node->index);
        lval = new lvalue::Keyed(node->name, key);
      }
      else {
        index = arith_ev->EvalToInt(node->index);
        lval = new lvalue::Indexed(node->name, index);
      }
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
  return lval;
}

Tuple2<runtime_asdl::value_t*, runtime_asdl::lvalue_t*> EvalLhsAndLookup(syntax_asdl::sh_lhs_expr_t* node, sh_expr_eval::ArithEvaluator* arith_ev, state::Mem* mem, optview::Exec* exec_opts) {
  return EvalLhsAndLookup(node, arith_ev, mem, exec_opts, scope_e::Dynamic);
}

Tuple2<runtime_asdl::value_t*, runtime_asdl::lvalue_t*> EvalLhsAndLookup(syntax_asdl::sh_lhs_expr_t* node, sh_expr_eval::ArithEvaluator* arith_ev, state::Mem* mem, optview::Exec* exec_opts, runtime_asdl::scope_t lookup_mode) {
  syntax_asdl::sh_lhs_expr_t* UP_node;
  runtime_asdl::lvalue_t* lval;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  int index;
  Str* s;
  Str* key;

  UP_node = node;
  switch (node->tag_()) {
    case sh_lhs_expr_e::Name: {
      sh_lhs_expr__Name* node = static_cast<sh_lhs_expr__Name*>(UP_node);
      lval = new lvalue::Named(node->name);
      val = _LookupVar(node->name, mem, exec_opts);
    }
      break;
    case sh_lhs_expr_e::IndexedName: {
      sh_lhs_expr__IndexedName* node = static_cast<sh_lhs_expr__IndexedName*>(UP_node);
      val = mem->GetVar(node->name);
      UP_val = val;
      switch (val->tag_()) {
        case value_e::Str: {
          e_die(fmt100(node->name));
        }
          break;
        case value_e::Undef: {
          index = arith_ev->EvalToInt(node->index);
          lval = new lvalue::Indexed(node->name, index);
          if (exec_opts->nounset()) {
            e_die(str312);
          }
          else {
            val = new value::Str(str313);
          }
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
          index = arith_ev->EvalToInt(node->index);
          lval = new lvalue::Indexed(node->name, index);
          try {
            s = array_val->strs->index(index);
          }
          catch (IndexError*) {
            s = nullptr;
          }
          if (s == nullptr) {
            val = new value::Str(str314);
          }
          else {
            val = new value::Str(s);
          }
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* assoc_val = static_cast<value__AssocArray*>(UP_val);
          key = arith_ev->EvalWordToString(node->index);
          lval = new lvalue::Keyed(node->name, key);
          s = assoc_val->d->get(key);
          if (s == nullptr) {
            val = new value::Str(str315);
          }
          else {
            val = new value::Str(s);
          }
        }
          break;
        default: {
          throw new AssertionError();
        }
      }
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
  return (Tuple2<runtime_asdl::value_t*, runtime_asdl::lvalue_t*>(val, lval));
}

_ExprEvaluator::_ExprEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt) {
  this->word_ev = nullptr;
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->errfmt = errfmt;
}

void _ExprEvaluator::CheckCircularDeps() {
}

ArithEvaluator::ArithEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt) : _ExprEvaluator(mem, exec_opts, errfmt) {
}

int ArithEvaluator::_ValToIntOrError(runtime_asdl::value_t* val) {
  return _ValToIntOrError(val, runtime::NO_SPID);
}

int ArithEvaluator::_ValToIntOrError(runtime_asdl::value_t* val, int span_id) {
  runtime_asdl::value_t* UP_val;

  try {
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        e_die(fmt101(), span_id);
      }
        break;
      case value_e::Int: {
        value__Int* val = static_cast<value__Int*>(UP_val);
        return val->i;
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        return _StringToInteger(val->s, span_id);
      }
        break;
      case value_e::Obj: {
        throw new AssertionError();
      }
        break;
    }
  }
  catch (error::FatalRuntime* e) {
    if (this->exec_opts->strict_arith()) {
      throw ;
    }
    else {
      span_id = word_::SpanIdFromError(e);
      this->errfmt->PrettyPrintError(e, str317);
      return 0;
    }
  }
  e_die(fmt102(ui::ValType(val)), span_id);
}

Tuple2<int, runtime_asdl::lvalue_t*> ArithEvaluator::_EvalLhsAndLookupArith(syntax_asdl::sh_lhs_expr_t* node) {
  runtime_asdl::value_t* val;
  runtime_asdl::lvalue_t* lval;
  int span_id;
  int i;

  Tuple2<runtime_asdl::value_t*, runtime_asdl::lvalue_t*> tup0 = EvalLhsAndLookup(node, this, this->mem, this->exec_opts);
  val = tup0.at0();
  lval = tup0.at1();
  if (val->tag_() == value_e::MaybeStrArray) {
    e_die(str319);
  }
  span_id = word_::SpanForLhsExpr(node);
  i = this->_ValToIntOrError(val, span_id);
  return (Tuple2<int, runtime_asdl::lvalue_t*>(i, lval));
}

void ArithEvaluator::_Store(runtime_asdl::lvalue_t* lval, int new_int) {
  runtime_asdl::value__Str* val;

  val = new value::Str(str(new_int));
  this->mem->SetVar(lval, val, scope_e::Dynamic);
}

int ArithEvaluator::EvalToInt(syntax_asdl::arith_expr_t* node) {
  runtime_asdl::value_t* val;
  int span_id;
  int i;

  val = this->Eval(node);
  span_id = location::SpanForArithExpr(node);
  i = this->_ValToIntOrError(val, span_id);
  return i;
}

runtime_asdl::value_t* ArithEvaluator::Eval(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  syntax_asdl::Token* tok;
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
  Str* s;
  Str* key;
  runtime_asdl::value_t* val;
  int cond;

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      arith_expr__VarRef* node = static_cast<arith_expr__VarRef*>(UP_node);
      tok = node->token;
      return _LookupVar(tok->val, this->mem, this->exec_opts);
    }
      break;
    case arith_expr_e::ArithWord: {
      arith_expr__ArithWord* node = static_cast<arith_expr__ArithWord*>(UP_node);
      return this->word_ev->EvalWordToString(node->w);
    }
      break;
    case arith_expr_e::UnaryAssign: {
      arith_expr__UnaryAssign* node = static_cast<arith_expr__UnaryAssign*>(UP_node);
      op_id = node->op_id;
      Tuple2<int, runtime_asdl::lvalue_t*> tup1 = this->_EvalLhsAndLookupArith(node->child);
      old_int = tup1.at0();
      lval = tup1.at1();
      if (op_id == Id::Node_PostDPlus) {
        new_int = old_int + 1;
        ret = old_int;
      }
      else {
        if (op_id == Id::Node_PostDMinus) {
          new_int = old_int - 1;
          ret = old_int;
        }
        else {
          if (op_id == Id::Arith_DPlus) {
            new_int = old_int + 1;
            ret = new_int;
          }
          else {
            if (op_id == Id::Arith_DMinus) {
              new_int = old_int - 1;
              ret = new_int;
            }
            else {
              throw new AssertionError();
            }
          }
        }
      }
      this->_Store(lval, new_int);
      return new value::Int(ret);
    }
      break;
    case arith_expr_e::BinaryAssign: {
      arith_expr__BinaryAssign* node = static_cast<arith_expr__BinaryAssign*>(UP_node);
      op_id = node->op_id;
      if (op_id == Id::Arith_Equal) {
        lval = _EvalLhsArith(node->left, this->mem, this);
        rhs_int = this->EvalToInt(node->right);
        this->_Store(lval, rhs_int);
        return new value::Int(rhs_int);
      }
      Tuple2<int, runtime_asdl::lvalue_t*> tup2 = this->_EvalLhsAndLookupArith(node->left);
      old_int = tup2.at0();
      lval = tup2.at1();
      rhs = this->EvalToInt(node->right);
      if (op_id == Id::Arith_PlusEqual) {
        new_int = old_int + rhs;
      }
      else {
        if (op_id == Id::Arith_MinusEqual) {
          new_int = old_int - rhs;
        }
        else {
          if (op_id == Id::Arith_StarEqual) {
            new_int = old_int * rhs;
          }
          else {
            if (op_id == Id::Arith_SlashEqual) {
              if (rhs == 0) {
                e_die(str320);
              }
              new_int = old_int / rhs;
            }
            else {
              if (op_id == Id::Arith_PercentEqual) {
                if (rhs == 0) {
                  e_die(str321);
                }
                new_int = old_int % rhs;
              }
              else {
                if (op_id == Id::Arith_DGreatEqual) {
                  new_int = old_int >> rhs;
                }
                else {
                  if (op_id == Id::Arith_DLessEqual) {
                    new_int = old_int << rhs;
                  }
                  else {
                    if (op_id == Id::Arith_AmpEqual) {
                      new_int = old_int & rhs;
                    }
                    else {
                      if (op_id == Id::Arith_PipeEqual) {
                        new_int = old_int | rhs;
                      }
                      else {
                        if (op_id == Id::Arith_CaretEqual) {
                          new_int = old_int ^ rhs;
                        }
                        else {
                          throw new AssertionError();
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
      return new value::Int(new_int);
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
              throw new AssertionError();
            }
          }
        }
      }
      return new value::Int(ret);
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
        return new value::Int(ret);
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
        return new value::Int(ret);
      }
      if (op_id == Id::Arith_LBracket) {
        left = this->Eval(node->left);
        UP_left = left;
        switch (left->tag_()) {
          case value_e::MaybeStrArray: {
            value__MaybeStrArray* left = static_cast<value__MaybeStrArray*>(UP_left);
            rhs_int = this->EvalToInt(node->right);
            try {
              s = left->strs->index(rhs_int);
            }
            catch (IndexError*) {
              s = nullptr;
            }
          }
            break;
          case value_e::AssocArray: {
            value__AssocArray* left = static_cast<value__AssocArray*>(UP_left);
            key = this->EvalWordToString(node->right);
            s = left->d->get(key);
          }
            break;
          default: {
            e_die(fmt103(ui::ValType(left)));
          }
        }
        if (s == nullptr) {
          val = new value::Undef();
        }
        else {
          val = new value::Str(s);
        }
        return val;
      }
      if (op_id == Id::Arith_Comma) {
        this->Eval(node->left);
        return this->Eval(node->right);
      }
      lhs = this->EvalToInt(node->left);
      rhs = this->EvalToInt(node->right);
      if (op_id == Id::Arith_Plus) {
        ret = lhs + rhs;
      }
      else {
        if (op_id == Id::Arith_Minus) {
          ret = lhs - rhs;
        }
        else {
          if (op_id == Id::Arith_Star) {
            ret = lhs * rhs;
          }
          else {
            if (op_id == Id::Arith_Slash) {
              if (rhs == 0) {
                e_die(fmt104(), location::SpanForArithExpr(node->right));
              }
              ret = lhs / rhs;
            }
            else {
              if (op_id == Id::Arith_Percent) {
                if (rhs == 0) {
                  e_die(fmt105(), location::SpanForArithExpr(node->right));
                }
                ret = lhs % rhs;
              }
              else {
                if (op_id == Id::Arith_DStar) {
                  if (rhs < 0) {
                    e_die(str325);
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
                                ret = lhs | rhs;
                              }
                              else {
                                if (op_id == Id::Arith_Amp) {
                                  ret = lhs & rhs;
                                }
                                else {
                                  if (op_id == Id::Arith_Caret) {
                                    ret = lhs ^ rhs;
                                  }
                                  else {
                                    if (op_id == Id::Arith_DLess) {
                                      ret = lhs << rhs;
                                    }
                                    else {
                                      if (op_id == Id::Arith_DGreat) {
                                        ret = lhs >> rhs;
                                      }
                                      else {
                                        throw new AssertionError();
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
      return new value::Int(ret);
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
      throw new AssertionError();
    }
  }
}

Str* ArithEvaluator::EvalWordToString(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  runtime_asdl::value__Str* val;

  UP_node = node;
  if (node->tag_() == arith_expr_e::ArithWord) {
    arith_expr__ArithWord* node = static_cast<arith_expr__ArithWord*>(UP_node);
    val = this->word_ev->EvalWordToString(node->w);
    return val->s;
  }
  else {
    e_die(str326);
  }
}

BoolEvaluator::BoolEvaluator(state::Mem* mem, optview::Exec* exec_opts, ui::ErrorFormatter* errfmt) : _ExprEvaluator(mem, exec_opts, errfmt) {
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
    i = _StringToInteger(s, span_id);
  }
  catch (error::FatalRuntime* e) {
    if (this->always_strict or this->exec_opts->strict_arith()) {
      throw ;
    }
    else {
      this->errfmt->PrettyPrintError(e, str327);
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

  val = this->word_ev->EvalWordToString(word, quote_kind);
  return val->s;
}

void BoolEvaluator::_SetRegexMatches(List<Str*>* matches) {
  state::SetGlobalArray(this->mem, str328, matches);
}

bool BoolEvaluator::Eval(syntax_asdl::bool_expr_t* node) {
  syntax_asdl::bool_expr_t* UP_node;
  Str* s;
  bool b;
  int op_id;
  types_asdl::bool_arg_type_t arg_type;
  int fd;
  int index;
  runtime_asdl::quote_t quote_kind;
  Str* s1;
  Str* s2;
  int i1;
  int i2;
  List<Str*>* matches;

  UP_node = node;
  switch (node->tag_()) {
    case bool_expr_e::WordTest: {
      bool_expr__WordTest* node = static_cast<bool_expr__WordTest*>(UP_node);
      s = this->_EvalCompoundWord(node->w);
      return new bool(s);
    }
      break;
    case bool_expr_e::LogicalNot: {
      bool_expr__LogicalNot* node = static_cast<bool_expr__LogicalNot*>(UP_node);
      b = this->Eval(node->child);
      return !b;
    }
      break;
    case bool_expr_e::LogicalAnd: {
      bool_expr__LogicalAnd* node = static_cast<bool_expr__LogicalAnd*>(UP_node);
      if (this->Eval(node->left)) {
        return this->Eval(node->right);
      }
      else {
        return false;
      }
    }
      break;
    case bool_expr_e::LogicalOr: {
      bool_expr__LogicalOr* node = static_cast<bool_expr__LogicalOr*>(UP_node);
      if (this->Eval(node->left)) {
        return true;
      }
      else {
        return this->Eval(node->right);
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
          return !new bool(s);
        }
        if (op_id == Id::BoolUnary_n) {
          return new bool(s);
        }
        throw new AssertionError();
      }
      if (arg_type == bool_arg_type_e::Other) {
        if (op_id == Id::BoolUnary_t) {
          try {
            fd = to_int(s);
          }
          catch (ValueError*) {
            e_die(fmt106(s), node->child);
          }
          return bool_stat::isatty(fd, s, node->child);
        }
        if (op_id == Id::BoolUnary_o) {
          index = match::MatchOption(s);
          if (index == 0) {
            return false;
          }
          else {
            return this->exec_opts->opt_array->index(index);
          }
        }
        e_die(fmt107(ui::PrettyId(op_id)));
      }
      throw new AssertionError();
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
        throw new AssertionError();
      }
      if (arg_type == bool_arg_type_e::Str) {
        if ((op_id == Id::BoolBinary_GlobEqual || op_id == Id::BoolBinary_GlobDEqual)) {
          return libc::fnmatch(s2, s1);
        }
        if (op_id == Id::BoolBinary_GlobNEqual) {
          return !libc::fnmatch(s2, s1);
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
          catch (RuntimeError*) {
            e_die(fmt108(s2, node->right), 2);
          }
          if (matches == nullptr) {
            return false;
          }
          this->_SetRegexMatches(matches);
          return true;
        }
        if (op_id == Id::Op_Less) {
          return s1 < s2;
        }
        if (op_id == Id::Op_Great) {
          return s1 > s2;
        }
        throw new AssertionError();
      }
    }
      break;
  }
  throw new AssertionError();
}

}  // define namespace sh_expr_eval

namespace split {  // define
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::span_e;
using runtime_asdl::value__Str;
using EMIT = runtime_asdl::emit_e;
using CH = runtime_asdl::char_kind_e;
using ST = runtime_asdl::state_e;
Str* DEFAULT_IFS = str332;

List<Str*>* _SpansToParts(Str* s, List<Tuple2<runtime_asdl::span_t, int>*>* spans) {
  List<mylib::BufWriter*>* parts;
  int start_index;
  bool join_next;
  bool last_span_was_black;
  runtime_asdl::span_t span_type;
  int end_index;
  mylib::BufWriter* buf;
  List<Str*>* result;

  parts = new List<mylib::BufWriter*>();
  start_index = 0;
  join_next = false;
  last_span_was_black = false;
  for (ListIter<Tuple2<runtime_asdl::span_t, int>*> it(spans); !it.Done(); it.Next()) {
    Tuple2<runtime_asdl::span_t, int>* tup0 = it.Value();
    span_type = tup0->at0();
    end_index = tup0->at1();
    if (span_type == span_e::Black) {
      if (len(parts) and join_next) {
        parts->index(-1)->write(s->slice(start_index, end_index));
        join_next = false;
      }
      else {
        buf = new mylib::BufWriter();
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
  result = new List<Str*>();
  for (ListIter<mylib::BufWriter*> it(parts); !it.Done(); it.Next()) {
    mylib::BufWriter* buf = it.Value();
    result->append(buf->getvalue());
  }
  return result;
}

SplitContext::SplitContext(state::Mem* mem) {
  this->mem = mem;
  this->splitters = new Dict<Str*, split::IfsSplitter*>();
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

  if (ifs == nullptr) {
    val = this->mem->GetVar(str333);
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
        throw new AssertionError();
      }
    }
  }
  try {
    sp = this->splitters->index(ifs);
  }
  catch (KeyError*) {
    ifs_whitespace = new mylib::BufWriter();
    ifs_other = new mylib::BufWriter();
    for (StrIter it(ifs); !it.Done(); it.Next()) {
      Str* c = it.Value();
      if (str_contains(str335, c)) {
        ifs_whitespace->write(c);
      }
      else {
        ifs_other->write(c);
      }
    }
    sp = new IfsSplitter(ifs_whitespace->getvalue(), ifs_other->getvalue());
this->splitters->set(ifs, sp);
  }
  return sp;
}

Str* SplitContext::GetJoinChar() {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;

  val = this->mem->GetVar(str336);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return str337;
    }
      break;
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      if (val->s) {
        return val->s->index(0);
      }
      else {
        return str338;
      }
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

Str* SplitContext::Escape(Str* s) {
  split::IfsSplitter* sp;

  sp = this->_GetSplitter();
  return sp->Escape(s);
}

List<Str*>* SplitContext::SplitForWordEval(Str* s) {
  return SplitForWordEval(s, nullptr);
}

List<Str*>* SplitContext::SplitForWordEval(Str* s, Str* ifs) {
  split::IfsSplitter* sp;
  List<Tuple2<runtime_asdl::span_t, int>*>* spans;

  sp = this->_GetSplitter(ifs);
  spans = sp->Split(s, true);
  return _SpansToParts(s, spans);
}

List<Tuple2<runtime_asdl::span_t, int>*>* SplitContext::SplitForRead(Str* line, bool allow_escape) {
  split::IfsSplitter* sp;

  sp = this->_GetSplitter();
  return sp->Split(line, allow_escape);
}

_BaseSplitter::_BaseSplitter(Str* escape_chars) {
  this->escape_chars = str_concat(escape_chars, str340);
}

Str* _BaseSplitter::Escape(Str* s) {
  return util::BackslashEscape(s, this->escape_chars);
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
  runtime_asdl::state_t state;
  Str* c;
  runtime_asdl::char_kind_t ch;
  runtime_asdl::state_t new_state;
  runtime_asdl::emit_t action;

  ws_chars = this->ifs_whitespace;
  other_chars = this->ifs_other;
  n = len(s);
  spans = new List<Tuple2<runtime_asdl::span_t, int>*>();
  if (n == 0) {
    return spans;
  }
  i = 0;
  while (i < n and str_contains(this->ifs_whitespace, s->index(i))) {
    i += 1;
  }
  if (i != 0) {
    spans->append((new Tuple2<runtime_asdl::span_t, int>(span_e::Delim, i)));
  }
  if (i == n) {
    return spans;
  }
  state = ST::Start;
  while (state != ST::Done) {
    if (i < n) {
      c = s->index(i);
      if (str_contains(ws_chars, c)) {
        ch = CH::DE_White;
      }
      else {
        if (str_contains(other_chars, c)) {
          ch = CH::DE_Gray;
        }
        else {
          if (allow_escape and str_equals(c, str341)) {
            ch = CH::Backslash;
          }
          else {
            ch = CH::Black;
          }
        }
      }
    }
    else {
      if (i == n) {
        ch = CH::Sentinel;
      }
      else {
        throw new AssertionError();
      }
    }
    Tuple2<runtime_asdl::state_t, runtime_asdl::emit_t> tup1 = consts::IfsEdge(state, ch);
    new_state = tup1.at0();
    action = tup1.at1();
    if (new_state == ST::Invalid) {
      throw new AssertionError();
    }
    if (action == EMIT::Part) {
      spans->append((new Tuple2<runtime_asdl::span_t, int>(span_e::Black, i)));
    }
    else {
      if (action == EMIT::Delim) {
        spans->append((new Tuple2<runtime_asdl::span_t, int>(span_e::Delim, i)));
      }
      else {
        if (action == EMIT::Empty) {
          spans->append((new Tuple2<runtime_asdl::span_t, int>(span_e::Delim, i)));
          spans->append((new Tuple2<runtime_asdl::span_t, int>(span_e::Black, i)));
        }
        else {
          if (action == EMIT::Escape) {
            spans->append((new Tuple2<runtime_asdl::span_t, int>(span_e::Backslash, i)));
          }
          else {
            if (action == EMIT::Nothing) {
              ;  // pass
            }
            else {
              throw new AssertionError();
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

  num_cont_bytes = 0;
  if (code <= 127) {
    return chr(code & 127);
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
          return str343;
        }
      }
    }
  }
  bytes_ = new List<int>();
  for (int _ = 0; _ < num_cont_bytes; ++_) {
    bytes_->append(128 | code & 63);
    code >>= 6;
  }
  b = 30 << 6 - num_cont_bytes | code & 63 >> num_cont_bytes;
  bytes_->append(b);
  bytes_->reverse();
  tmp = new List<Str*>();
  for (ListIter<int> it(bytes_); !it.Done(); it.Next()) {
    int b = it.Value();
    tmp->append(chr(b & 255));
  }
  return str344->join(tmp);
}
Str* INCOMPLETE_CHAR = str345;
Str* INVALID_CONT = str346;
Str* INVALID_START = str347;

void _CheckContinuationByte(Str* byte) {
  if (ord(byte) >> 6 != 2) {
    e_strict(INVALID_CONT);
  }
}

int _Utf8CharLen(int starting_byte) {
  if (starting_byte >> 7 == 0) {
    return 1;
  }
  else {
    if (starting_byte >> 5 == 6) {
      return 2;
    }
    else {
      if (starting_byte >> 4 == 14) {
        return 3;
      }
      else {
        if (starting_byte >> 3 == 30) {
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
  int byte_as_int;
  int length;

  byte_as_int = ord(s->index(i));
  try {
    length = _Utf8CharLen(byte_as_int);
    for (int j = i + 1; j < i + length; ++j) {
      _CheckContinuationByte(s->index(j));
    }
    i += length;
  }
  catch (IndexError*) {
    e_strict(INCOMPLETE_CHAR);
  }
  return i;
}

int _PreviousUtf8Char(Str* s, int i) {
  int orig_i;
  int byte_as_int;
  int offset;

  orig_i = i;
  while (i > 0) {
    i -= 1;
    byte_as_int = ord(s->index(i));
    if (byte_as_int >> 6 != 2) {
      offset = orig_i - i;
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

Str* DoUnarySuffixOp(Str* s, syntax_asdl::suffix_op__Unary* op, Str* arg) {
  int n;
  int i;

  if (!glob_::LooksLikeGlob(arg)) {
    arg = glob_::GlobUnescape(arg);
    if ((op->op_id == Id::VOp1_Pound || op->op_id == Id::VOp1_DPound)) {
      if (len(arg) and s->startswith(arg)) {
        return s->slice(len(arg));
      }
      else {
        return s;
      }
    }
    else {
      if ((op->op_id == Id::VOp1_Percent || op->op_id == Id::VOp1_DPercent)) {
        if (len(arg) and s->endswith(arg)) {
          return s->slice(0, -len(arg));
        }
        else {
          return s;
        }
      }
      else {
        if (op->op_id == Id::VOp1_Comma) {
          if (!(str_equals(arg, str348))) {
            e_die(fmt109(ui::PrettyId(op->op_id)));
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
            if (!(str_equals(arg, str350))) {
              e_die(fmt110(ui::PrettyId(op->op_id)));
            }
            return s->lower();
          }
          else {
            if (op->op_id == Id::VOp1_Caret) {
              if (!(str_equals(arg, str352))) {
                e_die(fmt111(ui::PrettyId(op->op_id)));
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
                if (!(str_equals(arg, str354))) {
                  e_die(fmt112(ui::PrettyId(op->op_id)));
                }
                return s->upper();
              }
              else {
                throw new AssertionError();
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
      if (libc::fnmatch(arg, s->slice(0, i))) {
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
        if (libc::fnmatch(arg, s->slice(0, i))) {
          return s->slice(i);
        }
        if (i == 0) {
          break;
        }
        i = _PreviousUtf8Char(s, i);
      }
      return s;
    }
    else {
      if (op->op_id == Id::VOp1_Percent) {
        i = n;
        while (true) {
          if (libc::fnmatch(arg, s->slice(i))) {
            return s->slice(0, i);
          }
          if (i == 0) {
            break;
          }
          i = _PreviousUtf8Char(s, i);
        }
        return s;
      }
      else {
        if (op->op_id == Id::VOp1_DPercent) {
          i = 0;
          while (true) {
            if (libc::fnmatch(arg, s->slice(i))) {
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
          throw new NotImplementedError(ui::PrettyId(op->op_id));
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

  matches = new List<Tuple2<int, int>*>();
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

  parts = new List<Str*>();
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
  return str356->join(parts);
}

GlobReplacer::GlobReplacer(Str* regex, Str* replace_str, int slash_spid) {
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

  regex = fmt113(this->regex);
  if (op->replace_mode == Id::Lit_Slash) {
    try {
      return _PatSubAll(s, regex, this->replace_str);
    }
    catch (RuntimeError* e) {
      msg = e->message;
      e_die(fmt114(regex, msg), this->slash_spid);
    }
  }
  if (op->replace_mode == Id::Lit_Pound) {
    regex = str_concat(str360, regex);
  }
  else {
    if (op->replace_mode == Id::Lit_Percent) {
      regex = str_concat(regex, str361);
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

Str* ShellQuote(Str* s) {
  return str_concat(str_concat(str362, s->replace(str363, str364)), str365);
}

Str* ShellQuoteOneLine(Str* s) {
  bool needs_dollar;
  Str* escaped;

  needs_dollar = false;
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* c = it.Value();
    if (str_contains(str366, c)) {
      needs_dollar = true;
      break;
    }
  }
  if (needs_dollar) {
    escaped = s->replace(str367, str368)->replace(str369, str370)->replace(str371, str372)->replace(str373, str374)->replace(str375, str376);
    return str_concat(str_concat(str377, escaped), str378);
  }
  else {
    return str_concat(str_concat(str379, s), str380);
  }
}

Str* ShellQuoteB(Str* s) {
  s = s->replace(str381, str382)->replace(str383, str384);
  return util::BackslashEscape(s, str385);
}

}  // define namespace string_ops

namespace tdop {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
namespace arith_expr = syntax_asdl::arith_expr;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__VarRef;
using syntax_asdl::arith_expr__Binary;
namespace sh_lhs_expr = syntax_asdl::sh_lhs_expr;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::word_t;
using types_asdl::lex_mode_e;

bool IsIndexable(syntax_asdl::arith_expr_t* node) {
  return node->tag_() == arith_expr_e::VarRef;
}

syntax_asdl::sh_lhs_expr_t* ToLValue(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  syntax_asdl::sh_lhs_expr__Name* n;

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      arith_expr__VarRef* node = static_cast<arith_expr__VarRef*>(UP_node);
      n = new sh_lhs_expr::Name(node->token->val);
      n->spids->append(node->token->span_id);
      return n;
    }
      break;
    case arith_expr_e::Binary: {
      arith_expr__Binary* node = static_cast<arith_expr__Binary*>(UP_node);
      if (node->op_id == Id::Arith_LBracket and node->left->tag_() == arith_expr_e::VarRef) {
        arith_expr__VarRef* left = static_cast<arith_expr__VarRef*>(node->left);
        return new sh_lhs_expr::IndexedName(left->token->val, node->right);
      }
    }
      break;
  }
  return nullptr;
}

syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  p_die(fmt115(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::Token* var_name_token;

  var_name_token = word_::LooksLikeArithVar(w);
  if (var_name_token) {
    return new arith_expr::VarRef(var_name_token);
  }
  return new arith_expr::ArithWord(w);
}

syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* r;

  r = p->ParseUntil(bp);
  p->Eat(Id::Arith_RParen);
  return r;
}

syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return new arith_expr::Unary(word_::ArithId(w), right);
}

syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp) {
  p_die(fmt116(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  return new arith_expr::Binary(word_::ArithId(w), left, p->ParseUntil(rbp));
}

syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  syntax_asdl::sh_lhs_expr_t* lhs;

  lhs = ToLValue(left);
  if (lhs == nullptr) {
    p_die(fmt117(), w);
  }
  return new arith_expr::BinaryAssign(word_::ArithId(w), lhs, p->ParseUntil(rbp));
}

TdopParser::TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser) {
  this->spec = spec;
  this->w_parser = w_parser;
  this->cur_word = nullptr;
  this->op_id = Id::Undefined_Tok;
}

bool TdopParser::AtToken(int token_type) {
  return this->op_id == token_type;
}

void TdopParser::Eat(int token_type) {
  if (!this->AtToken(token_type)) {
    p_die(fmt118(ui::PrettyId(token_type), ui::PrettyId(this->op_id)), this->cur_word);
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

  if ((this->op_id == Id::Eof_Real || this->op_id == Id::Eof_RParen || this->op_id == Id::Eof_Backtick)) {
    p_die(fmt119(), this->cur_word);
  }
  t = this->cur_word;
  null_info = this->spec->LookupNud(this->op_id);
  this->Next();
  node = null_info->nud(this, t, null_info->bp);
  while (true) {
    t = this->cur_word;
    try {
      left_info = this->spec->LookupLed(this->op_id);
    }
    catch (KeyError*) {
      throw new AssertionError();
    }
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
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
namespace class_literal_term = syntax_asdl::class_literal_term;
using syntax_asdl::class_literal_term_t;
using syntax_asdl::Token;
Dict<Str*, Str*>* _ONE_CHAR = new Dict<Str*, Str*>({});

syntax_asdl::class_literal_term_t* EvalCharLiteralForRegex(syntax_asdl::Token* tok) {
  int id_;
  Str* value;
  Str* c;
  Str* s;
  int i;

  id_ = tok->id;
  value = tok->val;
  if (id_ == Id::Char_OneChar) {
    c = value->index(1);
    s = _ONE_CHAR->index(c);
    return new class_literal_term::ByteSet(s, tok->span_id);
  }
  else {
    if (id_ == Id::Char_Hex) {
      s = value->slice(2);
      i = to_int(s, 16);
      return new class_literal_term::ByteSet(chr(i), tok->span_id);
    }
    else {
      if ((id_ == Id::Char_Unicode4 || id_ == Id::Char_Unicode8)) {
        s = value->slice(2);
        i = to_int(s, 16);
        return new class_literal_term::CodePoint(i, tok->span_id);
      }
      else {
        if (id_ == Id::Expr_Name) {
          return nullptr;
        }
        else {
          throw new AssertionError();
        }
      }
    }
  }
}

Str* EvalCStringToken(int id_, Str* value) {
  Str* c;
  Str* s;
  int i;

  if (id_ == Id::Char_Literals) {
    return value;
  }
  else {
    if (id_ == Id::Char_BadBackslash) {
      if (1) {
        println_stderr(str392);
      }
      return value;
    }
    else {
      if (id_ == Id::Char_OneChar) {
        c = value->index(1);
        return _ONE_CHAR->index(c);
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
              i = i % 256;
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
                throw new AssertionError();
              }
            }
          }
        }
      }
    }
  }
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
using syntax_asdl::suffix_op__Nullary;
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
using runtime_asdl::effect_e;
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
using runtime_asdl::assign_arg;
namespace cmd_value_e = runtime_asdl::cmd_value_e;
using runtime_asdl::cmd_value_t;
namespace cmd_value = runtime_asdl::cmd_value;
using runtime_asdl::cmd_value__Assign;
using runtime_asdl::cmd_value__Argv;
using runtime_asdl::quote_e;
using runtime_asdl::quote_t;
Str* _STRING_AND_ARRAY = str393;

Str* EvalSingleQuoted(syntax_asdl::single_quoted* part) {
  List<Str*>* tmp;
  Str* s;

  if (part->left->id == Id::Left_SingleQuoteRaw) {
    tmp = new List<Str*>();
    for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
      syntax_asdl::Token* t = it.Value();
      tmp->append(t->val);
    }
    s = str394->join(tmp);
  }
  else {
    if (part->left->id == Id::Left_SingleQuoteC) {
      tmp = new List<Str*>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(word_compile::EvalCStringToken(t->id, t->val));
      }
      s = str395->join(tmp);
    }
    else {
      throw new AssertionError();
    }
  }
  return s;
}

Str* _BackslashEscape(Str* s) {
  return s->replace(str396, str397);
}

runtime_asdl::part_value_t* _ValueToPartValue(runtime_asdl::value_t* val, bool quoted) {
  runtime_asdl::value_t* UP_val;

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      return new part_value::String(val->s, quoted, !quoted);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      return new part_value::Array(val->strs);
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      return new part_value::Array(val->d->values());
    }
      break;
    case value_e::Obj: {
      throw new AssertionError();
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

List<List<Tuple3<Str*, bool, bool>*>*>* _MakeWordFrames(List<runtime_asdl::part_value_t*>* part_vals) {
  List<Tuple3<Str*, bool, bool>*>* current;
  List<List<Tuple3<Str*, bool, bool>*>*>* frames;
  runtime_asdl::part_value_t* UP_p;
  bool is_first;
  Tuple3<Str*, bool, bool>* portion;

  current = new List<Tuple3<Str*, bool, bool>*>();
  frames = new List<List<Tuple3<Str*, bool, bool>*>*>({current});
  for (ListIter<runtime_asdl::part_value_t*> it(part_vals); !it.Done(); it.Next()) {
    runtime_asdl::part_value_t* p = it.Value();
    UP_p = p;
    switch (p->tag_()) {
      case part_value_e::String: {
        part_value__String* p = static_cast<part_value__String*>(UP_p);
        current->append((new Tuple3<Str*, bool, bool>(p->s, p->quoted, p->do_split)));
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
          portion = (new Tuple3<Str*, bool, bool>(s, true, false));
          if (is_first) {
            current->append(portion);
            is_first = false;
          }
          else {
            current = new List<Tuple3<Str*, bool, bool>*>({portion});
            frames->append(current);
          }
        }
      }
        break;
      default: {
        throw new AssertionError();
      }
    }
  }
  return frames;
}

Str* _DecayPartValuesToString(List<runtime_asdl::part_value_t*>* part_vals, Str* join_char) {
  List<Str*>* out;
  runtime_asdl::part_value_t* UP_p;
  List<Str*>* tmp;

  out = new List<Str*>();
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
        tmp = new List<Str*>();
        for (ListIter<Str*> it(p->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          tmp->append(s);
        }
        out->append(join_char->join(tmp));
      }
    }
  }
  return str398->join(out);
}

runtime_asdl::value_t* _PerformSlice(runtime_asdl::value_t* val, int begin, int length, bool has_length, syntax_asdl::braced_var_sub* part) {
  runtime_asdl::value_t* UP_val;
  Str* s;
  int byte_begin;
  int byte_end;
  Str* substr;
  List<Str*>* strs;

  UP_val = val;
  switch (val->tag_()) {
    case value_e::Str: {
      value__Str* val = static_cast<value__Str*>(UP_val);
      s = val->s;
      if (begin < 0) {
        e_strict(fmt120(begin), part);
      }
      byte_begin = string_ops::AdvanceUtf8Chars(s, begin, 0);
      if (has_length) {
        if (length < 0) {
          e_strict(fmt121(length), part);
        }
        byte_end = string_ops::AdvanceUtf8Chars(s, length, byte_begin);
      }
      else {
        byte_end = len(s);
      }
      substr = s->slice(byte_begin, byte_end);
      val = new value::Str(substr);
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      if (has_length and length < 0) {
        e_die(fmt122(length), part);
      }
      strs = new List<Str*>();
      for (ListIter<Str*> it(val->strs->slice(begin)); !it.Done(); it.Next()) {
        Str* s = it.Value();
        if (s != nullptr) {
          strs->append(s);
          if (has_length and len(strs) == length) {
            break;
          }
        }
      }
      val = new value::MaybeStrArray(strs);
    }
      break;
    case value_e::AssocArray: {
      e_die(fmt123(), part);
    }
      break;
    default: {
      throw new NotImplementedError(val->tag_());
    }
  }
  return val;
}

runtime_asdl::value__Str* StringWordEvaluator::EvalWordToString(syntax_asdl::word_t* w) {
  return EvalWordToString(w, quote_e::Default);
}

runtime_asdl::value__Str* StringWordEvaluator::EvalWordToString(syntax_asdl::word_t* w, runtime_asdl::quote_t quote_kind) {
  throw new NotImplementedError();
}

Str* _GetDollarHyphen(optview::Exec* exec_opts) {
  List<Str*>* chars;

  chars = new List<Str*>();
  if (exec_opts->interactive()) {
    chars->append(str403);
  }
  if (exec_opts->errexit()) {
    chars->append(str404);
  }
  if (exec_opts->nounset()) {
    chars->append(str405);
  }
  if (exec_opts->xtrace()) {
    chars->append(str406);
  }
  if (exec_opts->noexec()) {
    chars->append(str407);
  }
  return str408->join(chars);
}

AbstractWordEvaluator::AbstractWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt) {
  this->arith_ev = nullptr;
  this->expr_ev = nullptr;
  this->prompt_ev = nullptr;
  this->mem = mem;
  this->exec_opts = exec_opts;
  this->splitter = splitter;
  this->errfmt = errfmt;
  this->globber = new glob_::Globber(exec_opts);
}

void AbstractWordEvaluator::CheckCircularDeps() {
  throw new NotImplementedError();
}

runtime_asdl::part_value_t* AbstractWordEvaluator::_EvalCommandSub(syntax_asdl::command_t* part, bool quoted) {
  throw new NotImplementedError();
}

runtime_asdl::part_value_t* AbstractWordEvaluator::_EvalProcessSub(syntax_asdl::command_t* part, int id_) {
  throw new NotImplementedError();
}

Str* AbstractWordEvaluator::_EvalTildeSub(syntax_asdl::Token* token) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;

  if (token->val == str409) {
    val = this->mem->GetVar(str410);
    UP_val = val;
    if (val->tag_() == value_e::Str) {
      value__Str* val = static_cast<value__Str*>(UP_val);
      return val->s;
    }
    return passwd::GetMyHomeDir();
  }
  return passwd::GetHomeDir(token);
}

runtime_asdl::value_t* AbstractWordEvaluator::_EvalVarNum(int var_num) {
  return this->mem->GetArgNum(var_num);
}

Tuple2<runtime_asdl::value_t*, bool> AbstractWordEvaluator::_EvalSpecialVar(int op_id, bool quoted) {
  bool maybe_decay_array;
  List<Str*>* argv;
  runtime_asdl::value_t* val;

  maybe_decay_array = false;
  if ((op_id == Id::VSub_At || op_id == Id::VSub_Star)) {
    argv = this->mem->GetArgv();
    val = new value::MaybeStrArray(argv);
    if (op_id == Id::VSub_At) {
      maybe_decay_array = !quoted;
    }
    else {
      maybe_decay_array = true;
    }
  }
  else {
    if (op_id == Id::VSub_Hyphen) {
      val = new value::Str(_GetDollarHyphen(this->exec_opts));
    }
    else {
      val = this->mem->GetSpecialVar(op_id);
    }
  }
  return (Tuple2<runtime_asdl::value_t*, bool>(val, maybe_decay_array));
}

Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t> AbstractWordEvaluator::_ApplyTestOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op, bool quoted, List<runtime_asdl::part_value_t*>* part_vals) {
  bool undefined;
  List<runtime_asdl::part_value_t*>* no;
  runtime_asdl::value_t* UP_val;
  bool is_falsey;
  List<runtime_asdl::part_value_t*>* assign_part_vals;
  List<runtime_asdl::part_value_t*>* error_part_vals;

  undefined = val->tag_() == value_e::Undef;
  no = nullptr;
  if ((op->op_id == Id::VTest_ColonHyphen || op->op_id == Id::VTest_ColonEquals || op->op_id == Id::VTest_ColonQMark || op->op_id == Id::VTest_ColonPlus)) {
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Undef: {
        is_falsey = true;
      }
        break;
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        is_falsey = !val->s;
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        is_falsey = !val->strs;
      }
        break;
      default: {
        throw new NotImplementedError(val->tag_());
      }
    }
  }
  else {
    is_falsey = undefined;
  }
  if ((op->op_id == Id::VTest_ColonHyphen || op->op_id == Id::VTest_Hyphen)) {
    if (is_falsey) {
      this->_EvalWordToParts(op->arg_word, quoted, part_vals, true);
      return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(no, effect_e::SpliceParts));
    }
    else {
      return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(no, effect_e::NoOp));
    }
  }
  else {
    if ((op->op_id == Id::VTest_ColonPlus || op->op_id == Id::VTest_Plus)) {
      if (is_falsey) {
        return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(no, effect_e::NoOp));
      }
      else {
        this->_EvalWordToParts(op->arg_word, quoted, part_vals, true);
        return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(no, effect_e::SpliceParts));
      }
    }
    else {
      if ((op->op_id == Id::VTest_ColonEquals || op->op_id == Id::VTest_Equals)) {
        if (is_falsey) {
          assign_part_vals = new List<runtime_asdl::part_value_t*>();
          this->_EvalWordToParts(op->arg_word, quoted, assign_part_vals, true);
          part_vals->extend(assign_part_vals);
          return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(assign_part_vals, effect_e::SpliceAndAssign));
        }
        else {
          return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(no, effect_e::NoOp));
        }
      }
      else {
        if ((op->op_id == Id::VTest_ColonQMark || op->op_id == Id::VTest_QMark)) {
          if (is_falsey) {
            error_part_vals = new List<runtime_asdl::part_value_t*>();
            this->_EvalWordToParts(op->arg_word, quoted, error_part_vals, true);
            return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(error_part_vals, effect_e::Error));
          }
          else {
            return (Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t>(no, effect_e::NoOp));
          }
        }
        else {
          throw new NotImplementedError(op->op_id);
        }
      }
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_EvalIndirectArrayExpansion(Str* name, Str* index) {
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  int index_num;

  if (!match::IsValidVarName(name)) {
    return nullptr;
  }
  val = this->mem->GetVar(name);
  UP_val = val;
  switch (val->tag_()) {
    case value_e::Undef: {
      return new value::Undef();
    }
      break;
    case value_e::Str: {
      return nullptr;
    }
      break;
    case value_e::MaybeStrArray: {
      value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
      if ((index == str411 || index == str412)) {
        return new value::MaybeStrArray(val->strs);
      }
      try {
        index_num = to_int(index);
      }
      catch (ValueError*) {
        return nullptr;
      }
      try {
        return new value::Str(val->strs->index(index_num));
      }
      catch (IndexError*) {
        return new value::Undef();
      }
    }
      break;
    case value_e::AssocArray: {
      value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
      if ((index == str413 || index == str414)) {
        throw new NotImplementedError();
      }
      try {
        return new value::Str(val->d->index(index));
      }
      catch (KeyError*) {
        return new value::Undef();
      }
    }
      break;
    default: {
      throw new AssertionError();
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
            this->errfmt->PrettyPrintError(e, str415);
            return new value::Str(str416);
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
        throw new AssertionError();
      }
    }
    return new value::Str(str(length));
  }
  else {
    if (op_id == Id::VSub_Bang) {
      UP_val = val;
      switch (val->tag_()) {
        case value_e::Str: {
          value__Str* val = static_cast<value__Str*>(UP_val);
          if (match::IsValidVarName(val->s)) {
            return this->mem->GetVar(val->s);
          }
          try {
            return this->mem->GetArgNum(to_int(val->s));
          }
          catch (ValueError*) {
            ;  // pass
          }
          if ((val->s == str417 || val->s == str418)) {
            return new value::MaybeStrArray(this->mem->GetArgv());
          }
          i = val->s->find(str419);
          if (i >= 0 and str_equals(val->s->index(-1), str420)) {
            name = val->s->slice(0, i);
            index = val->s->slice(i + 1, -1);
            result = this->_EvalIndirectArrayExpansion(name, index);
            if (result != nullptr) {
              return result;
            }
          }
          e_die(fmt124(val->s), token);
        }
          break;
        case value_e::MaybeStrArray: {
          value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
          indices = new List<Str*>();
          i = 0;
          for (ListIter<Str*> it(val->strs); !it.Done(); it.Next(), ++i) {
            Str* s = it.Value();
            if (s != nullptr) {
              indices->append(str(i));
            }
          }
          return new value::MaybeStrArray(indices);
        }
          break;
        case value_e::AssocArray: {
          value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
          return new value::MaybeStrArray(val->d->keys());
        }
          break;
        default: {
          throw new NotImplementedError(val->tag_());
        }
      }
    }
    else {
      throw new AssertionError();
    }
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_ApplyUnarySuffixOp(runtime_asdl::value_t* val, syntax_asdl::suffix_op__Unary* op) {
  id_kind_asdl::Kind_t op_kind;
  runtime_asdl::value__Str* arg_val;
  runtime_asdl::value_t* UP_val;
  Str* s;
  runtime_asdl::value_t* new_val;
  List<Str*>* strs;

  op_kind = consts::GetKind(op->op_id);
  if (op_kind == Kind::VOp1) {
    arg_val = this->EvalWordToString(op->arg_word, quote_e::FnMatch);
    UP_val = val;
    switch (val->tag_()) {
      case value_e::Str: {
        value__Str* val = static_cast<value__Str*>(UP_val);
        s = string_ops::DoUnarySuffixOp(val->s, op, arg_val->s);
        new_val = new value::Str(s);
      }
        break;
      case value_e::MaybeStrArray: {
        value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
        strs = new List<Str*>();
        for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
          Str* s = it.Value();
          if (s != nullptr) {
            strs->append(string_ops::DoUnarySuffixOp(s, op, arg_val->s));
          }
        }
        new_val = new value::MaybeStrArray(strs);
      }
        break;
      case value_e::AssocArray: {
        value__AssocArray* val = static_cast<value__AssocArray*>(UP_val);
        strs = new List<Str*>();
        for (ListIter<Str*> it(val->d->values()); !it.Done(); it.Next()) {
          Str* s = it.Value();
          strs->append(string_ops::DoUnarySuffixOp(s, op, arg_val->s));
        }
        new_val = new value::MaybeStrArray(strs);
      }
        break;
      default: {
        throw new AssertionError();
      }
    }
  }
  else {
    throw new AssertionError();
  }
  return new_val;
}

void AbstractWordEvaluator::_EvalDoubleQuoted(List<syntax_asdl::word_part_t*>* parts, List<runtime_asdl::part_value_t*>* part_vals) {
  runtime_asdl::part_value__String* v;

  if (len(parts) == 0) {
    v = new part_value::String(str422, true, false);
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

  part_vals = new List<runtime_asdl::part_value_t*>();
  this->_EvalDoubleQuoted(dq_part->parts, part_vals);
  return this->_PartValsToString(part_vals, dq_part->left->span_id);
}

runtime_asdl::value__Str* AbstractWordEvaluator::_DecayArray(runtime_asdl::value__MaybeStrArray* val) {
  Str* sep;
  List<Str*>* tmp;

  sep = this->splitter->GetJoinChar();
  tmp = new List<Str*>();
  for (ListIter<Str*> it(val->strs); !it.Done(); it.Next()) {
    Str* s = it.Value();
    tmp->append(s);
  }
  return new value::Str(sep->join(tmp));
}

runtime_asdl::value__Str* AbstractWordEvaluator::_BashArrayCompat(runtime_asdl::value__MaybeStrArray* val) {
  Str* s;

  s = val->strs ? val->strs->index(0) : str423;
  return new value::Str(s);
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyStrOrError(runtime_asdl::value_t* val) {
  return _EmptyStrOrError(val, nullptr);
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyStrOrError(runtime_asdl::value_t* val, syntax_asdl::Token* token) {
  Str* name;

  if (val->tag_() == value_e::Undef) {
    if (this->exec_opts->nounset()) {
      if (token == nullptr) {
        e_die(str424);
      }
      else {
        name = token->val->startswith(str425) ? token->val->slice(1) : token->val;
        e_die(fmt125(name), token);
      }
    }
    else {
      return new value::Str(str427);
    }
  }
  else {
    return val;
  }
}

runtime_asdl::value_t* AbstractWordEvaluator::_EmptyMaybeStrArrayOrError(syntax_asdl::Token* token) {
  if (this->exec_opts->nounset()) {
    e_die(fmt126(token->val), token);
  }
  else {
    return new value::MaybeStrArray(new List<Str*>());
  }
}

void AbstractWordEvaluator::_EvalBracedVarSub(syntax_asdl::braced_var_sub* part, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  bool maybe_decay_array;
  bool bash_array_compat;
  Str* var_name;
  runtime_asdl::value_t* val;
  int var_num;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::bracket_op_t* UP_bracket_op;
  int op_id;
  runtime_asdl::value_t* UP_val;
  syntax_asdl::arith_expr_t* anode;
  int index;
  Str* s;
  Str* key;
  List<Str*>* names;
  syntax_asdl::suffix_op_t* op;
  syntax_asdl::suffix_op_t* UP_op;
  Str* prompt;
  Str* p;
  List<runtime_asdl::part_value_t*>* effect_part_vals;
  runtime_asdl::effect_t effect;
  Str* rhs_str;
  Str* error_str;
  runtime_asdl::value__Str* pat_val;
  runtime_asdl::value__Str* replace_val;
  Str* replace_str;
  Str* regex;
  List<Str*>* warnings;
  string_ops::GlobReplacer* replacer;
  List<Str*>* strs;
  int begin;
  bool has_length;
  int length;
  runtime_asdl::part_value_t* part_val;

  maybe_decay_array = false;
  bash_array_compat = false;
  var_name = nullptr;
  if (part->token->id == Id::VSub_Name) {
    var_name = part->token->val;
    val = this->mem->GetVar(var_name);
  }
  else {
    if (part->token->id == Id::VSub_Number) {
      var_num = to_int(part->token->val);
      val = this->_EvalVarNum(var_num);
    }
    else {
      Tuple2<runtime_asdl::value_t*, bool> tup0 = this->_EvalSpecialVar(part->token->id, quoted);
      val = tup0.at0();
      maybe_decay_array = tup0.at1();
    }
  }
  if (part->bracket_op) {
    bracket_op = part->bracket_op;
    UP_bracket_op = bracket_op;
    switch (bracket_op->tag_()) {
      case bracket_op_e::WholeArray: {
        bracket_op__WholeArray* bracket_op = static_cast<bracket_op__WholeArray*>(UP_bracket_op);
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
              e_die(fmt127(), part);
            }
              break;
            case value_e::MaybeStrArray: {
              value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
              val = new value::MaybeStrArray(val->strs);
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
                e_die(fmt128(), part);
              }
                break;
              case value_e::MaybeStrArray: {
                value__MaybeStrArray* val = static_cast<value__MaybeStrArray*>(UP_val);
                val = new value::MaybeStrArray(val->strs);
              }
                break;
            }
          }
          else {
            throw new AssertionError();
          }
        }
      }
        break;
      case bracket_op_e::ArrayIndex: {
        bracket_op__ArrayIndex* bracket_op = static_cast<bracket_op__ArrayIndex*>(UP_bracket_op);
        anode = bracket_op->expr;
        UP_val = val;
        switch (val->tag_()) {
          case value_e::Undef: {
            ;  // pass
          }
            break;
          case value_e::Str: {
            e_die(fmt129(part->token->val), part->token);
          }
            break;
          case value_e::MaybeStrArray: {
            value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(UP_val);
            index = this->arith_ev->EvalToInt(anode);
            try {
              s = array_val->strs->index(index);
            }
            catch (IndexError*) {
              s = nullptr;
            }
            if (s == nullptr) {
              val = new value::Undef();
            }
            else {
              val = new value::Str(s);
            }
          }
            break;
          case value_e::AssocArray: {
            value__AssocArray* assoc_val = static_cast<value__AssocArray*>(UP_val);
            key = this->arith_ev->EvalWordToString(anode);
            s = assoc_val->d->get(key);
            if (s == nullptr) {
              val = new value::Undef();
            }
            else {
              val = new value::Str(s);
            }
          }
            break;
          default: {
            throw new AssertionError();
          }
        }
      }
        break;
      default: {
        throw new AssertionError();
      }
    }
  }
  else {
    if (var_name and (val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray)) {
      if (str_equals(var_name, _STRING_AND_ARRAY)) {
        bash_array_compat = true;
      }
      else {
        e_die(fmt130(var_name), part);
      }
    }
  }
  if (part->prefix_op) {
    val = this->_EmptyStrOrError(val);
    if (part->suffix_op and part->suffix_op->tag_() == suffix_op_e::Nullary) {
      names = this->mem->VarNamesStartingWith(part->token->val);
      names->sort();
      val = new value::MaybeStrArray(names);
      suffix_op__Nullary* suffix_op = static_cast<suffix_op__Nullary*>(part->suffix_op);
      maybe_decay_array = !quoted and suffix_op->op_id == Id::VOp3_At;
      part->suffix_op = nullptr;
    }
    else {
      val = this->_ApplyPrefixOp(val, part->prefix_op, part->token);
    }
  }
  if (part->suffix_op) {
    op = part->suffix_op;
    UP_op = op;
    switch (op->tag_()) {
      case suffix_op_e::Nullary: {
        suffix_op__Nullary* op = static_cast<suffix_op__Nullary*>(UP_op);
        if (op->op_id == Id::VOp0_P) {
          prompt = this->prompt_ev->EvalPrompt(val);
          p = prompt->replace(str433, str434)->replace(str435, str436);
          val = new value::Str(p);
        }
        else {
          if (op->op_id == Id::VOp0_Q) {
            value__Str* val = static_cast<value__Str*>(val);
            val = new value::Str(string_ops::ShellQuote(val->s));
          }
          else {
            throw new NotImplementedError(op->op_id);
          }
        }
      }
        break;
      case suffix_op_e::Unary: {
        suffix_op__Unary* op = static_cast<suffix_op__Unary*>(UP_op);
        if (consts::GetKind(op->op_id) == Kind::VTest) {
          Tuple2<List<runtime_asdl::part_value_t*>*, runtime_asdl::effect_t> tup1 = this->_ApplyTestOp(val, op, quoted, part_vals);
          effect_part_vals = tup1.at0();
          effect = tup1.at1();
          if (effect == effect_e::SpliceParts) {
            return ;
          }
          else {
            if (effect == effect_e::SpliceAndAssign) {
              if (var_name == nullptr) {
                e_die(str437);
              }
              else {
                rhs_str = _DecayPartValuesToString(effect_part_vals, this->splitter->GetJoinChar());
                state::SetLocalString(this->mem, var_name, rhs_str);
              }
              return ;
            }
            else {
              if (effect == effect_e::Error) {
                error_str = _DecayPartValuesToString(effect_part_vals, this->splitter->GetJoinChar());
                e_die(fmt131(error_str), part->token);
              }
              else {
                ;  // pass
              }
            }
          }
        }
        else {
          val = this->_EmptyStrOrError(val);
          val = this->_ApplyUnarySuffixOp(val, op);
        }
      }
        break;
      case suffix_op_e::PatSub: {
        suffix_op__PatSub* op = static_cast<suffix_op__PatSub*>(UP_op);
        val = this->_EmptyStrOrError(val);
        pat_val = this->EvalWordToString(op->pat, quote_e::FnMatch);
        if (op->replace) {
          replace_val = this->EvalWordToString(op->replace);
          replace_str = replace_val->s;
        }
        else {
          replace_str = str439;
        }
        Tuple2<Str*, List<Str*>*> tup2 = glob_::GlobToERE(pat_val->s);
        regex = tup2.at0();
        warnings = tup2.at1();
        if (len(warnings)) {
          ;  // pass
        }
        replacer = new string_ops::GlobReplacer(regex, replace_str, op->spids->index(0));
        switch (val->tag_()) {
          case value_e::Str: {
            value__Str* str_val = static_cast<value__Str*>(val);
            s = replacer->Replace(str_val->s, op);
            val = new value::Str(s);
          }
            break;
          case value_e::MaybeStrArray: {
            value__MaybeStrArray* array_val = static_cast<value__MaybeStrArray*>(val);
            strs = new List<Str*>();
            for (ListIter<Str*> it(array_val->strs); !it.Done(); it.Next()) {
              Str* s = it.Value();
              if (s != nullptr) {
                strs->append(replacer->Replace(s, op));
              }
            }
            val = new value::MaybeStrArray(strs);
          }
            break;
          case value_e::AssocArray: {
            value__AssocArray* assoc_val = static_cast<value__AssocArray*>(val);
            strs = new List<Str*>();
            for (ListIter<Str*> it(assoc_val->d->values()); !it.Done(); it.Next()) {
              Str* s = it.Value();
              strs->append(replacer->Replace(s, op));
            }
            val = new value::MaybeStrArray(strs);
          }
            break;
          default: {
            throw new AssertionError();
          }
        }
      }
        break;
      case suffix_op_e::Slice: {
        suffix_op__Slice* op = static_cast<suffix_op__Slice*>(UP_op);
        val = this->_EmptyStrOrError(val);
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
          val = _PerformSlice(val, begin, length, has_length, part);
        }
        catch (error::Strict* e) {
          if (this->exec_opts->strict_word_eval()) {
            throw ;
          }
          else {
            this->errfmt->PrettyPrintError(e, str440);
            switch (val->tag_()) {
              case value_e::Str: {
                val = new value::Str(str441);
              }
                break;
              case value_e::MaybeStrArray: {
                val = new value::MaybeStrArray(new List<Str*>());
              }
                break;
              default: {
                throw new NotImplementedError();
              }
            }
          }
        }
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
      if (bash_array_compat) {
        val = this->_BashArrayCompat(array_val);
      }
      else {
        val = array_val;
      }
    }
  }
  val = this->_EmptyStrOrError(val);
  part_val = _ValueToPartValue(val, quoted);
  part_vals->append(part_val);
}

Str* AbstractWordEvaluator::_PartValsToString(List<runtime_asdl::part_value_t*>* part_vals, int span_id) {
  List<Str*>* strs;
  runtime_asdl::part_value_t* UP_part_val;
  Str* s;
  List<Str*>* tmp;

  strs = new List<Str*>();
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
          e_die(fmt132(), span_id);
        }
        else {
          tmp = new List<Str*>();
          for (ListIter<Str*> it(part_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            tmp->append(s);
          }
          s = str443->join(tmp);
        }
      }
        break;
    }
    strs->append(s);
  }
  return str444->join(strs);
}

Str* AbstractWordEvaluator::EvalBracedVarSubToString(syntax_asdl::braced_var_sub* part) {
  List<runtime_asdl::part_value_t*>* part_vals;

  part_vals = new List<runtime_asdl::part_value_t*>();
  this->_EvalBracedVarSub(part, part_vals, false);
  return this->_PartValsToString(part_vals, part->spids->index(0));
}

void AbstractWordEvaluator::_EvalSimpleVarSub(syntax_asdl::Token* token, List<runtime_asdl::part_value_t*>* part_vals, bool quoted) {
  bool maybe_decay_array;
  bool bash_array_compat;
  Str* var_name;
  runtime_asdl::value_t* val;
  int var_num;
  runtime_asdl::value_t* UP_val;
  runtime_asdl::part_value_t* v;

  maybe_decay_array = false;
  bash_array_compat = false;
  if (token->id == Id::VSub_DollarName) {
    var_name = token->val->slice(1);
    val = this->mem->GetVar(var_name);
    if ((val->tag_() == value_e::MaybeStrArray || val->tag_() == value_e::AssocArray)) {
      if (str_equals(var_name, _STRING_AND_ARRAY)) {
        bash_array_compat = true;
      }
      else {
        e_die(fmt133(var_name), token);
      }
    }
  }
  else {
    if (token->id == Id::VSub_Number) {
      var_num = to_int(token->val->slice(1));
      val = this->_EvalVarNum(var_num);
    }
    else {
      Tuple2<runtime_asdl::value_t*, bool> tup3 = this->_EvalSpecialVar(token->id, quoted);
      val = tup3.at0();
      maybe_decay_array = tup3.at1();
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
      if (bash_array_compat) {
        val = this->_BashArrayCompat(array_val);
      }
      else {
        val = array_val;
      }
    }
  }
  v = _ValueToPartValue(val, quoted);
  part_vals->append(v);
}

Str* AbstractWordEvaluator::EvalSimpleVarSubToString(syntax_asdl::Token* tok) {
  List<runtime_asdl::part_value_t*>* part_vals;

  part_vals = new List<runtime_asdl::part_value_t*>();
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
  int i;
  Str* var_name;
  runtime_asdl::value_t* val;
  runtime_asdl::value_t* UP_val;
  List<Str*>* items;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      e_die(fmt134(), part);
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      word_part__AssocArrayLiteral* part = static_cast<word_part__AssocArrayLiteral*>(UP_part);
      e_die(fmt135(), part);
    }
      break;
    case word_part_e::Literal: {
      Token* part = static_cast<Token*>(UP_part);
      v = new part_value::String(part->val, quoted, is_subst);
      part_vals->append(v);
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      tval = part->token->val;
      s = tval->index(1);
      v = new part_value::String(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      s = EvalSingleQuoted(part);
      v = new part_value::String(s, true, false);
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
      if ((id_ == Id::Left_DollarParen || id_ == Id::Left_Backtick)) {
        sv = this->_EvalCommandSub(part->command_list, quoted);
      }
      else {
        if ((id_ == Id::Left_ProcSubIn || id_ == Id::Left_ProcSubOut)) {
          sv = this->_EvalProcessSub(part->command_list, id_);
        }
        else {
          throw new AssertionError();
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
      s = this->_EvalTildeSub(part->token);
      v = new part_value::String(s, true, false);
      part_vals->append(v);
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      num = this->arith_ev->EvalToInt(part->anode);
      v = new part_value::String(str(num), quoted, !quoted);
      part_vals->append(v);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      part_vals->append(new part_value::String(part->op->val, false, false));
      i = 0;
      for (ListIter<syntax_asdl::word_t*> it(part->arms); !it.Done(); it.Next(), ++i) {
        syntax_asdl::word_t* w = it.Value();
        if (i != 0) {
          part_vals->append(new part_value::String(str448, false, false));
        }
        this->_EvalWordToParts(w, false, part_vals);
      }
      part_vals->append(new part_value::String(str449, false, false));
    }
      break;
    case word_part_e::Splice: {
      word_part__Splice* part = static_cast<word_part__Splice*>(UP_part);
      var_name = part->name->val->slice(1);
      val = this->mem->GetVar(var_name);
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
            throw new AssertionError();
          }
          // endif MYCPP
        }
          break;
        default: {
          e_die(fmt136(var_name), part);
        }
      }
      part_vals->append(new part_value::Array(items));
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
      throw new AssertionError();
    }
  }
}

void AbstractWordEvaluator::_EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals) {
  _EvalWordToParts(w, quoted, part_vals, false);
}

void AbstractWordEvaluator::_EvalWordToParts(syntax_asdl::word_t* w, bool quoted, List<runtime_asdl::part_value_t*>* part_vals, bool is_subst) {
  syntax_asdl::word_t* UP_w;

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
      part_vals->append(new part_value::String(str451, quoted, !quoted));
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
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

  if (UP_w->tag_() == word_e::Empty) {
    return new value::Str(str452);
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  part_vals = new List<runtime_asdl::part_value_t*>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* p = it.Value();
    this->_EvalWordPart(p, part_vals, false);
  }
  strs = new List<Str*>();
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
          e_die(fmt137(), w);
        }
        else {
          tmp = new List<Str*>();
          for (ListIter<Str*> it(part_val->strs); !it.Done(); it.Next()) {
            Str* s = it.Value();
            tmp->append(s);
          }
          s = str454->join(tmp);
        }
      }
        break;
    }
    strs->append(s);
  }
  return new value::Str(str455->join(strs));
}

runtime_asdl::value__Str* AbstractWordEvaluator::EvalForPlugin(syntax_asdl::compound_word* w) {
  runtime_asdl::value__Str* val;

  this->mem->PushStatusFrame();
  try {
    try {
      val = this->EvalWordToString(w);
    }
    catch (error::FatalRuntime* e) {
      val = new value::Str(fmt138(e->UserErrorString()));
    }
    catch (OSError* e) {
      val = new value::Str(fmt139(pyutil::strerror_OS(e)));
    }
    catch (IOError* e) {
      val = new value::Str(fmt140(pyutil::strerror_IO(e)));
    }
    catch (KeyboardInterrupt*) {
      val = new value::Str(str459);
    }
  }
  catch (std::exception) { }  return val;
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

  if (UP_w->tag_() == word_e::Empty) {
    return new value::Str(str460);
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
      return new value::MaybeStrArray(strs);
    }
    if (tag == word_part_e::AssocArrayLiteral) {
      word_part__AssocArrayLiteral* part0 = static_cast<word_part__AssocArrayLiteral*>(UP_part0);
      d = new Dict<Str*, Str*>();
      n = len(part0->pairs);
      i = 0;
      while (i < n) {
        k = this->EvalWordToString(part0->pairs->index(i));
        v = this->EvalWordToString(part0->pairs->index(i + 1));
d->set(k->s, v->s);
        i += 2;
      }
      return new value::AssocArray(d);
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

  all_empty = true;
  all_quoted = true;
  any_quoted = false;
  for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
    Tuple3<Str*, bool, bool>* tup4 = it.Value();
    s = tup4->at0();
    quoted = tup4->at1();
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
  if (all_empty and !any_quoted) {
    return ;
  }
  if (all_quoted) {
    tmp = new List<Str*>();
    for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
      Tuple3<Str*, bool, bool>* tup5 = it.Value();
      s = tup5->at0();
      tmp->append(s);
    }
    a = str461->join(tmp);
    argv->append(a);
    return ;
  }
  will_glob = !this->exec_opts->noglob();
  frags = new List<Str*>();
  for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
    Tuple3<Str*, bool, bool>* tup6 = it.Value();
    frag = tup6->at0();
    quoted = tup6->at1();
    do_split = tup6->at2();
    if (will_glob) {
      if (quoted) {
        frag = glob_::GlobEscape(frag);
      }
      else {
        frag = _BackslashEscape(frag);
      }
    }
    if (do_split) {
      frag = _BackslashEscape(frag);
    }
    else {
      frag = this->splitter->Escape(frag);
    }
    frags->append(frag);
  }
  flat = str462->join(frags);
  args = this->splitter->SplitForWordEval(flat);
  if (!args and any_quoted) {
    argv->append(str463);
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

  part_vals = new List<runtime_asdl::part_value_t*>();
  this->_EvalWordToParts(w, false, part_vals);
  frames = _MakeWordFrames(part_vals);
  argv = new List<Str*>();
  for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
    List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
    if (len(frame)) {
      tmp = new List<Str*>();
      for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
        Tuple3<Str*, bool, bool>* tup7 = it.Value();
        s = tup7->at0();
        tmp->append(s);
      }
      argv->append(str464->join(tmp));
    }
  }
  return argv;
}

runtime_asdl::cmd_value__Assign* AbstractWordEvaluator::_EvalAssignBuiltin(int builtin_id, Str* arg0, List<syntax_asdl::compound_word*>* words) {
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
  runtime_asdl::lvalue__Named* left;
  syntax_asdl::word_t* rhs_word;
  syntax_asdl::compound_word* tmp;
  runtime_asdl::value_t* right;
  runtime_asdl::assign_arg* arg2;
  List<Str*>* argv;

  started_pairs = false;
  flags = new List<Str*>({arg0});
  flag_spids = new List<int>({word_::LeftMostSpanForWord(words->index(0))});
  assign_args = new List<runtime_asdl::assign_arg*>();
  n = len(words);
  for (int i = 1; i < n; ++i) {
    w = words->index(i);
    word_spid = word_::LeftMostSpanForWord(w);
    if (word_::IsVarLike(w)) {
      started_pairs = true;
    }
    if (started_pairs) {
      Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> tup8 = word_::DetectShAssignment(w);
      left_token = tup8.at0();
      close_token = tup8.at1();
      part_offset = tup8.at2();
      if (left_token) {
        if (left_token->id != Id::Lit_VarLike) {
          e_die(fmt141(), w);
        }
        tok_val = left_token->val;
        if (str_equals(tok_val->index(-2), str466)) {
          e_die(fmt142(), w);
        }
        left = new lvalue::Named(tok_val->slice(0, -1));
        if (part_offset == len(w->parts)) {
          rhs_word = new word::Empty();
        }
        else {
          rhs_word = new compound_word(w->parts->slice(part_offset));
          tmp = word_::TildeDetect(rhs_word);
          if (tmp) {
            rhs_word = tmp;
          }
        }
        right = this->EvalRhsWord(rhs_word);
        arg2 = new assign_arg(left, right, word_spid);
        assign_args->append(arg2);
      }
      else {
        argv = this->_EvalWordToArgv(w);
        for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
          Str* arg = it.Value();
          Tuple2<runtime_asdl::lvalue__Named*, runtime_asdl::value__Str*> tup9 = _SplitAssignArg(arg, w);
          left = tup9.at0();
          right = tup9.at1();
          arg2 = new assign_arg(left, right, word_spid);
          assign_args->append(arg2);
        }
      }
    }
    else {
      argv = this->_EvalWordToArgv(w);
      for (ListIter<Str*> it(argv); !it.Done(); it.Next()) {
        Str* arg = it.Value();
        if (arg->startswith(str468) or arg->startswith(str469)) {
          flags->append(arg);
          flag_spids->append(word_spid);
        }
        else {
          Tuple2<runtime_asdl::lvalue__Named*, runtime_asdl::value__Str*> tup10 = _SplitAssignArg(arg, w);
          left = tup10.at0();
          right = tup10.at1();
          arg2 = new assign_arg(left, right, word_spid);
          assign_args->append(arg2);
          started_pairs = true;
        }
      }
    }
  }
  return new cmd_value::Assign(builtin_id, flags, flag_spids, assign_args);
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

  strs = new List<Str*>();
  spids = new List<int>();
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
    part_vals = new List<runtime_asdl::part_value_t*>();
    this->_EvalWordToParts(w, false, part_vals);
    frames = _MakeWordFrames(part_vals);
    for (ListIter<List<Tuple3<Str*, bool, bool>*>*> it(frames); !it.Done(); it.Next()) {
      List<Tuple3<Str*, bool, bool>*>* frame = it.Value();
      if (len(frame)) {
        tmp = new List<Str*>();
        for (ListIter<Tuple3<Str*, bool, bool>*> it(frame); !it.Done(); it.Next()) {
          Tuple3<Str*, bool, bool>* tup11 = it.Value();
          s = tup11->at0();
          tmp->append(s);
        }
        strs->append(str470->join(tmp));
        spids->append(word_spid);
      }
    }
  }
  return new cmd_value::Argv(strs, spids, nullptr);
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

  if (this->exec_opts->simple_word_eval()) {
    return this->StaticEvalWordSequence2(words, allow_assign);
  }
  strs = new List<Str*>();
  spids = new List<int>();
  n = 0;
  i = 0;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next(), ++i) {
    syntax_asdl::compound_word* w = it.Value();
    part_vals = new List<runtime_asdl::part_value_t*>();
    this->_EvalWordToParts(w, false, part_vals);
    if (allow_assign and i == 0 and len(part_vals) == 1) {
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
    for (int _ = 0; _ < n_next - n; ++_) {
      spids->append(spid);
    }
    n = n_next;
  }
  return new cmd_value::Argv(strs, spids, nullptr);
}

List<Str*>* AbstractWordEvaluator::EvalWordSequence(List<syntax_asdl::compound_word*>* words) {
  runtime_asdl::cmd_value_t* UP_cmd_val;

  UP_cmd_val = this->EvalWordSequence2(words);
  cmd_value__Argv* cmd_val = static_cast<cmd_value__Argv*>(UP_cmd_val);
  return cmd_val->argv;
}

Tuple2<runtime_asdl::lvalue__Named*, runtime_asdl::value__Str*> _SplitAssignArg(Str* arg, syntax_asdl::compound_word* w) {
  int i;
  Str* prefix;
  runtime_asdl::value__Str* no_str;

  i = arg->find(str471);
  prefix = arg->slice(0, i);
  if (i != -1 and match::IsValidVarName(prefix)) {
    return (Tuple2<runtime_asdl::lvalue__Named*, runtime_asdl::value__Str*>(new lvalue::Named(prefix), new value::Str(arg->slice(i + 1))));
  }
  else {
    if (match::IsValidVarName(arg)) {
      no_str = nullptr;
      return (Tuple2<runtime_asdl::lvalue__Named*, runtime_asdl::value__Str*>(new lvalue::Named(arg), no_str));
    }
    else {
      e_die(fmt143(arg), w);
    }
  }
}

NormalWordEvaluator::NormalWordEvaluator(state::Mem* mem, optview::Exec* exec_opts, split::SplitContext* splitter, ui::ErrorFormatter* errfmt) : AbstractWordEvaluator(mem, exec_opts, splitter, errfmt) {
  this->ex = nullptr;
}

void NormalWordEvaluator::CheckCircularDeps() {
}

runtime_asdl::part_value__String* NormalWordEvaluator::_EvalCommandSub(syntax_asdl::command_t* node, bool quoted) {
  Str* stdout;

  stdout = this->ex->RunCommandSub(node);
  return new part_value::String(stdout, quoted, !quoted);
}

runtime_asdl::part_value__String* NormalWordEvaluator::_EvalProcessSub(syntax_asdl::command_t* node, int id_) {
  Str* dev_path;

  dev_path = this->ex->RunProcessSub(node, id_);
  return new part_value::String(dev_path, true, false);
}

void CompletionWordEvaluator::CheckCircularDeps() {
}

runtime_asdl::part_value__String* CompletionWordEvaluator::_EvalCommandSub(syntax_asdl::command_t* node, bool quoted) {
  return new part_value::String(str473, quoted, !quoted);
}

runtime_asdl::part_value__String* CompletionWordEvaluator::_EvalProcessSub(syntax_asdl::command_t* node, int id_) {
  return new part_value::String(str474, true, false);
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
using syntax_asdl::command__Func;
using syntax_asdl::expr_t;
namespace source = syntax_asdl::source;
using syntax_asdl::arg_list;
List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS = new List<id_kind_asdl::Kind_t>({Kind::Eof, Kind::WS, Kind::Op, Kind::Right});

syntax_asdl::word_t* WordEmitter::ReadWord(types_asdl::lex_mode_t lex_mode) {
  throw new NotImplementedError();
}

WordParser::WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader) {
  this->parse_ctx = parse_ctx;
  this->arena = parse_ctx->arena;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->parse_opts = parse_ctx->parse_opts;
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
  return this->_ReadVarOpArg3(arg_lex_mode, Id::Undefined_Tok, true);
}

syntax_asdl::word_t* WordParser::_ReadVarOpArg3(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;

  this->_Next(arg_lex_mode);
  this->_Peek();
  w = this->_ReadCompoundWord3(arg_lex_mode, eof_type, empty_ok);
  if (len(w->parts) == 0 and arg_lex_mode == lex_mode_e::VSub_ArgDQ and empty_ok) {
    return new word::Empty();
  }
  return w;
}

syntax_asdl::suffix_op__Slice* WordParser::_ReadSliceVarOp() {
  syntax_asdl::arith_expr_t* begin;
  syntax_asdl::arith_expr_t* no_length;
  syntax_asdl::arith_expr_t* length;

  this->_Next(lex_mode_e::Arith);
  this->_Peek();
  if (this->token_type == Id::Arith_Colon) {
    begin = nullptr;
  }
  else {
    begin = this->_ReadArithExpr();
  }
  if (this->token_type == Id::Arith_RBrace) {
    no_length = nullptr;
    return new suffix_op::Slice(begin, no_length);
  }
  if (this->token_type == Id::Arith_Colon) {
    this->_Next(lex_mode_e::Arith);
    length = this->_ReadArithExpr();
    return new suffix_op::Slice(begin, length);
  }
  p_die(fmt144(), this->cur_token);
}

syntax_asdl::suffix_op__PatSub* WordParser::_ReadPatSubVarOp(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* UP_pat;
  bool ok;
  Str* s;
  bool quoted;
  int replace_mode;
  syntax_asdl::word_part_t* UP_first_part;
  int lit_id;
  syntax_asdl::word_t* replace;

  UP_pat = this->_ReadVarOpArg3(lex_mode, Id::Lit_Slash, false);
  compound_word* pat = static_cast<compound_word*>(UP_pat);
  if (len(pat->parts) == 1) {
    Tuple3<bool, Str*, bool> tup0 = word_::StaticEval(pat);
    ok = tup0.at0();
    s = tup0.at1();
    quoted = tup0.at2();
    if (ok and str_equals(s, str476) and !quoted) {
      this->_Next(lex_mode);
      this->_Peek();
      pat->parts->append(this->cur_token);
    }
  }
  if (len(pat->parts) == 0) {
    p_die(fmt145(), this->cur_token);
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
  if (this->token_type == Id::Right_DollarBrace) {
    return new suffix_op::PatSub(pat, nullptr, replace_mode);
  }
  if (this->token_type == Id::Lit_Slash) {
    replace = this->_ReadVarOpArg(lex_mode);
    this->_Peek();
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt146(ui::PrettyId(this->token_type)), this->cur_token);
    }
    return new suffix_op::PatSub(pat, replace, replace_mode);
  }
  p_die(fmt147(), this->cur_token);
}

syntax_asdl::bracket_op_t* WordParser::_ReadSubscript() {
  int next_id;
  syntax_asdl::bracket_op_t* op;
  syntax_asdl::arith_expr_t* anode;

  next_id = this->lexer->LookAhead(lex_mode_e::Arith);
  if ((next_id == Id::Lit_At || next_id == Id::Arith_Star)) {
    op = new bracket_op::WholeArray(next_id);
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
  }
  else {
    this->_Next(lex_mode_e::Arith);
    anode = this->_ReadArithExpr();
    op = new bracket_op::ArrayIndex(anode);
  }
  if (this->token_type != Id::Arith_RBracket) {
    p_die(fmt148(), this->cur_token);
  }
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  return op;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarOf() {
  syntax_asdl::Token* name_token;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::braced_var_sub* part;

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
  part = new braced_var_sub();
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
      p_die(fmt149(), this->cur_token);
    }
    part->suffix_op = new suffix_op::Unary(op_id, arg_word);
  }
  else {
    if (op_kind == Kind::VOp0) {
      op_id = this->token_type;
      part->suffix_op = new suffix_op::Nullary(op_id);
      this->_Next(lex_mode_e::VSub_2);
      this->_Peek();
    }
    else {
      if (op_kind == Kind::VOp1) {
        op_id = this->token_type;
        arg_word = this->_ReadVarOpArg(arg_lex_mode);
        if (this->token_type != Id::Right_DollarBrace) {
          p_die(fmt150(), this->cur_token);
        }
        part->suffix_op = new suffix_op::Unary(op_id, arg_word);
      }
      else {
        if (op_kind == Kind::VOp2) {
          if (this->token_type == Id::VOp2_Slash) {
            op_spid = this->cur_token->span_id;
            patsub_op = this->_ReadPatSubVarOp(arg_lex_mode);
            patsub_op->spids->append(op_spid);
            temp = static_cast<suffix_op_t*>(patsub_op);
            part->suffix_op = temp;
          }
          else {
            if (this->token_type == Id::VOp2_Colon) {
              part->suffix_op = this->_ReadSliceVarOp();
              if (this->token_type != Id::Arith_RBrace) {
                p_die(fmt151(), this->cur_token);
              }
            }
            else {
              p_die(fmt152(str485), this->cur_token);
            }
          }
        }
        else {
          if (op_kind == Kind::VOp3) {
            if (allow_query) {
              op_id = this->token_type;
              part->suffix_op = new suffix_op::Nullary(op_id);
              this->_Next(lex_mode_e::VSub_2);
              this->_Peek();
            }
            else {
              p_die(fmt153(str487), this->cur_token);
            }
          }
        }
      }
    }
  }
  if ((this->token_type != Id::Right_DollarBrace && this->token_type != Id::Arith_RBrace)) {
    p_die(fmt154(), this->cur_token);
  }
  return part;
}

Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*> WordParser::ReadBracedVarSub(syntax_asdl::Token* left_token) {
  syntax_asdl::braced_var_sub* part;
  syntax_asdl::Token* last_token;

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
        p_die(fmt155(), this->cur_token);
      }
      part->prefix_op = new speck(ty, this->cur_token->span_id);
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
        part->prefix_op = new speck(ty, this->cur_token->span_id);
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
        p_die(fmt156(), this->cur_token);
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

  left_token = this->cur_token;
  tokens = new List<syntax_asdl::Token*>();
  this->ReadSingleQuoted(lex_mode, left_token, tokens, false);
  node = new single_quoted(left_token, tokens);
  node->spids->append(left_token->span_id);
  node->spids->append(this->cur_token->span_id);
  return node;
}

syntax_asdl::Token* WordParser::ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool no_backslashes) {
  bool done;
  syntax_asdl::Token* tok;

  done = false;
  while (!done) {
    this->_Next(lex_mode);
    this->_Peek();
    if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Char)) {
      tok = this->cur_token;
      if (no_backslashes and str_contains(tok->val, str491)) {
        p_die(fmt157(), tok);
      }
      tokens->append(tok);
    }
    else {
      if (this->token_kind == Kind::Eof) {
        p_die(fmt158(), left_token);
      }
      else {
        if (this->token_kind == Kind::Right) {
          done = true;
        }
        else {
          throw new AssertionError();
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
  throw new AssertionError();
}

syntax_asdl::word_part_t* WordParser::_ReadLeftParts() {
  if (this->token_type == Id::Left_DoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_DollarDoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_SingleQuoteRaw) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_Raw);
  }
  if (this->token_type == Id::Left_SingleQuoteC) {
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
  throw new AssertionError();
}

syntax_asdl::word_part__ExtGlob* WordParser::_ReadExtGlob() {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::word_t*>* arms;
  List<int>* spids;
  bool read_word;
  syntax_asdl::compound_word* w;
  syntax_asdl::word_part__ExtGlob* part;

  left_token = this->cur_token;
  arms = new List<syntax_asdl::word_t*>();
  spids = new List<int>();
  spids->append(left_token->span_id);
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ExtGlob);
  this->_Next(lex_mode_e::ExtGlob);
  read_word = false;
  while (true) {
    this->_Peek();
    if (this->token_type == Id::Right_ExtGlob) {
      if (!read_word) {
        arms->append(new compound_word());
      }
      spids->append(this->cur_token->span_id);
      break;
    }
    else {
      if (this->token_type == Id::Op_Pipe) {
        if (!read_word) {
          arms->append(new compound_word());
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
            p_die(fmt159(), left_token);
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
  part = new word_part::ExtGlob(left_token, arms);
  part->spids->extend(spids);
  return part;
}

void WordParser::_ReadLikeDQ(syntax_asdl::Token* left_dq_token, List<syntax_asdl::word_part_t*>* out_parts) {
  bool done;
  syntax_asdl::word_part_t* part;

  done = false;
  while (!done) {
    this->_Next(lex_mode_e::DQ);
    this->_Peek();
    if (this->token_kind == Kind::Lit) {
      if (this->token_type == Id::Lit_EscapedChar) {
        part = new word_part::EscapedLiteral(this->cur_token);
      }
      else {
        part = this->cur_token;
      }
      out_parts->append(part);
    }
    else {
      if (this->token_kind == Kind::Left) {
        part = this->_ReadDoubleQuotedLeftParts();
        out_parts->append(part);
      }
      else {
        if (this->token_kind == Kind::VSub) {
          part = new simple_var_sub(this->cur_token);
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
                p_die(fmt160(), left_dq_token);
              }
              else {
                done = true;
              }
            }
            else {
              throw new AssertionError();
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

  left_dq_token = this->cur_token;
  parts = new List<syntax_asdl::word_part_t*>();
  this->_ReadLikeDQ(left_dq_token, parts);
  dq_part = new double_quoted(left_dq_token, parts);
  dq_part->spids->append(left_dq_token->span_id);
  dq_part->spids->append(this->cur_token->span_id);
  return dq_part;
}

syntax_asdl::Token* WordParser::ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(left_token, parts);
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

  left_token = this->cur_token;
  left_spid = left_token->span_id;
  if ((left_id == Id::Left_DollarParen || left_id == Id::Left_ProcSubIn || left_id == Id::Left_ProcSubOut)) {
    this->_Next(lex_mode_e::ShCommand);
    right_id = Id::Eof_RParen;
    this->lexer->PushHint(Id::Op_RParen, right_id);
    c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
    node = c_parser->ParseCommandSub();
    right_spid = c_parser->w_parser->cur_token->span_id;
  }
  else {
    if (left_id == Id::Left_Backtick and this->parse_ctx->one_pass_parse) {
      right_id = Id::Eof_Backtick;
      this->lexer->PushHint(Id::Left_Backtick, right_id);
      c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
      node = c_parser->ParseCommandSub();
      right_spid = c_parser->w_parser->cur_token->span_id;
    }
    else {
      if (left_id == Id::Left_Backtick) {
        this->_Next(lex_mode_e::Backtick);
        parts = new List<Str*>();
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
                  p_die(fmt161(), left_token);
                }
                else {
                  throw new AssertionError();
                }
              }
            }
          }
          this->_Next(lex_mode_e::Backtick);
        }
        right_spid = this->cur_token->span_id;
        code_str = str497->join(parts);
        arena = this->parse_ctx->arena;
        line_reader = reader::StringLineReader(code_str, arena);
        c_parser = this->parse_ctx->MakeOshParser(line_reader);
        arena->PushSource(new source::Backticks(left_spid, right_spid));
        try {
          node = c_parser->ParseCommandSub();
        }
        catch (std::exception) { }      }
      else {
        throw new AssertionError();
      }
    }
  }
  cs_part = new command_sub(left_token, node);
  cs_part->spids->append(left_spid);
  cs_part->spids->append(right_spid);
  return cs_part;
}

syntax_asdl::word_part__ExprSub* WordParser::_ReadExprSub(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  syntax_asdl::expr_t* enode;
  syntax_asdl::word_part__ExprSub* node;

  left_token = this->cur_token;
  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*> tup1 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr_sub);
  enode = tup1.at0();
  this->_Next(lex_mode);
  node = new word_part::ExprSub(left_token, enode);
  return node;
}

syntax_asdl::command_t* WordParser::ParseVarDecl(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__VarDecl* enode;
  syntax_asdl::Token* last_token;

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

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Lit_Chars) {
    p_die(fmt162(ui::PrettyToken(this->cur_token, this->arena)), this->cur_token);
  }
  node->name = this->cur_token;
  last_token = this->parse_ctx->ParseProc(this->lexer, node);
  if (last_token->id == Id::Op_LBrace) {
    last_token->id = Id::Lit_LBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
}

void WordParser::ParseFunc(syntax_asdl::command__Func* node) {
  syntax_asdl::Token* last_token;

  last_token = this->parse_ctx->ParseFunc(this->lexer, node);
  if (last_token->id == Id::Op_LBrace) {
    last_token->id = Id::Lit_LBrace;
  }
  this->buffered_word = last_token;
}

syntax_asdl::arith_expr_t* WordParser::_ReadArithExpr() {
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* anode;

  a_parser = new tdop::TdopParser(arith_parse::Spec(), this);
  anode = a_parser->Parse();
  return anode;
}

syntax_asdl::word_part__ArithSub* WordParser::_ReadArithSub() {
  int left_span_id;
  syntax_asdl::arith_expr_t* anode;
  int right_span_id;
  syntax_asdl::word_part__ArithSub* node;

  left_span_id = this->cur_token->span_id;
  this->lexer->PushHint(Id::Op_RParen, Id::Right_DollarDParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt163(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Right_DollarDParen) {
    p_die(fmt164(), this->cur_token);
  }
  right_span_id = this->cur_token->span_id;
  node = new word_part::ArithSub(anode);
  node->spids->append(left_span_id);
  node->spids->append(right_span_id);
  return node;
}

Tuple2<syntax_asdl::arith_expr_t*, int> WordParser::ReadDParen() {
  syntax_asdl::arith_expr_t* anode;

  this->lexer->PushHint(Id::Op_RParen, Id::Op_DRightParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt165(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Op_DRightParen) {
    p_die(fmt166(), this->cur_token);
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
  syntax_asdl::arith_expr_t* init_node;
  syntax_asdl::arith_expr_t* cond_node;
  syntax_asdl::arith_expr_t* update_node;
  syntax_asdl::command__ForExpr* node;

  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type == Id::Arith_Semi) {
    init_node = nullptr;
  }
  else {
    init_node = this->_ReadArithExpr();
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type == Id::Arith_Semi) {
    cond_node = nullptr;
  }
  else {
    cond_node = this->_ReadArithExpr();
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type == Id::Arith_RParen) {
    update_node = nullptr;
  }
  else {
    update_node = this->_ReadArithExpr();
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt167(), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  node = new command::ForExpr();
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

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->cur_token->id != Id::Op_LParen) {
    p_die(fmt168(), this->cur_token);
  }
  left_token = this->cur_token;
  paren_spid = this->cur_token->span_id;
  w_parser = this->parse_ctx->MakeWordParser(this->lexer, this->line_reader);
  words = new List<syntax_asdl::compound_word*>();
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
          p_die(fmt169(), w);
        }
      }
    }
    words->append(static_cast<compound_word*>(w));
  }
  if (len(words) == 0) {
    no_words = new List<syntax_asdl::word_t*>();
    node = new sh_array_literal(left_token, no_words);
    node->spids->append(left_token->span_id);
    return node;
  }
  pair = word_::DetectAssocPair(words->index(0));
  if (pair) {
    Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup6 = pair;
    k = tup6->at0();
    v = tup6->at1();
    pairs = new List<syntax_asdl::compound_word*>({k, v});
    n = len(words);
    for (int i = 1; i < n; ++i) {
      w2 = words->index(i);
      pair = word_::DetectAssocPair(w2);
      if (!pair) {
        p_die(fmt170(), w2);
      }
      Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup7 = pair;
      k = tup7->at0();
      v = tup7->at1();
      pairs->append(k);
      pairs->append(v);
    }
    node2 = new word_part::AssocArrayLiteral(left_token, pairs);
    node2->spids->append(paren_spid);
    return node2;
  }
  words2 = braces::BraceDetectAll(words);
  words3 = word_::TildeDetectAll(words2);
  node = new sh_array_literal(left_token, words3);
  node->spids->append(paren_spid);
  return node;
}

void WordParser::_ParseCallArguments(syntax_asdl::arg_list* arglist) {
  this->lexer->PushHint(Id::Op_RParen, Id::Op_RParen);
  this->parse_ctx->ParseOilArgList(this->lexer, arglist);
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
  syntax_asdl::word_part_t* part;
  int next_id;
  syntax_asdl::word_part_t* part2;
  syntax_asdl::Token* splice_token;
  syntax_asdl::arg_list* arglist;
  syntax_asdl::Token* vsub_token;

  w = new compound_word();
  num_parts = 0;
  brace_count = 0;
  done = false;
  while (!done) {
    this->_Peek();
    allow_done = empty_ok or num_parts != 0;
    if (allow_done and this->token_type == eof_type) {
      done = true;
    }
    else {
      if ((this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary)) {
        if (this->token_type == Id::Lit_EscapedChar) {
          part = new word_part::EscapedLiteral(this->cur_token);
        }
        else {
          part = this->cur_token;
        }
        if (this->token_type == Id::Lit_VarLike and num_parts == 0) {
          w->parts->append(part);
          next_id = this->lexer->LookAhead(lex_mode);
          if (next_id == Id::Op_LParen) {
            this->lexer->PushHint(Id::Op_RParen, Id::Right_ShArrayLiteral);
            part2 = this->_ReadArrayLiteral();
            w->parts->append(part2);
            this->_Next(lex_mode);
            this->_Peek();
            if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
              p_die(fmt171(), this->cur_token);
            }
            done = true;
          }
        }
        else {
          if (this->parse_opts->parse_at() and this->token_type == Id::Lit_Splice and num_parts == 0) {
            splice_token = this->cur_token;
            next_id = this->lexer->LookAhead(lex_mode);
            if (next_id == Id::Op_LParen) {
              arglist = new arg_list();
              this->_ParseCallArguments(arglist);
              part = new word_part::FuncCall(splice_token, arglist);
            }
            else {
              part = new word_part::Splice(splice_token);
            }
            w->parts->append(part);
            this->_Next(lex_mode);
            this->_Peek();
            if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
              p_die(fmt172(), this->cur_token);
            }
            done = true;
          }
          else {
            if (this->token_type == Id::Lit_LBrace) {
              brace_count += 1;
            }
            else {
              if (this->token_type == Id::Lit_RBrace) {
                brace_count -= 1;
              }
            }
            w->parts->append(part);
          }
        }
      }
      else {
        if (this->token_kind == Kind::VSub) {
          vsub_token = this->cur_token;
          part = new simple_var_sub(vsub_token);
          if (this->token_type == Id::VSub_DollarName) {
            next_id = this->lexer->LookAhead(lex_mode);
            if (next_id == Id::Op_LParen) {
              arglist = new arg_list();
              this->_ParseCallArguments(arglist);
              part = new word_part::FuncCall(vsub_token, arglist);
            }
          }
          w->parts->append(part);
        }
        else {
          if (this->token_kind == Kind::ExtGlob) {
            part = this->_ReadExtGlob();
            w->parts->append(part);
          }
          else {
            if (this->token_kind == Kind::Left) {
              part = this->_ReadLeftParts();
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
  if (this->parse_opts->parse_brace() and num_parts > 1 and brace_count != 0) {
    p_die(fmt173(), w);
  }
  return w;
}

Tuple2<syntax_asdl::word_t*, bool> WordParser::_ReadArithWord() {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;

  this->_Peek();
  if (this->token_kind == Kind::Unknown) {
    p_die(fmt174(), this->cur_token);
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
            throw new AssertionError();
          }
        }
      }
    }
  }
}

Tuple2<syntax_asdl::word_t*, bool> WordParser::_ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;

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
          throw new AssertionError();
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
              w = this->_ReadCompoundWord(lex_mode);
              return (Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
            }
          }
          else {
            throw new AssertionError();
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
          throw new AssertionError();
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
  this->_ReadLikeDQ(nullptr, parts);
}

syntax_asdl::compound_word* WordParser::ReadForPlugin() {
  syntax_asdl::compound_word* w;

  w = new compound_word();
  this->_ReadLikeDQ(nullptr, w->parts);
  return w;
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

int _LiteralId(syntax_asdl::word_part_t* p) {
  syntax_asdl::word_part_t* UP_part;

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

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      return (Tuple3<bool, Str*, bool>(false, str513, false));
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      return (Tuple3<bool, Str*, bool>(false, str514, false));
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
      tmp = new List<Str*>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(t->val);
      }
      s = str515->join(tmp);
      return (Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      strs = new List<Str*>();
      for (ListIter<syntax_asdl::word_part_t*> it(part->parts); !it.Done(); it.Next()) {
        syntax_asdl::word_part_t* p = it.Value();
        Tuple3<bool, Str*, bool> tup0 = _EvalWordPart(p);
        ok = tup0.at0();
        s = tup0.at1();
        if (!ok) {
          return (Tuple3<bool, Str*, bool>(false, str516, true));
        }
        strs->append(s);
      }
      return (Tuple3<bool, Str*, bool>(true, str517->join(strs), true));
    }
      break;
    case word_part_e::CommandSub: 
    case word_part_e::SimpleVarSub: 
    case word_part_e::BracedVarSub: 
    case word_part_e::TildeSub: 
    case word_part_e::ArithSub: 
    case word_part_e::ExtGlob: 
    case word_part_e::Splice: {
      return (Tuple3<bool, Str*, bool>(false, str518, false));
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

Tuple3<bool, Str*, bool> StaticEval(syntax_asdl::word_t* UP_w) {
  bool quoted;
  List<Str*>* strs;
  bool ok;
  Str* s;
  bool q;

  quoted = false;
  if (UP_w->tag_() != word_e::Compound) {
    return (Tuple3<bool, Str*, bool>(false, str519, quoted));
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  strs = new List<Str*>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    Tuple3<bool, Str*, bool> tup1 = _EvalWordPart(part);
    ok = tup1.at0();
    s = tup1.at1();
    q = tup1.at2();
    if (!ok) {
      return (Tuple3<bool, Str*, bool>(false, str520, quoted));
    }
    if (q) {
      quoted = true;
    }
    strs->append(s);
  }
  return (Tuple3<bool, Str*, bool>(true, str521->join(strs), quoted));
}

int LeftMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;

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
      throw new AssertionError();
    }
  }
}

int _RightMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  int spid;

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
      throw new AssertionError();
    }
  }
}

int LeftMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;

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
      throw new AssertionError();
    }
  }
}

int RightMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  syntax_asdl::word_part_t* end;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) == 0) {
        throw new AssertionError();
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
      throw new AssertionError();
    }
  }
}

syntax_asdl::compound_word* TildeDetect(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;
  syntax_asdl::word_part__TildeSub* tilde_part;
  syntax_asdl::word_part_t* UP_part1;
  syntax_asdl::word_part_t* tilde_part_;
  List<syntax_asdl::word_part_t*>* parts;

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  UP_part0 = w->parts->index(0);
  if (_LiteralId(UP_part0) != Id::Lit_TildeLike) {
    return nullptr;
  }
  Token* tok0 = static_cast<Token*>(UP_part0);
  if (len(w->parts) == 1) {
    tilde_part = new word_part::TildeSub(tok0);
    return new compound_word(new List<syntax_asdl::word_part_t*>({tilde_part}));
  }
  UP_part1 = w->parts->index(1);
  if (_LiteralId(UP_part1) == Id::Lit_Chars) {
    Token* tok = static_cast<Token*>(UP_part1);
    if (tok->val->startswith(str523)) {
      tilde_part_ = new word_part::TildeSub(tok0);
      parts = new List<syntax_asdl::word_part_t*>({tilde_part_});
      parts->extend(w->parts->slice(1));
      return new compound_word(parts);
    }
  }
  return nullptr;
}

List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::compound_word* t;

  out = new List<syntax_asdl::word_t*>();
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

  Tuple3<bool, Str*, bool> tup2 = StaticEval(w);
  ok = tup2.at0();
  s = tup2.at1();
  quoted = tup2.at2();
  if (!ok or quoted) {
    return str524;
  }
  return s;
}

syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  UP_part0 = w->parts->index(0);
  if (_LiteralId(UP_part0) != Id::Lit_ArithVarLike) {
    return nullptr;
  }
  return static_cast<Token*>(UP_part0);
}

bool IsVarLike(syntax_asdl::compound_word* w) {
  if (len(w->parts) == 0) {
    return false;
  }
  return _LiteralId(w->parts->index(0)) == Id::Lit_VarLike;
}

Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int> DetectShAssignment(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  int n;
  syntax_asdl::word_part_t* UP_part0;
  int id0;
  syntax_asdl::word_part_t* UP_part;

  no_token = nullptr;
  n = len(w->parts);
  if (n == 0) {
    return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
  }
  UP_part0 = w->parts->index(0);
  id0 = _LiteralId(UP_part0);
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
      if (_LiteralId(UP_part) == Id::Lit_ArrayLhsClose) {
        Token* tok_close = static_cast<Token*>(UP_part);
        return (Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(tok0, tok_close, i + 1));
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

  parts = w->parts;
  if (_LiteralId(parts->index(0)) != Id::Lit_LBracket) {
    return nullptr;
  }
  n = len(parts);
  for (int i = 0; i < n; ++i) {
    id_ = _LiteralId(parts->index(i));
    if (id_ == Id::Lit_ArrayLhsClose) {
      key = new compound_word(parts->slice(1, i));
      value = new compound_word(parts->slice(i + 1));
      ret = (new Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>(key, value));
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

  no_token = nullptr;
  if (len(w->parts) != 1) {
    return (Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
  }
  UP_part0 = w->parts->index(0);
  token_type = _LiteralId(UP_part0);
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
      token_type = _LiteralId(w->parts->index(0));
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
      throw new AssertionError();
    }
  }
}

int CommandId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

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
      token_type = _LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      else {
        if ((token_type == Id::Lit_LBrace || token_type == Id::Lit_RBrace || token_type == Id::Lit_Equals || token_type == Id::ControlFlow_Return)) {
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
      throw new AssertionError();
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
      throw new AssertionError();
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

Str* Pretty(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;

  UP_w = w;
  if (w->tag_() == word_e::String) {
    word__String* w = static_cast<word__String*>(UP_w);
    if (w->id == Id::Eof_Real) {
      return str525;
    }
    else {
      return repr(w->s);
    }
  }
  else {
    return str(w);
  }
}

}  // define namespace word_

namespace grammar {  // define

Grammar::Grammar() {
  this->symbol2number = new Dict<Str*, int>();
  this->number2symbol = new Dict<int, Str*>();
  this->states = new List<List<Tuple2<int, int>*>*>();
  this->dfas = new Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>();
  this->labels = new List<int>({0});
  this->keywords = new Dict<Str*, int>();
  this->tokens = new Dict<int, int>();
  this->symbol2label = new Dict<Str*, int>();
  this->start = 256;
}

}  // define namespace grammar

namespace parse {  // define

ParseError::ParseError(Str* msg, int type_, syntax_asdl::Token* tok) {
  this->msg = msg;
  this->type = type_;
  this->tok = tok;
}

PNode::PNode(int typ, syntax_asdl::Token* tok, List<parse::PNode*>* children) {
  this->typ = typ;
  this->tok = tok;
  this->children = children;
}

_StackItem::_StackItem(Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* dfa, int state, parse::PNode* node) {
  this->dfa = dfa;
  this->state = state;
  this->node = node;
}

Parser::Parser(grammar::Grammar* grammar) {
  this->grammar = grammar;
}

void Parser::setup(int start) {
  parse::PNode* newnode;

  newnode = new PNode(start, nullptr, new List<parse::PNode*>());
  this->stack = new List<parse::_StackItem*>({new _StackItem(this->grammar->dfas->index(start), 0, newnode)});
  this->rootnode = nullptr;
}

bool Parser::addtoken(int typ, syntax_asdl::Token* opaque, int ilabel) {
  parse::_StackItem* top;
  List<List<Tuple2<int, int>*>*>* states;
  int state;
  List<Tuple2<int, int>*>* arcs;
  bool found;
  int ilab;
  int newstate;
  int t;
  Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* itsdfa;
  Dict<int, int>* itsfirst;
  bool found2;
  int left;
  int right;

  while (true) {
    top = this->stack->index(-1);
    Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* tup0 = top->dfa;
    states = tup0->at0();
    state = top->state;
    arcs = states->index(state);
    found = false;
    for (ListIter<Tuple2<int, int>*> it(arcs); !it.Done(); it.Next()) {
      Tuple2<int, int>* tup1 = it.Value();
      ilab = tup1->at0();
      newstate = tup1->at1();
      t = this->grammar->labels->index(ilab);
      if (ilabel == ilab) {
        this->shift(typ, opaque, newstate);
        state = newstate;
        while (states->index(state) == new List<Tuple2<int, int>*>({(new Tuple2<int, int>(0, state))})) {
          this->pop();
          if (len(this->stack) == 0) {
            return true;
          }
          top = this->stack->index(-1);
          Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* tup2 = top->dfa;
          states = tup2->at0();
          state = top->state;
        }
        return false;
      }
      else {
        if (t >= 256) {
          itsdfa = this->grammar->dfas->index(t);
          Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* tup3 = itsdfa;
          itsfirst = tup3->at1();
          if (dict_contains(itsfirst, ilabel)) {
            this->push(t, opaque, this->grammar->dfas->index(t), newstate);
            found = true;
            break;
          }
        }
      }
    }
    if (!found) {
      found2 = false;
      for (ListIter<Tuple2<int, int>*> it(arcs); !it.Done(); it.Next()) {
        Tuple2<int, int>* tup4 = it.Value();
        left = tup4->at0();
        right = tup4->at1();
        if (left == 0 and right == state) {
          this->pop();
          if (len(this->stack) == 0) {
            throw new ParseError(str534, typ, opaque);
          }
          found2 = true;
        }
      }
      if (!found2) {
        throw new ParseError(str535, typ, opaque);
      }
    }
  }
}

void Parser::shift(int typ, syntax_asdl::Token* opaque, int newstate) {
  parse::_StackItem* top;
  parse::PNode* newnode;

  top = this->stack->index(-1);
  newnode = new PNode(typ, opaque, nullptr);
  if (newnode != nullptr) {
    top->node->children->append(newnode);
  }
  this->stack->index(-1)->state = newstate;
}

void Parser::push(int typ, syntax_asdl::Token* opaque, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* newdfa, int newstate) {
  parse::_StackItem* top;
  parse::PNode* newnode;

  top = this->stack->index(-1);
  newnode = new PNode(typ, opaque, new List<parse::PNode*>());
  this->stack->index(-1)->state = newstate;
  this->stack->append(new _StackItem(newdfa, 0, newnode));
}

void Parser::pop() {
  parse::_StackItem* top;
  parse::PNode* newnode;
  parse::_StackItem* top2;

  top = this->stack->pop();
  newnode = top->node;
  if (newnode != nullptr) {
    if (len(this->stack)) {
      top2 = this->stack->index(-1);
      top2->node->children->append(newnode);
    }
    else {
      this->rootnode = newnode;
    }
  }
}

}  // define namespace parse

namespace cgi {  // define

Str* escape(Str* s) {
  s = s->replace(str536, str537);
  s = s->replace(str538, str539);
  s = s->replace(str540, str541);
  return s;
}

}  // define namespace cgi

int main(int argc, char **argv) {
  //log("%p", arith_parse::kNullLookup[1].nud);
  auto* args = new List<Str*>();
  for (int i = 0; i < argc; ++i) {
    args->append(new Str(argv[i]));
  }
  int status;

  // For benchmarking
  char* repeat = getenv("REPEAT");
  if (repeat) {
    Str* r = new Str(repeat);
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

// hard-coded definitions!
#include "postamble.cc"
