static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    float **VAR11 = VAR9->VAR12, *VAR13, *VAR14, *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28;
    int VAR29 = 0, VAR30 = 0, VAR31 = 0, VAR32 = 0;
    int VAR33[4];
    FFPsyWindowInfo VAR34[VAR35];
    if (VAR9->VAR36 == 2)
        return 0;
    if (VAR6)
    {
        if ((VAR27 = FUN2(&VAR9->VAR37, VAR6)) < 0)
            return VAR27;
    }
    FUN3(VAR9, VAR6);
    if (VAR9->VAR38)
        FUN4(VAR9->VAR38, VAR9->VAR12, VAR9->VAR39);
    if (!VAR2->VAR40)
        return 0;
    VAR26 = 0;
    for (VAR20 = 0; VAR20 < VAR9->VAR41[0]; VAR20++)
    {
        VAR42 *VAR43 = VAR34 + VAR26;
        VAR25 = VAR9->VAR41[VAR20 + 1];
        VAR24 = VAR25 == VAR44 ? 2 : 1;
        VAR17 = &VAR9->VAR17[VAR20];
        for (VAR22 = 0; VAR22 < VAR24; VAR22++)
        {
            VAR45 *VAR46 = &VAR17->VAR22[VAR22].VAR46;
            int VAR47 = VAR26 + VAR22;
            float VAR48;
            VAR15 = &VAR11[VAR47][0];
            VAR13 = VAR15 + 1024;
            VAR14 = VAR13 + (448 + 64);
            if (!VAR6)
                VAR14 = NULL;
            if (VAR25 == VAR49)
            {
                VAR43[VAR22].VAR50[0] = VAR51;
                VAR43[VAR22].VAR52 = 0;
                VAR43[VAR22].VAR53 = 1;
                VAR43[VAR22].VAR54[0] = 1;
                VAR46->VAR55 = VAR9->VAR56 >= 8 ? 1 : 3;
            }
            else
            {
                VAR43[VAR22] = VAR9->VAR57.VAR58->FUN5(&VAR9->VAR57, VAR13, VAR14, VAR47, VAR46->VAR59[0]);
            }
            VAR46->VAR59[1] = VAR46->VAR59[0];
            VAR46->VAR59[0] = VAR43[VAR22].VAR50[0];
            VAR46->VAR60[1] = VAR46->VAR60[0];
            VAR46->VAR60[0] = VAR43[VAR22].VAR52;
            VAR46->VAR53 = VAR43[VAR22].VAR53;
            VAR46->VAR61 = VAR9->VAR57.VAR62[VAR46->VAR53 == 8];
            VAR46->VAR55 = VAR25 == VAR49 ? VAR46->VAR55 : VAR9->VAR57.VAR63[VAR46->VAR53 == 8];
            VAR46->VAR64 = VAR43[VAR22].VAR50[0] == VAR65 ? VAR66[VAR9->VAR56] : VAR67[VAR9->VAR56];
            VAR46->VAR68 = VAR43[VAR22].VAR50[0] == VAR65 ? VAR69[VAR9->VAR56] : VAR70[VAR9->VAR56];
            VAR48 = 0.0f;
            for (VAR23 = 0; VAR23 < VAR46->VAR53; VAR23++)
                VAR46->VAR71[VAR23] = VAR43[VAR22].VAR54[VAR23];
            for (VAR23 = 0; VAR23 < VAR46->VAR53; VAR23++)
            {
                if (VAR43[VAR22].VAR72[VAR23] > VAR73)
                {
                    VAR46->VAR74[VAR23] = 1;
                    VAR48 = FUN6(VAR48, VAR43[VAR22].VAR72[VAR23]);
                }
                else
                {
                    VAR46->VAR74[VAR23] = 0;
                }
            }
            if (VAR48 > VAR73)
            {
                VAR46->VAR48 = VAR73 / VAR48;
            }
            else
            {
                VAR46->VAR48 = 1.0f;
            }
            FUN7(VAR9, &VAR17->VAR22[VAR22], VAR15);
            if (FUN8(VAR17->VAR22->VAR75[0]))
            {
                FUN9(VAR2, VAR76, "");
                return FUN10(VAR77);
            }
            FUN11(VAR9, &VAR17->VAR22[VAR22]);
        }
        VAR26 += VAR24;
    }
    if ((VAR27 = FUN12(VAR2, VAR4, 8192 * VAR9->VAR39, 0)) < 0)
        return VAR27;
    VAR28 = VAR21 = 0;
    do
    {
        int VAR78, VAR79, VAR80;
        FUN13(&VAR9->VAR81, VAR4->VAR82, VAR4->VAR83);
        if ((VAR2->VAR40 & 0xFF) == 1 && !(VAR2->VAR84 & VAR85))
            FUN14(VAR9, VAR86);
        VAR26 = 0;
        VAR78 = 0;
        memset(VAR33, 0, sizeof(VAR33));
        for (VAR20 = 0; VAR20 < VAR9->VAR41[0]; VAR20++)
        {
            VAR42 *VAR43 = VAR34 + VAR26;
            const float *VAR75[2];
            VAR25 = VAR9->VAR41[VAR20 + 1];
            VAR24 = VAR25 == VAR44 ? 2 : 1;
            VAR17 = &VAR9->VAR17[VAR20];
            VAR17->VAR87 = 0;
            memset(VAR17->VAR88, 0, sizeof(VAR17->VAR88));
            memset(VAR17->VAR89, 0, sizeof(VAR17->VAR89));
            FUN15(&VAR9->VAR81, 3, VAR25);
            FUN15(&VAR9->VAR81, 4, VAR33[VAR25]++);
            for (VAR22 = 0; VAR22 < VAR24; VAR22++)
            {
                VAR19 = &VAR17->VAR22[VAR22];
                VAR75[VAR22] = VAR19->VAR75;
                VAR19->VAR46.VAR90 = 0;
                memset(&VAR19->VAR46.VAR91, 0, sizeof(VAR19->VAR46.VAR91));
                memset(&VAR19->VAR92, 0, sizeof(VAR93));
                for (VAR23 = 0; VAR23 < 128; VAR23++)
                    if (VAR19->VAR94[VAR23] > VAR95)
                        VAR19->VAR94[VAR23] = 0;
            }
            VAR9->VAR57.VAR96.VAR97 = -1;
            VAR9->VAR57.VAR96.VAR98 = VAR2->VAR28 / VAR9->VAR39;
            VAR9->VAR57.VAR58->FUN16(&VAR9->VAR57, VAR26, VAR75, VAR43);
            if (VAR9->VAR57.VAR96.VAR97 > 0)
            {
                VAR78 += VAR9->VAR57.VAR96.VAR97;
                VAR9->VAR57.VAR96.VAR97 /= VAR24;
            }
            VAR9->VAR99 = VAR25;
            for (VAR22 = 0; VAR22 < VAR24; VAR22++)
            {
                VAR9->VAR47 = VAR26 + VAR22;
                VAR9->VAR100->FUN17(VAR2, VAR9, &VAR17->VAR22[VAR22], VAR9->VAR101);
            }
            if (VAR24 > 1 && VAR43[0].VAR50[0] == VAR43[1].VAR50[0] && VAR43[0].VAR52 == VAR43[1].VAR52)
            {
                VAR17->VAR87 = 1;
                for (VAR23 = 0; VAR23 < VAR43[0].VAR53; VAR23++)
                {
                    if (VAR43[0].VAR54[VAR23] != VAR43[1].VAR54[VAR23])
                    {
                        VAR17->VAR87 = 0;
                        break;
                    }
                }
            }
            for (VAR22 = 0; VAR22 < VAR24; VAR22++)
            {
                VAR19 = &VAR17->VAR22[VAR22];
                VAR9->VAR47 = VAR26 + VAR22;
                if (VAR9->VAR102.VAR103 && VAR9->VAR100->VAR104)
                    VAR9->VAR100->FUN18(VAR9, VAR2, VAR19);
                if (VAR9->VAR102.VAR92 && VAR9->VAR100->VAR105)
                    VAR9->VAR100->FUN19(VAR9, VAR19);
                if (VAR9->VAR102.VAR92 && VAR9->VAR100->VAR106)
                    VAR9->VAR100->FUN20(VAR9, VAR19);
                if (VAR19->VAR92.VAR107)
                    VAR31 = 1;
            }
            VAR9->VAR47 = VAR26;
            if (VAR9->VAR102.VAR108)
            {
                if (VAR9->VAR100->VAR109)
                    VAR9->VAR100->FUN21(VAR9, VAR2, VAR17);
                if (VAR17->VAR30)
                    VAR30 = 1;
                FUN22(VAR17);
            }
            if (VAR9->VAR102.VAR110)
            {
                for (VAR22 = 0; VAR22 < VAR24; VAR22++)
                {
                    VAR19 = &VAR17->VAR22[VAR22];
                    VAR9->VAR47 = VAR26 + VAR22;
                    if (VAR9->VAR102.VAR110 && VAR9->VAR100->VAR111)
                        VAR9->VAR100->FUN23(VAR9, VAR19);
                    if (VAR17->VAR22[VAR22].VAR46.VAR90)
                        VAR32 = 1;
                }
                if (VAR9->VAR100->VAR112)
                    VAR9->VAR100->FUN24(VAR9, VAR17);
                for (VAR22 = 0; VAR22 < VAR24; VAR22++)
                {
                    VAR19 = &VAR17->VAR22[VAR22];
                    VAR9->VAR47 = VAR26 + VAR22;
                    if (VAR9->VAR102.VAR110 && VAR9->VAR100->VAR113)
                        VAR9->VAR100->FUN25(VAR9, VAR19);
                }
                VAR9->VAR47 = VAR26;
            }
            if (VAR9->VAR102.VAR114)
            {
                if (VAR9->VAR102.VAR114 == -1 && VAR9->VAR100->VAR115)
                    VAR9->VAR100->FUN26(VAR9, VAR17);
                else if (VAR17->VAR87)
                    memset(VAR17->VAR89, 1, sizeof(VAR17->VAR89));
                for (VAR23 = 0; VAR23 < 128; VAR23++)
                    VAR17->VAR89[VAR23] = VAR17->VAR88[VAR23] ? 0 : VAR17->VAR89[VAR23];
                FUN27(VAR17);
            }
            FUN28(VAR17, VAR24);
            if (VAR24 == 2)
            {
                FUN15(&VAR9->VAR81, 1, VAR17->VAR87);
                if (VAR17->VAR87)
                {
                    FUN29(VAR9, &VAR17->VAR22[0].VAR46);
                    if (VAR9->VAR100->VAR116)
                        VAR9->VAR100->FUN30(VAR9, &VAR17->VAR22[0]);
                    FUN31(&VAR9->VAR81, VAR17);
                    if (VAR17->VAR29)
                        VAR29 = 1;
                }
            }
            for (VAR22 = 0; VAR22 < VAR24; VAR22++)
            {
                VAR9->VAR47 = VAR26 + VAR22;
                FUN32(VAR2, VAR9, &VAR17->VAR22[VAR22], VAR17->VAR87);
            }
            VAR26 += VAR24;
        }
        if (VAR2->VAR84 & VAR117)
        {
            break;
        }
        VAR28 = FUN33(&VAR9->VAR81);
        VAR78 = FUN6(VAR78, VAR2->VAR118 * 1024 / VAR2->VAR119);
        VAR78 = FUN34(VAR78, 6144 * VAR9->VAR39 - 3);
        VAR79 = VAR78 + VAR78 / 2;
        VAR80 = VAR78 - VAR78 / 8;
        if (VAR21 == 0 || (VAR21 < 5 && (VAR28 < VAR80 || VAR28 > VAR79)) || VAR28 >= 6144 * VAR9->VAR39 - 3)
        {
            float VAR120 = ((float)VAR78) / VAR28;
            if (VAR28 >= VAR80 && VAR28 <= VAR79)
            {
                VAR120 = FUN35(FUN35(VAR120));
                VAR120 = FUN36(VAR120, 0.9f, 1.1f);
            }
            else
            {
                VAR120 = FUN35(VAR120);
            }
            VAR9->VAR101 = FUN34(VAR9->VAR101 * VAR120, 65536.VAR121);
            if (VAR9->VAR101 < 300.VAR121 || VAR120 > 0.9f)
            {
                break;
            }
            else
            {
                if (VAR30 || VAR29 || VAR31 || VAR32)
                {
                    for (VAR20 = 0; VAR20 < VAR9->VAR41[0]; VAR20++)
                    {
                        VAR24 = VAR25 == VAR44 ? 2 : 1;
                        VAR17 = &VAR9->VAR17[VAR20];
                        for (VAR22 = 0; VAR22 < VAR24; VAR22++)
                            memcpy(VAR17->VAR22[VAR22].VAR75, VAR17->VAR22[VAR22].VAR122, sizeof(VAR17->VAR22[VAR22].VAR75));
                    }
                }
                VAR21++;
            }
        }
        else
        {
            break;
        }
    } while (1);
    FUN15(&VAR9->VAR81, 3, VAR123);
    FUN37(&VAR9->VAR81);
    VAR2->VAR28 = FUN33(&VAR9->VAR81);
    if (!VAR6)
        VAR9->VAR36++;
    FUN38(&VAR9->VAR37, VAR2->VAR124, &VAR4->VAR125, &VAR4->VAR126);
    VAR4->VAR83 = FUN33(&VAR9->VAR81) >> 3;
    *VAR7 = 1;
    return 0;
}