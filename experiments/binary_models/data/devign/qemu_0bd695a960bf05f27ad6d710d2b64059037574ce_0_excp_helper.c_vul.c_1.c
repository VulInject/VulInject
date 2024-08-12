int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    uint64_t VAR10 = FUN3(VAR5);
    target_ulong VAR11, VAR12;
    int VAR13;
    FUN4("" VAR14 "", VAR15, VAR3, VAR4, VAR5);
    VAR3 &= VAR16;
    VAR11 = VAR3;
    if (!(VAR9->VAR17.VAR18 & VAR19))
    {
        VAR11 &= 0x7fffffff;
    }
    if (FUN5(VAR9, VAR11, VAR4, VAR10, &VAR12, &VAR13, true))
    {
        return 1;
    }
    if (VAR12 > VAR20)
    {
        FUN4("" VAR21 "" VAR21 "", VAR15, (VAR22)VAR12, (VAR22)VAR20);
        FUN6(VAR9, VAR23, VAR24);
        return 1;
    }
    FUN7(VAR25, "" VAR21 "" VAR21 "", VAR15, (VAR22)VAR11, (VAR22)VAR12, VAR13);
    FUN8(VAR2, VAR3, VAR12, VAR13, VAR5, VAR26);
    return 0;
}