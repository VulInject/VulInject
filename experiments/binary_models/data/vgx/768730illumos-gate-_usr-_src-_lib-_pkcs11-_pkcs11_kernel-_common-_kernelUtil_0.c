VAR1
FUN1(VAR2 *VAR3, CK_MECHANISM_TYPE VAR4,
CK_MECHANISM_INFO_PTR VAR5, VAR6 *VAR7)
{
crypto_get_provider_mechanism_info_t VAR8;
const char *VAR9;
CK_FLAGS VAR10, VAR11;
CK_RV VAR12;
int VAR13;
char VAR14[11];   

if (VAR4 >= VAR15) {

(void) snprintf(VAR14, sizeof (VAR14), "", VAR4);
VAR9 = VAR14;
} else {
VAR9 = FUN2(VAR4);
}

if (VAR9 == NULL)
return (VAR16);

(void) strcpy(VAR8.VAR17, VAR9);
VAR8.VAR18 = VAR3->VAR19;

while ((VAR13 = FUN3(VAR20, VAR21,
&VAR8)) < 0) {
if (VAR22 != VAR23)
break;
}
if (VAR13 < 0) {
VAR12 = VAR24;
} else {
VAR12 = FUN4(
VAR8.VAR25);
}

if (VAR12 != VAR26) {
return (VAR12);
}


VAR11 = VAR8.VAR11;
VAR11 &= ~(VAR27 | VAR28 |
VAR29 | VAR30 |
VAR31 | VAR32 |
VAR33 |
VAR34 |
VAR35 |
VAR36);

if (VAR11 == 0) {
return (VAR16);
}

if (VAR12 == VAR26) {

*VAR7 = VAR11;


VAR10 = VAR37;
if (VAR11 & VAR38)
VAR10 |= VAR39;
if (VAR11 & VAR40) {
VAR10 |= VAR41;

VAR10 |= VAR42;
}
if (VAR11 & VAR43)
VAR10 |= VAR44;
if (VAR11 & VAR45)
VAR10 |= VAR46;
if (VAR11 & VAR47)
VAR10 |= VAR48;
if (VAR11 & VAR49)
VAR10 |= VAR50;
if (VAR11 & VAR51)
VAR10 |= VAR52;
if (VAR11 & VAR53)
VAR10 |= VAR54;
if (VAR11 & VAR55)
VAR10 |= VAR56;
if (VAR11 & VAR57)
VAR10 |= VAR58;
if (VAR11 & VAR59)
VAR10 |= VAR42;
if (VAR11 & VAR60)
VAR10 |= VAR61;

VAR5->VAR62 = VAR8.VAR63;
VAR5->VAR64 = VAR8.VAR65;
VAR5->VAR10 = VAR10;

}

return (VAR12);
}