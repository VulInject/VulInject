void FUN1(VAR1 *VAR2, target_ulong VAR3, target_phys_addr_t VAR4, int VAR5, int VAR6, target_ulong VAR7)
{
    VAR8 *VAR9;
    unsigned long VAR10;
    unsigned int VAR11;
    target_ulong VAR12;
    target_ulong VAR13;
    unsigned long VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    target_phys_addr_t VAR19;
    assert(VAR7 >= VAR20);
    if (VAR7 != VAR20)
    {
        FUN2(VAR2, VAR3, VAR7);
    }
    VAR9 = FUN3(VAR4 >> VAR21);
    if (!VAR9)
    {
        VAR10 = VAR22;
    }
    else
    {
        VAR10 = VAR9->VAR23;
    }
    FUN4("" VAR24 "", VAR3, (int)VAR4, VAR5, VAR6, VAR25, VAR10);
    VAR12 = VAR3;
    if ((VAR10 & ~VAR26) > VAR27 && !(VAR10 & VAR28))
    {
        VAR12 |= VAR29;
    }
    VAR14 = (unsigned long)FUN5(VAR10 & VAR26);
    if ((VAR10 & ~VAR26) <= VAR27)
    {
        VAR19 = VAR10 & VAR26;
        if ((VAR10 & ~VAR26) == VAR30)
            VAR19 |= VAR31;
        else
            VAR19 |= VAR27;
    }
    else
    {
        VAR19 = (VAR10 & ~VAR26);
        if (VAR9)
        {
            VAR19 += VAR9->VAR32;
        }
        else
        {
            VAR19 += VAR4;
        }
    }
    VAR13 = VAR12;
    FUN6(VAR18, &VAR2->VAR33, VAR34)
    {
        if (VAR3 == (VAR18->VAR3 & VAR26))
        {
            if ((VAR5 & VAR35) || (VAR18->VAR36 & VAR37))
            {
                VAR19 = VAR38 + VAR4;
                VAR12 |= VAR29;
                break;
            }
        }
    }
    VAR11 = (VAR3 >> VAR21) & (VAR39 - 1);
    VAR2->VAR19[VAR6][VAR11] = VAR19 - VAR3;
    VAR16 = &VAR2->VAR40[VAR6][VAR11];
    VAR16->VAR14 = VAR14 - VAR3;
    if (VAR5 & VAR41)
    {
        VAR16->VAR42 = VAR12;
    }
    else
    {
        VAR16->VAR42 = -1;
    }
    if (VAR5 & VAR43)
    {
        VAR16->VAR44 = VAR13;
    }
    else
    {
        VAR16->VAR44 = -1;
    }
    if (VAR5 & VAR35)
    {
        if ((VAR10 & ~VAR26) == VAR27 || (VAR10 & VAR28))
        {
            VAR16->VAR45 = VAR12 | VAR29;
        }
        else if ((VAR10 & ~VAR26) == VAR30 && !FUN7(VAR10))
        {
            VAR16->VAR45 = VAR12 | VAR46;
        }
        else
        {
            VAR16->VAR45 = VAR12;
        }
    }
    else
    {
        VAR16->VAR45 = -1;
    }
}