FUN1 (const char *VAR1)
{
char *const VAR2 = FUN2 (VAR1);
char *VAR3 = VAR2;
char *VAR4;
char VAR5;



for (;;)
{
if (!FUN3 (VAR3, "", 9))
{
VAR3 += 9;
continue;
}
if (!FUN3 (VAR3, "", 6))
{
VAR3 += 6;
continue;
}
break;
}



if (VAR3 == VAR2)
return FUN4 (VAR6, "", VAR2, NULL);

VAR5 = *VAR3;
*VAR3 = '';
VAR4 = FUN4 (VAR2, VAR6, NULL);
*VAR3 = VAR5;
return FUN5 (VAR4,
VAR4, "", VAR3, NULL);
}