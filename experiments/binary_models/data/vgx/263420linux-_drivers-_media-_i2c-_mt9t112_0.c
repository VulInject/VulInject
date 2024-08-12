static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int                VAR7;

VAR4->VAR8 = 2;
FUN3(VAR7, VAR6, VAR4->VAR4);

VAR4->VAR9 = (VAR10)VAR7;

return 0;
}