int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, const char *VAR5, const int VAR6)
{
struct timeval VAR7;
int VAR8, VAR9;
fd_set VAR10;
char VAR11;

VAR12:
VAR9 = VAR2->VAR13[0];
FUN2(&VAR10);
FUN3(VAR9, &VAR10);
FUN4(&VAR7, VAR3);
VAR8 = FUN5(VAR9 + 1, &VAR10, NULL, NULL, &VAR7);

if (VAR8 > 0) {
VAR8 = read(VAR9, &VAR11, 1);
return 0;
}
if (FUN6(!VAR8))
return VAR14;
if (FUN7())
goto VAR12;
FUN8(1, VAR4, VAR5, VAR6, "", VAR15, VAR2);

return 0;
}