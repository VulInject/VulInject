static int
FUN1(struct VAR1 *VAR2, wchar_t *VAR3,
VAR4 *VAR5, VAR6 *VAR7, int VAR8)
{
HANDLE VAR9;
int VAR10;
DWORD VAR11 = VAR12;
WIN32_FIND_DATAW	VAR13;

if (VAR8 || VAR7 != NULL) {
VAR9 = FUN2(VAR3, &VAR13);
if (VAR9 == VAR14 &&
FUN3() == VAR15) {
wchar_t *VAR16;
VAR16 = FUN4(VAR3);
VAR9 = FUN2(VAR16, &VAR13);
free(VAR16);
}
if (VAR9 == VAR14) {
FUN5(FUN3());
return (-1);
}
FUN6(VAR9);
}


if (VAR8 && 
((VAR13.VAR17
& VAR18) &&
(VAR13.VAR19 == VAR20)))
VAR11 |= VAR21;

VAR9 = FUN7(VAR2->VAR22, 0, 0, NULL,
VAR23, VAR11, NULL);
if (VAR9 == VAR14 &&
FUN3() == VAR15) {
wchar_t *VAR16;
VAR16 = FUN4(VAR3);
VAR9 = FUN7(VAR16, 0, 0, NULL,
VAR23, VAR11, NULL);
free(VAR16);
}
if (VAR9 == VAR14) {
FUN5(FUN3());
return (-1);
}
VAR10 = FUN8(VAR9, VAR5);
FUN9(VAR9);
if (VAR10 == 0) {
FUN5(FUN3());
return (-1);
}

if (VAR7 == NULL)
return (0);

*VAR7 = VAR24 | VAR25 | VAR26;
if ((VAR5->VAR17 & VAR27) == 0)
*VAR7 |= VAR28 | VAR29 | VAR30;
if ((VAR5->VAR17 & VAR18) &&
VAR13.VAR19 == VAR20)
*VAR7 |= VAR31;
else if (VAR5->VAR17 & VAR32)
*VAR7 |= VAR33 | VAR34 | VAR35 | VAR36;
else {
const wchar_t *VAR37;

*VAR7 |= VAR38;
VAR37 = FUN10(VAR3, VAR39'');
if (VAR37 != NULL && wcslen(VAR37) == 4) {
switch (VAR37[1]) {
case VAR39'': case VAR39'':
if ((VAR37[2] == VAR39'' || VAR37[2] == VAR39'' ) &&
(VAR37[3] == VAR39'' || VAR37[3] == VAR39'' ))
*VAR7 |= VAR34 | VAR35 | VAR36;
break;
case VAR39'': case VAR39'':
if (((VAR37[2] == VAR39'' || VAR37[2] == VAR39'' ) &&
(VAR37[3] == VAR39'' || VAR37[3] == VAR39'' )))
*VAR7 |= VAR34 | VAR35 | VAR36;
break;
case VAR39'': case VAR39'':
if ((VAR37[2] == VAR39'' || VAR37[2] == VAR39'' ) &&
(VAR37[3] == VAR39'' || VAR37[3] == VAR39'' ))
*VAR7 |= VAR34 | VAR35 | VAR36;
break;
default:
break;
}
}
}
return (0);
}