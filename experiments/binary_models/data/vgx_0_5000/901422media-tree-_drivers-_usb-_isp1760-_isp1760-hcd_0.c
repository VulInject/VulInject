static void transform_add_int(struct isp1760_qh *qh,
struct isp1760_qtd *qtd, struct ptd *ptd)
{
u32 usof;
u32 period;



if (qtd->urb->dev->speed == USB_SPEED_HIGH) {

period = qtd->urb->interval >> 3;

if (qtd->urb->interval > 4)
usof = 0x01; 
else if (qtd->urb->interval > 2)
usof = 0x22; 
else if (qtd->urb->interval > 1)
usof = 0x55; 
else
usof = 0xff; 
} else {

period = qtd->urb->interval;
usof = 0x0f;		



ptd->dw5 = 0xff; 
}

period = period >> 1;
period &= 0xf8; 

ptd->dw2 |= period;
ptd->dw4 = usof;
}