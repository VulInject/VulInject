static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    target_phys_addr_t VAR10;
    target_ulong VAR11, VAR12;
    int VAR13, VAR14 = -1;
    int VAR15, VAR16;
    VAR15 = -1;
    VAR10 = FUN2(VAR2, VAR4->VAR17[VAR6], VAR5 ? VAR18 : VAR19);
    for (VAR13 = 0; VAR13 < 8; VAR13++)
    {
        if (VAR5)
        {
            if (VAR2->VAR20)
            {
                VAR11 = FUN3(VAR2->VAR20 + VAR10 + (VAR13 * 16));
                VAR12 = FUN3(VAR2->VAR20 + VAR10 + (VAR13 * 16) + 8);
            }
            else
            {
                VAR11 = FUN4(VAR2->VAR21 + VAR10 + (VAR13 * 16));
                VAR12 = FUN4(VAR2->VAR21 + VAR10 + (VAR13 * 16) + 8);
            }
            if (VAR9 != VAR22)
                VAR12 |= (VAR4->VAR23 & ((1 << VAR9) - 1)) & VAR24;
            VAR16 = FUN5(VAR4, VAR11, VAR12, VAR6, VAR7, VAR8);
            FUN6("" VAR25 "" VAR25 "" VAR25 "" VAR25 "", VAR26 + (VAR13 * 16), VAR11, VAR12, (int)(VAR11 & 1), VAR6, (int)((VAR11 >> 1) & 1), VAR4->VAR27);
        }
        else
        {
            if (VAR2->VAR20)
            {
                VAR11 = FUN7(VAR2->VAR20 + VAR10 + (VAR13 * 8));
                VAR12 = FUN7(VAR2->VAR20 + VAR10 + (VAR13 * 8) + 4);
            }
            else
            {
                VAR11 = FUN8(VAR2->VAR21 + VAR10 + (VAR13 * 8));
                VAR12 = FUN8(VAR2->VAR21 + VAR10 + (VAR13 * 8) + 4);
            }
            VAR16 = FUN9(VAR4, VAR11, VAR12, VAR6, VAR7, VAR8);
            FUN6("" VAR25 "" VAR25 "" VAR25 "" VAR25 "", VAR26 + (VAR13 * 8), VAR11, VAR12, (int)(VAR11 >> 31), VAR6, (int)((VAR11 >> 6) & 1), VAR4->VAR27);
        }
        switch (VAR16)
        {
        case -3:
            return -1;
        case -2:
            VAR15 = -2;
            VAR14 = VAR13;
            break;
        case -1:
        default:
            break;
        case 0:
            VAR15 = 0;
            VAR14 = VAR13;
            goto VAR28;
        }
    }
    if (VAR14 != -1)
    {
    VAR28:
        FUN6("" VAR25 "", VAR4->VAR29, VAR4->VAR30, VAR15);
        VAR12 = VAR4->VAR29;
        if (FUN10(VAR4, &VAR12, VAR15, VAR7) == 1)
        {
            if (VAR5)
            {
                if (VAR2->VAR20)
                {
                    FUN11(VAR2->VAR20 + VAR10 + (VAR14 * 16) + 8, VAR12);
                }
                else
                {
                    FUN12(VAR2->VAR21 + VAR10 + (VAR14 * 16) + 8, VAR12);
                }
            }
            else
            {
                if (VAR2->VAR20)
                {
                    FUN13(VAR2->VAR20 + VAR10 + (VAR14 * 8) + 4, VAR12);
                }
                else
                {
                    FUN14(VAR2->VAR21 + VAR10 + (VAR14 * 8) + 4, VAR12);
                }
            }
        }
    }
    return VAR15;
}