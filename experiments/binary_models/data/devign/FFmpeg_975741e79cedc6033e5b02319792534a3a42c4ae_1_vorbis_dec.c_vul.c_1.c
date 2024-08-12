static int FUN1(VAR1 *VAR2)
{
    uint_fast16_t VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR2->VAR10 = FUN2(VAR9, 8) + 1;
    FUN3("", VAR2->VAR10);
    VAR2->VAR11 = (VAR12 *)FUN4(VAR2->VAR10 * sizeof(VAR12));
    VAR5 = (VAR4 *)FUN4(VAR13 * sizeof(VAR4));
    VAR7 = (VAR6 *)FUN4(VAR13 * sizeof(VAR6));
    for (VAR3 = 0; VAR3 < VAR2->VAR10; ++VAR3)
    {
        VAR12 *VAR14 = &VAR2->VAR11[VAR3];
        uint_fast8_t VAR15;
        uint_fast32_t VAR16, VAR17 = 0;
        uint_fast32_t VAR18;
        FUN3("", VAR3);
        if (FUN2(VAR9, 24) != 0x564342)
        {
            FUN5(VAR2->VAR19, VAR20, "" VAR21 "", VAR3);
            goto VAR22;
        }
        VAR14->VAR23 = FUN2(VAR9, 16);
        if (VAR14->VAR23 > 16)
        {
            FUN5(VAR2->VAR19, VAR20, "" VAR21 "", VAR3, VAR14->VAR23);
            goto VAR22;
        }
        VAR18 = FUN2(VAR9, 24);
        if (VAR18 > VAR13)
        {
            FUN5(VAR2->VAR19, VAR20, "" VAR21 "" VAR24 "", VAR3, VAR18);
            goto VAR22;
        }
        VAR15 = FUN6(VAR9);
        FUN3("", VAR14->VAR23, VAR18);
        if (!VAR15)
        {
            uint_fast16_t VAR25;
            uint_fast8_t VAR26;
            uint_fast8_t VAR27 = FUN6(VAR9);
            FUN3("");
            if (VAR27)
            {
                FUN3("");
                VAR17 = 0;
                for (VAR25 = 0; VAR25 < VAR18; ++VAR25)
                {
                    VAR26 = FUN6(VAR9);
                    if (VAR26)
                    {
                        VAR5[VAR25] = FUN2(VAR9, 5) + 1;
                        ++VAR17;
                    }
                    else
                        VAR5[VAR25] = 0;
                }
            }
            else
            {
                FUN3("");
                VAR17 = VAR18;
                for (VAR25 = 0; VAR25 < VAR18; ++VAR25)
                {
                    VAR5[VAR25] = FUN2(VAR9, 5) + 1;
                }
            }
        }
        else
        {
            uint_fast16_t VAR28 = 0;
            uint_fast8_t VAR29 = FUN2(VAR9, 5) + 1;
            FUN3("", VAR29);
            VAR17 = VAR18;
            for (; VAR28 < VAR17; ++VAR29)
            {
                uint_fast16_t VAR30, VAR31;
                FUN3("", FUN7(VAR18 - VAR28));
                VAR31 = FUN2(VAR9, FUN7(VAR18 - VAR28));
                FUN3("", VAR31);
                for (VAR30 = VAR28; VAR30 < VAR31 + VAR28; ++VAR30)
                {
                    if (VAR30 < VAR17)
                        VAR5[VAR30] = VAR29;
                }
                VAR28 += VAR31;
            }
            if (VAR28 > VAR17)
            {
                FUN5(VAR2->VAR19, VAR20, "");
                goto VAR22;
            }
        }
        VAR14->VAR32 = FUN2(VAR9, 4);
        FUN3("", VAR14->VAR32, VAR14->VAR32 ? "" : "");
        if (VAR14->VAR32 == 1)
        {
            uint_fast16_t VAR30, VAR33, VAR34;
            uint_fast16_t VAR35 = FUN8(VAR18, VAR14->VAR23);
            uint_fast16_t VAR36[VAR35];
            float VAR37 = FUN9(FUN10(VAR9, 32));
            float VAR38 = FUN9(FUN10(VAR9, 32));
            uint_fast8_t VAR39 = FUN2(VAR9, 4) + 1;
            uint_fast8_t VAR40 = FUN6(VAR9);
            FUN3("", VAR35);
            FUN3("", VAR38, VAR37);
            for (VAR30 = 0; VAR30 < VAR35; ++VAR30)
            {
                VAR36[VAR30] = FUN2(VAR9, VAR39);
                FUN3("", (float)VAR36[VAR30] * VAR38 + VAR37);
                FUN3("", VAR36[VAR30]);
            }
            VAR14->VAR41 = (float *)FUN4(VAR17 * VAR14->VAR23 * sizeof(float));
            for (VAR33 = 0, VAR30 = 0; VAR30 < VAR18; ++VAR30)
            {
                uint_fast8_t VAR42 = VAR14->VAR23;
                if (VAR5[VAR30])
                {
                    float VAR43 = 0.0;
                    uint_fast32_t VAR44 = VAR30;
                    FUN5(VAR2->VAR19, VAR45, "", VAR30);
                    for (VAR34 = 0; VAR34 < VAR42; ++VAR34)
                    {
                        uint_fast32_t VAR46 = VAR44 % VAR35;
                        VAR14->VAR41[VAR33 * VAR42 + VAR34] = VAR36[VAR46] * VAR38 + VAR37 + VAR43;
                        if (VAR40)
                        {
                            VAR43 = VAR14->VAR41[VAR33 * VAR42 + VAR34];
                        }
                        VAR44 /= VAR35;
                    }
                    VAR5[VAR33] = VAR5[VAR30];
                    FUN5(VAR2->VAR19, VAR45, "", VAR33);
                    for (VAR34 = 0; VAR34 < VAR42; ++VAR34)
                    {
                        FUN5(VAR2->VAR19, VAR45, "", VAR14->VAR41[VAR33 * VAR42 + VAR34]);
                    }
                    FUN5(VAR2->VAR19, VAR45, "");
                    ++VAR33;
                }
            }
            if (VAR33 != VAR17)
            {
                FUN5(VAR2->VAR19, VAR20, "");
                goto VAR22;
            }
            VAR18 = VAR17;
        }
        else if (VAR14->VAR32 >= 2)
        {
            FUN5(VAR2->VAR19, VAR20, "");
            goto VAR22;
        }
        if (FUN11(VAR5, VAR7, VAR18))
        {
            FUN5(VAR2->VAR19, VAR20, "");
            goto VAR22;
        }
        VAR14->VAR47 = 0;
        for (VAR16 = 0; VAR16 < VAR18; ++VAR16)
            if (VAR5[VAR16] >= VAR14->VAR47)
                VAR14->VAR47 = VAR5[VAR16];
        if (VAR14->VAR47 > 3 * VAR48)
            VAR14->VAR49 = VAR50;
        else
            VAR14->VAR49 = VAR48;
        VAR14->VAR47 = (VAR14->VAR47 + VAR14->VAR49 - 1) / VAR14->VAR49;
        if (FUN12(&VAR14->VAR51, VAR14->VAR49, VAR18, VAR5, sizeof(*VAR5), sizeof(*VAR5), VAR7, sizeof(*VAR7), sizeof(*VAR7), VAR52))
        {
            FUN5(VAR2->VAR19, VAR20, "");
            goto VAR22;
        }
    }
    FUN13(VAR5);
    FUN13(VAR7);
    return 0;
VAR22:
    FUN13(VAR5);
    FUN13(VAR7);
    return 1;
}