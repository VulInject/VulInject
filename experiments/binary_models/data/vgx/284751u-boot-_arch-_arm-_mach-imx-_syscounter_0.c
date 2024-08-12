static inline unsigned long long FUN1(unsigned long long VAR1)
{
unsigned long VAR2;

asm volatile("" : "" (VAR2));

VAR1 *= VAR3;
FUN2(VAR1, VAR2);

return VAR1;
}