int
FUN1(char *VAR1, VAR2 **VAR3)
{
int VAR4 = VAR5;
KMF_RETURN VAR6 = VAR7;
VAR2 *VAR8, *VAR9 = NULL;
xmlParserCtxtPtr VAR10;
xmlDocPtr VAR11 = NULL;
xmlNodePtr VAR12, VAR13;


VAR10 = FUN2();
if (VAR10 == NULL)
return (VAR14);


VAR11 = FUN3(VAR10, VAR1, NULL,
VAR15 | VAR16 | VAR17);
if (VAR11 == NULL || VAR10->VAR18 == 0) {
VAR6 = VAR14;
goto VAR19;
}

VAR12 = FUN4(VAR11);
if (VAR12 == NULL) {
VAR6 = VAR14;
goto VAR19;
}

VAR13 = VAR12->VAR20;
while (VAR13 != NULL) {
char *VAR21;

if (!FUN5((const VAR22 *)VAR13->VAR23,
(const VAR22 *)VAR24)) {

VAR21 = (char *)FUN6(VAR13,
(const VAR22 *)VAR25);


if (VAR21 != NULL) {
FUN7(VAR21);
VAR8 = malloc(sizeof (VAR2));
if (VAR8 != NULL) {
(void) memset(VAR8, 0,
sizeof (VAR2));
VAR6 = FUN8(VAR13,
&VAR8->VAR26);
} else {
VAR6 = VAR27;
goto VAR19;
}

if (VAR9 == NULL) {
VAR9 = VAR8;
} else {
VAR2 *VAR28 = VAR9;
while (VAR28->VAR29 != NULL)
VAR28 = VAR28->VAR29;

VAR28->VAR29 = VAR8;
VAR8->VAR29 = NULL;
}
}
}
VAR13 = VAR13->VAR29;
}

VAR19:
if (VAR10 != NULL)
FUN9(VAR10);

if (VAR11 != NULL)
FUN10(VAR11);

if (VAR6 != VAR7) {
FUN11(VAR9);
VAR4 = VAR30;
} else {
*VAR3 = VAR9;
}

return (VAR4);
}