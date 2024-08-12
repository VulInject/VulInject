static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13 = 0, VAR14 = 0, VAR15;
    double VAR16 = VAR8->VAR17 * FUN2(VAR8->VAR18 / VAR8->VAR17, VAR6 / VAR8->VAR19);
    int VAR20 = 0;
    FUN3(VAR2, NULL, &VAR13, NULL, VAR8->VAR21 + VAR16 * (-VAR8->VAR22 / 2 - 0.5), VAR16);
    for (VAR11 = 0; VAR11 < VAR8->VAR22; VAR11++)
    {
        const double VAR23 = VAR8->VAR21 + VAR16 * (VAR11 - VAR8->VAR22 / 2);
        memset(VAR4 + VAR5 * VAR11, 0, sizeof(*VAR4) * VAR8->VAR24);
        FUN3(VAR2, VAR4 + VAR5 * VAR11, &VAR13, &VAR14, VAR23, VAR16);
        VAR15 = VAR13;
        FUN3(VAR2, VAR4 + VAR5 * VAR11, &VAR15, NULL, VAR23 + VAR16 / 2, VAR16);
        for (VAR10 = 0; VAR10 < VAR8->VAR24; VAR10++)
        {
            const double VAR25 = VAR8->VAR26 + VAR16 * (VAR10 - VAR8->VAR24 / 2);
            double VAR27 = VAR25;
            double VAR28 = VAR23;
            uint32_t VAR29 = 0;
            double VAR30 = VAR8->VAR31 / (double)(1LL << 32);
            VAR8->VAR31 = VAR8->VAR31 * 1664525 + 1013904223;
            if (VAR4[VAR10 + VAR11 * VAR5] & 0xFF000000)
                continue;
            VAR20 = (VAR10 == 0 || VAR8->VAR32 != VAR33 || VAR4[VAR10 - 1 + VAR11 * VAR5] == 0xFF000000);
            VAR34 = VAR35 * VAR35 - VAR36 * VAR36 + VAR25;
            VAR37 = 2 * VAR35 * VAR36 + VAR23;
            FUN4(VAR34, VAR37, VAR35, VAR36)
            if (VAR20)
            {
                if (VAR38 && VAR8->VAR39[VAR12 >> 1][0] == VAR34 && VAR8->VAR39[VAR12 >> 1][1] == VAR37)
                    break;
            }
            VAR8->VAR39[VAR12][0] = VAR34;
            VAR8->VAR39[VAR12][1] = VAR37;
            for (VAR12 = 0; VAR12 < VAR8->VAR40 - 8; VAR12++)
            {
                double VAR41;
                FUN5(VAR41, VAR28, VAR27, VAR28, 0)
                VAR12++;
                FUN5(VAR27, VAR28, VAR41, VAR28, 1)
                VAR12++;
                FUN5(VAR41, VAR28, VAR27, VAR28, 0)
                VAR12++;
                FUN5(VAR27, VAR28, VAR41, VAR28, 1)
                VAR12++;
                FUN5(VAR41, VAR28, VAR27, VAR28, 0)
                VAR12++;
                FUN5(VAR27, VAR28, VAR41, VAR28, 1)
                VAR12++;
                FUN5(VAR41, VAR28, VAR27, VAR28, 0)
                VAR12++;
                FUN5(VAR27, VAR28, VAR41, VAR28, 1)
                if (VAR27 * VAR27 + VAR28 * VAR28 > VAR8->VAR42)
                {
                    VAR12 -= FUN6(7, VAR12);
                    for (; VAR12 < VAR8->VAR40; VAR12++)
                    {
                        VAR27 = VAR8->VAR39[VAR12][0];
                        VAR28 = VAR8->VAR39[VAR12][1];
                        if (VAR27 * VAR27 + VAR28 * VAR28 > VAR8->VAR42)
                        {
                            switch (VAR8->VAR43)
                            {
                            case VAR44:
                                VAR27 = VAR12;
                                break;
                            case VAR45:
                                VAR27 = VAR12 + FUN7(FUN8(VAR8->VAR42) / FUN8(VAR27 * VAR27 + VAR28 * VAR28));
                                break;
                            }
                            VAR29 = FUN9((FUN10(VAR27) + 1) * 127) + FUN9((FUN10(VAR27 / 1.234) + 1) * 127) * 256 * 256 + FUN9((FUN10(VAR27 / 100) + 1) * 127) * 256;
                            break;
                        }
                    }
                    break;
                }
            }
            if (!VAR29)
            {
                if (VAR8->VAR32 == VAR46)
                {
                    int VAR47;
                    for (VAR47 = VAR12 - 1; VAR47; VAR47--)
                        if (FUN11(VAR8->VAR39[VAR47][0] - VAR27) + FUN11(VAR8->VAR39[VAR47][1] - VAR28) < 0.0000000000000001)
                            break;
                    if (VAR47)
                    {
                        VAR29 = VAR12 - VAR47;
                        VAR29 = ((VAR29 << 5) & 0xE0) + ((VAR29 << 16) & 0xE000) + ((VAR29 << 27) & 0xE00000);
                    }
                }
                else if (VAR8->VAR32 == VAR48)
                {
                    VAR29 = FUN12(VAR12 * 255.0 / VAR8->VAR40 + VAR30) * 0x010101;
                }
                else if (VAR8->VAR32 == VAR49)
                {
                    int VAR47;
                    double VAR50 = 9999;
                    int VAR51 = 0;
                    for (VAR47 = VAR12 - 1; VAR47 >= 0; VAR47--)
                        if (FUN11(VAR8->VAR39[VAR47][0]) + FUN11(VAR8->VAR39[VAR47][1]) < VAR50)
                        {
                            VAR50 = FUN11(VAR8->VAR39[VAR47][0]) + FUN11(VAR8->VAR39[VAR47][1]);
                            VAR51 = VAR47;
                        }
                    VAR50 = FUN13(VAR50);
                    VAR29 = FUN9((VAR8->VAR39[VAR51][0] / VAR50 + 1) * 127 + VAR30) + FUN9((VAR8->VAR39[VAR51][1] / VAR50 + 1) * 127 + VAR30) * 256;
                }
            }
            VAR29 |= 0xFF000000;
            VAR4[VAR10 + VAR11 * VAR5] = VAR29;
            if (VAR14 < VAR8->VAR52)
            {
                VAR8->VAR53[VAR14].VAR54[0] = VAR25;
                VAR8->VAR53[VAR14].VAR54[1] = VAR23;
                VAR8->VAR53[VAR14++].VAR55 = VAR29;
            }
        }
        FUN3(VAR2, NULL, &VAR13, &VAR14, VAR23 + VAR16 / 2, VAR16);
    }
    FUN14(void *, VAR8->VAR53, VAR8->VAR56);
    VAR8->VAR57 = VAR14;
    if (VAR8->VAR57 == VAR8->VAR52)
        FUN15(0, VAR58, "");
}