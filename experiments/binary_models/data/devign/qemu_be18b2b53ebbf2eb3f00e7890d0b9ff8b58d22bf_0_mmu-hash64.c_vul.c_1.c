int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11;
    hwaddr VAR12;
    ppc_hash_pte64_t VAR13;
    int VAR14, VAR15, VAR16;
    uint64_t VAR17;
    const int VAR18[] = {VAR19, VAR20, VAR21};
    hwaddr VAR22;
    assert((VAR4 == 0) || (VAR4 == 1) || (VAR4 == 2));
    if (((VAR4 == 2) && (VAR23 == 0)) || ((VAR4 != 2) && (VAR24 == 0)))
    {
        VAR22 = VAR3 & 0x0FFFFFFFFFFFFFFFULL;
        FUN3(VAR7, VAR3 & VAR25, VAR22 & VAR25, VAR19 | VAR20 | VAR21, VAR5, VAR26);
        return 0;
    }
    VAR11 = FUN4(VAR2, VAR3);
    if (!VAR11)
    {
        if (VAR4 == 2)
        {
            VAR7->VAR27 = VAR28;
            VAR9->VAR29 = 0;
        }
        else
        {
            VAR7->VAR27 = VAR30;
            VAR9->VAR29 = 0;
            VAR9->VAR31[VAR32] = VAR3;
        }
        return 1;
    }
    if ((VAR4 == 2) && (VAR11->VAR33 & VAR34))
    {
        VAR7->VAR27 = VAR35;
        VAR9->VAR29 = 0x10000000;
        return 1;
    }
    VAR12 = FUN5(VAR2, VAR11, VAR3, &VAR13);
    if (VAR12 == -1)
    {
        if (VAR4 == 2)
        {
            VAR7->VAR27 = VAR35;
            VAR9->VAR29 = 0x40000000;
        }
        else
        {
            VAR7->VAR27 = VAR36;
            VAR9->VAR29 = 0;
            VAR9->VAR31[VAR32] = VAR3;
            if (VAR4 == 1)
            {
                VAR9->VAR31[VAR37] = 0x42000000;
            }
            else
            {
                VAR9->VAR31[VAR37] = 0x40000000;
            }
        }
        return 1;
    }
    FUN6(VAR38, "" VAR39 "", VAR12);
    VAR14 = FUN7(VAR2, VAR11, VAR13);
    VAR15 = FUN8(VAR2, VAR13);
    VAR16 = VAR14 & VAR15;
    if ((VAR18[VAR4] & ~VAR16) != 0)
    {
        FUN6(VAR38, "");
        if (VAR4 == 2)
        {
            VAR7->VAR27 = VAR35;
            VAR9->VAR29 = 0x08000000;
        }
        else
        {
            target_ulong VAR40 = 0;
            VAR7->VAR27 = VAR36;
            VAR9->VAR29 = 0;
            VAR9->VAR31[VAR32] = VAR3;
            if (VAR18[VAR4] & ~VAR14)
            {
                VAR40 |= 0x08000000;
            }
            if (VAR4 == 1)
            {
                VAR40 |= 0x02000000;
            }
            if (VAR18[VAR4] & ~VAR15)
            {
                VAR40 |= 0x00200000;
            }
            VAR9->VAR31[VAR37] = VAR40;
        }
        return 1;
    }
    FUN6(VAR38, "");
    VAR17 = VAR13.VAR41 | VAR42;
    if (VAR4 == 1)
    {
        VAR17 |= VAR43;
    }
    else
    {
        VAR16 &= ~VAR20;
    }
    if (VAR17 != VAR13.VAR41)
    {
        FUN9(VAR2, VAR12 / VAR44, VAR13.VAR45, VAR17);
    }
    VAR22 = FUN10(VAR13.VAR41 & VAR46, 0, VAR11->VAR47->VAR48, VAR3);
    FUN3(VAR7, VAR3 & VAR25, VAR22 & VAR25, VAR16, VAR5, VAR26);
    return 0;
}