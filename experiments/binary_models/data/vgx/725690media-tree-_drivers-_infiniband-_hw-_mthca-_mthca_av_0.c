int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6   = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR2->VAR9);
u8 VAR10 = FUN4(VAR6->VAR11->VAR12) >> 24;


if (VAR6->VAR13 == VAR14)
return -VAR15;

memset(VAR4, 0, sizeof *VAR4);
VAR4->VAR13 = VAR2->VAR13;
FUN5(VAR4, FUN6(VAR6->VAR11->VAR16));
FUN7(VAR4, FUN4(VAR6->VAR11->VAR17) >> 28);
FUN8(VAR4, VAR10);
FUN9(VAR4,
FUN10(VAR8, VAR6->VAR11->VAR18 & 0x7,
VAR10));
FUN11(VAR4, VAR6->VAR11->VAR19 & 0x7F);
if (FUN12(VAR6)) {
u32 VAR20 = FUN4(VAR6->VAR11->VAR17);

FUN13(VAR4, NULL,
VAR20 & 0xfffff,
VAR6->VAR11->VAR21 &
(VAR8->VAR22.VAR23 - 1),
VAR6->VAR11->VAR24,
(VAR20 >> 20) & 0xff);
FUN14(VAR4, VAR6->VAR11->VAR25);
}

return 0;
}