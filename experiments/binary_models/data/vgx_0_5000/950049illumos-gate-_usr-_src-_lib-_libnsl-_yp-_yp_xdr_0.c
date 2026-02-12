extern bool xdr_ypowner_wrap_string(XDR *, char **);
extern bool xdr_ypreq_newname_string(XDR *, char **);



bool
xdr_datum(XDR *xdrs, datum *pdatum)
{
bool res;
uint_t dsize;


if (xdrs->x_op == XDR_ENCODE) {
if (pdatum->dsize > UINT_MAX)
return (FALSE);
}
dsize = (uint_t)pdatum->dsize;
res = (bool)xdr_bytes(xdrs, (char **)&(pdatum->dptr), &dsize,
YPMAXRECORD);
if (xdrs->x_op == XDR_DECODE) {
pdatum->dsize = dsize;
}

return (res);
}