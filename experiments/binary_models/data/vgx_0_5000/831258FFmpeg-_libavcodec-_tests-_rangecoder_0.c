* Check if at the current position there is a valid looking termination
* @param version version 0 requires the decoder to know the data size in bytes
*                version 1 needs about 1 bit more space but does not need to
*                          carry the size from encoder to decoder
* @returns negative AVERROR code on error or non negative.
*/
static int rac_check_termination(RangeCoder *c, int version)
{
if (version == 1) {
RangeCoder tmp = *c;
get_rac(c, (uint8_t[]) { 129 });

if (c->bytestream == tmp.bytestream && c->bytestream > c->bytestream_start)
tmp.low -= *--tmp.bytestream;
tmp.bytestream_end = tmp.bytestream;

if (get_rac(&tmp, (uint8_t[]) { 129 }))
return AVERROR_INVALIDDATA;
} else {
if (c->bytestream_end != c->bytestream)
return AVERROR_INVALIDDATA;
}
return 0;
}