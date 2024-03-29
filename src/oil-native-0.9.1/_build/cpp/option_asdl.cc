#include <assert.h>
#include "option_asdl.h"

namespace option_asdl {

const char* option_str(int tag) {
  switch (tag) {
  case option::errexit:
    return "option.errexit";
  case option::nounset:
    return "option.nounset";
  case option::pipefail:
    return "option.pipefail";
  case option::inherit_errexit:
    return "option.inherit_errexit";
  case option::nullglob:
    return "option.nullglob";
  case option::noexec:
    return "option.noexec";
  case option::xtrace:
    return "option.xtrace";
  case option::verbose:
    return "option.verbose";
  case option::noglob:
    return "option.noglob";
  case option::noclobber:
    return "option.noclobber";
  case option::posix:
    return "option.posix";
  case option::vi:
    return "option.vi";
  case option::emacs:
    return "option.emacs";
  case option::interactive:
    return "option.interactive";
  case option::hashall:
    return "option.hashall";
  case option::failglob:
    return "option.failglob";
  case option::extglob:
    return "option.extglob";
  case option::eval_unsafe_arith:
    return "option.eval_unsafe_arith";
  case option::parse_dynamic_arith:
    return "option.parse_dynamic_arith";
  case option::compat_array:
    return "option.compat_array";
  case option::verbose_errexit:
    return "option.verbose_errexit";
  case option::allow_command_sub:
    return "option.allow_command_sub";
  case option::dynamic_scope:
    return "option.dynamic_scope";
  case option::redefine_module:
    return "option.redefine_module";
  case option::_running_trap:
    return "option._running_trap";
  case option::strict_argv:
    return "option.strict_argv";
  case option::strict_arith:
    return "option.strict_arith";
  case option::strict_array:
    return "option.strict_array";
  case option::strict_control_flow:
    return "option.strict_control_flow";
  case option::strict_errexit:
    return "option.strict_errexit";
  case option::strict_nameref:
    return "option.strict_nameref";
  case option::strict_word_eval:
    return "option.strict_word_eval";
  case option::strict_tilde:
    return "option.strict_tilde";
  case option::strict_glob:
    return "option.strict_glob";
  case option::parse_at:
    return "option.parse_at";
  case option::parse_brace:
    return "option.parse_brace";
  case option::parse_paren:
    return "option.parse_paren";
  case option::parse_raw_string:
    return "option.parse_raw_string";
  case option::parse_triple_quote:
    return "option.parse_triple_quote";
  case option::parse_triple_dot:
    return "option.parse_triple_dot";
  case option::simple_word_eval:
    return "option.simple_word_eval";
  case option::dashglob:
    return "option.dashglob";
  case option::expand_aliases:
    return "option.expand_aliases";
  case option::command_sub_errexit:
    return "option.command_sub_errexit";
  case option::process_sub_fail:
    return "option.process_sub_fail";
  case option::xtrace_rich:
    return "option.xtrace_rich";
  case option::xtrace_details:
    return "option.xtrace_details";
  case option::sigpipe_status_ok:
    return "option.sigpipe_status_ok";
  case option::redefine_proc:
    return "option.redefine_proc";
  case option::parse_equals:
    return "option.parse_equals";
  case option::parse_at_all:
    return "option.parse_at_all";
  case option::parse_backslash:
    return "option.parse_backslash";
  case option::parse_backticks:
    return "option.parse_backticks";
  case option::parse_dollar:
    return "option.parse_dollar";
  case option::parse_ignored:
    return "option.parse_ignored";
  case option::parse_amp:
    return "option.parse_amp";
  case option::simple_echo:
    return "option.simple_echo";
  case option::simple_eval_builtin:
    return "option.simple_eval_builtin";
  case option::simple_test_builtin:
    return "option.simple_test_builtin";
  case option::parse_tea:
    return "option.parse_tea";
  case option::lastpipe:
    return "option.lastpipe";
  case option::progcomp:
    return "option.progcomp";
  case option::histappend:
    return "option.histappend";
  case option::hostcomplete:
    return "option.hostcomplete";
  case option::cmdhist:
    return "option.cmdhist";
  case option::assoc_expand_once:
    return "option.assoc_expand_once";
  case option::autocd:
    return "option.autocd";
  case option::cdable_vars:
    return "option.cdable_vars";
  case option::cdspell:
    return "option.cdspell";
  case option::checkhash:
    return "option.checkhash";
  case option::checkjobs:
    return "option.checkjobs";
  case option::checkwinsize:
    return "option.checkwinsize";
  case option::complete_fullquote:
    return "option.complete_fullquote";
  case option::direxpand:
    return "option.direxpand";
  case option::dirspell:
    return "option.dirspell";
  case option::dotglob:
    return "option.dotglob";
  case option::execfail:
    return "option.execfail";
  case option::extdebug:
    return "option.extdebug";
  case option::extquote:
    return "option.extquote";
  case option::force_fignore:
    return "option.force_fignore";
  case option::globasciiranges:
    return "option.globasciiranges";
  case option::globstar:
    return "option.globstar";
  case option::gnu_errfmt:
    return "option.gnu_errfmt";
  case option::histreedit:
    return "option.histreedit";
  case option::histverify:
    return "option.histverify";
  case option::huponexit:
    return "option.huponexit";
  case option::interactive_comments:
    return "option.interactive_comments";
  case option::lithist:
    return "option.lithist";
  case option::localvar_inherit:
    return "option.localvar_inherit";
  case option::localvar_unset:
    return "option.localvar_unset";
  case option::login_shell:
    return "option.login_shell";
  case option::mailwarn:
    return "option.mailwarn";
  case option::no_empty_cmd_completion:
    return "option.no_empty_cmd_completion";
  case option::nocaseglob:
    return "option.nocaseglob";
  case option::nocasematch:
    return "option.nocasematch";
  case option::progcomp_alias:
    return "option.progcomp_alias";
  case option::promptvars:
    return "option.promptvars";
  case option::restricted_shell:
    return "option.restricted_shell";
  case option::shift_verbose:
    return "option.shift_verbose";
  case option::sourcepath:
    return "option.sourcepath";
  case option::xpg_echo:
    return "option.xpg_echo";
  default:
    assert(0);
  }
}
const char* builtin_str(int tag) {
  switch (tag) {
  case builtin::colon:
    return "builtin.colon";
  case builtin::dot:
    return "builtin.dot";
  case builtin::exec_:
    return "builtin.exec_";
  case builtin::eval:
    return "builtin.eval";
  case builtin::set:
    return "builtin.set";
  case builtin::shift:
    return "builtin.shift";
  case builtin::times:
    return "builtin.times";
  case builtin::trap:
    return "builtin.trap";
  case builtin::unset:
    return "builtin.unset";
  case builtin::builtin:
    return "builtin.builtin";
  case builtin::readonly:
    return "builtin.readonly";
  case builtin::local:
    return "builtin.local";
  case builtin::declare:
    return "builtin.declare";
  case builtin::typeset:
    return "builtin.typeset";
  case builtin::export_:
    return "builtin.export_";
  case builtin::test:
    return "builtin.test";
  case builtin::bracket:
    return "builtin.bracket";
  case builtin::true_:
    return "builtin.true_";
  case builtin::false_:
    return "builtin.false_";
  case builtin::try_:
    return "builtin.try_";
  case builtin::read:
    return "builtin.read";
  case builtin::echo:
    return "builtin.echo";
  case builtin::printf:
    return "builtin.printf";
  case builtin::mapfile:
    return "builtin.mapfile";
  case builtin::readarray:
    return "builtin.readarray";
  case builtin::cd:
    return "builtin.cd";
  case builtin::pushd:
    return "builtin.pushd";
  case builtin::popd:
    return "builtin.popd";
  case builtin::dirs:
    return "builtin.dirs";
  case builtin::pwd:
    return "builtin.pwd";
  case builtin::source:
    return "builtin.source";
  case builtin::umask:
    return "builtin.umask";
  case builtin::wait:
    return "builtin.wait";
  case builtin::jobs:
    return "builtin.jobs";
  case builtin::fg:
    return "builtin.fg";
  case builtin::bg:
    return "builtin.bg";
  case builtin::shopt:
    return "builtin.shopt";
  case builtin::complete:
    return "builtin.complete";
  case builtin::compgen:
    return "builtin.compgen";
  case builtin::compopt:
    return "builtin.compopt";
  case builtin::compadjust:
    return "builtin.compadjust";
  case builtin::getopts:
    return "builtin.getopts";
  case builtin::command:
    return "builtin.command";
  case builtin::type:
    return "builtin.type";
  case builtin::hash:
    return "builtin.hash";
  case builtin::help:
    return "builtin.help";
  case builtin::history:
    return "builtin.history";
  case builtin::alias:
    return "builtin.alias";
  case builtin::unalias:
    return "builtin.unalias";
  case builtin::bind:
    return "builtin.bind";
  case builtin::append:
    return "builtin.append";
  case builtin::shvar:
    return "builtin.shvar";
  case builtin::write:
    return "builtin.write";
  case builtin::json:
    return "builtin.json";
  case builtin::pp:
    return "builtin.pp";
  case builtin::module:
    return "builtin.module";
  case builtin::use:
    return "builtin.use";
  case builtin::argparse:
    return "builtin.argparse";
  case builtin::fopen:
    return "builtin.fopen";
  case builtin::fork:
    return "builtin.fork";
  case builtin::forkwait:
    return "builtin.forkwait";
  case builtin::runproc:
    return "builtin.runproc";
  case builtin::push_registers:
    return "builtin.push_registers";
  case builtin::cat:
    return "builtin.cat";
  default:
    assert(0);
  }
}
}  // namespace option_asdl
