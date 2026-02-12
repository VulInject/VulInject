int
sdmmc_io_rw_direct(struct sdmmc_softc *sc, struct sdmmc_function *sf,
int reg, u_char *datap, int arg)
{
struct sdmmc_command cmd;
int error;

rw_assert_wrlock(&sc->sc_lock);


if ((error = sdmmc_select_card(sc, sf)) != 0) {
rw_exit(&sc->sc_lock);
return error;
}

arg |= ((sf == NULL ? 0 : sf->number) & SD_ARG_CMD52_FUNC_MASK) <<
SD_ARG_CMD52_FUNC_SHIFT;
arg |= (reg & SD_ARG_CMD52_REG_MASK) <<
SD_ARG_CMD52_REG_SHIFT;
arg |= (*datap & SD_ARG_CMD52_DATA_MASK) <<
SD_ARG_CMD52_DATA_SHIFT;

bzero(&cmd, sizeof cmd);
cmd.c_opcode = SD_IO_RW_DIRECT;
cmd.c_arg = arg;
cmd.c_flags = SCF_CMD_AC | SCF_RSP_R5;

error = sdmmc_mmc_command(sc, &cmd);
*datap = SD_R5_DATA(cmd.c_resp);

return error;
}