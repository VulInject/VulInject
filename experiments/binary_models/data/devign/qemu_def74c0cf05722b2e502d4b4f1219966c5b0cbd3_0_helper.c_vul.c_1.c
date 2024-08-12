int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    hwaddr VAR10;
    int VAR11;
    int VAR12;
    int VAR13 = 0;
    FUN3(VAR2, 0);
    FUN4(VAR14, "" VAR15 "" VAR16 "", VAR17, VAR9->VAR18.VAR19, VAR3, VAR4, VAR5);
    VAR12 = VAR20;
    VAR13 = FUN5(VAR9, &VAR10, &VAR11, VAR3, VAR4, VAR12);
    FUN4(VAR14, "" VAR16 "" VAR21 "", VAR17, VAR3, VAR13, VAR10, VAR11);
    if (VAR13 == VAR22)
    {
        FUN6(VAR2, VAR3 & VAR23, VAR10 & VAR23, VAR11 | VAR24, VAR5, VAR25);
        VAR13 = 0;
    }
    else if (VAR13 < 0)
    {
        FUN7(VAR9, VAR3, VAR4, VAR13);
        VAR13 = 1;
    }
    return VAR13;
}