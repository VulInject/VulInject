static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR4->VAR6 + VAR4->VAR7 * VAR4->VAR8;
    int VAR9, VAR10, VAR11;
    VAR4->VAR12.FUN2(VAR2->VAR13);
    FUN3("", VAR2->VAR14, VAR4->VAR6, VAR4->VAR7);
    VAR11 = 0;
    if (VAR2->VAR15 != VAR16 && VAR2->VAR15 != VAR17)
    {
        if (VAR4->VAR18 == -1)
            VAR4->VAR18 = FUN4(&VAR4->VAR19);
        if (VAR4->VAR18--)
        {
            int VAR20, VAR21;
            VAR9 = VAR22 | VAR23 | VAR24;
            memset(VAR2->VAR25[VAR5], 0, 16);
            memset(VAR2->VAR26 + 8, 0, 8 * 5);
            if (VAR2->VAR27.VAR28 && VAR4->VAR18 == 0 && (VAR4->VAR7 & 1) == 0)
            {
                VAR2->VAR29 = FUN5(&VAR4->VAR19);
            }
            if (VAR2->VAR29)
                VAR9 |= VAR30;
            FUN6(VAR2, VAR9);
            FUN7(VAR2, &VAR20, &VAR21);
            FUN8(&VAR2->VAR31[0][VAR32[0]], 4, 4, 8, 0, 1);
            FUN8(VAR2->VAR33[0][VAR32[0]], 4, 4, 8, FUN9(VAR20, VAR21), 4);
            FUN10(VAR2, VAR9);
            VAR4->VAR34.VAR9[VAR5] = VAR9;
            VAR4->VAR34.VAR35[VAR5] = VAR4->VAR36;
            VAR2->VAR37[VAR5] = VAR2->VAR38;
            VAR2->VAR39 = 1;
            return 0;
        }
    }
    if (VAR2->VAR27.VAR28)
    {
        if ((VAR4->VAR7 & 1) == 0)
            VAR2->VAR29 = FUN5(&VAR4->VAR19);
    }
    else
        VAR2->VAR29 = 0;
    VAR2->VAR39 = 0;
    VAR9 = FUN4(&VAR4->VAR19);
    if (VAR2->VAR15 == VAR40)
    {
        if (VAR9 < 23)
        {
            VAR10 = VAR41[VAR9].VAR10;
            VAR9 = VAR41[VAR9].VAR42;
        }
        else
        {
            VAR9 -= 23;
            goto VAR43;
        }
    }
    else if (VAR2->VAR15 == VAR44)
    {
        if (VAR9 < 5)
        {
            VAR10 = VAR45[VAR9].VAR10;
            VAR9 = VAR45[VAR9].VAR42;
        }
        else
        {
            VAR9 -= 5;
            goto VAR43;
        }
    }
    else
    {
        assert(VAR2->VAR15 == VAR16);
    VAR43:
        if (VAR9 > 25)
        {
            FUN11(VAR2->VAR4.VAR46, VAR47, "", VAR9, FUN12(VAR2->VAR15), VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        VAR10 = 0;
        VAR11 = VAR48[VAR9].VAR11;
        VAR2->VAR49 = VAR48[VAR9].VAR50;
        VAR9 = VAR48[VAR9].VAR42;
    }
    if (VAR2->VAR29)
        VAR9 |= VAR30;
    VAR4->VAR34.VAR9[VAR5] = VAR9;
    VAR2->VAR37[VAR5] = VAR2->VAR38;
    if (FUN13(VAR9))
    {
        const VAR51 *VAR52;
        int VAR53, VAR54;
        FUN14(&VAR4->VAR19);
        VAR52 = VAR4->VAR19.VAR55 + FUN15(&VAR4->VAR19);
        for (VAR54 = 0; VAR54 < 16; VAR54++)
        {
            const int VAR56 = 4 * (VAR54 & 3) + 64 * (VAR54 >> 2);
            for (VAR53 = 0; VAR53 < 16; VAR53++)
            {
                VAR2->VAR13[VAR56 + (VAR53 & 3) + 16 * (VAR53 >> 2)] = *(VAR52++);
            }
        }
        for (VAR54 = 0; VAR54 < 8; VAR54++)
        {
            const int VAR56 = 256 + 4 * (VAR54 & 3) + 32 * (VAR54 >> 2);
            for (VAR53 = 0; VAR53 < 8; VAR53++)
            {
                VAR2->VAR13[VAR56 + (VAR53 & 3) + 16 * (VAR53 >> 2)] = *(VAR52++);
            }
        }
        for (VAR54 = 0; VAR54 < 8; VAR54++)
        {
            const int VAR56 = 256 + 64 + 4 * (VAR54 & 3) + 32 * (VAR54 >> 2);
            for (VAR53 = 0; VAR53 < 8; VAR53++)
            {
                VAR2->VAR13[VAR56 + (VAR53 & 3) + 16 * (VAR53 >> 2)] = *(VAR52++);
            }
        }
        FUN16(&VAR4->VAR19, 384);
        memset(VAR2->VAR25[VAR5], 16, 16);
        VAR4->VAR34.VAR35[VAR5] = VAR4->VAR36;
        return 0;
    }
    FUN6(VAR2, VAR9);
    if (FUN17(VAR9))
    {
        if (FUN18(VAR9))
        {
            int VAR57;
            for (VAR57 = 0; VAR57 < 16; VAR57++)
            {
                const int VAR58 = !FUN5(&VAR4->VAR19);
                const int VAR59 = FUN19(VAR2, VAR57);
                int VAR60;
                if (VAR58)
                {
                    const int VAR61 = FUN20(&VAR4->VAR19, 3);
                    if (VAR61 < VAR59)
                        VAR60 = VAR61;
                    else
                        VAR60 = VAR61 + 1;
                }
                else
                {
                    VAR60 = VAR59;
                }
                VAR2->VAR62[VAR32[VAR57]] = VAR60;
            }
            FUN21(VAR2);
            if (FUN22(VAR2) < 0)
                return -1;
        }
        else
        {
            VAR2->VAR49 = FUN23(VAR2, VAR2->VAR49);
            if (VAR2->VAR49 < 0)
                return -1;
        }
        VAR2->VAR63 = FUN4(&VAR4->VAR19);
        VAR2->VAR63 = FUN23(VAR2, VAR2->VAR63);
        if (VAR2->VAR63 < 0)
            return -1;
    }
    else if (VAR10 == 4)
    {
        int VAR57, VAR64, VAR65[4], VAR66, VAR67[2][4];
        if (VAR2->VAR15 == VAR40)
        {
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                VAR2->VAR68[VAR57] = FUN4(&VAR4->VAR19);
                if (VAR2->VAR68[VAR57] >= 13)
                {
                    FUN11(VAR2->VAR4.VAR46, VAR47, "", VAR2->VAR68[VAR57], VAR4->VAR6, VAR4->VAR7);
                    return -1;
                }
                VAR65[VAR57] = VAR69[VAR2->VAR68[VAR57]].VAR10;
                VAR2->VAR68[VAR57] = VAR69[VAR2->VAR68[VAR57]].VAR42;
            }
        }
        else
        {
            assert(VAR2->VAR15 == VAR44 || VAR2->VAR15 == VAR70);
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                VAR2->VAR68[VAR57] = FUN4(&VAR4->VAR19);
                if (VAR2->VAR68[VAR57] >= 4)
                {
                    FUN11(VAR2->VAR4.VAR46, VAR47, "", VAR2->VAR68[VAR57], VAR4->VAR6, VAR4->VAR7);
                    return -1;
                }
                VAR65[VAR57] = VAR71[VAR2->VAR68[VAR57]].VAR10;
                VAR2->VAR68[VAR57] = VAR71[VAR2->VAR68[VAR57]].VAR42;
            }
        }
        for (VAR66 = 0; VAR66 < 2; VAR66++)
        {
            const int VAR72 = FUN24(VAR9) ? 1 : VAR2->VAR72[VAR66];
            if (VAR72 == 0)
                continue;
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                if (FUN25(VAR2->VAR68[VAR57], 0, VAR66) && !FUN26(VAR2->VAR68[VAR57]))
                {
                    VAR67[VAR66][VAR57] = FUN27(&VAR4->VAR19, VAR72);
                }
                else
                {
                    VAR67[VAR66][VAR57] = -1;
                }
            }
        }
        for (VAR66 = 0; VAR66 < 2; VAR66++)
        {
            const int VAR72 = FUN24(VAR9) ? 1 : VAR2->VAR72[VAR66];
            if (VAR72 == 0)
                continue;
            for (VAR57 = 0; VAR57 < 4; VAR57++)
            {
                VAR2->VAR31[VAR66][VAR32[4 * VAR57]] = VAR2->VAR31[VAR66][VAR32[4 * VAR57] + 1] = VAR2->VAR31[VAR66][VAR32[4 * VAR57] + 8] = VAR2->VAR31[VAR66][VAR32[4 * VAR57] + 9] = VAR67[VAR66][VAR57];
                if (FUN25(VAR2->VAR68[VAR57], 0, VAR66) && !FUN26(VAR2->VAR68[VAR57]))
                {
                    const int VAR68 = VAR2->VAR68[VAR57];
                    const int VAR73 = (VAR68 & (VAR22 | VAR74)) ? 2 : 1;
                    for (VAR64 = 0; VAR64 < VAR65[VAR57]; VAR64++)
                    {
                        int VAR20, VAR21;
                        const int VAR56 = 4 * VAR57 + VAR73 * VAR64;
                        FUN28(*VAR33)[2] = &VAR2->VAR33[VAR66][VAR32[VAR56]];
                        FUN29(VAR2, VAR56, VAR73, VAR66, VAR2->VAR31[VAR66][VAR32[VAR56]], &VAR20, &VAR21);
                        VAR20 += FUN30(&VAR4->VAR19);
                        VAR21 += FUN30(&VAR4->VAR19);
                        FUN3("", VAR20, VAR21);
                        if (FUN31(VAR68))
                        {
                            VAR33[0][0] = VAR33[1][0] = VAR33[8][0] = VAR33[9][0] = VAR20;
                            VAR33[0][1] = VAR33[1][1] = VAR33[8][1] = VAR33[9][1] = VAR21;
                        }
                        else if (FUN32(VAR68))
                        {
                            VAR33[0][0] = VAR33[1][0] = VAR20;
                            VAR33[0][1] = VAR33[1][1] = VAR21;
                        }
                        else if (FUN33(VAR68))
                        {
                            VAR33[0][0] = VAR33[8][0] = VAR20;
                            VAR33[0][1] = VAR33[8][1] = VAR21;
                        }
                        else
                        {
                            assert(FUN34(VAR68));
                            VAR33[0][0] = VAR20;
                            VAR33[0][1] = VAR21;
                        }
                    }
                }
                else
                {
                    VAR75 *VAR76 = (VAR75 *)&VAR2->VAR33[VAR66][VAR32[4 * VAR57]][0];
                    VAR76[0] = VAR76[1] = VAR76[8] = VAR76[9] = 0;
                }
            }
        }
    }
    else if (!FUN26(VAR9))
    {
        int VAR66, VAR20, VAR21, VAR57;
        if (FUN35(VAR9))
        {
            for (VAR66 = 0; VAR66 < 2; VAR66++)
            {
                if (VAR2->VAR72[0] > 0)
                {
                    if (FUN25(VAR9, 0, VAR66))
                    {
                        const int VAR77 = FUN27(&VAR4->VAR19, VAR2->VAR72[VAR66]);
                        FUN8(&VAR2->VAR31[VAR66][VAR32[0]], 4, 4, 8, VAR77, 1);
                    }
                }
            }
            for (VAR66 = 0; VAR66 < 2; VAR66++)
            {
                if (FUN25(VAR9, 0, VAR66))
                {
                    FUN29(VAR2, 0, 4, VAR66, VAR2->VAR31[VAR66][VAR32[0]], &VAR20, &VAR21);
                    VAR20 += FUN30(&VAR4->VAR19);
                    VAR21 += FUN30(&VAR4->VAR19);
                    FUN3("", VAR20, VAR21);
                    FUN8(VAR2->VAR33[VAR66][VAR32[0]], 4, 4, 8, FUN9(VAR20, VAR21), 4);
                }
            }
        }
        else if (FUN36(VAR9))
        {
            for (VAR66 = 0; VAR66 < 2; VAR66++)
            {
                if (VAR2->VAR72[VAR66] > 0)
                {
                    for (VAR57 = 0; VAR57 < 2; VAR57++)
                    {
                        if (FUN25(VAR9, VAR57, VAR66))
                        {
                            const int VAR77 = FUN27(&VAR4->VAR19, VAR2->VAR72[VAR66]);
                            FUN8(&VAR2->VAR31[VAR66][VAR32[0] + 16 * VAR57], 4, 2, 8, VAR77, 1);
                        }
                    }
                }
            }
            for (VAR66 = 0; VAR66 < 2; VAR66++)
            {
                for (VAR57 = 0; VAR57 < 2; VAR57++)
                {
                    if (FUN25(VAR9, VAR57, VAR66))
                    {
                        FUN37(VAR2, 8 * VAR57, VAR66, VAR2->VAR31[VAR66][VAR32[0] + 16 * VAR57], &VAR20, &VAR21);
                        VAR20 += FUN30(&VAR4->VAR19);
                        VAR21 += FUN30(&VAR4->VAR19);
                        FUN3("", VAR20, VAR21);
                        FUN8(VAR2->VAR33[VAR66][VAR32[0] + 16 * VAR57], 4, 2, 8, FUN9(VAR20, VAR21), 4);
                    }
                }
            }
        }
        else
        {
            assert(FUN38(VAR9));
            for (VAR66 = 0; VAR66 < 2; VAR66++)
            {
                if (VAR2->VAR72[VAR66] > 0)
                {
                    for (VAR57 = 0; VAR57 < 2; VAR57++)
                    {
                        if (FUN25(VAR9, VAR57, VAR66))
                        {
                            const int VAR77 = FUN27(&VAR4->VAR19, VAR2->VAR72[VAR66]);
                            FUN8(&VAR2->VAR31[VAR66][VAR32[0] + 2 * VAR57], 2, 4, 8, VAR77, 1);
                        }
                    }
                }
            }
            for (VAR66 = 0; VAR66 < 2; VAR66++)
            {
                for (VAR57 = 0; VAR57 < 2; VAR57++)
                {
                    if (FUN25(VAR9, VAR57, VAR66))
                    {
                        FUN39(VAR2, VAR57 * 4, VAR66, VAR2->VAR31[VAR66][VAR32[0] + 2 * VAR57], &VAR20, &VAR21);
                        VAR20 += FUN30(&VAR4->VAR19);
                        VAR21 += FUN30(&VAR4->VAR19);
                        FUN3("", VAR20, VAR21);
                        FUN8(VAR2->VAR33[VAR66][VAR32[0] + 2 * VAR57], 2, 4, 8, FUN9(VAR20, VAR21), 4);
                    }
                }
            }
        }
    }
    if (FUN40(VAR9))
        FUN10(VAR2, VAR9);
    if (!FUN41(VAR9))
    {
        VAR11 = FUN4(&VAR4->VAR19);
        if (VAR11 > 47)
        {
            FUN11(VAR2->VAR4.VAR46, VAR47, "", VAR11, VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        if (FUN18(VAR9))
            VAR11 = VAR78[VAR11];
        else
            VAR11 = VAR79[VAR11];
    }
    if (VAR11 || FUN41(VAR9))
    {
        int VAR80, VAR81, VAR82;
        int VAR83, VAR84;
        VAR85 *VAR19 = FUN17(VAR9) ? VAR2->VAR86 : VAR2->VAR87;
        const VAR51 *VAR88, *VAR89;
        if (FUN42(VAR9))
        {
            VAR88 = VAR90;
            VAR89 = VAR91;
        }
        else
        {
            VAR88 = VAR92;
            VAR89 = VAR93;
        }
        VAR84 = FUN30(&VAR4->VAR19);
        if (VAR84 > 25 || VAR84 < -26)
        {
            FUN11(VAR2->VAR4.VAR46, VAR47, "", VAR84, VAR4->VAR6, VAR4->VAR7);
            return -1;
        }
        VAR4->VAR36 += VAR84;
        if (((unsigned)VAR4->VAR36) > 51)
        {
            if (VAR4->VAR36 < 0)
                VAR4->VAR36 += 52;
            else
                VAR4->VAR36 -= 52;
        }
        VAR2->VAR83 = VAR83 = FUN43(VAR2, VAR4->VAR36);
        if (FUN41(VAR9))
        {
            if (FUN44(VAR2, VAR2->VAR86, VAR2->VAR13, VAR94, VAR89, VAR4->VAR36, 16) < 0)
            {
                return -1;
            }
            assert((VAR11 & 15) == 0 || (VAR11 & 15) == 15);
            if (VAR11 & 15)
            {
                for (VAR80 = 0; VAR80 < 4; VAR80++)
                {
                    for (VAR81 = 0; VAR81 < 4; VAR81++)
                    {
                        const int VAR56 = VAR81 + 4 * VAR80;
                        if (FUN44(VAR2, VAR2->VAR86, VAR2->VAR13 + 16 * VAR56, VAR56, VAR88 + 1, VAR4->VAR36, 15) < 0)
                        {
                            return -1;
                        }
                    }
                }
            }
            else
            {
                FUN8(&VAR2->VAR26[VAR32[0]], 4, 4, 8, 0, 1);
            }
        }
        else
        {
            for (VAR80 = 0; VAR80 < 4; VAR80++)
            {
                if (VAR11 & (1 << VAR80))
                {
                    for (VAR81 = 0; VAR81 < 4; VAR81++)
                    {
                        const int VAR56 = VAR81 + 4 * VAR80;
                        if (FUN44(VAR2, VAR19, VAR2->VAR13 + 16 * VAR56, VAR56, VAR88, VAR4->VAR36, 16) < 0)
                        {
                            return -1;
                        }
                    }
                }
                else
                {
                    VAR51 *const VAR95 = &VAR2->VAR26[VAR32[4 * VAR80]];
                    VAR95[0] = VAR95[1] = VAR95[8] = VAR95[9] = 0;
                }
            }
        }
        if (VAR11 & 0x30)
        {
            for (VAR82 = 0; VAR82 < 2; VAR82++)
                if (FUN44(VAR2, VAR19, VAR2->VAR13 + 256 + 16 * 4 * VAR82, VAR96, VAR97, VAR83, 4) < 0)
                {
                    return -1;
                }
        }
        if (VAR11 & 0x20)
        {
            for (VAR82 = 0; VAR82 < 2; VAR82++)
            {
                for (VAR81 = 0; VAR81 < 4; VAR81++)
                {
                    const int VAR56 = 16 + 4 * VAR82 + VAR81;
                    if (FUN44(VAR2, VAR19, VAR2->VAR13 + 16 * VAR56, VAR56, VAR88 + 1, VAR83, 15) < 0)
                    {
                        return -1;
                    }
                }
            }
        }
        else
        {
            VAR51 *const VAR95 = &VAR2->VAR26[0];
            VAR95[VAR32[16] + 0] = VAR95[VAR32[16] + 1] = VAR95[VAR32[16] + 8] = VAR95[VAR32[16] + 9] = VAR95[VAR32[20] + 0] = VAR95[VAR32[20] + 1] = VAR95[VAR32[20] + 8] = VAR95[VAR32[20] + 9] = 0;
        }
    }
    else
    {
        VAR51 *const VAR95 = &VAR2->VAR26[0];
        FUN8(&VAR95[VAR32[0]], 4, 4, 8, 0, 1);
        VAR95[VAR32[16] + 0] = VAR95[VAR32[16] + 1] = VAR95[VAR32[16] + 8] = VAR95[VAR32[16] + 9] = VAR95[VAR32[20] + 0] = VAR95[VAR32[20] + 1] = VAR95[VAR32[20] + 8] = VAR95[VAR32[20] + 9] = 0;
    }
    VAR4->VAR34.VAR35[VAR5] = VAR4->VAR36;
    FUN45(VAR2);
    return 0;
}