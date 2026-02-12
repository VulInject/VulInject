int cfg_declare_str(char *group_name, char *var_name, char *val, char *descr)
{
cfg_script_var_t	*var;
int	len;

if ((var = new_cfg_script_var(group_name, var_name, CFG_VAR_STR, descr)) == NULL)
return -1;

if (val) {
len = strlen(val);
var->val.s.s = (char *)pkg_malloc(sizeof(char) * (len + 1));
if (!var->val.s.s) {
PKG_MEM_ERROR;
return -1;
}
memcpy(var->val.s.s, val, len + 1);
var->val.s.len = len;
} else {
var->val.s.s = NULL;
var->val.s.len = 0;
}

return 0;
}