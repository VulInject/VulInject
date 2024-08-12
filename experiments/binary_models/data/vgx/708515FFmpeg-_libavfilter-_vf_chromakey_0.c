static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4,
char *VAR5, int VAR6, int VAR7)
{
int VAR8;

VAR8 = FUN2(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
if (VAR8 < 0)
return VAR8;

return FUN3(VAR2->VAR9[0]);
}