char *
FUN1(char *VAR1, char **VAR2)
{
char *VAR3, *VAR4;

VAR4 = VAR3 = *VAR2;
while ((*VAR3++ = *VAR1++) != '')
;
*VAR2 = VAR3;
return(VAR4);
}