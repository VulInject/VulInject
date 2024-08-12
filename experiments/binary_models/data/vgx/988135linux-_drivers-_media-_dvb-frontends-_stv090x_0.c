static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6)
{
s32 VAR7, VAR8, VAR9, VAR10, VAR11;

VAR10 = VAR2->VAR10;
VAR11 = VAR2->VAR12 / 1000;
VAR11 += VAR11 / 10;
VAR11  = 65536 * (VAR11 / 2);
VAR11 /= (VAR2->VAR13->VAR14 / 1000);

if (VAR11 > 0x4000)
VAR11 = 0x4000 ; 

VAR8  = VAR10;
VAR8 /= VAR2->VAR13->VAR14 / 1000;
VAR8 *= 256;
VAR8 *= 256;
VAR8 /= 1000;

switch (VAR2->VAR15) {
case VAR16:
case VAR17:
VAR8 *= 3; 
VAR7 = 20;
break;

case VAR18:
VAR8 *= 4;
VAR7 = 25;
break;

case VAR19:
default:
VAR8 *= 3;
VAR7 = 25;
break;
}
VAR8 /= 100;
if ((VAR8 > VAR11) || (VAR8 < 0))
VAR8 = VAR11 / 2; 

VAR7 *= 27500; 
if (VAR10 > 0)
VAR7 /= (VAR10 / 1000);

if ((VAR7 > 100) || (VAR7 < 0))
VAR7 = 100;

VAR9 = (VAR11 / VAR8) + 1; 
if ((VAR9 > 100) || (VAR9 < 0)) {
VAR9 = 100; 
VAR8 = VAR11 / VAR9;
}
*VAR4 = VAR8;
*VAR5 = VAR7;
*VAR6 = VAR9;

return 0;
}