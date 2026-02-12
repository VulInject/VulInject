void dsp_hwec_disable(struct dsp *dsp)
{
struct mISDN_ctrl_req	cq;

if (!dsp) {
printk(KERN_ERR "%s: failed to disable hwec: dsp is NULL\n",
__func__);
return;
}

printk(KERN_DEBUG "%s: disabling hwec\n", __func__);
memset(&cq, 0, sizeof(cq));
cq.op = MISDN_CTRL_HFC_ECHOCAN_OFF;
if (!dsp->ch.peer->ctrl(&dsp->ch, CONTROL_CHANNEL, &cq)) {
printk(KERN_DEBUG "%s: CONTROL_CHANNEL failed\n",
__func__);
return;
}
}