ulong *cs4340_get_fw_addr(void)
{
struct ccsr_gur __iomem *gur = (void *)(CFG_SYS_FSL_GUTS_ADDR);
u32 svr = gur_in32(&gur->svr);
ulong cortina_fw_addr = CONFIG_CORTINA_FW_ADDR;


if (SVR_SOC_VER(svr) == SVR_LS2088A) {
enum boot_src src = get_boot_src();
u8 sw;

switch (src) {
case BOOT_SOURCE_IFC_NOR:
sw = QIXIS_READ(brdcfg[0]);
sw = (sw & 0x0f);
if (sw == 0)
cortina_fw_addr = CORTINA_FW_ADDR_IFCNOR;
else if (sw == 4)
cortina_fw_addr = CORTINA_FW_ADDR_IFCNOR_ALTBANK;
break;
case BOOT_SOURCE_QSPI_NOR:

cortina_fw_addr = CORTINA_FW_ADDR_QSPI;
break;
default:
printf("WARNING: Boot source not found\n");
}
}
return (ulong *)cortina_fw_addr;
}