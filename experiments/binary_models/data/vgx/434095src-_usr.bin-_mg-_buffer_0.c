int
FUN1(int VAR1, int VAR2)
{
struct VAR3 *VAR4 = NULL;
int VAR5 = 0;

VAR6 = !VAR6;
for (VAR4 = VAR7; VAR4 != NULL; VAR4 = VAR4->VAR8) {
VAR5 = strlen(VAR4->VAR9);
if (VAR4->VAR9[0] != '' && VAR4->VAR9[VAR5 - 1] != '') {
if (VAR6)
VAR4->VAR10 |= VAR11;
else
VAR4->VAR10 &= ~VAR11;
}
}
VAR12->VAR13 |= VAR14;

return (VAR15);
}