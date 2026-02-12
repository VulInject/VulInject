void davinci_psc_reset(unsigned int ctlr, unsigned int id, bool reset)
{
u32 mdctl;
void __iomem *psc_base;
struct davinci_soc_info *soc_info = &davinci_soc_info;

if (!soc_info->psc_bases || (ctlr >= soc_info->psc_bases_num)) {
pr_warn("PSC: Bad psc data: 0x%x[%d]\n",
(int)soc_info->psc_bases, ctlr);
return;
}

psc_base = ioremap(soc_info->psc_bases[ctlr], SZ_4K);

mdctl = readl(psc_base + MDCTL + 4 * id);
if (reset)
mdctl &= ~MDCTL_LRST;
else
mdctl |= MDCTL_LRST;
writel(mdctl, psc_base + MDCTL + 4 * id);

iounmap(psc_base);
}