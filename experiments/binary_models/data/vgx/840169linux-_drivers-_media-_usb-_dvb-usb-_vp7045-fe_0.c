static int FUN1(struct VAR1* VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
*VAR4 = (FUN2(VAR6->VAR8, 0x0D) << 16) |
(FUN2(VAR6->VAR8, 0x0E) << 8) |
FUN2(VAR6->VAR8, 0x0F);
return 0;
}