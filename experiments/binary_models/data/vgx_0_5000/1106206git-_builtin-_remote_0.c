static void handle_push_default(const char* old_name, const char* new_name)
{
struct push_default_info push_default = {
old_name, CONFIG_SCOPE_UNKNOWN, STRBUF_INIT, -1 };
git_config(config_read_push_default, &push_default);
if (push_default.scope >= CONFIG_SCOPE_COMMAND)
; 
else if (push_default.scope >= CONFIG_SCOPE_LOCAL) {
int result = git_config_set_gently("remote.pushDefault",
new_name);
if (new_name && result && result != CONFIG_NOTHING_SET)
die(_("could not set '%s'"), "remote.pushDefault");
else if (!new_name && result && result != CONFIG_NOTHING_SET)
die(_("could not unset '%s'"), "remote.pushDefault");
} else if (push_default.scope >= CONFIG_SCOPE_SYSTEM) {

warning(_("The %s configuration remote.pushDefault in:\n"
"\t%s:%d\n"
"now names the non-existent remote '%s'"),
config_scope_name(push_default.scope),
push_default.origin.buf, push_default.linenr,
old_name);
}
}