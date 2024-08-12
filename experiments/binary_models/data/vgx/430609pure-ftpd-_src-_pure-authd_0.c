static int FUN1(int argc, char *argv[])
{
int VAR1 = 0;
int VAR2;

while ((VAR2 =
getopt_long(argc, argv, VAR3, VAR4,
&VAR1)
getopt(argc, argv, VAR3)
) != -1) {
switch (VAR2) {
case '': {
VAR5 = 1;
break;
}
case '': {
const char *VAR6;
char *VAR7;

VAR6 = VAR8;
VAR7 = NULL;
VAR9 = (VAR10) FUN2(VAR6, &VAR7, 10);
if (!VAR6 || !*VAR6 || !VAR7 || *VAR7) {
FUN3("");
}
break;
}
case '': {
if ((VAR11 = strdup(VAR8)) == NULL) {
FUN3("");
}
break;
}
case '': {
FUN4();
}
case '': {
if (VAR12 == NULL && (VAR12 = strdup(VAR8)) == NULL) {
FUN3("");
}
break;
}
case '': {
if (VAR13 == NULL && (VAR13 = strdup(VAR8)) == NULL) {
FUN3("");
}
break;
}
case '': {
const char *VAR6;
char *VAR7;

VAR6 = VAR8;
VAR7 = NULL;
VAR14 = (VAR15) FUN2(VAR6, &VAR7, 10);
if (!*VAR6 || !VAR7 || *VAR7) {
FUN3("");
}
break;
}
default:
FUN4();
}
}
return 0;
}