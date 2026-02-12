}
EXPORT_SYMBOL(libcfs_kkuc_group_put);


int libcfs_kkuc_group_foreach(unsigned int group, libcfs_kkuc_cb_t cb_func,
void *cb_arg)
{
struct kkuc_reg *reg;
int rc = 0;

if (group > KUC_GRP_MAX) {
CDEBUG(D_WARNING, "Kernelcomm: bad group %d\n", group);
return -EINVAL;
}


if (!kkuc_groups[group].next)
return 0;

down_read(&kg_sem);
list_for_each_entry(reg, &kkuc_groups[group], kr_chain) {
if (reg->kr_fp)
rc = cb_func(reg->kr_data, cb_arg);
}
up_read(&kg_sem);

return rc;
}