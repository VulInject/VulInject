int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    target_ulong VAR10, VAR11;
    uint64_t VAR12;
    int VAR13;
    FUN3("" VAR14 "", VAR15, VAR3, VAR4, VAR5);
    VAR10 = VAR3;
    if (VAR5 < VAR16)
    {
        VAR12 = FUN4(VAR5);
        if (!(VAR9->VAR17.VAR18 & VAR19))
        {
            VAR10 &= 0x7fffffff;
        }
        if (FUN5(VAR9, VAR10, VAR4, VAR12, &VAR11, &VAR13, true))
        {
            return 1;
        }
    }
    else if (VAR5 == VAR16)
    {
        if (FUN6(VAR9, VAR10, VAR4, &VAR11, &VAR13))
        {
            return 1;
        }
    }
    else
    {
        FUN7();
    }
    if (!FUN8(&VAR20, VAR11, VAR21, VAR4))
    {
        FUN3("" VAR22 "" VAR22 "", VAR15, (VAR23)VAR11, (VAR23)VAR24);
        FUN9(VAR9, VAR25, VAR26);
        return 1;
    }
    FUN10(VAR27, "" VAR22 "" VAR22 "", VAR15, (VAR23)VAR10, (VAR23)VAR11, VAR13);
    FUN11(VAR2, VAR3 & VAR28, VAR11, VAR13, VAR5, VAR21);
    return 0;
}