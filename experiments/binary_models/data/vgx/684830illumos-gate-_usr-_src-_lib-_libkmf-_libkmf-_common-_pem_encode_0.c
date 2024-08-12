int
FUN1(unsigned char *VAR1, const unsigned char *VAR2, int VAR3)
{
int VAR4, VAR5 = 0, VAR6, VAR7, VAR8, VAR9;
unsigned long VAR10;


while ((FUN2(*VAR2) == VAR11) && (VAR3 > 0)) {
VAR2++;
VAR3--;
}


while ((VAR3 > 3) && (FUN3(FUN2(VAR2[VAR3-1]))))
VAR3--;

if (VAR3%4 != 0) {
return (-1);
}

for (VAR4 = 0; VAR4 < VAR3; VAR4 += 4) {
VAR6 = FUN2(*(VAR2++));
VAR7 = FUN2(*(VAR2++));
VAR8 = FUN2(*(VAR2++));
VAR9 = FUN2(*(VAR2++));
if ((VAR6 & 0x80) || (VAR7 & 0x80) ||	(VAR8 & 0x80) || (VAR9 & 0x80))
return (-1);
VAR10 = ((((unsigned long)VAR6)<<18L) | (((unsigned long)VAR7)<<12L) |
(((unsigned long)VAR8)<< 6L) | (((unsigned long)VAR9)));
*(VAR1++) = (unsigned char)(VAR10>>16L)&0xff;
*(VAR1++) = (unsigned char)(VAR10>> 8L)&0xff;
*(VAR1++) = (unsigned char)(VAR10)&0xff;
VAR5 += 3;
}
return (VAR5);
}