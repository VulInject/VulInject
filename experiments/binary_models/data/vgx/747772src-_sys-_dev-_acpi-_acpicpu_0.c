static int
FUN1(int VAR1, int VAR2)
{
int VAR3;
int VAR4;

if (VAR5 == 0)
return (0);
VAR3 = ((VAR2 >> 4) & 0xf) + 1;
if (VAR3 == 16)
VAR3 = 0;
else if (VAR3 > 7) {

return (1);
}
VAR4 = (VAR6 >> (4 * VAR3)) & 0xf;
if (VAR4 == 0) {
FUN2("", VAR1, VAR3);
return (0);
}
return (1);
}