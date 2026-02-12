static rsRetVal
processDataUncompressed(const instanceConf_t *const inst,
struct conn_wrkr_s *connWrkr, const char* buf, size_t len)
{
const uchar *pbuf = (const uchar*)buf;
DEFiRet;

if (inst->bDisableLFDelim) {

iRet = processDisableLF(inst, connWrkr, buf, len);
} else if (inst->bSuppOctetFram) {
iRet = processOctetCounting(inst, connWrkr, buf, len);
} else {
const uchar* pbufLast = pbuf + len;
while (pbuf < pbufLast) {
char ch = *pbuf;
if (connWrkr->iMsg < s_iMaxLine) {
if (ch == '\n') {
doSubmitMsg(inst, connWrkr, connWrkr->pMsg, connWrkr->iMsg);
} else {
connWrkr->pMsg[connWrkr->iMsg++] = ch;
}
} else {
doSubmitMsg(inst, connWrkr, connWrkr->pMsg, connWrkr->iMsg);
}
pbuf++;
}
}
RETiRet;
}