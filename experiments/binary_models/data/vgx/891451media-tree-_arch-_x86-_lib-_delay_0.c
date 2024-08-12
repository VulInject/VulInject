inline void FUN1(unsigned long VAR1)
{
unsigned long VAR2 = FUN2(VAR3.VAR4) ? : VAR4;
int VAR5;

VAR1 *= 4;
asm(""
:"" (VAR1), "" (VAR5)
:"" (VAR1), "" (VAR2 * (VAR6 / 4)));

FUN3(++VAR1);
}