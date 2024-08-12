int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;
struct VAR5 *VAR6;
unsigned int VAR1;
u32 VAR7, VAR8;

if (FUN2(VAR9))
return FUN3(VAR9);

if (!VAR9)
return -VAR10;

if (!VAR2 || !VAR2->VAR11)
return -VAR12;

VAR4 = FUN4(VAR2->VAR11, &VAR1);
if (FUN2(VAR4))
return FUN3(VAR4);

VAR6 = FUN5(VAR4);

FUN6(&VAR13);

if (VAR6->VAR14) {
FUN7(&VAR13);
return -VAR15;
}

VAR8 = FUN8(VAR4->VAR16 + VAR4->VAR17 - 1,
VAR4->VAR16);
VAR7 = FUN9(VAR9 + VAR4->VAR18);
VAR7 &= ~VAR8;
FUN10(VAR7 | ((VAR1 << VAR4->VAR16) & VAR8),
VAR9 + VAR4->VAR18);

VAR6->VAR14 = true;
FUN7(&VAR13);

return 0;
}