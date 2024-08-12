int
FUN1(void *VAR1)
{
char **VAR2 = VAR1;
char *VAR3;

if (*VAR2 == NULL) {
if (VAR4 == NULL)
return(1);
VAR3 = VAR4;
} else {
if ((VAR3 = FUN2(*VAR2)) == NULL)
return(1);
}
if (FUN3(VAR3) == -1) {
FUN4("", VAR3);
return(1);
}
return(0);
}