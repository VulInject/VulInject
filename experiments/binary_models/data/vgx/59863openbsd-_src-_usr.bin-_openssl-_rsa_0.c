int
FUN1(int argc, char **argv)
{
int VAR1 = 1;
VAR2 *VAR3 = NULL;
int VAR4;
VAR5 *VAR6 = NULL;
char *VAR7 = NULL, *VAR8 = NULL;

if (FUN2("", NULL) == -1) {
FUN3("");
FUN4(1);
}

memset(&VAR9, 0, sizeof(VAR9));
VAR9.VAR10 = 2;
VAR9.VAR11 = VAR12;
VAR9.VAR13 = VAR12;

if (FUN5(argc, argv, VAR14, NULL, NULL) != 0) {
FUN6();
goto VAR15;
}

if (!FUN7(VAR16, VAR9.VAR17, VAR9.VAR18,
&VAR7, &VAR8)) {
FUN8(VAR16, "");
goto VAR15;
}
if (VAR9.VAR19 && VAR9.VAR20) {
FUN8(VAR16, "");
goto VAR15;
}
VAR6 = FUN9(FUN10());

{
VAR21 *VAR22;

if (VAR9.VAR20) {
int VAR23 = -1;
if (VAR9.VAR20 == 2) {
if (VAR9.VAR11 == VAR12)
VAR23 = VAR24;
else if (VAR9.VAR11 == VAR25)
VAR23 = VAR26;
} else
VAR23 = VAR9.VAR11;

VAR22 = FUN11(VAR16, VAR9.VAR27,
VAR23, 1, VAR7, "");
} else
VAR22 = FUN12(VAR16, VAR9.VAR27,
VAR9.VAR11, 1, VAR7, "");

if (VAR22 != NULL)
VAR3 = FUN13(VAR22);
FUN14(VAR22);
}

if (VAR3 == NULL) {
FUN15(VAR16);
goto VAR15;
}
if (VAR9.VAR28 == NULL) {
FUN16(VAR6, VAR29, VAR30);
} else {
if (FUN17(VAR6, VAR9.VAR28) <= 0) {
FUN3(VAR9.VAR28);
goto VAR15;
}
}

if (VAR9.VAR31)
if (!FUN18(VAR6, VAR3, 0)) {
FUN3(VAR9.VAR28);
FUN15(VAR16);
goto VAR15;
}
if (VAR9.VAR32) {
FUN8(VAR6, "");
FUN19(VAR6, FUN20(VAR3));
FUN8(VAR6, "");
}
if (VAR9.VAR19) {
int VAR33 = FUN21(VAR3);

if (VAR33 == 1)
FUN8(VAR6, "");
else if (VAR33 == 0) {
unsigned long VAR34;

while ((VAR34 = FUN22()) != 0 &&
FUN23(VAR34) == VAR35 &&
FUN24(VAR34) == VAR36 &&
FUN25(VAR34) != VAR37) {
FUN8(VAR6, "",
FUN26(VAR34));
FUN27();	
}
}
if (VAR33 == -1 || FUN22() != 0) {	
FUN15(VAR16);
goto VAR15;
}
}
if (VAR9.VAR38) {
VAR1 = 0;
goto VAR15;
}
FUN8(VAR16, "");
if (VAR9.VAR13 == VAR25) {
if (VAR9.VAR39 || VAR9.VAR20) {
if (VAR9.VAR39 == 2)
VAR4 = FUN28(VAR6, VAR3);
else
VAR4 = FUN29(VAR6, VAR3);
} else
VAR4 = FUN30(VAR6, VAR3);
} else if (VAR9.VAR13 == VAR12) {
if (VAR9.VAR39 || VAR9.VAR20) {
if (VAR9.VAR39 == 2)
VAR4 = FUN31(VAR6, VAR3);
else
VAR4 = FUN32(VAR6, VAR3);
} else
VAR4 = FUN33(VAR6, VAR3,
VAR9.VAR40, NULL, 0, NULL, VAR8);
} else if (VAR9.VAR13 == VAR41 ||
VAR9.VAR13 == VAR42) {
VAR21 *VAR43;
VAR43 = FUN34();
FUN35(VAR43, VAR3);
if (VAR9.VAR13 == VAR42)
VAR4 = FUN36(VAR6, VAR43, VAR9.VAR10, 0,
VAR8);
else if (VAR9.VAR20 || VAR9.VAR39)
VAR4 = FUN37(VAR6, VAR43);
else
VAR4 = FUN38(VAR6, VAR43);
FUN14(VAR43);
} else {
FUN8(VAR16,
"");
goto VAR15;
}
if (VAR4 <= 0) {
FUN8(VAR16, "");
FUN15(VAR16);
} else
VAR1 = 0;

VAR15:
FUN39(VAR6);
FUN40(VAR3);
free(VAR7);
free(VAR8);

return (VAR1);
}