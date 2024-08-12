static int FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4 ? (VAR5 | VAR6) : 0x7F;
    const int VAR7 = 16;
    int VAR8;
    VAR2->VAR9 = VAR2->VAR10;
    VAR2->VAR11 = 1;
    VAR2->VAR12 = VAR2->VAR13;
    VAR2->VAR14 = VAR2->VAR15;
    FUN2(VAR2, VAR2->VAR16);
    if (VAR2->VAR17->VAR18)
    {
        const VAR19 *VAR20 = VAR2->VAR10.VAR21 + FUN3(&VAR2->VAR10) / 8;
        const VAR19 *VAR22 = FUN4(VAR20 + 1, VAR2->VAR10.VAR23);
        FUN5(&VAR2->VAR10, 8 * (VAR22 - VAR20));
        return VAR2->VAR17->VAR18->FUN1(VAR2->VAR17, VAR20, VAR22 - VAR20);
    }
    if (VAR2->VAR4)
    {
        const int VAR16 = VAR2->VAR16;
        if (VAR24 && VAR2->VAR25 == VAR26)
            if ((VAR8 = FUN6(VAR2->VAR17->VAR27)) < 0)
                return VAR8;
        VAR2->VAR11 = 1;
        VAR2->VAR13 = VAR2->VAR12;
        VAR2->VAR15 = VAR2->VAR14;
        FUN2(VAR2, VAR16);
    }
    for (; VAR2->VAR15 < VAR2->VAR28; VAR2->VAR15++)
    {
        if (VAR2->VAR29)
        {
            if (VAR2->VAR14 + VAR2->VAR30 == VAR2->VAR15)
            {
                FUN7(&VAR2->VAR31, VAR2->VAR12, VAR2->VAR14, VAR2->VAR13 - 1, VAR2->VAR15, VAR32);
                return 0;
            }
        }
        if (VAR2->VAR29 == 1)
        {
            VAR2->VAR33[0] = VAR2->VAR33[1] = VAR2->VAR33[2] = 128;
        }
        FUN8(VAR2);
        for (; VAR2->VAR13 < VAR2->VAR34; VAR2->VAR13++)
        {
            int VAR8;
            FUN9(VAR2);
            if (VAR2->VAR12 == VAR2->VAR13 && VAR2->VAR14 + 1 == VAR2->VAR15)
                VAR2->VAR11 = 0;
            VAR2->VAR35 = VAR36;
            VAR2->VAR37 = VAR38;
            FUN10(VAR2, "", VAR8, FUN3(&VAR2->VAR10), FUN11(&VAR2->VAR10, 24));
            VAR8 = VAR2->FUN12(VAR2, VAR2->VAR39);
            if (VAR2->VAR40 != VAR41)
                FUN13(VAR2);
            if (VAR8 < 0)
            {
                const int VAR42 = VAR2->VAR13 + VAR2->VAR15 * VAR2->VAR43;
                if (VAR8 == VAR44)
                {
                    FUN14(VAR2, VAR2->VAR39);
                    if (VAR2->VAR45)
                        FUN15(VAR2);
                    FUN7(&VAR2->VAR31, VAR2->VAR12, VAR2->VAR14, VAR2->VAR13, VAR2->VAR15, VAR32 & VAR3);
                    VAR2->VAR46--;
                    if (++VAR2->VAR13 >= VAR2->VAR34)
                    {
                        VAR2->VAR13 = 0;
                        FUN16(VAR2, VAR2->VAR15 * VAR7, VAR7);
                        FUN17(VAR2);
                        VAR2->VAR15++;
                    }
                    return 0;
                }
                else if (VAR8 == VAR47)
                {
                    FUN18(VAR2->VAR17, VAR48, "", VAR42);
                    FUN7(&VAR2->VAR31, VAR2->VAR12, VAR2->VAR14, VAR2->VAR13 + 1, VAR2->VAR15, VAR32 & VAR3);
                    return VAR49;
                }
                FUN18(VAR2->VAR17, VAR48, "", VAR42);
                FUN7(&VAR2->VAR31, VAR2->VAR12, VAR2->VAR14, VAR2->VAR13, VAR2->VAR15, VAR50 & VAR3);
                return VAR49;
            }
            FUN14(VAR2, VAR2->VAR39);
            if (VAR2->VAR45)
                FUN15(VAR2);
        }
        FUN16(VAR2, VAR2->VAR15 * VAR7, VAR7);
        FUN17(VAR2);
        VAR2->VAR13 = 0;
    }
    assert(VAR2->VAR13 == 0 && VAR2->VAR15 == VAR2->VAR28);
    if (VAR2->VAR25 == VAR26 && (VAR2->VAR51 & VAR52) && FUN19(&VAR2->VAR10) >= 48 && FUN11(&VAR2->VAR10, 24) == 0x4010 && !VAR2->VAR53)
        VAR2->VAR46 += 32;
    if (VAR2->VAR25 == VAR26 && (VAR2->VAR51 & VAR52) && FUN19(&VAR2->VAR10) >= 0 && FUN19(&VAR2->VAR10) < 48 && !VAR2->VAR53)
    {
        const int VAR54 = FUN3(&VAR2->VAR10);
        const int VAR55 = VAR2->VAR10.VAR56 - VAR54;
        if (VAR55 == 0)
        {
            VAR2->VAR46 += 16;
        }
        else if (VAR55 != 1)
        {
            int VAR57 = FUN11(&VAR2->VAR10, 8);
            VAR57 |= 0x7F >> (7 - (VAR54 & 7));
            if (VAR57 == 0x7F && VAR55 <= 8)
                VAR2->VAR46--;
            else if (VAR57 == 0x7F && ((FUN3(&VAR2->VAR10) + 8) & 8) && VAR55 <= 16)
                VAR2->VAR46 += 4;
            else
                VAR2->VAR46++;
        }
    }
    if (VAR2->VAR51 & VAR52)
    {
        if (VAR2->VAR25 == VAR58 || (VAR2->VAR46 > -2 && !VAR2->VAR53))
            VAR2->VAR51 |= VAR59;
        else
            VAR2->VAR51 &= ~VAR59;
    }
    if (VAR2->VAR29 || (VAR2->VAR51 & VAR59))
    {
        int VAR60 = FUN19(&VAR2->VAR10);
        int VAR61 = 7;
        if (VAR2->VAR29 && VAR2->VAR40 == VAR62)
            VAR61 += 17;
        if ((VAR2->VAR51 & VAR59) && (VAR2->VAR17->VAR63 & VAR64))
            VAR61 += 48;
        else if ((VAR2->VAR51 & VAR59))
            VAR61 += 256 * 256 * 256 * 64;
        if (VAR60 > VAR61)
            FUN18(VAR2->VAR17, VAR48, "", VAR60, FUN11(&VAR2->VAR10, 24));
        else if (VAR60 < 0)
            FUN18(VAR2->VAR17, VAR48, "", -VAR60);
        else
            FUN7(&VAR2->VAR31, VAR2->VAR12, VAR2->VAR14, VAR2->VAR13 - 1, VAR2->VAR15, VAR32);
        return 0;
    }
    FUN18(VAR2->VAR17, VAR48, "", FUN19(&VAR2->VAR10), FUN11(&VAR2->VAR10, 24), VAR2->VAR46);
    FUN7(&VAR2->VAR31, VAR2->VAR12, VAR2->VAR14, VAR2->VAR13, VAR2->VAR15, VAR32 & VAR3);
    return VAR49;
}