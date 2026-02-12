int tp3780I_ReadWriteDspDStore(THINKPAD_BD_DATA * pBDData, unsigned int uOpcode,
void __user *pvBuffer, unsigned int uCount,
unsigned long ulDSPAddr)
{
int retval = 0;
DSP_3780I_CONFIG_SETTINGS *pSettings = &pBDData->rDspSettings;
unsigned short usDspBaseIO = pSettings->usDspBaseIO;
bool bRC = 0;

PRINTK_6(TRACE_TP3780I,
"tp3780i::tp3780I_ReadWriteDspDStore entry pBDData %p, uOpcode %x, pvBuffer %p, uCount %x, ulDSPAddr %lx\n",
pBDData, uOpcode, pvBuffer, uCount, ulDSPAddr);

if (pBDData->bDSPEnabled) {
switch (uOpcode) {
case IOCTL_MW_READ_DATA:
bRC = dsp3780I_ReadDStore(usDspBaseIO, pvBuffer, uCount, ulDSPAddr);
break;

case IOCTL_MW_READCLEAR_DATA:
bRC = dsp3780I_ReadAndClearDStore(usDspBaseIO, pvBuffer, uCount, ulDSPAddr);
break;

case IOCTL_MW_WRITE_DATA:
bRC = dsp3780I_WriteDStore(usDspBaseIO, pvBuffer, uCount, ulDSPAddr);
break;
}
}

retval = (bRC) ? -EIO : 0;
PRINTK_2(TRACE_TP3780I, "tp3780i::tp3780I_ReadWriteDspDStore exit retval %x\n", retval);

return retval;
}