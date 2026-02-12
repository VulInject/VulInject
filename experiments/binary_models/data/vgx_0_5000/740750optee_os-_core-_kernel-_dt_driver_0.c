TEE_Result dt_driver_maybe_add_probe_node(const void *fdt, int node)
{
int idx = 0;
int len = 0;
int count = 0;
const char *compat = NULL;
TEE_Result res = TEE_ERROR_GENERIC;

if (_fdt_get_status(fdt, node) == DT_STATUS_DISABLED)
return TEE_SUCCESS;

count = fdt_stringlist_count(fdt, node, "compatible");
if (count < 0)
return TEE_SUCCESS;

for (idx = 0; idx < count; idx++) {
compat = fdt_stringlist_get(fdt, node, "compatible", idx, &len);
assert(compat && len > 0);

res = add_probe_node_by_compat(fdt, node, compat);


if (res != TEE_ERROR_ITEM_NOT_FOUND)
return res;
}

return TEE_SUCCESS;
}