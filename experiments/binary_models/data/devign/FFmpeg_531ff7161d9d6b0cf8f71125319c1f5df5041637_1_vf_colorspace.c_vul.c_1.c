static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR9 *VAR10 = FUN2(VAR4->VAR11);
    const VAR9 *VAR12 = FUN2(VAR5->VAR11);
    int VAR13 = 0, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19 = 0, VAR20 = 0;
    (((VAR21) == 0 && (VAR22) == 0) || ((VAR21) == 1 && (VAR22) == 0) || ((VAR21) == 1 && (VAR22) == 1))((VAR23) != NULL && (VAR23)->VAR24 == 3 && !((VAR23)->VAR25 & VAR26) && FUN3((VAR23)->VAR27[0].VAR28) && FUN4((VAR23)->VAR29, (VAR23)->VAR30)) if (!FUN5(VAR10))
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
        VAR7->VAR35 = FUN9(VAR7->VAR34);
        if (!VAR7->VAR35)
        {
            FUN6(VAR2, VAR31, "", VAR7->VAR34, FUN10(VAR7->VAR34));
            return FUN8(VAR32);
        }
        VAR7->VAR36 = VAR5->VAR33;
        VAR7->VAR37 = FUN9(VAR7->VAR36);
        if (!VAR7->VAR37)
        {
            if (VAR7->VAR36 == VAR51)
            {
                if (VAR7->VAR52 == VAR53)
                {
                    FUN6(VAR2, VAR31, "");
                }
                else
                {
                    FUN6(VAR2, VAR31, "", VAR7->VAR52);
                }
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR36, FUN10(VAR7->VAR36));
            }
            return FUN8(VAR32);
        }
        VAR7->VAR54 = !memcmp(VAR7->VAR35, VAR7->VAR37, sizeof(*VAR7->VAR35));
        if (!VAR7->VAR54)
        {
            double VAR55[3][3], VAR56[3][3], VAR57[3][3];
            FUN11(VAR7->VAR37, VAR55);
            FUN12(VAR55, VAR56);
            FUN11(VAR7->VAR35, VAR55);
            if (VAR7->VAR37->VAR58 != VAR7->VAR35->VAR58 && VAR7->VAR59 != VAR60)
            {
                double VAR61[3][3], VAR62[3][3];
                FUN13(VAR61, VAR7->VAR59, VAR7->VAR35->VAR58, VAR7->VAR37->VAR58);
                FUN14(VAR62, VAR55, VAR61);
                FUN14(VAR57, VAR62, VAR56);
            }
            else
            {
                FUN14(VAR57, VAR55, VAR56);
            }
            for (VAR14 = 0; VAR14 < 3; VAR14++)
                for (VAR15 = 0; VAR15 < 3; VAR15++)
                {
                    VAR7->VAR63[VAR14][VAR15][0] = FUN15(16384.0 * VAR57[VAR14][VAR15]);
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR63[VAR14][VAR15][VAR16] = VAR7->VAR63[VAR14][VAR15][0];
                }
            VAR13 = 1;
        }
    }
    if (!VAR7->VAR40)
    {
        FUN16(&VAR7->VAR64);
        VAR7->VAR39 = VAR4->VAR38;
        VAR7->VAR40 = FUN17(VAR7->VAR39);
        if (!VAR7->VAR40)
        {
            FUN6(VAR2, VAR31, "", VAR7->VAR39, FUN18(VAR7->VAR39));
            return FUN8(VAR32);
        }
    }
    if (!VAR7->VAR42)
    {
        FUN16(&VAR7->VAR64);
        VAR7->VAR41 = VAR5->VAR38;
        VAR7->VAR42 = FUN17(VAR7->VAR41);
        if (!VAR7->VAR42)
        {
            if (VAR7->VAR41 == VAR65)
            {
                if (VAR7->VAR52 == VAR53)
                {
                    FUN6(VAR2, VAR31, "");
                }
                else
                {
                    FUN6(VAR2, VAR31, "", VAR7->VAR52);
                }
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR41, FUN18(VAR7->VAR41));
            }
            return FUN8(VAR32);
        }
    }
    VAR7->VAR66 = VAR7->VAR67 || (VAR7->VAR54 && !memcmp(VAR7->VAR40, VAR7->VAR42, sizeof(*VAR7->VAR40)));
    if (!VAR7->VAR66 && !VAR7->VAR64)
    {
        VAR17 = FUN19(VAR7);
        if (VAR17 < 0)
            return VAR17;
        VAR13 = 1;
    }
    if (!VAR7->VAR47)
    {
        VAR7->VAR44 = VAR4->VAR43;
        VAR7->VAR46 = VAR4->VAR45;
        VAR7->VAR47 = FUN20(VAR7->VAR44);
        if (!VAR7->VAR47)
        {
            FUN6(VAR2, VAR31, "", VAR7->VAR44, FUN21(VAR7->VAR44));
            return FUN8(VAR32);
        }
        VAR19 = 1;
    }
    if (!VAR7->VAR50)
    {
        VAR7->VAR48 = VAR5->VAR43;
        VAR7->VAR49 = VAR5->VAR45;
        VAR7->VAR50 = FUN20(VAR7->VAR48);
        if (!VAR7->VAR50)
        {
            if (VAR7->VAR48 == VAR68)
            {
                if (VAR7->VAR52 == VAR53)
                {
                    FUN6(VAR2, VAR31, "");
                }
                else
                {
                    FUN6(VAR2, VAR31, "", VAR7->VAR52);
                }
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR48, FUN21(VAR7->VAR48));
            }
            return FUN8(VAR32);
        }
        VAR20 = 1;
    }
    VAR18 = VAR10->VAR30 == VAR12->VAR30 && VAR10->VAR29 == VAR12->VAR29;
    VAR7->VAR69 = VAR7->VAR66 && VAR18;
    VAR7->VAR70 = VAR7->VAR69 && VAR7->VAR46 == VAR7->VAR49 && !memcmp(VAR7->VAR47, VAR7->VAR50, sizeof(*VAR7->VAR47));
    if (!VAR7->VAR70)
    {
        if (VAR19)
        {
            double VAR71[3][3], (*VAR72)[3] = VAR7->VAR73;
            int VAR74, VAR75, VAR46;
            VAR17 = FUN22(&VAR74, &VAR7->VAR76, &VAR7->VAR77, VAR7->VAR46, VAR10->VAR27[0].VAR28);
            if (VAR17 < 0)
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR46, FUN23(VAR7->VAR46));
                return VAR17;
            }
            for (VAR15 = 0; VAR15 < 8; VAR15++)
                VAR7->VAR78[0][VAR15] = VAR74;
            FUN24(VAR7->VAR47, VAR71);
            FUN12(VAR71, VAR72);
            VAR75 = 1 << (VAR10->VAR27[0].VAR28 - 1);
            for (VAR15 = 0; VAR15 < 3; VAR15++)
            {
                for (VAR46 = VAR7->VAR76, VAR14 = 0; VAR14 < 3; VAR14++, VAR46 = VAR7->VAR77)
                {
                    VAR7->VAR79[VAR15][VAR14][0] = FUN15(28672 * VAR75 * VAR72[VAR15][VAR14] / VAR46);
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR79[VAR15][VAR14][VAR16] = VAR7->VAR79[VAR15][VAR14][0];
                }
            }
            FUN25(VAR7->VAR79[0][1][0] == 0);
            FUN25(VAR7->VAR79[2][2][0] == 0);
            FUN25(VAR7->VAR79[0][0][0] == VAR7->VAR79[1][0][0]);
            FUN25(VAR7->VAR79[0][0][0] == VAR7->VAR79[2][0][0]);
            VAR7->VAR72 = VAR7->VAR80.VAR72[(VAR10->VAR27[0].VAR28 - 8) >> 1][VAR10->VAR30 + VAR10->VAR29];
            VAR13 = 1;
        }
        if (VAR20)
        {
            double(*VAR71)[3] = VAR7->VAR81;
            int VAR74, VAR49, VAR75;
            VAR17 = FUN22(&VAR74, &VAR7->VAR82, &VAR7->VAR83, VAR7->VAR49, VAR12->VAR27[0].VAR28);
            if (VAR17 < 0)
            {
                FUN6(VAR2, VAR31, "", VAR7->VAR49, FUN23(VAR7->VAR49));
                return VAR17;
            }
            for (VAR15 = 0; VAR15 < 8; VAR15++)
                VAR7->VAR78[1][VAR15] = VAR74;
            FUN24(VAR7->VAR50, VAR71);
            VAR75 = 1 << (29 - VAR12->VAR27[0].VAR28);
            for (VAR49 = VAR7->VAR82, VAR15 = 0; VAR15 < 3; VAR15++, VAR49 = VAR7->VAR83)
            {
                for (VAR14 = 0; VAR14 < 3; VAR14++)
                {
                    VAR7->VAR84[VAR15][VAR14][0] = FUN15(VAR75 * VAR49 * VAR71[VAR15][VAR14] / 28672);
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR84[VAR15][VAR14][VAR16] = VAR7->VAR84[VAR15][VAR14][0];
                }
            }
            FUN25(VAR7->VAR84[1][2][0] == VAR7->VAR84[2][0][0]);
            VAR7->VAR71 = VAR7->VAR80.VAR71[(VAR12->VAR27[0].VAR28 - 8) >> 1][VAR12->VAR30 + VAR12->VAR29];
            VAR7->VAR85 = VAR7->VAR80.VAR85[(VAR12->VAR27[0].VAR28 - 8) >> 1][VAR12->VAR30 + VAR12->VAR29];
            VAR13 = 1;
        }
        if (VAR7->VAR69 && (VAR19 || VAR20))
        {
            int VAR86 = VAR10->VAR27[0].VAR28, VAR87 = VAR12->VAR27[0].VAR28;
            double(*VAR71)[3] = VAR7->VAR81;
            double(*VAR72)[3] = VAR7->VAR73;
            double VAR88[3][3];
            int VAR46, VAR49;
            FUN14(VAR88, VAR72, VAR71);
            for (VAR49 = VAR7->VAR82, VAR14 = 0; VAR14 < 3; VAR14++, VAR49 = VAR7->VAR83)
            {
                for (VAR46 = VAR7->VAR76, VAR15 = 0; VAR15 < 3; VAR15++, VAR46 = VAR7->VAR77)
                {
                    VAR7->VAR89[VAR14][VAR15][0] = FUN15(16384 * VAR88[VAR14][VAR15] * VAR49 * (1 << VAR86) / (VAR46 * (1 << VAR87)));
                    for (VAR16 = 1; VAR16 < 8; VAR16++)
                        VAR7->VAR89[VAR14][VAR15][VAR16] = VAR7->VAR89[VAR14][VAR15][0];
                }
            }
            FUN25(VAR7->VAR89[1][0][0] == 0);
            FUN25(VAR7->VAR89[2][0][0] == 0);
            VAR7->VAR88 = VAR7->VAR80.VAR88[(VAR86 - 8) >> 1][(VAR87 - 8) >> 1][VAR10->VAR30 + VAR10->VAR29];
        }
    }
    if (VAR13)
        FUN26();
    return 0;
}