int
FUN1(VAR1 *VAR2, int VAR3, int argc, const char **argv)
{
int	VAR4;
int	VAR5 = 0;
int	VAR6 = (VAR3 & VAR7) != 0;
char	*VAR8;
char	*VAR9;
char	*VAR10;
char	*VAR11;
char	*VAR12;
struct VAR13 *VAR14;
VAR15 *VAR16;
attrlist VAR17[4];
int	VAR18;
int	VAR19 = 0;
int	VAR20;
char	*VAR21 = NULL;
int	VAR22 = 1;

for (VAR4 = 0; VAR4 < argc; VAR4++) {
if (strcmp(argv[VAR4], "") == 0)
VAR5 = 1;
else if (strcmp(argv[VAR4], "") == 0)
VAR6 = 1;
else if (strcmp(argv[VAR4], "") == 0)
VAR19 = 1;
else if (strcmp(argv[VAR4], "") == 0)
VAR22 = 0;
}

if (VAR5)
FUN2(VAR23 | VAR24,
"");

if (FUN3(VAR2, VAR25, (void **)&VAR8) != VAR26) {
FUN2(VAR23 | VAR24, "");
return (VAR27);
}

if (VAR8 == NULL || *VAR8 == '') {
FUN2(VAR23 | VAR24,
"");
return (VAR28);
}

if (FUN3(VAR2, VAR29, (void **)&VAR9) != VAR26) {
FUN2(VAR23 | VAR24,
"");
return (VAR27);
}

VAR18 = FUN3(VAR2, VAR30, (void **)&VAR14);
if (VAR18 == VAR26 && VAR14 != NULL) {
if ((VAR16 = calloc(1, sizeof (*VAR16))) == NULL)
return (VAR31);
VAR16->VAR32 = VAR14->VAR32;
VAR16->VAR33 = VAR14->VAR33;
VAR16->VAR34 = VAR14->VAR34;
} else {
VAR16 = VAR35;
}


VAR17[0].VAR32 = VAR36;		VAR17[0].VAR37 = &VAR17[1];
VAR17[1].VAR32 = VAR38;	VAR17[1].VAR37 = &VAR17[2];

VAR17[2].VAR32 = VAR39;	VAR17[2].VAR37 = &VAR17[3];
VAR17[3].VAR32 = VAR40;		VAR17[3].VAR37 = NULL;

VAR18 = FUN4(VAR8, VAR16, VAR17);

if (VAR16 != VAR35)
free(VAR16);

if (VAR18 == VAR41) {
FUN2(VAR23 | VAR24,
"", VAR8);
return (VAR28);
}

if (VAR18 == VAR42) {
FUN2(VAR23 | VAR24,
"");
return (VAR43);
}

if (VAR18 != VAR44)
return (VAR27);

VAR10 = VAR17[0].VAR45.VAR46;
VAR12 = VAR17[1].VAR45.VAR46;
VAR20 = VAR17[2].VAR45.VAR47;
VAR21 = VAR17[3].VAR45.VAR46;


if (VAR10 != NULL && VAR10[0] != '' &&
strlen(VAR10) > 13 && VAR10[13] == '')
VAR10[13] = '';


if (VAR10 == NULL || *VAR10 == '') {
if (VAR3 & VAR48) {
VAR18 = VAR49;
FUN2(VAR23 | VAR50,
"",
VAR8);
goto VAR51;
} else {
VAR18 = VAR26;
goto VAR51;
}
}


if (VAR9 == NULL) {
VAR18 = VAR49;
goto VAR51;
}

if (VAR19 &&
strcmp(VAR12, "") != 0 &&
strcmp(VAR12, "") != 0) {
VAR18 = VAR52;
goto VAR51;
}


if ((VAR11 = crypt(VAR9, VAR10)) == NULL) {
switch (VAR53) {
case VAR54:
VAR18 = VAR31;
break;
case VAR55:
VAR18 = VAR56;
break;
default:
VAR18 = VAR27;
}
goto VAR51;
}

if (strcmp(VAR11, VAR10) == 0)
VAR18 = VAR26;
else
VAR18 = VAR49;


if (VAR22 && (VAR18 == VAR26 && VAR20 > 0)) {
VAR20 = FUN5(VAR8, VAR12);
if (VAR6 == 0 && VAR20 > 0)
FUN6(VAR2, VAR20, VAR21);
} else if (VAR22 && VAR18 == VAR49) {
int VAR57 = FUN7(VAR8);
if (VAR57 != 0) {
if (FUN8(VAR8, VAR12,
VAR57) == VAR58)
VAR18 = VAR59;
}
}
VAR51:
if (VAR10)
free(VAR10);
if (VAR12)
free(VAR12);
if (VAR21)
free(VAR21);
return (VAR18);
}