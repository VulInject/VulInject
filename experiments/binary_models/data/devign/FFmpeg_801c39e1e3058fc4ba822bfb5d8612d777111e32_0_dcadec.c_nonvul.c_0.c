static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15, VAR16;
    float **VAR17;
    VAR18 *VAR19 = VAR2->VAR20;
    int VAR21, VAR22;
    int VAR23;
    VAR19->VAR24 = 0;
    VAR19->VAR25 = FUN2(VAR10, VAR11, VAR19->VAR26, VAR27 + VAR28);
    if (VAR19->VAR25 == VAR29)
    {
        FUN3(VAR2, VAR30, "");
        return VAR29;
    }
    FUN4(&VAR19->VAR31, VAR19->VAR26, VAR19->VAR25 * 8);
    if ((VAR16 = FUN5(VAR19)) < 0)
    {
        return VAR16;
    }
    VAR2->VAR32 = VAR19->VAR32;
    VAR2->VAR33 = VAR19->VAR33;
    VAR19->VAR34 = VAR35;
    for (VAR15 = 0; VAR15 < (VAR19->VAR36 / 8); VAR15++)
    {
        if ((VAR16 = FUN6(VAR19, 0, VAR15)))
        {
            FUN3(VAR2, VAR30, "");
            return VAR16;
        }
    }
    VAR14 = VAR19->VAR37;
    if (VAR19->VAR38)
        VAR19->VAR39 = VAR40[VAR19->VAR41];
    else
        VAR19->VAR39 = 0;
    VAR23 = FUN7(VAR19->VAR42, VAR19->VAR25) * 8;
    if (VAR19->VAR39 < 0 || VAR19->VAR39 & VAR43)
    {
        VAR19->VAR39 = FUN8(VAR19->VAR39, 0);
        FUN9(&VAR19->VAR31, (-FUN10(&VAR19->VAR31)) & 31);
        while (VAR23 - FUN10(&VAR19->VAR31) >= 32)
        {
            uint32_t VAR44 = FUN11(&VAR19->VAR31, 32);
            switch (VAR44)
            {
            case 0x5a5a5a5a:
            {
                int VAR45, VAR46;
                VAR19->VAR47 = VAR19->VAR37;
                VAR46 = FUN12(&VAR19->VAR31, 10);
                if ((VAR19->VAR42 != (FUN10(&VAR19->VAR31) >> 3) - 4 + VAR46) && (VAR19->VAR42 != (FUN10(&VAR19->VAR31) >> 3) - 4 + VAR46 + 1))
                    continue;
                FUN13(&VAR19->VAR31, 10);
                VAR19->VAR39 |= VAR43;
                if ((VAR45 = FUN14(&VAR19->VAR31, 4)) != 1)
                {
                    FUN3(VAR2, VAR30, ""
                                                "",
                           VAR45);
                    continue;
                }
                FUN15(VAR19, VAR19->VAR47);
                for (VAR15 = 0; VAR15 < (VAR19->VAR36 / 8); VAR15++)
                    if ((VAR16 = FUN6(VAR19, VAR19->VAR47, VAR15)))
                    {
                        FUN3(VAR2, VAR30, "");
                        continue;
                    }
                VAR19->VAR24 = 1;
                break;
            }
            case 0x47004a03:
                VAR19->VAR39 |= VAR48;
                break;
            case 0x1d95f262:
            {
                int VAR49 = FUN12(&VAR19->VAR31, 12) + 1;
                if (VAR19->VAR42 != (FUN10(&VAR19->VAR31) >> 3) - 4 + VAR49)
                    continue;
                FUN3(VAR2, VAR50, "", FUN10(&VAR19->VAR31));
                FUN13(&VAR19->VAR31, 12);
                FUN3(VAR2, VAR50, "", VAR49);
                FUN3(VAR2, VAR50, "", FUN14(&VAR19->VAR31, 4));
                VAR19->VAR39 |= VAR51;
                break;
            }
            }
            FUN9(&VAR19->VAR31, (-FUN10(&VAR19->VAR31)) & 31);
        }
    }
    else
    {
        FUN9(&VAR19->VAR31, VAR23 - FUN10(&VAR19->VAR31));
    }
    if (VAR19->VAR39 & VAR51)
        VAR19->VAR34 = VAR52;
    else if (VAR19->VAR39 & (VAR43 | VAR48))
        VAR19->VAR34 = VAR53;
    if (VAR19->VAR25 - VAR19->VAR42 > 32 && FUN11(&VAR19->VAR31, 32) == VAR54)
        FUN16(VAR19);
    VAR2->VAR34 = VAR19->VAR34;
    VAR22 = VAR21 = VAR19->VAR37 + !!VAR19->VAR55;
    if (VAR19->VAR56 < 16)
    {
        VAR2->VAR57 = VAR58[VAR19->VAR56];
        if (VAR19->VAR37 + !!VAR19->VAR55 > 2 && VAR2->VAR59 == VAR60)
        {
            VAR19->VAR61 = 1;
        }
        FF_DISABLE_DEPRECATION_WARNINGS if (VAR19->VAR24 && !VAR19->VAR61 && (!VAR2->VAR62 || VAR2->VAR62 > VAR14 + !!VAR19->VAR55))
        {
            FF_ENABLE_DEPRECATION_WARNINGS if (VAR19->VAR24 && !VAR19->VAR61)
            {
                VAR2->VAR57 |= VAR63;
                if (VAR19->VAR55)
                {
                    VAR2->VAR57 |= VAR64;
                    VAR19->VAR65 = VAR66[VAR19->VAR56];
                }
                else
                {
                    VAR19->VAR65 = VAR67[VAR19->VAR56];
                }
            }
            else
            {
                VAR21 = VAR14 + !!VAR19->VAR55;
                VAR19->VAR24 = 0;
                if (VAR19->VAR55)
                {
                    VAR2->VAR57 |= VAR64;
                    VAR19->VAR65 = VAR68[VAR19->VAR56];
                }
                else
                    VAR19->VAR65 = VAR69[VAR19->VAR56];
            }
            if (VAR21 > !!VAR19->VAR55 && VAR19->VAR65[VAR21 - 1 - !!VAR19->VAR55] < 0)
                return VAR29;
            if (VAR14 + !!VAR19->VAR55 > 2 && VAR2->VAR59 == VAR60)
            {
                VAR21 = 2;
                VAR19->VAR70 = VAR19->VAR37 == 2 ? VAR19->VAR56 : VAR71;
                VAR2->VAR57 = VAR60;
                if (VAR19->VAR72 && (VAR19->VAR73 == VAR71 || VAR19->VAR73 == VAR74))
                {
                    int VAR75, VAR76;
                    for (VAR15 = 0; VAR15 < VAR14 + !!VAR19->VAR55; VAR15++)
                    {
                        VAR75 = VAR19->VAR77[VAR15][0] & 0x100 ? 1 : -1;
                        VAR76 = VAR19->VAR77[VAR15][0] & 0x0FF;
                        VAR19->VAR78[VAR15][0] = (!VAR76 ? 0.0f : VAR75 * VAR79[VAR76 - 1]);
                        VAR75 = VAR19->VAR77[VAR15][1] & 0x100 ? 1 : -1;
                        VAR76 = VAR19->VAR77[VAR15][1] & 0x0FF;
                        VAR19->VAR78[VAR15][1] = (!VAR76 ? 0.0f : VAR75 * VAR79[VAR76 - 1]);
                    }
                    VAR19->VAR70 = VAR19->VAR73;
                }
                else
                {
                    int VAR80 = VAR19->VAR56 & VAR81;
                    if (VAR80 >= FUN17(VAR82))
                    {
                        FUN3(VAR19->VAR2, VAR30, "", VAR80);
                        return VAR29;
                    }
                    if (VAR14 + !!VAR19->VAR55 > FUN17(VAR82[0]))
                    {
                        FUN18(VAR19->VAR2, "", VAR19->VAR37 + !!VAR19->VAR55);
                        return VAR83;
                    }
                    for (VAR15 = 0; VAR15 < VAR14 + !!VAR19->VAR55; VAR15++)
                    {
                        VAR19->VAR78[VAR15][0] = VAR82[VAR80][VAR15][0];
                        VAR19->VAR78[VAR15][1] = VAR82[VAR80][VAR15][1];
                    }
                }
                FUN19(VAR19->VAR2, "");
                for (VAR15 = 0; VAR15 < VAR14 + !!VAR19->VAR55; VAR15++)
                {
                    FUN19(VAR19->VAR2, "", VAR15, VAR19->VAR78[VAR15][0]);
                    FUN19(VAR19->VAR2, "", VAR15, VAR19->VAR78[VAR15][1]);
                }
                FUN19(VAR19->VAR2, "");
            }
        }
        else
        {
            FUN3(VAR2, VAR30, "", VAR19->VAR56);
            return VAR29;
        }
        VAR2->VAR21 = VAR21;
        VAR8->VAR84 = 256 * (VAR19->VAR36 / 8);
        if ((VAR16 = FUN20(VAR2, VAR8, 0)) < 0)
        {
            FUN3(VAR2, VAR30, "");
            return VAR16;
        }
        VAR17 = (float **)VAR8->VAR85;
        if (VAR2->VAR21 < VAR22)
        {
            VAR16 = FUN21(NULL, VAR22 - VAR21, VAR8->VAR84, VAR2->VAR86, 0);
            if (VAR16 < 0)
                return VAR16;
            FUN22(&VAR19->VAR87, &VAR19->VAR88, VAR16);
            if (!VAR19->VAR87)
                return FUN23(VAR89);
            VAR16 = FUN24((VAR9 **)VAR19->VAR90, NULL, VAR19->VAR87, VAR22 - VAR21, VAR8->VAR84, VAR2->VAR86, 0);
            if (VAR16 < 0)
                return VAR16;
        }
        for (VAR15 = 0; VAR15 < (VAR19->VAR36 / 8); VAR15++)
        {
            int VAR91;
            for (VAR91 = 0; VAR91 < VAR21; VAR91++)
                VAR19->VAR92[VAR91] = VAR17[VAR91] + VAR15 * 256;
            for (; VAR91 < VAR22; VAR91++)
                VAR19->VAR92[VAR91] = VAR19->VAR90[VAR91 - VAR21] + VAR15 * 256;
            FUN25(VAR19, VAR15);
            if ((VAR19->VAR93 & 1) && VAR19->VAR24)
            {
                float *VAR94 = VAR19->VAR92[VAR19->VAR65[VAR19->VAR47]];
                float *VAR95 = VAR19->VAR92[VAR19->VAR65[VAR19->VAR47 - 2]];
                float *VAR96 = VAR19->VAR92[VAR19->VAR65[VAR19->VAR47 - 1]];
                VAR19->VAR97.FUN26(VAR95, VAR94, -VAR98, 256);
                VAR19->VAR97.FUN26(VAR96, VAR94, -VAR98, 256);
            }
        }
        VAR13 = 2 * VAR19->VAR55 * (VAR19->VAR36 / 8);
        for (VAR15 = 0; VAR15 < 2 * VAR19->VAR55 * 4; VAR15++)
            VAR19->VAR99[VAR15] = VAR19->VAR99[VAR15 + VAR13];
        VAR16 = FUN27(VAR8, (VAR19->VAR70 & ~VAR100) == VAR74 ? VAR101 : VAR102);
        if (VAR16 < 0)
            return VAR16;
        *VAR4 = 1;
        return VAR11;
    }
    static av_cold int FUN28(VAR1 * VAR2)
    {
        VAR18 *VAR19 = VAR2->VAR20;
        VAR19->VAR2 = VAR2;
        FUN29();
        FUN30(&VAR19->VAR97, VAR2->VAR103 & VAR104);
        FUN31(&VAR19->VAR105, 6, 1, 1.0);
        FUN32(&VAR19->VAR106);
        FUN33(&VAR19->VAR107);
        FUN34(&VAR19->VAR108, VAR2);
        VAR2->VAR86 = VAR109;
        FF_DISABLE_DEPRECATION_WARNINGS if (VAR2->VAR62 == 2) VAR2->VAR59 = VAR60;
        FF_ENABLE_DEPRECATION_WARNINGS if (VAR2->VAR21 > 2 && VAR2->VAR59 == VAR60) VAR2->VAR21 = 2;
        return 0;
    }
    static av_cold int FUN35(VAR1 * VAR2)
    {
        VAR18 *VAR19 = VAR2->VAR20;
        FUN36(&VAR19->VAR105);
        FUN37(&VAR19->VAR87);
        return 0;
    }
    static const AVProfile VAR110[] = {
        {VAR35, ""},
        {VAR53, ""},
        {VAR52, ""},
        {VAR111, ""},
        {VAR112, ""},
        {VAR113},
    };
    static const AVOption VAR114[] = {
        {"", "", FUN38(VAR18, VAR61), VAR115, {.VAR116 = 0}, 0, 1, VAR117 | VAR118},
        {NULL},
    };
    static const AVClass VAR119 = {
        .VAR120 = "",
        .VAR121 = VAR122,
        .VAR123 = VAR114,
        .VAR124 = VAR125,
    };
    AVCodec VAR126 = {
        .VAR127 = "",
        .VAR128 = FUN39(""),
        .VAR129 = VAR130,
        .VAR131 = VAR132,
        .VAR133 = sizeof(VAR18),
        .VAR134 = VAR135,
        .VAR136 = VAR137,
        .close = VAR138,
        .VAR139 = VAR140 | VAR141,
        .VAR142 = (const enum VAR143[]){VAR109, VAR144},
        .VAR110 = FUN39(VAR110),
        .VAR145 = &VAR119,
    };