static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
unsigned int VAR6 = FUN3(VAR5, VAR3);
unsigned int VAR7 = FUN4(VAR5, VAR3);

return !!(FUN5(VAR5->VAR8, VAR6, FUN6(VAR7)));
}