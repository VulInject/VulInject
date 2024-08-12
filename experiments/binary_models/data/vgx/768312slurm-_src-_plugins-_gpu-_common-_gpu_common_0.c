static void FUN1(char *VAR1, unsigned int *VAR2,
unsigned int *VAR3,
unsigned int *VAR4,
unsigned int *VAR5, bool *VAR6)
{
char *VAR7, *VAR8, *VAR9, *VAR10 = NULL;

if (!VAR1 || !VAR1[0])
return;

VAR7 = xstrdup(VAR1);
VAR8 = FUN2(VAR7, "", &VAR10);

while (VAR8) {
VAR9 = strchr(VAR8, '');
if (VAR9) {
VAR9[0] = '';
VAR9++;
if (!FUN3(VAR8, "")) {
if (!(*VAR4 = FUN4(VAR9)) &&
!(*VAR5 =FUN5(VAR9))){
FUN6("",
VAR8);
}
} else {
FUN6("",
VAR11, VAR12, VAR8);
}
} else if (!FUN3(VAR8, "")) {
*VAR6 = true;
} else {
if (!(*VAR2 = FUN4(VAR8)) &&
!(*VAR3 = FUN5(VAR8))) {
FUN6("", VAR8);
}
}
VAR8 = FUN2(NULL, "", &VAR10);
}
FUN7(VAR7);
}