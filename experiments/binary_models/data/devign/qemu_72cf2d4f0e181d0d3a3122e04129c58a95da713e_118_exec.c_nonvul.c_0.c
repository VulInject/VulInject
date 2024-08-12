int FUN1(VAR1 *VAR2, target_ulong VAR3, target_phys_addr_t VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    unsigned long VAR10;
    unsigned int VAR11;
    target_ulong VAR12;
    target_ulong VAR13;
    target_phys_addr_t VAR14;
    int VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    target_phys_addr_t VAR20;
    VAR9 = FUN2(VAR4 >> VAR21);
    if (!VAR9)
    {
        VAR10 = VAR22;
    }
    else
    {
        VAR10 = VAR9->VAR23;
    }
    FUN3("" VAR24 "", VAR3, (int)VAR4, VAR5, VAR6, VAR7, VAR10);
    VAR15 = 0;
    VAR12 = VAR3;
    if ((VAR10 & ~VAR25) > VAR26 && !(VAR10 & VAR27))
    {
        VAR12 |= VAR28;
    }
    VAR14 = (unsigned long)FUN4(VAR10 & VAR25);
    if ((VAR10 & ~VAR25) <= VAR26)
    {
        VAR20 = VAR10 & VAR25;
        if ((VAR10 & ~VAR25) == VAR29)
            VAR20 |= VAR30;
        else
            VAR20 |= VAR26;
    }
    else
    {
        VAR20 = (VAR10 & ~VAR25);
        if (VAR9)
        {
            VAR20 += VAR9->VAR31;
        }
        else
        {
            VAR20 += VAR4;
        }
    }
    VAR13 = VAR12;
    FUN5(VAR19, &VAR2->VAR32, VAR33)
    {
        if (VAR3 == (VAR19->VAR3 & VAR25))
        {
            VAR20 = VAR34 + VAR4;
            VAR12 |= VAR28;
        }
    }
    VAR11 = (VAR3 >> VAR21) & (VAR35 - 1);
    VAR2->VAR20[VAR6][VAR11] = VAR20 - VAR3;
    VAR17 = &VAR2->VAR36[VAR6][VAR11];
    VAR17->VAR14 = VAR14 - VAR3;
    if (VAR5 & VAR37)
    {
        VAR17->VAR38 = VAR12;
    }
    else
    {
        VAR17->VAR38 = -1;
    }
    if (VAR5 & VAR39)
    {
        VAR17->VAR40 = VAR13;
    }
    else
    {
        VAR17->VAR40 = -1;
    }
    if (VAR5 & VAR41)
    {
        if ((VAR10 & ~VAR25) == VAR26 || (VAR10 & VAR27))
        {
            VAR17->VAR42 = VAR12 | VAR28;
        }
        else if ((VAR10 & ~VAR25) == VAR29 && !FUN6(VAR10))
        {
            VAR17->VAR42 = VAR12 | VAR43;
        }
        else
        {
            VAR17->VAR42 = VAR12;
        }
    }
    else
    {
        VAR17->VAR42 = -1;
    }
    return VAR15;
}