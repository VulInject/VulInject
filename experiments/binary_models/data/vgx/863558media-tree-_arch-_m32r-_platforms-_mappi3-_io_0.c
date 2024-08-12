void FUN1(unsigned int VAR1, const void * VAR2, unsigned long VAR3)
{
const unsigned char *VAR4 = VAR2;
unsigned char *VAR5;

if (VAR1 >= VAR6 && VAR1 < VAR7) {
VAR5 = FUN2(VAR1);
while (VAR3--)
FUN3(*VAR4++, VAR5);
} else if ( ((VAR1 >= 0x170 && VAR1 <=0x177) || VAR1 == 0x376) ||
((VAR1 >= 0x1f0 && VAR1 <=0x1f7) || VAR1 == 0x3f6) ){
VAR5 = FUN4(VAR1);
while (VAR3--)
*(volatile unsigned char *)VAR5 = *VAR4++;
} else if (VAR1 >= VAR8 && VAR1 <= VAR9) {
FUN5(0, VAR1, (void *)VAR2, sizeof(unsigned char),
VAR3, 1);
} else {
VAR5 = FUN6(VAR1);
while (VAR3--)
*(volatile unsigned char *)VAR5 = *VAR4++;
}
}