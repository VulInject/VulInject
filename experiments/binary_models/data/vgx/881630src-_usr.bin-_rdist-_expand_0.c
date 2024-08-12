int
FUN1(char *VAR1, char *VAR2)				
{
int VAR3;
char *VAR4;
char VAR5 = VAR6;

if (*VAR1 == '' && *VAR2 != '')
return (0);
VAR4 = VAR7;
VAR7 = VAR1;
VAR3 = FUN2(VAR1, VAR2);
VAR7 = VAR4;
VAR6 = VAR5;
return (VAR3);
}