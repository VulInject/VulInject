void
ndr_heap_mkvcb(ndr_heap_t *heap, uint8_t *data, uint32_t datalen,
ndr_vcbuf_t *vcbuf)
{
int mlen;

if (data == NULL || datalen == 0) {
bzero(vcbuf, sizeof (ndr_vcbuf_t));
return;
}

vcbuf->len = datalen;
vcbuf->size = datalen;

mlen = sizeof (ndr_vcbuf_t) + datalen;

vcbuf->vcb = ndr_heap_malloc(heap, mlen);

if (vcbuf->vcb) {
vcbuf->vcb->vc_first_is = 0;
vcbuf->vcb->vc_length_is = datalen;
bcopy(data, vcbuf->vcb->buffer, datalen);
}
}