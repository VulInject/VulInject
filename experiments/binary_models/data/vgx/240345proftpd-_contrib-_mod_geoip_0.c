static int FUN1(void) {
VAR1 *VAR2;
VAR3 *VAR4;
int VAR5;
VAR6 *VAR7;

VAR2 = FUN2(VAR8->VAR9, VAR10, "", VAR11);
if (VAR2) {
VAR12 = *((int *) VAR2->argv[0]);
}

if (VAR12 == VAR11) {
return 0;
}

VAR2 = FUN2(VAR8->VAR9, VAR10, "", VAR11);
if (VAR2) {
char *VAR13;

VAR13 = VAR2->argv[0];
if (FUN3(VAR13, "") != 0) {
int VAR14;

FUN4();
VAR15
VAR5 = FUN5(VAR13, &VAR16, VAR17);
VAR14 = VAR18;
VAR19
FUN6();

if (VAR5 < 0) {
if (VAR5 == -1) {
FUN7(VAR20, VAR21
"", VAR13,
strerror(VAR14));

} else if (VAR5 == VAR22) {
FUN7(VAR23, VAR21
""
"", VAR13);

} else if (VAR5 == VAR24) {
FUN7(VAR23, VAR21
"",
VAR13);
}
}
}
}

VAR7 = FUN8(VAR25);
FUN9(VAR7, "");

VAR4 = FUN10(VAR7, 0, sizeof(VAR26 *));

FUN11(VAR27, VAR21 "");
FUN12(VAR4, VAR28, VAR11);

if (VAR29->VAR30 == 0 &&
VAR4->VAR30 == 0) {
(void) FUN13(VAR16, VAR21,
"");

(void) close(VAR16);
FUN14(VAR7);
return 0;
}

FUN15(VAR4);

VAR2 = FUN2(VAR8->VAR9, VAR10, "", VAR11);
if (VAR2 != NULL) {
VAR31 = *((VAR32 *) VAR2->argv[0]);
}

switch (VAR31) {
case VAR33:
FUN16(VAR34, 8,
""
"");
break;

case VAR35:
FUN16(VAR34, 8,
""
"");
break;
}

VAR5 = FUN17(VAR31);
if (VAR5 < 0) {
(void) FUN13(VAR16, VAR21,
"",
FUN18(VAR36.VAR2->VAR37));
FUN7(VAR20, VAR21
"",
FUN18(VAR36.VAR2->VAR37));

FUN19("", NULL);


FUN14(VAR7);

VAR18 = VAR38;
return -1;
}

FUN20();
FUN21(VAR4);

FUN14(VAR7);
return 0;
}