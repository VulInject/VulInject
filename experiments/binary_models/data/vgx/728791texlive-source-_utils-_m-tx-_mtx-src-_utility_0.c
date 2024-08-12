VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
Char VAR5[256];
short VAR6, VAR7;

strcpy(VAR5, VAR3);
VAR6 = strlen(VAR5);
VAR7 = strlen(VAR4);
if (VAR6 < VAR7)
return false;
FUN2(VAR5, VAR6 - VAR7);
return (strcmp(VAR5, VAR4) == 0);
}