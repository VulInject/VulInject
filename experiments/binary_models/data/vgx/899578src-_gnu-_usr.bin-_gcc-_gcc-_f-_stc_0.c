FUN1 ()
{
bool update;

VAR1:

switch (FUN2 (FUN3 ()))
{
case VAR2:
FUN4 ();
goto VAR1;		

case VAR3:
case VAR4:
case VAR5:
case VAR6:
FUN5 (FUN3 (), VAR7);
update = VAR8;
break;

case VAR9:
case VAR10:
case VAR11:
case VAR12:
FUN5 (FUN3 (), VAR13);
update = VAR8;
break;

case VAR14:
case VAR15:
case VAR16:
case VAR17:
FUN5 (FUN3 (), VAR18);
update = VAR8;
break;

case VAR7:
case VAR13:
case VAR18:
update = VAR19;
break;

case VAR20:
case VAR21:
case VAR22:
return VAR23;

case VAR24:
VAR25 = VAR26;
return VAR23;

case VAR27:
FUN6 (VAR8);
goto VAR1;		

case VAR28:
FUN7 ();
FUN8 (VAR19);
return VAR29;

default:
FUN7 ();
return VAR29;
}

switch (FUN2 (FUN9 (FUN3 ())))
{
case VAR30:
FUN7 ();
if (update)
FUN10 (NULL);
return VAR29;

default:
if (update)
FUN10 (NULL);
return VAR23;
}
}