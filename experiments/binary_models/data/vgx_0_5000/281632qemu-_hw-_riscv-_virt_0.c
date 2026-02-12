static FWCfgState *create_fw_cfg(const MachineState *mc)
{
hwaddr base = virt_memmap[VIRT_FW_CFG].base;
hwaddr size = virt_memmap[VIRT_FW_CFG].size;
FWCfgState *fw_cfg;
char *nodename;

fw_cfg = fw_cfg_init_mem_wide(base + 8, base, 8, base + 16,
&address_space_memory);
fw_cfg_add_i16(fw_cfg, FW_CFG_NB_CPUS, (uint16_t)mc->smp.cpus);

nodename = g_strdup_printf("/fw-cfg@%" PRIx64, base);
qemu_fdt_add_subnode(mc->fdt, nodename);
qemu_fdt_setprop_string(mc->fdt, nodename,
"compatible", "qemu,fw-cfg-mmio");
qemu_fdt_setprop_sized_cells(mc->fdt, nodename, "reg",
2, base, 2, size);
qemu_fdt_setprop(mc->fdt, nodename, "dma-coherent", NULL, 0);
g_free(nodename);
return fw_cfg;
}