FUN1 (rtx VAR1, enum rtx_code VAR2, enum rtx_code VAR3,
int *VAR4)
{
enum machine_mode VAR5 = FUN2 (VAR1);

switch (VAR2)
{
case VAR6:
if (VAR3 == VAR7)
{
if (FUN3 (FUN4 (VAR1), '')
|| FUN3 (FUN4 (VAR1), ''))
*VAR4 = FUN5 (1);
else
*VAR4 = FUN5 (2);
}
else if (VAR3 == VAR8 || VAR3 == VAR9)
{
if (FUN3 (FUN4 (VAR1), ''))
*VAR4 = 0;
else if (FUN3 (FUN4 (VAR1), '')
|| FUN3 (FUN4 (VAR1), ''))
*VAR4 = 1;
else
*VAR4 = FUN5 (2);
}
else if (VAR3 == VAR10 || VAR3 == VAR11)
{
if (FUN3 (FUN4 (VAR1), ''))
*VAR4 = 0;
else if (FUN3 (FUN4 (VAR1), '')
|| FUN3 (FUN4 (VAR1), ''))
*VAR4 = 1;
else
*VAR4 = FUN5 (2);
}
else
{
*VAR4 = 0;
}
return true;

case VAR12:
case VAR13:
case VAR14:
case VAR15:
*VAR4 = FUN5 (2);
return true;

case VAR16:
{

int VAR17 = FUN6 (FUN7 (VAR1, 0), FUN2 (VAR1));
if (VAR17 > 0)
{
*VAR4 = FUN5 (VAR17 + 1);
return true;
}
return false;
}

case VAR18:
*VAR4 = FUN5 (6);
return true;

case VAR19:
*VAR4 = FUN5 (1);
return true;

case VAR10:
case VAR11:
case VAR20:
if (VAR5 == VAR21)
{
*VAR4 = FUN5 (2);
return true;
}
return false;

case VAR22:
case VAR23:
case VAR24:
if (VAR5 == VAR21)
{
*VAR4 = FUN5 ((FUN8 (FUN7 (VAR1, 1)) == VAR6)
? 4 : 12);
return true;
}
return false;

case VAR25:
*VAR4 = FUN5 (4);
return true;

case VAR8:
case VAR9:
if (VAR5 == VAR21)
{
*VAR4 = FUN5 (4);
return true;
}
*VAR4 = FUN5 (1);
return true;

case VAR26:
if (VAR5 == VAR21)
{
*VAR4 = FUN5 (4);
return true;
}
return false;

case VAR27:
*VAR4 = VAR28 ? FUN5 (2) : FUN5 (12);
return true;

case VAR29:
case VAR30:
case VAR31:
case VAR32:
*VAR4 = VAR28 ? FUN5 (2) : FUN5 (33);
return true;

case VAR33:
case VAR34:
switch (FUN2 (FUN7 (VAR1, 0)))
{
case VAR35:
case VAR36:
if (FUN8 (FUN7 (VAR1, 0)) == VAR16)
{
*VAR4 = FUN5 (2);

if (!VAR37 &&
FUN9 (FUN7 (FUN7 (VAR1, 0), 0)))
*VAR4 = 100;
}
else
*VAR4 = FUN5 (1);
break;

default:
*VAR4 = FUN5 (1);
break;
}
return true;

default:
return false;
}
}