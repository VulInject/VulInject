static int
FUN1(VAR1 *VAR2, usb_opaque_t VAR3,
usb_flags_t VAR4, uchar_t VAR5)
{
VAR6		*VAR7 = (VAR6 *)VAR3;
VAR8		*VAR9 = (VAR8 *)VAR3;
VAR10		*VAR11 = (VAR10 *)VAR3;
VAR12		*VAR13 = (VAR12 *)VAR3;
VAR14	*VAR15 = FUN2(VAR3);
VAR16			*VAR17;
VAR18		*VAR19;
usb_req_attrs_t		VAR20;
usb_opaque_t		VAR21 = NULL, VAR22 = NULL;
uint_t			VAR23 = 0;
uchar_t			VAR24 = VAR2->VAR25.VAR26 &
VAR27;
uchar_t			VAR28 = VAR2->VAR25.VAR29 &
VAR30;
int			VAR31;

FUN3(VAR32, VAR33,
"",
(void *)VAR2, (void *)VAR3, VAR4);

if (VAR3 == NULL) {

return (VAR34);
}


switch (VAR28) {
case VAR35:
VAR19 = &VAR7->VAR36;
break;
case VAR37:
VAR19 = &VAR9->VAR38;
break;
case VAR39:
VAR19 = &VAR11->VAR40;
break;
case VAR41:
VAR19 = &VAR13->VAR42;
break;
default:
return (VAR43);
}

*VAR19 = VAR44;

if (FUN4() && (VAR4 & VAR45)) {

return (VAR46);
}

if (VAR5 != VAR28) {

return (VAR47);
}


FUN5(VAR2->VAR48);

if (VAR2->VAR48->VAR49[0].VAR50 == NULL) {

return (VAR47);
}


if (FUN6(&(VAR2->VAR48->VAR51),
&VAR15->VAR52) != VAR53) {

return (VAR43);
}


switch (VAR28) {
case VAR35:
VAR7->VAR54 = VAR55;
VAR17 = VAR7->VAR56;
VAR20 = VAR7->VAR57;
VAR23 = VAR7->VAR58;
VAR21 = (VAR59)VAR7->VAR60;
VAR22 = (VAR59)VAR7->VAR61;
if (VAR4 & VAR45) {
VAR4 |= VAR62;
}

if (FUN7(VAR2)) {
VAR20 |= VAR63;
}
break;
case VAR37:
VAR9->VAR64 = VAR55;
VAR17 = VAR9->VAR65;
VAR20 = VAR9->VAR66;
VAR23 = VAR9->VAR67;
VAR21 = (VAR59)VAR9->VAR68;
VAR22 = (VAR59)VAR9->VAR69;
if (VAR4 & VAR45) {
VAR4 |= VAR62;
}
break;
case VAR39:
VAR11->VAR70 = VAR55;
VAR17 = VAR11->VAR71;
VAR20 = VAR11->VAR72;
VAR23 = VAR11->VAR73;
VAR21 = (VAR59)VAR11->VAR74;
VAR22 = (VAR59)VAR11->VAR75;
if ((VAR4 & VAR45) &&
(VAR20 & VAR76)) {
VAR4 |= VAR62;
}
break;
case VAR41:
VAR13->VAR77 = VAR55;
VAR17 = VAR13->VAR78;
VAR20 = VAR13->VAR79;
VAR21 = (VAR59)VAR13->VAR80;
VAR22 = (VAR59)VAR13->VAR81;
break;
default:
return (VAR43);
}

FUN3(VAR32, VAR33,
"", VAR20, VAR4);


if (FUN8(VAR2, VAR20, VAR4) !=
VAR53) {

return (VAR43);
}


if ((VAR4 & VAR45) == 0) {
if (VAR21 == NULL || VAR22 == NULL) {

return (VAR43);
}
}

switch (VAR28) {
case VAR35:
if (VAR7->VAR82 && (VAR17 == NULL)) {

return (VAR43);
}
break;
case VAR37:
if ((VAR9->VAR83) && (VAR17 == NULL)) {

return (VAR43);
}
break;
case VAR39:
if (VAR24 == VAR84) {
if (VAR11->VAR85 && VAR17 == NULL) {

return (VAR43);
}
}

if (VAR24 == VAR86) {
if (!(VAR11->VAR72 & VAR76)) {
if (VAR21 == NULL || VAR22 == NULL) {

return (VAR43);
}
}
if (VAR17 != NULL) {

return (VAR43);
}
if (!(VAR11->VAR72 & VAR76) &&
(VAR23 > 0)) {

return (VAR43);
}
}
break;
case VAR41:
if (VAR24 == VAR86) {
if (VAR21 == NULL || VAR22 == NULL) {

return (VAR43);
}
}

if (VAR17 == NULL) {

return (VAR43);
}


if (VAR24 == VAR84) {
if (FUN9(VAR17) <= 0) {

return (VAR43);
}
}


if ((VAR13->VAR87 == 0) ||
(VAR13->VAR88 == NULL)) {

return (VAR43);
}


if (!((VAR13->VAR79 &
VAR89) ||
(VAR13->VAR79 & VAR90))) {

return (VAR91);
}


if ((VAR13->VAR79 &
(VAR89 | VAR90)) ==
(VAR89 | VAR90)) {

return (VAR91);
}


if (((VAR13->VAR79 & VAR90)) &&
VAR13->VAR92) {

return (VAR43);
}


if (((VAR13->VAR79 &
VAR89)) &&
(VAR13->VAR92 == 0)) {

return (VAR91);
}


for (VAR31 = 0; VAR31 < VAR13->VAR87; VAR31++) {
if (VAR13->VAR88[VAR31].VAR93 == 0) {

return (VAR43);
}
}
break;
}


VAR15->VAR94		= VAR2;
VAR15->VAR95	= VAR4;
VAR15->VAR96		= VAR20;


VAR15->VAR97		= VAR98;
VAR15->VAR99		= VAR100;


*VAR19 = VAR100;

return (VAR53);
}