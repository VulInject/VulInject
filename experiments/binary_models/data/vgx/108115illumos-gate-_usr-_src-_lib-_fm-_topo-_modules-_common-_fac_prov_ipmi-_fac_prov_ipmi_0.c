static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, topo_version_t VAR5,
VAR6 *VAR7, VAR6 **VAR8)
{
char *VAR9;
VAR10 *VAR11;
VAR12 *VAR13;
int VAR14, VAR15;
uint32_t VAR16;
VAR6 *VAR17, *VAR18;
ipmi_platform_event_message_t VAR19;
VAR20 *VAR21;

if (VAR5 > VAR22)
return (FUN2(VAR2, VAR23));


if ((VAR13 = FUN3(VAR2)) == NULL) {
FUN4(VAR2, "");
return (-1);
}

if (FUN5(VAR4, VAR24, "",
&VAR9, &VAR14) != 0) {
FUN4(VAR2, ""
"", FUN6(VAR14));
FUN7(VAR2);
return (-1);
}

if ((VAR11 = FUN8(VAR13, VAR9)) == NULL) {
FUN4(VAR2, "",
VAR9, FUN9(VAR13));
FUN10(VAR2, VAR9);
FUN7(VAR2);
return (-1);
}


if ((FUN11(VAR7, VAR25, &VAR17) == 0) &&
FUN12(VAR17, VAR26)) {

if ((VAR15 = FUN13(VAR17, VAR26,
&VAR16)) != 0) {
FUN4(VAR2, ""
"", VAR26, strerror(VAR15));
FUN10(VAR2, VAR9);
(void) FUN2(VAR2, VAR27);
FUN7(VAR2);
return (-1);
}

if (VAR16 != VAR28 &&
VAR16 != VAR29) {
FUN4(VAR2, "",
VAR16);
FUN10(VAR2, VAR9);
(void) FUN2(VAR2, VAR27);
FUN7(VAR2);
return (-1);
}

VAR19.VAR30 = VAR11->VAR31;
VAR19.VAR32 = VAR11->VAR33;
VAR19.VAR34 = VAR11->VAR35;


VAR19.VAR36 = 0x21;
VAR19.VAR37 = 0;
VAR19.VAR38 = 0x04;
if (VAR16 == VAR29)
VAR19.VAR39[0] = 1;
else
VAR19.VAR39[0] = 0;
VAR19.VAR39[1] = 0xff;
VAR19.VAR39[2] = 0xff;

if (FUN14(VAR13, &VAR19) < 0) {
FUN4(VAR2, ""
"", VAR9, FUN9(VAR13));
FUN10(VAR2, VAR9);
FUN7(VAR2);
return (-1);
}
} else {

if ((VAR21 = FUN15(VAR13, VAR11->VAR33))
== NULL) {
FUN4(VAR2, ""
"", VAR9,
FUN9(VAR13));
FUN10(VAR2, VAR9);
FUN7(VAR2);
return (-1);
}

if (VAR21->VAR40 &
VAR41)
VAR16 = VAR29;
else
VAR16 = VAR28;
}
FUN10(VAR2, VAR9);

FUN7(VAR2);

if (FUN16(VAR2, &VAR18, VAR42) != 0 ||
FUN17(VAR18, VAR43, VAR44) != 0 ||
FUN18(VAR18, VAR45, VAR46) != 0 ||
FUN18(VAR18, VAR26, VAR16) != 0) {
FUN4(VAR2, "");
FUN19(VAR18);
return (FUN2(VAR2, VAR47));
}
*VAR8 = VAR18;

return (0);
}