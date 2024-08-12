static inline int FUN1(int VAR1)
{
    int VAR2 = 0;
    if (VAR1 & VAR3)
        VAR2 |= 1;
    if (VAR1 & VAR4)
        VAR2 |= 2;
    if (VAR1 & VAR5)
        VAR2 |= 4;
    if (VAR1 & VAR6)
        VAR2 |= 8;
    if (VAR1 & VAR7)
        VAR2 |= 0x10;
    if (VAR1 & VAR8)
        VAR2 |= 0x80;
    return VAR2;
}