static int capinc_tty_put_char(struct tty_struct *tty, unsigned char ch)
{
struct capiminor *mp = tty->driver_data;
bool invoke_send = false;
struct sk_buff *skb;
int ret = 1;

pr_debug("capinc_put_char(%u)\n", ch);

spin_lock_bh(&mp->outlock);
skb = mp->outskb;
if (skb) {
if (skb_tailroom(skb) > 0) {
*(skb_put(skb, 1)) = ch;
goto unlock_out;
}
mp->outskb = NULL;
__skb_queue_tail(&mp->outqueue, skb);
mp->outbytes += skb->len;
invoke_send = true;
}

skb = alloc_skb(CAPI_DATA_B3_REQ_LEN + CAPI_MAX_BLKSIZE, GFP_ATOMIC);
if (skb) {
skb_reserve(skb, CAPI_DATA_B3_REQ_LEN);
*(skb_put(skb, 1)) = ch;
mp->outskb = skb;
} else {
printk(KERN_ERR "capinc_put_char: char %u lost\n", ch);
ret = 0;
}

unlock_out:
spin_unlock_bh(&mp->outlock);

if (invoke_send)
handle_minor_send(mp);

return ret;
}