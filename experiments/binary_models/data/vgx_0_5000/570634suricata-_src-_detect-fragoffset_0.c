static int DetectFragOffsetMatch (DetectEngineThreadCtx *det_ctx,
Packet *p, const Signature *s, const SigMatchCtx *ctx)
{
uint16_t frag = 0;
const DetectFragOffsetData *fragoff = (const DetectFragOffsetData *)ctx;

if (PKT_IS_PSEUDOPKT(p))
return 0;

if (PKT_IS_IPV4(p)) {
frag = IPV4_GET_IPOFFSET(p);
} else if (PKT_IS_IPV6(p)) {
if (IPV6_EXTHDR_ISSET_FH(p)) {
frag = IPV6_EXTHDR_GET_FH_OFFSET(p);
} else {
return 0;
}
} else {
SCLogDebug("No IPv4 or IPv6 packet");
return 0;
}

return FragOffsetMatch(frag, fragoff->mode, fragoff->frag_off);
}