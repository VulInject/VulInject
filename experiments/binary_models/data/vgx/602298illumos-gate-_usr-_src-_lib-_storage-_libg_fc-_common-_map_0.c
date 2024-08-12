static int
FUN1(char *VAR1, uchar_t VAR2[], uchar_t VAR3[], int *VAR4,
struct VAR5 **VAR6)
{
uint32_t	VAR7;
int		VAR8, VAR9, VAR10;
char		*VAR11, *VAR12;
int		VAR13 = 0, VAR14, *VAR15;
unsigned long long	VAR16;
VAR17			*VAR18, *VAR19;
char		VAR20[VAR21];
int		VAR22 = 0, VAR23 = 0;
mp_pathlist_t	VAR24;
char		VAR25[VAR26];
gfc_dev_t	VAR27, VAR28;
hrtime_t	VAR29, VAR30;
char *VAR31 = NULL;

FUN2(""
"",
VAR1);

if ((VAR31 = getenv("")) != NULL) {
VAR29 = FUN3();
}


if ((VAR11 = strrchr(VAR1, '')) == NULL) {
return (VAR32);
}
VAR11++;	

(void) strcpy(VAR20, VAR1);

if (strstr(VAR20, VAR33)) {
if (FUN4(VAR20, &VAR24)) {
return (VAR34);
}
VAR14 = VAR24.VAR35;
VAR22 = VAR23 = 0;
for (VAR8 = 0; VAR8 < VAR14; VAR8++) {
if (VAR24.VAR36[VAR8].VAR37 < VAR38) {
if (VAR24.VAR36[VAR8].VAR37 ==
VAR39) {
VAR22 = VAR8;
break;
} else if (VAR24.VAR36[VAR8].VAR37 ==
VAR40) {
VAR23 = VAR8;
}
}
}
if (VAR22 == VAR8) {

(void) strcpy(VAR20,
VAR24.VAR36[VAR22].VAR41);
(void) strncpy(VAR25,
VAR24.VAR36[VAR22].VAR42,
VAR26 - 1);
VAR25[VAR26 - 1] = '';
} else {

(void) strcpy(VAR20,
VAR24.VAR36[VAR23].VAR41);
(void) strncpy(VAR25,
VAR24.VAR36[VAR23].VAR42,
VAR26 - 1);
VAR25[VAR26 - 1] = '';
}
free(VAR24.VAR36);
(void) strcat(VAR20, VAR43);
}
if ((VAR27 = FUN5(VAR20, &VAR9,
VAR44)) == NULL) {
return (VAR9);
}

if ((VAR9 = FUN6(VAR27, &VAR7)) != 0) {
FUN7(VAR27);
return (VAR9);
}

if (strstr(VAR1, VAR33)) {
VAR11 = VAR25;
} else {

if (*VAR11 != '') {
FUN7(VAR27);
return (VAR45);
}
VAR11++;
}
VAR16 = FUN8(VAR11, &VAR12, 16);
if (VAR12 == VAR11) {
FUN7(VAR27);
return (VAR46);
}
FUN2(""
"", VAR16);

if (((VAR28 = FUN9(VAR27, &VAR9)) == NULL) &&
(VAR9 != VAR47)) {
FUN7(VAR27);
return (VAR9);
}

while (VAR28) {
if ((VAR9 = FUN10(VAR28,
VAR48, &VAR10, &VAR18)) != 0) {
FUN7(VAR27);
return (VAR9);
}
if ((VAR9 = FUN10(VAR28,
VAR49, &VAR10, &VAR19)) != 0) {
FUN7(VAR27);
return (VAR9);
}

if (VAR16 == FUN11(VAR18) && VAR13 != 1) {
VAR13 = 1;
memcpy(VAR2, VAR18, VAR50);
memcpy(VAR3, VAR19, VAR50);
if ((VAR9 = FUN12(
VAR28, VAR51, &VAR15)) != 0) {
FUN7(VAR27);
return (VAR9);
}
*VAR4 = *VAR15;
}
FUN13(VAR6, VAR18,
VAR19);

if (((VAR28 = FUN14(VAR28, &VAR9)) == NULL) &&
(VAR9 != VAR47)) {
FUN7(VAR27);
return (VAR9);
}
}
if (!VAR13) {
FUN7(VAR27);
return (VAR52);
}

FUN7(VAR27);
if (VAR31 != NULL) {
VAR30 = FUN3();
fprintf(VAR53, ""
"",
(VAR30 - VAR29)/1000000);
}
return (0);
}