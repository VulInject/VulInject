VAR1
FUN1(const char *VAR2, VAR1 *VAR3)
{
const unsigned char	*VAR4 = (unsigned char *)VAR2;
uint32_t	VAR5 = 0;
uint32_t	VAR6;

for (; *VAR4; VAR4++) {
VAR5 = (VAR5 << 4) + *VAR4;
VAR6 = VAR5 & 0xf0000000;
if (VAR6) {
VAR5 = VAR5 ^ (VAR6 >> 24);
VAR5 = VAR5 ^ VAR6;
}
}

if (VAR3)
*VAR3 = (VAR1)(VAR4 - (unsigned char *)VAR2);
return (VAR5);
}