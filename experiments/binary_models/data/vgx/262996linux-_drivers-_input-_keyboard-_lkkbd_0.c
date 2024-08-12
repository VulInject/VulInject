static unsigned char FUN1(int VAR1)
{
unsigned char VAR2 = 0;

if (VAR1 < 0)
VAR1 = 0;
if (VAR1 > 100)
VAR1 = 100;

if (VAR1 >= 0)
VAR2 = 7;
if (VAR1 >= 13)	
VAR2 = 6;
if (VAR1 >= 25)
VAR2 = 5;
if (VAR1 >= 38)	
VAR2 = 4;
if (VAR1 >= 50)
VAR2 = 3;
if (VAR1 >= 63)	
VAR2 = 2;		
if (VAR1 >= 75)
VAR2 = 1;
if (VAR1 >= 88)	
VAR2 = 0;

VAR2 |= 0x80;

return VAR2;
}