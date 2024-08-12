void FUN1(VAR1 *VAR2, target_ulong VAR3, hwaddr VAR4, MemTxAttrs VAR5, int VAR6, int VAR7, target_ulong VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    unsigned int VAR14;
    target_ulong VAR15;
    target_ulong VAR16;
    uintptr_t VAR17;
    VAR18 *VAR19;
    hwaddr VAR20, VAR21, VAR22;
    unsigned VAR23 = VAR10->VAR24++ % VAR25;
    int VAR26 = FUN2(VAR2, VAR5);
    FUN3(VAR2);
    assert(VAR8 >= VAR27);
    if (VAR8 != VAR27)
    {
        FUN4(VAR10, VAR3, VAR8);
    }
    VAR22 = VAR8;
    VAR13 = FUN5(VAR2, VAR26, VAR4, &VAR21, &VAR22);
    assert(VAR22 >= VAR27);
    FUN6("" VAR28 "" VAR29 "", VAR3, VAR4, VAR6, VAR7);
    VAR15 = VAR3;
    if (!FUN7(VAR13->VAR30) && !FUN8(VAR13->VAR30))
    {
        VAR15 |= VAR31;
        VAR17 = 0;
    }
    else
    {
        VAR17 = (VAR32)FUN9(VAR13->VAR30) + VAR21;
    }
    VAR16 = VAR15;
    VAR20 = FUN10(VAR2, VAR13, VAR3, VAR4, VAR21, VAR6, &VAR15);
    VAR14 = (VAR3 >> VAR33) & (VAR34 - 1);
    VAR19 = &VAR10->VAR35[VAR7][VAR14];
    VAR10->VAR36[VAR7][VAR23] = *VAR19;
    VAR10->VAR37[VAR7][VAR23] = VAR10->VAR20[VAR7][VAR14];
    VAR10->VAR20[VAR7][VAR14].VAR38 = VAR20 - VAR3;
    VAR10->VAR20[VAR7][VAR14].VAR5 = VAR5;
    VAR19->VAR17 = VAR17 - VAR3;
    if (VAR6 & VAR39)
    {
        VAR19->VAR40 = VAR15;
    }
    else
    {
        VAR19->VAR40 = -1;
    }
    if (VAR6 & VAR41)
    {
        VAR19->VAR42 = VAR16;
    }
    else
    {
        VAR19->VAR42 = -1;
    }
    if (VAR6 & VAR43)
    {
        if ((FUN7(VAR13->VAR30) && VAR13->VAR44) || FUN8(VAR13->VAR30))
        {
            VAR19->VAR45 = VAR15 | VAR31;
        }
        else if (FUN7(VAR13->VAR30) && FUN11(FUN12(VAR13->VAR30) + VAR21))
        {
            VAR19->VAR45 = VAR15 | VAR46;
        }
        else
        {
            VAR19->VAR45 = VAR15;
        }
    }
    else
    {
        VAR19->VAR45 = -1;
    }
}