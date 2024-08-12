static VAR1 FUN1(void)
{
VAR2         *VAR3 = FUN2(0);

VAR4            *VAR5;
M_event_err_t      VAR6;
char              *VAR7;
char              *VAR8;
VAR9      *VAR10;
VAR11 *VAR12;
VAR13 *VAR14;
M_uint16           VAR15 = 0;
M_io_error_t       VAR16;


FUN3("");
VAR8 = FUN4(2048);
if (VAR8 == NULL) {
FUN3("");
return VAR17;
}
VAR10 = FUN5(VAR8);
if (VAR10 == NULL) {
FUN3("");
return VAR17;
}
if (!FUN6(VAR10, VAR18, "", VAR17)) {
FUN3("");
return VAR17;
}
if (!FUN7(VAR10, VAR19, "", VAR20)) {
FUN3("");
return VAR17;
}
if (!FUN7(VAR10, VAR19, "", VAR20)) {
FUN3("");
return VAR17;
}
if (!FUN7(VAR10, VAR21, "", VAR20)) {
FUN3("");
return VAR17;
}
if (!FUN7(VAR10, VAR21, "", VAR20)) {
FUN3("");
return VAR17;
}

VAR7 = FUN8(VAR10, 365 * 24 * 60 * 60 );
if (VAR7 == NULL) {
FUN3("");
return VAR17;
}
FUN9(VAR10);


VAR14 = FUN10();
if (VAR14 == NULL) {
FUN3("");
return VAR17;
}

if (!FUN11(VAR14)) {
FUN3("");

}

if (!FUN12(VAR14, (const VAR22 *)VAR7, FUN13(VAR7))) {
FUN3("");
return VAR17;
}




VAR12 = FUN14((const VAR22 *)VAR8, FUN13(VAR8), (const VAR22 *)VAR7, FUN13(VAR7), NULL, 0);
if (VAR12 == NULL) {
FUN3("");
return VAR17;
}


FUN15(VAR8);
FUN15(VAR7);

VAR23 = 4000;

VAR16 = FUN16(&VAR24, 0 , NULL, VAR25);

if (VAR16 != VAR26) {
FUN3("");
return VAR17;
}

VAR15 = FUN17(VAR24);

if (FUN18(VAR24, VAR12, NULL) != VAR26) {
FUN3("");
return VAR17;
}

if (FUN19(VAR24, &VAR27) != VAR26) {
FUN3("");
return VAR17;
}

FUN3("");
if (!FUN20(VAR3, VAR24, VAR28, NULL)) {
FUN3("");
return VAR17;
}
FUN3("");

if (FUN21(&VAR5, NULL, "", VAR15, VAR25) != VAR26) {
FUN3("");
return VAR17;
}

if (FUN22(VAR5, VAR14, "", NULL) != VAR26) {
FUN3("");
return VAR17;
}

if (FUN19(VAR5, &VAR29) != VAR26) {
FUN3("");
return VAR17;
}

if (!FUN20(VAR3, VAR5, VAR30, FUN23())) {
FUN3("");
return VAR17;
}
FUN3("");

VAR6 = FUN24(VAR3, 10000);

FUN25(VAR6 == VAR31, "", FUN26(VAR6));



FUN27(VAR3);
FUN28(VAR14);
FUN29(VAR12);
FUN30();
FUN3("");

return VAR6==VAR31?VAR20:VAR17;
}