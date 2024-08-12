static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
unsigned int VAR4,
unsigned int *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);

if (VAR5)
return FUN3(VAR7->VAR8, VAR3, VAR5);

return FUN4(VAR7->VAR8, VAR3, VAR4);
}