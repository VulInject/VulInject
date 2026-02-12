static int h264_encode_header(struct venc_h264_inst *inst,
struct mtk_vcodec_mem *bs_buf,
unsigned int *bs_size)
{
int ret = 0;
unsigned int bs_size_sps;
unsigned int bs_size_pps;

ret = h264_encode_sps(inst, bs_buf, &bs_size_sps);
if (ret)
return ret;

ret = h264_encode_pps(inst, &inst->pps_buf, &bs_size_pps);
if (ret)
return ret;

memcpy(bs_buf->va + bs_size_sps, inst->pps_buf.va, bs_size_pps);
*bs_size = bs_size_sps + bs_size_pps;

return ret;
}