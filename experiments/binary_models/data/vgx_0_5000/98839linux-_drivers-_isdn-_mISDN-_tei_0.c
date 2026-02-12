static void
tei_id_ver_tout_net(struct FsmInst *fi, int event, void *arg)
{
struct teimgr *tm = fi->userdata;

if (tm->rcnt == 1) {
if (*debug & DEBUG_L2_TEI)
tm->tei_m.printdebug(fi,
"check req for tei %d successful\n", tm->l2->tei);
mISDN_FsmChangeState(fi, ST_TEI_NOP);
} else if (tm->rcnt > 1) {

tei_l2remove(tm->l2);
} else if (--tm->nval) {
if (*debug & DEBUG_L2_TEI)
tm->tei_m.printdebug(fi,
"id check req(%d) for tei %d",
3 - tm->nval, tm->l2->tei);
put_tei_msg(tm->mgr, ID_CHK_REQ, 0, tm->l2->tei);
mISDN_FsmAddTimer(&tm->timer, tm->tval, EV_TIMER, NULL, 4);
} else {
tm->tei_m.printdebug(fi, "check req for tei %d failed",
tm->l2->tei);
mISDN_FsmChangeState(fi, ST_TEI_NOP);
tei_l2remove(tm->l2);
}
}