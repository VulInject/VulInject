static u32 vidtv_mux_pad_with_nulls(struct vidtv_mux *m, u32 npkts)
{
struct null_packet_write_args args = {
.dest_buf           = m->mux_buf,
.buf_sz             = m->mux_buf_sz,
.dest_offset        = m->mux_buf_offset,
};
u32 initial_offset = m->mux_buf_offset;
struct vidtv_mux_pid_ctx *ctx;
u32 nbytes;
u32 i;

ctx = vidtv_mux_get_pid_ctx(m, TS_NULL_PACKET_PID);

args.continuity_counter = &ctx->cc;

for (i = 0; i < npkts; ++i) {
m->mux_buf_offset += vidtv_ts_null_write_into(args);
args.dest_offset  = m->mux_buf_offset;
}

nbytes = m->mux_buf_offset - initial_offset;


if (nbytes != npkts * TS_PACKET_LEN)
dev_err_ratelimited(m->dev, "%d != %d\n",
nbytes, npkts * TS_PACKET_LEN);

return nbytes;
}