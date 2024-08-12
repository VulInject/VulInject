VAR1 FUN1(const VAR2 * VAR3,
lpcomp_events_handler_t   VAR4)
{
FUN2(VAR3);
ret_code_t VAR5;

if (VAR6 != VAR7)
{ 
VAR5 = VAR8;
FUN3("", (VAR9)VAR10, (VAR9)FUN4(VAR5));
return VAR5;
}

if (FUN5(VAR11, VAR12) != VAR13)
{
VAR5 = VAR14;
FUN3("", (VAR9)VAR10, (VAR9)FUN4(VAR5));
return VAR5;
}

FUN6(&(VAR3->VAR15) );

if (VAR4)
{
VAR16 = VAR4;
}
else
{
VAR5 = VAR17;
FUN3("", (VAR9)VAR10, (VAR9)FUN4(VAR5));
return VAR5;
}

FUN7(VAR3->VAR18);

switch (VAR3->VAR15.VAR19)
{
case VAR20:
FUN8(VAR21);
break;

case VAR22:
FUN8(VAR23);
break;

case VAR24:
FUN8(VAR25);
break;

default:
break;
}
FUN9(VAR26);

FUN10(VAR27, VAR3->VAR28);

VAR6 = VAR29;

VAR5 = VAR13;
FUN11("", (VAR9)VAR10, (VAR9)FUN4(VAR5));
return VAR5;
}