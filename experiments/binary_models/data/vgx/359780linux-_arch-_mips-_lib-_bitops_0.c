void FUN1(unsigned long VAR1, volatile unsigned long *VAR2)
{
volatile unsigned long *VAR3 = &VAR2[FUN2(VAR1)];
unsigned int VAR4 = VAR1 % VAR5;
unsigned long VAR6;
unsigned long VAR7;

VAR6 = 1UL << VAR4;
FUN3(VAR7);
*VAR3 &= ~VAR6;
FUN4(VAR7);
}