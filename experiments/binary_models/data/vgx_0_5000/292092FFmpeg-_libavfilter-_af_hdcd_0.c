static void hdcd_process(HDCDContext *ctx, hdcd_state *state, int32_t *samples, int count, int stride)
{
int32_t *samples_end = samples + count * stride;
int gain = state->running_gain;
int peak_extend, target_gain;
int lead = 0;

if (ctx->analyze_mode)
hdcd_analyze_prepare(state, samples, count, stride);

hdcd_control(ctx, state, &peak_extend, &target_gain);
while (count > lead) {
int envelope_run;
int run;

av_assert0(samples + lead * stride + stride * (count - lead) <= samples_end);
run = hdcd_scan(ctx, state, 1, samples + lead * stride, count - lead, 0) + lead;
envelope_run = run - 1;

av_assert0(samples + envelope_run * stride <= samples_end);
if (ctx->analyze_mode)
gain = hdcd_analyze(samples, envelope_run, stride, gain, target_gain, peak_extend, ctx->analyze_mode, state->sustain, -1);
else
gain = hdcd_envelope(samples, envelope_run, stride, ctx->bits_per_sample, gain, target_gain, peak_extend);

samples += envelope_run * stride;
count -= envelope_run;
lead = run - envelope_run;
hdcd_control(ctx, state, &peak_extend, &target_gain);
}
if (lead > 0) {
av_assert0(samples + lead * stride <= samples_end);
if (ctx->analyze_mode)
gain = hdcd_analyze(samples, lead, stride, gain, target_gain, peak_extend, ctx->analyze_mode, state->sustain, -1);
else
gain = hdcd_envelope(samples, lead, stride, ctx->bits_per_sample, gain, target_gain, peak_extend);
}

state->running_gain = gain;
}