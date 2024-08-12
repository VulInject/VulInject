void
FUN1(struct VAR1 *VAR2, paddr_t VAR3, size_t VAR4)
{
size_t VAR5 = VAR2->VAR6.VAR5;
size_t VAR7;
paddr_t VAR8;
vaddr_t VAR9, VAR10;

VAR8 = VAR3 & ~(VAR5 - 1);
VAR7 = ((VAR3 + VAR4 + VAR5 - 1) & ~(VAR5 - 1)) - VAR8;

VAR10 = FUN2(VAR8, 0ul);
VAR9 = VAR10 + VAR7;
while (VAR10 < VAR9) {
asm volatile ("" : : "" (VAR10));
VAR10 += VAR5;
}
}