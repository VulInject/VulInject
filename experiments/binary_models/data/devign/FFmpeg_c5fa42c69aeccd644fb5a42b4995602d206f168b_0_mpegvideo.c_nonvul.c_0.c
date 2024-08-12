void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, FUN2 (*VAR11[2])[2], int *VAR12, int VAR13, int VAR14, int VAR15, int VAR16)
{
    if ((VAR2->VAR17 & VAR18) && VAR8 && VAR11[0])
    {
        const int VAR19 = 1 + VAR16;
        const int VAR20 = VAR2->VAR21 == VAR22 || VAR2->VAR21 == VAR23 ? 2 : 1;
        const int VAR24 = (VAR13 << VAR20) + (VAR2->VAR25->VAR26 == VAR22 ? 0 : 1);
        int VAR27, VAR28, VAR29 = 0;
        VAR30 *VAR31 = FUN3(VAR13 * VAR14, 2 * 4 * sizeof(VAR30));
        if (!VAR31)
            return;
        for (VAR28 = 0; VAR28 < VAR14; VAR28++)
        {
            for (VAR27 = 0; VAR27 < VAR13; VAR27++)
            {
                int VAR32, VAR33, VAR34 = VAR8[VAR27 + VAR28 * VAR15];
                for (VAR33 = 0; VAR33 < 2; VAR33++)
                {
                    if (!FUN4(VAR34, VAR33))
                        continue;
                    if (FUN5(VAR34))
                    {
                        for (VAR32 = 0; VAR32 < 4; VAR32++)
                        {
                            int VAR35 = VAR27 * 16 + 4 + 8 * (VAR32 & 1);
                            int VAR36 = VAR28 * 16 + 4 + 8 * (VAR32 >> 1);
                            int VAR37 = (VAR27 * 2 + (VAR32 & 1) + (VAR28 * 2 + (VAR32 >> 1)) * VAR24) << (VAR20 - 1);
                            int VAR38 = (VAR11[VAR33][VAR37][0] >> VAR19) + VAR35;
                            int VAR39 = (VAR11[VAR33][VAR37][1] >> VAR19) + VAR36;
                            VAR29 += FUN6(VAR31 + VAR29, VAR34, VAR35, VAR36, VAR38, VAR39, VAR33);
                        }
                    }
                    else if (FUN7(VAR34))
                    {
                        for (VAR32 = 0; VAR32 < 2; VAR32++)
                        {
                            int VAR35 = VAR27 * 16 + 8;
                            int VAR36 = VAR28 * 16 + 4 + 8 * VAR32;
                            int VAR37 = (VAR27 * 2 + (VAR28 * 2 + VAR32) * VAR24) << (VAR20 - 1);
                            int VAR38 = (VAR11[VAR33][VAR37][0] >> VAR19);
                            int VAR39 = (VAR11[VAR33][VAR37][1] >> VAR19);
                            if (FUN8(VAR34))
                                VAR39 *= 2;
                            VAR29 += FUN6(VAR31 + VAR29, VAR34, VAR35, VAR36, VAR38 + VAR35, VAR39 + VAR36, VAR33);
                        }
                    }
                    else if (FUN9(VAR34))
                    {
                        for (VAR32 = 0; VAR32 < 2; VAR32++)
                        {
                            int VAR35 = VAR27 * 16 + 4 + 8 * VAR32;
                            int VAR36 = VAR28 * 16 + 8;
                            int VAR37 = (VAR27 * 2 + VAR32 + VAR28 * 2 * VAR24) << (VAR20 - 1);
                            int VAR38 = VAR11[VAR33][VAR37][0] >> VAR19;
                            int VAR39 = VAR11[VAR33][VAR37][1] >> VAR19;
                            if (FUN8(VAR34))
                                VAR39 *= 2;
                            VAR29 += FUN6(VAR31 + VAR29, VAR34, VAR35, VAR36, VAR38 + VAR35, VAR39 + VAR36, VAR33);
                        }
                    }
                    else
                    {
                        int VAR35 = VAR27 * 16 + 8;
                        int VAR36 = VAR28 * 16 + 8;
                        int VAR37 = (VAR27 + VAR28 * VAR24) << VAR20;
                        int VAR38 = (VAR11[VAR33][VAR37][0] >> VAR19) + VAR35;
                        int VAR39 = (VAR11[VAR33][VAR37][1] >> VAR19) + VAR36;
                        VAR29 += FUN6(VAR31 + VAR29, VAR34, VAR35, VAR36, VAR38, VAR39, VAR33);
                    }
                }
            }
        }
        if (VAR29)
        {
            VAR40 *VAR41;
            FUN10(VAR2, VAR42, "", VAR29, VAR2->VAR43);
            VAR41 = FUN11(VAR4, VAR44, VAR29 * sizeof(VAR30));
            if (!VAR41)
            {
                FUN12(&VAR31);
                return;
            }
            memcpy(VAR41->VAR45, VAR31, VAR29 * sizeof(VAR30));
        }
        FUN12(&VAR31);
    }
    if (VAR2->VAR46 || !VAR8 || (VAR2->VAR25->VAR47 & VAR48))
        return;
    if (VAR2->VAR49 & (VAR50 | VAR51 | VAR52))
    {
        int VAR53, VAR54;
        FUN10(VAR2, VAR42, "", FUN13(VAR4->VAR55));
        for (VAR54 = 0; VAR54 < VAR14; VAR54++)
        {
            for (VAR53 = 0; VAR53 < VAR13; VAR53++)
            {
                if (VAR2->VAR49 & VAR50)
                {
                    int VAR56 = VAR6 ? VAR6[VAR53 + VAR54 * VAR15] : 0;
                    if (VAR56 > 9)
                        VAR56 = 9;
                    FUN10(VAR2, VAR42, "", VAR56);
                }
                if (VAR2->VAR49 & VAR51)
                {
                    FUN10(VAR2, VAR42, "", VAR10[VAR53 + VAR54 * VAR15]);
                }
                if (VAR2->VAR49 & VAR52)
                {
                    int VAR34 = VAR8[VAR53 + VAR54 * VAR15];
                    if (FUN14(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN15(VAR34) && FUN16(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN17(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN18(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN19(VAR34) && FUN20(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN19(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN21(VAR34) && FUN20(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN21(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN20(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (!FUN4(VAR34, 1))
                        FUN10(VAR2, VAR42, "");
                    else if (!FUN4(VAR34, 0))
                        FUN10(VAR2, VAR42, "");
                    else
                    {
                        FUN22(FUN4(VAR34, 0) && FUN4(VAR34, 1));
                        FUN10(VAR2, VAR42, "");
                    }
                    if (FUN5(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN7(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN9(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else if (FUN15(VAR34) || FUN23(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else
                        FUN10(VAR2, VAR42, "");
                    if (FUN8(VAR34))
                        FUN10(VAR2, VAR42, "");
                    else
                        FUN10(VAR2, VAR42, "");
                }
            }
            FUN10(VAR2, VAR42, "");
        }
    }
    if ((VAR2->VAR49 & (VAR57 | VAR58)) || (VAR2->VAR59))
    {
        int VAR28;
        int VAR32;
        int VAR60, VAR61, VAR62;
        const int VAR19 = 1 + VAR16;
        VAR5 *VAR63;
        const int VAR64 = VAR2->VAR64;
        const int VAR65 = VAR2->VAR65;
        const int VAR20 = VAR2->VAR21 == VAR22 || VAR2->VAR21 == VAR23 ? 2 : 1;
        const int VAR24 = (VAR13 << VAR20) + (VAR2->VAR25->VAR26 == VAR22 ? 0 : 1);
        *VAR12 = 0;
        FUN24(VAR2->VAR66, &VAR60, &VAR61);
        FUN25(VAR4);
        VAR4->VAR67 = NULL;
        VAR63 = VAR4->VAR45[0];
        VAR62 = 16 >> VAR61;
        for (VAR28 = 0; VAR28 < VAR14; VAR28++)
        {
            int VAR27;
            for (VAR27 = 0; VAR27 < VAR13; VAR27++)
            {
                const int VAR68 = VAR27 + VAR28 * VAR15;
                if ((VAR2->VAR59) && VAR11[0])
                {
                    int VAR69;
                    for (VAR69 = 0; VAR69 < 3; VAR69++)
                    {
                        int VAR33 = 0;
                        switch (VAR69)
                        {
                        case 0:
                            if ((!(VAR2->VAR59 & VAR70)) || (VAR4->VAR55 != VAR71))
                                continue;
                            VAR33 = 0;
                            break;
                        case 1:
                            if ((!(VAR2->VAR59 & VAR72)) || (VAR4->VAR55 != VAR73))
                                continue;
                            VAR33 = 0;
                            break;
                        case 2:
                            if ((!(VAR2->VAR59 & VAR74)) || (VAR4->VAR55 != VAR73))
                                continue;
                            VAR33 = 1;
                            break;
                        }
                        if (!FUN4(VAR8[VAR68], VAR33))
                            continue;
                        if (FUN5(VAR8[VAR68]))
                        {
                            int VAR32;
                            for (VAR32 = 0; VAR32 < 4; VAR32++)
                            {
                                int VAR35 = VAR27 * 16 + 4 + 8 * (VAR32 & 1);
                                int VAR36 = VAR28 * 16 + 4 + 8 * (VAR32 >> 1);
                                int VAR37 = (VAR27 * 2 + (VAR32 & 1) + (VAR28 * 2 + (VAR32 >> 1)) * VAR24) << (VAR20 - 1);
                                int VAR38 = (VAR11[VAR33][VAR37][0] >> VAR19) + VAR35;
                                int VAR39 = (VAR11[VAR33][VAR37][1] >> VAR19) + VAR36;
                                FUN26(VAR63, VAR35, VAR36, VAR38, VAR39, VAR64, VAR65, VAR4->VAR75[0], 100, 0, VAR33);
                            }
                        }
                        else if (FUN7(VAR8[VAR68]))
                        {
                            int VAR32;
                            for (VAR32 = 0; VAR32 < 2; VAR32++)
                            {
                                int VAR35 = VAR27 * 16 + 8;
                                int VAR36 = VAR28 * 16 + 4 + 8 * VAR32;
                                int VAR37 = (VAR27 * 2 + (VAR28 * 2 + VAR32) * VAR24) << (VAR20 - 1);
                                int VAR38 = (VAR11[VAR33][VAR37][0] >> VAR19);
                                int VAR39 = (VAR11[VAR33][VAR37][1] >> VAR19);
                                if (FUN8(VAR8[VAR68]))
                                    VAR39 *= 2;
                                FUN26(VAR63, VAR35, VAR36, VAR38 + VAR35, VAR39 + VAR36, VAR64, VAR65, VAR4->VAR75[0], 100, 0, VAR33);
                            }
                        }
                        else if (FUN9(VAR8[VAR68]))
                        {
                            int VAR32;
                            for (VAR32 = 0; VAR32 < 2; VAR32++)
                            {
                                int VAR35 = VAR27 * 16 + 4 + 8 * VAR32;
                                int VAR36 = VAR28 * 16 + 8;
                                int VAR37 = (VAR27 * 2 + VAR32 + VAR28 * 2 * VAR24) << (VAR20 - 1);
                                int VAR38 = VAR11[VAR33][VAR37][0] >> VAR19;
                                int VAR39 = VAR11[VAR33][VAR37][1] >> VAR19;
                                if (FUN8(VAR8[VAR68]))
                                    VAR39 *= 2;
                                FUN26(VAR63, VAR35, VAR36, VAR38 + VAR35, VAR39 + VAR36, VAR64, VAR65, VAR4->VAR75[0], 100, 0, VAR33);
                            }
                        }
                        else
                        {
                            int VAR35 = VAR27 * 16 + 8;
                            int VAR36 = VAR28 * 16 + 8;
                            int VAR37 = (VAR27 + VAR28 * VAR24) << VAR20;
                            int VAR38 = (VAR11[VAR33][VAR37][0] >> VAR19) + VAR35;
                            int VAR39 = (VAR11[VAR33][VAR37][1] >> VAR19) + VAR36;
                            FUN26(VAR63, VAR35, VAR36, VAR38, VAR39, VAR64, VAR65, VAR4->VAR75[0], 100, 0, VAR33);
                        }
                    }
                }
                if ((VAR2->VAR49 & VAR57))
                {
                    uint64_t VAR76 = (VAR10[VAR68] * 128 / 31) * 0x0101010101010101ULL;
                    int VAR54;
                    for (VAR54 = 0; VAR54 < VAR62; VAR54++)
                    {
                        *(VAR77 *)(VAR4->VAR45[1] + 8 * VAR27 + (VAR62 * VAR28 + VAR54) * VAR4->VAR75[1]) = VAR76;
                        *(VAR77 *)(VAR4->VAR45[2] + 8 * VAR27 + (VAR62 * VAR28 + VAR54) * VAR4->VAR75[2]) = VAR76;
                    }
                }
                if ((VAR2->VAR49 & VAR58) && VAR11[0])
                {
                    int VAR34 = VAR8[VAR68];
                    uint64_t VAR78, VAR79;
                    int VAR54;
                    VAR78 = (int)(128 + VAR80 * FUN27(VAR81 * VAR82 / 180));
                    VAR79 = (int)(128 + VAR80 * FUN28(VAR81 * VAR82 / 180));
                    VAR78 = VAR79 = 128;
                    if (FUN14(VAR34))
                    {
                        FUN29(120, 48)
                    }
                    else if ((FUN15(VAR34) && FUN16(VAR34)) || FUN18(VAR34))
                    {
                        FUN29(30, 48)
                    }
                    else if (FUN17(VAR34))
                    {
                        FUN29(90, 48)
                    }
                    else if (FUN19(VAR34) && FUN20(VAR34))
                    {
                    }
                    else if (FUN19(VAR34))
                    {
                        FUN29(150, 48)
                    }
                    else if (FUN21(VAR34) && FUN20(VAR34))
                    {
                        FUN29(170, 48)
                    }
                    else if (FUN21(VAR34))
                    {
                        FUN29(190, 48)
                    }
                    else if (FUN20(VAR34))
                    {
                    }
                    else if (!FUN4(VAR34, 1))
                    {
                        FUN29(240, 48)
                    }
                    else if (!FUN4(VAR34, 0))
                    {
                        FUN29(0, 48)
                    }
                    else
                    {
                        FUN22(FUN4(VAR34, 0) && FUN4(VAR34, 1));
                        FUN29(300, 48)
                    }
                    VAR78 *= 0x0101010101010101ULL;
                    VAR79 *= 0x0101010101010101ULL;
                    for (VAR54 = 0; VAR54 < VAR62; VAR54++)
                    {
                        *(VAR77 *)(VAR4->VAR45[1] + 8 * VAR27 + (VAR62 * VAR28 + VAR54) * VAR4->VAR75[1]) = VAR78;
                        *(VAR77 *)(VAR4->VAR45[2] + 8 * VAR27 + (VAR62 * VAR28 + VAR54) * VAR4->VAR75[2]) = VAR79;
                    }
                    if (FUN5(VAR34) || FUN7(VAR34))
                    {
                        *(VAR77 *)(VAR4->VAR45[0] + 16 * VAR27 + 0 + (16 * VAR28 + 8) * VAR4->VAR75[0]) ^= 0x8080808080808080ULL;
                        *(VAR77 *)(VAR4->VAR45[0] + 16 * VAR27 + 8 + (16 * VAR28 + 8) * VAR4->VAR75[0]) ^= 0x8080808080808080ULL;
                    }
                    if (FUN5(VAR34) || FUN9(VAR34))
                    {
                        for (VAR54 = 0; VAR54 < 16; VAR54++)
                            VAR4->VAR45[0][16 * VAR27 + 8 + (16 * VAR28 + VAR54) * VAR4->VAR75[0]] ^= 0x80;
                    }
                    if (FUN5(VAR34) && VAR20 >= 2)
                    {
                        int VAR83 = 1 << (VAR20 - 2);
                        for (VAR32 = 0; VAR32 < 4; VAR32++)
                        {
                            int VAR35 = VAR27 * 16 + 8 * (VAR32 & 1);
                            int VAR36 = VAR28 * 16 + 8 * (VAR32 >> 1);
                            int VAR37 = (VAR27 * 2 + (VAR32 & 1) + (VAR28 * 2 + (VAR32 >> 1)) * VAR24) << (VAR20 - 1);
                            VAR84 *VAR85 = (VAR84 *)&VAR11[0][VAR37];
                            if (VAR85[0] != VAR85[VAR83] || VAR85[VAR83 * VAR24] != VAR85[VAR83 * (VAR24 + 1)])
                                for (VAR54 = 0; VAR54 < 8; VAR54++)
                                    VAR4->VAR45[0][VAR35 + 4 + (VAR36 + VAR54) * VAR4->VAR75[0]] ^= 0x80;
                            if (VAR85[0] != VAR85[VAR83 * VAR24] || VAR85[VAR83] != VAR85[VAR83 * (VAR24 + 1)])
                                *(VAR77 *)(VAR4->VAR45[0] + VAR35 + (VAR36 + 4) * VAR4->VAR75[0]) ^= 0x8080808080808080ULL;
                        }
                    }
                    if (FUN8(VAR34) && VAR2->VAR25->VAR26 == VAR22)
                    {
                    }
                }
                if (VAR6)
                    VAR6[VAR68] = 0;
            }
        }
    }
}