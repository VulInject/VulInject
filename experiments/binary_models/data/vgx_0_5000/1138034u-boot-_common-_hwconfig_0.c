const char cpu_hwconfig[] __attribute__((weak)) = "";
const char board_hwconfig[] __attribute__((weak)) = "";

static const char *__hwconfig(const char *opt, size_t *arglen,
const char *env_hwconfig)
{
const char *ret;


if (!env_hwconfig) {
if (!(gd->flags & GD_FLG_ENV_READY) && gd->env_valid != ENV_VALID) {
printf("WARNING: Calling __hwconfig without a buffer "
"and before environment is ready\n");
return NULL;
}
env_hwconfig = env_get("hwconfig");
}

if (env_hwconfig) {
ret = hwconfig_parse(env_hwconfig, strlen(env_hwconfig),
opt, ";", ':', arglen);
if (ret)
return ret;
}

ret = hwconfig_parse(board_hwconfig, strlen(board_hwconfig),
opt, ";", ':', arglen);
if (ret)
return ret;

return hwconfig_parse(cpu_hwconfig, strlen(cpu_hwconfig),
opt, ";", ':', arglen);
}