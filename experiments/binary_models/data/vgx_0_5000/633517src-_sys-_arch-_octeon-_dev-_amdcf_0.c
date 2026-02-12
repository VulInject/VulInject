int
cfi_wait_ready(struct amdcf_softc *sc, u_int ofs, u_int timeout, u_int count)
{
int done, error;
u_int st0 = 0, st = 0;

done = 0;
error = 0;

if (!timeout)
timeout = 100;  
if (!count)
count = 100;    

while (!done && !error && count) {
DELAY(timeout);

count--;


st0 = cfi_read(sc, ofs, 0);
st = cfi_read(sc, ofs, 0);
done = ((st & cfi_make_cmd(0x40, sc->sc_mask)) ==
(st0 & cfi_make_cmd(0x40, sc->sc_mask))) ? 1 : 0;

break;
}
if (!done && !error)
error = ETIMEDOUT;
if (error)
printf("\nerror=%d (st 0x%x st0 0x%x) at offset=%x\n",
error, st, st0, ofs);
return error;
}