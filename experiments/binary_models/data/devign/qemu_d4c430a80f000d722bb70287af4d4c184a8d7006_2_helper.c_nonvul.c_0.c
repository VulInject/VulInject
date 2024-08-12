int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    target_phys_addr_t VAR7;
    int VAR8;
    int VAR9;
    int VAR10 = 0;
    FUN2(VAR2, 0);
    FUN3("" VAR11 "" VAR11 "", VAR12, VAR2->VAR13.VAR14, VAR3, VAR4, VAR5, VAR6);
    VAR4 &= 1;
    VAR9 = VAR15;
    VAR10 = VAR16;
    VAR10 = FUN4(VAR2, &VAR7, &VAR8, VAR3, VAR4, VAR9);
    FUN3("" VAR11 "" VAR17 "", VAR12, VAR3, VAR10, VAR7, VAR8);
    if (VAR10 == VAR18)
    {
        FUN5(VAR2, VAR3 & VAR19, VAR7 & VAR19, VAR8 | VAR20, VAR5, VAR21);
        VAR10 = 0;
    }
    else if (VAR10 < 0)
    {
        FUN6(VAR2, VAR3, VAR4, VAR10);
        VAR10 = 1;
    }
    return VAR10;
}