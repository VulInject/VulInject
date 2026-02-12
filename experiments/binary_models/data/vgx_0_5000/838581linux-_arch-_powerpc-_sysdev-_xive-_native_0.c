static void xive_native_update_pending(struct xive_cpu *xc)
{
u8 he, cppr;
u16 ack;


ack = be16_to_cpu(__raw_readw(xive_tima + TM_SPC_ACK_HV_REG));


mb();


cppr = ack & 0xff;
he = (ack >> 8) >> 6;
switch(he) {
case TM_QW3_NSR_HE_NONE: 
break;
case TM_QW3_NSR_HE_PHYS: 
if (cppr == 0xff)
return;

xc->pending_prio |= 1 << cppr;


if (cppr >= xc->cppr)
pr_err("CPU %d odd ack CPPR, got %d at %d\n",
smp_processor_id(), cppr, xc->cppr);


xc->cppr = cppr;
break;
case TM_QW3_NSR_HE_POOL: 
case TM_QW3_NSR_HE_LSI:  
pr_err("CPU %d got unexpected interrupt type HE=%d\n",
smp_processor_id(), he);
return;
}
}