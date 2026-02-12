static int hva_h264_fill_data_nal(struct hva_ctx *pctx,
unsigned int stuffing_bytes, u8 *addr,
unsigned int stream_size, unsigned int *size)
{
struct device *dev = ctx_to_dev(pctx);
const u8 start[] = { 0x00, 0x00, 0x00, 0x01 };

dev_dbg(dev, "%s   %s stuffing bytes %d\n", pctx->name, __func__,
stuffing_bytes);

if ((*size + stuffing_bytes + H264_FILLER_DATA_SIZE) > stream_size) {
dev_dbg(dev, "%s   %s too many stuffing bytes %d\n",
pctx->name, __func__, stuffing_bytes);
return 0;
}


memcpy(addr + *size, start, sizeof(start));
*size += sizeof(start);


addr[*size] = NALU_TYPE_FILLER_DATA;
*size += 1;

memset(addr + *size, 0xff, stuffing_bytes);
*size += stuffing_bytes;

addr[*size] = 0x80;
*size += 1;

return 0;
}