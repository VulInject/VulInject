VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
uint8_t  VAR6 = 0;
uint16_t VAR7 = 0;
uint16_t VAR8 = 0;
uint16_t VAR9 = 256;


if (VAR5->VAR10 > 0)
{
VAR8 = (VAR5->VAR10 + VAR5->VAR11 - 1) / VAR5->VAR11;

if (VAR8 > VAR9)
{
VAR8 = VAR9;
VAR5->VAR10 = VAR8 * VAR5->VAR11;
}
}
else
{
VAR8 = 1;
}
if (VAR5->VAR12)
{
VAR5->VAR10 = VAR8 * VAR5->VAR11;
}


FUN2(VAR5->VAR13)->VAR14 = (((VAR5->VAR10) & VAR15)) |\
((VAR8 << 19) & VAR16) |\
(((VAR5->VAR17) << 29) & VAR18);

VAR6 = (VAR19->VAR20 & 0x01) ? 0 : 1;
FUN2(VAR5->VAR13)->VAR21 &= ~VAR22;
FUN2(VAR5->VAR13)->VAR21 |= (VAR6 << 29);


FUN2(VAR5->VAR13)->VAR21 &= ~VAR23;
FUN2(VAR5->VAR13)->VAR21 |= VAR24;

if((VAR5->VAR12 == 0) && (VAR5->VAR10 > 0))
{
switch(VAR5->VAR25) 
{

case VAR26:
case VAR27:
VAR7 = (VAR5->VAR10 + 3) / 4;


if(VAR7 > (VAR3->VAR28 & 0xFFFF))
{

VAR3->VAR29 |= VAR30;
}
break;


case VAR31:
case VAR32:
VAR7 = (VAR5->VAR10 + 3) / 4;

if(VAR7 > (VAR19->VAR33 & 0xFFFF)) 
{

VAR3->VAR29 |= VAR34;          
}
break;

default:
break;
}


FUN3(VAR3, VAR5->VAR35, VAR5->VAR13, VAR5->VAR10);
}

return VAR36;
}