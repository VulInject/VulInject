static void FUN1(VAR1 *VAR2,
uint32_t VAR3, uint8_t VAR4, uint8_t VAR5, VAR6 *VAR7)
{
uint32_t VAR8 = VAR3 & ~*VAR7;
uint32_t VAR9 = 1;

int VAR10;
for (VAR10 = 0; VAR10 < VAR5; VAR10++) {
if ((VAR8 & VAR9) && (FUN2(VAR2, VAR4 + VAR10))) {
FUN3(VAR2->VAR11[VAR4 + VAR10], 1);
}
VAR9 <<= 1;
}

*VAR7 |= VAR3;
}