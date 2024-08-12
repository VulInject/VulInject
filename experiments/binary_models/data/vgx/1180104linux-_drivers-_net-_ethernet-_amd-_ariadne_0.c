static void FUN1(volatile VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
while (VAR4 >= 2) {
*(VAR2++) = *(VAR3++);
VAR4 -= 2;
}
if (VAR4 == 1)
*VAR2 = (*(VAR5 *)VAR3) << 8;
}