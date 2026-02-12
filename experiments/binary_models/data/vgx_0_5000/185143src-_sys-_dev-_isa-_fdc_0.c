void
fdcattach_deferred(void *arg)
{
struct fdc_softc *fdc = arg;
struct fdc_attach_args fa;
int type;


if (fdc->sc_dev.dv_unit == 0)
type = mc146818_read(NULL, NVRAM_DISKETTE); 
else
type = -1;

timeout_set(&fdc->fdcpseudointr_to, fdcpseudointr, fdc);


for (fa.fa_drive = 0; fa.fa_drive < 4; fa.fa_drive++) {
fa.fa_flags = 0;
fa.fa_type = 0;
if (type >= 0 && fa.fa_drive < 2)
fa.fa_deftype = fd_nvtotype(fdc->sc_dev.dv_xname,
type, fa.fa_drive);
else
fa.fa_deftype = NULL;		
(void)config_found(&fdc->sc_dev, (void *)&fa, fddprint);
}
kthread_exit(0);
}