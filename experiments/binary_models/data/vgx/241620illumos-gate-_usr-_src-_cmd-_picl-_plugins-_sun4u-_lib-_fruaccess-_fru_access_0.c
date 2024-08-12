VAR1
FUN1(picl_nodehdl_t VAR2)
{
int			VAR3;
int			VAR4;
int			VAR5;
uchar_t			VAR6;
char			*VAR7;
char			VAR8[VAR9];
char			VAR10[VAR11];
VAR12		*VAR13;
VAR12		*VAR14;
picl_nodehdl_t		VAR15;
picl_prophdl_t		VAR16;
ptree_propinfo_t	VAR17;
container_info_t	VAR18;


VAR3 = FUN2(VAR2, VAR19,
&VAR15, sizeof (VAR15));
if (VAR3 != VAR20) {
return (0);
}


VAR3 = FUN2(VAR15, VAR21,
VAR8, VAR9);
if (VAR3 != VAR20) {
return (0);
}

VAR3 = FUN3(VAR15, VAR22,
&VAR16);
if (VAR3 != VAR20) {
return (0);
}

VAR3 = FUN4(VAR16, &VAR17);
if (VAR3 != VAR20) {
return (0);
}

VAR7 = alloca(VAR17.VAR23.VAR24);
if (VAR7 == NULL) {
return (0);
}


VAR3 = FUN5(VAR16, VAR7, VAR17.VAR23.VAR24);
if (VAR3 != VAR20) {
return (0);
}

VAR13	= FUN6();
if (VAR13 == NULL) {
return (0);
}

FUN7(VAR13);

(void) FUN8(VAR13->VAR25.VAR26->VAR27, VAR8,
sizeof (VAR8));


if (strcmp(VAR7, "") == 0) {
VAR5 = open(VAR8, VAR28);
if (VAR5 < 0) {
return (0);
}
VAR6 = 0x00;

VAR3 = pread(VAR5, &VAR6, sizeof (VAR6), 0);
(void) close(VAR5);
switch (VAR6) {
case 0x08:
(void) strcpy(VAR7, "");
break;
case 0x80:
(void) strcpy(VAR7, "");
break;
default:
(void) strcpy(VAR7, "");
break;
}
}


VAR3 = -1;
if (FUN9(VAR29, VAR10, sizeof (VAR10)) != -1) {
(void) snprintf(VAR8, VAR9, VAR30,
VAR10);
(void) FUN10(VAR8, VAR31, VAR9);
VAR3 = FUN11(VAR8, VAR32);
}
if (VAR3 != 0) {

(void) snprintf(VAR8, VAR9, "",
VAR33, VAR31);
VAR3 = FUN11(VAR8, VAR32);
}

if (VAR3 == 0) {
VAR3 = FUN12(VAR8, VAR7, &VAR18);
}
if (VAR3 < 0) {
return (0);
}

VAR13->VAR25.VAR26->VAR34 =  VAR18.VAR35;
VAR13->VAR25.VAR26->VAR36 = NULL;

for (VAR4 = 0; VAR4 < VAR18.VAR35; VAR4++) {
VAR14 = FUN13();
if (VAR14 == NULL) {
return (0);
}

FUN7(VAR14);

VAR14->VAR25.VAR37->VAR38.VAR39 =
VAR18.VAR40[VAR4].VAR41;

VAR14->VAR25.VAR37->VAR38.VAR42 =
VAR18.VAR40[VAR4].VAR43.VAR44.VAR45;

VAR14->VAR25.VAR37->VAR38.VAR46 =
VAR18.VAR40[VAR4].VAR24;

VAR14->VAR25.VAR37->VAR38.VAR47 = VAR18.VAR48;
VAR14->VAR25.VAR37->VAR49 =
VAR18.VAR40[VAR4].VAR49;

FUN14(VAR13, VAR14);
}
return (VAR13->VAR50);
}