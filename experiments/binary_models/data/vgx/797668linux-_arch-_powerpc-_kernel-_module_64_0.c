static void FUN1(VAR1 *VAR2, unsigned int VAR3, char *VAR4)
{
unsigned int VAR5;

for (VAR5 = 1; VAR5 < VAR3; VAR5++) {
if (VAR2[VAR5].VAR6 == VAR7) {
char *VAR8 = VAR4 + VAR2[VAR5].VAR9;
if (VAR8[0] == '') {
if (strcmp(VAR8+1, "") == 0)
VAR2[VAR5].VAR6 = VAR10;
VAR2[VAR5].VAR9++;
}
}
}
}