static int FUNC(user_data_unregistered)
(CodedBitstreamContext *ctx, RWContext *rw,
SEIRawUserDataUnregistered *current, SEIMessageState *state)
{
int err, i;

HEADER("User Data Unregistered");

if (state->payload_size < 16) {
av_log(ctx->log_ctx, AV_LOG_ERROR,
"Invalid SEI user data unregistered payload.\n");
return AVERROR_INVALIDDATA;
}
current->data_length = state->payload_size - 16;

for (i = 0; i < 16; i++)
us(8, uuid_iso_iec_11578[i], 0x00, 0xff, 1, i);

allocate(current->data, current->data_length);

for (i = 0; i < current->data_length; i++)
xu(8, user_data_payload_byte[i], current->data[i], 0x00, 0xff, 1, i);

return 0;
}