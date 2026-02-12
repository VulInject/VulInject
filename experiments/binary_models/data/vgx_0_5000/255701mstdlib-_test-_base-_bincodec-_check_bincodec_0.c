
START_TEST(check_bincodec_encode_alloc)
{
const char *in;
char       *out;
size_t      i;

for (i=0; check_bincodec_encode_data[i].data!=NULL; i++) {
in  = check_bincodec_encode_data[i].data;
out = M_bincodec_encode_alloc((const M_uint8 *)in, M_str_len(in), check_bincodec_encode_data[i].wrap, check_bincodec_encode_data[i].codec);
ck_assert_msg(out != NULL, "%zu: Could not encode", i);
if (out == NULL)
continue;
ck_assert_msg(M_str_eq(out, check_bincodec_encode_data[i].out), "%zu: got='%s', expected='%s'", i, out, check_bincodec_encode_data[i].out);
M_free(out);
}
}