static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetByteContext VAR11;
    int VAR12;
    unsigned char VAR13;
    unsigned int VAR14;
    int VAR15;
    unsigned int VAR16;
    int VAR17;
    int VAR18, VAR19, VAR20;
    int VAR21;
    int VAR22;
    signed short VAR23;
    int VAR24;
    int VAR25;
    int VAR26;
    int VAR27;
    unsigned char *VAR28;
    int VAR29;
    unsigned int VAR30;
    FUN2(&VAR11, VAR6, VAR7);
    if ((VAR20 = FUN3(VAR2, VAR9->VAR31)) < 0)
        return VAR20;
    VAR28 = VAR9->VAR31->VAR3[0];
    VAR30 = VAR9->VAR2->VAR32 * VAR9->VAR31->VAR33[0];
    VAR14 = FUN4(&VAR11);
    FUN5(&VAR11, 2);
    VAR15 = FUN6(&VAR11);
    FUN5(&VAR11, 8);
    if (VAR14 > VAR7)
        VAR14 = VAR7;
    if (VAR14 < 16)
        VAR14 -= 16;
    while ((VAR14 > 0) && (VAR15 > 0) && FUN7(&VAR11) >= 4)
    {
        int VAR34;
        VAR16 = FUN4(&VAR11);
        if (VAR16 > VAR14)
        {
            FUN8(VAR2, VAR35, "", VAR16, VAR14);
            VAR16 = VAR14;
        }
        VAR34 = FUN9(&VAR11) - 4 + VAR16;
        VAR17 = FUN6(&VAR11);
        switch (VAR17)
        {
        case VAR36:
        case VAR37:
            FUN10(VAR2, "", VAR17);
            FUN5(&VAR11, VAR16 - 6);
            break;
        case VAR38:
        case VAR39:
            VAR24 = 0;
            VAR22 = FUN6(&VAR11);
            while (VAR22 > 0)
            {
                if (FUN9(&VAR11) + 2 > VAR34)
                    break;
                VAR23 = FUN6(&VAR11);
                if (VAR23 < 0)
                {
                    VAR23 = -VAR23;
                    VAR24 += VAR23 * VAR9->VAR31->VAR33[0];
                }
                else
                {
                    VAR22--;
                    VAR12 = VAR24;
                    FUN11(0);
                    VAR27 = VAR9->VAR2->VAR40;
                    for (VAR18 = 0; VAR18 < VAR23; VAR18++)
                    {
                        if (FUN9(&VAR11) + 2 > VAR34)
                            break;
                        VAR26 = FUN12(&VAR11);
                        VAR12 += (VAR26 * 3);
                        VAR27 -= VAR26;
                        VAR25 = FUN13(FUN12(&VAR11), 8);
                        if (VAR25 < 0)
                        {
                            VAR25 = -VAR25;
                            VAR29 = FUN14(&VAR11);
                            FUN11(3 * VAR25);
                            for (VAR19 = 0; VAR19 < VAR25; VAR19++, VAR27 -= 1)
                            {
                                FUN15(&VAR28[VAR12], VAR29);
                                VAR12 += 3;
                            }
                        }
                        else
                        {
                            if (FUN9(&VAR11) + 2 * VAR25 > VAR34)
                                break;
                            FUN11(2 * VAR25);
                            for (VAR19 = 0; VAR19 < VAR25; VAR19++, VAR27--)
                            {
                                VAR29 = FUN14(&VAR11);
                                FUN15(&VAR28[VAR12], VAR29);
                                VAR12 += 3;
                            }
                        }
                    }
                    VAR24 += VAR9->VAR31->VAR33[0];
                }
            }
            break;
        case VAR41:
            FUN8(VAR2, VAR42, "");
            FUN5(&VAR11, VAR16 - 6);
            break;
        case VAR43:
            memset(VAR28, 0x00, VAR9->VAR31->VAR33[0] * VAR9->VAR2->VAR32);
            break;
        case VAR44:
            VAR24 = 0;
            for (VAR21 = 0; VAR21 < VAR9->VAR2->VAR32; VAR21++)
            {
                VAR12 = VAR24;
                FUN5(&VAR11, 1);
                VAR27 = (VAR9->VAR2->VAR40 * 3);
                while (VAR27 > 0)
                {
                    if (FUN9(&VAR11) + 1 > VAR34)
                        break;
                    VAR25 = FUN13(FUN12(&VAR11), 8);
                    if (VAR25 > 0)
                    {
                        VAR13 = FUN12(&VAR11);
                        FUN11(VAR25);
                        for (VAR19 = 0; VAR19 < VAR25; VAR19++)
                        {
                            VAR28[VAR12++] = VAR13;
                            VAR27--;
                            if (VAR27 < 0)
                                FUN8(VAR2, VAR42, "", VAR27, VAR21);
                        }
                    }
                    else
                    {
                        VAR25 = -VAR25;
                        if (FUN9(&VAR11) + VAR25 > VAR34)
                            break;
                        FUN11(VAR25);
                        for (VAR19 = 0; VAR19 < VAR25; VAR19++)
                        {
                            VAR13 = FUN12(&VAR11);
                            VAR28[VAR12++] = VAR13;
                            VAR27--;
                            if (VAR27 < 0)
                                FUN8(VAR2, VAR42, "", VAR27, VAR21);
                        }
                    }
                }
                VAR24 += VAR9->VAR31->VAR33[0];
            }
            break;
        case VAR45:
            VAR24 = 0;
            for (VAR21 = 0; VAR21 < VAR9->VAR2->VAR32; VAR21++)
            {
                VAR12 = VAR24;
                FUN5(&VAR11, 1);
                VAR27 = VAR9->VAR2->VAR40;
                while (VAR27 > 0)
                {
                    if (FUN9(&VAR11) + 1 > VAR34)
                        break;
                    VAR25 = FUN13(FUN12(&VAR11), 8);
                    if (VAR25 > 0)
                    {
                        VAR29 = FUN14(&VAR11);
                        FUN11(3 * VAR25);
                        for (VAR19 = 0; VAR19 < VAR25; VAR19++)
                        {
                            FUN15(VAR28 + VAR12, VAR29);
                            VAR12 += 3;
                            VAR27--;
                            if (VAR27 < 0)
                                FUN8(VAR2, VAR42, "", VAR27);
                        }
                    }
                    else
                    {
                        VAR25 = -VAR25;
                        if (FUN9(&VAR11) + 3 * VAR25 > VAR34)
                            break;
                        FUN11(3 * VAR25);
                        for (VAR19 = 0; VAR19 < VAR25; VAR19++)
                        {
                            VAR29 = FUN14(&VAR11);
                            FUN15(VAR28 + VAR12, VAR29);
                            VAR12 += 3;
                            VAR27--;
                            if (VAR27 < 0)
                                FUN8(VAR2, VAR42, "", VAR27);
                        }
                    }
                }
                VAR24 += VAR9->VAR31->VAR33[0];
            }
            break;
        case VAR46:
        case VAR47:
            if (VAR16 - 6 > (unsigned int)(FUN16(VAR9->VAR2->VAR40, 2) * VAR9->VAR2->VAR32) * 3)
            {
                FUN8(VAR2, VAR42, ""
                                            "",
                       VAR16 - 6);
                FUN5(&VAR11, VAR16 - 6);
            }
            else
            {
                for (VAR24 = 0; VAR24 < VAR9->VAR31->VAR33[0] * VAR9->VAR2->VAR32; VAR24 += VAR9->VAR31->VAR33[0])
                {
                    VAR27 = VAR9->VAR2->VAR40;
                    VAR12 = 0;
                    while (VAR27 > 0)
                    {
                        VAR29 = FUN14(&VAR11);
                        FUN15(&VAR28[VAR24 + VAR12], VAR29);
                        VAR12 += 3;
                        VAR27--;
                    }
                    if (VAR9->VAR2->VAR40 & 1)
                        FUN5(&VAR11, 3);
                }
            }
            break;
        case VAR48:
            FUN5(&VAR11, VAR16 - 6);
            break;
        default:
            FUN8(VAR2, VAR42, "", VAR17);
            break;
        }
        if (VAR34 - FUN9(&VAR11) >= 0)
        {
            FUN5(&VAR11, VAR34 - FUN9(&VAR11));
        }
        else
        {
            FUN8(VAR2, VAR42, "");
            break;
        }
        VAR14 -= VAR16;
        VAR15--;
    }
    if ((FUN7(&VAR11) != 0) && (FUN7(&VAR11) != 1))
        FUN8(VAR2, VAR42, ""
                                    "",
               VAR7, FUN9(&VAR11));
    if ((VAR20 = FUN17(VAR3, VAR9->VAR31)) < 0)
        return VAR20;
    *VAR4 = 1;
    return VAR7;