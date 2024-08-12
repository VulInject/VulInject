VAR1
FUN1(
cfga_cmd_t VAR2,
const char *VAR3,
const char *VAR4,
struct VAR5 *VAR6,
struct VAR7 *VAR8,
char **VAR9,
cfga_flags_t VAR10)
{
int		VAR11;
int		VAR12;
char		*VAR13;
char		*VAR14;
VAR15	*VAR16 = NULL;
ap_rstate_t	VAR17;
ap_ostate_t	VAR18;
devctl_hdl_t	VAR19 = NULL;
cfga_usb_ret_t	VAR20 = VAR21;

FUN2("");

if ((VAR20 = FUN3(VAR3, VAR4, VAR9)) != VAR21) {
(void) FUN4(VAR8, VAR4, VAR10);
goto VAR22;
}


if (FUN5() != 0) {
VAR20 = VAR23;
goto VAR22;
}

if ((VAR20 = FUN6(VAR3, &VAR19, &VAR16, 0)) !=
VAR21) {
goto VAR22;
}

switch (VAR2) {
case VAR24:
if ((VAR20 = FUN7(VAR19, VAR16, &VAR17)) !=
VAR25) {
goto VAR22;
}

if (VAR17 == VAR26) {
goto VAR22;
}
VAR20 = VAR21;	

if (FUN8(VAR19, VAR16) != 0) {
FUN2(""
"", VAR27);
VAR20 = VAR28;
}

VAR14 = FUN9(VAR3);
if (VAR14 == NULL) {
int VAR29;

for (VAR29 = 0; VAR29 < 12 && (VAR14 == NULL); VAR29++) {
(void) sleep(6);
VAR14 = FUN9(VAR3);
}

if (VAR14 == NULL) {
FUN2(""
"", VAR29);
VAR20 = VAR28;
break;
}
}
FUN10(VAR14);
break;
case VAR30:
if ((VAR20 = FUN11(VAR19, VAR16, &VAR18)) !=
VAR31) {
goto VAR22;
}


if ((VAR20 = FUN7(VAR19, VAR16, &VAR17)) ==
VAR25) {
goto VAR22;
}
VAR20 = VAR21;	

VAR12 = strlen(VAR32) + strlen(VAR33) +
strlen("") + strlen(VAR3);
if ((VAR13 = (char *)calloc(VAR12 + 3, 1)) != NULL) {
(void) snprintf(VAR13, VAR12 + 3, "",
VAR32, VAR3, VAR33);
}
if (!FUN12(VAR6, VAR13)) {
free(VAR13);
FUN13(VAR19, VAR16);
return (VAR34);
}
free(VAR13);

VAR14 = FUN9(VAR3);
if (VAR14 == NULL) {
FUN2("");
VAR20 = VAR28;
break;
}

if ((VAR20 = FUN14(VAR3, VAR9, VAR14, VAR10)) !=
VAR21) {
break;
}

VAR11 = FUN15(VAR19, VAR16);
if (VAR11 != 0) {
FUN2(""
"", VAR27);
VAR20 = VAR28;
if (VAR27 == VAR35) {
VAR20 = VAR36;
}
(void) FUN16(VAR3, VAR9, VAR14, VAR10);
} else {
(void) FUN17(VAR3, VAR9, VAR14, VAR10);
}
FUN10(VAR14);
break;
case VAR37:
if ((VAR20 = FUN11(VAR19, VAR16, &VAR18)) !=
VAR31) {

if (VAR18 == VAR38)
goto VAR22;
}
VAR20 = VAR21;	

VAR12 = strlen(VAR32) + strlen(VAR33) +
strlen("") + strlen(VAR3);
if ((VAR13 = (char *)calloc(VAR12 + 3, 1)) != NULL) {
(void) snprintf(VAR13, VAR12 + 3, "",
VAR32, VAR3, VAR33);
}
if (!FUN12(VAR6, VAR13)) {
free(VAR13);
FUN13(VAR19, VAR16);
return (VAR34);
}
free(VAR13);

VAR14 = FUN9(VAR3);
if (VAR14 == NULL) {
FUN2("");
VAR20 = VAR28;
break;
}


if (VAR18 == VAR39) {
if ((VAR20 = FUN14(VAR3, VAR9,
VAR14, VAR10)) != VAR21) {
break;
}
}

VAR11 = FUN18(VAR19, VAR16);
if (VAR11 != 0) {
FUN2(""
"", VAR27);
VAR20 = VAR28;
if (VAR27 == VAR35) {
VAR20 = VAR36;
}
if (VAR18 == VAR39) {
(void) FUN16(VAR3, VAR9,
VAR14, VAR10);
}
} else {
if (VAR18 == VAR39) {
(void) FUN17(VAR3, VAR9,
VAR14, VAR10);
}
}
FUN10(VAR14);
break;
case VAR40:
case VAR41:
case VAR42:
(void) FUN4(VAR8, VAR4, VAR10);
VAR20 = VAR43;
break;
case VAR44:
default:
(void) FUN4(VAR8, VAR4, VAR10);
VAR20 = VAR45;
}

VAR22:
FUN13(VAR19, VAR16);

return (FUN19(VAR9, VAR20, VAR3, VAR27));
}