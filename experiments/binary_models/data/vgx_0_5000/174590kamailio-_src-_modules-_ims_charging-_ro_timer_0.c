void ro_timer_routine(unsigned int ticks, void * attr) {

struct ro_tl *tl, *ctl;
LM_DBG("getting expired ro-sessions\n");

tl = get_expired_ro_sessions(ticks);

while (tl) {
ctl = tl;
tl = tl->next;
ctl->next = NULL;
LM_DBG("Ro Session Timer firing: tl=%p next=%p\n", ctl, tl);
timer_hdl(ctl);
}
}