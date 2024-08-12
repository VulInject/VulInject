void FUN1(VAR1 *VAR2, target_ulong VAR3, hwaddr VAR4, int VAR5, int VAR6, target_ulong VAR7)
{
    VAR8 *VAR9;
    unsigned int VAR10;
    target_ulong VAR11;
    target_ulong VAR12;
    uintptr_t VAR13;
    VAR14 *VAR15;
    hwaddr VAR16, VAR17, VAR18;
    assert(VAR7 >= VAR19);
    if (VAR7 != VAR19)
    {
        FUN2(VAR2, VAR3, VAR7);
    }
    VAR18 = VAR7;
    VAR9 = FUN3(&VAR20, VAR4, &VAR17, &VAR18, false);
    assert(VAR18 >= VAR19);
    FUN4("" VAR21 "" VAR22 "", VAR3, VAR4, VAR5, VAR6, VAR23);
    VAR11 = VAR3;
    if (!FUN5(VAR9->VAR24) && !FUN6(VAR9->VAR24))
    {
        VAR11 |= VAR25;
        VAR13 = 0;
    }
    else
    {
        VAR13 = (VAR26)FUN7(VAR9->VAR24) + VAR17;
    }
    VAR12 = VAR11;
    VAR16 = FUN8(VAR2, VAR9, VAR3, VAR4, VAR17, VAR5, &VAR11);
    VAR10 = (VAR3 >> VAR27) & (VAR28 - 1);
    VAR2->VAR16[VAR6][VAR10] = VAR16 - VAR3;
    VAR15 = &VAR2->VAR29[VAR6][VAR10];
    VAR15->VAR13 = VAR13 - VAR3;
    if (VAR5 & VAR30)
    {
        VAR15->VAR31 = VAR11;
    }
    else
    {
        VAR15->VAR31 = -1;
    }
    if (VAR5 & VAR32)
    {
        VAR15->VAR33 = VAR12;
    }
    else
    {
        VAR15->VAR33 = -1;
    }
    if (VAR5 & VAR34)
    {
        if ((FUN5(VAR9->VAR24) && VAR9->VAR35) || FUN6(VAR9->VAR24))
        {
            VAR15->VAR36 = VAR11 | VAR25;
        }
        else if (FUN5(VAR9->VAR24) && !FUN9(VAR9->VAR24->VAR37 + VAR17))
        {
            VAR15->VAR36 = VAR11 | VAR38;
        }
        else
        {
            VAR15->VAR36 = VAR11;
        }
    }
    else
    {
        VAR15->VAR36 = -1;
    }
}