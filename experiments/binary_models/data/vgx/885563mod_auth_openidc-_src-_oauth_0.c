int FUN1(VAR1 *VAR2, VAR3 *VAR4,
const char *VAR5) {


if (!FUN2(VAR2)) {

if (VAR2->main != NULL)
VAR2->VAR6 = VAR2->main->VAR6;
else if (VAR2->VAR7 != NULL)
VAR2->VAR6 = VAR2->VAR7->VAR6;

if (VAR2->VAR6 != NULL) {


FUN3(VAR2,
"",
VAR2->VAR6);


FUN4(VAR2);

return VAR8;
}


} else if (FUN5(VAR2, FUN6(VAR2, VAR4))) {


if (FUN7(VAR2,
VAR9)) {

return FUN8(VAR2, VAR4);


} else if (FUN7(VAR2,
VAR10)) {


return FUN9(VAR2, VAR4);
}
}




FUN10(VAR2, VAR4);


if (VAR5 == NULL) {
if (FUN11(VAR2, &VAR5) == VAR11) {
if (VAR2->VAR12 == VAR13) {
VAR2->VAR6 = "";
return VAR8;
}
return FUN12(VAR2,
VAR14,
"");
}
}


VAR15 *VAR16 = NULL;
char *VAR17 = NULL;


if (VAR4->VAR18.VAR19 != NULL) {

if (FUN13(VAR2, VAR4, VAR5, &VAR16,
&VAR17) == VAR11)
return FUN12(VAR2,
VAR20,
"");
} else {

if (FUN14(VAR2, VAR4, VAR5, &VAR16,
&VAR17) == VAR11)
return FUN12(VAR2,
VAR20, "");
}


if (VAR16 == NULL) {
FUN15(VAR2, "");
return FUN12(VAR2,
VAR20,
"");
}


FUN16(VAR2, VAR21,
(const char*) VAR17);


if (FUN17(VAR2, VAR4, VAR16) == VAR11) {
FUN18(VAR16);
FUN15(VAR2,
"");
return FUN12(VAR2,
VAR20, "");
}


FUN19(VAR2);


char *VAR22 = FUN20(VAR2);
apr_byte_t VAR23 = FUN21(VAR2);
apr_byte_t VAR24 = FUN22(VAR2);
int VAR25 = FUN23(VAR2);

if ((VAR2->VAR6 != NULL) && (VAR22 != NULL))
FUN24(VAR2, VAR22, VAR2->VAR6);


FUN25(VAR2, VAR16, FUN26(VAR2),
VAR4->VAR26, VAR23, VAR24, VAR25);


if (VAR5 != NULL) {
FUN27(VAR2, VAR27, VAR5,
VAR28, VAR23, VAR24, VAR25);
}


FUN18(VAR16);


FUN4(VAR2);

return VAR8;
}