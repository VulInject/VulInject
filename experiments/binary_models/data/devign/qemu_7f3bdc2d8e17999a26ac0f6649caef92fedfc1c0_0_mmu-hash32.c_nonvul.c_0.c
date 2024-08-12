static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    int VAR7;
    target_ulong VAR8;
    hwaddr VAR9;
    ppc_hash_pte32_t VAR10;
    if (((VAR6 == 2) && (VAR11 == 0)) || ((VAR6 != 2) && (VAR12 == 0)))
    {
        VAR4->VAR13 = VAR5;
        VAR4->VAR14 = VAR15 | VAR16 | VAR17;
        return 0;
    }
    if (VAR2->VAR18 != 0)
    {
        VAR7 = FUN2(VAR2, VAR4, VAR5, VAR6);
        if (VAR7 == 0)
        {
            return 0;
        }
    }
    VAR8 = VAR2->VAR8[VAR5 >> 28];
    if (VAR8 & VAR19)
    {
        return FUN3(VAR2, VAR8, VAR5, VAR6, &VAR4->VAR13, &VAR4->VAR14);
    }
    VAR4->VAR20 = !!(VAR8 & VAR21);
    if ((VAR6 == 2) && VAR4->VAR20)
    {
        return -3;
    }
    VAR9 = FUN4(VAR2, VAR8, VAR5, &VAR10);
    if (VAR9 == -1)
    {
        return -1;
    }
    FUN5("" VAR22 "", VAR9);
    VAR4->VAR23 = (((VAR8 & VAR24) && (VAR25 != 0)) || ((VAR8 & VAR26) && (VAR25 == 0))) ? 1 : 0;
    VAR7 = FUN6(VAR4, VAR10.VAR27, VAR10.VAR28, VAR6);
    if (FUN7(VAR4, &VAR10.VAR28, VAR7, VAR6) == 1)
    {
        FUN8(VAR2, VAR9, VAR10.VAR28);
    }
    return VAR7;
}