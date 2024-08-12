static void
FUN1(char **argv, VAR1 *VAR2)
{
VAR3 *VAR4;
char *VAR5;
int VAR6 = sizeof (VAR7) / sizeof (VAR7[0]);
int VAR8;

VAR2->VAR9 = VAR10;

if ((VAR5 = argv[VAR11]) == NULL)
return;

for (VAR8 = 0; VAR8 < VAR6; VAR8++) {
VAR4 = &VAR7[VAR8];

if (strstr(VAR5, VAR4->VAR12) != NULL) {
VAR2->VAR9 = VAR4->VAR13;
break;
}
}
}