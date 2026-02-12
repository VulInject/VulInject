static void codec_vp9_set_refs(struct amvdec_session *sess,
struct codec_vp9 *vp9)
{
struct amvdec_core *core = sess->core;
int i;

for (i = 0; i < REFS_PER_FRAME; ++i) {
struct vp9_frame *frame = vp9->frame_refs[i];
int id_y;
int id_u_v;

if (!frame)
continue;

if (codec_hevc_use_fbc(sess->pixfmt_cap, vp9->is_10bit)) {
id_y = frame->index;
id_u_v = id_y;
} else {
id_y = frame->index * 2;
id_u_v = id_y + 1;
}

amvdec_write_dos(core, HEVCD_MPP_ANC_CANVAS_DATA_ADDR,
(id_u_v << 16) | (id_u_v << 8) | id_y);
}
}