static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
if (!VAR5)
return 0;

FUN2("",
VAR2, VAR2->VAR7, VAR2->VAR8, VAR3, VAR5);

switch (VAR2->VAR7) {
case VAR9:
case VAR10:
case VAR11:
case VAR12:
if (FUN3(VAR13, &VAR2->VAR14)) {
FUN4(VAR15, &VAR2->VAR14);
FUN5();
return 0;
}
}

switch (VAR2->VAR7) {
case VAR9:
case VAR16:
FUN6(VAR2);
break;

case VAR10:
if (VAR5->VAR7 != VAR17) {
FUN6(VAR2);
break;
}

VAR18;

default:
FUN7(VAR2);

FUN8(VAR2);
VAR2->VAR7 = VAR19;
VAR2->FUN9(VAR2, VAR3);
FUN10(VAR2);

FUN11(&VAR2->VAR20);
FUN12(VAR2);
}

return 0;
}