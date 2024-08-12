static void FUN1(VAR1 *VAR2,
const VAR3 *VAR4, unsigned int VAR5)
{
unsigned int VAR6, VAR7, VAR8;
const VAR3 *VAR9 = VAR4 + VAR5;
while (VAR4 < VAR9) {
VAR6 = *VAR4 ++;
VAR4 ++;
VAR8 = *VAR4 ++;
VAR7 = *VAR4 ++;
*VAR2++ = FUN2(VAR6, VAR7, VAR8);
}
}