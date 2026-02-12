static void mon_text_read_isodesc(struct mon_reader_text *rp,
struct mon_text_ptr *p, const struct mon_event_text *ep)
{
int ndesc;	
int i;
const struct mon_iso_desc *dp;

p->cnt += snprintf(p->pbuf + p->cnt, p->limit - p->cnt,
" %d", ep->numdesc);
ndesc = ep->numdesc;
if (ndesc > ISODESC_MAX)
ndesc = ISODESC_MAX;
if (ndesc < 0)
ndesc = 0;
dp = ep->isodesc;
for (i = 0; i < ndesc; i++) {
p->cnt += snprintf(p->pbuf + p->cnt, p->limit - p->cnt,
" %d:%u:%u", dp->status, dp->offset, dp->length);
dp++;
}
}