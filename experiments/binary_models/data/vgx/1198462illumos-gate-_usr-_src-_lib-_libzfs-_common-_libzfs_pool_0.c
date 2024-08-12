static VAR1 *
FUN1(VAR2 *VAR3, const char *VAR4,
VAR1 *VAR5, uint64_t VAR6, prop_flags_t VAR7, char *VAR8)
{
VAR9 *VAR10;
VAR1 *VAR11;
zpool_prop_t VAR12;
char *VAR13;
uint64_t VAR14;
char *VAR15, *VAR16;
struct stat64 VAR17;
VAR18 *VAR19;

if (FUN2(&VAR11, VAR20, 0) != 0) {
(void) FUN3(VAR3);
return (NULL);
}

VAR10 = NULL;
while ((VAR10 = FUN4(VAR5, VAR10)) != NULL) {
const char *VAR21 = FUN5(VAR10);

VAR12 = FUN6(VAR21);
if (VAR12 == VAR22 && FUN7(VAR21)) {
int VAR23;
char *VAR24 = strchr(VAR21, '') + 1;

VAR23 = FUN8(VAR24, NULL);
if (VAR23 != 0) {
FUN9(VAR23, ==, VAR25);
FUN10(VAR3, FUN11(VAR26,
""), VAR24,
VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}

if (FUN13(VAR10) != VAR29) {
FUN10(VAR3, FUN11(VAR26,
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}

(void) FUN14(VAR10, &VAR13);
if (strcmp(VAR13, VAR30) != 0 &&
strcmp(VAR13, VAR31) != 0) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}

if (FUN15(VAR11, VAR21, 0) != 0) {
(void) FUN3(VAR3);
goto VAR28;
}
continue;
}


if (VAR12 == VAR22) {
FUN10(VAR3, FUN11(VAR26,
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}

if (FUN16(VAR12)) {
FUN10(VAR3, FUN11(VAR26, ""
""), VAR21);
(void) FUN12(VAR3, VAR32, VAR8);
goto VAR28;
}

if (FUN17(VAR3, VAR10, VAR12, VAR33, VAR11,
&VAR13, &VAR14, VAR8) != 0)
goto VAR28;


switch (VAR12) {
case VAR34:
if (VAR14 < VAR6 ||
!FUN18(VAR14)) {
FUN10(VAR3, FUN11(VAR26,
""),
VAR21, VAR14);
(void) FUN12(VAR3, VAR35, VAR8);
goto VAR28;
}
break;

case VAR36:
if (!VAR7.VAR37) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}
break;

case VAR38:
if (VAR14 != 0 &&
(VAR14 < VAR39 || VAR14 > VAR40)) {
FUN10(VAR3, FUN11(VAR26,
""
"" VAR41 "" VAR41 ""
""),
VAR21, VAR14, VAR39, VAR40);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}
break;

case VAR42:
if (VAR7.VAR37 || VAR7.VAR43) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}

if (VAR6 < VAR44) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR35, VAR8);
goto VAR28;
}


if (!FUN19(VAR4, VAR13)) {
FUN10(VAR3, FUN11(VAR26, ""
""), VAR13);
(void) FUN12(VAR3, VAR45, VAR8);
goto VAR28;
}

if ((VAR19 = FUN20(VAR3, VAR4)) == NULL) {
FUN10(VAR3, FUN11(VAR26,
""), VAR4);
(void) FUN12(VAR3, VAR46, VAR8);
goto VAR28;
}
FUN21(VAR19);
break;

case VAR47:
if (!VAR7.VAR37 && !VAR7.VAR43) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}

if (VAR13[0] != '') {
FUN10(VAR3, FUN11(VAR26,
""), VAR13);
(void) FUN12(VAR3, VAR48, VAR8);
goto VAR28;
}
break;

case VAR49:
if (VAR13[0] == '')
break;

if (strcmp(VAR13, "") == 0)
break;

if (VAR13[0] != '') {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR48, VAR8);
goto VAR28;
}

VAR15 = strrchr(VAR13, '');

if (VAR15[1] == '' || strcmp(VAR15, "") == 0 ||
strcmp(VAR15, "") == 0) {
FUN10(VAR3, FUN11(VAR26,
""), VAR13);
(void) FUN12(VAR3, VAR48, VAR8);
goto VAR28;
}

*VAR15 = '';

if (VAR13[0] != '' &&
(FUN22(VAR13, &VAR17) != 0 ||
!FUN23(VAR17.VAR50))) {
FUN10(VAR3, FUN11(VAR26,
""),
VAR13);
(void) FUN12(VAR3, VAR48, VAR8);
goto VAR28;
}

*VAR15 = '';
break;

case VAR51:
for (VAR16 = VAR13; *VAR16 != ''; VAR16++) {
if (!FUN24(*VAR16)) {
FUN10(VAR3,
FUN11(VAR26,
""
""));
(void) FUN12(VAR3, VAR27,
VAR8);
goto VAR28;
}
}
if (strlen(VAR13) > VAR52) {
FUN10(VAR3, FUN11(VAR26,
""),
VAR52);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}
break;

case VAR53:
if (!VAR7.VAR43) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}
break;

case VAR54:
if (!VAR7.VAR37) {
FUN10(VAR3, FUN11(VAR26,
""
""), VAR21);
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}
break;

case VAR55:
if (FUN25() == 0) {
FUN10(VAR3, FUN11(VAR26,
""));
(void) FUN12(VAR3, VAR27, VAR8);
goto VAR28;
}
break;

default:
FUN10(VAR3, FUN11(VAR26,
""), VAR21, VAR12);
break;
}
}

return (VAR11);
VAR28:
FUN26(VAR11);
return (NULL);
}