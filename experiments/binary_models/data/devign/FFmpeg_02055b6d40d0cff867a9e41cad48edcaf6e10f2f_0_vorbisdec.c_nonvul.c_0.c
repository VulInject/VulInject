static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3;
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    int VAR12 = 0;
    VAR2->VAR13 = FUN2(VAR9, 8) + 1;
    FUN3(NULL, "", VAR2->VAR13);
    VAR2->VAR14 = FUN4(VAR2->VAR13 * sizeof(*VAR2->VAR14));
    VAR5 = FUN4(VAR15 * sizeof(*VAR5));
    VAR7 = FUN4(VAR15 * sizeof(*VAR7));
    VAR11 = FUN5(VAR15 * sizeof(*VAR11));
    if (!VAR2->VAR14 || !VAR5 || !VAR7 || !VAR11)
    {
        VAR12 = FUN6(VAR16);
        goto VAR17;
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR13; ++VAR3)
    {
        VAR18 *VAR19 = &VAR2->VAR14[VAR3];
        unsigned VAR20, VAR21, VAR22, VAR23 = 0;
        FUN3(NULL, "", VAR3);
        if (FUN2(VAR9, 24) != 0x564342)
        {
            FUN7(VAR2->VAR24, VAR25, "", VAR3);
            VAR12 = VAR26;
            goto VAR17;
        }
        VAR19->VAR27 = FUN2(VAR9, 16);
        if (VAR19->VAR27 > 16 || VAR19->VAR27 == 0)
        {
            FUN7(VAR2->VAR24, VAR25, "", VAR3, VAR19->VAR27);
            VAR12 = VAR26;
            goto VAR17;
        }
        VAR22 = FUN2(VAR9, 24);
        if (VAR22 > VAR15)
        {
            FUN7(VAR2->VAR24, VAR25, "", VAR3, VAR22);
            VAR12 = VAR26;
            goto VAR17;
        }
        VAR20 = FUN8(VAR9);
        FUN3(NULL, "", VAR19->VAR27, VAR22);
        if (!VAR20)
        {
            unsigned VAR28, VAR29;
            unsigned VAR30 = FUN8(VAR9);
            FUN3(NULL, "");
            if (VAR30)
            {
                FUN3(NULL, "");
                VAR23 = 0;
                for (VAR28 = 0; VAR28 < VAR22; ++VAR28)
                {
                    VAR29 = FUN8(VAR9);
                    if (VAR29)
                    {
                        VAR5[VAR28] = FUN2(VAR9, 5) + 1;
                        ++VAR23;
                    }
                    else
                        VAR5[VAR28] = 0;
                }
            }
            else
            {
                FUN3(NULL, "");
                VAR23 = VAR22;
                for (VAR28 = 0; VAR28 < VAR22; ++VAR28)
                    VAR5[VAR28] = FUN2(VAR9, 5) + 1;
            }
        }
        else
        {
            unsigned VAR31 = 0;
            unsigned VAR32 = FUN2(VAR9, 5) + 1;
            FUN3(NULL, "", VAR32);
            VAR23 = VAR22;
            for (; VAR31 < VAR23 && VAR32 <= 32; ++VAR32)
            {
                unsigned VAR33, VAR34;
                FUN3(NULL, "", FUN9(VAR22 - VAR31));
                VAR34 = FUN2(VAR9, FUN9(VAR22 - VAR31));
                FUN3(NULL, "", VAR34);
                for (VAR33 = VAR31; VAR33 < VAR34 + VAR31; ++VAR33)
                    if (VAR33 < VAR23)
                        VAR5[VAR33] = VAR32;
                VAR31 += VAR34;
            }
            if (VAR31 > VAR23)
            {
                FUN7(VAR2->VAR24, VAR25, "");
                VAR12 = VAR26;
                goto VAR17;
            }
        }
        VAR19->VAR35 = FUN2(VAR9, 4);
        FUN3(NULL, "", VAR19->VAR35, VAR19->VAR35 ? "" : "");
        if (VAR19->VAR35 == 1)
        {
            unsigned VAR33, VAR36, VAR37;
            unsigned VAR38 = FUN10(VAR22, VAR19->VAR27);
            float VAR39 = FUN11(FUN12(VAR9, 32));
            float VAR40 = FUN11(FUN12(VAR9, 32));
            unsigned VAR41 = FUN2(VAR9, 4) + 1;
            unsigned VAR42 = FUN8(VAR9);
            FUN3(NULL, "", VAR38);
            FUN3(NULL, "", VAR40, VAR39);
            for (VAR33 = 0; VAR33 < VAR38; ++VAR33)
            {
                VAR11[VAR33] = FUN2(VAR9, VAR41);
                FUN3(NULL, "", (float)VAR11[VAR33] * VAR40 + VAR39);
                FUN3(NULL, "", VAR11[VAR33]);
            }
            VAR19->VAR43 = VAR23 ? FUN4(VAR23 * VAR19->VAR27 * sizeof(*VAR19->VAR43)) : NULL;
            for (VAR36 = 0, VAR33 = 0; VAR33 < VAR22; ++VAR33)
            {
                unsigned VAR44 = VAR19->VAR27;
                if (VAR5[VAR33])
                {
                    float VAR45 = 0.0;
                    unsigned VAR46 = VAR33;
                    FUN3(VAR2->VAR24, "", VAR33);
                    for (VAR37 = 0; VAR37 < VAR44; ++VAR37)
                    {
                        unsigned VAR47 = VAR46 % VAR38;
                        VAR19->VAR43[VAR36 * VAR44 + VAR37] = VAR11[VAR47] * VAR40 + VAR39 + VAR45;
                        if (VAR42)
                            VAR45 = VAR19->VAR43[VAR36 * VAR44 + VAR37];
                        VAR46 /= VAR38;
                    }
                    VAR5[VAR36] = VAR5[VAR33];
                    FUN3(VAR2->VAR24, "", VAR36);
                    for (VAR37 = 0; VAR37 < VAR44; ++VAR37)
                        FUN3(VAR2->VAR24, "", VAR19->VAR43[VAR36 * VAR44 + VAR37]);
                    FUN3(VAR2->VAR24, "");
                    ++VAR36;
                }
            }
            if (VAR36 != VAR23)
            {
                FUN7(VAR2->VAR24, VAR25, "");
                VAR12 = VAR26;
                goto VAR17;
            }
            VAR22 = VAR23;
        }
        else if (VAR19->VAR35 >= 2)
        {
            FUN7(VAR2->VAR24, VAR25, "");
            VAR12 = VAR26;
            goto VAR17;
        }
        if (FUN13(VAR5, VAR7, VAR22))
        {
            FUN7(VAR2->VAR24, VAR25, "");
            VAR12 = VAR26;
            goto VAR17;
        }
        VAR19->VAR48 = 0;
        for (VAR21 = 0; VAR21 < VAR22; ++VAR21)
            if (VAR5[VAR21] >= VAR19->VAR48)
                VAR19->VAR48 = VAR5[VAR21];
        if (VAR19->VAR48 > 3 * VAR49)
            VAR19->VAR50 = VAR51;
        else
            VAR19->VAR50 = VAR49;
        VAR19->VAR48 = (VAR19->VAR48 + VAR19->VAR50 - 1) / VAR19->VAR50;
        if ((VAR12 = FUN14(&VAR19->VAR52, VAR19->VAR50, VAR22, VAR5, sizeof(*VAR5), sizeof(*VAR5), VAR7, sizeof(*VAR7), sizeof(*VAR7), VAR53)))
        {
            FUN7(VAR2->VAR24, VAR25, "");
            goto VAR17;
        }
    }
    FUN15(VAR5);
    FUN15(VAR7);
    FUN15(VAR11);
    return 0;
VAR17:
    FUN15(VAR5);
    FUN15(VAR7);
    FUN15(VAR11);
    return VAR12;
}