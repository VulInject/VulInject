stv0367_ter_signal_type stv0367ter_check_syr(struct stv0367_state *state)
{
int wd = 100;
unsigned short int SYR_var;
s32 SYRStatus;

dprintk("%s:\n", __func__);

SYR_var = stv0367_readbits(state, F367TER_SYR_LOCK);

while ((!SYR_var) && (wd > 0)) {
usleep_range(2000, 3000);
wd -= 2;
SYR_var = stv0367_readbits(state, F367TER_SYR_LOCK);
}

if (!SYR_var)
SYRStatus = FE_TER_NOSYMBOL;
else
SYRStatus =  FE_TER_SYMBOLOK;

dprintk("stv0367ter_check_syr SYRStatus %s\n",
SYR_var == 0 ? "No Symbol" : "OK");

return SYRStatus;
}