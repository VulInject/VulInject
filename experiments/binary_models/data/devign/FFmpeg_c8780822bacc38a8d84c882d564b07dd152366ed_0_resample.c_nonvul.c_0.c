static int FUN1(VAR1 *VAR2, void *VAR3, double VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12;
    double VAR13, VAR14, VAR15, VAR16;
    double *VAR17 = FUN2(VAR5 + 1, sizeof(*VAR17));
    const int VAR18 = (VAR5 - 1) / 2;
    if (!VAR17)
        return FUN3(VAR19);
    if (VAR4 > 1.0)
        VAR4 = 1.0;
    FUN4(VAR7 == 1 || VAR7 % 2 == 0);
    for (VAR11 = 0; VAR11 <= VAR7 / 2; VAR11++)
    {
        double VAR20 = 0;
        for (VAR12 = 0; VAR12 <= VAR5; VAR12++)
        {
            VAR13 = VAR21 * ((double)(VAR12 - VAR18) - (double)VAR11 / VAR7) * VAR4;
            if (VAR13 == 0)
                VAR14 = 1.0;
            else
                VAR14 = FUN5(VAR13) / VAR13;
            switch (VAR9)
            {
            case VAR22:
            {
                const float VAR23 = -0.5;
                VAR13 = FUN6(((double)(VAR12 - VAR18) - (double)VAR11 / VAR7) * VAR4);
                if (VAR13 < 1.0)
                    VAR14 = 1 - 3 * VAR13 * VAR13 + 2 * VAR13 * VAR13 * VAR13 + VAR23 * (-VAR13 * VAR13 + VAR13 * VAR13 * VAR13);
                else
                    VAR14 = VAR23 * (-4 + 8 * VAR13 - 5 * VAR13 * VAR13 + VAR13 * VAR13 * VAR13);
                break;
            }
            case VAR24:
                VAR15 = 2.0 * VAR13 / (VAR4 * VAR5) + VAR21;
                VAR16 = FUN7(VAR15);
                VAR14 *= 0.3635819 - 0.4891775 * VAR16 + 0.1365995 * (2 * VAR16 * VAR16 - 1) - 0.0106411 * (4 * VAR16 * VAR16 * VAR16 - 3 * VAR16);
                break;
            case VAR25:
                VAR15 = 2.0 * VAR13 / (VAR4 * VAR5 * VAR21);
                VAR14 *= FUN8(VAR10 * FUN9(FUN10(1 - VAR15 * VAR15, 0)));
                break;
            default:
                FUN4(0);
            }
            VAR17[VAR12] = VAR14;
            if (VAR12 < VAR5)
                VAR20 += VAR14;
        }
        switch (VAR2->VAR26)
        {
        case VAR27:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((VAR28 *)VAR3)[VAR11 * VAR6 + VAR12] = FUN11(FUN12(VAR17[VAR12] * VAR8 / VAR20), VAR29, VAR30);
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((VAR28 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((VAR28 *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((VAR28 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = FUN11(FUN12(VAR17[VAR12] * VAR8 / (VAR20 - VAR17[0] + VAR17[VAR5])), VAR29, VAR30);
            }
            break;
        case VAR31:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((VAR32 *)VAR3)[VAR11 * VAR6 + VAR12] = FUN13(FUN14(VAR17[VAR12] * VAR8 / VAR20));
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((VAR32 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((VAR32 *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((VAR32 *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = FUN13(FUN14(VAR17[VAR12] * VAR8 / (VAR20 - VAR17[0] + VAR17[VAR5])));
            }
            break;
        case VAR33:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((float *)VAR3)[VAR11 * VAR6 + VAR12] = VAR17[VAR12] * VAR8 / VAR20;
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((float *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((float *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((float *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = VAR17[VAR12] * VAR8 / (VAR20 - VAR17[0] + VAR17[VAR5]);
            }
            break;
        case VAR34:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((double *)VAR3)[VAR11 * VAR6 + VAR12] = VAR17[VAR12] * VAR8 / VAR20;
            if (VAR5 % 2 == 0)
            {
                for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                    ((double *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - 1 - VAR12] = ((double *)VAR3)[VAR11 * VAR6 + VAR12];
            }
            else
            {
                for (VAR12 = 1; VAR12 <= VAR5; VAR12++)
                    ((double *)VAR3)[(VAR7 - VAR11) * VAR6 + VAR5 - VAR12] = VAR17[VAR12] * VAR8 / (VAR20 - VAR17[0] + VAR17[VAR5]);
            }
            break;
        }
    }
    {
        int VAR35, VAR36;
        double VAR37[VAR38 + VAR5];
        double VAR39[VAR38];
        double VAR40 = -2, VAR41 = 2, VAR42 = -2, VAR43 = 2;
        for (VAR12 = 0; VAR12 < VAR38; VAR12++)
        {
            double VAR44 = 0, VAR45 = 0, VAR46 = 0;
            for (VAR35 = 0; VAR35 < VAR38 + VAR5; VAR35++)
                VAR37[VAR35] = FUN7(VAR12 * VAR35 * VAR21 / VAR38);
            for (VAR35 = 0; VAR35 < VAR38; VAR35++)
            {
                double VAR47 = 0;
                VAR11 = 0;
                for (VAR36 = 0; VAR36 < VAR5; VAR36++)
                    VAR47 += VAR3[VAR11 * VAR5 + VAR36] * VAR37[VAR36 + VAR35];
                VAR39[VAR35] = VAR47 / (1 << VAR48);
                VAR44 += VAR37[VAR35 + VAR18] * VAR37[VAR35 + VAR18];
                VAR46 += VAR39[VAR35] * VAR39[VAR35];
                VAR45 += VAR37[VAR35 + VAR18] * VAR39[VAR35];
            }
            VAR44 = FUN9(2 * VAR44 / VAR38);
            VAR46 = FUN9(2 * VAR46 / VAR38);
            VAR45 = 2 * VAR45 / VAR38;
            VAR40 = FUN10(VAR40, VAR46);
            VAR41 = FUN15(VAR41, VAR46);
            VAR42 = FUN10(VAR42, VAR45);
            VAR43 = FUN15(VAR43, VAR45);
            if (VAR12 % 11 == 0)
            {
                FUN16(NULL, VAR49, "", VAR12, VAR44, VAR40, VAR41, VAR42, VAR43);
                VAR41 = VAR43 = 2;
                VAR40 = VAR42 = -2;
            }
        }
    }
    FUN17(VAR17);
    return 0;
}