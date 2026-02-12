static int stm32mp_bsec_write_lock(struct udevice *dev, u32 val, u32 otp)
{
struct stm32mp_bsec_plat *plat;


if (!(val & BSEC_LOCK_PERM)) {
dev_dbg(dev, "lock option without BSEC_LOCK_PERM: %x\n", val);
return 0; 
}

if (IS_ENABLED(CONFIG_ARM_SMCCC) && !IS_ENABLED(CONFIG_SPL_BUILD))
return stm32_smc_exec(STM32_SMC_BSEC,
STM32_SMC_WRLOCK_OTP,
otp, 0);

plat = dev_get_plat(dev);

return bsec_permanent_lock_otp(dev, plat->base, otp);
}