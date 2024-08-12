int FUN1(struct VAR1 *VAR2, unsigned short VAR3)
{
struct VAR4 *VAR5, *VAR6, *VAR7;
struct VAR1 *VAR8 = NULL;

if (!FUN2(VAR9))
return -VAR10;

VAR5 = FUN3(VAR2);

if (FUN4(VAR11, &VAR5->VAR12))
return -VAR10;

if (!FUN5())
return FUN6();

FUN7(&VAR5->VAR13);
FUN8(VAR6, VAR7, &VAR5->VAR14, VAR15) {
if (VAR6->VAR3 == VAR3 &&
VAR6->VAR16 == VAR17) {
FUN9(&VAR6->VAR15);
VAR8 = VAR6->VAR8;
break;
}
}
FUN10(&VAR5->VAR13);

if (VAR8) {
FUN11(VAR5, "", VAR8->VAR18);
FUN12(VAR8);
}

FUN13();

if (VAR8) {
FUN14(VAR8);
return 0;
}

return -VAR19;
}