static void FUN1(void)
{
unsigned long VAR1 = 0;

asm volatile("" : : "" (VAR1));

asm volatile("" : : "" (VAR1));

asm volatile("" : : "" (VAR1));
}