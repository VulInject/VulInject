static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, unsigned int VAR9, unsigned int VAR10)
{
    VAR11 *const VAR12 = &VAR2->VAR12;
    const int VAR13 = VAR3 + VAR4 * VAR12->VAR14;
    const int VAR15 = VAR12->VAR16.VAR15[VAR13];
    const int VAR17 = FUN2(VAR15) ? 2 : 4;
    int VAR18 = 0;
    int VAR19;
    if (!VAR20)
    {
        int VAR21 = 15 - VAR2->VAR22 - FUN3(0, VAR2->VAR23.VAR24[0], VAR2->VAR23.VAR24[1]);
        int VAR25 = VAR12->VAR16.VAR26[VAR13];
        if (VAR25 <= VAR21 && (VAR3 == 0 || ((VAR25 + VAR12->VAR16.VAR26[VAR13 - 1] + 1) >> 1) <= VAR21) && (VAR4 == 0 || ((VAR25 + VAR12->VAR16.VAR26[VAR2->VAR27] + 1) >> 1) <= VAR21))
        {
            return;
        }
    }
    if (VAR20 && VAR2->VAR28[VAR13 - 1] != 255 && (FUN2(VAR15) != FUN2(VAR12->VAR16.VAR15[VAR13 - 1])) && (VAR2->VAR29 != 2 || VAR2->VAR28[VAR13 - 1] == VAR2->VAR28[VAR13]))
    {
        const int VAR30 = VAR3 + (VAR4 & ~1) * VAR12->VAR14;
        const int VAR31[2] = {VAR30 - 1, VAR30 - 1 + VAR12->VAR14};
        int16_t VAR32[8];
        int VAR25[2];
        int VAR33[2];
        int VAR34[2];
        int VAR35, VAR36, VAR37;
        int VAR38;
        VAR18 = 1;
        if (FUN4(VAR15))
            VAR32[0] = VAR32[1] = VAR32[2] = VAR32[3] = VAR32[4] = VAR32[5] = VAR32[6] = VAR32[7] = 4;
        else
        {
            for (VAR38 = 0; VAR38 < 8; VAR38++)
            {
                int VAR39 = VAR40 ? VAR31[VAR38 >> 2] : VAR31[VAR38 & 1];
                if (FUN4(VAR12->VAR16.VAR15[VAR39]))
                    VAR32[VAR38] = 4;
                else if (VAR2->VAR41[12 + 8 * (VAR38 >> 1)] != 0 || VAR2->VAR42[VAR39][VAR40 ? VAR38 & 3 : (VAR38 >> 2) + (VAR4 & 1) * 2])
                    VAR32[VAR38] = 2;
                else
                    VAR32[VAR38] = 1;
            }
        }
        VAR35 = VAR12->VAR16.VAR26[VAR13];
        VAR36 = VAR12->VAR16.VAR26[VAR31[0]];
        VAR37 = VAR12->VAR16.VAR26[VAR31[1]];
        VAR25[0] = (VAR35 + VAR36 + 1) >> 1;
        VAR33[0] = (FUN5(VAR2, 0, VAR35) + FUN5(VAR2, 0, VAR36) + 1) >> 1;
        VAR34[0] = (FUN5(VAR2, 1, VAR35) + FUN5(VAR2, 1, VAR36) + 1) >> 1;
        VAR25[1] = (VAR35 + VAR37 + 1) >> 1;
        VAR33[1] = (FUN5(VAR2, 0, VAR35) + FUN5(VAR2, 0, VAR37) + 1) >> 1;
        VAR34[1] = (FUN5(VAR2, 1, VAR35) + FUN5(VAR2, 1, VAR37) + 1) >> 1;
        FUN6(VAR12->VAR43, "", VAR3, VAR4, VAR25[0], VAR25[1], VAR33[0], VAR33[1], VAR34[0], VAR34[1], VAR9, VAR10);
        {
            int VAR38;
            for (VAR38 = 0; VAR38 < 8; VAR38++)
                FUN6(VAR12->VAR43, "", VAR38, VAR32[VAR38]);
            FUN6(VAR12->VAR43, "");
        }
        FUN7(VAR2, &VAR6[0], VAR9, VAR32, VAR25);
        FUN8(VAR2, &VAR7[0], VAR10, VAR32, VAR33);
        FUN8(VAR2, &VAR8[0], VAR10, VAR32, VAR34);
    }
    for (VAR19 = 0; VAR19 < 2; VAR19++)
    {
        int VAR44;
        const int VAR45 = VAR19 == 0 ? VAR13 - 1 : VAR2->VAR27;
        const int VAR46 = VAR12->VAR16.VAR15[VAR45];
        int(*VAR47)[48 + 2] = VAR2->VAR47[VAR2->VAR48 & 15];
        int(*VAR49)[48 + 2] = VAR2->VAR47[VAR2->VAR28[VAR45] & 15];
        int VAR50 = VAR2->VAR28[VAR45] == 255 ? 1 : 0;
        const int VAR51 = (VAR15 & (VAR52 | VAR53)) == (VAR52 | VAR53) ? 1 : 4;
        const int VAR54 = (VAR15 & (VAR52 | (VAR55 << VAR19))) ? 3 : (VAR15 & (VAR56 >> VAR19)) ? 1
                                                                                                                          : 0;
        const int VAR57 = VAR15 & (VAR52 | (VAR56 >> VAR19));
        if (VAR18)
        {
            VAR50 = 1;
            VAR18 = 0;
        }
        if (VAR2->VAR29 == 2 && VAR2->VAR28[VAR45] != VAR2->VAR28[VAR13])
            VAR50 = 1;
        if (VAR20 && (VAR19 == 1) && ((VAR4 & 1) == 0) && VAR50 == 0 && !FUN2(VAR15) && FUN2(VAR46))
        {
            static const int VAR58[4] = {4, 5, 6, 3};
            unsigned int VAR59 = 2 * VAR9;
            unsigned int VAR60 = 2 * VAR10;
            int VAR39 = VAR13 - 2 * VAR12->VAR14;
            int VAR25;
            int VAR38, VAR61;
            int16_t VAR32[4];
            for (VAR61 = 0; VAR61 < 2; VAR61++, VAR39 += VAR12->VAR14)
            {
                if (FUN4(VAR15) || FUN4(VAR12->VAR16.VAR15[VAR39]))
                {
                    VAR32[0] = VAR32[1] = VAR32[2] = VAR32[3] = 3;
                }
                else
                {
                    const VAR5 *VAR62 = VAR2->VAR42[VAR39];
                    for (VAR38 = 0; VAR38 < 4; VAR38++)
                    {
                        if (VAR2->VAR41[VAR63[0] + VAR38] != 0 || VAR62[VAR58[VAR38]] != 0)
                            VAR32[VAR38] = 2;
                        else
                            VAR32[VAR38] = 1;
                    }
                }
                VAR25 = (VAR12->VAR16.VAR26[VAR13] + VAR12->VAR16.VAR26[VAR39] + 1) >> 1;
                FUN6(VAR12->VAR43, "", VAR3, VAR4, VAR19, VAR44, VAR25, VAR59, VAR60);
                {
                    int VAR38;
                    for (VAR38 = 0; VAR38 < 4; VAR38++)
                        FUN6(VAR12->VAR43, "", VAR38, VAR32[VAR38]);
                    FUN6(VAR12->VAR43, "");
                }
                FUN9(VAR2, &VAR6[VAR61 * VAR9], VAR59, VAR32, VAR25);
                FUN10(VAR2, &VAR7[VAR61 * VAR10], VAR60, VAR32, (VAR2->VAR64[0] + FUN5(VAR2, 0, VAR12->VAR16.VAR26[VAR39]) + 1) >> 1);
                FUN10(VAR2, &VAR8[VAR61 * VAR10], VAR60, VAR32, (VAR2->VAR64[1] + FUN5(VAR2, 1, VAR12->VAR16.VAR26[VAR39]) + 1) >> 1);
            }
            VAR50 = 1;
        }
        for (VAR44 = VAR50; VAR44 < VAR51; VAR44++)
        {
            const int VAR39 = VAR44 > 0 ? VAR13 : VAR45;
            const int VAR65 = VAR12->VAR16.VAR15[VAR39];
            int(*VAR66)[48 + 2] = VAR44 > 0 ? VAR47 : VAR49;
            int16_t VAR32[4];
            int VAR25;
            if ((VAR44 & 1) && FUN11(VAR15))
                continue;
            if (FUN4(VAR15) || FUN4(VAR65))
            {
                int VAR67;
                if (VAR44 == 0)
                {
                    if ((!FUN2(VAR15) && !FUN2(VAR46)) || ((VAR20 || (VAR12->VAR68 != VAR69)) && (VAR19 == 0)))
                    {
                        VAR67 = 4;
                    }
                    else
                    {
                        VAR67 = 3;
                    }
                }
                else
                {
                    VAR67 = 3;
                }
                VAR32[0] = VAR32[1] = VAR32[2] = VAR32[3] = VAR67;
            }
            else
            {
                int VAR38, VAR70;
                int VAR71;
                if (VAR44 & VAR54)
                {
                    VAR32[0] = VAR32[1] = VAR32[2] = VAR32[3] = 0;
                    VAR71 = 1;
                }
                else if (VAR20 && FUN2(VAR15 ^ VAR65))
                {
                    VAR32[0] = VAR32[1] = VAR32[2] = VAR32[3] = 1;
                    VAR71 = 1;
                }
                else if (VAR57 && (VAR44 || (VAR65 & (VAR52 | (VAR56 >> VAR19)))))
                {
                    int VAR72 = 8 + 4 + VAR44 * (VAR19 ? 8 : 1);
                    int VAR73 = VAR72 - (VAR19 ? 8 : 1);
                    int VAR74 = 0;
                    int VAR75 = VAR2->VAR76 == VAR77 && VAR47[0][VAR2->VAR78[0][VAR72] + 2] != VAR66[0][VAR2->VAR78[0][VAR73] + 2];
                    for (VAR70 = 0; !VAR74 && VAR70 < 1 + (VAR2->VAR76 == VAR77); VAR70++)
                    {
                        int VAR79 = VAR70 ^ VAR75;
                        VAR74 |= VAR47[VAR70][VAR2->VAR78[VAR70][VAR72] + 2] != VAR66[VAR79][VAR2->VAR78[VAR79][VAR73] + 2] || FUN12(VAR2->VAR80[VAR70][VAR72][0] - VAR2->VAR80[VAR79][VAR73][0]) >= 4 || FUN12(VAR2->VAR80[VAR70][VAR72][1] - VAR2->VAR80[VAR79][VAR73][1]) >= VAR17;
                    }
                    VAR32[0] = VAR32[1] = VAR32[2] = VAR32[3] = VAR74;
                    VAR71 = 1;
                }
                else
                    VAR71 = 0;
                for (VAR38 = 0; VAR38 < 4; VAR38++)
                {
                    int VAR81 = VAR19 == 0 ? VAR44 : VAR38;
                    int VAR82 = VAR19 == 0 ? VAR38 : VAR44;
                    int VAR72 = 8 + 4 + VAR81 + 8 * VAR82;
                    int VAR73 = VAR72 - (VAR19 ? 8 : 1);
                    if (VAR2->VAR41[VAR72] != 0 || VAR2->VAR41[VAR73] != 0)
                    {
                        VAR32[VAR38] = 2;
                    }
                    else if (!VAR71)
                    {
                        int VAR75 = VAR2->VAR76 == VAR77 && VAR47[0][VAR2->VAR78[0][VAR72] + 2] != VAR66[0][VAR2->VAR78[0][VAR73] + 2];
                        VAR32[VAR38] = 0;
                        for (VAR70 = 0; VAR70 < 1 + (VAR2->VAR76 == VAR77); VAR70++)
                        {
                            int VAR79 = VAR70 ^ VAR75;
                            if (VAR47[VAR70][VAR2->VAR78[VAR70][VAR72] + 2] != VAR66[VAR79][VAR2->VAR78[VAR79][VAR73] + 2] || FUN12(VAR2->VAR80[VAR70][VAR72][0] - VAR2->VAR80[VAR79][VAR73][0]) >= 4 || FUN12(VAR2->VAR80[VAR70][VAR72][1] - VAR2->VAR80[VAR79][VAR73][1]) >= VAR17)
                            {
                                VAR32[VAR38] = 1;
                                break;
                            }
                        }
                    }
                }
                if (VAR32[0] + VAR32[1] + VAR32[2] + VAR32[3] == 0)
                    continue;
            }
            VAR25 = (VAR12->VAR16.VAR26[VAR13] + VAR12->VAR16.VAR26[VAR39] + 1) >> 1;
            FUN6(VAR12->VAR43, "", VAR3, VAR4, VAR19, VAR44, VAR25, VAR9, VAR10);
            {
                int VAR38;
                for (VAR38 = 0; VAR38 < 4; VAR38++)
                    FUN6(VAR12->VAR43, "", VAR38, VAR32[VAR38]);
                FUN6(VAR12->VAR43, "");
            }
            if (VAR19 == 0)
            {
                FUN13(VAR2, &VAR6[4 * VAR44], VAR9, VAR32, VAR25);
                if ((VAR44 & 1) == 0)
                {
                    FUN14(VAR2, &VAR7[2 * VAR44], VAR10, VAR32, (VAR2->VAR64[0] + FUN5(VAR2, 0, VAR12->VAR16.VAR26[VAR39]) + 1) >> 1);
                    FUN14(VAR2, &VAR8[2 * VAR44], VAR10, VAR32, (VAR2->VAR64[1] + FUN5(VAR2, 1, VAR12->VAR16.VAR26[VAR39]) + 1) >> 1);
                }
            }
            else
            {
                FUN9(VAR2, &VAR6[4 * VAR44 * VAR9], VAR9, VAR32, VAR25);
                if ((VAR44 & 1) == 0)
                {
                    FUN10(VAR2, &VAR7[2 * VAR44 * VAR10], VAR10, VAR32, (VAR2->VAR64[0] + FUN5(VAR2, 0, VAR12->VAR16.VAR26[VAR39]) + 1) >> 1);
                    FUN10(VAR2, &VAR8[2 * VAR44 * VAR10], VAR10, VAR32, (VAR2->VAR64[1] + FUN5(VAR2, 1, VAR12->VAR16.VAR26[VAR39]) + 1) >> 1);
                }
            }
        }
    }
}