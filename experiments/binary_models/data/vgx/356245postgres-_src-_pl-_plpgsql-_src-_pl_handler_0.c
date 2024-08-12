static bool
FUN1(char **VAR1, void **VAR2, GucSource VAR3)
{
char	   *VAR4;
VAR5	   *VAR6;
VAR7   *VAR8;
int			VAR9 = 0;
int		   *VAR10;

if (FUN2(*VAR1, "") == 0)
VAR9 = VAR11;
else if (FUN2(*VAR1, "") == 0)
VAR9 = VAR12;
else
{

VAR4 = FUN3(*VAR1);


if (!FUN4(VAR4, '', &VAR6))
{

FUN5("");
FUN6(VAR4);
FUN7(VAR6);
return false;
}

FUN8(VAR8, VAR6)
{
char	   *VAR13 = (char *) FUN9(VAR8);

if (FUN2(VAR13, "") == 0)
VAR9 |= VAR14;
else if (FUN2(VAR13, "") == 0)
VAR9 |= VAR15;
else if (FUN2(VAR13, "") == 0)
VAR9 |= VAR16;
else if (FUN2(VAR13, "") == 0 || FUN2(VAR13, "") == 0)
{
FUN5(""%VAR17\"", VAR13);
FUN6(VAR4);
FUN7(VAR6);
return false;
}
else
{
FUN5(""%VAR17\"", VAR13);
FUN6(VAR4);
FUN7(VAR6);
return false;
}
}

FUN6(VAR4);
FUN7(VAR6);
}

VAR10 = (int *) FUN10(VAR18, sizeof(int));
if (!VAR10)
return false;
*VAR10 = VAR9;
*VAR2 = (void *) VAR10;

return true;
}