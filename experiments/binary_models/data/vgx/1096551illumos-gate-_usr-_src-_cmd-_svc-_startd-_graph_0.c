static int
FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
VAR5 *VAR6;
depgroup_type_t VAR7;
restarter_error_t VAR8;
struct depfmri_info VAR9;
char *VAR10, *VAR11;
size_t VAR12;
VAR13 *VAR14;
VAR15 *VAR16;
int VAR17;
int VAR18;
scf_error_t VAR19;
ssize_t VAR20;

assert(FUN2(&VAR21));

VAR6 = FUN3(VAR2);

VAR11 = FUN4(VAR22);

VAR20 = FUN5(VAR2, VAR11, VAR22);
if (VAR20 < 0) {
FUN6(VAR11, VAR22);
switch (FUN7()) {
case VAR23:
default:
return (VAR4->VAR17 = VAR24);

case VAR25:
return (VAR4->VAR17 = 0);

case VAR26:
FUN8("", FUN7());
}
}


VAR18 = FUN9(VAR6, VAR2);
if (VAR18 < 0) {
FUN10(VAR27,
""%VAR28\"",
VAR11, VAR4->VAR29->VAR30, FUN11(FUN7()));
FUN6(VAR11, VAR22);
return (VAR4->VAR17 = VAR31);

} else if (VAR18 == 1) {
FUN12(VAR32,
""%VAR28\"",
VAR11, VAR4->VAR29->VAR30);
FUN6(VAR11, VAR22);
return (VAR4->VAR17 = 0);
}

VAR12 = strlen(VAR4->VAR29->VAR30) + 1 + VAR20 + 1;
VAR10 = FUN4(VAR12);

(void) snprintf(VAR10, VAR12, "", VAR4->VAR29->VAR30,
VAR11);


VAR7 = FUN13(VAR6, VAR2);
if (VAR7 == VAR33) {
FUN10(VAR27,
""%VAR28\"",
VAR11, VAR4->VAR29->VAR30);
FUN6(VAR10, VAR12);
FUN6(VAR11, VAR22);
return (VAR4->VAR17 = VAR31);
}

VAR8 = FUN14(VAR6, VAR2);
if (VAR8 == VAR34) {
FUN10(VAR27,
""%VAR28\""
"", VAR11, VAR4->VAR29->VAR30);
FUN6(VAR10, VAR12);
FUN6(VAR11, VAR22);
return (VAR4->VAR17 = VAR31);
}

VAR16 = FUN15(VAR6);

if (FUN16(VAR2, VAR35, VAR16) != 0) {
VAR19 = FUN7();
FUN17(VAR16);
if (VAR19 == VAR25) {
FUN6(VAR10, VAR12);
FUN6(VAR11, VAR22);
return (VAR4->VAR17 = 0);
} else if (VAR19 != VAR36) {
FUN6(VAR10, VAR12);
FUN6(VAR11, VAR22);
return (VAR4->VAR17 = VAR24);
}

FUN10(VAR27,
""%VAR28\""%VAR28\"",
VAR11, VAR4->VAR29->VAR30, VAR35);

FUN6(VAR10, VAR12);
FUN6(VAR11, VAR22);

return (VAR4->VAR17 = VAR31);
}


VAR17 = FUN18(VAR10, VAR37, VAR7,
VAR8, &VAR14);
assert(VAR17 == 0);
FUN6(VAR10, VAR12);


VAR17 = FUN19(VAR4->VAR29, VAR14, VAR4->VAR38);

assert(VAR17 == 0);

VAR9.VAR29 = VAR14;
VAR9.VAR39 = FUN20(VAR6, VAR2);
VAR9.VAR40 = VAR4->VAR29->VAR30;
VAR9.VAR11 = VAR11;
VAR9.VAR6 = VAR6;
VAR9.VAR17 = 0;
VAR9.VAR38 = VAR4->VAR38;
VAR17 = FUN21(VAR16, (VAR41)VAR42,
&VAR9);

FUN17(VAR16);
FUN6(VAR11, VAR22);

switch (VAR17) {
case 0:
case VAR43:
return (VAR4->VAR17 = VAR9.VAR17);

case VAR24:
case VAR31:
return (VAR4->VAR17 = VAR17);

case VAR44:
return (VAR4->VAR17 = 0);

case VAR45:
return (VAR4->VAR17 = VAR24);

default:
FUN8("", VAR17);

}
}