static char *
FUN1(const VAR1 *VAR2, struct VAR3 *VAR4)
{
DWORD VAR5 = FUN2(VAR2, VAR6, 0, NULL, NULL, 0);
char *VAR7 = NULL;
if (VAR5)
{
wchar_t *VAR8 = FUN3(VAR5*sizeof(wchar_t), false, VAR4);
if (!VAR8
|| FUN2(VAR2, VAR6, 0, NULL, VAR8, VAR5) == 0)
{
return NULL;
}
VAR7 = FUN4(VAR8, VAR4);
}
return VAR7;
}