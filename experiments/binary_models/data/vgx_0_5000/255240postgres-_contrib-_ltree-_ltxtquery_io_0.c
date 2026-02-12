Datum
ltxtq_recv(PG_FUNCTION_ARGS)
{
StringInfo	buf = (StringInfo) PG_GETARG_POINTER(0);
int			version = pq_getmsgint(buf, 1);
char	   *str;
int			nbytes;
ltxtquery  *res;

if (version != 1)
elog(ERROR, "unsupported ltxtquery version number %d", version);

str = pq_getmsgtext(buf, buf->len - buf->cursor, &nbytes);
res = queryin(str, NULL);
pfree(str);

PG_RETURN_POINTER(res);
}