static unsigned long FUN1(unsigned int VAR1,
unsigned int VAR2,
unsigned int VAR3)
{
u64 VAR4;
u32 VAR5;

VAR5 = (2 << 16) * (VAR2 + 1);
VAR4 = VAR1;
VAR4 *= VAR3;
VAR4 += (VAR5 / 2);
FUN2(VAR4, VAR5);

return VAR4;
}