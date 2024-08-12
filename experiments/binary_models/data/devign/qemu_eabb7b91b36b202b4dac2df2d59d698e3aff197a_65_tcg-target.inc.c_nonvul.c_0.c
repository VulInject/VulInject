static inline VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
    FUN2((((VAR5)VAR3 ^ (VAR5)VAR4) & 0xf0000000) == 0);
    return ((VAR5)VAR4 >> 2) & 0x3ffffff;
}