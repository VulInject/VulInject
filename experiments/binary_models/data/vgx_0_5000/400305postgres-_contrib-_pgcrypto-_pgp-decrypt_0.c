static int
parse_symenc_data(PGP_Context *ctx, PullFilter *pkt, MBuf *dst)
{
int			res;
PGP_CFB    *cfb = NULL;
PullFilter *pf_decrypt = NULL;
PullFilter *pf_prefix = NULL;

res = pgp_cfb_create(&cfb, ctx->cipher_algo,
ctx->sess_key, ctx->sess_key_len, 1, NULL);
if (res < 0)
goto out;

res = pullf_create(&pf_decrypt, &pgp_decrypt_filter, cfb, pkt);
if (res < 0)
goto out;

res = pullf_create(&pf_prefix, &prefix_filter, ctx, pf_decrypt);
if (res < 0)
goto out;

res = process_data_packets(ctx, dst, pf_prefix, ALLOW_COMPR, NO_MDC);

out:
if (pf_prefix)
pullf_free(pf_prefix);
if (pf_decrypt)
pullf_free(pf_decrypt);
if (cfb)
pgp_cfb_free(cfb);

return res;
}