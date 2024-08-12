VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
uint64_t VAR4 = 0;
uint16_t VAR5, VAR6, VAR7;
int VAR8;

for (VAR8 = 0; VAR8 < 4; ++VAR8) {
VAR5 = VAR2 >> (VAR8 * 16);
VAR6 = VAR3 >> (VAR8 * 16);
VAR7 = VAR5 < VAR6 ? VAR5 : VAR6;
VAR4 |= (VAR1)VAR7 << (VAR8 * 16);
}
return VAR4;
}