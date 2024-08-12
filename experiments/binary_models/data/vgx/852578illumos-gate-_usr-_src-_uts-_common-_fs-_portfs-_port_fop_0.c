int
FUN1(void *VAR1, VAR2 **VAR3, VAR2 **VAR4, char **VAR5,
int *VAR6, int VAR7)
{
int VAR8 = 0;
struct pathname VAR9;
char *VAR10;

if (FUN2() == VAR11) {
VAR10 = ((VAR12 *)VAR1)->VAR13;
} else {
VAR10 = (VAR14)(VAR15)((VAR16 *)VAR1)->VAR13;
}


if ((VAR8 = FUN3(VAR10, VAR17, &VAR9)) != 0) {
return (VAR8);
}

VAR8 = FUN4(&VAR9, NULL, VAR7, VAR4, VAR3);
if (VAR8 == VAR18) {
FUN5(&VAR9);
if ((VAR8 = FUN3(VAR10, VAR17, &VAR9)) != 0) {
return (VAR8);
}
VAR8 = FUN4(&VAR9, NULL, VAR7, NULL, VAR3);
if (VAR4 != NULL) {
*VAR4 = NULL;
}
}

if (VAR8 == 0 && VAR5 != NULL && VAR6 != NULL) {
FUN6(&VAR9);
*VAR6 = VAR9.VAR19;
*VAR5 = FUN7(*VAR6 + 1, VAR20);
(void) strcpy(*VAR5, VAR9.VAR21);
} else {
if (VAR5 != NULL && VAR6 != NULL) {
*VAR5 = NULL;
*VAR6 = 0;
}
}

FUN5(&VAR9);
return (VAR8);
}