static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7, VAR8;
    VAR9 *VAR10, *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18 = 0;
    int64_t VAR19;
    int VAR20;
    if (!(VAR17 = FUN2(VAR6)))
        FUN3(1);
    VAR7 = FUN4(VAR2, VAR3, VAR5, VAR6);
    if (VAR7 < 0)
        goto VAR21;
    if (!VAR22)
    {
        FUN5(NULL, VAR23, "");
    }
    VAR19 = FUN6();
    for (; VAR24 == 0;)
    {
        int VAR25, VAR26;
        AVPacket VAR27;
        int64_t VAR28;
        double VAR29;
        int64_t VAR30 = FUN6();
        VAR28 = VAR31;
        VAR29 = 1e100;
        if (!VAR22)
        {
            static int64_t VAR32;
            if (VAR33)
                break;
            if (VAR30 - VAR32 >= 100000 && !VAR34)
            {
                VAR20 = FUN7();
                VAR32 = VAR30;
            }
            else
                VAR20 = -1;
            if (VAR20 == '')
                break;
            if (VAR20 == '')
                FUN8(FUN9() + 10);
            if (VAR20 == '')
                FUN8(FUN9() - 10);
            if (VAR20 == '')
                VAR35 ^= 1;
            if (VAR20 == '')
            {
                if (VAR36)
                {
                    VAR36 = VAR37 = 0;
                }
                else if (VAR37)
                {
                    VAR36 = 1;
                }
                else
                    VAR37 = 1;
                FUN8(VAR38);
            }
            if (VAR20 == '' || VAR20 == '')
            {
                char VAR39[4096], VAR40[64], VAR41[256], VAR42[256] = {0};
                double VAR43;
                int VAR44, VAR45 = 0;
                fprintf(VAR46, "");
                VAR8 = 0;
                while ((VAR44 = FUN7()) != '' && VAR44 != '' && VAR8 < sizeof(VAR39) - 1)
                    if (VAR44 > 0)
                        VAR39[VAR8++] = VAR44;
                VAR39[VAR8] = 0;
                if (VAR44 > 0 && (VAR45 = sscanf(VAR39, "", VAR40, &VAR43, VAR41, VAR42)) >= 3)
                {
                    FUN5(NULL, VAR38, "", VAR40, VAR43, VAR41, VAR42);
                    for (VAR8 = 0; VAR8 < VAR47; VAR8++)
                    {
                        VAR13 = &VAR48[VAR8];
                        if (VAR13->VAR49)
                        {
                            if (VAR43 < 0)
                            {
                                VAR7 = FUN10(VAR13->VAR49, VAR40, VAR41, VAR42, VAR39, sizeof(VAR39), VAR20 == '' ? VAR50 : 0);
                                fprintf(VAR46, "", VAR8, VAR7, VAR39);
                            }
                            else
                            {
                                VAR7 = FUN11(VAR13->VAR49, VAR40, VAR41, VAR42, 0, VAR43);
                            }
                        }
                    }
                }
                else
                {
                    FUN5(NULL, VAR51, ""
                                               "",
                           VAR45, VAR39);
                }
            }
            if (VAR20 == '' || VAR20 == '')
            {
                int VAR52 = 0;
                if (VAR20 == '')
                {
                    VAR52 = VAR53[0].VAR54->VAR55->VAR52 << 1;
                    if (!VAR52)
                        VAR52 = 1;
                    while (VAR52 & (VAR56 | VAR57 | VAR58))
                        VAR52 += VAR52;
                }
                else if (scanf("", &VAR52) != 1)
                    fprintf(VAR46, "");
                for (VAR8 = 0; VAR8 < VAR59; VAR8++)
                {
                    VAR53[VAR8].VAR54->VAR55->VAR52 = VAR52;
                }
                for (VAR8 = 0; VAR8 < VAR47; VAR8++)
                {
                    VAR13 = &VAR48[VAR8];
                    VAR13->VAR54->VAR55->VAR52 = VAR52;
                }
                if (VAR52)
                    FUN8(VAR38);
                fprintf(VAR46, "", VAR52);
            }
            if (VAR20 == '')
            {
                fprintf(VAR46, ""
                                ""
                                ""
                                ""
                                ""
                                ""
                                ""
                                ""
                                "");
            }
        }
        VAR25 = -1;
        for (VAR8 = 0; VAR8 < VAR47; VAR8++)
        {
            VAR1 *VAR60;
            int64_t VAR61;
            double VAR62;
            VAR13 = &VAR48[VAR8];
            VAR60 = &VAR2[VAR13->VAR25];
            VAR11 = VAR2[VAR13->VAR25].VAR63;
            VAR15 = &VAR53[VAR13->VAR64];
            if (VAR13->VAR65 || VAR17[VAR15->VAR25] || (VAR11->VAR66 && FUN12(VAR11->VAR66) >= VAR60->VAR67))
                continue;
            VAR62 = VAR13->VAR54->VAR68.VAR69 * FUN13(VAR13->VAR54->VAR70);
            VAR61 = VAR15->VAR68;
            if (!VAR5[VAR15->VAR25].VAR71)
            {
                if (VAR61 < VAR28)
                {
                    VAR28 = VAR61;
                    if (VAR72)
                        VAR25 = VAR15->VAR25;
                }
                if (VAR62 < VAR29)
                {
                    VAR29 = VAR62;
                    if (!VAR72)
                        VAR25 = VAR15->VAR25;
                }
            }
            if (VAR13->VAR73 >= VAR13->VAR74)
            {
                int VAR75;
                for (VAR75 = 0; VAR75 < VAR60->VAR63->VAR76; VAR75++)
                    VAR48[VAR60->VAR77 + VAR75].VAR65 = 1;
                continue;
            }
        }
        if (VAR25 < 0)
        {
            if (VAR18)
            {
                VAR18 = 0;
                memset(VAR17, 0, VAR6);
                FUN14(10000);
                continue;
            }
            break;
        }
        VAR10 = VAR5[VAR25].VAR63;
        VAR7 = FUN15(VAR10, &VAR27);
        if (VAR7 == FUN16(VAR78))
        {
            VAR17[VAR25] = 1;
            VAR18++;
            continue;
        }
        if (VAR7 < 0)
        {
            VAR5[VAR25].VAR71 = 1;
            if (VAR79)
                break;
            else
                continue;
        }
        VAR18 = 0;
        memset(VAR17, 0, VAR6);
        if (VAR37)
        {
            FUN17(NULL, VAR38, &VAR27, VAR36, VAR10->VAR80[VAR27.VAR81]);
        }
        if (VAR27.VAR81 >= VAR5[VAR25].VAR76)
            goto VAR82;
        VAR26 = VAR5[VAR25].VAR26 + VAR27.VAR81;
        VAR15 = &VAR53[VAR26];
        if (VAR15->VAR83)
            goto VAR82;
        if (VAR27.VAR84 != VAR85)
            VAR27.VAR84 += FUN18(VAR5[VAR15->VAR25].VAR86, VAR87, VAR15->VAR54->VAR70);
        if (VAR27.VAR68 != VAR85)
            VAR27.VAR68 += FUN18(VAR5[VAR15->VAR25].VAR86, VAR87, VAR15->VAR54->VAR70);
        if (VAR27.VAR68 != VAR85)
            VAR27.VAR68 *= VAR15->VAR88;
        if (VAR27.VAR84 != VAR85)
            VAR27.VAR84 *= VAR15->VAR88;
        if (VAR27.VAR84 != VAR85 && VAR15->VAR89 != VAR85 && !VAR90)
        {
            int64_t VAR91 = FUN18(VAR27.VAR84, VAR15->VAR54->VAR70, VAR87);
            int64_t VAR92 = VAR91 - VAR15->VAR89;
            if (VAR10->VAR93->VAR94 & VAR95)
            {
                if (VAR92 < -1LL * VAR96 * VAR97 || (VAR92 > 1LL * VAR96 * VAR97 && VAR15->VAR54->VAR55->VAR98 != VAR99) || VAR91 + 1 < VAR15->VAR68)
                {
                    VAR5[VAR15->VAR25].VAR86 -= VAR92;
                    FUN5(NULL, VAR38, "" VAR100 "" VAR100 "", VAR92, VAR5[VAR15->VAR25].VAR86);
                    VAR27.VAR84 -= FUN18(VAR92, VAR87, VAR15->VAR54->VAR70);
                    if (VAR27.VAR68 != VAR85)
                        VAR27.VAR68 -= FUN18(VAR92, VAR87, VAR15->VAR54->VAR70);
                }
            }
            else
            {
                if (VAR92 < -1LL * VAR101 * VAR97 || (VAR92 > 1LL * VAR101 * VAR97 && VAR15->VAR54->VAR55->VAR98 != VAR99) || VAR91 + 1 < VAR15->VAR68)
                {
                    FUN5(NULL, VAR102, "" VAR100 "" VAR100 "", VAR27.VAR84, VAR15->VAR89, VAR27.VAR81);
                    VAR27.VAR84 = VAR85;
                }
                if (VAR27.VAR68 != VAR85)
                {
                    int64_t VAR103 = FUN18(VAR27.VAR68, VAR15->VAR54->VAR70, VAR87);
                    VAR92 = VAR103 - VAR15->VAR89;
                    if (VAR92 < -1LL * VAR101 * VAR97 || (VAR92 > 1LL * VAR101 * VAR97 && VAR15->VAR54->VAR55->VAR98 != VAR99))
                    {
                        FUN5(NULL, VAR102, "" VAR100 "" VAR100 "", VAR27.VAR68, VAR15->VAR89, VAR27.VAR81);
                        VAR27.VAR68 = VAR85;
                    }
                }
            }
        }
        if (FUN19(VAR15, VAR48, VAR47, &VAR27) < 0)
        {
            FUN5(NULL, VAR51, "", VAR15->VAR25, VAR15->VAR54->VAR104);
            if (VAR105)
                FUN3(1);
            FUN20(&VAR27);
            continue;
        }
    VAR82:
        FUN20(&VAR27);
        FUN21(VAR2, VAR48, VAR47, 0, VAR19, VAR30);
    }
    for (VAR8 = 0; VAR8 < VAR59; VAR8++)
    {
        VAR15 = &VAR53[VAR8];
        if (VAR15->VAR106)
        {
            FUN19(VAR15, VAR48, VAR47, NULL);
        }
    }
    FUN22(VAR48, VAR47);
    FUN23();
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        VAR11 = VAR2[VAR8].VAR63;
        FUN24(VAR11);
    }
    FUN21(VAR2, VAR48, VAR47, 1, VAR19, FUN6());
    for (VAR8 = 0; VAR8 < VAR47; VAR8++)
    {
        VAR13 = &VAR48[VAR8];
        if (VAR13->VAR107)
        {
            FUN25(&VAR13->VAR54->VAR55->VAR108);
            FUN26(VAR13->VAR54->VAR55);
        }
        FUN27(&VAR13->VAR49);
    }
    for (VAR8 = 0; VAR8 < VAR59; VAR8++)
    {
        VAR15 = &VAR53[VAR8];
        if (VAR15->VAR106)
        {
            FUN26(VAR15->VAR54->VAR55);
        }
    }
    VAR7 = 0;
VAR21:
    FUN25(&VAR17);
    if (VAR48)
    {
        for (VAR8 = 0; VAR8 < VAR47; VAR8++)
        {
            VAR13 = &VAR48[VAR8];
            if (VAR13)
            {
                if (VAR13->VAR109)
                    FUN25(&VAR13->VAR54->VAR55->VAR110);
                if (VAR13->VAR111)
                {
                    fclose(VAR13->VAR111);
                    VAR13->VAR111 = NULL;
                }
                FUN28(VAR13->VAR112);
                FUN25(&VAR13->VAR54->VAR55->VAR113);
                FUN29(VAR13->VAR114.VAR115[0]);
                FUN29(VAR13->VAR116);
                if (VAR13->VAR117)
                    FUN30(VAR13->VAR118);
                FUN31(&VAR13->VAR119);
                FUN32(&VAR13->VAR62);
            }
        }
    }
    return VAR7;
}