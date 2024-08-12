static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    if (VAR3 & VAR8)
    {
        FUN2(VAR2, 0x65);
    }
    if (VAR3 & VAR9)
    {
        FUN3((VAR3 & VAR10) == 0);
        FUN2(VAR2, 0x66);
    }
    if (VAR3 & VAR11)
    {
        FUN2(VAR2, 0x67);
    }
    VAR7 = 0;
    VAR7 |= (VAR3 & VAR10) ? 0x8 : 0x0;
    VAR7 |= (VAR4 & 8) >> 1;
    VAR7 |= (VAR6 & 8) >> 2;
    VAR7 |= (VAR5 & 8) >> 3;
    VAR7 |= VAR3 & (VAR4 >= 4 ? VAR12 : 0);
    VAR7 |= VAR3 & (VAR5 >= 4 ? VAR13 : 0);
    if (VAR7)
    {
        FUN2(VAR2, (VAR14)(VAR7 | 0x40));
    }
    if (VAR3 & (VAR15 | VAR16))
    {
        FUN2(VAR2, 0x0f);
        if (VAR3 & VAR16)
        {
            FUN2(VAR2, 0x38);
        }
    }
    FUN2(VAR2, VAR3);
}