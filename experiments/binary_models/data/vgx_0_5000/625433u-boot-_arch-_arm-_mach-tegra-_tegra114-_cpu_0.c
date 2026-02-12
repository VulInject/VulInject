static void power_partition(u32 partid)
{
struct pmc_ctlr *pmc = (struct pmc_ctlr *)NV_PA_PMC_BASE;

debug("%s: part ID = %08X\n", __func__, partid);

if (!is_partition_powered(partid)) {

debug("power_partition, toggling state\n");
writel(START_CP | partid, &pmc->pmc_pwrgate_toggle);


while (!is_partition_powered(partid))
;


while (is_clamp_enabled(partid))
;


udelay(IO_STABILIZATION_DELAY);
}
}