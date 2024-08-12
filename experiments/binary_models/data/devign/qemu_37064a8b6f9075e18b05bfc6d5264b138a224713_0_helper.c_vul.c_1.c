void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4)
{
    if (VAR4 & VAR5)
    {
        VAR2->VAR6 = (~VAR3) & VAR7;
        VAR2->VAR8 = VAR3;
        VAR2->VAR9 = (VAR3 >> 29) & 1;
        VAR2->VAR10 = (VAR3 << 3) & 0x80000000;
    }
    if (VAR4 & VAR11)
        VAR2->VAR12 = ((VAR3 & VAR11) != 0);
    if (VAR4 & VAR13)
        VAR2->VAR14 = ((VAR3 & VAR13) != 0);
    if (VAR4 & VAR15)
    {
        VAR2->VAR16 &= ~3;
        VAR2->VAR16 |= (VAR3 >> 25) & 3;
    }
    if (VAR4 & VAR17)
    {
        VAR2->VAR16 &= 3;
        VAR2->VAR16 |= (VAR3 >> 8) & 0xfc;
    }
    if (VAR4 & VAR18)
    {
        VAR2->VAR19 = (VAR3 >> 16) & 0xf;
    }
    if ((VAR2->VAR20 ^ VAR3) & VAR4 & VAR21)
    {
        FUN2(VAR2, VAR3 & VAR21);
    }
    VAR4 &= ~VAR22;
    VAR2->VAR20 = (VAR2->VAR20 & ~VAR4) | (VAR3 & VAR4);
}