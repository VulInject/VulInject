VAR1 FUN1(LPCSTR VAR2, VAR3 *VAR4)
{
VAR5 *VAR6;
faadAACInfo VAR7;
char *VAR8 = strrchr(VAR2, '');

if (!VAR2 || !*VAR2)
return VAR9;

if(!VAR8)
return (lstrlen(VAR2) > 2); 


if(FUN2(VAR8, "", 4) == 0)
{
VAR6 = FUN3((char *)VAR2);

if(VAR6 != NULL && VAR4)
{
if(VAR6->VAR10)
{

VAR4->VAR11 = VAR12;
VAR4->VAR13 = VAR9;
}
else
{
VAR4->VAR11 = VAR14;
FUN4((char *)VAR2, &VAR7, NULL, NULL, 1);
if(VAR7.VAR15 == 2) 
VAR4->VAR13 = VAR16;
else
VAR4->VAR13 = VAR9; 
}

FUN5(VAR6);
return VAR16;
}
else
{
FUN5(VAR6);
return VAR9;
}
}
else
return VAR9;
}