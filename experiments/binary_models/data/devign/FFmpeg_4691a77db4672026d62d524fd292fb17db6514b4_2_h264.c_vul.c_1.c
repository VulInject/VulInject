static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, unsigned int VAR9, unsigned int VAR10)
{
    VAR11 *const VAR12 = &VAR2->VAR12;
    const int VAR13 = VAR3 + VAR4 * VAR12->VAR14;
    const int VAR15 = VAR12->VAR16.VAR15[VAR13];
    const int VAR17 = FUN2(VAR15) ? 2 : 4;
    int VAR18 = 0;
    int VAR19;
    static const int VAR20[34] = {-1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    if (!VAR21)
    {
        int VAR22 = 15 - VAR2->VAR23 - FUN3(0, VAR2->VAR24.VAR25);
        int VAR26 = VAR12->VAR16.VAR27[VAR13];
        if (VAR26 <= VAR22 && (VAR3 == 0 || ((VAR26 + VAR12->VAR16.VAR27[VAR13 - 1] + 1) >> 1) <= VAR22) && (VAR4 == 0 || ((VAR26 + VAR12->VAR16.VAR27[VAR2->VAR28] + 1) >> 1) <= VAR22))
        {
            return;
        }
    }
    if (VAR21 && VAR2->VAR29[VAR13 - 1] != 255 && (FUN2(VAR15) != FUN2(VAR12->VAR16.VAR15[VAR13 - 1])) && (VAR2->VAR30 != 2 || VAR2->VAR29[VAR13 - 1] == VAR2->VAR29[VAR13]))
    {
        const int VAR31 = VAR3 + (VAR4 & ~1) * VAR12->VAR14;
        const int VAR32[2] = {VAR31 - 1, VAR31 - 1 + VAR12->VAR14};
        int16_t VAR33[8];
        int VAR26[2];
        int VAR34[2];
        int VAR35, VAR36, VAR37;
        int VAR38;
        VAR18 = 1;
        if (FUN4(VAR15))
            VAR33[0] = VAR33[1] = VAR33[2] = VAR33[3] = VAR33[4] = VAR33[5] = VAR33[6] = VAR33[7] = 4;
        else
        {
            for (VAR38 = 0; VAR38 < 8; VAR38++)
            {
                int VAR39 = VAR40 ? VAR32[VAR38 >> 2] : VAR32[VAR38 & 1];
                if (FUN4(VAR12->VAR16.VAR15[VAR39]))
                    VAR33[VAR38] = 4;
                else if (VAR2->VAR41[12 + 8 * (VAR38 >> 1)] != 0 || VAR2->VAR42[VAR39][VAR40 ? VAR38 & 3 : (VAR38 >> 2) + (VAR4 & 1) * 2])
                    VAR33[VAR38] = 2;
                else
                    VAR33[VAR38] = 1;
            }
        }
        VAR35 = VAR12->VAR16.VAR27[VAR13];
        VAR36 = VAR12->VAR16.VAR27[VAR32[0]];
        VAR37 = VAR12->VAR16.VAR27[VAR32[1]];
        VAR26[0] = (VAR35 + VAR36 + 1) >> 1;
        VAR34[0] = (FUN5(VAR2, VAR35) + FUN5(VAR2, VAR36) + 1) >> 1;
        VAR26[1] = (VAR35 + VAR37 + 1) >> 1;
        VAR34[1] = (FUN5(VAR2, VAR35) + FUN5(VAR2, VAR37) + 1) >> 1;
        FUN6(VAR12->VAR43, "", VAR3, VAR4, VAR26[0], VAR26[1], VAR34[0], VAR34[1], VAR9, VAR10);
        {
            int VAR38;
            for (VAR38 = 0; VAR38 < 8; VAR38++)
                FUN6(VAR12->VAR43, "", VAR38, VAR33[VAR38]);
            FUN6(VAR12->VAR43, "");
        }
        FUN7(VAR2, &VAR6[0], VAR9, VAR33, VAR26);
        FUN8(VAR2, &VAR7[0], VAR10, VAR33, VAR34);
        FUN8(VAR2, &VAR8[0], VAR10, VAR33, VAR34);
    }
    for (VAR19 = 0; VAR19 < 2; VAR19++)
    {
        int VAR44;
        const int VAR45 = VAR19 == 0 ? VAR13 - 1 : VAR2->VAR28;
        const int VAR46 = VAR12->VAR16.VAR15[VAR45];
        int VAR47 = VAR2->VAR29[VAR45] == 255 ? 1 : 0;
        const int VAR48 = (VAR15 & (VAR49 | VAR50)) == (VAR49 | VAR50) ? 1 : 4;
        const int VAR51 = (VAR15 & (VAR49 | (VAR52 << VAR19))) ? 3 : (VAR15 & (VAR53 >> VAR19)) ? 1
                                                                                                                          : 0;
        const int VAR54 = VAR15 & (VAR49 | (VAR53 >> VAR19));
        if (VAR18)
        {
            VAR47 = 1;
            VAR18 = 0;
        }
        if (VAR2->VAR30 == 2 && VAR2->VAR29[VAR45] != VAR2->VAR29[VAR13])
            VAR47 = 1;
        if (VAR21 && (VAR19 == 1) && ((VAR4 & 1) == 0) && VAR47 == 0 && !FUN2(VAR15) && FUN2(VAR46))
        {
            static const int VAR55[4] = {4, 5, 6, 3};
            unsigned int VAR56 = 2 * VAR9;
            unsigned int VAR57 = 2 * VAR10;
            int VAR39 = VAR13 - 2 * VAR12->VAR14;
            int VAR26, VAR34;
            int VAR38, VAR58;
            int16_t VAR33[4];
            for (VAR58 = 0; VAR58 < 2; VAR58++, VAR39 += VAR12->VAR14)
            {
                if (FUN4(VAR15) || FUN4(VAR12->VAR16.VAR15[VAR39]))
                {
                    VAR33[0] = VAR33[1] = VAR33[2] = VAR33[3] = 3;
                }
                else
                {
                    const VAR5 *VAR59 = VAR2->VAR42[VAR39];
                    for (VAR38 = 0; VAR38 < 4; VAR38++)
                    {
                        if (VAR2->VAR41[VAR60[0] + VAR38] != 0 || VAR59[VAR55[VAR38]] != 0)
                            VAR33[VAR38] = 2;
                        else
                            VAR33[VAR38] = 1;
                    }
                }
                VAR26 = (VAR12->VAR16.VAR27[VAR13] + VAR12->VAR16.VAR27[VAR39] + 1) >> 1;
                FUN6(VAR12->VAR43, "", VAR3, VAR4, VAR19, VAR44, VAR26, VAR56, VAR57);
                {
                    int VAR38;
                    for (VAR38 = 0; VAR38 < 4; VAR38++)
                        FUN6(VAR12->VAR43, "", VAR38, VAR33[VAR38]);
                    FUN6(VAR12->VAR43, "");
                }
                FUN9(VAR2, &VAR6[VAR58 * VAR9], VAR56, VAR33, VAR26);
                VAR34 = (VAR2->VAR34 + FUN5(VAR2, VAR12->VAR16.VAR27[VAR39]) + 1) >> 1;
                FUN10(VAR2, &VAR7[VAR58 * VAR10], VAR57, VAR33, VAR34);
                FUN10(VAR2, &VAR8[VAR58 * VAR10], VAR57, VAR33, VAR34);
            }
            VAR47 = 1;
        }
        for (VAR44 = VAR47; VAR44 < VAR48; VAR44++)
        {
            const int VAR39 = VAR44 > 0 ? VAR13 : VAR45;
            const int VAR61 = VAR12->VAR16.VAR15[VAR39];
            int16_t VAR33[4];
            int VAR26;
            if ((VAR44 & 1) && FUN11(VAR15))
                continue;
            if (FUN4(VAR15) || FUN4(VAR61))
            {
                int VAR62;
                if (VAR44 == 0)
                {
                    if ((!FUN2(VAR15) && !FUN2(VAR46)) || ((VAR21 || (VAR12->VAR63 != VAR64)) && (VAR19 == 0)))
                    {
                        VAR62 = 4;
                    }
                    else
                    {
                        VAR62 = 3;
                    }
                }
                else
                {
                    VAR62 = 3;
                }
                VAR33[0] = VAR33[1] = VAR33[2] = VAR33[3] = VAR62;
            }
            else
            {
                int VAR38, VAR65;
                int VAR66;
                if (VAR44 & VAR51)
                {
                    VAR33[0] = VAR33[1] = VAR33[2] = VAR33[3] = 0;
                    VAR66 = 1;
                }
                else if (VAR21 && FUN2(VAR15 ^ VAR61))
                {
                    VAR33[0] = VAR33[1] = VAR33[2] = VAR33[3] = 1;
                    VAR66 = 1;
                }
                else if (VAR54 && (VAR44 || (VAR61 & (VAR49 | (VAR53 >> VAR19)))))
                {
                    int VAR67 = 8 + 4 + VAR44 * (VAR19 ? 8 : 1);
                    int VAR68 = VAR67 - (VAR19 ? 8 : 1);
                    int VAR69 = 0;
                    for (VAR65 = 0; !VAR69 && VAR65 < 1 + (VAR2->VAR70 == VAR71); VAR65++)
                    {
                        VAR69 |= VAR20[VAR2->VAR72[VAR65][VAR67] + 2] != VAR20[VAR2->VAR72[VAR65][VAR68] + 2] || FUN12(VAR2->VAR73[VAR65][VAR67][0] - VAR2->VAR73[VAR65][VAR68][0]) >= 4 || FUN12(VAR2->VAR73[VAR65][VAR67][1] - VAR2->VAR73[VAR65][VAR68][1]) >= VAR17;
                    }
                    VAR33[0] = VAR33[1] = VAR33[2] = VAR33[3] = VAR69;
                    VAR66 = 1;
                }
                else
                    VAR66 = 0;
                for (VAR38 = 0; VAR38 < 4; VAR38++)
                {
                    int VAR74 = VAR19 == 0 ? VAR44 : VAR38;
                    int VAR75 = VAR19 == 0 ? VAR38 : VAR44;
                    int VAR67 = 8 + 4 + VAR74 + 8 * VAR75;
                    int VAR68 = VAR67 - (VAR19 ? 8 : 1);
                    if (VAR2->VAR41[VAR67] != 0 || VAR2->VAR41[VAR68] != 0)
                    {
                        VAR33[VAR38] = 2;
                    }
                    else if (!VAR66)
                    {
                        VAR33[VAR38] = 0;
                        for (VAR65 = 0; VAR65 < 1 + (VAR2->VAR70 == VAR71); VAR65++)
                        {
                            if (VAR20[VAR2->VAR72[VAR65][VAR67] + 2] != VAR20[VAR2->VAR72[VAR65][VAR68] + 2] || FUN12(VAR2->VAR73[VAR65][VAR67][0] - VAR2->VAR73[VAR65][VAR68][0]) >= 4 || FUN12(VAR2->VAR73[VAR65][VAR67][1] - VAR2->VAR73[VAR65][VAR68][1]) >= VAR17)
                            {
                                VAR33[VAR38] = 1;
                                break;
                            }
                        }
                    }
                }
                if (VAR33[0] + VAR33[1] + VAR33[2] + VAR33[3] == 0)
                    continue;
            }
            VAR26 = (VAR12->VAR16.VAR27[VAR13] + VAR12->VAR16.VAR27[VAR39] + 1) >> 1;
            FUN6(VAR12->VAR43, "", VAR3, VAR4, VAR19, VAR44, VAR26, VAR9, VAR10);
            {
                int VAR38;
                for (VAR38 = 0; VAR38 < 4; VAR38++)
                    FUN6(VAR12->VAR43, "", VAR38, VAR33[VAR38]);
                FUN6(VAR12->VAR43, "");
            }
            if (VAR19 == 0)
            {
                FUN13(VAR2, &VAR6[4 * VAR44], VAR9, VAR33, VAR26);
                if ((VAR44 & 1) == 0)
                {
                    int VAR34 = (VAR2->VAR34 + FUN5(VAR2, VAR12->VAR16.VAR27[VAR39]) + 1) >> 1;
                    FUN14(VAR2, &VAR7[2 * VAR44], VAR10, VAR33, VAR34);
                    FUN14(VAR2, &VAR8[2 * VAR44], VAR10, VAR33, VAR34);
                }
            }
            else
            {
                FUN9(VAR2, &VAR6[4 * VAR44 * VAR9], VAR9, VAR33, VAR26);
                if ((VAR44 & 1) == 0)
                {
                    int VAR34 = (VAR2->VAR34 + FUN5(VAR2, VAR12->VAR16.VAR27[VAR39]) + 1) >> 1;
                    FUN10(VAR2, &VAR7[2 * VAR44 * VAR10], VAR10, VAR33, VAR34);
                    FUN10(VAR2, &VAR8[2 * VAR44 * VAR10], VAR10, VAR33, VAR34);
                }
            }
        }
    }
}