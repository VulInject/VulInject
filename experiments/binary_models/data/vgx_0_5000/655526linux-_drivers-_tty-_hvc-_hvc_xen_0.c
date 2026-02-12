static int domU_read_console(uint32_t vtermno, char *buf, int len)
{
struct xencons_interface *intf;
XENCONS_RING_IDX cons, prod;
int recv = 0;
struct xencons_info *xencons = vtermno_to_xencons(vtermno);
unsigned int eoiflag = 0;

if (xencons == NULL)
return -EINVAL;
intf = xencons->intf;

cons = intf->in_cons;
prod = intf->in_prod;
mb();			

if ((prod - cons) > sizeof(intf->in)) {
pr_err_once("xencons: Illegal ring page indices");
return -EINVAL;
}

while (cons != prod && recv < len)
buf[recv++] = intf->in[MASK_XENCONS_IDX(cons++, intf->in)];

mb();			
intf->in_cons = cons;


if (intf->out_cons != xencons->out_cons) {
xencons->out_cons = intf->out_cons;
xencons->out_cons_same = 0;
}
if (recv) {
notify_daemon(xencons);
} else if (xencons->out_cons_same++ > 1) {
eoiflag = XEN_EOI_FLAG_SPURIOUS;
}

xen_irq_lateeoi(xencons->irq, eoiflag);

return recv;
}