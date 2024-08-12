static void FUN1(void VAR1 *VAR2, bool VAR3)
{
unsigned long VAR4;

VAR4 = FUN2(VAR2 + VAR5);
if (VAR3)
VAR4 |= VAR6 | VAR7;
else
VAR4 &= ~(VAR6 | VAR7);
FUN3(VAR4, VAR2 + VAR5);
}