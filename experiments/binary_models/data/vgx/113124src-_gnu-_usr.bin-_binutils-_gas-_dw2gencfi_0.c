FUN1 (struct VAR1 *VAR2)
{
offsetT VAR3;
unsigned int VAR4;

switch (VAR2->VAR2)
{
case VAR5:
{
VAR6 *VAR7 = VAR2->VAR8.VAR9.VAR10;
VAR6 *VAR11 = VAR2->VAR8.VAR9.VAR12;

if (FUN2 (VAR11) == FUN2 (VAR7))
{
addressT VAR13 = FUN3 (VAR11) - FUN3 (VAR7);
addressT VAR14 = VAR13 / VAR15;

if (VAR14 <= 0x3F)
FUN4 (VAR5 + VAR14);
else if (VAR13 <= 0xFF)
{
FUN4 (VAR16);
FUN4 (VAR13);
}
else if (VAR13 <= 0xFFFF)
{
FUN4 (VAR17);
FUN5 (VAR13);
}
else
{
FUN4 (VAR18);
FUN6 (VAR13);
}
}
else
{
expressionS VAR19;

VAR19.VAR20 = VAR21;
VAR19.VAR22 = VAR11;
VAR19.VAR23 = VAR7;
VAR19.VAR24 = 0;


FUN7 (1);

FUN8 (VAR25, 4, 0, VAR15 << 3,
FUN9 (&VAR19), FUN10 () - 1,
(char *) VAR26);
}
}
break;

case VAR27:
VAR3 = VAR2->VAR8.VAR28.VAR3;
if (VAR3 < 0)
{
FUN4 (VAR29);
FUN11 (VAR2->VAR8.VAR28.VAR30);
FUN11 (VAR3);
}
else
{
FUN4 (VAR27);
FUN11 (VAR2->VAR8.VAR28.VAR30);
FUN11 (VAR3);
}
break;

case VAR31:
case VAR32:
case VAR33:
FUN4 (VAR2->VAR2);
FUN11 (VAR2->VAR8.VAR34);
break;

case VAR35:
VAR3 = VAR2->VAR8.VAR36;
if (VAR3 < 0)
{
FUN4 (VAR37);
FUN12 (VAR3);
}
else
{
FUN4 (VAR35);
FUN11 (VAR3);
}
break;

case VAR38:
VAR4 = VAR2->VAR8.VAR34;
if (VAR4 <= 0x3F)
{
FUN4 (VAR38 + VAR4);
}
else
{
FUN4 (VAR39);
FUN11 (VAR4);
}
break;

case VAR40:
VAR4 = VAR2->VAR8.VAR28.VAR30;
VAR3 = VAR2->VAR8.VAR28.VAR3 / VAR41;
if (VAR3 < 0)
{
FUN4 (VAR42);
FUN11 (VAR4);
FUN12 (VAR3);
}
else if (VAR4 <= 0x3F)
{
FUN4 (VAR40 + VAR4);
FUN11 (VAR3);
}
else
{
FUN4 (VAR43);
FUN11 (VAR4);
FUN11 (VAR3);
}
break;

case VAR44:
FUN4 (VAR44);
FUN11 (VAR2->VAR8.VAR45.VAR46);
FUN11 (VAR2->VAR8.VAR45.VAR47);
break;

case VAR48:
case VAR49:
FUN4 (VAR2->VAR2);
break;

case VAR50:
FUN4 (VAR50);
break;

case VAR51:
{
struct VAR52 *VAR53;
for (VAR53 = VAR2->VAR8.VAR54; VAR53 ; VAR53 = VAR53->VAR55)
FUN13 (&VAR53->VAR19, 1);
break;
}

default:
FUN14 ();
}
}