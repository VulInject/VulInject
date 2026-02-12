M_utf8_error_t M_utf8_get_chr(const char *str, char *buf, size_t buf_size, size_t *len, const char **next)
{
M_utf8_error_t res;
M_uint32       cp;


res = M_utf8_get_cp(str, &cp, next);
if (res != M_UTF8_ERROR_SUCCESS)
return res;

if (buf == NULL || buf_size == 0)
return M_UTF8_ERROR_SUCCESS;
return M_utf8_from_cp(buf, buf_size, len, cp);
}