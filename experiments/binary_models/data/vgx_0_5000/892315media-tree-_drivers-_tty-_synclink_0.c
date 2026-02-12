static void mgsl_isr_misc( struct mgsl_struct *info )
{
u16 status = usc_InReg( info, MISR );

if ( debug_level >= DEBUG_LEVEL_ISR )	
printk("%s(%d):mgsl_isr_misc status=%04X\n",
__FILE__,__LINE__,status);

if ((status & MISCSTATUS_RCC_UNDERRUN) &&
(info->params.mode == MGSL_MODE_HDLC)) {


usc_EnableReceiver(info,DISABLE_UNCONDITIONAL);
usc_DmaCmd(info, DmaCmd_ResetRxChannel);
usc_UnlatchRxstatusBits(info, RXSTATUS_ALL);
usc_ClearIrqPendingBits(info, RECEIVE_DATA | RECEIVE_STATUS);
usc_DisableInterrupts(info, RECEIVE_DATA | RECEIVE_STATUS);


info->pending_bh |= BH_RECEIVE;
info->rx_rcc_underrun = true;
}

usc_ClearIrqPendingBits( info, MISC );
usc_UnlatchMiscstatusBits( info, status );

}	