tfm_get_n (FILEPTR tfm_fp, unsigned nwords, unsigned char **outbuf)
{
unsigned n = nwords * 4;
void *buf = (void *) malloc (n);

if (buf == NULL) {BCLOSE(tfm_fp); Fatal("(tfm): out of memory error!\n");}
read_multi (buf, 1, n, tfm_fp);
if (FEOF(tfm_fp)) {
BCLOSE(tfm_fp); Fatal("dvilj(tfm): Could not read %u bytes from TFM file.\n", n);
exit (1);
}


if (outbuf) {
*outbuf = buf;
} else {
free (buf);
}
}