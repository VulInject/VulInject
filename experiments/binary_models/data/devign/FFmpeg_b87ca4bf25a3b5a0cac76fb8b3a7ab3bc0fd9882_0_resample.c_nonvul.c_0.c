static int FUN1(VAR1 *VAR2, void *VAR3, double VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, double VAR10)
{
    int VAR11, VAR12;
    double VAR13, VAR14, VAR15, VAR16, VAR17;
    double *VAR18 = FUN2(VAR5 + 1, sizeof(*VAR18));
    double *VAR19 = FUN2(VAR7 / 2 + 1, sizeof(*VAR19));
    const int VAR20 = (VAR5 - 1) / 2;
    if (!VAR18 || !VAR19)
        goto VAR21;
    if (VAR4 > 1.0)
        VAR4 = 1.0;
    FUN3(VAR7 == 1 || VAR7 % 2 == 0);
    if (VAR4 == 1.0)
    {
        for (VAR11 = 0; VAR11 <= VAR7 / 2; VAR11++)
            VAR19[VAR11] = FUN4(VAR22 * VAR11 / VAR7);
    }
    for (VAR11 = 0; VAR11 <= VAR7 / 2; VAR11++)
    {
        double VAR23 = 0;
        VAR17 = VAR19[VAR11];
        for (VAR12 = 0; VAR12 <= VAR5; VAR12++)
        {
            VAR13 = VAR22 * ((double)(VAR12 - VAR20) - (double)VAR11 / VAR7) * VAR4;
            if (VAR13 == 0)
                VAR14 = 1.0;
            else if (VAR4 == 1.0)
                VAR14 = VAR17 / VAR13;
            else
                VAR14 = FUN4(VAR13) / VAR13;
            switch (VAR9)
            {
            case VAR24:
            {
                const float VAR25 = -0.5;
                VAR13 = FUN5(((double)(VAR12 - VAR20) - (double)VAR11 / VAR7) * VAR4);
                if (VAR13 < 1.0)
                    VAR14 = 1 - 3 * VAR13 * VAR13 + 2 * VAR13 * VAR13 * VAR13 + VAR25 * (-VAR13 * VAR13 + VAR13 * VAR13 * VAR13);
                else
                    VAR14 = VAR25 * (-4 + 8 * VAR13 - 5 * VAR13 * VAR13 + VAR13 * VAR13 * VAR13);
                break;
            }
            case VAR26:
                VAR15 = 2.0 * VAR13 / (VAR4 * VAR5) + VAR22;
                VAR16 = FUN6(VAR15);
                VAR14 *= 0.3635819 - 0.4891775 * VAR16 + 0.1365995 * (2 * VAR16 * VAR16 - 1) - 0.0106411 * (4 * VAR16 * VAR16 * VAR16 - 3 * VAR16);
                break;
            case VAR27:
                VAR15 = 2.0 * VAR13 / (VAR4 * VAR5 * VAR22);
                VAR14 *= FUN7(VAR10 * FUN8(FUN9(1 - VAR15 * VAR15, 0)));
                break;
            default:
                FUN3(0);
            }
            VAR18[VAR12] = VAR14;
            VAR17 = -VAR17;
            if (VAR12 < VAR5)
                VAR23 += VAR14;
        }
        switch (VAR2->VAR28)
        {
        case VAR29:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((VAR30 *)VAR3)[VAR11 * VAR6 + VAR12] = FUN10(FUN11(VAR18[VAR12] * VAR8 / VAR23), VAR31, VAR32);
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((VAR30 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((VAR30 *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((VAR30 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = FUN10(FUN11(VAR18[VAR12] * VAR8 / (VAR23 - VAR18[0] + VAR18[VAR5])), VAR31, VAR32);
            }
            break;
        case VAR33:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((VAR34 *)VAR3)[VAR11 * VAR6 + VAR12] = FUN12(FUN13(VAR18[VAR12] * VAR8 / VAR23));
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((VAR34 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((VAR34 *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((VAR34 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = FUN12(FUN13(VAR18[VAR12] * VAR8 / (VAR23 - VAR18[0] + VAR18[VAR5])));
            }
            break;
        case VAR35:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((float *)VAR3)[VAR11 * VAR6 + VAR12] = VAR18[VAR12] * VAR8 / VAR23;
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((float *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((float *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((float *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = VAR18[VAR12] * VAR8 / (VAR23 - VAR18[0] + VAR18[VAR5]);
            }
            break;
        case VAR36:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((double *)VAR3)[VAR11 * VAR6 + VAR12] = VAR18[VAR12] * VAR8 / VAR23;
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((double *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((double *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((double *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = VAR18[VAR12] * VAR8 / (VAR23 - VAR18[0] + VAR18[VAR5]);
            }
            break;
        }
    }
    {
        int VAR37, VAR38;
        double VAR39[VAR40 + VAR5];
        double VAR41[VAR40];
        double VAR42 = -2, VAR43 = 2, VAR44 = -2, VAR45 = 2;
        for (VAR12 = 0; VAR12 < VAR40; VAR12++)
        {
            double VAR46 = 0, VAR47 = 0, VAR48 = 0;
            for (VAR37 = 0; VAR37 < VAR40 + VAR5; VAR37++)
                VAR39[VAR37] = FUN6(VAR12 * VAR37 * VAR22 / VAR40);
            for (VAR37 = 0; VAR37 < VAR40; VAR37++)
            {
                double VAR49 = 0;
                VAR11 = 0;
                for (VAR38 = 0; VAR38 < VAR5; VAR38++)
                    VAR49 += VAR3[VAR11 * VAR5 + VAR38] * VAR39[VAR38 + VAR37];
                VAR41[VAR37] = VAR49 / (1 << VAR50);
                VAR46 += VAR39[VAR37 + VAR20] * VAR39[VAR37 + VAR20];
                VAR48 += VAR41[VAR37] * VAR41[VAR37];
                VAR47 += VAR39[VAR37 + VAR20] * VAR41[VAR37];
            }
            VAR46 = FUN8(2 * VAR46 / VAR40);
            VAR48 = FUN8(2 * VAR48 / VAR40);
            VAR47 = 2 * VAR47 / VAR40;
            VAR42 = FUN9(VAR42, VAR48);
            VAR43 = FUN14(VAR43, VAR48);
            VAR44 = FUN9(VAR44, VAR47);
            VAR45 = FUN14(VAR45, VAR47);
            if (VAR12 % 11 == 0)
            {
                FUN15(NULL, VAR51, "", VAR12, VAR46, VAR42, VAR43, VAR44, VAR45);
                VAR43 = VAR45 = 2;
                VAR42 = VAR44 = -2;
            }
        }
    }
VAR21:
    FUN16(VAR18);
    FUN16(VAR19);
    return 0;
}