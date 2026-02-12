M_str_int_retval_t M_str_to_int32_ex(const char *s, size_t len, unsigned char base, M_int32 *val, const char **endptr)
{
M_int32            myval  = 0;
M_int64            i64val = 0;
M_str_int_retval_t rv;

if (s == NULL || len == 0)
return M_STR_INT_INVALID;

if (val == NULL)
val = &myval;


rv = M_str_to_int64_ex(s, len, base, &i64val, endptr);
if (i64val > M_INT32_MAX) {
*val = M_INT32_MAX;
rv   = M_STR_INT_OVERFLOW;
} else if (i64val < M_INT32_MIN) {
*val = M_INT32_MIN;
rv   = M_STR_INT_OVERFLOW;
} else {
*val = (M_int32)i64val;
}
return rv;
}