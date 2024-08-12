static int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5, int VAR6, const VAR7 *VAR8)
{
    VAR9 *VAR10;
    VAR4 *VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16;
    VAR12 *VAR17;
    int VAR18, VAR19;
    AVFrame VAR20;
    short VAR21[VAR22 / 2];
    void *VAR23;
    if (VAR8 && VAR8->VAR24 != VAR25)
    {
        VAR2->VAR26 = VAR2->VAR24 = VAR8->VAR27;
    }
    else
    {
        VAR2->VAR24 = VAR2->VAR26;
    }
    if (VAR8 == NULL)
    {
        VAR13 = NULL;
        VAR14 = 0;
        goto VAR28;
    }
    VAR14 = VAR8->VAR29;
    VAR13 = VAR8->VAR30;
    while (VAR14 > 0)
    {
    VAR28:
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
                VAR2->VAR26 += ((VAR37)VAR38 / 2 * VAR18) / (VAR2->VAR32->VAR33.VAR39 * VAR2->VAR32->VAR33.VAR40);
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
                    VAR2->VAR26 += ((VAR37)VAR38 * VAR2->VAR32->VAR33.VAR46) / VAR2->VAR32->VAR33.VAR47;
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
        VAR23 = NULL;
        if (VAR2->VAR32->VAR33.VAR34 == VAR41)
        {
            FUN5(VAR2, (VAR48 *)&VAR20, &VAR23);
        }
        if (VAR2->VAR32->VAR33.VAR49)
        {
            int64_t VAR24 = FUN6((VAR37)VAR2->VAR50 * VAR2->VAR32->VAR33.VAR46, 1000000, VAR2->VAR32->VAR33.VAR47);
            int64_t VAR51 = FUN7() - VAR2->VAR52;
            if (VAR24 > VAR51)
                FUN8(VAR24 - VAR51);
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
        if (VAR61 == 0 || VAR2->VAR24 >= VAR61)
            for (VAR16 = 0; VAR16 < VAR6; VAR16++)
            {
                int VAR62;
                VAR11 = VAR5[VAR16];
                if (VAR11->VAR63 == VAR3)
                {
                    VAR10 = VAR64[VAR11->VAR65];
                    FUN9("", VAR16, (double)VAR8->VAR24 / VAR38, ((double)VAR2->VAR24 / VAR38) - ((double)VAR11->VAR32->VAR24.VAR60 * VAR11->VAR66.VAR67 / VAR11->VAR66.VAR68));
                    VAR11->VAR69 = (double)VAR2->VAR24 / VAR38;
                    if (VAR11->VAR70)
                    {
                        switch (VAR11->VAR32->VAR33.VAR34)
                        {
                        case VAR35:
                            FUN10(VAR10, VAR11, VAR2, VAR17, VAR18);
                            break;
                        case VAR41:
                        {
                            int VAR16;
                            VAR4 *VAR71, *VAR72;
                            VAR71 = NULL;
                            for (VAR16 = 0; VAR16 < VAR6; VAR16++)
                            {
                                VAR72 = VAR5[VAR16];
                                if (VAR72->VAR65 == VAR11->VAR65 && VAR72->VAR32->VAR33.VAR34 == VAR35)
                                {
                                    VAR71 = VAR72;
                                    break;
                                }
                            }
                            FUN11(VAR10, VAR11, VAR2, &VAR20, &VAR62, VAR71);
                            VAR73 += VAR62;
                            if (VAR74 && VAR62)
                                FUN12(VAR10, VAR11, VAR62);
                        }
                        break;
                        default:
                            FUN13();
                        }
                    }
                    else
                    {
                        AVFrame VAR75;
                        AVPacket VAR76;
                        FUN14(&VAR76);
                        FUN3(&VAR75);
                        VAR11->VAR32->VAR33.VAR77 = &VAR75;
                        VAR75.VAR78 = VAR8->VAR79 & VAR80;
                        if (VAR11->VAR32->VAR33.VAR34 == VAR35)
                            VAR81 += VAR18;
                        else if (VAR11->VAR32->VAR33.VAR34 == VAR41)
                            VAR73 += VAR18;
                        VAR76.VAR82 = VAR11->VAR83;
                        VAR76.VAR30 = VAR17;
                        VAR76.VAR29 = VAR18;
                        VAR76.VAR24 = VAR8->VAR24;
                        VAR76.VAR27 = VAR8->VAR27;
                        VAR76.VAR79 = VAR8->VAR79;
                        FUN15(VAR10, &VAR76);
                        VAR11->VAR32->VAR33.VAR84++;
                        VAR11->VAR84++;
                    }
                }
            }
        FUN16(VAR23);
    }
VAR45:
    return 0;
VAR36:
    return -1;
}