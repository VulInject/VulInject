
START_TEST(check_testing)
{
M_email_t        *email;
char             *out;
M_email_error_t   res;
size_t            len;
size_t            len_read = 0;
const char       *test_data = "a";

len = M_str_len(test_data);
res = M_email_simple_read(&email, test_data, len, M_EMAIL_SIMPLE_READ_NONE, &len_read);
M_printf("res = %d\n", res);
M_printf("len = %zu, len_read = %zu\n", M_str_len(test_data), len_read);

out = M_email_simple_write(email);
M_printf("WRITE:\n'%s'\n", out);
M_free(out);

M_email_destroy(email);
}