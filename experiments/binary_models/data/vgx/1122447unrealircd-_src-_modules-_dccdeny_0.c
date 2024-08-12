static int FUN1(VAR1 *VAR2, const char *VAR3, VAR1 *VAR4, const char *VAR5, const char **VAR6)
{
VAR7 *VAR8;
static char VAR9[256];
int VAR10, VAR11;


if (FUN2("",VAR2,VAR4,NULL,NULL))
return 1;


if (VAR4 && FUN2("",VAR4,NULL,NULL,NULL))
return 1;


if (FUN3(VAR2))
{
*VAR6 = ""
"";
return 0;
}

if (FUN4(VAR2, VAR5, VAR12, "", VAR3, 0, NULL))
{

*VAR6 = "";
return 0;
}

if ((VAR8 = FUN5(VAR2, VAR5)))
{
const char *VAR13 = FUN6(VAR5);

FUN7(VAR14, VAR2, VAR3, VAR5, VAR13, VAR8);

FUN8(VAR9, sizeof(VAR9), "", VAR8->VAR15);
*VAR6 = VAR9;
FUN9(VAR2);
return 0;
}


if (!VAR4 && ((VAR8 = FUN10(VAR2, VAR5))))
{
FUN8(VAR9, sizeof(VAR9), "", VAR8->VAR15);
*VAR6 = VAR9;
return 0;
}


return 1;
}