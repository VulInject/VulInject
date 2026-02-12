int
finalize(struct sc_context *ctx, struct sm_info *sm_info, struct sc_remote_data *rdata, unsigned char *out, size_t out_len)
{
int rv = SC_ERROR_INTERNAL;

LOG_FUNC_CALLED(ctx);
sc_debug(ctx, SC_LOG_DEBUG_SM, "SM finalize: out buffer(%"SC_FORMAT_LEN_SIZE_T"u) %p",
out_len, out);
if (!sm_info || !rdata)
LOG_FUNC_RETURN(ctx, SC_SUCCESS);

if (sm_info->sm_type == SM_TYPE_GP_SCP01)
rv = sm_gp_decode_card_answer(ctx, rdata, out, out_len);
else if (sm_info->card_type/10*10 == SC_CARD_TYPE_IASECC_BASE)
rv = sm_iasecc_decode_card_data(ctx, sm_info, rdata, out, out_len);
else
LOG_TEST_RET(ctx, SC_ERROR_NOT_SUPPORTED, "SM finalize: cannot decode card response(s)");

LOG_FUNC_RETURN(ctx, rv);
}