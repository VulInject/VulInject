static int FUN1(unsigned char *VAR1, size_t VAR2,
VAR3 *VAR4)
{
size_t VAR5;
unsigned char VAR6 = 0, VAR7, VAR8;

if (NULL == VAR1 || NULL == VAR4) {
return VAR9;
}

VAR8 = 0x80;
*VAR4 = 0;
for (VAR5 = VAR2; VAR5 > 0; VAR5--) {
VAR7 = VAR6;
VAR6 |= (VAR1[VAR5 - 1] != 0);
*VAR4 |= (VAR5 - 1) * (VAR6 != VAR7);
VAR8 ^= VAR1[VAR5 - 1] * (VAR6 != VAR7);
}

return VAR10 * (VAR8 != 0);

}