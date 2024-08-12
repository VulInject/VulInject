static int
FUN1(
struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6,
int *VAR7,
VAR8 *VAR9)
{
struct pathname VAR10;
char *VAR11;
struct VAR12 *VAR13 = NULL;
struct VAR12 *VAR14 = NULL;
int VAR15, VAR16;
int VAR17;


if (VAR17 = FUN2(VAR4->VAR18, VAR19, &VAR10)) {
return (VAR17);
}

*VAR7 = -1;

if (VAR17 =
FUN3(VAR10.VAR20, VAR21, VAR22, VAR23, &VAR13)) {



VAR11 = strrchr(VAR10.VAR20, '');
if (VAR11 == NULL || strlen(VAR11) == 0)
goto VAR24;

*VAR11++ = '';


if (FUN4(VAR11, "") == 0) {

*VAR7 = VAR25;
} else if (strspn(VAR11, "") == strlen(VAR11)) {

long VAR26 = 0;

if ((VAR17 = FUN5(VAR11, NULL, 10, &VAR26)) == 0) {

if (VAR26 > 24 || VAR26 == 0)
VAR17 = VAR27;
}
if (VAR17)
goto VAR24;
*VAR7 = (int)VAR26;
} else if (strlen(VAR11) == 1) {

*VAR11 = FUN6(*VAR11);
if (*VAR11 == '' || *VAR11 == '') {
*VAR7 = VAR28;
} else if (*VAR11 < '' || *VAR11 > '') {
VAR17 = VAR27;
goto VAR24;
} else {
*VAR7 = 1 + *VAR11 - '';
}
} else {

goto VAR24;
}


VAR17 = FUN3(VAR10.VAR20, VAR21, VAR22,
VAR23, &VAR13);
} else {
*VAR7 = VAR28;
}
VAR24:
FUN7(&VAR10);
if (VAR17)
return (VAR17);

FUN8(*VAR7 >= VAR28);


if ((VAR2->VAR29 & VAR30) != 0 ||
((VAR4->VAR31 & VAR32) != 0)) {
VAR15 = VAR33;
VAR16 = VAR34;
} else {
VAR15 = VAR33 | VAR35;
VAR16 = VAR34 | VAR36;
}

VAR17 = FUN9(VAR2, &VAR14);

if (VAR17 > 0) {
if (VAR17 == VAR37)
VAR17 = VAR38;
goto VAR39;
} else if (VAR17 == 0) {
*VAR9 = VAR14->VAR40;
} else {
*VAR9 = VAR13->VAR40;

if (VAR13->VAR41 != VAR42) {
VAR17 = VAR43;
goto VAR39;
}

if ((VAR17 = FUN10(VAR6, VAR13, VAR15)) != 0)
goto VAR39;
}

if (FUN11(*VAR9) >= VAR44) {
VAR17 = VAR27;
goto VAR39;
}

if ((VAR17 = FUN12(VAR13, VAR16, 0, VAR6, NULL)) != 0)
goto VAR39;

VAR39:
if (VAR13 != NULL)
FUN13(VAR13);
if (VAR14 != NULL)
FUN13(VAR14);
return (VAR17);
}