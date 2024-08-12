char *
FUN1(char **VAR1, char *VAR2)
{
char **VAR3;
char *VAR4,*VAR5;

for (VAR3 = VAR6; *VAR3; VAR3++) {
VAR4 = *VAR1;
for (VAR5 = *VAR3; *VAR5; VAR5++, VAR4++) {
if (FUN2((unsigned char)*VAR4) != *VAR5)
goto VAR7;
}
for (VAR5 = VAR4; VAR5 < VAR2; VAR5++) {
if (FUN3(*VAR5)) {
*VAR1 = VAR4;
return (*VAR3);
}
}
VAR7:		;
}
return (0);
}