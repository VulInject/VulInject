void FUN1(unsigned int VAR1)
{
void VAR2 *VAR3;
u32 VAR4;

VAR3 = VAR5 + VAR6 + VAR1 / 32 * 4;
VAR4 = FUN2(VAR3);
VAR4 &= ~(1 << VAR1 % 32);
FUN3(VAR4, VAR3);
}