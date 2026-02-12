int DecodeSCTP(ThreadVars *tv, DecodeThreadVars *dtv, Packet *p,
const uint8_t *pkt, uint16_t len)
{
StatsIncr(tv, dtv->counter_sctp);

if (unlikely(DecodeSCTPPacket(tv, p,pkt,len) < 0)) {
CLEAR_SCTP_PACKET(p);
return TM_ECODE_FAILED;
}

SCLogDebug("SCTP sp: %" PRIu32 " -> dp: %" PRIu32,
SCTP_GET_SRC_PORT(p), SCTP_GET_DST_PORT(p));

FlowSetupPacket(p);

return TM_ECODE_OK;
}