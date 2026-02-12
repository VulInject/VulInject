Datum
win866_to_win1251(PG_FUNCTION_ARGS)
{
unsigned char *src = (unsigned char *) PG_GETARG_CSTRING(2);
unsigned char *dest = (unsigned char *) PG_GETARG_CSTRING(3);
int			len = PG_GETARG_INT32(4);
bool		noError = PG_GETARG_BOOL(5);
int			converted;

CHECK_ENCODING_CONVERSION_ARGS(PG_WIN866, PG_WIN1251);

converted = local2local(src, dest, len, PG_WIN866, PG_WIN1251, win8662win1251, noError);

PG_RETURN_INT32(converted);
}