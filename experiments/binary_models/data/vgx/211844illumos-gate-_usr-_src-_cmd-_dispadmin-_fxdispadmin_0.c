static void
FUN1(char *VAR1)
{
int		VAR2;
int		VAR3;
char		*VAR4;
pcinfo_t	VAR5;
pcadmin_t	VAR6;
fxadmin_t	VAR7;
VAR8	*VAR9;
int		VAR10;
ulong_t		VAR11;
hrtimer_t	VAR12;
VAR13		*VAR14;
char		VAR15[512];
int		VAR16;
char 		*VAR17;
char		VAR18[512], VAR19[512];
int		VAR20;

(void) strcpy(VAR5.VAR21, "");
if (FUN2(0, 0, VAR22, (VAR23)&VAR5) == -1)
FUN3(""
"", VAR24, VAR25);

VAR6.VAR26 = VAR5.VAR26;
VAR6.VAR27 = (char *)&VAR7;
VAR7.VAR28 = VAR29;

if (FUN2(0, 0, VAR30, (VAR23)&VAR6) == -1)
FUN3(""
"", VAR24, VAR25);

VAR3 = VAR7.VAR31;
if ((VAR9 =
(VAR8 *)malloc(VAR3 * sizeof (VAR8))) == NULL)
FUN3("", VAR24);

if ((VAR14 = fopen(VAR1, "")) == NULL)
FUN3("", VAR24, VAR1);

VAR10 = 0;


do {
if (fgets(VAR15, sizeof (VAR15), VAR14) == NULL)
FUN3("", VAR24);
VAR10++;
} while (VAR15[0] == '' || VAR15[0] == '' ||
(VAR16 = strspn(VAR15, "")) == strlen(VAR15) ||
strchr(VAR15, '') == VAR15 + VAR16);


if (sscanf(VAR15, "", VAR18, VAR19, &VAR20) == 2 &&
VAR18[0] != '' && VAR19[0] != '' && VAR20 == strlen(VAR15)) {

if (strcmp(VAR18, "") == 0) {
VAR25 = 0;
VAR2 = (int)FUN4(VAR19, &VAR17, 10);
if (VAR25 != 0 || VAR17 == VAR19 ||
VAR2 < 0 || *VAR17 != '')
FUN3(""
"", VAR24, VAR10);
else
VAR11 = VAR2;
} else {
FUN3(""
"", VAR24, VAR10);
}
}


for (VAR2 = 0; VAR2 < VAR7.VAR31; VAR2++) {


do {
if (fgets(VAR15, sizeof (VAR15), VAR14) == NULL)
FUN3("",
VAR24);
VAR10++;
} while (VAR15[0] == '' || VAR15[0] == '' ||
(VAR16 = strspn(VAR15, "")) == strlen(VAR15) ||
strchr(VAR15, '') == VAR15 + VAR16);

if ((VAR4 = strtok(VAR15, "")) == NULL)
FUN3("",
VAR24, VAR10);

VAR9[VAR2].VAR32 = FUN5(VAR4);
if (VAR9[VAR2].VAR32 <= 0) {
FUN3(""
""
"", VAR24, VAR10);
} else if (VAR11 != VAR33) {
VAR12.VAR34 = 0;
VAR12.VAR35 = VAR9[VAR2].VAR32;
VAR12.VAR36 = VAR11;
if (FUN6(&VAR12, VAR33, VAR37) == -1)
FUN3(""
"", VAR24);
if ((VAR9[VAR2].VAR32 =
FUN7(&VAR12)) == -1)
FUN3(""
""
"", VAR24, VAR10);
}

if ((VAR4 = strtok(NULL, "")) != NULL && VAR4[0] != '')
FUN3("",
VAR24, VAR10);
}


while (fgets(VAR15, sizeof (VAR15), VAR14) != NULL) {
if (VAR15[0] != '' && VAR15[0] != '' &&
(VAR16 = strspn(VAR15, "")) != strlen(VAR15) &&
strchr(VAR15, '') != VAR15 + VAR16)
FUN3("",
VAR24);
}

VAR7.VAR38 = VAR9;
VAR7.VAR28 = VAR39;
if (FUN2(0, 0, VAR30, (VAR23)&VAR6) == -1)
FUN3(""
"", VAR24, VAR25);
}