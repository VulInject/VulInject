unsigned short FUN1(unsigned char* VAR1, unsigned short VAR2)
{
volatile unsigned short VAR3 = 0xFFFF;
unsigned short VAR4;
unsigned char VAR5;

for (VAR4 = 0; VAR4 < VAR2; VAR4++)
{
VAR5 = *VAR1++;
VAR3 = VAR6[(VAR5 ^ VAR3) & 15] ^ (VAR3 >> 4);
VAR3 = VAR6[((VAR5 >> 4) ^ VAR3) & 15] ^ (VAR3 >> 4);
}

return VAR3;
}