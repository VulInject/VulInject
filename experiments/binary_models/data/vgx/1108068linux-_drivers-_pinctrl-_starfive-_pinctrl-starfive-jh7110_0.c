static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2,
struct VAR4, VAR2);
const struct VAR6 *VAR7 = VAR5->VAR7;
void VAR8 *VAR9 = VAR5->VAR10 + VAR7->VAR11
+ 4 * (VAR3 / 32);

return !!(FUN3(VAR9) & FUN4(VAR3 % 32));
}