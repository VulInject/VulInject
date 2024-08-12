void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    FUN2("", (VAR4)VAR2->VAR5[4]);
    if ((VAR3 ^ VAR2->VAR5[4]) & (VAR6 | VAR7 | VAR8 | VAR9 | VAR10))
    {
        FUN3(VAR2, 1);
    }
    if (!(VAR2->VAR11 & VAR12))
    {
        VAR3 &= ~VAR13;
    }
    VAR2->VAR14 &= ~VAR15;
    if (VAR3 & VAR13)
    {
        VAR2->VAR14 |= VAR15;
    }
    if (!(VAR2->VAR16 & VAR17))
    {
        VAR3 &= ~VAR10;
    }
    VAR2->VAR14 &= ~VAR18;
    if (VAR3 & VAR10)
    {
        VAR2->VAR14 |= VAR18;
    }
    VAR2->VAR5[4] = VAR3;
}