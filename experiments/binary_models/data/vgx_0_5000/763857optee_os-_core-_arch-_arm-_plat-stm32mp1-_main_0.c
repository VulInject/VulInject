static TEE_Result init_late_stm32mp1_drivers(void)
{
TEE_Result res = TEE_ERROR_GENERIC;


if (IS_ENABLED(CFG_STM32_TAMP)) {
struct stm32_bkpregs_conf conf = {
.nb_zone1_regs = TAMP_BKP_REGISTER_ZONE1_COUNT,
.nb_zone2_regs = TAMP_BKP_REGISTER_ZONE2_COUNT,
};

res = stm32_tamp_set_secure_bkpregs(&conf);
if (res == TEE_ERROR_DEFER_DRIVER_INIT) {

res = TEE_SUCCESS;
}
if (res)
panic();
}

return TEE_SUCCESS;
}