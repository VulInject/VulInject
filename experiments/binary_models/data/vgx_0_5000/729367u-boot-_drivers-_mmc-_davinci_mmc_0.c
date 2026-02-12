static int dmmc_check_status(volatile struct davinci_mmc_regs *regs,
uint *cur_st, uint st_ready, uint st_error)
{
uint wdog = WATCHDOG_COUNT;
uint mmcstatus = *cur_st;

while (wdog--) {
if (mmcstatus & st_ready) {
*cur_st = mmcstatus;
mmcstatus = get_val(&regs->mmcst1);
return 0;
} else if (mmcstatus & st_error) {
if (mmcstatus & MMCST0_TOUTRS)
return -ETIMEDOUT;
printf("[ ST0 ERROR %x]\n", mmcstatus);

if (mmcstatus & MMCST0_CRCRS)
return 0;
return -ECOMM;
}
udelay(10);

mmcstatus = get_val(&regs->mmcst0);
}

printf("Status %x Timeout ST0:%x ST1:%x\n", st_ready, mmcstatus,
get_val(&regs->mmcst1));
return -ECOMM;
}