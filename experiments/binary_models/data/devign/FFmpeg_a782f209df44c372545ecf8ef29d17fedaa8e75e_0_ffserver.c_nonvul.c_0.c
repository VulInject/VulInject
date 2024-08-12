static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR6 *VAR7;
    switch (VAR2->VAR8)
    {
    case VAR9:
        memset(&VAR2->VAR10, 0, sizeof(VAR2->VAR10));
        FUN2(VAR2->VAR10.VAR11, sizeof(VAR2->VAR10.VAR11), VAR2->VAR12->VAR11);
        FUN2(VAR2->VAR10.VAR13, sizeof(VAR2->VAR10.VAR13), VAR2->VAR12->VAR13);
        FUN2(VAR2->VAR10.VAR14, sizeof(VAR2->VAR10.VAR14), VAR2->VAR12->VAR14);
        FUN2(VAR2->VAR10.VAR15, sizeof(VAR2->VAR10.VAR15), VAR2->VAR12->VAR15);
        VAR2->VAR10.VAR16 = VAR2->VAR12->VAR17;
        VAR2->VAR10.VAR18 = VAR2->VAR12->VAR18;
        for (VAR3 = 0; VAR3 < VAR2->VAR10.VAR18; VAR3++)
        {
            VAR19 *VAR20;
            VAR20 = FUN3(sizeof(VAR19));
            VAR2->VAR10.VAR21[VAR3] = VAR20;
            if (!VAR2->VAR12->VAR22 || VAR2->VAR12->VAR22 == VAR2->VAR12)
                memcpy(VAR20, VAR2->VAR12->VAR21[VAR3], sizeof(VAR19));
            else
                memcpy(VAR20, VAR2->VAR12->VAR22->VAR21[VAR2->VAR12->VAR23[VAR3]], sizeof(VAR19));
            VAR20->VAR24.VAR25 = 0;
        }
        VAR2->VAR26 = 0;
        if (FUN4(&VAR2->VAR10.VAR27) < 0)
        {
            return -1;
        }
        VAR2->VAR10.VAR27.VAR28 = 1;
        FUN5(&VAR2->VAR10);
        VAR4 = FUN6(&VAR2->VAR10.VAR27, &VAR2->VAR29);
        VAR2->VAR30 = VAR2->VAR29;
        VAR2->VAR31 = VAR2->VAR29 + VAR4;
        VAR2->VAR8 = VAR32;
        VAR2->VAR33 = 0;
        break;
    case VAR32:
    {
        AVPacket VAR34;
        if (VAR2->VAR12->VAR22)
        {
            FUN7(VAR2->VAR35, VAR2->VAR12->VAR22->VAR36, VAR2->VAR12->VAR22->VAR37);
        }
        if (VAR2->VAR12->VAR38 && VAR2->VAR12->VAR38 + VAR2->VAR39 - VAR40 < 0)
        {
            VAR2->VAR8 = VAR41;
        }
        else
        {
            if (1 || VAR2->VAR42)
            {
                if (FUN8(VAR2) > 0)
                {
                    VAR2->VAR8 = VAR43;
                    return 1;
                }
            }
            if (FUN9(VAR2->VAR35, &VAR34) < 0)
            {
                if (VAR2->VAR12->VAR22 && VAR2->VAR12->VAR22->VAR44)
                {
                    VAR2->VAR8 = VAR45;
                    return 1;
                }
                else
                {
                    VAR2->VAR8 = VAR41;
                }
            }
            else
            {
                if (VAR2->VAR46 == VAR47)
                    VAR2->VAR46 = VAR34.VAR48;
                if (VAR2->VAR12->VAR22)
                {
                    if (VAR2->VAR49)
                    {
                        VAR2->VAR49 = 0;
                        for (VAR3 = 0; VAR3 < VAR2->VAR12->VAR18; VAR3++)
                        {
                            if (VAR2->VAR50[VAR3] == VAR34.VAR51)
                            {
                                if (VAR34.VAR52 & VAR53)
                                {
                                    FUN10(VAR2, VAR3);
                                }
                            }
                            if (VAR2->VAR50[VAR3] >= 0)
                            {
                                VAR2->VAR49 = 1;
                            }
                        }
                    }
                    for (VAR3 = 0; VAR3 < VAR2->VAR12->VAR18; VAR3++)
                    {
                        if (VAR2->VAR23[VAR3] == VAR34.VAR51)
                        {
                            VAR34.VAR51 = VAR3;
                            if (VAR34.VAR52 & VAR53)
                            {
                                VAR2->VAR26 |= 1 << VAR3;
                            }
                            if (!VAR2->VAR12->VAR54 || ((VAR2->VAR26 + 1) >> VAR2->VAR12->VAR18))
                            {
                                goto VAR55;
                            }
                        }
                    }
                }
                else
                {
                    VAR56 *VAR24;
                VAR55:
                    if (VAR2->VAR42)
                    {
                        VAR2->VAR57 = VAR34.VAR51;
                        VAR7 = VAR2->VAR58[VAR2->VAR57];
                        VAR24 = &VAR7->VAR21[0]->VAR24;
                    }
                    else
                    {
                        VAR7 = &VAR2->VAR10;
                        VAR24 = &VAR7->VAR21[VAR34.VAR51]->VAR24;
                    }
                    VAR24->VAR59 = ((VAR34.VAR52 & VAR53) != 0);
                    if (VAR24->VAR60 == VAR61)
                    {
                        VAR24->VAR62 = (VAR24->VAR63 * VAR34.VAR64 + 500000) / 1000000;
                    }
                    if (VAR2->VAR42)
                    {
                        VAR5 = FUN11(&VAR7->VAR27, FUN12(VAR2->VAR65[VAR2->VAR57]));
                        VAR2->VAR66 = 0;
                        VAR2->VAR67 = FUN13();
                    }
                    else
                    {
                        VAR5 = FUN4(&VAR7->VAR27);
                    }
                    if (VAR5 < 0)
                    {
                        return -1;
                    }
                    if (FUN14(VAR7, &VAR34, VAR34.VAR48))
                    {
                        VAR2->VAR8 = VAR41;
                    }
                    VAR4 = FUN6(&VAR7->VAR27, &VAR2->VAR29);
                    VAR2->VAR30 = VAR2->VAR29;
                    VAR2->VAR31 = VAR2->VAR29 + VAR4;
                    VAR24->VAR25++;
                }
                FUN15(&VAR34);
            }
        }
    }
    break;
    default:
    case VAR41:
        if (VAR2->VAR33 || VAR2->VAR42)
            return -1;
        VAR7 = &VAR2->VAR10;
        if (FUN4(&VAR7->VAR27) < 0)
        {
            return -1;
        }
        FUN16(VAR7);
        VAR4 = FUN6(&VAR7->VAR27, &VAR2->VAR29);
        VAR2->VAR30 = VAR2->VAR29;
        VAR2->VAR31 = VAR2->VAR29 + VAR4;
        VAR2->VAR33 = 1;
        break;
    }
    return 0;
}