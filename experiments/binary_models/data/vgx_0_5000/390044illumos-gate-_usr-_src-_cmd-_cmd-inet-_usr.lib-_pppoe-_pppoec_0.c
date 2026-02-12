static int
send_pppoe(const poep_t *poep, const char *msgname,
const ppptun_atype *destaddr)
{
struct strbuf ctrl;
struct strbuf data;
struct ppptun_control *ptc;


ptc = (struct ppptun_control *)pkt_octl;
(void) memset(ptc, '\0', sizeof (*ptc));
ptc->ptc_discrim = PPPOE_DISCRIM;
ptc->ptc_action = PTCA_CONTROL;
ptc->ptc_address = *destaddr;
ctrl.len = sizeof (*ptc);
ctrl.buf = (caddr_t)ptc;
data.len = poe_length(poep) + sizeof (*poep);
data.buf = (caddr_t)poep;
if (verbose)
logerr("%s: Sending %s to %s: %d bytes\n",
myname, msgname, ehost(destaddr), data.len);
if (putmsg(tunfd, &ctrl, &data, 0) < 0) {
logstrerror("putmsg");
return (-1);
}
return (0);
}