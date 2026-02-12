M_str_int_retval_t M_str_to_uint64_ex(const char *s, size_t len, unsigned char base, M_uint64 *val, const char **endptr)
{
M_uint64           myval = 0;
M_bool             is_neg;
M_str_int_retval_t rv;

if (s == NULL || len == 0)
return M_STR_INT_INVALID;

if (val == NULL)
val = &myval;

M_str_intconv_prep(&s, &len, &base, &is_neg);


rv    = M_str_to_uint64_int(s, len, base, val, endptr);

if (is_neg) {
if (rv == M_STR_INT_OVERFLOW) {
*val = M_UINT64_MAX;
} else {
*val = ~(*val) + 1ULL; 
}
} else {
if (rv == M_STR_INT_OVERFLOW) {
*val = M_UINT64_MAX;
}
}

return rv;
}