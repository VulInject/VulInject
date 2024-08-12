static unsigned int FUN1(unsigned char VAR1, unsigned char VAR2)
{
int VAR3, VAR4;
int VAR5, VAR6;
int VAR7;
int VAR8 = VAR9 - VAR10;
int VAR11 = (VAR9 + VAR10) / 2;

VAR4 = FUN2(VAR11 - VAR1) - (VAR8 / 2 - 100) / 2;

if (VAR4 < 0)
VAR4 = 0;

if (VAR4 > 100)
VAR4 = 100;

VAR3 = 100 - VAR4;

if (VAR1 < VAR11) {

VAR6 = VAR2 - VAR10 + VAR12;
if (VAR6 >= VAR13)
VAR6 -= VAR13;
} else

VAR6 = VAR9 - VAR2 + VAR14;


if (VAR2 > VAR11)

VAR5 = VAR1 - VAR10;
else

VAR5 = VAR9 - VAR1 + VAR15;



VAR7 = VAR5 * VAR3 + VAR6 * VAR4;


VAR7 *= 10;
VAR7 /= VAR13;

if (VAR7 < 0)
VAR7 += 1000;

if (VAR7 >= 1000)
VAR7 -= 1000;

return VAR7;
}