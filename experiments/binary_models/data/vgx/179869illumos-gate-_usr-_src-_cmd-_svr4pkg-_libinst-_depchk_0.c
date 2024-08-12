int
FUN1(VAR1 *VAR2)
{
char	*VAR3;
char	*VAR4;
char	VAR5[4096];
int	VAR6;
int	VAR7;
int	VAR8 = 0;



assert(VAR2 != (VAR1 *)NULL);



FUN2(VAR9);

VAR4 = (char *)NULL;



for (VAR7 = 0; VAR2[VAR7].VAR10 != (char *)NULL; VAR7++) {
int	VAR11;
VAR12	*VAR13;

if (VAR4 != (char *)NULL) {
free(VAR4);
VAR4 = (char *)NULL;
}

VAR13 = VAR2[VAR7].VAR14;
if (VAR13->VAR15 == 0) {
continue;
}

for (VAR11 = 0; VAR11 < VAR13->VAR15; VAR11++) {
int	VAR16;
VAR17 *VAR18;

if (VAR4 != (char *)NULL) {
free(VAR4);
VAR4 = (char *)NULL;
}

VAR18 = &VAR13->VAR19[VAR11];
VAR3 = VAR18->VAR20;
for (VAR16 = 0; VAR16 < VAR18->VAR21; VAR16++) {
int VAR6;

VAR6 = FUN3(&VAR8, &VAR4,
VAR3, VAR2, VAR7, VAR18, VAR16);
if (VAR6 != 0) {
if (VAR4 != (char *)NULL) {
free(VAR4);
VAR4 = (char *)NULL;
}
return (VAR6);
}
}

if (VAR2[VAR7].VAR22 == (char *)NULL) {
continue;
}

if (VAR2[VAR7].VAR23 == (char **)NULL) {
(void) snprintf(VAR5, sizeof (VAR5),
VAR24, VAR2[VAR7].VAR10,
VAR3,
VAR8 == 1 ? "" : "",
VAR4 ? VAR4 : "");
} else {

(void) snprintf(VAR5, sizeof (VAR5),
*VAR2[VAR7].VAR23, "",
VAR3,
VAR8 == 1 ? "" : "",
VAR4 ? VAR4 : "");
}

if (VAR2[VAR7].VAR25 != NULL) {

VAR6 = (VAR2[VAR7].VAR25)(VAR5,
VAR3);
FUN2(VAR26,
VAR2[VAR7].VAR22, VAR6,
VAR3, VAR5);
if (VAR6 != 0) {
if (VAR4 != (char *)NULL) {
free(VAR4);
VAR4 = (char *)NULL;
}
return (VAR6);
}
} else {

FUN2(VAR27,
VAR2[VAR7].VAR22, VAR3,
VAR5);
FUN4(VAR28, "", VAR5);
}
}
}

if (VAR4 != (char *)NULL) {
free(VAR4);
VAR4 = (char *)NULL;
}

return (0);
}