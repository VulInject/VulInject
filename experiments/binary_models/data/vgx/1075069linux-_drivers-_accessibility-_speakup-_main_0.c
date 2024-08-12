static int FUN1(int VAR1, int VAR2)
{
VAR3 = VAR4;
VAR5 = VAR1 + 1;
if (VAR2 && --VAR3 == -1)
VAR3 = 1;

if (VAR1 > VAR6[VAR3])
return 0;

FUN2(VAR7[VAR3][VAR1], VAR8[VAR3] - VAR7[VAR3][VAR1]);
return 1;
}