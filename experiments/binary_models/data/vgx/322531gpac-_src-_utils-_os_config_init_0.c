static VAR1 *FUN1(char *VAR2, const char *VAR3)
{
Bool VAR4;
VAR1 *VAR5;
char VAR6[VAR7];

if (! FUN2(VAR2, VAR8)) {
VAR3 = "";
}

if (VAR3 && !strcmp(VAR3, "")) {
VAR5 = FUN3(NULL, NULL);
} else {
VAR9 *VAR10;


if (VAR3) {
sprintf(VAR6, "", VAR2, VAR11, VAR11, VAR3, VAR11, VAR12);
} else {
sprintf(VAR6, "", VAR2, VAR11, VAR12);
}
FUN4(VAR13, VAR14, ("", VAR6 ));

VAR10 = FUN5(VAR6, "");
if (!VAR10) return NULL;
FUN6(VAR10);

VAR5 = FUN3(NULL, VAR6);
}

if (!VAR5) return NULL;


VAR4 = FUN2(VAR6, VAR15);
VAR4 = FUN2(VAR6, VAR16);

FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");


if (!VAR4) {
FUN4(VAR17, VAR14, (""));
} else {
FUN7(VAR5, "", "", VAR6);
}

FUN8(VAR5, VAR2);
if (FUN2(VAR6, VAR16)) {
strcat(VAR6, "");
FUN7(VAR5, "", "", VAR6);
strcat(VAR6, "");

if (!FUN9(VAR6)) {
VAR9 *VAR10 = FUN5(VAR6, "");
if (VAR10) FUN6(VAR10);
}
FUN2(VAR6, VAR16);
strcat(VAR6, "");
if (!FUN9(VAR6)) {
VAR9 *VAR10 = FUN5(VAR6, "");
if (VAR10) FUN6(VAR10);
}

FUN2(VAR6, VAR16);
strcat(VAR6, "");
FUN7(VAR5, "", "", VAR6);
strcat(VAR6, "");
if (!FUN9(VAR6)) {
VAR9 *VAR10 = FUN5(VAR6, "");
if (VAR10) FUN6(VAR10);
}
}

FUN7(VAR5, "", "", FUN10(VAR18));

FUN7(VAR5, "", "", "");


FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");


FUN11(VAR6);
FUN7(VAR5, "", "", VAR6);

FUN7(VAR5, "", "", "");

FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");

FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");


FUN7(VAR5, "", "", "");
FUN7(VAR5, "", "", "");

const char *VAR19 = VAR20[0] ? VAR20 : getenv("");
if (!VAR19) VAR19 = "";
FUN7(VAR5, "", "", VAR19);
FUN7(VAR5, "", "", VAR19);


if ( FUN2(VAR6, VAR21) ) {
char VAR22[VAR7+100];
sprintf(VAR22, "", VAR6, VAR11, VAR11);
if (FUN9(VAR22)) {
FUN7(VAR5, "", "", VAR22);
}


sprintf(VAR22, "", VAR6, VAR11, VAR11);
FUN7(VAR5, "", "", VAR22);
sprintf(VAR22, "", VAR6, VAR11, VAR11);
FUN7(VAR5, "", "", VAR22);


sprintf(VAR22, "", VAR6, VAR11);
if (FUN9(VAR22)) {
VAR1 *VAR23 = FUN3(NULL, VAR22);
if (VAR23) {
u32 VAR24, VAR25 = FUN12(VAR23);
for (VAR24=0; VAR24<VAR25; VAR24++) {
u32 VAR26, VAR27;
const char *VAR28 = FUN13(VAR23, VAR24);
if (!VAR28) continue;
VAR27 = FUN14(VAR23, VAR28);
for (VAR26=0; VAR26<VAR27; VAR26++) {
const char *VAR29 = FUN15(VAR23, VAR28, VAR26);
const char *VAR30 = FUN16(VAR23, VAR28, VAR29);
FUN7(VAR5, VAR28, VAR29, VAR30);
}
}
}
FUN17(VAR23);
}
}

if (VAR3 && !strcmp(VAR3, "")) {
VAR31 FUN18(VAR1 *VAR32, const char * VAR33);

FUN18(VAR5, VAR12);
FUN19(VAR5);
return VAR5;
}

strcpy(VAR6, FUN20(VAR5));
FUN17(VAR5);
return FUN3(NULL, VAR6);
}