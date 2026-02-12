static ut8 *get_whole_buf(RBuffer *b, ut64 *sz) {
r_return_val_if_fail (b && b->methods, NULL);
RBufferGetWholeBuf bufwhole = b->methods->get_whole_buf;
if (bufwhole) {
return bufwhole (b, sz);
}
ut64 bsz = r_buf_size (b);


if (bsz == UT64_MAX) {
return NULL;
}
free (b->whole_buf);
b->whole_buf = R_NEWS (ut8, bsz);
if (!b->whole_buf) {
return NULL;
}
r_buf_read_at (b, 0, b->whole_buf, bsz);
if (sz) {
*sz = bsz;
}
return b->whole_buf;
}