static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7 = 0;

VAR7 = FUN3(VAR6, 0x26, 0,
VAR8, 0);
if (VAR7 != -1)
*VAR4->VAR9.VAR10.VAR9 = VAR7;

return 0;
}