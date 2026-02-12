static void check_change( unsigned long dummy )
{
static int    drive = 0;

unsigned long flags;
unsigned char old_porta;
int			  stat;

if (++drive > 1 || !UD.connected)
drive = 0;


local_irq_save(flags);

if (!stdma_islocked()) {
sound_ym.rd_data_reg_sel = 14;
old_porta = sound_ym.rd_data_reg_sel;
sound_ym.wd_data = (old_porta | DSKDRVNONE) &
~(drive == 0 ? DSKDRV0 : DSKDRV1);
stat = !!(FDC_READ( FDCREG_STATUS ) & FDCSTAT_WPROT);
sound_ym.wd_data = old_porta;

if (stat != UD.wpstat) {
DPRINT(( "wpstat[%d] = %d\n", drive, stat ));
UD.wpstat = stat;
set_bit (drive, &changed_floppies);
}
}
local_irq_restore(flags);

start_check_change_timer();
}