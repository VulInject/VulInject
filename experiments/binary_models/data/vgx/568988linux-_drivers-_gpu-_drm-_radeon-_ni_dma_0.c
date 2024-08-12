void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
uint64_t VAR5,
uint64_t VAR6, unsigned VAR7,
uint32_t VAR8, uint32_t VAR9)
{
uint64_t VAR10;
unsigned VAR11;

while (VAR7) {
VAR11 = VAR7 * 2;
if (VAR11 > 0xFFFFE)
VAR11 = 0xFFFFE;


VAR4->VAR12[VAR4->VAR13++] = FUN2(VAR14,
0, 0, VAR11);
VAR4->VAR12[VAR4->VAR13++] = VAR5;
VAR4->VAR12[VAR4->VAR13++] = FUN3(VAR5) & 0xff;
for (; VAR11 > 0; VAR11 -= 2, --VAR7, VAR5 += 8) {
if (VAR9 & VAR15) {
VAR10 = FUN4(VAR2, VAR6);
} else if (VAR9 & VAR16) {
VAR10 = VAR6;
} else {
VAR10 = 0;
}
VAR6 += VAR8;
VAR10 |= VAR9;
VAR4->VAR12[VAR4->VAR13++] = VAR10;
VAR4->VAR12[VAR4->VAR13++] = FUN3(VAR10);
}
}
}