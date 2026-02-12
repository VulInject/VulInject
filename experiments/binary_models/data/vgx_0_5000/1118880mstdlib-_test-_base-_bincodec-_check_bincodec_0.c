
START_TEST(check_bincodec_decode)
{
const char *in;
char       *out;
size_t      i;
size_t      out_len;

for (i=0; check_bincodec_decode_data[i].data!=NULL; i++) {
in  = check_bincodec_decode_data[i].data;
out = (char *)M_bincodec_decode_alloc(in, M_str_len(in), &out_len, check_bincodec_decode_data[i].codec);
ck_assert_msg(out != NULL, "%zu: Could not decode", i);
ck_assert_msg(M_str_eq(out, check_bincodec_decode_data[i].out), "%zu: got='%s', expected='%s'", i, out, check_bincodec_decode_data[i].out);
M_free(out);
}
}