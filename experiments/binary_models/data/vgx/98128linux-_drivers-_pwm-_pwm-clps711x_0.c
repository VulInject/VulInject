static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);

u32 VAR9 = (VAR4->VAR10 + 1) * 4;
unsigned long VAR11;
u32 VAR12, VAR13;

if (VAR6->VAR14 != VAR15)
return -VAR16;

if (VAR6->VAR17 != VAR4->VAR18.VAR17)
return -VAR16;

if (VAR6->VAR19)
VAR13 = FUN3(VAR6->VAR20, 0xf, VAR6->VAR17);
else
VAR13 = 0;

FUN4(&VAR8->VAR21, VAR11);

VAR12 = FUN5(VAR8->VAR12);
VAR12 &= ~(0xf << VAR9);
VAR12 |= VAR13 << VAR9;
FUN6(VAR12, VAR8->VAR12);

FUN7(&VAR8->VAR21, VAR11);

return 0;
}