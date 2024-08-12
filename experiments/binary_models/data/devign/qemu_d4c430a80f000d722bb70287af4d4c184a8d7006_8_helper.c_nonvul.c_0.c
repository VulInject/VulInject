int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5, int VAR6)
{
    target_phys_addr_t VAR7;
    target_ulong VAR8;
    target_ulong VAR9;
    int VAR10 = 0, VAR11, VAR12;
    VAR10 = FUN2(VAR2, &VAR7, &VAR11, &VAR12, VAR3, VAR4, VAR5, &VAR9);
    if (VAR10 == 0)
    {
        VAR8 = VAR3 & VAR13;
        VAR7 &= VAR13;
        FUN3("" VAR14 "" VAR15 "" VAR14 "", VAR3, VAR7, VAR8);
        FUN4(VAR2, VAR8, VAR7, VAR11, VAR5, VAR9);
        return 0;
    }
    if (VAR2->VAR16[3])
        VAR2->VAR16[3] = 1;
    VAR2->VAR16[3] |= (VAR12 << 5) | VAR10 | 2;
    VAR2->VAR16[4] = VAR3;
    if ((VAR2->VAR16[0] & VAR17) || VAR2->VAR18 == 0)
    {
        VAR8 = VAR3 & VAR13;
        VAR11 = VAR19 | VAR20 | VAR21;
        FUN4(VAR2, VAR8, VAR7, VAR11, VAR5, VAR22);
        return 0;
    }
    else
    {
        if (VAR4 & 2)
            VAR2->VAR23 = VAR24;
        else
            VAR2->VAR23 = VAR25;
        return 1;
    }
}