static int FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, const char *VAR5,
VAR6 *VAR7, void *VAR8)
{
(void)FUN2(VAR2, VAR3, VAR4, VAR5, VAR7, VAR8);
if (VAR7 != NULL && (*VAR7 == 0))
{
FUN3("");
return VAR9;
}
return VAR10;
}