M_str_int_retval_t M_str_to_uint32_ex(const char *s, size_t len, unsigned char base, M_uint32 *val, const char **endptr)
{
M_uint32           myval  = 0;
M_uint64           u64val = 0;
M_str_int_retval_t rv;

if (s == NULL || len == 0)
return M_STR_INT_INVALID;

if (val == NULL)
val = &myval;


rv = M_str_to_uint64_ex(s, len, base, &u64val, endptr);
if (u64val > M_UINT32_MAX) {
*val = M_UINT32_MAX;
rv   = M_STR_INT_OVERFLOW;
} else {
*val = (M_uint32)u64val;
}
return rv;
}