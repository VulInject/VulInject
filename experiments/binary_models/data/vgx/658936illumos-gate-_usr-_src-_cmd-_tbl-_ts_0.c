int
FUN1(char *VAR1, char *VAR2)
{
int VAR3;
while ((VAR3= *VAR1++) == *VAR2++)
if (VAR3==0) return(1);
return(VAR3==0);
}