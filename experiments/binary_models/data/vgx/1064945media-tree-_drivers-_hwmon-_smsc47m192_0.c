static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR6;
struct VAR5 *VAR7;
struct VAR8 *VAR9;
int VAR10;

VAR9 = FUN2(VAR6, sizeof(struct VAR8), VAR11);
if (!VAR9)
return -VAR12;

VAR9->VAR2 = VAR2;
VAR9->VAR13 = FUN3();
FUN4(&VAR9->VAR14);


FUN5(VAR2);


VAR9->VAR15[0] = &VAR16;

VAR10 = FUN6(VAR2, VAR17);
if (!(VAR10 & 0x20))
VAR9->VAR15[1] = &VAR18;

VAR7 = FUN7(VAR6, VAR2->VAR19,
VAR9, VAR9->VAR15);
return FUN8(VAR7);
}