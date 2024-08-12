VAR1 FUN1(VAR2 *VAR3) {
VAR4 *VAR5 = NULL;
VAR6 *VAR7 = NULL;
int VAR8 = 0;
char *VAR9;

if (VAR3->argc-1 < 1 ||
VAR3->argc-1 > 7) {
if (VAR3->argc-1 < 1 ||
VAR3->argc-1 > 2) {
FUN2(VAR3, "");
}

FUN3(VAR3, VAR10|VAR11|VAR12);

VAR9 = VAR3->argv[1];
if (*VAR9 != '') {
FUN2(VAR3, FUN4(VAR3->VAR13,
"", (char *) VAR3->argv[0], "",
VAR9, "", NULL));
}

if (!(VAR14 & VAR15)) {
int VAR16, VAR17;


VAR8 = 0;

VAR18
VAR16 = FUN5(VAR3->VAR13, VAR3->argv[0], VAR9, VAR8);
VAR17 = VAR19;
VAR20

if (VAR16 < 0) {
FUN2(VAR3, FUN4(VAR3->VAR13,
"", VAR9, "", strerror(VAR17), NULL));
}
}

if (VAR14 & VAR21) {
if (FUN6(VAR3->VAR13, VAR9) < 0) {
FUN2(VAR3, FUN4(VAR3->VAR13,
"", VAR9, "", strerror(VAR19), NULL));
}
}
VAR5 = FUN7(VAR3->argv[0], 1, NULL);

VAR7 = FUN8(VAR5->VAR22, sizeof(VAR6));
VAR7->VAR23 = FUN9(VAR5->VAR22, VAR9);
VAR5->argv[0] = (void *) VAR7;


if (VAR3->argc-1 != 1) {
register unsigned int VAR24 = 0;

for (VAR24 = 2; VAR24 < VAR3->argc; VAR24++) {
if (FUN10(VAR3->argv[VAR24], "") == 0) {
uid_t VAR25, VAR26;
char *VAR27 = NULL, *VAR28 = NULL;



VAR27 = strchr(VAR3->argv[++VAR24], '');
if (VAR27 == NULL) {
FUN2(VAR3, "");
}

*VAR27 = '';

VAR25 = FUN11(VAR3->argv[VAR24], &VAR28, 10);
if (VAR28 && *VAR28) {
FUN2(VAR3, "");
}

VAR28 = NULL;

VAR26 = FUN11(VAR27+1, &VAR28, 10);

if (VAR28 && *VAR28) {
FUN2(VAR3, "");
}

if (VAR25 > VAR26) {
FUN2(VAR3, "");
}

VAR7->VAR29.VAR30 = VAR25;
VAR7->VAR31.VAR30 = VAR26;
VAR7->VAR32 = VAR33;

} else if (FUN10(VAR3->argv[VAR24], "") == 0) {
char *VAR34 = VAR3->argv[++VAR24];
VAR35 *VAR36 = NULL;
int VAR16 = 0;

VAR36 = FUN12(&VAR37);


if (*VAR34 == '') {
VAR34++;
VAR7->VAR38 = VAR33;
}

VAR16 = FUN13(VAR36, VAR34, VAR39|VAR40);
if (VAR16 != 0) {
char VAR41[200] = {''};

FUN14(VAR16, VAR36, VAR41, sizeof(VAR41));
FUN15(NULL, VAR36);

FUN2(VAR3, FUN4(VAR3->VAR13, "", VAR34, ""
"", VAR41, NULL));
}

VAR7->VAR42 = FUN9(VAR5->VAR22, VAR3->argv[VAR24]);
VAR7->VAR43 = VAR36;
VAR7->VAR44 = VAR33;

} else if (FUN10(VAR3->argv[VAR24], "") == 0) {
char *VAR34 = VAR3->argv[++VAR24];
VAR35 *VAR36 = NULL;
int VAR16 = 0;

VAR36 = FUN12(&VAR37);


if (*VAR34 == '') {
VAR34++;
VAR7->VAR45 = VAR33;
}

VAR16 = FUN13(VAR36, VAR34, VAR39|VAR40);
if (VAR16 != 0) {
char VAR41[200] = {''};

FUN14(VAR16, VAR36, VAR41, sizeof(VAR41));
FUN15(NULL, VAR36);

FUN2(VAR3, FUN4(VAR3->VAR13, "", VAR34, ""
"", VAR41, NULL));
}

VAR7->VAR46 = FUN9(VAR5->VAR22, VAR3->argv[VAR24]);
VAR7->VAR47 = VAR36;
VAR7->VAR48 = VAR33;

} else {
FUN2(VAR3, FUN4(VAR3->VAR13, "",
VAR3->argv[VAR24], "", NULL));
}
}
}

return FUN16(VAR3);
}