int get_ibm_by_utf(st, c1, c2, unidx, ibm_code)
_icv_state	*st;
char            c1, c2;
int             *unidx;
unsigned long   *ibm_code;
{
unsigned long   unicode;

unicode = (unsigned long) ((c1 & ONEBYTE) << 8) + (c2 & ONEBYTE);
*unidx = bisearch(unicode, st, st->table_size);
if ((*unidx) >= 0)
{
if ( st->left_to_right )
*ibm_code = st->table[*unidx].right_code;
else
*ibm_code = st->table[*unidx].left_code;
}
else
;      
fprintf(stderr, "Unicode=%04x, idx=%5d, IBM=%x ", unicode, *unidx, *ibm_code);

return(0);
}