int FUN1(VAR1 *VAR2, const char *VAR3, unsigned int VAR4) {
struct stat VAR5;
int VAR6;
void *VAR7;
struct VAR8 *VAR9;
VAR10 *VAR11;
char *VAR12, *VAR13;
VAR1 *VAR14;

if (VAR2 == NULL ||
VAR3 == NULL ||
(VAR4 > VAR15)) {
VAR16 = VAR17;
return -1;
}

if (FUN2(VAR3) < 0) {
VAR16 = VAR17;
return -1;
}

VAR6 = FUN3(VAR3);
if (VAR6) {

if (*VAR3 != '') {
VAR6 = VAR18;
}
}

FUN4(VAR3);

if (VAR6) {
FUN5(VAR19, 19, "", VAR3);
}

if (!VAR6 &&
FUN6(VAR3, &VAR5) < 0) {
return -1;
}


if (VAR6 == VAR18 &&
(FUN7(VAR5.VAR20) ||
!FUN8(VAR5.VAR20))) {
int VAR21, VAR22;

VAR23
VAR21 = FUN9(VAR2, VAR3, NULL, 0);
VAR22 = VAR16;
VAR24

VAR16 = VAR22;
return VAR21;
}

VAR14 = FUN10(VAR2);
FUN11(VAR14, "");


VAR12 = FUN12(VAR14, VAR3);

VAR13 = strrchr(VAR12, '');

if (VAR6) {
int VAR25;


*VAR13 = '';


VAR25 = FUN3(VAR12);
if (VAR25) {
const char *VAR26;

if (VAR27 & VAR28) {
FUN13(VAR29, ""
"", VAR12);
FUN14(VAR14);
VAR16 = VAR17;
return -1;
}

*VAR13 = '';
VAR26 = FUN12(VAR2, VAR12);
FUN14(VAR14);

return FUN15(VAR2, VAR26, VAR4);
}

VAR13++;


FUN4(VAR12);
if (FUN6(VAR12, &VAR5) < 0) {
int VAR22 = VAR16;

FUN13(VAR29,
"", VAR12,
strerror(VAR22));

FUN14(VAR14);
VAR16 = VAR22;
return -1;
}

if (FUN7(VAR5.VAR20) &&
!(VAR27 & VAR30)) {
FUN13(VAR29,
"", VAR3);
FUN14(VAR14);
VAR16 = VAR31;
return -1;
}

if (VAR25 == VAR18 &&
FUN3(VAR13) == VAR18) {
FUN13(VAR29,
"", VAR13);
FUN14(VAR14);
VAR16 = VAR17;
return -1;
}
}

FUN5(VAR19, 3, "", VAR12);

VAR7 = FUN16(VAR12);
if (VAR7 == NULL) {
FUN13(VAR29,
"", VAR12,
strerror(VAR16));
FUN14(VAR14);
VAR16 = VAR17;
return -1;
}

VAR11 = FUN17(VAR14, 0, sizeof(char *));

while ((VAR9 = FUN18(VAR7)) != NULL) {
FUN19();

if (strcmp(VAR9->VAR32, "") == 0 ||
strcmp(VAR9->VAR32, "") == 0) {
continue;
}

if (VAR27 & VAR33) {
if (FUN20(VAR9->VAR32) == VAR34) {
FUN5(VAR19, 19,
"", VAR9->VAR32,
VAR12);
continue;
}
}

if (VAR6 == VAR18 ||
(VAR13 != NULL &&
FUN21(VAR13, VAR9->VAR32, VAR35) == 0)) {
*((char **) FUN22(VAR11)) = FUN23(VAR14, VAR12,
VAR9->VAR32, NULL);
}
}

FUN24(VAR7);

if (VAR11->VAR36) {
register unsigned int VAR37;

FUN25((void *) VAR11->VAR38, VAR11->VAR36, sizeof(char *),
VAR39);

for (VAR37 = 0; VAR37 < VAR11->VAR36; VAR37++) {
int VAR21, VAR22;
char *VAR40;

VAR40 = ((char **) VAR11->VAR38)[VAR37];


VAR23
VAR21 = FUN9(VAR14, VAR40, NULL, 0);
VAR22 = VAR16;
VAR24

if (VAR21 < 0) {
FUN13(VAR29,
"", VAR40,
strerror(VAR22));
}
}
}

FUN14(VAR14);
return 0;
}