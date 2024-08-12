static int
FUN1(VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5;
uint_t VAR6;

if (VAR3 == VAR7)
return (VAR8);

VAR6 = 0;
FUN2();
for (VAR5 = VAR9; VAR5 != NULL; VAR5 = VAR5->VAR10) {
VAR6++;
}
FUN3();

VAR2->VAR11 = VAR6;
VAR2->VAR12 = VAR6 * 2 * sizeof (VAR13);

return (0);
}