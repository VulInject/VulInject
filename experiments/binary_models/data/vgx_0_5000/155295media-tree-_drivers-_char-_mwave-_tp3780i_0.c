int tp3780I_InitializeBoardData(THINKPAD_BD_DATA * pBDData)
{
int retval = 0;
DSP_3780I_CONFIG_SETTINGS *pSettings = &pBDData->rDspSettings;


PRINTK_2(TRACE_TP3780I, "tp3780i::tp3780I_InitializeBoardData entry pBDData %p\n", pBDData);

pBDData->bDSPEnabled = false;
pSettings->bInterruptClaimed = false;

retval = smapi_init();
if (retval) {
PRINTK_ERROR(KERN_ERR_MWAVE "tp3780i::tp3780I_InitializeBoardData: Error: SMAPI is not available on this machine\n");
} else {
if (mwave_3780i_irq || mwave_3780i_io || mwave_uart_irq || mwave_uart_io) {
retval = smapi_set_DSP_cfg();
}
}

PRINTK_2(TRACE_TP3780I, "tp3780i::tp3780I_InitializeBoardData exit retval %x\n", retval);

return retval;
}