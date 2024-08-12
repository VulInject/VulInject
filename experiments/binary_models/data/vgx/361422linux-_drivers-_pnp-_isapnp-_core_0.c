static int FUN1(void)
{
int VAR1 = VAR2;
static int VAR3 = 0;

if (VAR3) {
FUN2(VAR3, 1);
VAR3 = 0;
}
while (VAR1 <= 0x3ff) {

if ((VAR1 < 0x280 || VAR1 > 0x380)
&& FUN3(VAR1, 1, "")) {
VAR2 = VAR1;
VAR3 = VAR1;
return 0;
}
VAR1 += VAR4;
}
return -1;
}