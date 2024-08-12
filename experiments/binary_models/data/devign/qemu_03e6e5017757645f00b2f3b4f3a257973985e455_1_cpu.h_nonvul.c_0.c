static inline void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 &= ~(VAR4 | VAR5 | VAR6 | VAR7 | VAR8 | VAR9 | VAR10);
    if (!(VAR2->VAR11 & (1 << VAR12)) && !(VAR2->VAR11 & (1 << VAR13)) && !(VAR2->VAR3 & VAR14))
    {
        VAR2->VAR3 |= (VAR2->VAR11 >> VAR15) & VAR9;
    }
    if (((VAR2->VAR3 & VAR9) != VAR16) || (VAR2->VAR11 & (1 << VAR17)) || (VAR2->VAR11 & (1 << VAR18)))
    {
        VAR2->VAR3 |= VAR5;
    }
    if (VAR2->VAR11 & (1 << VAR18))
    {
        VAR2->VAR3 |= VAR10;
    }
    if ((VAR2->VAR11 & (1 << VAR19)) || !(VAR2->VAR3 & VAR9))
    {
        VAR2->VAR3 |= VAR6;
    }
    if (VAR2->VAR11 & (1 << VAR20))
    {
        VAR2->VAR3 |= VAR8;
    }
    if (VAR2->VAR11 & (1 << VAR21))
    {
        VAR2->VAR3 |= VAR7;
    }
    if (VAR2->VAR22 & VAR23)
    {
        if (VAR2->VAR24.VAR25 & (1 << VAR26))
        {
            VAR2->VAR3 |= VAR4;
        }
    }
    else if (VAR2->VAR22 & VAR27)
    {
        if (VAR2->VAR3 & VAR5)
        {
            VAR2->VAR3 |= VAR4;
        }
    }
    else if (VAR2->VAR22 & VAR28)
    {
        if (VAR2->VAR11 & (1 << VAR29))
        {
            VAR2->VAR3 |= VAR4;
        }
    }
}