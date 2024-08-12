static int FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5);
static int FUN2(VAR1 *VAR2)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    VAR2->VAR12 = FUN3(VAR7, 6) + 1;
    VAR2->VAR13 = FUN4(VAR2->VAR12 * sizeof(*VAR2->VAR13));
    if (!VAR2->VAR13)
        return FUN5(VAR14);
    for (VAR8 = 0; VAR8 < VAR2->VAR12; ++VAR8)
    {
        VAR15 *VAR16 = &VAR2->VAR13[VAR8];
        VAR16->VAR17 = FUN3(VAR7, 16);
        FUN6(NULL, "", VAR8, VAR16->VAR17);
        if (VAR16->VAR17 == 1)
        {
            int VAR18 = -1;
            unsigned VAR19, VAR20, VAR21 = 2;
            VAR16->VAR22 = VAR23;
            VAR16->VAR24.VAR25.VAR26 = FUN3(VAR7, 5);
            FUN6(NULL, "", VAR8, VAR16->VAR24.VAR25.VAR26);
            for (VAR9 = 0; VAR9 < VAR16->VAR24.VAR25.VAR26; ++VAR9)
            {
                VAR16->VAR24.VAR25.VAR27[VAR9] = FUN3(VAR7, 4);
                if (VAR16->VAR24.VAR25.VAR27[VAR9] > VAR18)
                    VAR18 = VAR16->VAR24.VAR25.VAR27[VAR9];
                FUN6(NULL, "", VAR8, VAR9, VAR16->VAR24.VAR25.VAR27[VAR9]);
            }
            FUN6(NULL, "", VAR18);
            for (VAR9 = 0; VAR9 <= VAR18; ++VAR9)
            {
                VAR16->VAR24.VAR25.VAR28[VAR9] = FUN3(VAR7, 3) + 1;
                VAR16->VAR24.VAR25.VAR29[VAR9] = FUN3(VAR7, 2);
                FUN6(NULL, "", VAR8, VAR9, VAR16->VAR24.VAR25.VAR28[VAR9], VAR16->VAR24.VAR25.VAR29[VAR9]);
                if (VAR16->VAR24.VAR25.VAR29[VAR9])
                {
                    FUN7(VAR16->VAR24.VAR25.VAR30[VAR9], 8, VAR2->VAR31)
                    FUN6(NULL, "", VAR16->VAR24.VAR25.VAR30[VAR9]);
                }
                for (VAR10 = 0; VAR10 < (1 << VAR16->VAR24.VAR25.VAR29[VAR9]); ++VAR10)
                {
                    int16_t VAR32 = FUN3(VAR7, 8) - 1;
                    if (VAR32 != -1)
                        FUN8(VAR32, VAR2->VAR31)
                        VAR16->VAR24.VAR25.VAR33[VAR9][VAR10] = VAR32;
                    FUN6(NULL, "", VAR10, VAR16->VAR24.VAR25.VAR33[VAR9][VAR10]);
                }
            }
            VAR16->VAR24.VAR25.VAR34 = FUN3(VAR7, 2) + 1;
            VAR16->VAR24.VAR25.VAR35 = 2;
            for (VAR9 = 0; VAR9 < VAR16->VAR24.VAR25.VAR26; ++VAR9)
                VAR16->VAR24.VAR25.VAR35 += VAR16->VAR24.VAR25.VAR28[VAR16->VAR24.VAR25.VAR27[VAR9]];
            VAR16->VAR24.VAR25.VAR36 = FUN4(VAR16->VAR24.VAR25.VAR35 * sizeof(*VAR16->VAR24.VAR25.VAR36));
            if (!VAR16->VAR24.VAR25.VAR36)
                return FUN5(VAR14);
            VAR19 = FUN3(VAR7, 4);
            VAR20 = (1 << VAR19);
            if (VAR20 > VAR2->VAR37[1] / 2)
            {
                FUN9(VAR2->VAR38, VAR39, "" VAR40 "", VAR20, VAR2->VAR37[1] / 2);
                return VAR41;
            }
            VAR16->VAR24.VAR25.VAR36[0].VAR42 = 0;
            VAR16->VAR24.VAR25.VAR36[1].VAR42 = VAR20;
            for (VAR9 = 0; VAR9 < VAR16->VAR24.VAR25.VAR26; ++VAR9)
            {
                for (VAR10 = 0; VAR10 < VAR16->VAR24.VAR25.VAR28[VAR16->VAR24.VAR25.VAR27[VAR9]]; ++VAR10, ++VAR21)
                {
                    VAR16->VAR24.VAR25.VAR36[VAR21].VAR42 = FUN3(VAR7, VAR19);
                    FUN6(NULL, "", VAR21, VAR16->VAR24.VAR25.VAR36[VAR21].VAR42);
                }
            }
            if (FUN10(VAR2->VAR38, VAR16->VAR24.VAR25.VAR36, VAR16->VAR24.VAR25.VAR35))
            {
                return VAR41;
            }
        }
        else if (VAR16->VAR17 == 0)
        {
            unsigned VAR43 = 0;
            VAR16->VAR22 = VAR44;
            VAR16->VAR24.VAR45.VAR46 = FUN3(VAR7, 8);
            if (!VAR16->VAR24.VAR45.VAR46)
            {
                FUN9(VAR2->VAR38, VAR39, "");
                return VAR41;
            }
            VAR16->VAR24.VAR45.VAR47 = FUN3(VAR7, 16);
            if (!VAR16->VAR24.VAR45.VAR47)
            {
                FUN9(VAR2->VAR38, VAR39, "");
                return VAR41;
            }
            VAR16->VAR24.VAR45.VAR48 = FUN3(VAR7, 16);
            if (!VAR16->VAR24.VAR45.VAR48)
            {
                FUN9(VAR2->VAR38, VAR39, "");
                return VAR41;
            }
            VAR16->VAR24.VAR45.VAR49 = FUN3(VAR7, 6);
            VAR16->VAR24.VAR45.VAR50 = FUN3(VAR7, 8);
            VAR16->VAR24.VAR45.VAR51 = FUN3(VAR7, 4) + 1;
            VAR16->VAR24.VAR45.VAR52 = FUN11(VAR16->VAR24.VAR45.VAR51);
            if (!VAR16->VAR24.VAR45.VAR52)
                return FUN5(VAR14);
            {
                int VAR53;
                unsigned VAR54;
                for (VAR53 = 0; VAR53 < VAR16->VAR24.VAR45.VAR51; ++VAR53)
                {
                    FUN7(VAR54, 8, VAR2->VAR31)
                    VAR16->VAR24.VAR45.VAR52[VAR53] = VAR54;
                    if (VAR2->VAR55[VAR54].VAR56 > VAR43)
                        VAR43 = VAR2->VAR55[VAR54].VAR56;
                }
            }
            if ((VAR11 = FUN12(VAR2, VAR8)) < 0)
                return VAR11;
            VAR16->VAR24.VAR45.VAR57 = FUN11((VAR16->VAR24.VAR45.VAR46 + 1 + VAR43) * sizeof(*VAR16->VAR24.VAR45.VAR57));
            if (!VAR16->VAR24.VAR45.VAR57)
                return FUN5(VAR14);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR46);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR47);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR48);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR49);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR50);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR51);
            FUN6(NULL, "", VAR16->VAR24.VAR45.VAR52);
            {
                int VAR53;
                for (VAR53 = 0; VAR53 < VAR16->VAR24.VAR45.VAR51; ++VAR53)
                {
                    FUN6(NULL, "", VAR53 + 1, VAR16->VAR24.VAR45.VAR52[VAR53]);
                }
            }
        }
        else
        {
            FUN9(VAR2->VAR38, VAR39, "");
            return VAR41;
        }
    }
    return 0;
}