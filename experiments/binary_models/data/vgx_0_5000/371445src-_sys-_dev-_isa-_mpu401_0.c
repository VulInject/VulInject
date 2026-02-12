int
mpu_reset(struct mpu_softc *sc)
{
bus_space_tag_t iot = sc->iot;
bus_space_handle_t ioh = sc->ioh;
int i;

if (mpu_waitready(sc)) {
DPRINTF(("mpu_reset: not ready\n"));
return EIO;
}
mtx_enter(&audio_lock);	
bus_space_write_1(iot, ioh, MPU_COMMAND, MPU_RESET);
for(i = 0; i < 2*MPU_MAXWAIT; i++) {
if (!(MPU_GETSTATUS(iot, ioh) & MPU_INPUT_EMPTY) &&
bus_space_read_1(iot, ioh, MPU_DATA) == MPU_ACK) {
mtx_leave(&audio_lock);
return 0;
}
}
mtx_leave(&audio_lock);
DPRINTF(("mpu_reset: No ACK\n"));
return EIO;
}