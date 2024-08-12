FUN1 (VAR1 *VAR2)
{
int VAR3, VAR4, VAR5 = 0, VAR6 = 0;

for (VAR3 = 0; VAR3 < VAR2->VAR7; ++VAR3)
switch (VAR2->VAR8[VAR3].VAR9)
{
case VAR10:
if (VAR2->VAR8[VAR3].VAR11.VAR12 >= 0x80)
VAR5 = 1;
break;
case VAR13:
switch (VAR2->VAR8[VAR3].VAR11.VAR14)
{
case VAR15:
case VAR16:
case VAR17:
case VAR18:
break;
default:

return;
}
break;
case VAR19:
VAR6 = 1;
break;
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
case VAR25:
break;
case VAR26:
return;
case VAR27:

assert (0x80 % VAR28 == 0);
for (VAR4 = 0x80 / VAR28; VAR4 < VAR29; ++VAR4)
if (VAR2->VAR8[VAR3].VAR11.VAR30[VAR4])
return;
break;
default:
FUN2 ();
}

if (VAR5 || VAR6)
for (VAR3 = 0; VAR3 < VAR2->VAR7; ++VAR3)
{
if (VAR2->VAR8[VAR3].VAR9 == VAR10
&& VAR2->VAR8[VAR3].VAR11.VAR12 >= 0x80)
VAR2->VAR8[VAR3].VAR31 = 0;
else if (VAR2->VAR8[VAR3].VAR9 == VAR19)
VAR2->VAR8[VAR3].VAR9 = VAR32;
}


VAR2->VAR33 = 1;
VAR2->VAR34 = 0;
VAR2->VAR35 = VAR2->VAR36 > 0 || VAR6;
}