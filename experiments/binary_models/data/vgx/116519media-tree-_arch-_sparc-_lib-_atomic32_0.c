unsigned long FUN1(unsigned long *VAR1, unsigned long VAR2)
{
unsigned long VAR3, VAR4;

FUN2(FUN3(VAR1), VAR4);
VAR3 = *VAR1;
*VAR1 = VAR3 | VAR2;
FUN4(FUN3(VAR1), VAR4);

return VAR3 & VAR2;
}