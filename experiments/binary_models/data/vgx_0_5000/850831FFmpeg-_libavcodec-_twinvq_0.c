static void read_and_decode_spectrum(TwinVQContext *tctx, float *out,
enum TwinVQFrameType ftype)
{
const TwinVQModeTab *mtab = tctx->mtab;
TwinVQFrameData *bits     = &tctx->bits[tctx->cur_frame];
int channels              = tctx->avctx->ch_layout.nb_channels;
int sub        = mtab->fmode[ftype].sub;
int block_size = mtab->size / sub;
float gain[TWINVQ_CHANNELS_MAX * TWINVQ_SUBBLOCKS_MAX];
float ppc_shape[TWINVQ_PPC_SHAPE_LEN_MAX * TWINVQ_CHANNELS_MAX * 4];

int i, j;

dequant(tctx, bits->main_coeffs, out, ftype,
mtab->fmode[ftype].cb0, mtab->fmode[ftype].cb1,
mtab->fmode[ftype].cb_len_read);

dec_gain(tctx, ftype, gain);

if (ftype == TWINVQ_FT_LONG) {
int cb_len_p = (tctx->n_div[3] + mtab->ppc_shape_len * channels - 1) /
tctx->n_div[3];
dequant(tctx, bits->ppc_coeffs, ppc_shape,
TWINVQ_FT_PPC, mtab->ppc_shape_cb,
mtab->ppc_shape_cb + cb_len_p * TWINVQ_PPC_SHAPE_CB_SIZE,
cb_len_p);
}

for (i = 0; i < channels; i++) {
float *chunk = out + mtab->size * i;
float lsp[TWINVQ_LSP_COEFS_MAX];

for (j = 0; j < sub; j++) {
tctx->dec_bark_env(tctx, bits->bark1[i][j],
bits->bark_use_hist[i][j], i,
tctx->tmp_buf, gain[sub * i + j], ftype);

tctx->fdsp->vector_fmul(chunk + block_size * j,
chunk + block_size * j,
tctx->tmp_buf, block_size);
}

if (ftype == TWINVQ_FT_LONG)
tctx->decode_ppc(tctx, bits->p_coef[i], bits->g_coef[i],
ppc_shape + i * mtab->ppc_shape_len, chunk);

decode_lsp(tctx, bits->lpc_idx1[i], bits->lpc_idx2[i],
bits->lpc_hist_idx[i], lsp, tctx->lsp_hist[i]);

dec_lpc_spectrum_inv(tctx, lsp, ftype, tctx->tmp_buf);

for (j = 0; j < mtab->fmode[ftype].sub; j++) {
tctx->fdsp->vector_fmul(chunk, chunk, tctx->tmp_buf, block_size);
chunk += block_size;
}
}
}