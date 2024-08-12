void FUN1(VAR1 *VAR2, target_ulong VAR3, hwaddr VAR4, int VAR5, int VAR6, target_ulong VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    unsigned int VAR13;
    target_ulong VAR14;
    target_ulong VAR15;
    uintptr_t VAR16;
    VAR17 *VAR18;
    hwaddr VAR19, VAR20, VAR21;
    unsigned VAR22 = VAR9->VAR23++ % VAR24;
    assert(VAR7 >= VAR25);
    if (VAR7 != VAR25)
    {
        FUN2(VAR9, VAR3, VAR7);
    }
    VAR21 = VAR7;
    VAR12 = FUN3(VAR2->VAR26, VAR4, &VAR20, &VAR21);
    assert(VAR21 >= VAR25);
    FUN4("" VAR27 "" VAR28 "", VAR3, VAR4, VAR5, VAR6);
    VAR14 = VAR3;
    if (!FUN5(VAR12->VAR29) && !FUN6(VAR12->VAR29))
    {
        VAR14 |= VAR30;
        VAR16 = 0;
    }
    else
    {
        VAR16 = (VAR31)FUN7(VAR12->VAR29) + VAR20;
    }
    VAR15 = VAR14;
    VAR19 = FUN8(VAR2, VAR12, VAR3, VAR4, VAR20, VAR5, &VAR14);
    VAR13 = (VAR3 >> VAR32) & (VAR33 - 1);
    VAR18 = &VAR9->VAR34[VAR6][VAR13];
    VAR9->VAR35[VAR6][VAR22] = *VAR18;
    VAR9->VAR36[VAR6][VAR22] = VAR9->VAR19[VAR6][VAR13];
    VAR9->VAR19[VAR6][VAR13] = VAR19 - VAR3;
    VAR18->VAR16 = VAR16 - VAR3;
    if (VAR5 & VAR37)
    {
        VAR18->VAR38 = VAR14;
    }
    else
    {
        VAR18->VAR38 = -1;
    }
    if (VAR5 & VAR39)
    {
        VAR18->VAR40 = VAR15;
    }
    else
    {
        VAR18->VAR40 = -1;
    }
    if (VAR5 & VAR41)
    {
        if ((FUN5(VAR12->VAR29) && VAR12->VAR42) || FUN6(VAR12->VAR29))
        {
            VAR18->VAR43 = VAR14 | VAR30;
        }
        else if (FUN5(VAR12->VAR29) && FUN9(VAR12->VAR29->VAR44 + VAR20))
        {
            VAR18->VAR43 = VAR14 | VAR45;
        }
        else
        {
            VAR18->VAR43 = VAR14;
        }
    }
    else
    {
        VAR18->VAR43 = -1;
    }
}