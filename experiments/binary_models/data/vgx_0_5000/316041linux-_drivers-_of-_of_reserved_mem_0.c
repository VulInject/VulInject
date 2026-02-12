static int __init __reserved_mem_init_node(struct reserved_mem *rmem)
{
extern const struct of_device_id __reservedmem_of_table[];
const struct of_device_id *i;
int ret = -ENOENT;

for (i = __reservedmem_of_table; i < &__rmem_of_table_sentinel; i++) {
reservedmem_of_init_fn initfn = i->data;
const char *compat = i->compatible;

if (!of_flat_dt_is_compatible(rmem->fdt_node, compat))
continue;

ret = initfn(rmem);
if (ret == 0) {
pr_info("initialized node %s, compatible id %s\n",
rmem->name, compat);
break;
}
}
return ret;
}