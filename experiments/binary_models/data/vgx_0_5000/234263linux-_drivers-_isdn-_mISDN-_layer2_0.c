static void
l2_timeout(struct FsmInst *fi, int event, void *arg)
{
struct layer2 *l2 = fi->userdata;
struct sk_buff *skb;
struct mISDNhead *hh;

skb = mI_alloc_skb(0, GFP_ATOMIC);
if (!skb) {
printk(KERN_WARNING "%s: L2(%d,%d) nr:%x timer %s no skb\n",
mISDNDevName4ch(&l2->ch), l2->sapi, l2->tei,
l2->ch.nr, event == EV_L2_T200 ? "T200" : "T203");
return;
}
hh = mISDN_HEAD_P(skb);
hh->prim = event == EV_L2_T200 ? DL_TIMER200_IND : DL_TIMER203_IND;
hh->id = l2->ch.nr;
if (*debug & DEBUG_TIMER)
printk(KERN_DEBUG "%s: L2(%d,%d) nr:%x timer %s expired\n",
mISDNDevName4ch(&l2->ch), l2->sapi, l2->tei,
l2->ch.nr, event == EV_L2_T200 ? "T200" : "T203");
if (l2->ch.st)
l2->ch.st->own.recv(&l2->ch.st->own, skb);
}