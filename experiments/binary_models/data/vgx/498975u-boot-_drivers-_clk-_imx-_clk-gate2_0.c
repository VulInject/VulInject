static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);
u32 VAR4;

if (VAR3->VAR5 && (*VAR3->VAR5)++ > 0)
return 0;

VAR4 = FUN3(VAR3->VAR4);
VAR4 &= ~(3 << VAR3->VAR6);
VAR4 |= VAR3->VAR7 << VAR3->VAR6;
FUN4(VAR4, VAR3->VAR4);

return 0;
}