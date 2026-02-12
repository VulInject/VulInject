static int __xlate_proc_name(const char *name, struct proc_dir_entry **ret,
const char **residual)
{
const char     		*cp = name, *next;
struct proc_dir_entry	*de;

de = *ret ?: &proc_root;
while ((next = strchr(cp, '/')) != NULL) {
de = pde_subdir_find(de, cp, next - cp);
if (!de) {
WARN(1, "name '%s'\n", name);
return -ENOENT;
}
cp = next + 1;
}
*residual = cp;
*ret = de;
return 0;
}