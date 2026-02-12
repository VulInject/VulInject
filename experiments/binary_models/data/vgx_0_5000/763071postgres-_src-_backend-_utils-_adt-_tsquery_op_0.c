
CMPFUNC(tsquery_lt, res < 0);
CMPFUNC(tsquery_le, res <= 0);
CMPFUNC(tsquery_eq, res == 0);
CMPFUNC(tsquery_ge, res >= 0);
CMPFUNC(tsquery_gt, res > 0);
CMPFUNC(tsquery_ne, res != 0);

TSQuerySign
makeTSQuerySign(TSQuery a)
{
int			i;
QueryItem  *ptr = GETQUERY(a);
TSQuerySign sign = 0;

for (i = 0; i < a->size; i++)
{
if (ptr->type == QI_VAL)
sign |= ((TSQuerySign) 1) << (((unsigned int) ptr->qoperand.valcrc) % TSQS_SIGLEN);
ptr++;
}

return sign;
}