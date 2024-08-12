static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
u8 VAR5;

while ((VAR4 = FUN2(&VAR2->VAR6))) {
VAR5 = VAR4->VAR7[0];
switch (VAR5 & VAR8) {
case VAR9:
VAR4->VAR7[0] = (VAR5 & ~VAR10) |
VAR11;
break;
case VAR12:
VAR4->VAR7[0] = (VAR5 & ~VAR13) |
VAR14;
break;
default:
FUN3("", VAR5);
FUN4(VAR4);
continue;
}
FUN5(&VAR2->VAR15, VAR4);
}
}