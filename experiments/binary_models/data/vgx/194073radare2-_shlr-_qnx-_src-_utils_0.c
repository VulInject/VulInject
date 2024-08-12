int FUN1 (int VAR1, int VAR2, VAR3 *VAR4) {
*VAR4 = 0;
if (VAR2 == VAR5) {
if (VAR1 == -1)
return VAR6 * 4;

*VAR4 = FUN2 (VAR1);
if (*VAR4 == -1)
return 0;
return 4;
} else if (VAR2 == VAR7) {
ut32 VAR8, VAR9, VAR10, VAR11;

int VAR12 = (VAR1 >= VAR13 && VAR1 <= VAR14);
int VAR15 = (VAR1 > VAR14 && VAR1 <= VAR16);
int VAR17 = (VAR1 >= VAR18 && VAR1 < VAR18 + 8);
int VAR19 = (VAR1 >= VAR20 && VAR1 < VAR21);
if (VAR22 && VAR23 | VAR24)
{
VAR10 = 512;

if (VAR12) {

VAR9 = 2; 
VAR8 = 0;
VAR11 = VAR13;
} else if (VAR15) {

VAR9 = 4;
VAR8 = 8;
VAR11 = VAR14 + 1;
} else if (VAR17) {

VAR9 = 16;
VAR8 = 32;
VAR11 = VAR18;
} else if (VAR19) {

VAR9 = 16;
VAR8 = 160;
VAR11 = VAR20;
} else if (VAR1 == VAR21) {
VAR9 = 4;
VAR8 = 24;
VAR11 = VAR21;
} else {

VAR8 = 0;
VAR11 = 0;
VAR9 = VAR10;
}
}
else
{
VAR10 = 108;

if (VAR12 || VAR15)
{

VAR9 = 4;
VAR8 = 0;
VAR11 = VAR13;
}
else if (VAR17)
{

VAR9 = 10;
VAR8 = 7 * 4;
VAR11 = VAR18;
}
else
{

VAR8 = 0;
VAR11 = 0;
VAR9 = VAR10;
}
}

*VAR4 = (VAR1 != -1) ? VAR8 + (VAR1 - VAR11) * VAR9 : 0;
return VAR9;
}
return -1;
}