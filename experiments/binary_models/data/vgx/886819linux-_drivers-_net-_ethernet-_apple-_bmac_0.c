static unsigned int
FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned int VAR4 = 0;

while (--VAR3 >= 0) {
FUN2(VAR2, VAR5, 0);
VAR6;
if (FUN3(VAR2, VAR5) & 8)
VAR4 |= 1 << VAR3;
FUN2(VAR2, VAR5, 1);
VAR6;
}
FUN2(VAR2, VAR5, 0);
VAR6;
FUN2(VAR2, VAR5, 1);
VAR6;
return VAR4;
}