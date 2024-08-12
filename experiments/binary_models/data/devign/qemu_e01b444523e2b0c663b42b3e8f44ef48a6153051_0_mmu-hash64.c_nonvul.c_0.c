static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    VAR7 *VAR8;
    hwaddr VAR9;
    ppc_hash_pte64_t VAR10;
    int VAR11;
    const int VAR12[] = {VAR13, VAR14, VAR15};
    assert((VAR6 == 0) || (VAR6 == 1) || (VAR6 == 2));
    if (((VAR6 == 2) && (VAR16 == 0)) || ((VAR6 != 2) && (VAR17 == 0)))
    {
        VAR4->VAR18 = VAR5 & 0x0FFFFFFFFFFFFFFFULL;
        VAR4->VAR19 = VAR13 | VAR15 | VAR14;
        return 0;
    }
    VAR8 = FUN2(VAR2, VAR5);
    if (!VAR8)
    {
        return -5;
    }
    if ((VAR6 == 2) && (VAR8->VAR20 & VAR21))
    {
        return -3;
    }
    VAR9 = FUN3(VAR2, VAR8, VAR5, &VAR10);
    if (VAR9 == -1)
    {
        return -1;
    }
    FUN4("" VAR22 "", VAR9);
    VAR4->VAR19 = FUN5(VAR2, VAR8, VAR10);
    if ((VAR12[VAR6] & ~VAR4->VAR19) != 0)
    {
        FUN4("");
        return -2;
    }
    FUN4("");
    if (FUN6(VAR4, &VAR10.VAR23, 0, VAR6) == 1)
    {
        FUN7(VAR2, VAR9, VAR10.VAR23);
    }
    VAR4->VAR18 = VAR10.VAR23;
    VAR11 = (VAR8->VAR20 & VAR24) ? VAR25 : VAR26;
    if (VAR11 != VAR26)
    {
        VAR4->VAR18 |= (VAR5 & ((1 << VAR11) - 1)) & VAR27;
    }
    return 0;
}