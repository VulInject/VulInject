void setDeferredAggregateLen(client *c, void *node, long length, char prefix) {
serverAssert(length >= 0);


if (node == NULL) return;


const size_t hdr_len = OBJ_SHARED_HDR_STRLEN(length);
const int opt_hdr = length < OBJ_SHARED_BULKHDR_LEN;
if (prefix == '*' && opt_hdr) {
setDeferredReply(c, node, shared.mbulkhdr[length]->ptr, hdr_len);
return;
}
if (prefix == '%' && opt_hdr) {
setDeferredReply(c, node, shared.maphdr[length]->ptr, hdr_len);
return;
}
if (prefix == '~' && opt_hdr) {
setDeferredReply(c, node, shared.sethdr[length]->ptr, hdr_len);
return;
}

char lenstr[128];
size_t lenstr_len = snprintf(lenstr, sizeof(lenstr), "%c%ld\r\n", prefix, length);
setDeferredReply(c, node, lenstr, lenstr_len);
}