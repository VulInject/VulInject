static inline void
FUN1(unsigned long VAR1, unsigned long VAR2)
{
int VAR3;

VAR2 = (VAR1 >= 64 ? VAR2 << 16 : VAR2 >> ((VAR1 - 16) & 0x30));
VAR3 = 0x510 + (((VAR1 - 16) >> 2) & 0x0c);
FUN2(VAR2 & 0xffff0000UL, VAR3);
}