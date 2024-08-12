static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR4->VAR7;
struct mmp_addr VAR8;

memset(&VAR8, 0, sizeof(VAR8));
VAR8.VAR9[0] = (VAR2->VAR10 * VAR2->VAR11 + VAR2->VAR12)
* VAR2->VAR13 / 8 + VAR6->VAR14;
FUN2(VAR6->VAR15, &VAR8);

return 0;
}