void __init prom_soc_init(struct ralink_soc_info *soc_info)
{
void __iomem *sysc = (void __iomem *) KSEG1ADDR(RT3883_SYSC_BASE);
const char *name;
u32 n0;
u32 n1;
u32 id;

n0 = __raw_readl(sysc + RT3883_SYSC_REG_CHIPID0_3);
n1 = __raw_readl(sysc + RT3883_SYSC_REG_CHIPID4_7);
id = __raw_readl(sysc + RT3883_SYSC_REG_REVID);

if (n0 == RT3883_CHIP_NAME0 && n1 == RT3883_CHIP_NAME1) {
soc_info->compatible = "ralink,rt3883-soc";
name = "RT3883";
} else {
panic("rt3883: unknown SoC, n0:%08x n1:%08x", n0, n1);
}

snprintf(soc_info->sys_type, RAMIPS_SYS_TYPE_LEN,
"Ralink %s ver:%u eco:%u",
name,
(id >> RT3883_REVID_VER_ID_SHIFT) & RT3883_REVID_VER_ID_MASK,
(id & RT3883_REVID_ECO_ID_MASK));

soc_info->mem_base = RT3883_SDRAM_BASE;
soc_info->mem_size_min = RT3883_MEM_SIZE_MIN;
soc_info->mem_size_max = RT3883_MEM_SIZE_MAX;

ralink_soc = RT3883_SOC;
}