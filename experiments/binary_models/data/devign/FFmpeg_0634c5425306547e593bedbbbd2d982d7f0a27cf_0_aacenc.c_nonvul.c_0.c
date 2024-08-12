static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    float **VAR11 = VAR9->VAR12, *VAR13, *VAR14, *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    int VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
    int VAR31, VAR32, VAR33, VAR34;
    int VAR35 = 0, VAR36 = 0, VAR37 = 0, VAR38 = 0;
    int VAR39[4];
    FFPsyWindowInfo VAR40[VAR41];
    if (VAR9->VAR42 == 2)
        return 0;
    if (VAR6)
    {
        if ((VAR29 = FUN2(&VAR9->VAR43, VAR6)) < 0)
            return VAR29;
    }
    FUN3(VAR9, VAR6);
    if (VAR9->VAR44)
        FUN4(VAR9->VAR44, VAR9->VAR12, VAR9->VAR45);
    if (!VAR2->VAR46)
        return 0;
    VAR28 = 0;
    for (VAR22 = 0; VAR22 < VAR9->VAR47[0]; VAR22++)
    {
        VAR48 *VAR49 = VAR40 + VAR28;
        VAR27 = VAR9->VAR47[VAR22 + 1];
        VAR26 = VAR27 == VAR50 ? 2 : 1;
        VAR17 = &VAR9->VAR17[VAR22];
        for (VAR24 = 0; VAR24 < VAR26; VAR24++)
        {
            float VAR51;
            VAR19 = &VAR17->VAR24[VAR24];
            VAR21 = &VAR19->VAR21;
            VAR9->VAR52 = VAR28 + VAR24;
            VAR15 = &VAR11[VAR9->VAR52][0];
            VAR13 = VAR15 + 1024;
            VAR14 = VAR13 + (448 + 64);
            if (!VAR6)
                VAR14 = NULL;
            if (VAR27 == VAR53)
            {
                VAR49[VAR24].VAR54[0] = VAR55;
                VAR49[VAR24].VAR56 = 0;
                VAR49[VAR24].VAR57 = 1;
                VAR49[VAR24].VAR58[0] = 1;
                VAR21->VAR59 = VAR9->VAR60 >= 8 ? 1 : 3;
            }
            else
            {
                VAR49[VAR24] = VAR9->VAR61.VAR62->FUN5(&VAR9->VAR61, VAR13, VAR14, VAR9->VAR52, VAR21->VAR63[0]);
            }
            VAR21->VAR63[1] = VAR21->VAR63[0];
            VAR21->VAR63[0] = VAR49[VAR24].VAR54[0];
            VAR21->VAR64[1] = VAR21->VAR64[0];
            VAR21->VAR64[0] = VAR49[VAR24].VAR56;
            VAR21->VAR57 = VAR49[VAR24].VAR57;
            VAR21->VAR65 = VAR9->VAR61.VAR66[VAR21->VAR57 == 8];
            VAR21->VAR59 = VAR27 == VAR53 ? VAR21->VAR59 : VAR9->VAR61.VAR67[VAR21->VAR57 == 8];
            VAR21->VAR68 = FUN6(VAR21->VAR68, VAR21->VAR59);
            VAR21->VAR69 = VAR49[VAR24].VAR54[0] == VAR70 ? VAR71[VAR9->VAR60] : VAR72[VAR9->VAR60];
            VAR21->VAR73 = VAR49[VAR24].VAR54[0] == VAR70 ? VAR74[VAR9->VAR60] : VAR75[VAR9->VAR60];
            VAR51 = 0.0f;
            for (VAR25 = 0; VAR25 < VAR21->VAR57; VAR25++)
                VAR21->VAR76[VAR25] = VAR49[VAR24].VAR58[VAR25];
            for (VAR25 = 0; VAR25 < VAR21->VAR57; VAR25++)
            {
                if (VAR49[VAR24].VAR77[VAR25] > VAR78)
                {
                    VAR21->VAR79[VAR25] = 1;
                    VAR51 = FUN7(VAR51, VAR49[VAR24].VAR77[VAR25]);
                }
                else
                {
                    VAR21->VAR79[VAR25] = 0;
                }
            }
            if (VAR51 > VAR78)
            {
                VAR21->VAR51 = VAR78 / VAR51;
            }
            else
            {
                VAR21->VAR51 = 1.0f;
            }
            FUN8(VAR9, VAR19, VAR15);
            if (VAR9->VAR80.VAR81 && VAR9->VAR82->VAR83)
            {
                VAR9->VAR82->FUN9(VAR9, VAR19);
                VAR84[VAR19->VAR21.VAR63[0]](VAR9->VAR85, VAR19, &VAR19->VAR86[0]);
                VAR9->VAR87.FUN10(&VAR9->VAR87, VAR19->VAR88, VAR19->VAR89);
            }
            if (FUN11(VAR17->VAR24->VAR90[0]) || FUN11(VAR17->VAR24->VAR90[128]) || FUN11(VAR17->VAR24->VAR90[2 * 128]) || FUN11(VAR17->VAR24->VAR90[3 * 128]) || FUN11(VAR17->VAR24->VAR90[4 * 128]) || FUN11(VAR17->VAR24->VAR90[5 * 128]) || FUN11(VAR17->VAR24->VAR90[6 * 128]) || FUN11(VAR17->VAR24->VAR90[7 * 128]))
            {
                FUN12(VAR2, VAR91, "");
                return FUN13(VAR92);
            }
            FUN14(VAR9, VAR19);
        }
        VAR28 += VAR26;
    }
    if ((VAR29 = FUN15(VAR2, VAR4, 8192 * VAR9->VAR45, 0)) < 0)
        return VAR29;
    VAR30 = VAR23 = 0;
    do
    {
        FUN16(&VAR9->VAR93, VAR4->VAR94, VAR4->VAR95);
        if ((VAR2->VAR46 & 0xFF) == 1 && !(VAR2->VAR96 & VAR97))
            FUN17(VAR9, VAR98);
        VAR28 = 0;
        VAR31 = 0;
        memset(VAR39, 0, sizeof(VAR39));
        for (VAR22 = 0; VAR22 < VAR9->VAR47[0]; VAR22++)
        {
            VAR48 *VAR49 = VAR40 + VAR28;
            const float *VAR90[2];
            VAR27 = VAR9->VAR47[VAR22 + 1];
            VAR26 = VAR27 == VAR50 ? 2 : 1;
            VAR17 = &VAR9->VAR17[VAR22];
            VAR17->VAR99 = 0;
            memset(VAR17->VAR100, 0, sizeof(VAR17->VAR100));
            memset(VAR17->VAR101, 0, sizeof(VAR17->VAR101));
            FUN18(&VAR9->VAR93, 3, VAR27);
            FUN18(&VAR9->VAR93, 4, VAR39[VAR27]++);
            for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            {
                VAR19 = &VAR17->VAR24[VAR24];
                VAR90[VAR24] = VAR19->VAR90;
                VAR19->VAR21.VAR102 = 0;
                VAR19->VAR21.VAR81.VAR103 = 0;
                memset(VAR19->VAR21.VAR81.VAR104, 0, sizeof(VAR19->VAR21.VAR81.VAR104));
                memset(VAR19->VAR21.VAR105, 0, sizeof(VAR19->VAR21.VAR105));
                memset(&VAR19->VAR106, 0, sizeof(VAR107));
                for (VAR25 = 0; VAR25 < 128; VAR25++)
                    if (VAR19->VAR108[VAR25] > VAR109)
                        VAR19->VAR108[VAR25] = 0;
            }
            VAR9->VAR61.VAR110.VAR111 = -1;
            VAR9->VAR61.VAR110.VAR112 = VAR9->VAR113 / VAR9->VAR45;
            VAR9->VAR61.VAR62->FUN19(&VAR9->VAR61, VAR28, VAR90, VAR49);
            if (VAR9->VAR61.VAR110.VAR111 > 0)
            {
                VAR31 += VAR9->VAR61.VAR110.VAR111 * (VAR9->VAR114 / (VAR2->VAR115 ? VAR2->VAR115 : 120));
                VAR9->VAR61.VAR110.VAR111 /= VAR26;
            }
            VAR9->VAR116 = VAR27;
            for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            {
                VAR9->VAR52 = VAR28 + VAR24;
                if (VAR9->VAR80.VAR117 && VAR9->VAR82->VAR118)
                    VAR9->VAR82->FUN20(VAR9, VAR2, &VAR17->VAR24[VAR24]);
                VAR9->VAR82->FUN21(VAR2, VAR9, &VAR17->VAR24[VAR24], VAR9->VAR114);
            }
            if (VAR26 > 1 && VAR49[0].VAR54[0] == VAR49[1].VAR54[0] && VAR49[0].VAR56 == VAR49[1].VAR56)
            {
                VAR17->VAR99 = 1;
                for (VAR25 = 0; VAR25 < VAR49[0].VAR57; VAR25++)
                {
                    if (VAR49[0].VAR58[VAR25] != VAR49[1].VAR58[VAR25])
                    {
                        VAR17->VAR99 = 0;
                        break;
                    }
                }
            }
            for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            {
                VAR19 = &VAR17->VAR24[VAR24];
                VAR9->VAR52 = VAR28 + VAR24;
                if (VAR9->VAR80.VAR106 && VAR9->VAR82->VAR119)
                    VAR9->VAR82->FUN22(VAR9, VAR19);
                if (VAR9->VAR80.VAR106 && VAR9->VAR82->VAR120)
                    VAR9->VAR82->FUN23(VAR9, VAR19);
                if (VAR19->VAR106.VAR103)
                    VAR37 = 1;
                if (VAR9->VAR80.VAR117 && VAR9->VAR82->VAR121)
                    VAR9->VAR82->FUN24(VAR9, VAR2, VAR19);
            }
            VAR9->VAR52 = VAR28;
            if (VAR9->VAR80.VAR122)
            {
                if (VAR9->VAR82->VAR123)
                    VAR9->VAR82->FUN25(VAR9, VAR2, VAR17);
                if (VAR17->VAR36)
                    VAR36 = 1;
                FUN26(VAR17);
            }
            if (VAR9->VAR80.VAR124)
            {
                for (VAR24 = 0; VAR24 < VAR26; VAR24++)
                {
                    VAR19 = &VAR17->VAR24[VAR24];
                    VAR9->VAR52 = VAR28 + VAR24;
                    if (VAR9->VAR80.VAR124 && VAR9->VAR82->VAR125)
                        VAR9->VAR82->FUN27(VAR9, VAR19);
                    if (VAR17->VAR24[VAR24].VAR21.VAR102)
                        VAR38 = 1;
                }
                if (VAR9->VAR82->VAR126)
                    VAR9->VAR82->FUN28(VAR9, VAR17);
                for (VAR24 = 0; VAR24 < VAR26; VAR24++)
                {
                    VAR19 = &VAR17->VAR24[VAR24];
                    VAR9->VAR52 = VAR28 + VAR24;
                    if (VAR9->VAR80.VAR124 && VAR9->VAR82->VAR127)
                        VAR9->VAR82->FUN29(VAR9, VAR19);
                }
                VAR9->VAR52 = VAR28;
            }
            if (VAR9->VAR80.VAR128)
            {
                if (VAR9->VAR80.VAR128 == -1 && VAR9->VAR82->VAR129)
                    VAR9->VAR82->FUN30(VAR9, VAR17);
                else if (VAR17->VAR99)
                    memset(VAR17->VAR101, 1, sizeof(VAR17->VAR101));
                FUN31(VAR17);
            }
            FUN32(VAR17, VAR26);
            if (VAR9->VAR80.VAR81)
            {
                for (VAR24 = 0; VAR24 < VAR26; VAR24++)
                {
                    VAR19 = &VAR17->VAR24[VAR24];
                    VAR9->VAR52 = VAR28 + VAR24;
                    if (VAR9->VAR82->VAR130)
                        VAR9->VAR82->FUN33(VAR9, VAR19, VAR17->VAR99);
                    if (VAR19->VAR21.VAR81.VAR103)
                        VAR38 = 1;
                }
                VAR9->VAR52 = VAR28;
                if (VAR9->VAR82->VAR131)
                    VAR9->VAR82->FUN34(VAR9, VAR17);
            }
            if (VAR26 == 2)
            {
                FUN18(&VAR9->VAR93, 1, VAR17->VAR99);
                if (VAR17->VAR99)
                {
                    FUN35(VAR9, &VAR17->VAR24[0].VAR21);
                    if (VAR9->VAR82->VAR132)
                        VAR9->VAR82->FUN36(VAR9, &VAR17->VAR24[0]);
                    if (VAR9->VAR82->VAR133)
                        VAR9->VAR82->FUN37(VAR9, &VAR17->VAR24[0], 1);
                    FUN38(&VAR9->VAR93, VAR17);
                    if (VAR17->VAR35)
                        VAR35 = 1;
                }
            }
            for (VAR24 = 0; VAR24 < VAR26; VAR24++)
            {
                VAR9->VAR52 = VAR28 + VAR24;
                FUN39(VAR2, VAR9, &VAR17->VAR24[VAR24], VAR17->VAR99);
            }
            VAR28 += VAR26;
        }
        if (VAR2->VAR96 & VAR134)
        {
            break;
        }
        VAR30 = FUN40(&VAR9->VAR93);
        VAR32 = VAR2->VAR135 * 1024 / VAR2->VAR136;
        VAR32 = FUN6(VAR32, 6144 * VAR9->VAR45 - 3);
        VAR33 = FUN7(VAR31, VAR32);
        VAR33 = FUN6(VAR33, 6144 * VAR9->VAR45 - 3);
        VAR34 = FUN6(FUN7(VAR32 - VAR32 / 4, VAR31), VAR33);
        VAR34 = VAR34 - VAR34 / 8;
        VAR33 = VAR33 + VAR33 / 2;
        if (VAR23 == 0 || (VAR23 < 5 && (VAR30 < VAR34 || VAR30 > VAR33)) || VAR30 >= 6144 * VAR9->VAR45 - 3)
        {
            float VAR137 = ((float)VAR32) / VAR30;
            if (VAR30 >= VAR34 && VAR30 <= VAR33)
            {
                VAR137 = FUN41(FUN41(VAR137));
                VAR137 = FUN42(VAR137, 0.9f, 1.1f);
            }
            else
            {
                VAR137 = FUN41(VAR137);
            }
            VAR9->VAR114 = FUN6(VAR9->VAR114 * VAR137, 65536.VAR138);
            if (VAR137 > 0.9f && VAR137 < 1.1f)
            {
                break;
            }
            else
            {
                if (VAR36 || VAR35 || VAR37 || VAR38)
                {
                    for (VAR22 = 0; VAR22 < VAR9->VAR47[0]; VAR22++)
                    {
                        VAR26 = VAR27 == VAR50 ? 2 : 1;
                        VAR17 = &VAR9->VAR17[VAR22];
                        for (VAR24 = 0; VAR24 < VAR26; VAR24++)
                            memcpy(VAR17->VAR24[VAR24].VAR90, VAR17->VAR24[VAR24].VAR139, sizeof(VAR17->VAR24[VAR24].VAR90));
                    }
                }
                VAR23++;
            }
        }
        else
        {
            break;
        }
    } while (1);
    if (VAR9->VAR80.VAR81 && VAR9->VAR82->VAR140)
        VAR9->VAR82->FUN43(VAR9);
    FUN18(&VAR9->VAR93, 3, VAR141);
    FUN44(&VAR9->VAR93);
    VAR9->VAR113 = FUN40(&VAR9->VAR93);
    VAR9->VAR142 += VAR9->VAR114;
    VAR9->VAR143++;
    if (!VAR6)
        VAR9->VAR42++;
    FUN45(&VAR9->VAR43, VAR2->VAR144, &VAR4->VAR145, &VAR4->VAR146);
    VAR4->VAR95 = FUN40(&VAR9->VAR93) >> 3;
    *VAR7 = 1;
    return 0;
}