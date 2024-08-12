static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR6);
u16 VAR9;

if (VAR8->VAR10 == VAR4->VAR11.VAR12.VAR13[0])
return 0;

if (FUN4(VAR6))
return -VAR14;

VAR9 = FUN5(VAR6, VAR15);

VAR8->VAR10 = VAR4->VAR11.VAR12.VAR13[0];

if (((VAR9 >> 2) & 0x3) == VAR8->VAR10)
return 1;

VAR9 = (VAR9 & 0x1f3) | (VAR8->VAR10 << 2);
FUN6(VAR6, VAR15, VAR9);


FUN7(VAR6, VAR8->VAR16);
FUN8(VAR6, VAR8->VAR17);

return 1;
}