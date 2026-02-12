static void zq_dump(const struct uniphier_ddrmphy_param *param)
{
void __iomem *phy_base, *zq_base;
u32 val;
int phy, zq, i;

printf("\n--- Impedance Data ---\n");
printf("           ZPD  ZPU  OPD  OPU  ZDV  ODV\n");

for (phy = 0; phy < param->nr_phy; phy++) {
phy_base = ioremap(param->phy[phy].base, SZ_4K);
zq_base = phy_base + MPHY_ZQ_BASE;

for (zq = 0; zq < param->phy[phy].nr_zq; zq++) {
printf("PHY%dZQ%d:", phy, zq);

val = readl(zq_base + MPHY_ZQ_DR);
for (i = 0; i < 4; i++) {
printf(FS PRINTF_FORMAT, val & 0x7f);
val >>= 7;
}

val = readl(zq_base + MPHY_ZQ_PR);
for (i = 0; i < 2; i++) {
printf(FS PRINTF_FORMAT, val & 0xf);
val >>= 4;
}

zq_base += MPHY_ZQ_STRIDE;
printf("\n");
}

iounmap(phy_base);
}
}