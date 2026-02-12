static void rk3399_pmu_iodomain_init(struct rockchip_iodomain *iod)
{
int ret;
u32 val;


if (!iod->supplies[RK3399_PMUGRF_VSEL_SUPPLY_NUM].reg)
return;


val = RK3399_PMUGRF_CON0_VSEL | (RK3399_PMUGRF_CON0_VSEL << 16);
ret = regmap_write(iod->grf, RK3399_PMUGRF_CON0, val);
if (ret < 0)
dev_warn(iod->dev, "couldn't update pmu io iodomain ctrl\n");
}

static const struct rockchip_iodomain_soc_data soc_data_px30 = {
.grf_offset = 0x180,
.supply_names = {
NULL,
"vccio6",
"vccio1",
"vccio2",
"vccio3",
"vccio4",
"vccio5",
"vccio-oscgpi",
},
.init = px30_iodomain_init,
};