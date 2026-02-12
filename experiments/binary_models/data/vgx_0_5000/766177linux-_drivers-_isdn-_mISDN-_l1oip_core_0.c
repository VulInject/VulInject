static int
open_bchannel(struct l1oip *hc, struct dchannel *dch, struct channel_req *rq)
{
struct bchannel	*bch;
int		ch;

if (!test_channelmap(rq->adr.channel, dch->dev.channelmap))
return -EINVAL;
if (rq->protocol == ISDN_P_NONE)
return -EINVAL;
ch = rq->adr.channel; 
bch = hc->chan[ch].bch;
if (!bch) {
printk(KERN_ERR "%s:internal error ch %d has no bch\n",
__func__, ch);
return -EINVAL;
}
if (test_and_set_bit(FLG_OPEN, &bch->Flags))
return -EBUSY; 
bch->ch.protocol = rq->protocol;
rq->ch = &bch->ch;
if (!try_module_get(THIS_MODULE))
printk(KERN_WARNING "%s:cannot get module\n", __func__);
return 0;
}