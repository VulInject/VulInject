static void FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned long VAR4, VAR5;
unsigned long VAR6 = VAR2->VAR7;
int VAR8 = 1023 - 126;

if (VAR6 != 0 && (VAR6 & 0x7f800000) == 0) {
VAR4 = (VAR6 & 0x80000000);
while ((VAR6 & 0x00800000) == 0) {
VAR6 <<= 1;
VAR8--;
}
VAR6 &= 0x007fffff;
VAR4 |= (VAR8 << 20) | (VAR6 >> 3);
VAR5 = VAR6 << 29;

VAR2->VAR9[VAR3] = VAR4;
VAR2->VAR9[VAR3 + 1] = VAR5;
}
}