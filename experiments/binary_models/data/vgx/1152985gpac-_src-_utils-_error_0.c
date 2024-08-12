char *FUN1()
{
u32 VAR1, VAR2, VAR3;
char VAR4[VAR5];
char VAR6[VAR5];
strcpy(VAR6, "");

VAR2 = VAR7;
while (VAR2 <= VAR8) {
u32 VAR9 = 0;
strcpy(VAR4, "");
for (VAR1=0; VAR1<VAR10; VAR1++) {
if (VAR11[VAR1].VAR2 == VAR2) {
strcat(VAR4, VAR11[VAR1].VAR12);
strcat(VAR4, "");
VAR9++;
}
}
if (VAR9) {
char *VAR13 = "";
if (VAR2==VAR7) VAR13 = "";
else if (VAR2==VAR14) VAR13 = "";
else if (VAR2==VAR15) VAR13 = "";
else if (VAR2==VAR16) VAR13 = "";
else if (VAR2==VAR8) VAR13 = "";

if (VAR9>VAR10/2) {
strcpy(VAR4, VAR6);
strcpy(VAR6, "");
strcat(VAR6, VAR13);
if (strlen(VAR4)) {
strcat(VAR6, "");
strcat(VAR6, VAR4);
}
} else {
if (strlen(VAR6)) {
strcat(VAR6, "");
}

VAR4[ strlen(VAR4) - 1 ] = 0;
strcat(VAR6, VAR4);
strcat(VAR6, VAR13);
}
}
VAR2++;
}
VAR3 = (VAR17) strlen(VAR6);
if (VAR3) {

if (VAR6[ VAR3-1 ] == '') VAR6[ VAR3-1 ] = 0;
return FUN2(VAR6);
}
return FUN2("");
}