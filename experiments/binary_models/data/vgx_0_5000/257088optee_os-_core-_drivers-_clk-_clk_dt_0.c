static TEE_Result parse_clock_property(const void *fdt, int node)
{
int len = 0;
int idx = 0;
int parent_node = 0;
int clock_cells = 0;
uint32_t phandle = 0;
const uint32_t *prop = NULL;
TEE_Result res = TEE_ERROR_GENERIC;

prop = fdt_getprop(fdt, node, "clocks", &len);
if (!prop)
return TEE_SUCCESS;

len /= sizeof(uint32_t);
while (idx < len) {
phandle = fdt32_to_cpu(prop[idx]);

parent_node = fdt_node_offset_by_phandle(fdt, phandle);
if (parent_node < 0)
return TEE_ERROR_GENERIC;


res = clk_probe_clock_provider_node(fdt, parent_node);
if (res) {
EMSG("Probe parent clock node %s on node %s: %#"PRIx32,
fdt_get_name(fdt, parent_node, NULL),
fdt_get_name(fdt, node, NULL), res);
panic();
}

clock_cells = fdt_get_dt_driver_cells(fdt, parent_node,
DT_DRIVER_CLK);
if (clock_cells < 0)
return TEE_ERROR_GENERIC;

idx += 1 + clock_cells;
}

return TEE_SUCCESS;
}