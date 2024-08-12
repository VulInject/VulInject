static int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5, int VAR6, const VAR7 *VAR8)
{
    VAR9 *VAR10;
    VAR4 *VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16;
    VAR12 *VAR17;
    int VAR18, VAR19;
    AVFrame VAR20;
    short VAR21[VAR8 && VAR8->VAR22 > VAR23 / 2 ? VAR8->VAR22 : VAR23 / 2];
    void *VAR24;
    if (VAR8 && VAR8->VAR25 != VAR26)
    {
        VAR2->VAR27 = VAR2->VAR28 = VAR8->VAR25;
    }
    else
    {
        assert(VAR2->VAR28 == VAR2->VAR27);
    }
    if (VAR8 == NULL)
    {
        VAR13 = NULL;
        VAR14 = 0;
        goto VAR29;
    }
    VAR14 = VAR8->VAR22;
    VAR13 = VAR8->VAR30;
    while (VAR14 > 0)
    {
    VAR29:
        VAR17 = NULL;
        VAR18 = 0;
        if (VAR2->VAR31)
        {
            switch (VAR2->VAR32->VAR33.VAR34)
            {
            case VAR35:
                VAR15 = FUN2(&VAR2->VAR32->VAR33, VAR21, &VAR18, VAR13, VAR14);
                if (VAR15 < 0)
                    goto VAR36;
                VAR13 += VAR15;
                VAR14 -= VAR15;
                if (VAR18 <= 0)
                {
                    continue;
                }
                VAR17 = (VAR12 *)VAR21;
                VAR2->VAR27 += ((VAR37)VAR38 / 2 * VAR18) / (VAR2->VAR32->VAR33.VAR39 * VAR2->VAR32->VAR33.VAR40);
                break;
            case VAR41:
                VAR18 = (VAR2->VAR32->VAR33.VAR42 * VAR2->VAR32->VAR33.VAR43 * 3) / 2;
                FUN3(&VAR20);
                VAR15 = FUN4(&VAR2->VAR32->VAR33, &VAR20, &VAR19, VAR13, VAR14);
                VAR2->VAR32->VAR44 = VAR20.VAR44;
                if (VAR15 < 0)
                    goto VAR36;
                if (!VAR19)
                {
                    goto VAR45;
                }
                if (VAR2->VAR32->VAR33.VAR46 != 0)
                {
                    VAR2->VAR27 += ((VAR37)VAR38 * VAR2->VAR32->VAR33.VAR46) / VAR2->VAR32->VAR33.VAR47;
                }
                VAR14 = 0;
                break;
            default:
                goto VAR36;
            }
        }
        else
        {
            VAR17 = VAR13;
            VAR18 = VAR14;
            VAR15 = VAR14;
            VAR14 = 0;
        }
        VAR24 = NULL;
        if (VAR2->VAR32->VAR33.VAR34 == VAR41)
        {
            FUN5(VAR2, (VAR48 *)&VAR20, &VAR24);
        }
        if (VAR2->VAR32->VAR33.VAR49)
        {
            int64_t VAR28 = FUN6((VAR37)VAR2->VAR50 * VAR2->VAR32->VAR33.VAR46, 1000000, VAR2->VAR32->VAR33.VAR47);
            int64_t VAR51 = FUN7() - VAR2->VAR52;
            if (VAR28 > VAR51)
                FUN8(VAR28 - VAR51);
            VAR2->VAR50++;
        }
        if (VAR2->VAR32->VAR33.VAR53 == VAR54)
        {
            if (VAR2->VAR32->VAR33.VAR55 != VAR56)
            {
                int64_t VAR57;
                VAR57 = VAR2->VAR58;
                VAR2->VAR58 = VAR2->VAR59.VAR60;
                VAR2->VAR59.VAR60 = VAR57;
            }
        }
        if (VAR61 == 0 || VAR2->VAR28 >= VAR61)
            for (VAR16 = 0; VAR16 < VAR6; VAR16++)
            {
                int VAR62;
                VAR11 = VAR5[VAR16];
                if (VAR11->VAR63 == VAR3)
                {
                    VAR10 = VAR64[VAR11->VAR65];
                    FUN9("", VAR16, (double)VAR8->VAR28 / VAR38, ((double)VAR2->VAR28 / VAR38) - ((double)VAR11->VAR32->VAR28.VAR60 * VAR11->VAR32->VAR66.VAR67 / VAR11->VAR32->VAR66.VAR68));
                    VAR11->VAR69 = (double)(VAR2->VAR28 + VAR70[VAR2->VAR65]) / VAR38;
                    if (VAR11->VAR71)
                    {
                        switch (VAR11->VAR32->VAR33.VAR34)
                        {
                        case VAR35:
                            FUN10(VAR10, VAR11, VAR2, VAR17, VAR18);
                            break;
                        case VAR41:
                        {
                            int VAR16;
                            VAR4 *VAR72, *VAR73;
                            VAR72 = NULL;
                            for (VAR16 = 0; VAR16 < VAR6; VAR16++)
                            {
                                VAR73 = VAR5[VAR16];
                                if (VAR73->VAR65 == VAR11->VAR65 && VAR73->VAR32->VAR33.VAR34 == VAR35)
                                {
                                    VAR72 = VAR73;
                                    break;
                                }
                            }
                            FUN11(VAR10, VAR11, VAR2, &VAR20, &VAR62);
                            VAR74 += VAR62;
                            if (VAR75 && VAR62)
                                FUN12(VAR10, VAR11, VAR62);
                        }
                        break;
                        default:
                            FUN13();
                        }
                    }
                    else
                    {
                        AVFrame VAR76;
                        AVPacket VAR77;
                        FUN14(&VAR77);
                        FUN3(&VAR76);
                        VAR11->VAR32->VAR33.VAR78 = &VAR76;
                        VAR76.VAR79 = VAR8->VAR80 & VAR81;
                        if (VAR11->VAR32->VAR33.VAR34 == VAR35)
                            VAR82 += VAR18;
                        else if (VAR11->VAR32->VAR33.VAR34 == VAR41)
                            VAR74 += VAR18;
                        VAR77.VAR83 = VAR11->VAR84;
                        VAR77.VAR30 = VAR17;
                        VAR77.VAR22 = VAR18;
                        VAR77.VAR28 = VAR8->VAR28 + VAR70[VAR2->VAR65];
                        VAR77.VAR25 = VAR8->VAR25 + VAR70[VAR2->VAR65];
                        VAR77.VAR80 = VAR8->VAR80;
                        FUN15(VAR10, &VAR77);
                        VAR11->VAR32->VAR33.VAR85++;
                        VAR11->VAR85++;
                    }
                }
            }
        FUN16(VAR24);
    }
VAR45:
    if (VAR8 == NULL)
    {
        for (VAR16 = 0; VAR16 < VAR6; VAR16++)
        {
            VAR11 = VAR5[VAR16];
            if (VAR11->VAR63 == VAR3)
            {
                VAR86 *VAR87 = &VAR11->VAR32->VAR33;
                VAR10 = VAR64[VAR11->VAR65];
                if (VAR11->VAR32->VAR33.VAR34 == VAR35 && VAR87->VAR62 <= 1)
                    continue;
                if (VAR11->VAR32->VAR33.VAR34 == VAR41 && (VAR10->VAR88->VAR80 & VAR89))
                    continue;
                if (VAR11->VAR71)
                {
                    for (;;)
                    {
                        AVPacket VAR8;
                        FUN14(&VAR8);
                        VAR8.VAR83 = VAR11->VAR84;
                        switch (VAR11->VAR32->VAR33.VAR34)
                        {
                        case VAR35:
                            VAR15 = FUN17(VAR87, VAR90, VAR91, NULL);
                            VAR82 += VAR15;
                            VAR8.VAR80 |= VAR81;
                            break;
                        case VAR41:
                            VAR15 = FUN18(VAR87, VAR90, VAR91, NULL);
                            VAR74 += VAR15;
                            if (VAR87->VAR78 && VAR87->VAR78->VAR79)
                                VAR8.VAR80 |= VAR81;
                            if (VAR11->VAR92 && VAR87->VAR93)
                            {
                                fprintf(VAR11->VAR92, "", VAR87->VAR93);
                            }
                            break;
                        default:
                            VAR15 = -1;
                        }
                        if (VAR15 <= 0)
                            break;
                        VAR8.VAR30 = VAR90;
                        VAR8.VAR22 = VAR15;
                        if (VAR87->VAR78)
                            VAR8.VAR28 = VAR87->VAR78->VAR28;
                        FUN15(VAR10, &VAR8);
                    }
                }
            }
        }
    }
    return 0;
VAR36:
    return -1;
}