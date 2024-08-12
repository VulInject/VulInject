static long
FUN1(VAR1 *VAR2)
{
long	   *VAR3 = VAR2->VAR4;
long		VAR5;
int			VAR6;
long		VAR7;
unsigned long VAR8;


if (VAR2->VAR9 == 0)
return VAR2->VAR10++;


if (VAR2->VAR9 == 1)
{
VAR2->VAR9--;
return VAR2->VAR4[0];
}


VAR5 = VAR3[0];


VAR7 = VAR3[--VAR2->VAR9];


VAR8 = 0;				
VAR6 = VAR2->VAR9;
while (true)
{
unsigned long VAR11 = FUN2(VAR8);
unsigned long VAR12 = FUN3(VAR8);
unsigned long VAR13;

if (VAR11 < VAR6 && VAR12 < VAR6)
VAR13 = (VAR3[VAR11] < VAR3[VAR12]) ? VAR11 : VAR12;
else if (VAR11 < VAR6)
VAR13 = VAR11;
else if (VAR12 < VAR6)
VAR13 = VAR12;
else
break;

if (VAR3[VAR13] >= VAR7)
break;

VAR3[VAR8] = VAR3[VAR13];
VAR8 = VAR13;
}
VAR3[VAR8] = VAR7;

return VAR5;
}