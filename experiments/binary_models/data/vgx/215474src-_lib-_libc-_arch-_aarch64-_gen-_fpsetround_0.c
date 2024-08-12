VAR1
FUN1(fp_rnd VAR2)
{
uint32_t VAR3, new;

__asm volatile("" : ""(VAR3));
new = VAR3 & ~(3 << 22);
new |= VAR2 << 22;
__asm volatile("" : : ""(new));

return ((VAR3 >> 22) & 3);
}