static void FUN1(VAR1 *VAR2, char **VAR3, char *VAR4, Bool VAR5, Bool VAR6)
{
char VAR7[2];
Bool VAR8 = VAR9;
VAR7[0] = VAR2->VAR10;
VAR7[1] = 0;
while (VAR4) {
char *VAR11 = strchr(VAR4, VAR2->VAR10);
if (VAR11) VAR11[0] = 0;

if (!FUN2(VAR4, "", 5) && (!VAR4[5] || (VAR4[5]==VAR2->VAR10))) {
if (VAR11) VAR11[0] = VAR2->VAR10;
return;
}
if (!FUN2(VAR4, "", 3) && (VAR4[3]==VAR2->VAR12)) {
}
else if (!FUN2(VAR4, "", 3) && (VAR4[3]==VAR2->VAR12)) {
}
else if (!FUN2(VAR4, "", 3) && (VAR4[3]==VAR2->VAR12)) {
}
else if (!FUN2(VAR4, "", 4) && (VAR4[4]==VAR2->VAR12)) {
}
else if (!FUN2(VAR4, "", 2) && (VAR4[2]==VAR2->VAR12)) {
}
else if (!FUN2(VAR4, "", 4) && (!VAR4[4] || (VAR4[4]==VAR2->VAR10))) {
}
else if (!FUN2(VAR4, "", 2) && (VAR4[3]==VAR2->VAR12)) {
}
else if (!FUN2(VAR4, "", 2) && (VAR4[3]==VAR2->VAR12)) {
}
else if (!VAR5 && (VAR4[0]==VAR2->VAR13)) {

} else {
if (*VAR3 && !VAR6) {
FUN3(VAR3, VAR7, NULL);
if (VAR8)
FUN3(VAR3, VAR7, NULL);
}
FUN3(VAR3, VAR4, NULL);
VAR6 = VAR9;
}
if (!VAR11) break;
VAR11[0] = VAR2->VAR10;
VAR4 = VAR11+1;
VAR8 = VAR9;
if (VAR4[0] == VAR2->VAR10) {
VAR4 ++;
VAR8 = VAR14;
}
}
}