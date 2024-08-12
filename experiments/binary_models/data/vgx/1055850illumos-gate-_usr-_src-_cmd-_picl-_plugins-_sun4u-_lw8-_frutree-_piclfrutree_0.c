static int
FUN1(char *VAR1, picl_nodehdl_t VAR2, picl_prophdl_t VAR3)
{
int VAR4;
picl_nodehdl_t VAR5;
picl_nodehdl_t VAR6;
picl_nodehdl_t VAR7;
picl_nodehdl_t VAR8;
picl_nodehdl_t VAR9;
picl_prophdl_t VAR10;
picl_prophdl_t VAR11;
char VAR12[VAR13];
char	VAR14[VAR15];

VAR4 = FUN2(VAR2, VAR16,
&VAR6, sizeof (VAR17));
if (VAR4 != VAR18) {
syslog(VAR19, VAR20, VAR16, VAR4);
return (VAR4);
}
VAR4 = FUN2(VAR6, VAR16,
&VAR7, sizeof (VAR17));
if (VAR4 != VAR18) {
syslog(VAR19, VAR20, VAR16, VAR4);
return (VAR4);
}
VAR4 = FUN2(VAR7, VAR21, VAR14,
sizeof (VAR14));
if (VAR4 != VAR18) {
syslog(VAR19, VAR20, VAR21, VAR4);
return (VAR4);
}


FUN3(VAR12, VAR22, FUN4(VAR14, VAR1));

VAR4 = FUN5(VAR12, &VAR8);

if (VAR4 != VAR18) {
FUN3(VAR12, VAR23,
FUN4(VAR14, VAR1));
VAR4 = FUN5(VAR12, &VAR8);
if (VAR4 != VAR18) {

FUN3(VAR12, VAR24,
FUN4(VAR14, VAR1));
VAR4 = FUN5(VAR12, &VAR9);
if (VAR4 != VAR18)
return (VAR18);

VAR4 = FUN6(VAR9,
VAR25, &VAR11);
if (VAR4 != VAR18) {
VAR4 = FUN7(VAR9, VAR2,
VAR25);
if (VAR4 != VAR18)
return (VAR4);
VAR4 = FUN8(VAR3, VAR9,
VAR26);
if (VAR4 != VAR18)
return (VAR4);
}
FUN3(VAR12, VAR27,
FUN4(VAR14, VAR1));
VAR4 = FUN5(VAR12, &VAR8);
if (VAR4 != VAR18)
return (VAR18);

}
}


VAR4 = FUN6(VAR8, VAR25, &VAR11);
if (VAR4 != VAR18) {
VAR4 = FUN7(VAR8, VAR2, VAR25);
if (VAR4 != VAR18)
return (VAR4);
VAR4 = FUN8(VAR3, VAR8, VAR26);
if (VAR4 != VAR18)
return (VAR4);
}


VAR4 = FUN6(VAR8, VAR28, &VAR11);
if (VAR4 == VAR18) {
VAR4 = FUN9(VAR11);
if (VAR4 != VAR18)
return (VAR4);
(void) FUN10(VAR11);
}
VAR4 = FUN11(VAR8, &VAR10, VAR28);
if (VAR4 != VAR18)
return (VAR4);

if (VAR29)
FUN12(VAR12, "", VAR30, VAR14,
(VAR1[1] - ''));
else
FUN12(VAR12, "", VAR31, VAR14,
(VAR1[1] - ''));

VAR4 = FUN5(VAR12, &VAR5);
if (VAR4 == VAR18) {
VAR4 = FUN8(VAR10, VAR5,
VAR32);
if (VAR4 != VAR18)
return (VAR4);
}

if (VAR29)
FUN12(VAR12, "", VAR30, VAR14,
(VAR1[1] - ''));
else
FUN12(VAR12, "", VAR31, VAR14,
(VAR1[1] - ''));

VAR4 = FUN5(VAR12, &VAR5);
if (VAR4 == VAR18) {
return (FUN8(VAR10, VAR5,
VAR32));
}
return (VAR18);
}