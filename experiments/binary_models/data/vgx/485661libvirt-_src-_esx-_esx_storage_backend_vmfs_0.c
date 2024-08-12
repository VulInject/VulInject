static VAR1
FUN1(virConnectPtr VAR2, const char *VAR3)
{
virStorageVolPtr VAR4 = NULL;
VAR5 *VAR6 = VAR2->VAR7;
VAR8 *VAR9 = NULL;
VAR10 *VAR11 = NULL;
VAR10 *VAR12 = NULL;
char *VAR13 = NULL;
VAR14 *VAR15 = NULL;
VAR14 *VAR16 = NULL;
size_t VAR17;
VAR18 *VAR19 = NULL;
char VAR20[VAR21] = "";

if (FUN2(VAR3, "")) {

return FUN3(VAR2, VAR3);
}

if (!VAR6->VAR22->VAR23) {
FUN4(VAR24, "",
FUN5(""
""));
return NULL;
}


if (FUN6(&VAR9, "") < 0 ||
FUN7(VAR6->VAR22, VAR9,
&VAR11) < 0) {
goto VAR25;
}

for (VAR12 = VAR11; VAR12;
VAR12 = VAR12->VAR26) {
VAR13 = NULL;

if (FUN8(VAR12, "", &VAR13,
VAR27) < 0) {
goto VAR25;
}


FUN9(&VAR15);

if (VAR28
(VAR6->VAR22, VAR13, &VAR15) < 0) {
goto VAR25;
}


for (VAR16 = VAR15; VAR16;
VAR16 = VAR16->VAR26) {
g_autofree char *VAR29 = NULL;

if (FUN10(VAR16->VAR30, NULL,
NULL, &VAR29) < 0) {
goto VAR25;
}


VAR17 = strlen(VAR29);

while (VAR17 > 0 && VAR29[VAR17 - 1] == '') {
VAR29[VAR17 - 1] = '';
--VAR17;
}


for (VAR19 = VAR16->VAR31; VAR19;
VAR19 = VAR19->VAR26) {
g_autofree char *VAR32 = NULL;
g_autofree char *VAR33 = NULL;
g_autofree char *VAR34 = NULL;

if (VAR17 < 1) {
VAR32 = FUN11(VAR19->VAR35);
} else {
VAR32 = FUN12("",
VAR29, VAR19->VAR35);
}

VAR33 = FUN12("", VAR13, VAR32);

if (!FUN13(VAR19)) {

continue;
}

if (VAR36
(VAR6->VAR22, VAR33,
VAR6->VAR22->VAR37->VAR38,
&VAR34) < 0) {
goto VAR25;
}

if (FUN14(VAR34, VAR20) < 0)
goto VAR25;

if (FUN15(VAR3, VAR20)) {

VAR4 = FUN16(VAR2, VAR13,
VAR32, VAR3,
&VAR39, NULL);
goto VAR25;
}
}
}
}

VAR25:
FUN17(&VAR9);
FUN18(&VAR11);
FUN9(&VAR15);
return VAR4;
}