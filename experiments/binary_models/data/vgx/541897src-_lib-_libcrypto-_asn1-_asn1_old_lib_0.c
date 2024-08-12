static void
FUN1(unsigned char **VAR1, int VAR2)
{
unsigned char *VAR3 = *VAR1;

int VAR4, VAR5;
if (VAR2 <= 127)
*(VAR3++) = (unsigned char)VAR2;
else {
VAR5 = VAR2;
for (VAR4 = 0; VAR5 > 0; VAR4++)
VAR5 >>= 8;
*(VAR3++) = VAR4 | 0x80;
VAR5 = VAR4;
while (VAR4-- > 0) {
VAR3[VAR4] = VAR2 & 0xff;
VAR2 >>= 8;
}
VAR3 += VAR5;
}
*VAR1 = VAR3;
}