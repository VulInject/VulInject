static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
int VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
void VAR10 *VAR11, *VAR12, *VAR13;

VAR5 = FUN2(VAR2);
if (VAR5) {
FUN3(KERN_ERR VAR14 "");
return VAR5;
}

VAR5 = FUN4(VAR2, VAR15);
if (VAR5) {
FUN3(KERN_ERR VAR14 "");
goto VAR16;
}

VAR13 = FUN5(VAR2, 1, 0);
if (!VAR13) {
FUN3(KERN_ERR VAR14 "");
VAR5 = -VAR17;
goto VAR18;
}

VAR12 = FUN5(VAR2, 2, 0);
if (!VAR12) {
FUN3(KERN_ERR VAR14 "");
VAR5 = -VAR17;
goto VAR19;
}

VAR11 = FUN5(VAR2, 3, 0);
if (!VAR11) {
FUN3(KERN_ERR VAR14 "");
VAR5 = -VAR17;
goto VAR20;
}


VAR7 = FUN6(sizeof(*VAR9), &VAR2->VAR21,
VAR22, NULL);
if (!VAR7) {
FUN3(KERN_ERR VAR14 "");
VAR5 = -VAR23;
goto VAR24;
}

VAR9 = VAR7->VAR9;
VAR9->VAR13 = VAR13;
VAR9->VAR12 = VAR12;

FUN7(&VAR7->VAR25, VAR11, VAR26);

VAR5 = FUN8(VAR2->VAR27, VAR28, VAR29,
VAR15, VAR7);
if (VAR5) {
FUN3(KERN_ERR VAR14 "", VAR2->VAR27);
VAR5 = -VAR30;
goto VAR31;
}

VAR5 = FUN9(VAR9);
if (VAR5) {
FUN3(KERN_ERR VAR14 "");
goto VAR32;
}

VAR5 = FUN10(VAR7);
if (VAR5) {
FUN3(KERN_ERR VAR14 "");
goto VAR32;
}

VAR5 = FUN11(VAR7);
if (VAR5) {
FUN3(KERN_ERR VAR14 "");
goto VAR32;
}

VAR5 = FUN12(VAR7, 0, 0, NULL);
if (VAR5) {
FUN3(KERN_ERR VAR14 "");
goto VAR33;
}

FUN13(VAR2, VAR7);

return 0;

VAR33:
FUN14(FUN15(VAR7));
VAR32:
FUN16(VAR2->VAR27, VAR7);

VAR31:
FUN17(VAR7);

VAR24:
FUN18(VAR2, VAR11);

VAR20:
FUN18(VAR2, VAR12);

VAR19:
FUN18(VAR2, VAR13);

VAR18:
FUN19(VAR2);

VAR16:
FUN20(VAR2);

return VAR5;
}