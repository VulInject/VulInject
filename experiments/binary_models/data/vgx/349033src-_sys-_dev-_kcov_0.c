static VAR1
FUN1(struct VAR2 *VAR3, int VAR4, int VAR5)
{
uint64_t VAR6, VAR7;

VAR6 = VAR3->VAR8[0];
for (;;) {
if (VAR4 * (VAR6 + VAR5) > VAR3->VAR9)
return (0);

VAR7 = FUN2(&VAR3->VAR8[0], VAR6, VAR6 + VAR5);
if (VAR7 == VAR6)
return (VAR6 * VAR4 + 1);
VAR6 = VAR7;
}
}