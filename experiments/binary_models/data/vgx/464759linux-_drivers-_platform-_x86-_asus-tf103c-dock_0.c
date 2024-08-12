static void FUN1(struct VAR1 *VAR2, u8 VAR3)
{
struct VAR4 *VAR5 = &VAR2->VAR6->VAR5;

switch (VAR3) {
case VAR7:
FUN2(VAR2, VAR8);
FUN2(VAR2, VAR9);
FUN3(VAR2, VAR10);
break;
case VAR11:

break;
case VAR12:
FUN4(VAR2);
break;
default:
FUN5(VAR5, "", VAR3);
break;
}
}