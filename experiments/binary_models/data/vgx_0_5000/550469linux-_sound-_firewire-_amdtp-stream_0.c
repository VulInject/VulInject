int amdtp_stream_set_parameters(struct amdtp_stream *s, unsigned int rate,
unsigned int data_block_quadlets, unsigned int pcm_frame_multiplier)
{
unsigned int sfc;

for (sfc = 0; sfc < ARRAY_SIZE(amdtp_rate_table); ++sfc) {
if (amdtp_rate_table[sfc] == rate)
break;
}
if (sfc == ARRAY_SIZE(amdtp_rate_table))
return -EINVAL;

s->sfc = sfc;
s->data_block_quadlets = data_block_quadlets;
s->syt_interval = amdtp_syt_intervals[sfc];


s->transfer_delay = TRANSFER_DELAY_TICKS - TICKS_PER_CYCLE;


if (s->flags & CIP_BLOCKING)
s->transfer_delay += TICKS_PER_SECOND * s->syt_interval / rate;

s->pcm_frame_multiplier = pcm_frame_multiplier;

return 0;
}