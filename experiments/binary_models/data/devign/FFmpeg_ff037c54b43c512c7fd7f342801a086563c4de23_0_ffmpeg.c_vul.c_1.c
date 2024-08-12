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
        if (VAR23 >= 0)
            fprintf(VAR24, "");
        FUN5(VAR25);
    }
    FUN6();
    VAR19 = FUN7();
    for (; VAR26 == 0;)
    {
        int VAR27, VAR28;
        AVPacket VAR29;
        int64_t VAR30;
        double VAR31;
    VAR32:
        VAR30 = VAR33;
        VAR31 = 1e100;
        if (!VAR22)
        {
            if (VAR34)
                break;
            VAR20 = FUN8();
            if (VAR20 == '')
                break;
            if (VAR20 == '')
                VAR23++;
            if (VAR20 == '')
                VAR23--;
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
                FUN9(VAR38);
            }
            if (VAR20 == '' || VAR20 == '')
            {
                char VAR7[4096], VAR39[64], VAR40[256], VAR41[256] = {0};
                double VAR42;
                fprintf(VAR24, "");
                if (scanf("", VAR7) == 1 && sscanf(VAR7, "", VAR39, &VAR42, VAR40, VAR41) >= 3)
                {
                    for (VAR8 = 0; VAR8 < VAR43; VAR8++)
                    {
                        int VAR44;
                        VAR13 = &VAR45[VAR8];
                        if (VAR13->VAR46)
                        {
                            if (VAR42 < 0)
                            {
                                VAR44 = FUN10(VAR13->VAR46, VAR39, VAR40, VAR41, VAR7, sizeof(VAR7), VAR20 == '' ? VAR47 : 0);
                                fprintf(VAR24, "", VAR8, VAR44, VAR7);
                            }
                            else
                            {
                                VAR44 = FUN11(VAR13->VAR46, VAR39, VAR40, VAR41, 0, VAR42);
                            }
                        }
                    }
                }
                else
                {
                    fprintf(VAR24, "");
                }
            }
            if (VAR20 == '' || VAR20 == '')
            {
                int VAR48 = 0;
                if (VAR20 == '')
                {
                    VAR48 = VAR49[0].VAR50->VAR51->VAR48 << 1;
                    if (!VAR48)
                        VAR48 = 1;
                    while (VAR48 & (VAR52 | VAR53 | VAR54))
                        VAR48 += VAR48;
                }
                else
                    scanf("", &VAR48);
                for (VAR8 = 0; VAR8 < VAR55; VAR8++)
                {
                    VAR49[VAR8].VAR50->VAR51->VAR48 = VAR48;
                }
                for (VAR8 = 0; VAR8 < VAR43; VAR8++)
                {
                    VAR13 = &VAR45[VAR8];
                    VAR13->VAR50->VAR51->VAR48 = VAR48;
                }
                if (VAR48)
                    FUN9(VAR38);
                fprintf(VAR24, "", VAR48);
            }
            if (VAR20 == '')
            {
                fprintf(VAR24, ""
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
        VAR27 = -1;
        for (VAR8 = 0; VAR8 < VAR43; VAR8++)
        {
            VAR1 *VAR56;
            int64_t VAR57;
            double VAR58;
            VAR13 = &VAR45[VAR8];
            VAR56 = &VAR2[VAR13->VAR27];
            VAR11 = VAR2[VAR13->VAR27].VAR59;
            VAR15 = &VAR49[VAR13->VAR60];
            if (VAR13->VAR61 || VAR17[VAR15->VAR27] || (VAR11->VAR62 && FUN12(VAR11->VAR62) >= VAR56->VAR63))
                continue;
            VAR58 = VAR13->VAR50->VAR64.VAR65 * FUN13(VAR13->VAR50->VAR66);
            VAR57 = VAR15->VAR64;
            if (!VAR5[VAR15->VAR27].VAR67)
            {
                if (VAR57 < VAR30)
                {
                    VAR30 = VAR57;
                    if (VAR68)
                        VAR27 = VAR15->VAR27;
                }
                if (VAR58 < VAR31)
                {
                    VAR31 = VAR58;
                    if (!VAR68)
                        VAR27 = VAR15->VAR27;
                }
            }
            if (VAR13->VAR69 >= VAR70[VAR13->VAR50->VAR51->VAR71])
            {
                VAR27 = -1;
                break;
            }
        }
        if (VAR27 < 0)
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
        VAR10 = VAR5[VAR27].VAR59;
        VAR7 = FUN15(VAR10, &VAR29);
        if (VAR7 == FUN16(VAR72))
        {
            VAR17[VAR27] = 1;
            VAR18++;
            continue;
        }
        if (VAR7 < 0)
        {
            VAR5[VAR27].VAR67 = 1;
            if (VAR73)
                break;
            else
                continue;
        }
        VAR18 = 0;
        memset(VAR17, 0, VAR6);
        if (VAR37)
        {
            FUN17(NULL, VAR38, &VAR29, VAR36, VAR10->VAR74[VAR29.VAR75]);
        }
        if (VAR29.VAR75 >= VAR5[VAR27].VAR76)
            goto VAR77;
        VAR28 = VAR5[VAR27].VAR28 + VAR29.VAR75;
        VAR15 = &VAR49[VAR28];
        if (VAR15->VAR78)
            goto VAR77;
        if (VAR29.VAR79 != VAR80)
            VAR29.VAR79 += FUN18(VAR5[VAR15->VAR27].VAR81, VAR82, VAR15->VAR50->VAR66);
        if (VAR29.VAR64 != VAR80)
            VAR29.VAR64 += FUN18(VAR5[VAR15->VAR27].VAR81, VAR82, VAR15->VAR50->VAR66);
        if (VAR15->VAR83)
        {
            if (VAR29.VAR64 != VAR80)
                VAR29.VAR64 *= VAR15->VAR83;
            if (VAR29.VAR79 != VAR80)
                VAR29.VAR79 *= VAR15->VAR83;
        }
        if (VAR29.VAR79 != VAR80 && VAR15->VAR84 != VAR80 && (VAR10->VAR85->VAR86 & VAR87))
        {
            int64_t VAR88 = FUN18(VAR29.VAR79, VAR15->VAR50->VAR66, VAR82);
            int64_t VAR89 = VAR88 - VAR15->VAR84;
            if ((VAR89 < -1LL * VAR90 * VAR91 || (VAR89 > 1LL * VAR90 * VAR91 && VAR15->VAR50->VAR51->VAR71 != VAR92) || VAR88 + 1 < VAR15->VAR64) && !VAR93)
            {
                VAR5[VAR15->VAR27].VAR81 -= VAR89;
                if (VAR23 > 2)
                    fprintf(VAR24, "" VAR94 "" VAR94 "", VAR89, VAR5[VAR15->VAR27].VAR81);
                VAR29.VAR79 -= FUN18(VAR89, VAR82, VAR15->VAR50->VAR66);
                if (VAR29.VAR64 != VAR80)
                    VAR29.VAR64 -= FUN18(VAR89, VAR82, VAR15->VAR50->VAR66);
            }
        }
        if (FUN19(VAR15, VAR28, VAR45, VAR43, &VAR29) < 0)
        {
            if (VAR23 >= 0)
                fprintf(VAR24, "", VAR15->VAR27, VAR15->VAR50->VAR95);
            if (VAR96)
                FUN3(1);
            FUN20(&VAR29);
            goto VAR32;
        }
    VAR77:
        FUN20(&VAR29);
        FUN21(VAR2, VAR45, VAR43, 0, VAR19);
    }
    for (VAR8 = 0; VAR8 < VAR55; VAR8++)
    {
        VAR15 = &VAR49[VAR8];
        if (VAR15->VAR97)
        {
            FUN19(VAR15, VAR8, VAR45, VAR43, NULL);
        }
    }
    FUN22(VAR45, VAR43);
    FUN23();
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        VAR11 = VAR2[VAR8].VAR59;
        FUN24(VAR11);
    }
    FUN21(VAR2, VAR45, VAR43, 1, VAR19);
    for (VAR8 = 0; VAR8 < VAR43; VAR8++)
    {
        VAR13 = &VAR45[VAR8];
        if (VAR13->VAR98)
        {
            FUN25(&VAR13->VAR50->VAR51->VAR99);
            FUN26(VAR13->VAR50->VAR51);
        }
        FUN27(&VAR13->VAR46);
    }
    for (VAR8 = 0; VAR8 < VAR55; VAR8++)
    {
        VAR15 = &VAR49[VAR8];
        if (VAR15->VAR97)
        {
            FUN26(VAR15->VAR50->VAR51);
        }
    }
    VAR7 = 0;
VAR21:
    FUN25(&VAR100);
    FUN25(&VAR17);
    if (VAR45)
    {
        for (VAR8 = 0; VAR8 < VAR43; VAR8++)
        {
            VAR13 = &VAR45[VAR8];
            if (VAR13)
            {
                if (VAR13->VAR50->VAR101)
                    FUN25(&VAR13->VAR50->VAR51->VAR102);
                if (VAR13->VAR103)
                {
                    fclose(VAR13->VAR103);
                    VAR13->VAR103 = NULL;
                }
                FUN28(VAR13->VAR104);
                FUN25(&VAR13->VAR50->VAR51->VAR105);
                FUN29(VAR13->VAR106.VAR107[0]);
                FUN29(VAR13->VAR108);
                if (VAR13->VAR109)
                    FUN30(VAR13->VAR110);
                if (VAR13->VAR111)
                    FUN31(VAR13->VAR111);
                if (VAR13->VAR112)
                    FUN32(VAR13->VAR112);
                FUN33(&VAR13->VAR58);
            }
        }
    }
    return VAR7;
}