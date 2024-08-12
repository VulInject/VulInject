static char *
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
VAR7 *VAR8, char *VAR9, size_t VAR10)
{
const char *VAR11;
int VAR12;

if (VAR6 != NULL)
VAR12 = (VAR13)VAR6->VAR14;
else
VAR12 = (VAR13)VAR4->VAR15;

if (VAR12 == VAR16)
VAR11 = "";
else if (VAR12 == VAR17)
VAR11 = "";
else
VAR11 = FUN2(VAR12);

(void) FUN3(VAR9, VAR10, "", VAR11);

return (VAR9);
}