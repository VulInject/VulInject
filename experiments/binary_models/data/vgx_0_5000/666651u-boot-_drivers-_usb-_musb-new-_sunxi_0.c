static irqreturn_t sunxi_musb_interrupt(int irq, void *__hci)
{
struct musb		*musb = __hci;
irqreturn_t		retval = IRQ_NONE;


musb->int_usb = musb_readb(musb->mregs, MUSB_INTRUSB);
last_int_usb = musb->int_usb;
if (musb->int_usb)
musb_writeb(musb->mregs, MUSB_INTRUSB, musb->int_usb);
musb->int_tx = musb_readw(musb->mregs, MUSB_INTRTX);
if (musb->int_tx)
musb_writew(musb->mregs, MUSB_INTRTX, musb->int_tx);
musb->int_rx = musb_readw(musb->mregs, MUSB_INTRRX);
if (musb->int_rx)
musb_writew(musb->mregs, MUSB_INTRRX, musb->int_rx);

if (musb->int_usb || musb->int_tx || musb->int_rx)
retval |= musb_interrupt(musb);

return retval;
}