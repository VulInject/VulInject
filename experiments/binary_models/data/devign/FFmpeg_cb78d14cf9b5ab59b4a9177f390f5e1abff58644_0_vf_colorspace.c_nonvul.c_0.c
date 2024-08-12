static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR9 *VAR10 = FUN2(VAR4->VAR11);
    const VAR9 *VAR12 = FUN2(VAR5->VAR11);
    int VAR13 = 0, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19 = 0, VAR20 = 0;
    (((VAR21) == 0 && (VAR22) == 0) || ((VAR21) == 1 && (VAR22) == 0) || ((VAR21) == 1 && (VAR22) == 1))((VAR23) != NULL && (VAR23)->VAR24 == 3 &&
                                                                                             !((VAR23)->VAR25 & VAR26) && FUN3((VAR23)->VAR27[0].VAR28) && FUN4((VAR23)->VAR29, (VAR23)->VAR30)) if (!FUN5(VAR10))
    {
        FUN6(VAR2, VAR31, "", VAR4->VAR11, FUN7(VAR4->VAR11), VAR10 ? VAR10->VAR27[0].VAR28 : -1);
        return FUN8(VAR32);
    }
    if (!FUN5(VAR12))
    {
        FUN6(VAR2, VAR31, "", VAR5->VAR11, FUN7(VAR5->VAR11), VAR12 ? VAR12->VAR27[0].VAR28 : -1);
        return FUN8(VAR32);
    }
    if (VAR4->VAR33 != VAR7->VAR34)
        VAR7->VAR35 = NULL;
    if (VAR5->VAR33 != VAR7->VAR36)
        VAR7->VAR37 = NULL;
    if (VAR4->VAR38 != VAR7->VAR39)
        VAR7->VAR40 = NULL;
    if (VAR5->VAR38 != VAR7->VAR41)
        VAR7->VAR42 = NULL;
    if (VAR4->VAR43 != VAR7->VAR44 || VAR4->VAR45 != VAR7->VAR46)
        VAR7->VAR47 = NULL;
    if (VAR5->VAR43 != VAR7->VAR48 || VAR5->VAR45 != VAR7->VAR49)
        VAR7->VAR50 = NULL;
    if (!VAR7->VAR37 || !VAR7->VAR35)
    {
        VAR7->VAR34 = VAR4->VAR33;
        if (VAR7->VAR51 != VAR52)
            VAR7->VAR34 = VAR53[FUN9(VAR7->VAR51, VAR54)];
        if (VAR7->VAR55 != VAR56)
            VAR7->VAR34 = VAR7->VAR55;
        VAR7->VAR35 = FUN10(VAR7->VAR34);
        if (!VAR7->VAR35)
        {
            FUN6(VAR2, VAR31, "", VAR7->VAR34, FUN11(VAR7->VAR34));
            return FUN8(VAR32);
        }
        VAR7->VAR36 = VAR5->VAR33;
        VAR7->VAR37 = FUN10(VAR7->VAR36);
        if (!VAR7->VAR37)
        {
            if (VAR7->VAR36 == VAR56)
            {
                if (VAR7->VAR57 == VAR52)
                {
                    FUN6(VAR2, VAR31, "");
                }
                else
                {
                    FUN6(VAR2, VAR31, "", VAR7->VAR57);
                }
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR36, FUN11(VAR7->VAR36));
            }
            return FUN8(VAR32);
        }
        VAR7->VAR58 = !memcmp(VAR7->VAR35, VAR7->VAR37, sizeof(*VAR7->VAR35));
        if (!VAR7->VAR58)
        {
            double VAR59[3][3], VAR60[3][3], VAR61[3][3];
            FUN12(VAR7->VAR37, VAR59);
            FUN13(VAR59, VAR60);
            FUN12(VAR7->VAR35, VAR59);
            if (VAR7->VAR37->VAR62 != VAR7->VAR35->VAR62 && VAR7->VAR63 != VAR64)
            {
                double VAR65[3][3], VAR66[3][3];
                FUN14(VAR65, VAR7->VAR63, VAR7->VAR35->VAR62, VAR7->VAR37->VAR62);
                FUN15(VAR66, VAR59, VAR65);
                FUN15(VAR61, VAR66, VAR60);
            }
            else
            {
                FUN15(VAR61, VAR59, VAR60);
            }
            for (VAR14 = 0; VAR14 < 3; VAR14++)
                for (VAR15 = 0; VAR15 < 3; VAR15++)
                {
                    VAR7->VAR67[VAR14][VAR15][0] = FUN16(16384.0 * VAR61[VAR14][VAR15]);
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR67[VAR14][VAR15][VAR16] = VAR7->VAR67[VAR14][VAR15][0];
                }
            VAR13 = 1;
        }
    }
    if (!VAR7->VAR40)
    {
        FUN17(&VAR7->VAR68);
        VAR7->VAR39 = VAR4->VAR38;
        if (VAR7->VAR51 != VAR52)
            VAR7->VAR39 = VAR69[FUN9(VAR7->VAR51, VAR54)];
        if (VAR7->VAR70 != VAR71)
            VAR7->VAR39 = VAR7->VAR70;
        VAR7->VAR40 = FUN18(VAR7->VAR39);
        if (!VAR7->VAR40)
        {
            FUN6(VAR2, VAR31, "", VAR7->VAR39, FUN19(VAR7->VAR39));
            return FUN8(VAR32);
        }
    }
    if (!VAR7->VAR42)
    {
        FUN17(&VAR7->VAR68);
        VAR7->VAR41 = VAR5->VAR38;
        VAR7->VAR42 = FUN18(VAR7->VAR41);
        if (!VAR7->VAR42)
        {
            if (VAR7->VAR41 == VAR71)
            {
                if (VAR7->VAR57 == VAR52)
                {
                    FUN6(VAR2, VAR31, "");
                }
                else
                {
                    FUN6(VAR2, VAR31, "", VAR7->VAR57);
                }
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR41, FUN19(VAR7->VAR41));
            }
            return FUN8(VAR32);
        }
    }
    VAR7->VAR72 = VAR7->VAR73 || (VAR7->VAR58 && !memcmp(VAR7->VAR40, VAR7->VAR42, sizeof(*VAR7->VAR40)));
    if (!VAR7->VAR72 && !VAR7->VAR68)
    {
        VAR17 = FUN20(VAR7);
        if (VAR17 < 0)
            return VAR17;
        VAR13 = 1;
    }
    if (!VAR7->VAR47)
    {
        VAR7->VAR44 = VAR4->VAR43;
        if (VAR7->VAR51 != VAR52)
            VAR7->VAR44 = VAR74[FUN9(VAR7->VAR51, VAR54)];
        if (VAR7->VAR75 != VAR76)
            VAR7->VAR44 = VAR7->VAR75;
        VAR7->VAR46 = VAR4->VAR45;
        if (VAR7->VAR77 != VAR78)
            VAR7->VAR46 = VAR7->VAR77;
        VAR7->VAR47 = FUN21(VAR7->VAR44);
        if (!VAR7->VAR47)
        {
            FUN6(VAR2, VAR31, "", VAR7->VAR44, FUN22(VAR7->VAR44));
            return FUN8(VAR32);
        }
        VAR19 = 1;
    }
    if (!VAR7->VAR50)
    {
        VAR7->VAR48 = VAR5->VAR43;
        VAR7->VAR49 = VAR5->VAR45;
        VAR7->VAR50 = FUN21(VAR7->VAR48);
        if (!VAR7->VAR50)
        {
            if (VAR7->VAR48 == VAR76)
            {
                if (VAR7->VAR57 == VAR52)
                {
                    FUN6(VAR2, VAR31, "");
                }
                else
                {
                    FUN6(VAR2, VAR31, "", VAR7->VAR57);
                }
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR48, FUN22(VAR7->VAR48));
            }
            return FUN8(VAR32);
        }
        VAR20 = 1;
    }
    VAR18 = VAR10->VAR30 == VAR12->VAR30 && VAR10->VAR29 == VAR12->VAR29;
    VAR7->VAR79 = VAR7->VAR72 && VAR18;
    VAR7->VAR80 = VAR7->VAR79 && VAR7->VAR46 == VAR7->VAR49 && !memcmp(VAR7->VAR47, VAR7->VAR50, sizeof(*VAR7->VAR47)) && VAR10->VAR27[0].VAR28 == VAR12->VAR27[0].VAR28;
    if (!VAR7->VAR80)
    {
        if (VAR19)
        {
            double VAR81[3][3], (*VAR82)[3] = VAR7->VAR83;
            int VAR84, VAR85, VAR46;
            VAR17 = FUN23(VAR2, &VAR84, &VAR7->VAR86, &VAR7->VAR87, VAR7->VAR46, VAR10->VAR27[0].VAR28);
            if (VAR17 < 0)
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR46, FUN24(VAR7->VAR46));
                return VAR17;
            }
            for (VAR15 = 0; VAR15 < 8; VAR15++)
                VAR7->VAR88[0][VAR15] = VAR84;
            FUN25(VAR7->VAR47, VAR81);
            FUN13(VAR81, VAR82);
            VAR85 = 1 << (VAR10->VAR27[0].VAR28 - 1);
            for (VAR15 = 0; VAR15 < 3; VAR15++)
            {
                for (VAR46 = VAR7->VAR86, VAR14 = 0; VAR14 < 3; VAR14++, VAR46 = VAR7->VAR87)
                {
                    VAR7->VAR89[VAR15][VAR14][0] = FUN16(28672 * VAR85 * VAR82[VAR15][VAR14] / VAR46);
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR89[VAR15][VAR14][VAR16] = VAR7->VAR89[VAR15][VAR14][0];
                }
            }
            FUN26(VAR7->VAR89[0][1][0] == 0);
            FUN26(VAR7->VAR89[2][2][0] == 0);
            FUN26(VAR7->VAR89[0][0][0] == VAR7->VAR89[1][0][0]);
            FUN26(VAR7->VAR89[0][0][0] == VAR7->VAR89[2][0][0]);
            VAR7->VAR82 = VAR7->VAR90.VAR82[(VAR10->VAR27[0].VAR28 - 8) >> 1][VAR10->VAR30 + VAR10->VAR29];
            VAR13 = 1;
        }
        if (VAR20)
        {
            double(*VAR81)[3] = VAR7->VAR91;
            int VAR84, VAR49, VAR85;
            VAR17 = FUN23(VAR2, &VAR84, &VAR7->VAR92, &VAR7->VAR93, VAR7->VAR49, VAR12->VAR27[0].VAR28);
            if (VAR17 < 0)
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR49, FUN24(VAR7->VAR49));
                return VAR17;
            }
            for (VAR15 = 0; VAR15 < 8; VAR15++)
                VAR7->VAR88[1][VAR15] = VAR84;
            FUN25(VAR7->VAR50, VAR81);
            VAR85 = 1 << (29 - VAR12->VAR27[0].VAR28);
            for (VAR49 = VAR7->VAR92, VAR15 = 0; VAR15 < 3; VAR15++, VAR49 = VAR7->VAR93)
            {
                for (VAR14 = 0; VAR14 < 3; VAR14++)
                {
                    VAR7->VAR94[VAR15][VAR14][0] = FUN16(VAR85 * VAR49 * VAR81[VAR15][VAR14] / 28672);
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR94[VAR15][VAR14][VAR16] = VAR7->VAR94[VAR15][VAR14][0];
                }
            }
            FUN26(VAR7->VAR94[1][2][0] == VAR7->VAR94[2][0][0]);
            VAR7->VAR81 = VAR7->VAR90.VAR81[(VAR12->VAR27[0].VAR28 - 8) >> 1][VAR12->VAR30 + VAR12->VAR29];
            VAR7->VAR95 = VAR7->VAR90.VAR95[(VAR12->VAR27[0].VAR28 - 8) >> 1][VAR12->VAR30 + VAR12->VAR29];
            VAR13 = 1;
        }
        if (VAR7->VAR79 && (VAR19 || VAR20))
        {
            int VAR96 = VAR10->VAR27[0].VAR28, VAR97 = VAR12->VAR27[0].VAR28;
            double(*VAR81)[3] = VAR7->VAR91;
            double(*VAR82)[3] = VAR7->VAR83;
            double VAR98[3][3];
            int VAR46, VAR49;
            FUN15(VAR98, VAR82, VAR81);
            for (VAR49 = VAR7->VAR92, VAR14 = 0; VAR14 < 3; VAR14++, VAR49 = VAR7->VAR93)
            {
                for (VAR46 = VAR7->VAR86, VAR15 = 0; VAR15 < 3; VAR15++, VAR46 = VAR7->VAR87)
                {
                    VAR7->VAR99[VAR14][VAR15][0] = FUN16(16384 * VAR98[VAR14][VAR15] * VAR49 * (1 << VAR96) / (VAR46 * (1 << VAR97)));
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR99[VAR14][VAR15][VAR16] = VAR7->VAR99[VAR14][VAR15][0];
                }
            }
            FUN26(VAR7->VAR99[1][0][0] == 0);
            FUN26(VAR7->VAR99[2][0][0] == 0);
            VAR7->VAR98 = VAR7->VAR90.VAR98[(VAR96 - 8) >> 1][(VAR97 - 8) >> 1][VAR10->VAR30 + VAR10->VAR29];
        }
    }
    if (VAR13)
        FUN27();
    return 0;
}