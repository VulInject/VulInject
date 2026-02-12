void
lacp_linkstate(struct trunk_port *tp)
{
struct lacp_port *lp = LACP_PORT(tp);
u_int8_t old_state;
u_int16_t old_key;

old_state = lp->lp_state;
old_key = lp->lp_key;


if (tp->tp_link_state == LINK_STATE_UNKNOWN ||
tp->tp_link_state == LINK_STATE_FULL_DUPLEX)
lacp_port_enable(lp);
else
lacp_port_disable(lp);

lp->lp_key = lacp_compose_key(lp);

if (old_state != lp->lp_state || old_key != lp->lp_key) {
LACP_DPRINTF((lp, "-> UNSELECTED\n"));
lp->lp_selected = LACP_UNSELECTED;
}
}