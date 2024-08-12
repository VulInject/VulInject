static int
FUN1(const char *VAR1, char **VAR2)
{
char *VAR3;
int VAR4 = -1;

char VAR5[VAR6];
char *VAR7;

*VAR2 = NULL;

if ((VAR3 = FUN2(VAR5, VAR1, sizeof(VAR5))) == NULL) {
VAR8 = VAR8 ? VAR8 : VAR9;
return -1;
}

if ((VAR7 = strrchr(VAR3, '')) == NULL) {
VAR4 = asprintf(VAR2, "", VAR3); 
} else {
*(VAR7++) = '';
VAR4 = asprintf(VAR2, "", VAR3, VAR7);
}
*VAR2 = NULL;
if ((VAR3 = strdup(VAR1)))
VAR4 = asprintf(VAR2, "", FUN3(VAR3), FUN4(VAR3));
free(VAR3);


return  (VAR4 == -1 || *VAR2 == NULL) ? -1 : FUN5(*VAR2, VAR10);
}