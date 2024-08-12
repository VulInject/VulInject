static void FUN1(const VAR1 *VAR2, ptrdiff_t VAR3, int VAR4)
{
register const VAR1 *VAR5 = VAR2;
do {
__asm__ volatile ("" : : "" (VAR5));
VAR5 += VAR3;
} while(--VAR4);
}