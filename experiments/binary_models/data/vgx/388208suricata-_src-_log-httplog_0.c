VAR1 FUN1(VAR2 *VAR3)
{
OutputInitResult VAR4 = { NULL, false };
VAR5* VAR6 = FUN2();
if(VAR6 == NULL) {
FUN3("");
return VAR4;
}

if (FUN4(VAR3, VAR6, VAR7, 1) < 0) {
FUN5(VAR6);
return VAR4;
}

VAR8 *VAR9 = FUN6(sizeof(VAR8));
if (FUN7(VAR9 == NULL)) {
FUN5(VAR6);
return VAR4;
}
memset(VAR9, 0x00, sizeof(VAR8));

VAR9->VAR6 = VAR6;

const char *VAR10 = FUN8(VAR3, "");
const char *VAR11 = FUN8(VAR3, "");
const char *VAR12 = FUN8(VAR3, "");


if (VAR11 != NULL && VAR12 != NULL && FUN9(VAR11)) {

VAR9->VAR13 = FUN10();
if (!VAR9->VAR13) {
goto VAR14;
}

VAR9->VAR15 |= VAR16;


if ( ! FUN11(VAR9->VAR13, VAR12)) {
goto VAR17;
}
} else {
if (VAR10 == NULL) {
VAR9->VAR15 |= VAR18;
} else {
if (FUN9(VAR10)) {
VAR9->VAR15 |= VAR19;
}
}
}

VAR20 *VAR21 = FUN12(1, sizeof(VAR20));
if (FUN7(VAR21 == NULL)) {
goto VAR17;
}

VAR21->VAR22 = VAR9;
VAR21->VAR23 = VAR24;

FUN13("");


FUN14(VAR25, VAR26);

VAR4.VAR27 = VAR21;
VAR4.VAR28 = true;
return VAR4;

VAR17:
FUN3("");
VAR14:
FUN15(VAR9->VAR13);
FUN5(VAR6);
FUN16(VAR9);
return VAR4;

}