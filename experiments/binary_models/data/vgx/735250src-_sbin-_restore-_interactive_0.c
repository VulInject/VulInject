static int
FUN1(const char *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(VAR1);
if (VAR5 == NULL || (!VAR6 && FUN3(VAR5->VAR7, VAR8) == 0))
return (-1);
if (FUN4(VAR5->VAR7) == VAR9)
VAR3->VAR10 = VAR11;
else
VAR3->VAR10 = VAR12;
return (0);
}