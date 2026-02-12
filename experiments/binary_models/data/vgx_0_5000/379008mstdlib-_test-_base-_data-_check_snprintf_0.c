
START_TEST(check_snprintf_string)
{
char   buf[512];
size_t buf_size;
size_t elen;
size_t ret;
size_t i;

for (i=0; check_snprintf_string_data[i].out != NULL; i++) {
buf_size = sizeof(buf);
if (check_snprintf_string_data[i].buf_size != -1)
buf_size = (size_t)check_snprintf_string_data[i].buf_size;

if (check_snprintf_string_data[i].str_len != -1) {
ret = M_snprintf(buf, buf_size, check_snprintf_string_data[i].fmt, check_snprintf_string_data[i].str_len, check_snprintf_string_data[i].str);
} else {
ret = M_snprintf(buf, buf_size, check_snprintf_string_data[i].fmt, check_snprintf_string_data[i].str);
}

ck_assert_msg(M_str_eq(buf, check_snprintf_string_data[i].out), "%llu: Failed (%s), got '%s' expected '%s'", (llu)i, check_snprintf_string_data[i].fmt, buf, check_snprintf_string_data[i].out);

if (check_snprintf_string_data[i].elen != 0) {
elen = check_snprintf_string_data[i].elen;
} else {
elen = M_str_len(buf);
}
ck_assert_msg(ret == elen, "%llu: Output length failure, got '%llu' expected '%llu'", (llu)i, (llu)ret, (llu)elen);
}
}