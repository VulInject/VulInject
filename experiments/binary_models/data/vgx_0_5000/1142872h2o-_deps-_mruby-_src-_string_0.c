static struct RString*
str_init_normal_capa(mrb_state *mrb, struct RString *s,
const char *p, mrb_int len, mrb_int capa)
{
char *dst = (char *)mrb_malloc(mrb, capa + 1);
if (p) memcpy(dst, p, len);
dst[len] = '\0';
s->as.heap.ptr = dst;
s->as.heap.len = len;
s->as.heap.aux.capa = capa;
RSTR_UNSET_TYPE_FLAG(s);
return s;
}