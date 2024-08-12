static int FUN1(VAR1 *VAR2, void *VAR3, double VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12;
    double VAR13, VAR14, VAR15;
    double *VAR16 = FUN2(VAR5, sizeof(*VAR16));
    const int VAR17 = (VAR5 - 1) / 2;
    if (!VAR16)
        return FUN3(VAR18);
    if (VAR4 > 1.0)
        VAR4 = 1.0;
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        double VAR19 = 0;
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            VAR13 = VAR20 * ((double)(VAR12 - VAR17) - (double)VAR11 / VAR7) * VAR4;
            if (VAR13 == 0)
                VAR14 = 1.0;
            else
                VAR14 = FUN4(VAR13) / VAR13;
            switch (VAR9)
            {
            case VAR21:
            {
                const float VAR22 = -0.5;
                VAR13 = FUN5(((double)(VAR12 - VAR17) - (double)VAR11 / VAR7) * VAR4);
                if (VAR13 < 1.0)
                    VAR14 = 1 - 3 * VAR13 * VAR13 + 2 * VAR13 * VAR13 * VAR13 + VAR22 * (-VAR13 * VAR13 + VAR13 * VAR13 * VAR13);
                else
                    VAR14 = VAR22 * (-4 + 8 * VAR13 - 5 * VAR13 * VAR13 + VAR13 * VAR13 * VAR13);
                break;
            }
            case VAR23:
                VAR15 = 2.0 * VAR13 / (VAR4 * VAR5) + VAR20;
                VAR14 *= 0.3635819 - 0.4891775 * FUN6(VAR15) + 0.1365995 * FUN6(2 * VAR15) - 0.0106411 * FUN6(3 * VAR15);
                break;
            case VAR24:
                VAR15 = 2.0 * VAR13 / (VAR4 * VAR5 * VAR20);
                VAR14 *= FUN7(VAR10 * FUN8(FUN9(1 - VAR15 * VAR15, 0)));
                break;
            default:
                FUN10(0);
            }
            VAR16[VAR12] = VAR14;
            VAR19 += VAR14;
        }
        switch (VAR2->VAR25)
        {
        case VAR26:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((VAR27 *)VAR3)[VAR11 * VAR6 + VAR12] = FUN11(FUN12(VAR16[VAR12] * VAR8 / VAR19), VAR28, VAR29);
            break;
        case VAR30:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((VAR31 *)VAR3)[VAR11 * VAR6 + VAR12] = FUN13(FUN14(VAR16[VAR12] * VAR8 / VAR19));
            break;
        case VAR32:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((float *)VAR3)[VAR11 * VAR6 + VAR12] = VAR16[VAR12] * VAR8 / VAR19;
            break;
        case VAR33:
            for (VAR12 = 0; VAR12 < VAR5; VAR12++)
                ((double *)VAR3)[VAR11 * VAR6 + VAR12] = VAR16[VAR12] * VAR8 / VAR19;
            break;
        }
    }
    {
        int VAR34, VAR35;
        double VAR36[VAR37 + VAR5];
        double VAR38[VAR37];
        double VAR39 = -2, VAR40 = 2, VAR41 = -2, VAR42 = 2;
        for (VAR12 = 0; VAR12 < VAR37; VAR12++)
        {
            double VAR43 = 0, VAR44 = 0, VAR45 = 0;
            for (VAR34 = 0; VAR34 < VAR37 + VAR5; VAR34++)
                VAR36[VAR34] = FUN6(VAR12 * VAR34 * VAR20 / VAR37);
            for (VAR34 = 0; VAR34 < VAR37; VAR34++)
            {
                double VAR46 = 0;
                VAR11 = 0;
                for (VAR35 = 0; VAR35 < VAR5; VAR35++)
                    VAR46 += VAR3[VAR11 * VAR5 + VAR35] * VAR36[VAR35 + VAR34];
                VAR38[VAR34] = VAR46 / (1 << VAR47);
                VAR43 += VAR36[VAR34 + VAR17] * VAR36[VAR34 + VAR17];
                VAR45 += VAR38[VAR34] * VAR38[VAR34];
                VAR44 += VAR36[VAR34 + VAR17] * VAR38[VAR34];
            }
            VAR43 = FUN8(2 * VAR43 / VAR37);
            VAR45 = FUN8(2 * VAR45 / VAR37);
            VAR44 = 2 * VAR44 / VAR37;
            VAR39 = FUN9(VAR39, VAR45);
            VAR40 = FUN15(VAR40, VAR45);
            VAR41 = FUN9(VAR41, VAR44);
            VAR42 = FUN15(VAR42, VAR44);
            if (VAR12 % 11 == 0)
            {
                FUN16(NULL, VAR48, "", VAR12, VAR43, VAR39, VAR40, VAR41, VAR42);
                VAR40 = VAR42 = 2;
                VAR39 = VAR41 = -2;
            }
        }
    }
    FUN17(VAR16);
    return 0;
}