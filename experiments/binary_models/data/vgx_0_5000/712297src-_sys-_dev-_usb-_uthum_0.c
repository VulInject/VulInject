int
uthum_ntc_getdata(struct uthum_softc *sc, int *val)
{
uint8_t buf[8];

if (val == NULL)
return EIO;


if (uthum_read_data(sc, CMD_GETDATA_NTC, buf, sizeof(buf), 10) != 0) {
DPRINTF(("uthum: data read fail\n"));
return EIO;
}


if (buf[2] !=  CMD_GETDATA_EOF2) {
DPRINTF(("uthum: broken ntc data 0x%.2x 0x%.2x 0x%.2x\n",
buf[0], buf[1], buf[2]));
return EIO;
}

*val = (buf[0] << 8) + buf[1];
return 0;
}