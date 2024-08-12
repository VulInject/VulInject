static int
FUN1(VAR1 *VAR2, char *VAR3, uid_t VAR4, int VAR5)
{
int		VAR6;
int		VAR7 = 0;
char		*VAR8, *VAR9;
char		VAR10[VAR11];
VAR12	*VAR13;
VAR14	*VAR15;
struct passwd	VAR16;

if ((VAR2 == NULL) || (VAR3 == NULL))
return (-1);

if ((VAR15 = FUN2(VAR3)) == NULL) {
FUN3("", VAR3);
return (-1);
}
if (VAR5 == VAR17) {
blrange_t	VAR18;

VAR18.VAR19 = FUN4();
VAR9 = FUN5(VAR2->VAR20, VAR21);
if (VAR9 == NULL) {
FUN6(VAR18.VAR19);
} else if (FUN7(VAR9, VAR18.VAR19, VAR22,
&VAR6) == 0) {
FUN3("",
VAR2->VAR23);
free(VAR15);
FUN8(VAR18.VAR19);
return (-1);
}
VAR18.VAR24 = FUN4();
VAR9 = FUN5(VAR2->VAR20, VAR25);
if (VAR9 == NULL) {
FUN9(VAR18.VAR24);
} else if (FUN7(VAR9, VAR18.VAR24, VAR22,
&VAR6) == 0) {
FUN3("",
VAR2->VAR23);
free(VAR15);
FUN8(VAR18.VAR19);
FUN8(VAR18.VAR24);
return (-1);
}
if (FUN10(VAR15, &VAR18) == 0) {
char	*VAR26 = NULL, *VAR27 = NULL, *VAR28 = NULL;

(void) FUN11(VAR15, &VAR26, 0, 0);
(void) FUN11(VAR18.VAR19, &VAR27, 0, 0);
(void) FUN11(VAR18.VAR24, &VAR28, 0, 0);
FUN3("", VAR3);
FUN3("", VAR26);
FUN3("", VAR27);
FUN3("", VAR28);
free(VAR15);
FUN8(VAR18.VAR19);
FUN8(VAR18.VAR24);
return (-1);
}
} else if (VAR5 == VAR29) {
if (FUN12(VAR4, &VAR16, VAR10, sizeof (VAR10)) == NULL) {
FUN3("",
(int)VAR4);
free(VAR15);
return (-1);
}
if ((VAR13 = FUN13(VAR16.VAR30)) == NULL) {
FUN3("",
(int)VAR4);
free(VAR15);
return (-1);
}
VAR7 = FUN10(VAR15, VAR13);
free(VAR15);
FUN8(VAR13->VAR19);
FUN8(VAR13->VAR24);
free(VAR13);
if (VAR7 == 0) {
FUN3("", VAR2->VAR23);
FUN3("", (int)VAR4);
return (-1);
}
} else if (VAR5 == VAR31) {
VAR8 = FUN5(VAR2->VAR20, VAR32);
if (VAR8 == NULL) {
free(VAR15);
return (-1);
}
if (strcmp(VAR3, VAR8) != 0) {
FUN3("", VAR3);
FUN3("", VAR8);
FUN3("", VAR2->VAR23);
free(VAR15);
return (-1);
}
}
free(VAR15);

return (0);
}