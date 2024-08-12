void* FUN1(VAR1 * VAR2, const char * VAR3) {
VAR4 * VAR5;
VAR6 * VAR7 = NULL;
VAR8 * VAR9;
unsigned int VAR10, VAR11, VAR12;
char VAR13, VAR14;

VAR11 = strlen(VAR3);
VAR10 = 0;
VAR5 = VAR2->VAR5;
while (VAR10 != VAR11) {
VAR13 = 0;
for (VAR7 = VAR5->VAR15; VAR7 != NULL; VAR7=VAR7->VAR16) {
if (((VAR8*)VAR7->VAR17)->VAR3[0] == VAR3[VAR10]) {
VAR13 = 1;
break;
}
}
if (!VAR13) {

return NULL;
}
VAR9 = (VAR8*)VAR7->VAR17;

for (VAR12=1; ;VAR12++) {
VAR14=0;
if (VAR12 == strlen(VAR9->VAR3)) VAR14 += 1;
if (VAR12 == VAR11-VAR10) VAR14 += 2;
if (VAR14 != 0) break;
if (VAR3[VAR10+VAR12] != VAR9->VAR3[VAR12]) break;
}

if (VAR14 == 3) return VAR9->VAR17;
else if (VAR14 == 1) VAR10+=VAR12;
else return NULL;
VAR5 = ((VAR8*)VAR7->VAR17)->VAR5;
}
if (VAR7 != NULL)
return ((VAR8*)VAR7->VAR17)->VAR17;
else return NULL;
}