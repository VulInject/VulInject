void FUN1(int VAR1, int VAR2)		
{
char VAR3[50];
int VAR4;

for (VAR4 = VAR1; VAR4 <= VAR2; VAR4++) {
VAR5[VAR4] = (VAR6 *) malloc(sizeof(**VAR5));
if (VAR5[VAR4] == NULL)
FUN2("", VAR4);
*VAR5[VAR4] = VAR7;
snprintf(VAR3, sizeof(VAR3), "", VAR4);
VAR5[VAR4]->VAR8 = FUN3(VAR3);
}
}