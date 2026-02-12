int
dwarfstring_append_length(struct dwarfstring_s *g,char *str,
unsigned long slen)
{
unsigned long lastpos = g->s_size - g->s_avail;
int r = 0;

if (!str  || slen ==0) {
return TRUE;
}
if (slen >= g->s_avail) {
unsigned long newlen = 0;

newlen = g->s_size + slen+2;
r = dwarfstring_resize_to(g,newlen);
if (!r) {
return FALSE;
}
}
memcpy(g->s_data + lastpos,str,slen);
g->s_avail -= slen;
g->s_data[g->s_size - g->s_avail] = 0;
return TRUE;
}