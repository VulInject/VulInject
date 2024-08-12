int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    int VAR6;
    char *VAR7 = NULL;
    static const char *VAR8[] = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", NULL};
    static double (*VAR9[])(void *, double) = {(void *)VAR10, (void *)VAR11, NULL};
    static const char *VAR12[] = {"", "", NULL};
    FUN2();
    VAR4->VAR13 = FUN3(VAR2->VAR14->VAR15, VAR8, VAR9, VAR12, NULL, NULL, &VAR7);
    if (!VAR4->VAR13)
    {
        FUN4(VAR2->VAR14, VAR16, ""%VAR2\"", VAR2->VAR14->VAR15, VAR7 ? VAR7 : "");
        return -1;
    }
    for (VAR6 = 0; VAR6 < 5; VAR6++)
    {
        VAR4->VAR17[VAR6].VAR18 = VAR19 * 7.0;
        VAR4->VAR17[VAR6].VAR20 = 1.0;
        VAR4->VAR17[VAR6].VAR21 = 0.4;
        VAR4->VAR22[VAR6] = VAR4->VAR23[VAR6] = VAR4->VAR24[VAR6] = VAR4->VAR25[VAR6] = VAR4->VAR26[VAR6] = 1;
        VAR4->VAR27[VAR6] = VAR19 * 5;
    }
    VAR4->VAR28 = VAR2->VAR14->VAR29;
    if (VAR2->VAR30 & VAR31)
    {
        int VAR6;
        char *VAR32;
        VAR32 = VAR2->VAR14->VAR33;
        for (VAR6 = -1; VAR32; VAR6++)
        {
            VAR32 = strchr(VAR32 + 1, '');
        }
        VAR6 += VAR2->VAR34;
        if (VAR6 <= 0 || VAR6 >= VAR35 / sizeof(VAR36))
            return -1;
        VAR4->VAR37 = FUN5(VAR6 * sizeof(VAR36));
        VAR4->VAR38 = VAR6;
        for (VAR6 = 0; VAR6 < VAR4->VAR38; VAR6++)
        {
            VAR36 *VAR39 = &VAR4->VAR37[VAR6];
            VAR39->VAR40 = VAR39->VAR41 = VAR42;
            VAR39->VAR43 = VAR39->VAR44 = VAR19 * 2;
            VAR39->VAR45 = VAR2->VAR46 + 10;
            VAR39->VAR47 = VAR2->VAR46 * 100;
        }
        VAR32 = VAR2->VAR14->VAR33;
        for (VAR6 = 0; VAR6 < VAR4->VAR38 - VAR2->VAR34; VAR6++)
        {
            VAR36 *VAR39;
            int VAR48;
            int VAR49;
            char *VAR50;
            VAR50 = strchr(VAR32, '');
            if (VAR50)
            {
                (*VAR50) = 0;
                VAR50++;
            }
            VAR49 = sscanf(VAR32, "", &VAR48);
            assert(VAR48 >= 0);
            assert(VAR48 < VAR4->VAR38);
            VAR39 = &VAR4->VAR37[VAR48];
            VAR49 += sscanf(VAR32, "", &VAR39->VAR40, &VAR39->VAR43, &VAR39->VAR51, &VAR39->VAR52, &VAR39->VAR53, &VAR39->VAR45, &VAR39->VAR54, &VAR39->VAR55, &VAR39->VAR56, &VAR39->VAR47, &VAR39->VAR57, &VAR39->VAR58, &VAR39->VAR59);
            if (VAR49 != 14)
            {
                FUN4(VAR2->VAR14, VAR16, "", VAR6, VAR49);
                return -1;
            }
            VAR32 = VAR50;
        }
        if (FUN6(VAR2) < 0)
            return -1;
        if ((VAR2->VAR30 & VAR31) && VAR2->VAR14->VAR60 == VAR61)
        {
            return FUN7(VAR2);
            FUN4(VAR2->VAR14, VAR16, "");
            return -1;
        }
    }
    if (!(VAR2->VAR30 & VAR31))
    {
        VAR4->VAR62 = 0.001;
        VAR4->VAR63 = 0.001;
        VAR4->VAR64 = 0.001;
        VAR4->VAR65 = 0.001;
        if (VAR2->VAR14->VAR66 > 1.0)
        {
            FUN4(VAR2->VAR14, VAR16, "");
            return -1;
        }
        if (VAR2->VAR14->VAR67)
        {
            for (VAR6 = 0; VAR6 < 60 * 30; VAR6++)
            {
                double VAR68 = VAR2->VAR14->VAR67 * (VAR6 / 10000.0 + 1.0) * VAR2->VAR46;
                RateControlEntry VAR39;
                double VAR69;
                if (VAR6 % ((VAR2->VAR70 + 3) / 4) == 0)
                    VAR39.VAR40 = VAR71;
                else if (VAR6 % (VAR2->VAR34 + 1))
                    VAR39.VAR40 = VAR72;
                else
                    VAR39.VAR40 = VAR42;
                VAR39.VAR41 = VAR39.VAR40;
                VAR39.VAR56 = VAR68 * VAR2->VAR46 / 100000;
                VAR39.VAR47 = VAR2->VAR46;
                VAR39.VAR43 = VAR19 * 2;
                VAR39.VAR54 = 2;
                VAR39.VAR55 = 1;
                VAR39.VAR45 = 1;
                if (VAR2->VAR40 == VAR71)
                {
                    VAR39.VAR57 = VAR2->VAR46;
                    VAR39.VAR51 = VAR68;
                    VAR39.VAR52 = 0;
                    VAR39.VAR53 = 0;
                }
                else
                {
                    VAR39.VAR57 = 0;
                    VAR39.VAR51 = 0;
                    VAR39.VAR52 = VAR68 * 0.9;
                    VAR39.VAR53 = VAR68 * 0.1;
                }
                VAR4->VAR22[VAR39.VAR40] += VAR39.VAR51 * VAR39.VAR43;
                VAR4->VAR23[VAR39.VAR40] += VAR39.VAR52 * VAR39.VAR43;
                VAR4->VAR24[VAR39.VAR40] += VAR39.VAR53;
                VAR4->VAR26[VAR39.VAR40]++;
                VAR68 = VAR39.VAR51 + VAR39.VAR52;
                VAR69 = FUN8(VAR2, &VAR39, VAR4->VAR65 / VAR4->VAR64, VAR6);
                VAR4->VAR65 += VAR2->VAR73 / (1 / FUN9(VAR2->VAR14->VAR74));
            }
        }
    }
    return 0;
}