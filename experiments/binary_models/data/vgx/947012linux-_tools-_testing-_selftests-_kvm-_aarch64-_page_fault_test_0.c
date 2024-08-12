static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8;
struct ucall VAR9;
int VAR10;

VAR8 = VAR4->VAR8;

for (;;) {
VAR10 = FUN2(VAR4);
if (VAR10) {
VAR6->FUN3(VAR10);
goto VAR11;
}

switch (FUN4(VAR4, &VAR9)) {
case VAR12:
if (!FUN5(VAR2, VAR9.VAR13[1])) {
VAR6->VAR14 = true;
goto VAR11;
}
break;
case VAR15:
FUN6(VAR9, "");
break;
case VAR16:
goto VAR11;
case VAR17:
if (VAR8->VAR18 == VAR19)
VAR6->FUN7(VAR2, VAR8);
break;
default:
FUN8("", VAR9.VAR20);
}
}

VAR11:
FUN9(VAR6->VAR14 ? "" : "");
}