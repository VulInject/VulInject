static void
FUN1(unsigned short VAR1, unsigned short *VAR2,
unsigned short *VAR3, unsigned short *VAR4)
{

unsigned int	VAR5, VAR6;
unsigned short	VAR7;
int		VAR8;

VAR5 = 0;
VAR7 = 0;
for (VAR8 = 0; VAR8 < (int)VAR1; VAR8++) {
VAR6 = VAR2[VAR8] * VAR3[VAR1 - 1 - VAR8] + VAR5;
if (VAR6 < VAR5)
VAR7++;
VAR5 = VAR6;
}
VAR4[0] = VAR5 & 0xffff;
VAR4[1] = VAR5 >> 16;
VAR4[2] = VAR7;
}