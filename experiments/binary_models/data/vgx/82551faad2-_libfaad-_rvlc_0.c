static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6,
VAR1 *VAR7)
{
int8_t VAR8, VAR9;
int8_t VAR10 = 0;
int8_t VAR11 = 0;
int8_t VAR12 = 1;

int16_t VAR13 = VAR3->VAR14;
int16_t VAR15 = 0;
int16_t VAR16 = VAR3->VAR14 - 90 - 256;

FUN2("", VAR3->VAR14);

for (VAR8 = 0; VAR8 < VAR3->VAR17; VAR8++)
{
for (VAR9 = 0; VAR9 < VAR3->VAR18; VAR9++)
{
if (VAR11)
{
VAR3->VAR19[VAR8][VAR9] = 0;
} else {
switch (VAR3->VAR20[VAR8][VAR9])
{
case VAR21: 
VAR3->VAR19[VAR8][VAR9] = 0;
break;
case VAR22: 
case VAR23:

*VAR7 = 1;


VAR10 = FUN3(VAR5, VAR6, +1);

VAR15 += VAR10;
VAR3->VAR19[VAR8][VAR9] = VAR15;

break;
case VAR24: 


if (VAR12)
{
int16_t VAR25 = VAR3->VAR26;
VAR12 = 0;
VAR16 += VAR25;
} else {
VAR10 = FUN3(VAR5, VAR6, +1);
VAR16 += VAR10;
}

VAR3->VAR19[VAR8][VAR9] = VAR16;

break;
default: 


VAR10 = FUN3(VAR5, VAR6, +1);

VAR13 += VAR10;
if (VAR13 < 0)
return 4;

VAR3->VAR19[VAR8][VAR9] = VAR13;

break;
}
FUN2("", VAR9, VAR3->VAR20[VAR8][VAR9],
VAR3->VAR19[VAR8][VAR9]);
if (VAR10 == 99)
{
VAR11 = 1;
}
}
}
}
FUN2("");

return 0;
}