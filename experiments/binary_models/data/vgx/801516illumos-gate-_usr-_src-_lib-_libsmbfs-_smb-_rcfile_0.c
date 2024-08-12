int
FUN1(struct VAR1 *VAR2, const char *VAR3, const char *VAR4, int *VAR5)
{
struct VAR6 *VAR7;
struct VAR8 *VAR9;
int VAR10;

FUN2(&VAR11);

VAR7 = FUN3(VAR2, VAR3);
if (!VAR7) {
VAR10 = VAR12;
goto VAR13;
}
VAR9 = FUN4(VAR7, VAR4);
if (!VAR9) {
VAR10 = VAR12;
goto VAR13;
}
VAR14 = 0;
*VAR5 = FUN5(VAR9->VAR15, NULL, 0);
if ((VAR10 = VAR14) != 0) {
fprintf(VAR16, FUN6(VAR17,
""),
VAR9->VAR15, VAR4, VAR3);
}

VAR13:
FUN7(&VAR11);
return (VAR10);
}