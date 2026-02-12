int
islrtc_clock_write(struct islrtc_softc *sc, struct clock_ymdhms *dt)
{
uint8_t regs[ISL1208_NRTC_REGS];
uint8_t cmd = ISL1208_SC;
uint8_t reg;
int error;


regs[0] = TOBCD(dt->dt_sec);
regs[1] = TOBCD(dt->dt_min);
regs[2] = TOBCD(dt->dt_hour) | ISL1208_HR_MIL;
regs[3] = TOBCD(dt->dt_day);
regs[4] = TOBCD(dt->dt_mon);
regs[5] = TOBCD(dt->dt_year - 2000);
regs[6] = TOBCD(dt->dt_wday);


reg = islrtc_reg_read(sc, ISL1208_SR);
if (reg == 0xff) {
error = EIO;
goto fail;
}
islrtc_reg_write(sc, ISL1208_SR, reg | ISL1208_SR_WRTC);

iic_acquire_bus(sc->sc_tag, I2C_F_POLL);
error = iic_exec(sc->sc_tag, I2C_OP_WRITE_WITH_STOP, sc->sc_addr,
&cmd, sizeof(cmd), regs, ISL1208_NRTC_REGS, I2C_F_POLL);
iic_release_bus(sc->sc_tag, I2C_F_POLL);


islrtc_reg_write(sc, ISL1208_SR, reg & ~ISL1208_SR_WRTC);

fail:
if (error) {
printf("%s: can't write RTC\n", sc->sc_dev.dv_xname);
return error;
}

return 0;
}