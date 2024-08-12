static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetByteContext VAR11;
    int VAR12;
    int VAR13;
    unsigned char VAR14;
    unsigned char VAR15;
    unsigned int VAR16;
    int VAR17;
    unsigned int VAR18;
    int VAR19;
    int VAR20, VAR21, VAR22;
    int VAR23;
    int VAR24;
    int VAR25;
    unsigned char VAR26, VAR27, VAR28;
    int VAR29;
    int VAR30;
    int VAR31;
    signed short VAR32;
    int VAR33;
    int VAR34;
    int VAR35;
    int VAR36;
    unsigned char *VAR37;
    unsigned int VAR38;
    FUN2(&VAR11, VAR6, VAR7);
    if ((VAR22 = FUN3(VAR2, VAR9->VAR39)) < 0)
        return VAR22;
    VAR37 = VAR9->VAR39->VAR3[0];
    VAR38 = VAR9->VAR2->VAR40 * VAR9->VAR39->VAR41[0];
    if (VAR7 < 16 || VAR7 > VAR42 - (3 * 256 + VAR43))
        VAR16 = FUN4(&VAR11);
    if (VAR16 > VAR7)
        VAR16 = VAR7;
    FUN5(&VAR11, 2);
    VAR17 = FUN6(&VAR11);
    FUN5(&VAR11, 8);
    VAR16 -= 16;
    while ((VAR16 >= 6) && (VAR17 > 0) && FUN7(&VAR11) >= 4)
    {
        int VAR44;
        VAR18 = FUN4(&VAR11);
        if (VAR18 > VAR16)
        {
            FUN8(VAR2, VAR45, "", VAR18, VAR16);
            VAR18 = VAR16;
        }
        VAR44 = FUN9(&VAR11) - 4 + VAR18;
        VAR19 = FUN6(&VAR11);
        switch (VAR19)
        {
        case VAR46:
        case VAR47:
            if ((VAR19 == VAR46) && (VAR9->VAR48 != VAR49))
                VAR25 = 0;
            else
                VAR25 = 2;
            VAR23 = FUN6(&VAR11);
            VAR13 = 0;
            for (VAR20 = 0; VAR20 < VAR23; VAR20++)
            {
                VAR13 += FUN10(&VAR11);
                VAR24 = FUN10(&VAR11);
                if (VAR24 == 0)
                    VAR24 = 256;
                if (FUN9(&VAR11) + VAR24 * 3 > VAR44)
                    break;
                for (VAR21 = 0; VAR21 < VAR24; VAR21++)
                {
                    unsigned int VAR50;
                    if ((unsigned)VAR13 >= 256)
                        VAR13 = 0;
                    VAR26 = FUN10(&VAR11) << VAR25;
                    VAR27 = FUN10(&VAR11) << VAR25;
                    VAR28 = FUN10(&VAR11) << VAR25;
                    VAR50 = 0xFFU << 24 | VAR26 << 16 | VAR27 << 8 | VAR28;
                    if (VAR25 == 2)
                        VAR50 |= VAR50 >> 6 & 0x30303;
                    if (VAR9->VAR51[VAR13] != VAR50)
                        VAR9->VAR52 = 1;
                    VAR9->VAR51[VAR13++] = VAR50;
                }
            }
            break;
        case VAR53:
            VAR33 = 0;
            VAR30 = FUN6(&VAR11);
            while (VAR30 > 0)
            {
                if (FUN9(&VAR11) + 2 > VAR44)
                    break;
                VAR32 = FUN6(&VAR11);
                if ((VAR32 & 0xC000) == 0xC000)
                {
                    VAR32 = -VAR32;
                    VAR33 += VAR32 * VAR9->VAR39->VAR41[0];
                }
                else if ((VAR32 & 0xC000) == 0x4000)
                {
                    FUN8(VAR2, VAR54, "", VAR32);
                }
                else if ((VAR32 & 0xC000) == 0x8000)
                {
                    VAR12 = VAR33 + VAR9->VAR39->VAR41[0] - 1;
                    FUN11(0);
                    VAR37[VAR12] = VAR32 & 0xff;
                }
                else
                {
                    VAR30--;
                    VAR12 = VAR33;
                    FUN11(0);
                    VAR36 = VAR9->VAR2->VAR55;
                    for (VAR20 = 0; VAR20 < VAR32; VAR20++)
                    {
                        if (FUN9(&VAR11) + 2 > VAR44)
                            break;
                        VAR35 = FUN10(&VAR11);
                        VAR12 += VAR35;
                        VAR36 -= VAR35;
                        VAR34 = FUN12(FUN10(&VAR11), 8);
                        if (VAR34 < 0)
                        {
                            VAR34 = -VAR34;
                            VAR14 = FUN10(&VAR11);
                            VAR15 = FUN10(&VAR11);
                            FUN11(VAR34 * 2);
                            for (VAR21 = 0; VAR21 < VAR34; VAR21++, VAR36 -= 2)
                            {
                                VAR37[VAR12++] = VAR14;
                                VAR37[VAR12++] = VAR15;
                            }
                        }
                        else
                        {
                            FUN11(VAR34 * 2);
                            if (FUN9(&VAR11) + VAR34 * 2 > VAR44)
                                break;
                            for (VAR21 = 0; VAR21 < VAR34 * 2; VAR21++, VAR36--)
                            {
                                VAR37[VAR12++] = FUN10(&VAR11);
                            }
                        }
                    }
                    VAR33 += VAR9->VAR39->VAR41[0];
                }
            }
            break;
        case VAR56:
            VAR31 = FUN6(&VAR11);
            VAR33 = 0;
            VAR33 += VAR31 * VAR9->VAR39->VAR41[0];
            VAR30 = FUN6(&VAR11);
            while (VAR30 > 0)
            {
                VAR12 = VAR33;
                FUN11(0);
                VAR36 = VAR9->VAR2->VAR55;
                if (FUN9(&VAR11) + 1 > VAR44)
                    break;
                VAR32 = FUN10(&VAR11);
                if (VAR32 > 0)
                {
                    for (VAR20 = 0; VAR20 < VAR32; VAR20++)
                    {
                        if (FUN9(&VAR11) + 1 > VAR44)
                            break;
                        VAR35 = FUN10(&VAR11);
                        VAR12 += VAR35;
                        VAR36 -= VAR35;
                        VAR34 = FUN12(FUN10(&VAR11), 8);
                        if (VAR34 > 0)
                        {
                            FUN11(VAR34);
                            if (FUN9(&VAR11) + VAR34 > VAR44)
                                break;
                            for (VAR21 = 0; VAR21 < VAR34; VAR21++, VAR36--)
                            {
                                VAR37[VAR12++] = FUN10(&VAR11);
                            }
                        }
                        else if (VAR34 < 0)
                        {
                            VAR34 = -VAR34;
                            VAR14 = FUN10(&VAR11);
                            FUN11(VAR34);
                            for (VAR21 = 0; VAR21 < VAR34; VAR21++, VAR36--)
                            {
                                VAR37[VAR12++] = VAR14;
                            }
                        }
                    }
                }
                VAR33 += VAR9->VAR39->VAR41[0];
                VAR30--;
            }
            break;
        case VAR57:
            memset(VAR37, 0, VAR9->VAR39->VAR41[0] * VAR9->VAR2->VAR40);
            break;
        case VAR58:
            VAR33 = 0;
            for (VAR29 = 0; VAR29 < VAR9->VAR2->VAR40; VAR29++)
            {
                VAR12 = VAR33;
                FUN5(&VAR11, 1);
                VAR36 = VAR9->VAR2->VAR55;
                while (VAR36 > 0)
                {
                    if (FUN9(&VAR11) + 1 > VAR44)
                        break;
                    VAR34 = FUN12(FUN10(&VAR11), 8);
                    if (!VAR34)
                    {
                        FUN8(VAR2, VAR54, "");
                    }
                    if (VAR34 > 0)
                    {
                        VAR14 = FUN10(&VAR11);
                        FUN11(VAR34);
                        for (VAR21 = 0; VAR21 < VAR34; VAR21++)
                        {
                            VAR37[VAR12++] = VAR14;
                            VAR36--;
                            if (VAR36 < 0)
                                FUN8(VAR2, VAR54, "", VAR36, VAR29);
                        }
                    }
                    else
                    {
                        VAR34 = -VAR34;
                        FUN11(VAR34);
                        if (FUN9(&VAR11) + VAR34 > VAR44)
                            break;
                        for (VAR21 = 0; VAR21 < VAR34; VAR21++)
                        {
                            VAR37[VAR12++] = FUN10(&VAR11);
                            VAR36--;
                            if (VAR36 < 0)
                                FUN8(VAR2, VAR54, "", VAR36, VAR29);
                        }
                    }
                }
                VAR33 += VAR9->VAR39->VAR41[0];
            }
            break;
        case VAR59:
            if (VAR18 - 6 != FUN13(VAR9->VAR2->VAR55, 4) * VAR9->VAR2->VAR40)
            {
                FUN8(VAR2, VAR54, ""
                                            "",
                       VAR18 - 6);
                FUN5(&VAR11, VAR18 - 6);
            }
            else
            {
                for (VAR33 = 0; VAR33 < VAR9->VAR39->VAR41[0] * VAR9->VAR2->VAR40; VAR33 += VAR9->VAR39->VAR41[0])
                {
                    FUN14(&VAR11, &VAR37[VAR33], VAR9->VAR2->VAR55);
                    if (VAR9->VAR2->VAR55 & 3)
                        FUN5(&VAR11, 4 - (VAR9->VAR2->VAR55 & 3));
                }
            }
            break;
        case VAR60:
            break;
        default:
            FUN8(VAR2, VAR54, "", VAR19);
            break;
        }
        if (VAR44 - FUN9(&VAR11) >= 0)
        {
            FUN5(&VAR11, VAR44 - FUN9(&VAR11));
        }
        else
        {
            FUN8(VAR2, VAR54, "");
            break;
        }
        VAR16 -= VAR18;
        VAR17--;
    }
    if (FUN7(&VAR11) > 2)
        FUN8(VAR2, VAR54, ""
                                    "",
               VAR7, VAR7 - FUN7(&VAR11));
    memcpy(VAR9->VAR39->VAR3[1], VAR9->VAR51, VAR61);
    if (VAR9->VAR52)
    {
        VAR9->VAR39->VAR62 = 1;
        VAR9->VAR52 = 0;
    }
    if ((VAR22 = FUN15(VAR3, VAR9->VAR39)) < 0)
        return VAR22;
    *VAR4 = 1;
    return VAR7;