static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
int VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
void VAR10 *VAR11, *VAR12;

VAR5 = FUN2(VAR2);
if (VAR5) {
FUN3(KERN_ERR VAR13 "");
return VAR5;
}

VAR5 = FUN4(VAR2, VAR14);
if (VAR5) {
FUN3(KERN_ERR VAR13 "");
goto VAR15;
}

VAR12 = FUN5(VAR2, 1, 0);
if (!VAR12) {
FUN3(KERN_ERR VAR13 "");
VAR5 = -VAR16;
goto VAR17;
}

VAR11 = FUN5(VAR2, 2, 0);
if (!VAR11) {
FUN3(KERN_ERR VAR13 "");
VAR5 = -VAR16;
goto VAR18;
}


VAR7 = FUN6(sizeof(*VAR9), &VAR2->VAR19,
VAR20, NULL);
if (!VAR7) {
FUN3(KERN_ERR VAR13 "");
VAR5 = -VAR21;
goto VAR22;
}

VAR9 = VAR7->VAR9;
VAR9->VAR12 = VAR12;

FUN7(&VAR7->VAR23, VAR11, VAR24);

VAR5 = FUN8(VAR2->VAR25, VAR26, VAR27,
VAR14, VAR7);
if (VAR5) {
FUN3(KERN_ERR VAR13 "", VAR2->VAR25);
VAR5 = -VAR28;
goto VAR29;
}

VAR5 = FUN9(VAR7);
if (VAR5) {
FUN3(KERN_ERR VAR13 "");
goto VAR30;
}

VAR5 = FUN10(VAR7);
if (VAR5) {
FUN3(KERN_ERR VAR13 "");
goto VAR30;
}

VAR5 = FUN11(VAR7, 0, 0, NULL);
if (VAR5) {
FUN3(KERN_ERR VAR13 "");
goto VAR30;
}

FUN12(VAR2, VAR7);

return 0;

VAR30:
FUN13(VAR2->VAR25, VAR7);

VAR29:
FUN14(VAR7);

VAR22:
FUN15(VAR2, VAR11);

VAR18:
FUN15(VAR2, VAR12);

VAR17:
FUN16(VAR2);

VAR15:
FUN17(VAR2);

return VAR5;
}