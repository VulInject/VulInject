static int
FUN1(VAR1 *VAR2, int VAR3)
{
VAR4	*VAR5;
int		*VAR6;
int		VAR7;
int		VAR8 = -1;
char		*VAR9;
char		*VAR10, *VAR11;
char		VAR12[VAR13];
int		VAR14;
int		VAR15;
uint32_t	VAR16, VAR17;
int		VAR18;

int		VAR19 = 0;
VAR1	*VAR20;
void		*VAR21;

VAR20 = VAR2;
while (VAR20 != NULL) {

for (VAR5 = FUN2(VAR20->VAR22,
VAR23); VAR5 != NULL;
VAR5 = FUN3(VAR5,
VAR23)) {

char	VAR24[VAR25] = "";


VAR6 = (int *)VAR26
(FUN4(VAR5, ""));
if (VAR6 != NULL) {
VAR6 ++; 
VAR18 = ((*VAR6) & 0x7f0000);
}


VAR6 = (int *)VAR26
(FUN4(VAR5, ""));
if (VAR6 == NULL)
continue;

VAR7 = *VAR6;


if ((VAR7 != VAR8) && (VAR18 == 0x700000)) {
VAR8 = VAR7;

VAR11 = (char *)VAR26
(FUN4(VAR5, ""));
VAR17 = VAR18;
continue; 
}


VAR16 = VAR18;

VAR8 = VAR7;


VAR15 =  FUN5(VAR7);


VAR9 = (char *)VAR26
(FUN4(VAR5, ""));


VAR21 = (int *)VAR26
(FUN4(VAR5, ""));

if (VAR21)
VAR6 = (int *)VAR21;
else
VAR6 = (int *)VAR26
(FUN4(VAR5, ""));
if (VAR6 != NULL)
VAR14 = *VAR6;
else
VAR14 = -1;


VAR10 = (char *)FUN6(VAR27
(VAR5, ""));



FUN7(VAR24, VAR15);
FUN8(VAR24,
FUN9(VAR7));
FUN10(VAR24, VAR7 % 2);

if (VAR3 == VAR28) {
if ((VAR10 != (char *)NULL) &&
((VAR11 != (char *)NULL))) {
if ((strcmp
(VAR10, VAR29) == 0) &&
(strcmp(VAR11,
VAR29) == 0)) {
FUN11("",
VAR9, 0);
FUN11("",
VAR24, 0);
VAR30
("",
VAR29, 0);
VAR19 = 1;
}
}
continue;
}

if ((VAR10 == (char *)NULL) &&
((VAR11 == (char *)NULL)))
sprintf(VAR12, "", VAR31);
else if ((VAR10 == (char *)NULL) &&
((strcmp(VAR11, VAR29) == 0)))
sprintf(VAR12, "", VAR32);
else if ((VAR11 == (char *)NULL) &&
((strcmp(VAR10, VAR29) == 0)))
sprintf(VAR12, "", VAR32);
else
continue;

FUN11("", VAR24, 0);



if (VAR9 != NULL)
FUN11("", VAR9, 0);
else
FUN11("", "", 0);

FUN11("", VAR7, 0);


FUN11("", VAR12, 0);


FUN11("", VAR14, 0);
FUN11("", VAR16, VAR17, 0);
FUN11("", VAR7, 0);
FUN11("", 0);
}
VAR20 = VAR20->VAR33;
}
return (VAR19);
}