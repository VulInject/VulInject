static void FUN1(VAR1 *VAR2)
{
unsigned VAR3, VAR4;
uint32_t VAR5 = 1;

VAR2[0] = 0;

for (VAR3 = 1 << (VAR6 - 1); VAR3; VAR3 >>= 1) {
VAR5 = (VAR5 >> 1) ^ ((VAR5 & 1) ? VAR7 : 0);
for (VAR4 = 0; VAR4 < 1 << VAR6; VAR4 += 2 * VAR3)
VAR2[VAR3 + VAR4] = VAR5 ^ VAR2[VAR4];
}
}