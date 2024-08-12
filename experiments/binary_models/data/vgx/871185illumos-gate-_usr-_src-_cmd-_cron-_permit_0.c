static int
FUN1(char *VAR1, char *VAR2)
{
char VAR3[VAR4];
VAR5 *VAR6;
int VAR7;

if ((VAR6 = fopen(VAR2, "")) == NULL)
return (0);
while (fgets(VAR3, VAR4, VAR6) != NULL) {
for (VAR7 = 0; VAR3[VAR7] != ''; VAR7++) {
if (FUN2(VAR3[VAR7])) {
VAR3[VAR7] = '';
break; }
}
if (strcmp(VAR3, VAR1) == 0) {
fclose(VAR6);
return (1);
}
}
fclose(VAR6);
return (0);
}