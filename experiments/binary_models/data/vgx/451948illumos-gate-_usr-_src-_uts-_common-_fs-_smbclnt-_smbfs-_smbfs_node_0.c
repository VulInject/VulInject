static inline VAR1
FUN1(uint32_t VAR2, const char *VAR3, int VAR4)
{
uint32_t VAR5;

for (VAR5 = VAR2; VAR4; VAR3++, VAR4--) {
VAR5 *= VAR6;
VAR5 ^= (VAR1)*VAR3;
}
return (VAR5);
}