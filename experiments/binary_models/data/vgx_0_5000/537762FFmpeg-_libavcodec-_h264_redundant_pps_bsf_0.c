static int h264_redundant_pps_update_fragment(AVBSFContext *bsf,
AVPacket *pkt,
CodedBitstreamFragment *au)
{
H264RedundantPPSContext *ctx = bsf->priv_data;
int err, i;

for (i = 0; i < au->nb_units; i++) {
CodedBitstreamUnit *nal = &au->units[i];

if (nal->type == H264_NAL_PPS) {
err = h264_redundant_pps_fixup_pps(ctx, nal);
if (err < 0)
return err;
}
if (nal->type == H264_NAL_SLICE ||
nal->type == H264_NAL_IDR_SLICE) {
H264RawSlice *slice = nal->content;
h264_redundant_pps_fixup_slice(ctx, &slice->header);
}
}

return 0;
}

static const CBSBSFType h264_redundant_pps_type = {
.codec_id        = AV_CODEC_ID_H264,
.fragment_name   = "access unit",
.unit_name       = "NAL unit",
.update_fragment = &h264_redundant_pps_update_fragment,
};