static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const char *VAR5;
const char *VAR6;
char *VAR7, *VAR8;
struct VAR9 *VAR9;

VAR9 = (struct VAR9 *)VAR2->VAR10;
if (!VAR9->VAR11) {
FUN2(&VAR9->VAR12, "");
FUN2(&VAR9->VAR12, "");
VAR9->VAR11 = 1;
}


FUN3(VAR9->VAR4);
VAR9->VAR4 = FUN4(VAR4);
VAR6 = FUN5(VAR4);


switch(FUN6(VAR4)) {
case VAR13:

break;
case VAR14:
FUN7(VAR4, 0);

if (strcmp(VAR6, "") == 0  ||  strcmp(VAR6, "") == 0)
return (VAR15);
break;
case VAR16:
case VAR17:
case VAR18:

FUN7(VAR4, 0);
break;
default:
FUN7(VAR4, 0);
if (FUN8(VAR4) == NULL &&
FUN9(VAR4) == NULL) {
FUN10(
&VAR2->VAR19, VAR4, "");
return (VAR20);
}
}

FUN11(&VAR9->VAR21);
FUN12(&VAR9->VAR21, VAR6, 1);


FUN13(&VAR9->VAR12, "", VAR9->VAR21.VAR22);

if (FUN6(VAR4) != VAR14) {

VAR7 = strdup(VAR6);
VAR8 = strrchr(VAR7, '');

if (VAR8 != NULL) {
*VAR8 = '';


if (strcmp(VAR7, "") == 0) {

free(VAR7);
} else if (VAR9->VAR23 == NULL) {
FUN2(&VAR9->VAR12, "");
FUN12(&VAR9->VAR12, VAR7, 1);
FUN2(&VAR9->VAR12,
"");
VAR9->VAR23 = VAR7;
} else if (strcmp(VAR7, VAR9->VAR23) == 0) {

free(VAR7);
} else if (strlen(VAR7) < strlen(VAR9->VAR23) &&
FUN14(VAR7, VAR9->VAR23, strlen(VAR7)) == 0) {

free(VAR7);
} else {
FUN2(&VAR9->VAR12, "");
FUN12(&VAR9->VAR12, VAR7, 1);
FUN2(&VAR9->VAR12,
"");
VAR9->VAR23 = VAR7;
}
} else {
free(VAR7);
}
}


VAR9->VAR24 = 0;
if ((VAR5 = FUN8(VAR4)) != NULL) {
FUN2(&VAR9->VAR12, "");
FUN12(&VAR9->VAR12, VAR5, 1);
FUN13(&VAR9->VAR12, "",
VAR9->VAR21.VAR22);
} else if ((VAR5 = FUN9(VAR4)) != NULL) {
FUN2(&VAR9->VAR12, "");
FUN12(&VAR9->VAR12, VAR5, 1);
FUN13(&VAR9->VAR12, "",
VAR9->VAR21.VAR22);
} else {
switch(FUN6(VAR4)) {
case VAR13:
if (FUN15(VAR4) == 0) {

FUN13(&VAR9->VAR12,
""%VAR22\""%VAR22\"",
VAR9->VAR21.VAR22, VAR9->VAR21.VAR22);
} else {
if (VAR9->VAR25) {
unsigned int VAR26 = FUN16(VAR4) & 0777;
FUN13(&VAR9->VAR12,
"",
VAR9->VAR21.VAR22);
FUN13(&VAR9->VAR12,
"", VAR26);
FUN12(&VAR9->VAR12, VAR6, 0);
FUN2(&VAR9->VAR12, "");
} else {
FUN13(&VAR9->VAR12,
"VAR27 'VAR22/^VAR28
VAR9->VAR21.VAR22);
}
VAR9->VAR24 = 1;
VAR9->VAR29 = 1;
VAR9->VAR30 = 0;
}
break;
case VAR14:
FUN13(&VAR9->VAR12,
"",
VAR9->VAR21.VAR22);

free(VAR9->VAR23);

VAR9->VAR23 = strdup(VAR6);

VAR8 = strrchr(VAR9->VAR23, '');
if (VAR8 != NULL && VAR8[1] == '')
*VAR8 = '';

break;
case VAR16:
FUN13(&VAR9->VAR12,
"", VAR9->VAR21.VAR22);
break;
case VAR17:
FUN13(&VAR9->VAR12,
"", VAR9->VAR21.VAR22,
(VAR31)FUN17(VAR4),
(VAR31)FUN18(VAR4));
break;
case VAR18:
FUN13(&VAR9->VAR12,
"", VAR9->VAR21.VAR22,
(VAR31)FUN17(VAR4),
(VAR31)FUN18(VAR4));
break;
default:
return (VAR20);
}
}

return (VAR15);
}