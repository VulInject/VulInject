static inline void FUN1(VAR1 *VAR2, const unsigned char VAR3[32])
{
int VAR4, VAR5;
uint32_t VAR6[8], VAR7 = 0;

for (VAR4 = 0, VAR5 = 0; VAR4 < 8; ++VAR4, VAR5 += 4) {
VAR6[VAR4] =	((VAR8) VAR3[VAR5]) | (((VAR8) VAR3[VAR5 + 1]) << 8) |
(((VAR8) VAR3[VAR5 + 2]) << 16) | (((VAR8) VAR3[VAR5 + 3]) << 24);
VAR2->VAR9[VAR4 + 8] += VAR6[VAR4] + VAR7;
VAR7 = VAR2->VAR9[VAR4 + 8] < VAR6[VAR4] ? 1 : (VAR2->VAR9[VAR4 + 8] == VAR6[VAR4] ? VAR7 : 0);
}

FUN2(VAR2, VAR6);
}