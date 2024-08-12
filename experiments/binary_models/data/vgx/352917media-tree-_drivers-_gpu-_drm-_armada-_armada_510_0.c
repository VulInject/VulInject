static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR5;

VAR5 = FUN2(VAR4, "");
if (FUN3(VAR5))
return FUN4(VAR5) == -VAR6 ? -VAR7 : FUN4(VAR5);

VAR2->VAR8[0] = VAR5;


FUN5(0x20, (1 << 11) | 0xff, VAR2->VAR9 + VAR10);

return 0;
}