static void
FUN1(char *VAR1, char *VAR2)
{
int VAR3, VAR4 = 0;


for (VAR3 = 0; VAR3 < strlen(VAR1); VAR3++) {
switch (VAR1[VAR3]) {
case VAR5:
case VAR6:
case VAR7:
VAR2[VAR4++] = VAR7;
VAR2[VAR4++] = VAR1[VAR3];
break;
default:
VAR2[VAR4++] = VAR1[VAR3];
break;
}
}
VAR2[VAR4] = '';
}