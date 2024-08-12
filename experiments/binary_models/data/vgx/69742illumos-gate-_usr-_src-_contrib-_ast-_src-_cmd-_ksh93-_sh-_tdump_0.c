static int FUN1(register const char *VAR1)
{
register size_t VAR2=strlen(VAR1);
if(FUN2(VAR3,VAR2+1)<0)
return(-1);
return(FUN3(VAR3,VAR1,VAR2));
}