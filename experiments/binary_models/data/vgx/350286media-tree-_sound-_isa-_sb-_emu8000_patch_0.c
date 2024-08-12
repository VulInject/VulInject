static unsigned short
FUN1(const void VAR1 *VAR2, int VAR3, int VAR4)
{
unsigned short VAR5;
if (VAR4 & VAR6) {
unsigned char VAR7;
FUN2(VAR7, (unsigned char VAR1 *)VAR2 + VAR3);
VAR5 = VAR7 << 8; 
} else {
FUN2(VAR5, (unsigned short VAR1 *)VAR2 + VAR3);
unsigned short VAR7;
FUN2(VAR7, (unsigned short VAR1 *)VAR2 + VAR3);
VAR5 = FUN3(VAR7);
}
if (VAR4 & VAR8)
VAR5 ^= 0x8000; 
return VAR5;
}