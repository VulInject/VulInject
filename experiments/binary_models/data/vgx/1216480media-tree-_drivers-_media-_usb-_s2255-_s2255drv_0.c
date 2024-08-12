static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2->VAR5);
struct VAR6 *VAR7 = FUN3(VAR2);
struct VAR8 *VAR9 = FUN4(VAR7, struct VAR8, VAR2);
int VAR10 = VAR4->VAR11;
int VAR12 = VAR4->VAR13;
unsigned long VAR14;

FUN5(VAR4->VAR15, 4, "", VAR16);
if (VAR4->VAR17 == NULL)
return -VAR18;

if ((VAR10 < FUN6(VAR4)) ||
(VAR10 > FUN7(VAR4)) ||
(VAR12 < FUN8(VAR4)) ||
(VAR12 > FUN9(VAR4))) {
FUN5(VAR4->VAR15, 4, "");
return -VAR18;
}
VAR14 = VAR10 * VAR12 * (VAR4->VAR17->VAR19 >> 3);
if (FUN10(VAR2, 0) < VAR14) {
FUN5(VAR4->VAR15, 4, "");
return -VAR18;
}

FUN11(&VAR9->VAR2.VAR20, 0, VAR14);
return 0;
}