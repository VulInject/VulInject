int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    AVPacket VAR10, *VAR11;
    int64_t VAR12 = FUN2(VAR2->VAR13);
    struct
    {
        int64_t VAR14;
        int64_t VAR15;
        int VAR16;
        double VAR17[VAR18];
        int64_t VAR19;
    } VAR20[VAR21] = {{0}};
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR23 *VAR24;
        VAR9 = VAR2->VAR25[VAR3];
        if (VAR9->VAR24->VAR26 == VAR27)
        {
            VAR9->VAR24->VAR28 = 0;
            VAR9->VAR24->VAR29 = 0;
            VAR9->VAR24->VAR30 = 0;
        }
        if (VAR9->VAR24->VAR31 == VAR32)
        {
            if (!VAR9->VAR24->VAR33.VAR34)
                VAR9->VAR24->VAR33 = VAR9->VAR33;
        }
        if (!VAR9->VAR35 && !(VAR2->VAR36 & VAR37))
        {
            VAR9->VAR35 = FUN3(VAR9->VAR24->VAR26);
            if (VAR9->VAR38 == VAR39 && VAR9->VAR35)
            {
                VAR9->VAR35->VAR36 |= VAR40;
            }
        }
        assert(!VAR9->VAR24->VAR24);
        VAR24 = FUN4(VAR9->VAR24->VAR26);
        if (VAR24 && VAR24->VAR41 & VAR42)
            VAR9->VAR24->VAR30 = 0;
        if (!FUN5(VAR9->VAR24))
        {
            if (VAR24)
                FUN6(VAR9->VAR24, VAR24);
        }
    }
    for (VAR3 = 0; VAR3 < VAR21; VAR3++)
    {
        VAR20[VAR3].VAR14 = VAR43;
    }
    VAR4 = 0;
    VAR6 = 0;
    for (;;)
    {
        if (FUN7())
        {
            VAR5 = FUN8(VAR44);
            FUN9(VAR2, VAR45, "");
            break;
        }
        for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
        {
            VAR9 = VAR2->VAR25[VAR3];
            if (!FUN5(VAR9->VAR24))
                break;
            if (FUN10(VAR9->VAR24) && !(VAR9->VAR46.VAR34 && VAR9->VAR47.VAR34) && VAR20[VAR3].VAR16 < 20 && VAR9->VAR24->VAR31 == VAR32)
                break;
            if (VAR9->VAR35 && VAR9->VAR35->VAR35->VAR48 && !VAR9->VAR24->VAR49)
                break;
            if (VAR9->VAR50 == VAR43)
                break;
        }
        if (VAR3 == VAR2->VAR22)
        {
            if (!(VAR2->VAR51 & VAR52))
            {
                VAR5 = VAR4;
                FUN9(VAR2, VAR45, "");
                break;
            }
        }
        if (VAR6 >= VAR2->VAR53)
        {
            VAR5 = VAR4;
            FUN9(VAR2, VAR45, "", VAR2->VAR53);
            break;
        }
        VAR5 = FUN11(VAR2, &VAR10);
        if (VAR5 == FUN8(VAR54))
            continue;
        if (VAR5 < 0)
        {
            VAR5 = -1;
            for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
            {
                VAR9 = VAR2->VAR25[VAR3];
                if (!FUN5(VAR9->VAR24))
                {
                    char VAR55[256];
                    FUN12(VAR55, sizeof(VAR55), VAR9->VAR24, 0);
                    FUN9(VAR2, VAR56, "", VAR55);
                }
                else
                {
                    VAR5 = 0;
                }
            }
            break;
        }
        VAR11 = FUN13(&VAR2->VAR57, &VAR10, &VAR2->VAR58);
        if (FUN14(VAR11) < 0)
        {
            return FUN8(VAR59);
        }
        VAR6 += VAR11->VAR60;
        VAR9 = VAR2->VAR25[VAR11->VAR61];
        if (VAR9->VAR62 > 1)
        {
            if (VAR9->VAR33.VAR63 > 0 && FUN15(VAR20[VAR9->VAR64].VAR19, VAR9->VAR33, VAR65) >= VAR2->VAR66)
            {
                FUN9(VAR2, VAR56, "");
                break;
            }
            VAR20[VAR9->VAR64].VAR19 += VAR11->VAR67;
        }
        {
            int VAR64 = VAR11->VAR61;
            int64_t VAR68 = VAR20[VAR64].VAR14;
            int64_t VAR67 = VAR11->VAR69 - VAR68;
            if (VAR11->VAR69 != VAR43 && VAR68 != VAR43 && VAR67 > 0)
            {
                double VAR70 = VAR67 * FUN16(VAR9->VAR33);
                if (VAR20[VAR64].VAR16 < 2)
                    memset(VAR20[VAR64].VAR17, 0, sizeof(VAR20[VAR64].VAR17));
                for (VAR3 = 1; VAR3 < VAR18; VAR3++)
                {
                    int VAR71 = FUN17(VAR3);
                    int VAR72 = FUN18(VAR70 * VAR71 / (1001 * 12));
                    double VAR73 = VAR70 - VAR72 * 1001 * 12 / (double)VAR71;
                    VAR20[VAR64].VAR17[VAR3] += VAR73 * VAR73;
                }
                VAR20[VAR64].VAR16++;
                if (VAR20[VAR64].VAR16 > 3)
                    VAR20[VAR64].VAR15 = FUN19(VAR20[VAR64].VAR15, VAR67);
            }
            if (VAR68 == VAR43 || VAR20[VAR64].VAR16 <= 1)
                VAR20[VAR11->VAR61].VAR14 = VAR11->VAR69;
        }
        if (VAR9->VAR35 && VAR9->VAR35->VAR35->VAR48 && !VAR9->VAR24->VAR49)
        {
            int VAR3 = VAR9->VAR35->VAR35->FUN20(VAR9->VAR24, VAR11->VAR74, VAR11->VAR60);
            if (VAR3)
            {
                VAR9->VAR24->VAR75 = VAR3;
                VAR9->VAR24->VAR49 = FUN21(VAR9->VAR24->VAR75 + VAR76);
                memcpy(VAR9->VAR24->VAR49, VAR11->VAR74, VAR9->VAR24->VAR75);
                memset(VAR9->VAR24->VAR49 + VAR3, 0, VAR76);
            }
        }
        if (!FUN5(VAR9->VAR24) || !FUN22(VAR9))
            FUN23(VAR9, VAR11);
        VAR9->VAR62++;
        VAR4++;
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR25[VAR3];
        if (VAR9->VAR24->VAR24)
            FUN24(VAR9->VAR24);
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR25[VAR3];
        if (VAR9->VAR62 > 2 && !VAR9->VAR47.VAR34 && VAR20[VAR3].VAR19)
            FUN25(&VAR9->VAR47.VAR34, &VAR9->VAR47.VAR63, (VAR9->VAR62 - 2) * (VAR77)VAR9->VAR33.VAR63, VAR20[VAR3].VAR19 * (VAR77)VAR9->VAR33.VAR34, 60000);
        if (VAR9->VAR24->VAR31 == VAR32)
        {
            if (VAR9->VAR24->VAR26 == VAR78 && !VAR9->VAR24->VAR79 && !VAR9->VAR24->VAR80)
                VAR9->VAR24->VAR79 = FUN26(VAR9->VAR24->VAR81);
            if (FUN10(VAR9->VAR24) && VAR20[VAR3].VAR16 > 15 && VAR20[VAR3].VAR15 > 1 && !VAR9->VAR46.VAR34)
                FUN25(&VAR9->VAR46.VAR34, &VAR9->VAR46.VAR63, VAR9->VAR33.VAR63, VAR9->VAR33.VAR34 * VAR20[VAR3].VAR15, VAR82);
            if (VAR20[VAR3].VAR16 && !VAR9->VAR46.VAR34 && FUN10(VAR9->VAR24))
            {
                int VAR34 = 0;
                double VAR83 = 2 * FUN16(VAR9->VAR33);
                VAR83 = VAR83 * VAR83 * VAR20[VAR3].VAR16 * 1000 * 12 * 30;
                for (VAR7 = 1; VAR7 < VAR18; VAR7++)
                {
                    double VAR73 = VAR20[VAR3].VAR17[VAR7] * FUN17(VAR7);
                    if (VAR73 < VAR83)
                    {
                        VAR83 = VAR73;
                        VAR34 = FUN17(VAR7);
                    }
                }
                if (VAR34 && (!VAR9->VAR46.VAR34 || (double)VAR34 / (12 * 1001) < 1.01 * FUN16(VAR9->VAR46)))
                    FUN25(&VAR9->VAR46.VAR34, &VAR9->VAR46.VAR63, VAR34, 12 * 1001, VAR82);
            }
            if (!VAR9->VAR46.VAR34)
            {
                if (VAR9->VAR24->VAR33.VAR63 * (VAR77)VAR9->VAR33.VAR34 <= VAR9->VAR24->VAR33.VAR34 * VAR9->VAR24->VAR84 * (VAR77)VAR9->VAR33.VAR63)
                {
                    VAR9->VAR46.VAR34 = VAR9->VAR24->VAR33.VAR63;
                    VAR9->VAR46.VAR63 = VAR9->VAR24->VAR33.VAR34 * VAR9->VAR24->VAR84;
                }
                else
                {
                    VAR9->VAR46.VAR34 = VAR9->VAR33.VAR63;
                    VAR9->VAR46.VAR63 = VAR9->VAR33.VAR34;
                }
            }
        }
        else if (VAR9->VAR24->VAR31 == VAR85)
        {
            if (!VAR9->VAR24->VAR80)
                VAR9->VAR24->VAR80 = FUN27(VAR9->VAR24->VAR26);
        }
    }
    FUN28(VAR2, VAR12);
    FUN29(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        VAR9 = VAR2->VAR25[VAR3];
        if (VAR9->VAR24->VAR31 == VAR32)
        {
            if (VAR86 - VAR87)
            {
                VAR88 = &VAR2->VAR57;
                while (VAR89)
                {
                    if (VAR89->VAR61 != VAR3)
                        continue;
                    if (VAR89->VAR11->VAR69 < 0)
                        break;
                    if (VAR89->VAR11->VAR90 != VAR43)
                        break;
                    VAR89->VAR11->VAR69 -= VAR91;
                    VAR89 = VAR89->VAR92;
                }
                if (VAR89)
                    continue;
                VAR9->VAR93 -= VAR91;
            }
        }
    }
    return VAR5;
}