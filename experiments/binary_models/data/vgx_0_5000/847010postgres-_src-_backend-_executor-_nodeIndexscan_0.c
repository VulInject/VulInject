void
ExecIndexEvalRuntimeKeys(ExprContext *econtext,
IndexRuntimeKeyInfo *runtimeKeys, int numRuntimeKeys)
{
int			j;
MemoryContext oldContext;


oldContext = MemoryContextSwitchTo(econtext->ecxt_per_tuple_memory);

for (j = 0; j < numRuntimeKeys; j++)
{
ScanKey		scan_key = runtimeKeys[j].scan_key;
ExprState  *key_expr = runtimeKeys[j].key_expr;
Datum		scanvalue;
bool		isNull;


scanvalue = ExecEvalExpr(key_expr,
econtext,
&isNull);
if (isNull)
{
scan_key->sk_argument = scanvalue;
scan_key->sk_flags |= SK_ISNULL;
}
else
{
if (runtimeKeys[j].key_toastable)
scanvalue = PointerGetDatum(PG_DETOAST_DATUM(scanvalue));
scan_key->sk_argument = scanvalue;
scan_key->sk_flags &= ~SK_ISNULL;
}
}

MemoryContextSwitchTo(oldContext);
}