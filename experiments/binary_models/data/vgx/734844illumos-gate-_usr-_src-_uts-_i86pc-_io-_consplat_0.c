static int
FUN1(int *VAR1)
{
static int VAR2 = VAR3;
static int VAR4 = 0;

char *VAR5;
VAR6 *VAR7;


if (VAR2 != VAR3) {
if (VAR1 != NULL)
*VAR1 = VAR4;
return (VAR2);
}

if (!FUN2(VAR8) || FUN3()) {
VAR2 = VAR9;
if (VAR1 != NULL)
*VAR1 = VAR4;
return (VAR2);
}


VAR2 = VAR10;	
VAR7 = FUN4();
if ((FUN5(VAR11, VAR7,
VAR12, "", &VAR5) == VAR13) ||
(FUN5(VAR11, VAR7,
VAR12, "", &VAR5) == VAR13) ||
(FUN5(VAR11, VAR7,
VAR12, "", &VAR5) == VAR13)) {
if (strlen(VAR5) == 4 && FUN6(VAR5, "", 3) == 0 &&
VAR5[3] >= '' && VAR5[3] <= '') {
VAR2 = VAR14;
VAR4 = VAR5[3] - '';
} else if (strcmp(VAR5, "") == 0) {
(void) FUN7("");
(void) FUN7("");
(void) FUN7("");
(void) FUN7("");

FUN8(FUN9(2000000));
VAR2 = VAR15;
} else if (strcmp(VAR5, "") == 0) {
VAR2 = VAR9;
}
FUN10(VAR5);
}


if (VAR2 == VAR10 && FUN11() == NULL) {
VAR2 = VAR14;
VAR4 = 0;
}

if (VAR1 != NULL)
*VAR1 = VAR4;
return (VAR2);
}