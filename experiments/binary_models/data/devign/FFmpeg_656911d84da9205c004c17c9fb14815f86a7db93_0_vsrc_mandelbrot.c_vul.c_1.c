static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13 = 0, VAR14 = 0, VAR15;
    double VAR16 = VAR8->VAR17 * FUN2(VAR8->VAR18 / VAR8->VAR17, VAR6 / VAR8->VAR19);
    int VAR20 = 0;
    FUN3(VAR2, NULL, &VAR13, NULL, VAR8->VAR21 + VAR16 * (-VAR8->VAR22 / 2 - 0.5), VAR16);
    VAR15 = VAR13;
    memset(VAR4, 0, sizeof(*VAR4) * VAR8->VAR23);
    for (VAR11 = 0; VAR11 < VAR8->VAR22; VAR11++)
    {
        int VAR24 = VAR11 + 1;
        const double VAR25 = VAR8->VAR21 + VAR16 * (VAR11 - VAR8->VAR22 / 2);
        FUN3(VAR2, NULL, &VAR13, &VAR14, VAR25, VAR16);
        if (VAR24 < VAR8->VAR22)
        {
            memset(VAR4 + VAR5 * VAR24, 0, sizeof(*VAR4) * VAR8->VAR23);
            FUN3(VAR2, VAR4 + VAR5 * VAR24, &VAR15, NULL, VAR25 + 3 * VAR16 / 2, VAR16);
        }
        for (VAR10 = 0; VAR10 < VAR8->VAR23; VAR10++)
        {
            float VAR26;
            const double VAR27 = VAR8->VAR28 + VAR16 * (VAR10 - VAR8->VAR23 / 2);
            double VAR29 = VAR27;
            double VAR30 = VAR25;
            uint32_t VAR31 = 0;
            double VAR32 = VAR8->VAR33 / (double)(1LL << 32);
            VAR8->VAR33 = VAR8->VAR33 * 1664525 + 1013904223;
            if (VAR4[VAR10 + VAR11 * VAR5] & 0xFF000000)
                continue;
            if (FUN4(VAR8, VAR4, VAR10, VAR11, VAR5))
            {
                if (VAR14 < VAR8->VAR34)
                {
                    VAR8->VAR35[VAR14].VAR36[0] = VAR27;
                    VAR8->VAR35[VAR14].VAR36[1] = VAR25;
                    VAR8->VAR35[VAR14++].VAR37 = VAR4[VAR10 + VAR11 * VAR5];
                }
                continue;
            }
            VAR20 = (VAR10 == 0 || VAR8->VAR38 != VAR39 || VAR4[VAR10 - 1 + VAR11 * VAR5] == 0xFF000000);
            if (VAR20)
                VAR26 = VAR16 * 1 * FUN5(FUN6(VAR10 - VAR8->VAR23 / 2) + FUN6(VAR11 - VAR8->VAR22 / 2)) / VAR8->VAR23;
            VAR40 = VAR41 * VAR41 - VAR42 * VAR42 + VAR27;
            VAR43 = 2 * VAR41 * VAR42 + VAR25;
            FUN7(VAR40, VAR43, VAR41, VAR42)
            if (VAR20)
            {
                if (VAR44 && FUN8(VAR8->VAR45[VAR12 >> 1][0] - VAR40) + FUN8(VAR8->VAR45[VAR12 >> 1][1] - VAR43) <= VAR26)
                    break;
            }
            VAR8->VAR45[VAR12][0] = VAR40;
            VAR8->VAR45[VAR12][1] = VAR43;
            for (VAR12 = 0; VAR12 < VAR8->VAR46 - 8; VAR12++)
            {
                double VAR47;
                FUN9(VAR47, VAR30, VAR29, VAR30, 0)
                VAR12++;
                FUN9(VAR29, VAR30, VAR47, VAR30, 1)
                VAR12++;
                FUN9(VAR47, VAR30, VAR29, VAR30, 0)
                VAR12++;
                FUN9(VAR29, VAR30, VAR47, VAR30, 1)
                VAR12++;
                FUN9(VAR47, VAR30, VAR29, VAR30, 0)
                VAR12++;
                FUN9(VAR29, VAR30, VAR47, VAR30, 1)
                VAR12++;
                FUN9(VAR47, VAR30, VAR29, VAR30, 0)
                VAR12++;
                FUN9(VAR29, VAR30, VAR47, VAR30, 1)
                if (VAR29 * VAR29 + VAR30 * VAR30 > VAR8->VAR48)
                {
                    VAR12 -= FUN10(7, VAR12);
                    for (; VAR12 < VAR8->VAR46; VAR12++)
                    {
                        VAR29 = VAR8->VAR45[VAR12][0];
                        VAR30 = VAR8->VAR45[VAR12][1];
                        if (VAR29 * VAR29 + VAR30 * VAR30 > VAR8->VAR48)
                        {
                            switch (VAR8->VAR49)
                            {
                            case VAR50:
                                VAR29 = VAR12;
                                break;
                            case VAR51:
                                VAR29 = VAR12 + FUN11(FUN12(VAR8->VAR48) / FUN12(VAR29 * VAR29 + VAR30 * VAR30));
                                break;
                            }
                            VAR31 = FUN13((FUN14(VAR29) + 1) * 127) + FUN13((FUN14(VAR29 / 1.234) + 1) * 127) * 256 * 256 + FUN13((FUN14(VAR29 / 100) + 1) * 127) * 256;
                            break;
                        }
                    }
                    break;
                }
            }
            if (!VAR31)
            {
                if (VAR8->VAR38 == VAR52)
                {
                    int VAR53;
                    for (VAR53 = VAR12 - 1; VAR53; VAR53--)
                        if (FUN6(VAR8->VAR45[VAR53][0] - VAR29) + FUN6(VAR8->VAR45[VAR53][1] - VAR30) < VAR26 * VAR26 * 10)
                            break;
                    if (VAR53)
                    {
                        VAR31 = VAR12 - VAR53;
                        VAR31 = ((VAR31 << 5) & 0xE0) + ((VAR31 << 16) & 0xE000) + ((VAR31 << 27) & 0xE00000);
                    }
                }
                else if (VAR8->VAR38 == VAR54)
                {
                    VAR31 = FUN15(VAR12 * 255.0 / VAR8->VAR46 + VAR32) * 0x010101;
                }
                else if (VAR8->VAR38 == VAR55)
                {
                    int VAR53;
                    double VAR56 = 9999;
                    int VAR57 = 0;
                    for (VAR53 = VAR12 - 1; VAR53 >= 0; VAR53--)
                        if (FUN6(VAR8->VAR45[VAR53][0]) + FUN6(VAR8->VAR45[VAR53][1]) < VAR56)
                        {
                            VAR56 = FUN6(VAR8->VAR45[VAR53][0]) + FUN6(VAR8->VAR45[VAR53][1]);
                            VAR57 = VAR53;
                        }
                    VAR56 = FUN5(VAR56);
                    VAR31 = FUN13((VAR8->VAR45[VAR57][0] / VAR56 + 1) * 127 + VAR32) + FUN13((VAR8->VAR45[VAR57][1] / VAR56 + 1) * 127 + VAR32) * 256;
                }
            }
            VAR31 |= 0xFF000000;
            VAR4[VAR10 + VAR11 * VAR5] = VAR31;
            if (VAR14 < VAR8->VAR34)
            {
                VAR8->VAR35[VAR14].VAR36[0] = VAR27;
                VAR8->VAR35[VAR14].VAR36[1] = VAR25;
                VAR8->VAR35[VAR14++].VAR37 = VAR31;
            }
        }
        FUN3(VAR2, NULL, &VAR13, &VAR14, VAR25 + VAR16 / 2, VAR16);
    }
    FUN16(void *, VAR8->VAR35, VAR8->VAR58);
    VAR8->VAR59 = VAR14;
    if (VAR8->VAR59 == VAR8->VAR34)
        FUN17(0, VAR60, "");
}