static unsigned long
FUN1(const wd33c93_regs VAR1)
{
unsigned long VAR2;

*VAR1.VAR3 = VAR4;
FUN2();
VAR2 = *VAR1.VAR5 << 16;
VAR2 |= *VAR1.VAR5 << 8;
VAR2 |= *VAR1.VAR5;
FUN2();
return VAR2;
}