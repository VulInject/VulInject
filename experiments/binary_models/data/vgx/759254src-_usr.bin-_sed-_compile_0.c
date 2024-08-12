static char *
FUN1(char *VAR1, VAR2 **VAR3)
{
int VAR4;
char *VAR5;

VAR5 = xmalloc(strlen(VAR1) + 1); 
VAR1 = FUN2(VAR1, VAR5);
if (VAR1 && strlen(VAR5) == 0) {
*VAR3 = NULL;
free(VAR5);
return (VAR1);
}
*VAR3 = xmalloc(sizeof(VAR2));
if (VAR1 && (VAR4 = FUN3(*VAR3, VAR5, VAR6 ? VAR7 : 0)) != 0)
FUN4(VAR8, "", FUN5(VAR4, *VAR3));
if (VAR9 < (*VAR3)->VAR10)
VAR9 = (*VAR3)->VAR10;
free(VAR5);
return (VAR1);
}