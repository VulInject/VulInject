static void
find_all_servers(int localid)
{
struct strbuf ctrl;
struct strbuf data;
poep_t *poep;
int flags;
struct sigaction act;
struct ppptun_control *ptc;


(void) memset(&act, '\0', sizeof (act));
act.sa_handler = alarm_hand;
(void) sigaction(SIGALRM, &act, NULL);
(void) alarm((pado_wait_time + 999) / 1000);


if (send_padi(localid) != 0)
return;


for (;;) {
ctrl.maxlen = PKT_OCTL_LEN;
ctrl.buf = (caddr_t)pkt_octl;
data.maxlen = PKT_INPUT_LEN;
data.buf = (caddr_t)pkt_input;
flags = 0;

if (pppoec_getmsg(tunfd, &ctrl, &data, &flags) < 0)
break;


if (ctrl.len != sizeof (*ptc)) {
if (verbose)
logerr("%s: unexpected %d byte"
" control message from driver.\n", myname,
ctrl.len);
continue;
}
ptc = (struct ppptun_control *)pkt_octl;
poep = (poep_t *)pkt_input;


if (poe_code(poep) == POECODE_PADO) {
display_pppoe(stdout, poep, data.len,
&ptc->ptc_address);
}
}
}