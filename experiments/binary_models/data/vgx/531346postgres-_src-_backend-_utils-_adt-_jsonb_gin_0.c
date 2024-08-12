static VAR1
FUN1(const VAR2 *VAR3, bool VAR4)
{
Datum		VAR5;
char	   *VAR6;

switch (VAR3->VAR7)
{
case VAR8:
FUN2(!VAR4);
VAR5 = FUN3(VAR9, "", 0);
break;
case VAR10:
FUN2(!VAR4);
VAR5 = FUN3(VAR11,
VAR3->VAR12.VAR13 ? "" : "", 1);
break;
case VAR14:
FUN2(!VAR4);


VAR6 = FUN4(VAR3->VAR12.VAR15);
VAR5 = FUN3(VAR16, VAR6, strlen(VAR6));
FUN5(VAR6);
break;
case VAR17:
VAR5 = FUN3(VAR4 ? VAR18 : VAR19,
VAR3->VAR12.VAR20.VAR12,
VAR3->VAR12.VAR20.VAR21);
break;
default:
FUN6(VAR22, "", VAR3->VAR7);
VAR5 = 0;			
break;
}

return VAR5;
}