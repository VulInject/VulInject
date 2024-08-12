VAR1
FUN1(VAR2 *VAR3)
{
VAR4		*VAR5;
VAR6	*VAR7;
char		 VAR8[VAR9];
char		*VAR10 = (char *)NULL;
int		VAR11;
int		VAR12 = 0;



assert(VAR3 != NULL);



switch (VAR3->VAR13) {
case VAR14:
case VAR15:

return (VAR16);

case VAR17:

if (FUN2())
return (VAR18);



FUN3(VAR19, VAR3->VAR20);

VAR7 = FUN4(5);		
(void) FUN5(VAR7, VAR21);
(void) FUN5(VAR7, "");
(void) FUN5(VAR7, VAR3->VAR20);
(void) FUN5(VAR7, "");

VAR11 = FUN6(&VAR12, &VAR10, (char *)NULL,
VAR21, FUN7(VAR7));



FUN8(VAR7);

if (VAR11 != 0) {
FUN9(VAR22, VAR21,
strerror(VAR23));
free(VAR10);
return (VAR18);
}
if (VAR12 != 0) {
if (VAR12 == -1) {
FUN9(VAR24,
VAR21, VAR3->VAR20);
} else {
FUN9(VAR25,
VAR21, VAR3->VAR20, VAR12,
VAR10 == NULL ? "" : "",
VAR10 == NULL ? "" : VAR10);
}
free(VAR10);
return (VAR18);
}

free(VAR10);

VAR3->VAR13 = VAR26;


case VAR26:
case VAR27:


if (VAR3->VAR28 & VAR29) {
return (VAR18);
}

FUN3(VAR30, VAR3->VAR20);



VAR7 = FUN4(10);		
(void) FUN5(VAR7, VAR21);
if (FUN2()) {
(void) FUN5(VAR7, "");
(void) FUN5(VAR7, "",
(char *)FUN10());
}

(void) FUN5(VAR7, "");
(void) FUN5(VAR7, "", VAR3->VAR20);
(void) FUN5(VAR7, "");

VAR11 = FUN6(&VAR12, &VAR10, (char *)NULL,
VAR21, FUN7(VAR7));



FUN8(VAR7);

if (VAR11 != 0) {
FUN9(VAR31, VAR21,
strerror(VAR23));
free(VAR10);
return (VAR18);
}

if (VAR12 != 0) {
if (VAR12 == -1) {
FUN9(VAR24,
VAR21, VAR3->VAR20);
} else {
FUN9(VAR25,
VAR21, VAR3->VAR20, VAR12,
VAR10 == NULL ? "" : "",
VAR10 == NULL ? "" : VAR10);
}
free(VAR10);



VAR3->VAR28 |= VAR29;

return (VAR18);
}
free(VAR10);

if (FUN2()) {
if ((VAR5 = FUN11("", VAR18)) == NULL ||
FUN12(VAR5, VAR3->VAR20,
FUN10(), VAR8,
sizeof (VAR8)) == -1) {
FUN9(VAR32,
VAR3->VAR20);
if (VAR5 != NULL)
FUN13(VAR5);
return (VAR18);
}
FUN13(VAR5);
free(VAR3->VAR33);
VAR3->VAR33 = FUN14(VAR8);
}
VAR3->VAR13 = VAR15;
return (VAR16);

case VAR34:
case VAR35:
case VAR36:
default:

return (VAR18);
}
}