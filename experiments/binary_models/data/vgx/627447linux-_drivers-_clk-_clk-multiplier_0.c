static long FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7 = FUN3(VAR2, VAR3, VAR4,
VAR6->VAR8, VAR6->VAR9);

return *VAR4 * VAR7;
}