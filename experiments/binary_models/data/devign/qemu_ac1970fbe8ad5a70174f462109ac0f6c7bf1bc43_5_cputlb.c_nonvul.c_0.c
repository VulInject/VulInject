void FUN1(VAR1 *VAR2, target_ulong VAR3, target_phys_addr_t VAR4, int VAR5, int VAR6, target_ulong VAR7)
{
    VAR8 *VAR9;
    unsigned int VAR10;
    target_ulong VAR11;
    target_ulong VAR12;
    uintptr_t VAR13;
    VAR14 *VAR15;
    target_phys_addr_t VAR16;
    assert(VAR7 >= VAR17);
    if (VAR7 != VAR17)
    {
        FUN2(VAR2, VAR3, VAR7);
    }
    VAR9 = FUN3(VAR18.VAR19, VAR4 >> VAR20);
    FUN4("" VAR21 "" VAR22 "", VAR3, VAR4, VAR5, VAR6, VAR23);
    VAR11 = VAR3;
    if (!(FUN5(VAR9->VAR24) || FUN6(VAR9->VAR24)))
    {
        VAR11 |= VAR25;
    }
    if (FUN5(VAR9->VAR24) || FUN6(VAR9->VAR24))
    {
        VAR13 = (VAR26)FUN7(VAR9->VAR24) + FUN8(VAR9, VAR4);
    }
    else
    {
        VAR13 = 0;
    }
    VAR12 = VAR11;
    VAR16 = FUN9(VAR2, VAR9, VAR3, VAR4, VAR5, &VAR11);
    VAR10 = (VAR3 >> VAR20) & (VAR27 - 1);
    VAR2->VAR16[VAR6][VAR10] = VAR16 - VAR3;
    VAR15 = &VAR2->VAR28[VAR6][VAR10];
    VAR15->VAR13 = VAR13 - VAR3;
    if (VAR5 & VAR29)
    {
        VAR15->VAR30 = VAR11;
    }
    else
    {
        VAR15->VAR30 = -1;
    }
    if (VAR5 & VAR31)
    {
        VAR15->VAR32 = VAR12;
    }
    else
    {
        VAR15->VAR32 = -1;
    }
    if (VAR5 & VAR33)
    {
        if ((FUN5(VAR9->VAR24) && VAR9->VAR34) || FUN6(VAR9->VAR24))
        {
            VAR15->VAR35 = VAR11 | VAR25;
        }
        else if (FUN5(VAR9->VAR24) && !FUN10(VAR9->VAR24->VAR36 + FUN8(VAR9, VAR4)))
        {
            VAR15->VAR35 = VAR11 | VAR37;
        }
        else
        {
            VAR15->VAR35 = VAR11;
        }
    }
    else
    {
        VAR15->VAR35 = -1;
    }
}