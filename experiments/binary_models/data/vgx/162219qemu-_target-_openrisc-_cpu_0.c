static VAR1 *FUN1(const char *VAR2)
{
VAR1 *VAR3;
char *typename;

typename = FUN2(FUN3(""), VAR2);
VAR3 = FUN4(typename);
FUN5(typename);
if (VAR3 != NULL && (!FUN6(VAR3, VAR4) ||
FUN7(VAR3))) {
return NULL;
}
return VAR3;
}