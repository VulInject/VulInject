static Dtls13RtxRecord* Dtls13RtxNewRecord(WOLFSSL* ssl, byte* data,
word16 length, enum HandShakeType handshakeType, w64wrapper seq)
{
w64wrapper epochNumber;
Dtls13RtxRecord* r;

WOLFSSL_ENTER("Dtls13RtxNewRecord");

if (ssl->dtls13EncryptEpoch == NULL)
return NULL;

epochNumber = ssl->dtls13EncryptEpoch->epochNumber;

r = (Dtls13RtxRecord*)XMALLOC(sizeof(*r), ssl->heap, DYNAMIC_TYPE_DTLS_MSG);
if (r == NULL)
return NULL;

r->data = (byte*)XMALLOC(length, ssl->heap, DYNAMIC_TYPE_DTLS_MSG);
if (r->data == NULL) {
XFREE(r, ssl->heap, DYNAMIC_TYPE_DTLS_MSG);
return NULL;
}

XMEMCPY(r->data, data, length);
r->epoch = epochNumber;
r->length = length;
r->next = NULL;
r->handshakeType = handshakeType;
r->seq[0] = seq;
r->rnIdx = 1;

return r;
}