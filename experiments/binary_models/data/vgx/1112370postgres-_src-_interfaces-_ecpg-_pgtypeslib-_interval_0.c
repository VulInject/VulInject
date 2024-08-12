static void
FUN1(double VAR1, struct  VAR2 *VAR2, VAR3 *VAR4, int VAR5)
{
int			VAR6;

if (VAR1 == 0)
return;
VAR1 *= VAR5;
VAR6 = (int) VAR1;
VAR2->VAR7 += VAR6;
VAR1 -= VAR6;
*VAR4 += FUN2(VAR1 * 1000000);
}