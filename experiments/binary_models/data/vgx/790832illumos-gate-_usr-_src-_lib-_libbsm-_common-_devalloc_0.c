static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
int		VAR6;
char		*VAR7 = NULL, *VAR8 = NULL;
char		*VAR9;
VAR10	*VAR11 = VAR4->VAR11;

if (VAR5 & VAR12)
goto VAR13;

if (FUN2(VAR2, (VAR14)0, VAR15) == (VAR14)-1)
return (-1);

(void) fprintf(VAR2, "",
(VAR11->VAR16 ? VAR11->VAR16 : ""), VAR17);
(void) fprintf(VAR2, "",
(VAR11->VAR18 ? VAR11->VAR18 : ""), VAR17);
if (VAR11->VAR19 == NULL) {
(void) fprintf(VAR2, "", VAR20,
VAR17);
} else {
if ((VAR8 = (char *)malloc(strlen(VAR11->VAR19) + 1))
!= NULL) {
(void) strcpy(VAR8, VAR11->VAR19);
if ((VAR7 = FUN3(VAR8, VAR21, &VAR9)) !=
NULL) {
(void) fprintf(VAR2, "", VAR7);
VAR6 = 1;
}
while ((VAR7 = FUN3(NULL, VAR21,
&VAR9)) != NULL) {
if (VAR6)
(void) fprintf(VAR2, "",
VAR21 "");
(void) fprintf(VAR2, "", VAR7);
VAR6++;
}
if (VAR6)
(void) fprintf(VAR2, "",
VAR17 "");
} else {
(void) fprintf(VAR2, "", VAR11->VAR19,
VAR17 "");
}
}
(void) fprintf(VAR2, "", VAR20, VAR17);
(void) fprintf(VAR2, "",
(VAR11->VAR22 ? VAR11->VAR22 : VAR23),
VAR17);
(void) fprintf(VAR2, "",
(VAR11->VAR24 ? VAR11->VAR24 : VAR17));

VAR13:
if (VAR5 & VAR25)
return (0);

if (FUN2(VAR2, (VAR14)0, VAR15) == (VAR14)-1)
return (-1);

(void) fprintf(VAR2, "",
(VAR11->VAR16 ? VAR11->VAR16 : ""), VAR21);
(void) fprintf(VAR2, "",
(VAR11->VAR18 ? VAR11->VAR18 : ""), VAR21);
(void) fprintf(VAR2, "",
(VAR11->VAR26 ? VAR11->VAR26 : VAR21));

return (0);
}