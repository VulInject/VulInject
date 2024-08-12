static int FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4 ? (VAR5 | VAR6) : 0x7F;
    const int VAR7 = 16 >> VAR2->VAR8->VAR9;
    int VAR10;
    VAR2->VAR11 = VAR2->VAR12;
    VAR2->VAR13 = 1;
    VAR2->VAR14 = VAR2->VAR15;
    VAR2->VAR16 = VAR2->VAR17;
    FUN2(VAR2, VAR2->VAR18);
    if (VAR2->VAR8->VAR19)
    {
        const VAR20 *VAR21 = VAR2->VAR12.VAR22 + FUN3(&VAR2->VAR12) / 8;
        const VAR20 *VAR23 = FUN4(VAR2, VAR21 + 1, VAR2->VAR12.VAR24);
        FUN5(&VAR2->VAR12, 8 * (VAR23 - VAR21));
        return VAR2->VAR8->VAR19->FUN1(VAR2->VAR8, VAR21, VAR23 - VAR21);
    }
    if (VAR2->VAR4)
    {
        const int VAR18 = VAR2->VAR18;
        if (VAR25 && VAR2->VAR26 == VAR27)
        {
            if ((VAR10 = FUN6(VAR2)) < 0)
                return VAR10;
        }
        VAR2->VAR13 = 1;
        VAR2->VAR15 = VAR2->VAR14;
        VAR2->VAR17 = VAR2->VAR16;
        FUN2(VAR2, VAR18);
    }
    for (; VAR2->VAR17 < VAR2->VAR28; VAR2->VAR17++)
    {
        if (VAR2->VAR29)
        {
            if (VAR2->VAR16 + VAR2->VAR30 == VAR2->VAR17)
            {
                FUN7(VAR2, VAR2->VAR14, VAR2->VAR16, VAR2->VAR15 - 1, VAR2->VAR17, VAR31);
                return 0;
            }
        }
        if (VAR2->VAR29 == 1)
        {
            VAR2->VAR32[0] = VAR2->VAR32[1] = VAR2->VAR32[2] = 128;
        }
        FUN8(VAR2);
        for (; VAR2->VAR15 < VAR2->VAR33; VAR2->VAR15++)
        {
            int VAR10;
            FUN9(VAR2);
            if (VAR2->VAR14 == VAR2->VAR15 && VAR2->VAR16 + 1 == VAR2->VAR17)
            {
                VAR2->VAR13 = 0;
            }
            VAR2->VAR34 = VAR35;
            VAR2->VAR36 = VAR37;
            FUN10(VAR2, "", VAR10, FUN3(&VAR2->VAR12), FUN11(&VAR2->VAR12, 24));
            VAR10 = VAR2->FUN12(VAR2, VAR2->VAR38);
            if (VAR2->VAR39 != VAR40)
                FUN13(VAR2);
            if (VAR10 < 0)
            {
                const int VAR41 = VAR2->VAR15 + VAR2->VAR17 * VAR2->VAR42;
                if (VAR10 == VAR43)
                {
                    FUN14(VAR2, VAR2->VAR38);
                    if (VAR2->VAR44)
                        FUN15(VAR2);
                    FUN7(VAR2, VAR2->VAR14, VAR2->VAR16, VAR2->VAR15, VAR2->VAR17, VAR31 & VAR3);
                    VAR2->VAR45--;
                    if (++VAR2->VAR15 >= VAR2->VAR33)
                    {
                        VAR2->VAR15 = 0;
                        FUN16(VAR2, VAR2->VAR17 * VAR7, VAR7);
                        FUN17(VAR2);
                        VAR2->VAR17++;
                    }
                    return 0;
                }
                else if (VAR10 == VAR46)
                {
                    FUN18(VAR2->VAR8, VAR47, "", VAR41);
                    FUN7(VAR2, VAR2->VAR14, VAR2->VAR16, VAR2->VAR15 + 1, VAR2->VAR17, VAR31 & VAR3);
                    return VAR48;
                }
                FUN18(VAR2->VAR8, VAR47, "", VAR41);
                FUN7(VAR2, VAR2->VAR14, VAR2->VAR16, VAR2->VAR15, VAR2->VAR17, VAR49 & VAR3);
                return VAR48;
            }
            FUN14(VAR2, VAR2->VAR38);
            if (VAR2->VAR44)
                FUN15(VAR2);
        }
        FUN16(VAR2, VAR2->VAR17 * VAR7, VAR7);
        FUN17(VAR2);
        VAR2->VAR15 = 0;
    }
    assert(VAR2->VAR15 == 0 && VAR2->VAR17 == VAR2->VAR28);
    if (VAR2->VAR26 == VAR27 && (VAR2->VAR50 & VAR51) && FUN19(&VAR2->VAR12) >= 48 && FUN11(&VAR2->VAR12, 24) == 0x4010 && !VAR2->VAR52)
        VAR2->VAR45 += 32;
    if (VAR2->VAR26 == VAR27 && (VAR2->VAR50 & VAR51) && FUN19(&VAR2->VAR12) >= 0 && FUN19(&VAR2->VAR12) < 137 && !VAR2->VAR52)
    {
        const int VAR53 = FUN3(&VAR2->VAR12);
        const int VAR54 = VAR2->VAR12.VAR55 - VAR53;
        if (VAR54 == 0)
        {
            VAR2->VAR45 += 16;
        }
        else if (VAR54 != 1)
        {
            int VAR56 = FUN11(&VAR2->VAR12, 8);
            VAR56 |= 0x7F >> (7 - (VAR53 & 7));
            if (VAR56 == 0x7F && VAR54 <= 8)
                VAR2->VAR45--;
            else if (VAR56 == 0x7F && ((FUN3(&VAR2->VAR12) + 8) & 8) && VAR54 <= 16)
                VAR2->VAR45 += 4;
            else
                VAR2->VAR45++;
        }
    }
    if (VAR2->VAR50 & VAR51)
    {
        if (VAR2->VAR45 > -2 && !VAR2->VAR52)
            VAR2->VAR50 |= VAR57;
        else
            VAR2->VAR50 &= ~VAR57;
    }
    if (VAR2->VAR29 || (VAR2->VAR50 & VAR57))
    {
        int VAR58 = FUN19(&VAR2->VAR12);
        int VAR59 = 7;
        if (VAR2->VAR29 && VAR2->VAR39 == VAR60)
            VAR59 += 17;
        if ((VAR2->VAR50 & VAR57) && (VAR2->VAR61 & (VAR62 | VAR63)))
            VAR59 += 48;
        else if ((VAR2->VAR50 & VAR57))
            VAR59 += 256 * 256 * 256 * 64;
        if (VAR58 > VAR59)
        {
            FUN18(VAR2->VAR8, VAR47, "", VAR58, FUN11(&VAR2->VAR12, 24));
        }
        else if (VAR58 < 0)
        {
            FUN18(VAR2->VAR8, VAR47, "", -VAR58);
        }
        else
            FUN7(VAR2, VAR2->VAR14, VAR2->VAR16, VAR2->VAR15 - 1, VAR2->VAR17, VAR31);
        return 0;
    }
    FUN18(VAR2->VAR8, VAR47, "", FUN19(&VAR2->VAR12), FUN11(&VAR2->VAR12, 24), VAR2->VAR45);
    FUN7(VAR2, VAR2->VAR14, VAR2->VAR16, VAR2->VAR15, VAR2->VAR17, VAR31 & VAR3);
    return VAR48;
}