av_cold void ff_pixblockdsp_init(PixblockDSPContext *c, AVCodecContext *avctx)
{
av_unused const unsigned high_bit_depth = avctx->bits_per_raw_sample > 8;

c->diff_pixels_unaligned =
c->diff_pixels = diff_pixels_c;

switch (avctx->bits_per_raw_sample) {
case 9:
case 10:
case 12:
case 14:
c->get_pixels_unaligned =
c->get_pixels = get_pixels_16_c;
break;
default:
if (avctx->bits_per_raw_sample<=8 || avctx->codec_type != AVMEDIA_TYPE_VIDEO) {
c->get_pixels_unaligned =
c->get_pixels = get_pixels_8_c;
}
break;
}

ff_pixblockdsp_init_aarch64(c, avctx, high_bit_depth);
ff_pixblockdsp_init_alpha(c, avctx, high_bit_depth);
ff_pixblockdsp_init_arm(c, avctx, high_bit_depth);
ff_pixblockdsp_init_ppc(c, avctx, high_bit_depth);
ff_pixblockdsp_init_riscv(c, avctx, high_bit_depth);
ff_pixblockdsp_init_x86(c, avctx, high_bit_depth);
ff_pixblockdsp_init_mips(c, avctx, high_bit_depth);
}