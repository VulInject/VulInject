int FUN1(const char *VAR1, const char *VAR2)
{
char *VAR3;

if (VAR1 == NULL || VAR2 == NULL)
{
return(-1);
}


VAR3 = (char *)calloc((strlen(VAR1) + strlen(VAR2) + 2), sizeof(char));

if (VAR3 == NULL)
{

return(-2);
}


sprintf(VAR3, "", VAR1, VAR2);



if (FUN2(VAR3))
{

return(-3);
}

return(VAR4);
}