static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    GetBitContext VAR8;
    if (!VAR2->VAR9 || !VAR2->VAR10)
        return -1;
    if (!(VAR2->VAR11 & VAR12))
        VAR2->VAR13 = VAR14;
    else
        VAR2->VAR13 = VAR15;
    VAR4->VAR7.VAR2 = VAR2;
    VAR2->VAR11 |= VAR16;
    VAR4->VAR7.VAR11 |= VAR16;
    if (VAR2->VAR17 == VAR18)
    {
        VAR2->VAR17 = VAR19;
    }
    if (FUN2(VAR2) < 0)
        return -1;
    if (FUN3(VAR4) < 0)
        return -1;
    VAR2->VAR20 = VAR2->VAR21;
    VAR2->VAR22 = VAR2->VAR23;
    if (VAR2->VAR24 == VAR25)
    {
        int VAR26 = 0;
        FUN4(&VAR8, VAR2->VAR10, VAR2->VAR9 * 8);
        if (FUN5(VAR2, &VAR8) < 0)
            return -1;
        VAR26 = VAR2->VAR9 * 8 - FUN6(&VAR8);
        if (VAR26 > 0)
        {
            FUN7(VAR2, VAR27, "", VAR26, FUN8(&VAR8, VAR26));
        }
        else if (VAR26 < 0)
        {
            FUN7(VAR2, VAR27, "", -VAR26);
        }
    }
    else
    {
        const VAR28 *VAR29 = VAR2->VAR10;
        VAR28 *VAR30 = VAR2->VAR10 + VAR2->VAR9;
        const VAR28 *VAR31;
        int VAR32, VAR33;
        VAR28 *VAR34 = NULL;
        int VAR35 = 0, VAR36 = 0;
        if (VAR2->VAR9 < 16)
        {
            FUN7(VAR2, VAR37, "", VAR2->VAR9);
            return -1;
        }
        VAR34 = FUN9(VAR2->VAR9 + VAR38);
        if (VAR29[0])
            VAR29++;
        VAR31 = VAR29;
        for (; VAR31 < VAR30; VAR29 = VAR31)
        {
            VAR31 = FUN10(VAR29 + 4, VAR30);
            VAR32 = VAR31 - VAR29 - 4;
            if (VAR32 <= 0)
                continue;
            VAR33 = FUN11(VAR29 + 4, VAR32, VAR34);
            FUN4(&VAR8, VAR34, VAR33 * 8);
            switch (FUN12(VAR29))
            {
            case VAR39:
                if (FUN5(VAR2, &VAR8) < 0)
                {
                    FUN13(VAR34);
                    return -1;
                }
                VAR35 = 1;
                break;
            case VAR40:
                if (FUN14(VAR2, &VAR8) < 0)
                {
                    FUN13(VAR34);
                    return -1;
                }
                VAR36 = 1;
                break;
            }
        }
        FUN13(VAR34);
        if (!VAR35 || !VAR36)
        {
            FUN7(VAR2, VAR37, "");
            return -1;
        }
    }
    VAR2->VAR41 = !!(VAR2->VAR42);
    VAR7->VAR43 = !VAR2->VAR41;
    VAR7->VAR44 = (VAR2->VAR20 + 15) >> 4;
    VAR7->VAR45 = (VAR2->VAR22 + 15) >> 4;
    VAR4->VAR46 = FUN15(VAR7->VAR47 * VAR7->VAR45);
    VAR4->VAR48 = FUN15(VAR7->VAR47 * VAR7->VAR45);
    VAR4->VAR49 = FUN15(VAR7->VAR47 * VAR7->VAR45);
    VAR4->VAR50 = FUN15(VAR7->VAR47 * VAR7->VAR45);
    VAR4->VAR51 = FUN15(VAR7->VAR52 * (VAR7->VAR45 * 2 + 1) + VAR7->VAR47 * (VAR7->VAR45 + 1) * 2);
    VAR4->VAR53[0] = VAR4->VAR51 + VAR7->VAR52 + 1;
    VAR4->VAR53[1] = VAR4->VAR51 + VAR7->VAR52 * (VAR7->VAR45 * 2 + 1) + VAR7->VAR47 + 1;
    VAR4->VAR53[2] = VAR4->VAR53[1] + VAR7->VAR47 * (VAR7->VAR45 + 1);
    if (VAR4->VAR54 == VAR55)
    {
    }
    FUN16(&VAR4->VAR56, VAR7);
    return 0;
}