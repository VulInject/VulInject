static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5,
char *VAR6, uint16_t VAR7)
{
char VAR8[VAR9];
char VAR10[VAR11];
char VAR12[VAR11];
char VAR13[VAR9];
char *VAR14;
char *VAR15, *VAR16, *VAR17;
char *VAR18 = "";
int VAR19;
VAR20 *VAR21;
uint_t VAR22;

if (FUN2(VAR4, VAR23, &VAR16) != 0) {
FUN3(FUN4(""),
VAR24);
return (VAR25);
}

if (strcmp(VAR16, VAR26) == 0)
return (VAR27);

if (FUN2(VAR4, VAR28, &VAR15) != 0) {
FUN3(FUN4(""),
VAR24);
return (VAR25);
}

if ((FUN5(VAR4, VAR29,
(VAR30 **)&VAR21, &VAR22) != 0) ||
VAR21->VAR31 < VAR32) {

FUN3(FUN4(""
""), VAR24, VAR15,
FUN6(VAR21->VAR31, VAR21->VAR33));
return (VAR34);
}


VAR15 = strdup(VAR15);
if (VAR15 == NULL)
return (VAR35);

VAR17 = strstr(VAR15, "");
if (VAR17 != NULL) {
*VAR17 = '';
VAR17++;
} else {
VAR17 = "";
}

(void) snprintf(VAR13, sizeof (VAR13), "", VAR15, VAR17);
free(VAR15);

VAR14 = FUN7(VAR36, VAR2, VAR4, VAR37);
if (VAR14 == NULL) {
FUN3(FUN4(""),
VAR24, FUN8(VAR36));
return (FUN9(VAR36));
}

if (FUN10("")) {
uint16_t VAR38 = VAR7 & VAR39;
uint16_t VAR40 = VAR7 & VAR41;

if (VAR38 == VAR39) {
if (VAR40 == VAR41 ||
FUN11(VAR13, VAR4))
VAR18 = "";
else
VAR18 = "";
} else {
if (VAR40 == VAR41 ||
FUN11(VAR13, VAR4))
VAR18 = "";
}

if (FUN12()) {
(void) snprintf(VAR8, sizeof (VAR8),
"", VAR42, VAR18,
VAR5, VAR6, VAR13);
} else {

(void) snprintf(VAR8, sizeof (VAR8),
"", VAR43, VAR18,
VAR5, VAR13);
}
} else if (FUN10("")) {
if ((VAR7 & VAR39) ==
VAR39)
VAR18 = "";
else
VAR18 = "";

(void) snprintf(VAR8, sizeof (VAR8),
"", VAR43, VAR18, VAR6, VAR13);
} else {
FUN3(FUN4(""),
VAR24);
return (VAR44);
}

*VAR12 = '';
*VAR10 = '';

VAR19 = FUN13(VAR8, VAR10, VAR11,
VAR12, VAR11);

if (VAR19 != VAR34) {
FUN3(FUN4(""),
VAR24, VAR14);
VAR19 = VAR44;
}

FUN3(FUN4(""%VAR45\""), VAR8);
if (VAR12[0] != 0) {
FUN3(FUN4(""));
FUN3("", VAR12);
}

if (VAR10[0] != 0) {
FUN3(FUN4(""));
FUN3("", VAR10);
}
free(VAR14);

return (VAR19);
}