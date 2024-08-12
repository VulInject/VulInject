static VAR1 FUN1(unsigned char **VAR2, VAR1 *VAR3, VAR4 *VAR5, size_t VAR6, unsigned int *VAR7)
{
if (*VAR7 == VAR8) {
return FUN2(VAR2, VAR3, VAR5, VAR6, NULL);
} else if (*VAR7 == VAR9) {
return FUN3(VAR2, VAR3, VAR5, VAR6, NULL);
} else if (*VAR3 >= 4) {
unsigned char *VAR10 = *VAR2;
uint32_t VAR11 = *VAR10++;
uint32_t VAR12 = *VAR10++;
uint32_t VAR13 = *VAR10++;
uint32_t VAR14 = *VAR10++;
uint32_t VAR15 = (VAR11 << 24) | (VAR12 << 16) | (VAR13 << 8) | VAR14;

if (VAR15 == 0xFFFE0000) {

*VAR2 = VAR10;
*VAR3 -= 4;
*VAR7 = VAR9;
return FUN3(VAR2, VAR3, VAR5, VAR6, NULL);
} else if (VAR15 == 0xFEFF) {

*VAR2 = VAR10;
*VAR3 -= 4;
}
}

*VAR7 = VAR8;
return FUN2(VAR2, VAR3, VAR5, VAR6, NULL);
}