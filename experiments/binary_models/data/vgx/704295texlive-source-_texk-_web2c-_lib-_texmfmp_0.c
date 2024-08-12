FUN1 (char *VAR1, int VAR2, int VAR3)
{
char VAR4;


switch (VAR3)
{

case 16:
while (VAR2--)
{
FUN2 (VAR1[0], VAR1[15]);
FUN2 (VAR1[1], VAR1[14]);
FUN2 (VAR1[2], VAR1[13]);
FUN2 (VAR1[3], VAR1[12]);
FUN2 (VAR1[4], VAR1[11]);
FUN2 (VAR1[5], VAR1[10]);
FUN2 (VAR1[6], VAR1[9]);
FUN2 (VAR1[7], VAR1[8]);
VAR1 += VAR3;
}
break;

case 8:
while (VAR2--)
{
FUN2 (VAR1[0], VAR1[7]);
FUN2 (VAR1[1], VAR1[6]);
FUN2 (VAR1[2], VAR1[5]);
FUN2 (VAR1[3], VAR1[4]);
VAR1 += VAR3;
}
break;

case 4:
while (VAR2--)
{
FUN2 (VAR1[0], VAR1[3]);
FUN2 (VAR1[1], VAR1[2]);
VAR1 += VAR3;
}
break;

case 2:
while (VAR2--)
{
FUN2 (VAR1[0], VAR1[1]);
VAR1 += VAR3;
}
break;

case 1:

break;

default:
FUN3 ("", VAR3);
}
}