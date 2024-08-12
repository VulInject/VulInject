static void FUN1(VAR1 *);

VAR1 *
FUN2()
{
VAR1 *VAR2;

VAR2 = calloc(1, sizeof(VAR1));
if (VAR2 == NULL) {
FUN3("");
return NULL;
}

return VAR2;
}