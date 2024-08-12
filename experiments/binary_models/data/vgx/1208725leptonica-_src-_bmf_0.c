VAR1
FUN1(VAR2    *VAR3,
char      VAR4,
VAR5  *VAR6)
{
l_int32  VAR7, VAR8;
VAR9    *VAR10;

if (!VAR6)
return FUN2("", VAR11, 1);
*VAR6 = -1;
if (!VAR3)
return FUN2("", VAR11, 1);
if ((VAR8 = (VAR5)VAR4) == 10)  
return 0;

VAR7 = VAR3->VAR12[VAR8];
if (VAR7 == VAR13) {
FUN3("", VAR11, VAR8);
return 1;
}

if ((VAR10 = VAR3->VAR10) == NULL)
return FUN2("", VAR11, 1);

return FUN4(VAR10, VAR7, VAR6, NULL, NULL);
}