static void
FUN1(const VAR1 *VAR2)
{
VAR3 *VAR4 = VAR5->VAR6;
char *VAR7;

VAR4->VAR8 = true;

if (FUN2(VAR2) == 1)
return;

VAR7 = FUN3(VAR2, 1);

VAR4->VAR9 = FUN4(VAR7, &VAR4->VAR10, &VAR4->VAR11);
if (!VAR4->VAR9)
FUN5(VAR12, "");

FUN6(VAR7);
}