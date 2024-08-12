static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    ThreadFrame VAR12 = {.VAR13 = VAR3};
    VAR14 *VAR15 = &VAR8->VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    if (VAR6->VAR20 < VAR21)
        return VAR22;
    if ((VAR18 = FUN2(VAR15, VAR6->VAR3, VAR6->VAR20)) < 0)
        return VAR18;
    if ((VAR18 = FUN3(VAR2, VAR15, &VAR8->VAR23, 0)) < 0)
        return VAR18;
    VAR19 = FUN4(VAR15) / 8;
    if (VAR2->VAR24 & (VAR25 | VAR26))
    {
        if (FUN5(VAR6->VAR3, VAR19))
        {
            FUN6(VAR2, VAR27, "");
            if (VAR2->VAR24 & VAR28)
                return VAR22;
        }
    }
    if (VAR8->VAR23.VAR29 != VAR30 && VAR8->VAR23.VAR29 != VAR31)
    {
        FUN7(VAR2, "", VAR8->VAR23.VAR29);
        return VAR32;
    }
    if (VAR8->VAR23.VAR33)
    {
        FUN6(VAR2, VAR27, "", VAR8->VAR23.VAR33);
        return VAR22;
    }
    if (VAR8->VAR23.VAR29 == VAR30 && VAR8->VAR23.VAR34 > 2)
    {
        FUN6(VAR2, VAR27, "", VAR8->VAR23.VAR34);
        return VAR22;
    }
    if (VAR8->VAR23.VAR34 > 6)
    {
        FUN6(VAR2, VAR27, "", VAR8->VAR23.VAR34);
        return VAR22;
    }
    if (VAR8->VAR23.VAR35 <= 0)
    {
        FUN6(VAR2, VAR27, "");
        return VAR22;
    }
    VAR2->VAR36 = VAR8->VAR23.VAR37;
    if ((VAR18 = FUN8(VAR2)) < 0)
        return VAR18;
    if (VAR8->VAR23.VAR38 != VAR2->VAR38)
    {
        VAR2->VAR38 = VAR8->VAR23.VAR38;
        FUN9(VAR2);
    }
    if (VAR8->VAR23.VAR39)
        VAR2->VAR40 = VAR8->VAR23.VAR39;
    VAR2->VAR34 = VAR8->VAR23.VAR34;
    VAR8->VAR41 = VAR8->VAR23.VAR42 ? VAR8->VAR23.VAR42 : VAR8->VAR23.VAR35;
    VAR11->VAR41 = VAR8->VAR41;
    if ((VAR18 = FUN10(VAR2, &VAR12, 0)) < 0)
        return VAR18;
    FUN11(VAR2);
    if (VAR2->VAR36 <= 16)
    {
        int VAR43 = FUN12(NULL, VAR2->VAR34, VAR8->VAR41, VAR44, 0);
        if (VAR43 < 0)
            return VAR43;
        FUN13(&VAR8->VAR45, &VAR8->VAR46, VAR43);
        if (!VAR8->VAR45)
            return FUN14(VAR47);
        VAR18 = FUN15((VAR48 **)VAR8->VAR49, NULL, VAR8->VAR45, VAR2->VAR34, VAR8->VAR41, VAR44, 0);
        if (VAR18 < 0)
            return VAR18;
    }
    else
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
            VAR8->VAR49[VAR16] = (VAR50 *)VAR11->VAR51[VAR16];
    }
    if (VAR8->VAR41 < 16)
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
        {
            VAR50 *VAR49 = VAR8->VAR49[VAR16];
            for (VAR17 = 0; VAR17 < VAR8->VAR41; VAR17++)
                VAR49[VAR17] = FUN16(VAR15, VAR2->VAR36);
        }
    }
    else
    {
        if (VAR8->VAR23.VAR29 == VAR30)
        {
            for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
                if (VAR18 = FUN17(VAR8, VAR16))
                    return VAR18;
            if (VAR2->VAR34 == 2)
            {
                VAR8->VAR52 = FUN18(VAR15, 1) + 1;
                if (VAR8->VAR52 > 1)
                {
                    VAR8->VAR53[1] = FUN18(VAR15, 6);
                }
                VAR8->VAR54 = FUN18(VAR15, 3);
                if (VAR18 = FUN19(VAR8, 0, 1, VAR8->VAR41 - 1))
                    return VAR18;
            }
        }
        else if (VAR8->VAR23.VAR29 == VAR31)
        {
            if (FUN20(VAR15))
            {
                int VAR55 = 0;
                VAR16 = FUN18(VAR15, 4) + 1;
                if (VAR16 > VAR2->VAR34)
                    return VAR22;
                for (VAR17 = 0; VAR17 < VAR16; VAR17++)
                {
                    int VAR56 = FUN18(VAR15, 4);
                    if (VAR56 >= VAR2->VAR34)
                        return VAR22;
                    if (VAR55 & 1 << VAR56)
                        return VAR22;
                    VAR8->VAR57[VAR17].VAR58 = FUN20(VAR15);
                    if (VAR8->VAR57[VAR17].VAR58)
                    {
                        VAR8->VAR57[VAR17].VAR59 = FUN18(VAR15, 2);
                        VAR8->VAR57[VAR17].VAR60 = FUN18(VAR15, 4);
                        if (VAR8->VAR57[VAR17].VAR60 >= VAR2->VAR34)
                        {
                            FUN6(VAR2, VAR27, "", VAR8->VAR57[VAR17].VAR60, VAR2->VAR34);
                            return VAR22;
                        }
                        if (VAR8->VAR57[VAR17].VAR59 == 1)
                        {
                            if ((VAR56 == VAR8->VAR57[VAR17].VAR60) || (VAR55 & 1 << VAR8->VAR57[VAR17].VAR60))
                                return VAR22;
                            VAR55 |= 1 << VAR8->VAR57[VAR17].VAR60;
                        }
                        else if (!(VAR55 & 1 << VAR8->VAR57[VAR17].VAR60))
                        {
                            return VAR22;
                        }
                    }
                    VAR8->VAR57[VAR17].VAR61 = VAR56;
                    VAR55 |= 1 << VAR56;
                }
            }
            else
            {
                VAR16 = VAR2->VAR34;
                for (VAR17 = 0; VAR17 < VAR16; VAR17++)
                {
                    VAR8->VAR57[VAR17].VAR58 = 0;
                    VAR8->VAR57[VAR17].VAR61 = VAR17;
                }
            }
            for (VAR17 = 0; VAR17 < VAR16; VAR17++)
            {
                if (VAR8->VAR57[VAR17].VAR58 && VAR8->VAR57[VAR17].VAR59 == 1)
                    if (VAR18 = FUN17(VAR8, VAR8->VAR57[VAR17].VAR60))
                        return VAR18;
                if (VAR18 = FUN17(VAR8, VAR8->VAR57[VAR17].VAR61))
                    return VAR18;
                if (VAR8->VAR57[VAR17].VAR58)
                {
                    VAR8->VAR54 = VAR62[VAR8->VAR57[VAR17].VAR59];
                    if (VAR18 = FUN19(VAR8, VAR8->VAR57[VAR17].VAR60, VAR8->VAR57[VAR17].VAR61, VAR8->VAR41 - 1))
                        return VAR18;
                }
            }
        }
        for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
        {
            VAR50 *VAR49 = VAR8->VAR49[VAR16];
            if (VAR8->VAR63[VAR16])
                FUN21(VAR49, VAR8->VAR63[VAR16], VAR8->VAR41);
            if (VAR8->VAR64[VAR16] > 0)
                for (VAR17 = 0; VAR17 < VAR8->VAR41; VAR17++)
                    VAR49[VAR17] *= 1 << VAR8->VAR64[VAR16];
        }
    }
    FUN22(VAR15);
    FUN23(VAR15, 24);
    if (FUN24(VAR15) < 0)
        FUN6(VAR2, VAR65, "");
    else if (FUN24(VAR15) > 0)
        FUN6(VAR2, VAR65, "");
    if (VAR2->VAR24 & (VAR25 | VAR26))
    {
        if (FUN5(VAR6->VAR3 + VAR19, FUN4(VAR15) / 8 - VAR19))
        {
            FUN6(VAR2, VAR27, "");
            if (VAR2->VAR24 & VAR28)
                return VAR22;
        }
    }
    switch (VAR2->VAR66)
    {
    case VAR67:
        for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
        {
            VAR48 *VAR68 = (VAR48 *)VAR11->VAR51[VAR16];
            VAR50 *VAR49 = VAR8->VAR49[VAR16];
            for (VAR17 = 0; VAR17 < VAR8->VAR41; VAR17++)
                VAR68[VAR17] = VAR49[VAR17] + 0x80;
        }
        break;
    case VAR69:
        for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
        {
            VAR70 *VAR68 = (VAR70 *)VAR11->VAR51[VAR16];
            VAR50 *VAR49 = VAR8->VAR49[VAR16];
            for (VAR17 = 0; VAR17 < VAR8->VAR41; VAR17++)
                VAR68[VAR17] = VAR49[VAR17];
        }
        break;
    case VAR44:
        for (VAR16 = 0; VAR16 < VAR2->VAR34; VAR16++)
        {
            VAR50 *VAR68 = (VAR50 *)VAR11->VAR51[VAR16];
            for (VAR17 = 0; VAR17 < VAR8->VAR41; VAR17++)
                VAR68[VAR17] *= 1 << 8;
        }
        break;
    }
    *VAR4 = 1;
    return VAR6->VAR20;
}