static int FUN1(struct VAR1 *VAR1)
{
int VAR2;
struct VAR3 *VAR4, *VAR5;


VAR4 = FUN2(sizeof(struct VAR3), VAR6);
if (!VAR4)
return -1;

FUN3("", FUN4(VAR1));


VAR2 = FUN5(VAR1, 0, 0);
if (VAR2 <= 0) {
u8 VAR7, VAR8;


if (FUN6(VAR1, VAR9, &VAR8))
goto VAR10;
if (VAR8 == 0)
goto VAR10;
if (FUN6(VAR1, VAR11, &VAR7) ||
VAR7 == 0xff || VAR7 == 0) {
goto VAR10;
}
FUN3("",
VAR7, VAR8);

VAR2 = FUN7(NULL, VAR7);
if (VAR2)
FUN8(VAR2, VAR12);
}

if (!VAR2) {
FUN3("");
goto VAR10;
}

FUN3("", VAR2);

VAR1->VAR13 = VAR2;

FUN9(&VAR14);
FUN10(VAR5, &VAR15, VAR16) {
if (VAR5->VAR2 == VAR2) {
FUN11(&VAR5->VAR17);
FUN12(VAR4);
VAR4 = NULL;
break;
}
}
if (VAR4) {
VAR4->VAR2 = VAR2;
FUN13(&VAR4->VAR17);
FUN14(&VAR4->VAR16, &VAR15);
}
FUN15(&VAR14);

return 0;
VAR10:
FUN12(VAR4);
return -1;
}