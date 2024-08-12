static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
uint32_t VAR4, VAR5, VAR6;

for (VAR5 = 0; VAR5 < 256; VAR5++) {
VAR4 = VAR5 << 24;
for (VAR6 = 0; VAR6 < 8; VAR6++)
VAR4 = (VAR4 << 1) ^ ((VAR4 & (1 << 31)) ? VAR3 : 0);

VAR2[VAR5] = VAR4;
}
}