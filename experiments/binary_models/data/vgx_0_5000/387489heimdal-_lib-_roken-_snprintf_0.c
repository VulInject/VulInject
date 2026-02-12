rk_vsnprintf (char *str, size_t sz, const char *format, va_list args)
{
struct snprintf_state state;
int ret;
unsigned char *ustr = (unsigned char *)str;

state.max_sz = 0;
state.sz     = sz;
state.str    = ustr;
state.s      = ustr;
state.theend = ustr + sz - (sz > 0);
state.append_char = sn_append_char;

ret = xyzprintf (&state, format, args);
if (state.s != NULL && sz != 0)
*state.s = '\0';
return ret;
}