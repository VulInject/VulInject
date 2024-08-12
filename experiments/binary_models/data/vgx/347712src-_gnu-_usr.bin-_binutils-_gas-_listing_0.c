FUN1 (VAR1 *VAR2)
{
int VAR3;
VAR1 *VAR4 = VAR2;
unsigned int VAR5 = ~(unsigned int) 0;
VAR6 *VAR7;
VAR6 *VAR8;
unsigned int VAR9;


VAR7 = VAR2->VAR7;
while (VAR7 && VAR7->VAR10 != VAR2)
VAR7 = VAR7->VAR11;

VAR8 = VAR7;

VAR3 = 0;


while (VAR8 != (VAR6 *) NULL && VAR8->VAR10 == VAR4)
{

VAR9 = 0;
while ((VAR12) VAR9 < VAR8->VAR13
&& VAR3 < VAR14 - 3)
{
if (VAR5 == ~(unsigned int) 0)
VAR5 = VAR8->VAR15 / VAR16;

sprintf (VAR17 + VAR3,
"",
(VAR8->VAR18[VAR9]) & 0xff);
VAR3 += 2;
VAR9++;
}
if (VAR8->VAR19 == VAR20)
{
unsigned int VAR21 = VAR9;
unsigned int VAR22 = VAR9;


while (((VAR12) VAR9
< (VAR8->VAR13 + VAR8->VAR23 * VAR8->VAR24))
&& VAR3 < VAR14 - 3)
{
if (VAR5 == ~(unsigned int) 0)
VAR5 = VAR8->VAR15 / VAR16;

sprintf (VAR17 + VAR3,
"",
(VAR8->VAR18[VAR22]) & 0xff);
VAR17[VAR3++] = '';
VAR17[VAR3++] = '';
VAR3 += 2;

VAR22++;
VAR9++;

if ((VAR12) VAR22 >= VAR8->VAR13 + VAR8->VAR23)
VAR22 = VAR21;
}
}

VAR8 = VAR8->VAR11;
}
VAR17[VAR3] = '';
return VAR5;
}