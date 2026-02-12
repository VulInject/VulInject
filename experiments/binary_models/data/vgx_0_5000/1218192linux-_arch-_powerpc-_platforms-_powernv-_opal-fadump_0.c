static void opal_fadump_trigger(struct fadump_crash_info_header *fdh,
const char *msg)
{
int rc;


fdh->crashing_cpu = (u32)mfspr(SPRN_PIR);

rc = opal_cec_reboot2(OPAL_REBOOT_MPIPL, msg);
if (rc == OPAL_UNSUPPORTED) {
pr_emerg("Reboot type %d not supported.\n",
OPAL_REBOOT_MPIPL);
} else if (rc == OPAL_HARDWARE)
pr_emerg("No backend support for MPIPL!\n");
}