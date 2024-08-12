static inline unsigned char FUN1(void)
{
unsigned char VAR1 = VAR2 < VAR3 ? VAR4[VAR2++] : FUN2();

char VAR5[3];
VAR5[0] = ((VAR1 & 0x0f) > 9) ?
((VAR1 & 0x0f) + '' - 0xa) : ((VAR1 & 0x0f) + '');
VAR5[1] = ((VAR1 >> 4) > 9) ?
((VAR1 >> 4) + '' - 0xa) : ((VAR1 >> 4) + '');
VAR5[2] = 0;
FUN3(VAR5);
return VAR1;
}