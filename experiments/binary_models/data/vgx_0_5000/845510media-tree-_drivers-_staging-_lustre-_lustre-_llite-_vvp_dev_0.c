int cl_sb_fini(struct super_block *sb)
{
struct ll_sb_info *sbi;
struct lu_env     *env;
struct cl_device  *cld;
u16 refcheck;
int		result;

sbi = ll_s2sbi(sb);
env = cl_env_get(&refcheck);
if (!IS_ERR(env)) {
cld = sbi->ll_cl;

if (cld) {
cl_stack_fini(env, cld);
sbi->ll_cl = NULL;
sbi->ll_site = NULL;
}
cl_env_put(env, &refcheck);
result = 0;
} else {
CERROR("Cannot cleanup cl-stack due to memory shortage.\n");
result = PTR_ERR(env);
}
return result;
}