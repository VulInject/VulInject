* @oh: struct omap_hwmod *
*
* The MSDI IP block on OMAP2420 has to have both the POW and CLKD
* fields set inside its CON register for a reset to complete
* successfully.  This is not documented in the TRM.  For CLKD, we use
* the value that results in the lowest possible clock rate, to attempt
* to avoid disturbing any cards.
*/
int omap_msdi_reset(struct omap_hwmod *oh)
{
u16 v = 0;
int c = 0;


omap_hwmod_softreset(oh);


v |= MSDI_CON_POW_MASK;
v |= MSDI_TARGET_RESET_CLKD << MSDI_CON_CLKD_SHIFT;
omap_hwmod_write(v, oh, MSDI_CON_OFFSET);


omap_test_timeout((omap_hwmod_read(oh, oh->class->sysc->syss_offs)
& SYSS_RESETDONE_MASK),
MAX_MODULE_SOFTRESET_WAIT, c);

if (c == MAX_MODULE_SOFTRESET_WAIT)
pr_warn("%s: %s: softreset failed (waited %d usec)\n",
__func__, oh->name, MAX_MODULE_SOFTRESET_WAIT);
else
pr_debug("%s: %s: softreset in %d usec\n", __func__,
oh->name, c);


v &= ~MSDI_CON_CLKD_MASK;
omap_hwmod_write(v, oh, MSDI_CON_OFFSET);

return 0;
}