static void FUN1(struct VAR1 *VAR2, unsigned long VAR3,
ssize_t VAR4)
{
unsigned long VAR5 = (unsigned long)VAR2->VAR6 + VAR3;
unsigned long VAR7 = VAR5 + VAR4;

VAR5 &= ~(VAR8 - 1);
while (VAR5 < VAR7) {

asm volatile ("" : : "" (VAR5));
VAR5 += VAR8;
}
}