static char *FUN1(const char *VAR1,ssize_t VAR2,
char **VAR3,VAR4 *VAR5,VAR4 *VAR6,MagickBooleanType VAR7)
{
char
*VAR8;

if (VAR2 < 0)
VAR8=FUN2(VAR1,VAR7);
else
{
char
*VAR9;

VAR9=FUN3(VAR1);
VAR9[VAR2]='';
VAR8=FUN2(VAR9,VAR7);
VAR9=FUN4(VAR9);
}
if (VAR8 == (char *) NULL)
return(*VAR3);
if ((*VAR5+strlen(VAR8)+VAR10) > *VAR6)
{
*VAR6=(*VAR5)+strlen(VAR8)+VAR10;
*VAR3=(char *) FUN5(*VAR3,*VAR6,
sizeof(**VAR3));
if (*VAR3 == (char *) NULL)
return(*VAR3);
}
*VAR5+=FUN6(*VAR3+(*VAR5),*VAR6,"",
VAR8);
VAR8=FUN4(VAR8);
return(*VAR3);
}