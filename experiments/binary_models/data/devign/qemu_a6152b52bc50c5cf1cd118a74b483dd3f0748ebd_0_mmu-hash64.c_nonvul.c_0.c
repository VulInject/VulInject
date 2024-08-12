int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11;
    unsigned VAR12;
    hwaddr VAR13;
    ppc_hash_pte64_t VAR14;
    int VAR15, VAR16, VAR17;
    uint64_t VAR18, VAR19;
    const int VAR20[] = {VAR21, VAR22, VAR23};
    hwaddr VAR24;
    assert((VAR4 == 0) || (VAR4 == 1) || (VAR4 == 2));
    if (((VAR4 == 2) && (VAR25 == 0)) || ((VAR4 != 2) && (VAR26 == 0)))
    {
        VAR24 = VAR3 & 0x0FFFFFFFFFFFFFFFULL;
        if (VAR27 || !VAR9->VAR28)
        {
            if (!(VAR3 >> 63))
            {
                VAR24 |= VAR9->VAR29[VAR30];
            }
        }
        else
        {
            if (VAR9->VAR29[VAR31] & VAR32)
            {
                VAR11 = &VAR9->VAR33;
                if (VAR11->VAR34)
                {
                    goto VAR35;
                }
                VAR7->VAR36 = VAR37;
                VAR9->VAR38 = 0;
                return 1;
            }
            else if (VAR24 < VAR9->VAR39)
            {
                VAR24 |= VAR9->VAR29[VAR40];
            }
            else
            {
                if (VAR4 == 2)
                {
                    FUN3(VAR7, VAR9, 0x08000000);
                }
                else
                {
                    VAR19 = 0x08000000;
                    if (VAR4 == 1)
                    {
                        VAR19 |= 0x02000000;
                    }
                    FUN4(VAR7, VAR9, VAR3, VAR19);
                }
                return 1;
            }
        }
        FUN5(VAR7, VAR3 & VAR41, VAR24 & VAR41, VAR21 | VAR22 | VAR23, VAR5, VAR42);
        return 0;
    }
    VAR11 = FUN6(VAR2, VAR3);
    if (!VAR11)
    {
        if ((VAR9->VAR43 & VAR44) && FUN7(VAR2))
        {
            FUN8("");
            FUN9(1);
        }
        if (VAR4 == 2)
        {
            VAR7->VAR36 = VAR45;
            VAR9->VAR38 = 0;
        }
        else
        {
            VAR7->VAR36 = VAR46;
            VAR9->VAR38 = 0;
            VAR9->VAR29[VAR47] = VAR3;
        }
        return 1;
    }
VAR35:
    if ((VAR4 == 2) && (VAR11->VAR48 & VAR49))
    {
        FUN3(VAR7, VAR9, 0x10000000);
        return 1;
    }
    VAR13 = FUN10(VAR2, VAR11, VAR3, &VAR14, &VAR12);
    if (VAR13 == -1)
    {
        VAR19 = 0x40000000;
        if (VAR4 == 2)
        {
            FUN3(VAR7, VAR9, VAR19);
        }
        else
        {
            if (VAR4 == 1)
            {
                VAR19 |= 0x02000000;
            }
            FUN4(VAR7, VAR9, VAR3, VAR19);
        }
        return 1;
    }
    FUN11(VAR50, "" VAR51 "", VAR13);
    VAR15 = FUN12(VAR2, VAR11, VAR14);
    VAR16 = FUN13(VAR2, VAR14);
    VAR17 = VAR15 & VAR16;
    if ((VAR20[VAR4] & ~VAR17) != 0)
    {
        FUN11(VAR50, "");
        if (VAR4 == 2)
        {
            int VAR52 = 0;
            if (VAR23 & ~VAR15)
            {
                VAR52 |= VAR53;
            }
            if (VAR23 & ~VAR16)
            {
                VAR52 |= VAR54;
            }
            FUN3(VAR7, VAR9, VAR52);
        }
        else
        {
            VAR19 = 0;
            if (VAR20[VAR4] & ~VAR15)
            {
                VAR19 |= 0x08000000;
            }
            if (VAR4 == 1)
            {
                VAR19 |= 0x02000000;
            }
            if (VAR20[VAR4] & ~VAR16)
            {
                VAR19 |= 0x00200000;
            }
            FUN4(VAR7, VAR9, VAR3, VAR19);
        }
        return 1;
    }
    FUN11(VAR50, "");
    VAR18 = VAR14.VAR55 | VAR56;
    if (VAR4 == 1)
    {
        VAR18 |= VAR57;
    }
    else
    {
        VAR17 &= ~VAR22;
    }
    if (VAR18 != VAR14.VAR55)
    {
        FUN14(VAR2, VAR13, VAR14.VAR58, VAR18);
    }
    VAR24 = FUN15(VAR14.VAR55 & VAR59, 0, VAR12, VAR3);
    FUN5(VAR7, VAR3 & VAR41, VAR24 & VAR41, VAR17, VAR5, 1ULL << VAR12);
    return 0;
}