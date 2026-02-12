static void venus_reset_cpu(struct venus_core *core)
{
u32 fw_size = core->fw.mapped_mem_size;
void __iomem *wrapper_base;

if (IS_V6(core))
wrapper_base = core->wrapper_tz_base;
else
wrapper_base = core->wrapper_base;

writel(0, wrapper_base + WRAPPER_FW_START_ADDR);
writel(fw_size, wrapper_base + WRAPPER_FW_END_ADDR);
writel(0, wrapper_base + WRAPPER_CPA_START_ADDR);
writel(fw_size, wrapper_base + WRAPPER_CPA_END_ADDR);
writel(0, wrapper_base + WRAPPER_NONPIX_START_ADDR);
writel(0, wrapper_base + WRAPPER_NONPIX_END_ADDR);

if (IS_V6(core)) {

writel(0, wrapper_base + WRAPPER_TZ_XTSS_SW_RESET);
} else {
writel(0x0, wrapper_base + WRAPPER_CPU_CGC_DIS);
writel(0x0, wrapper_base + WRAPPER_CPU_CLOCK_CONFIG);


writel(0, wrapper_base + WRAPPER_A9SS_SW_RESET);
}
}