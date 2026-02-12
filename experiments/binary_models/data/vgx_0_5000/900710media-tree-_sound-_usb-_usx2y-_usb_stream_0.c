static int submit_urbs(struct usb_stream_kernel *sk,
struct urb *inurb, struct urb *outurb)
{
int err;
prepare_inurb(sk->idle_outurb->number_of_packets, sk->idle_inurb);
err = usb_submit_urb(sk->idle_inurb, GFP_ATOMIC);
if (err < 0) {
snd_printk(KERN_ERR "%i\n", err);
return err;
}
sk->idle_inurb = sk->completed_inurb;
sk->completed_inurb = inurb;
err = usb_submit_urb(sk->idle_outurb, GFP_ATOMIC);
if (err < 0) {
snd_printk(KERN_ERR "%i\n", err);
return err;
}
sk->idle_outurb = sk->completed_outurb;
sk->completed_outurb = outurb;
return 0;
}