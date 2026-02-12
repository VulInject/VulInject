int
bnx_acquire_nvram_lock(struct bnx_softc *sc)
{
u_int32_t		val;
int			j;

DBPRINT(sc, BNX_VERBOSE, "Acquiring NVRAM lock.\n");


REG_WR(sc, BNX_NVM_SW_ARB, BNX_NVM_SW_ARB_ARB_REQ_SET2);
for (j = 0; j < NVRAM_TIMEOUT_COUNT; j++) {
val = REG_RD(sc, BNX_NVM_SW_ARB);
if (val & BNX_NVM_SW_ARB_ARB_ARB2)
break;

DELAY(5);
}

if (j >= NVRAM_TIMEOUT_COUNT) {
DBPRINT(sc, BNX_WARN, "Timeout acquiring NVRAM lock!\n");
return (EBUSY);
}

return (0);
}