static int create(const char *format, const char *arch, int bits, const ut8 *code, int codelen) {
RBin *bin = r_bin_new ();
RBinArchOptions opts;
RBuffer *b;
r_bin_arch_options_init (&opts, arch, bits);
b = r_bin_create (bin, format, code, codelen, NULL, 0, &opts);
if (b) {
ut64 blen;
const ut8 *tmp = r_buf_data (b, &blen);
if (write (1, tmp, blen) != blen) {
R_LOG_ERROR ("Failed to write buffer");
}
r_buf_free (b);
} else {
R_LOG_ERROR ("Cannot create binary for this format '%s'", format);
}
r_bin_free (bin);
return 0;
}