static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, float *VAR6);
static VAR1 FUN2(VAR2 *VAR3, VAR4 *VAR5, float *VAR6);
static int FUN3(VAR2 *VAR3)
{
    VAR7 *VAR8 = &VAR3->VAR8;
    uint_fast16_t VAR9, VAR10, VAR11;
    VAR3->VAR12 = FUN4(VAR8, 6) + 1;
    VAR3->VAR13 = (VAR14 *)FUN5(VAR3->VAR12 * sizeof(VAR14));
    for (VAR9 = 0; VAR9 < VAR3->VAR12; ++VAR9)
    {
        VAR14 *VAR15 = &VAR3->VAR13[VAR9];
        VAR15->VAR16 = FUN4(VAR8, 16);
        FUN6("", VAR9, VAR15->VAR16);
        if (VAR15->VAR16 == 1)
        {
            uint_fast8_t VAR17 = 0;
            uint_fast8_t VAR18;
            uint_fast16_t VAR19 = 2;
            VAR15->VAR20 = VAR21;
            VAR15->VAR22.VAR23.VAR24 = FUN4(VAR8, 5);
            FUN6("", VAR9, VAR15->VAR22.VAR23.VAR24);
            for (VAR10 = 0; VAR10 < VAR15->VAR22.VAR23.VAR24; ++VAR10)
            {
                VAR15->VAR22.VAR23.VAR25[VAR10] = FUN4(VAR8, 4);
                if (VAR15->VAR22.VAR23.VAR25[VAR10] > VAR17)
                    VAR17 = VAR15->VAR22.VAR23.VAR25[VAR10];
                FUN6("", VAR9, VAR10, VAR15->VAR22.VAR23.VAR25[VAR10]);
            }
            FUN6("", VAR17);
            VAR15->VAR22.VAR23.VAR17 = VAR17;
            for (VAR10 = 0; VAR10 <= VAR17; ++VAR10)
            {
                VAR15->VAR22.VAR23.VAR26[VAR10] = FUN4(VAR8, 3) + 1;
                VAR15->VAR22.VAR23.VAR27[VAR10] = FUN4(VAR8, 2);
                FUN6("", VAR9, VAR10, VAR15->VAR22.VAR23.VAR26[VAR10], VAR15->VAR22.VAR23.VAR27[VAR10]);
                if (VAR15->VAR22.VAR23.VAR27[VAR10])
                {
                    VAR15->VAR22.VAR23.VAR28[VAR10] = FUN4(VAR8, 8);
                    FUN6("", VAR15->VAR22.VAR23.VAR28[VAR10]);
                }
                for (VAR11 = 0; VAR11 < (1 << VAR15->VAR22.VAR23.VAR27[VAR10]); ++VAR11)
                {
                    VAR15->VAR22.VAR23.VAR29[VAR10][VAR11] = FUN4(VAR8, 8) - 1;
                    FUN6("", VAR11, VAR15->VAR22.VAR23.VAR29[VAR10][VAR11]);
                }
            }
            VAR15->VAR22.VAR23.VAR30 = FUN4(VAR8, 2) + 1;
            VAR15->VAR22.VAR23.VAR31 = 2;
            for (VAR10 = 0; VAR10 < VAR15->VAR22.VAR23.VAR24; ++VAR10)
            {
                VAR15->VAR22.VAR23.VAR31 += VAR15->VAR22.VAR23.VAR26[VAR15->VAR22.VAR23.VAR25[VAR10]];
            }
            VAR15->VAR22.VAR23.VAR32 = (VAR33 *)FUN5(VAR15->VAR22.VAR23.VAR31 * sizeof(VAR33));
            VAR15->VAR22.VAR23.VAR34 = (VAR33 *)FUN5(VAR15->VAR22.VAR23.VAR31 * sizeof(VAR33));
            VAR15->VAR22.VAR23.VAR35 = (VAR33 *)FUN5(VAR15->VAR22.VAR23.VAR31 * sizeof(VAR33));
            VAR15->VAR22.VAR23.VAR36 = (VAR33 *)FUN5(VAR15->VAR22.VAR23.VAR31 * sizeof(VAR33));
            VAR18 = FUN4(VAR8, 4);
            VAR15->VAR22.VAR23.VAR32[0] = 0;
            VAR15->VAR22.VAR23.VAR32[1] = (1 << VAR18);
            for (VAR10 = 0; VAR10 < VAR15->VAR22.VAR23.VAR24; ++VAR10)
            {
                for (VAR11 = 0; VAR11 < VAR15->VAR22.VAR23.VAR26[VAR15->VAR22.VAR23.VAR25[VAR10]]; ++VAR11, ++VAR19)
                {
                    VAR15->VAR22.VAR23.VAR32[VAR19] = FUN4(VAR8, VAR18);
                    FUN6("", VAR19, VAR15->VAR22.VAR23.VAR32[VAR19]);
                }
            }
            for (VAR11 = 0; VAR11 < VAR15->VAR22.VAR23.VAR31; ++VAR11)
            {
                VAR15->VAR22.VAR23.VAR34[VAR11] = VAR11;
            }
            for (VAR11 = 0; VAR11 < VAR15->VAR22.VAR23.VAR31 - 1; ++VAR11)
            {
                for (VAR10 = VAR11 + 1; VAR10 < VAR15->VAR22.VAR23.VAR31; ++VAR10)
                {
                    if (VAR15->VAR22.VAR23.VAR32[VAR15->VAR22.VAR23.VAR34[VAR11]] > VAR15->VAR22.VAR23.VAR32[VAR15->VAR22.VAR23.VAR34[VAR10]])
                    {
                        uint_fast16_t VAR37 = VAR15->VAR22.VAR23.VAR34[VAR11];
                        VAR15->VAR22.VAR23.VAR34[VAR11] = VAR15->VAR22.VAR23.VAR34[VAR10];
                        VAR15->VAR22.VAR23.VAR34[VAR10] = VAR37;
                    }
                }
            }
            for (VAR11 = 2; VAR11 < VAR15->VAR22.VAR23.VAR31; ++VAR11)
            {
                VAR15->VAR22.VAR23.VAR35[VAR11] = 0;
                VAR15->VAR22.VAR23.VAR36[VAR11] = 1;
                for (VAR10 = 0; VAR10 < VAR11; ++VAR10)
                {
                    if ((VAR15->VAR22.VAR23.VAR32[VAR10] < VAR15->VAR22.VAR23.VAR32[VAR11]) && (VAR15->VAR22.VAR23.VAR32[VAR10] > VAR15->VAR22.VAR23.VAR32[VAR15->VAR22.VAR23.VAR35[VAR11]]))
                    {
                        VAR15->VAR22.VAR23.VAR35[VAR11] = VAR10;
                    }
                    if ((VAR15->VAR22.VAR23.VAR32[VAR10] > VAR15->VAR22.VAR23.VAR32[VAR11]) && (VAR15->VAR22.VAR23.VAR32[VAR10] < VAR15->VAR22.VAR23.VAR32[VAR15->VAR22.VAR23.VAR36[VAR11]]))
                    {
                        VAR15->VAR22.VAR23.VAR36[VAR11] = VAR10;
                    }
                }
            }
        }
        else if (VAR15->VAR16 == 0)
        {
            uint_fast8_t VAR38 = 0;
            VAR15->VAR20 = VAR39;
            VAR15->VAR22.VAR40.VAR41 = FUN4(VAR8, 8);
            VAR15->VAR22.VAR40.VAR42 = FUN4(VAR8, 16);
            VAR15->VAR22.VAR40.VAR43 = FUN4(VAR8, 16);
            VAR15->VAR22.VAR40.VAR44 = FUN4(VAR8, 6);
            if (VAR15->VAR22.VAR40.VAR44 == 0)
            {
                FUN7(VAR3->VAR45, VAR46, "");
                return 1;
            }
            VAR15->VAR22.VAR40.VAR47 = FUN4(VAR8, 8);
            VAR15->VAR22.VAR40.VAR48 = FUN4(VAR8, 4) + 1;
            VAR15->VAR22.VAR40.VAR49 = FUN8(VAR15->VAR22.VAR40.VAR48);
            if (!VAR15->VAR22.VAR40.VAR49)
            {
                return 1;
            }
            {
                int VAR50;
                uint_fast8_t VAR51;
                for (VAR50 = 0; VAR50 < VAR15->VAR22.VAR40.VAR48; ++VAR50)
                {
                    VAR51 = FUN4(VAR8, 8);
                    VAR15->VAR22.VAR40.VAR49[VAR50] = VAR51;
                    if (VAR3->VAR52[VAR51].VAR53 > VAR38)
                        VAR38 = VAR3->VAR52[VAR51].VAR53;
                    if (VAR15->VAR22.VAR40.VAR49[VAR50] > VAR3->VAR54)
                        return 1;
                }
            }
            {
                VAR15->VAR22.VAR40.VAR55 = FUN8((VAR15->VAR22.VAR40.VAR41 + 1 + VAR38) * sizeof(float));
                if (!VAR15->VAR22.VAR40.VAR55)
                {
                    return 1;
                }
            }
            FUN6("", VAR15->VAR22.VAR40.VAR41);
            FUN6("", VAR15->VAR22.VAR40.VAR42);
            FUN6("", VAR15->VAR22.VAR40.VAR43);
            FUN6("", VAR15->VAR22.VAR40.VAR44);
            FUN6("", VAR15->VAR22.VAR40.VAR47);
            FUN6("", VAR15->VAR22.VAR40.VAR48);
            FUN6("", VAR15->VAR22.VAR40.VAR49);
            {
                int VAR50;
                for (VAR50 = 0; VAR50 < VAR15->VAR22.VAR40.VAR48; ++VAR50)
                {
                    FUN6("", VAR50 + 1, VAR15->VAR22.VAR40.VAR49[VAR50]);
                }
            }
        }
        else
        {
            FUN7(VAR3->VAR45, VAR46, "");
            return 1;
        }
    }
    return 0;
}