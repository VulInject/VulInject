static void
irnet_post_event(irnet_socket *	ap,
irnet_event	event,
__u32		saddr,
__u32		daddr,
char *		name,
__u16		hints)
{
int			index;		

DENTER(CTRL_TRACE, "(ap=0x%p, event=%d, daddr=%08x, name=``%s'')\n",
ap, event, daddr, name);


spin_lock_bh(&irnet_events.spinlock);


index = irnet_events.index;
irnet_events.log[index].event = event;
irnet_events.log[index].daddr = daddr;
irnet_events.log[index].saddr = saddr;

if(name)
strcpy(irnet_events.log[index].name, name);
else
irnet_events.log[index].name[0] = '\0';

irnet_events.log[index].hints.word = hints;

if((ap != (irnet_socket *) NULL) && (ap->ppp_open))
irnet_events.log[index].unit = ppp_unit_number(&ap->chan);
else
irnet_events.log[index].unit = -1;


irnet_events.index = (index + 1) % IRNET_MAX_EVENTS;

DEBUG(CTRL_INFO, "New event index is %d\n", irnet_events.index);


spin_unlock_bh(&irnet_events.spinlock);


wake_up_interruptible_all(&irnet_events.rwait);

DEXIT(CTRL_TRACE, "\n");
}