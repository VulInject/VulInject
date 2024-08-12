static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8;
    int VAR9 = VAR4->VAR10 + VAR4->VAR11 * VAR4->VAR12;
    int VAR13 = 0;
    int VAR14, VAR15;
    int VAR16 = VAR2->VAR17;
    int VAR18 = 0;
    int VAR19 = 1;
    int VAR20, VAR21;
    int VAR22;
    int VAR23 = 1;
    int VAR24, VAR25;
    int VAR26, VAR27, VAR28 = 0;
    int VAR29 = 0, VAR30, VAR31 = 0;
    int VAR32 = 0, VAR33;
    int VAR34, VAR35;
    int VAR36 = VAR37;
    int VAR38, VAR39;
    VAR15 = VAR2->VAR40;
    VAR4->VAR41 = 0;
    if (VAR2->VAR42)
        VAR26 = FUN2(VAR6);
    else
        VAR26 = VAR2->VAR4.VAR43[VAR9];
    if (!VAR26)
    {
        VAR32 = FUN3(VAR6, VAR2->VAR44->VAR45, VAR46, 2);
        if (VAR47[0][VAR32][0] == VAR48)
        {
            VAR28 = 1;
            VAR2->VAR49[VAR4->VAR50[0]] = 1;
            VAR2->VAR49[VAR4->VAR50[1]] = 1;
            VAR2->VAR49[VAR4->VAR50[2]] = 1;
            VAR2->VAR49[VAR4->VAR50[3]] = 1;
        }
        else
        {
            VAR2->VAR49[VAR4->VAR50[0]] = 0;
            VAR2->VAR49[VAR4->VAR50[1]] = 0;
            VAR2->VAR49[VAR4->VAR50[2]] = 0;
            VAR2->VAR49[VAR4->VAR50[3]] = 0;
        }
    }
    if (VAR2->VAR51)
        VAR27 = FUN2(VAR6);
    else
        VAR27 = VAR2->VAR52[VAR9];
    if (VAR27)
    {
        VAR4->VAR53[0][0][0] = VAR4->VAR54.VAR55[0][VAR4->VAR50[0]][0] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[0]][0], VAR2->VAR57, 0, VAR4->VAR58);
        VAR4->VAR53[0][0][1] = VAR4->VAR54.VAR55[0][VAR4->VAR50[0]][1] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[0]][1], VAR2->VAR57, 0, VAR4->VAR58);
        VAR4->VAR53[1][0][0] = VAR4->VAR54.VAR55[1][VAR4->VAR50[0]][0] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[0]][0], VAR2->VAR57, 1, VAR4->VAR58);
        VAR4->VAR53[1][0][1] = VAR4->VAR54.VAR55[1][VAR4->VAR50[0]][1] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[0]][1], VAR2->VAR57, 1, VAR4->VAR58);
        if (VAR28)
        {
            VAR4->VAR53[0][2][0] = VAR4->VAR54.VAR55[0][VAR4->VAR50[2]][0] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[2]][0], VAR2->VAR57, 0, VAR4->VAR58);
            VAR4->VAR53[0][2][1] = VAR4->VAR54.VAR55[0][VAR4->VAR50[2]][1] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[2]][1], VAR2->VAR57, 0, VAR4->VAR58);
            VAR4->VAR53[1][2][0] = VAR4->VAR54.VAR55[1][VAR4->VAR50[2]][0] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[2]][0], VAR2->VAR57, 1, VAR4->VAR58);
            VAR4->VAR53[1][2][1] = VAR4->VAR54.VAR55[1][VAR4->VAR50[2]][1] = FUN4(VAR4->VAR56.VAR55[1][VAR4->VAR50[2]][1], VAR2->VAR57, 1, VAR4->VAR58);
            for (VAR7 = 1; VAR7 < 4; VAR7 += 2)
            {
                VAR4->VAR53[0][VAR7][0] = VAR4->VAR54.VAR55[0][VAR4->VAR50[VAR7]][0] = VAR4->VAR53[0][VAR7 - 1][0];
                VAR4->VAR53[0][VAR7][1] = VAR4->VAR54.VAR55[0][VAR4->VAR50[VAR7]][1] = VAR4->VAR53[0][VAR7 - 1][1];
                VAR4->VAR53[1][VAR7][0] = VAR4->VAR54.VAR55[1][VAR4->VAR50[VAR7]][0] = VAR4->VAR53[1][VAR7 - 1][0];
                VAR4->VAR53[1][VAR7][1] = VAR4->VAR54.VAR55[1][VAR4->VAR50[VAR7]][1] = VAR4->VAR53[1][VAR7 - 1][1];
            }
        }
        else
        {
            for (VAR7 = 1; VAR7 < 4; VAR7++)
            {
                VAR4->VAR53[0][VAR7][0] = VAR4->VAR54.VAR55[0][VAR4->VAR50[VAR7]][0] = VAR4->VAR53[0][0][0];
                VAR4->VAR53[0][VAR7][1] = VAR4->VAR54.VAR55[0][VAR4->VAR50[VAR7]][1] = VAR4->VAR53[0][0][1];
                VAR4->VAR53[1][VAR7][0] = VAR4->VAR54.VAR55[1][VAR4->VAR50[VAR7]][0] = VAR4->VAR53[1][0][0];
                VAR4->VAR53[1][VAR7][1] = VAR4->VAR54.VAR55[1][VAR4->VAR50[VAR7]][1] = VAR4->VAR53[1][0][1];
            }
        }
    }
    if (VAR47[0][VAR32][0] == VAR59)
    {
        for (VAR7 = 0; VAR7 < 4; VAR7++)
        {
            VAR4->VAR53[0][VAR7][0] = VAR4->VAR54.VAR55[0][VAR4->VAR50[VAR7]][0] = 0;
            VAR4->VAR53[0][VAR7][1] = VAR4->VAR54.VAR55[0][VAR4->VAR50[VAR7]][1] = 0;
            VAR4->VAR53[1][VAR7][0] = VAR4->VAR54.VAR55[1][VAR4->VAR50[VAR7]][0] = 0;
            VAR4->VAR53[1][VAR7][1] = VAR4->VAR54.VAR55[1][VAR4->VAR50[VAR7]][1] = 0;
        }
        VAR4->VAR54.VAR60[VAR9] = VAR61;
        VAR4->VAR41 = VAR2->VAR62[VAR4->VAR10] = 1;
        VAR35 = VAR2->VAR63[VAR9] = FUN2(VAR6);
        VAR19 = FUN2(VAR6);
        if (VAR19)
            VAR13 = 1 + FUN3(&VAR2->VAR4.VAR6, VAR2->VAR64->VAR45, VAR65, 2);
        VAR2->VAR4.VAR66 = VAR2->VAR67[VAR9] = FUN2(VAR6);
        FUN5();
        VAR4->VAR54.VAR68[VAR9] = VAR15;
        VAR4->VAR69 = VAR4->VAR70[VAR15];
        VAR4->VAR71 = VAR4->VAR72[VAR15];
        VAR24 = 0;
        for (VAR7 = 0; VAR7 < 6; VAR7++)
        {
            VAR2->VAR73 = VAR2->VAR74 = 0;
            VAR2->VAR60[0][VAR4->VAR50[VAR7]] = 1;
            VAR4->VAR75[0][VAR4->VAR50[VAR7]] = 0;
            VAR24 += VAR7 >> 2;
            VAR22 = ((VAR13 >> (5 - VAR7)) & 1);
            if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR76)
                VAR2->VAR73 = VAR2->VAR60[0][VAR4->VAR50[VAR7] - VAR4->VAR77[VAR7]];
            if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR10)
                VAR2->VAR74 = VAR2->VAR60[0][VAR4->VAR50[VAR7] - 1];
            FUN6(VAR2, VAR4->VAR78[VAR7], VAR7, VAR22, VAR15, (VAR7 & 4) ? VAR2->VAR79 : VAR2->VAR80);
            if (VAR7 > 3 && (VAR4->VAR81 & VAR82))
                continue;
            VAR2->VAR83.FUN7(VAR4->VAR78[VAR7]);
            if (VAR7 < 4)
            {
                VAR34 = VAR4->VAR84 << VAR35;
                VAR25 = (VAR35) ? ((VAR7 & 1) * 8) + ((VAR7 & 2) >> 1) * VAR4->VAR84 : (VAR7 & 1) * 8 + 4 * (VAR7 & 2) * VAR4->VAR84;
            }
            else
            {
                VAR34 = VAR4->VAR85;
                VAR25 = 0;
            }
            VAR4->VAR86.FUN8(VAR4->VAR78[VAR7], VAR4->VAR87[VAR24] + VAR25, VAR34);
        }
    }
    else
    {
        VAR4->VAR41 = VAR2->VAR62[VAR4->VAR10] = 0;
        if (!VAR27)
        {
            if (VAR26 || !VAR4->VAR41)
            {
                VAR36 = FUN9(VAR6);
                switch (VAR36)
                {
                case 0:
                    VAR36 = (VAR2->VAR57 >= (VAR88 / 2)) ? VAR37 : VAR89;
                    break;
                case 1:
                    VAR36 = (VAR2->VAR57 >= (VAR88 / 2)) ? VAR89 : VAR37;
                    break;
                case 2:
                    VAR36 = VAR90;
                }
            }
            if (VAR28 && VAR36 != VAR90)
                VAR18 = FUN2(VAR6);
        }
        if (!VAR26)
        {
            VAR19 = VAR47[0][VAR32][3];
            if (VAR19)
                VAR13 = 1 + FUN3(&VAR2->VAR4.VAR6, VAR2->VAR64->VAR45, VAR65, 2);
            if (!VAR27)
            {
                if (VAR36 == VAR90 && VAR28)
                {
                    VAR2->VAR91 = FUN3(VAR6, VAR2->VAR92->VAR45, VAR93, 1);
                }
                else if (VAR36 == VAR90 || VAR28)
                {
                    VAR2->VAR94 = FUN3(VAR6, VAR2->VAR95->VAR45, VAR96, 1);
                }
            }
            for (VAR7 = 0; VAR7 < 6; VAR7++)
                VAR2->VAR60[0][VAR4->VAR50[VAR7]] = 0;
            VAR35 = VAR2->VAR63[VAR9] = VAR47[0][VAR32][1];
            VAR24 = 0;
            if (VAR27)
            {
                if (VAR28)
                {
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        FUN10(VAR2, VAR7, 0, 0);
                        FUN10(VAR2, VAR7, 1, 1);
                    }
                    FUN11(VAR2, 0, 0, 0);
                    FUN11(VAR2, 1, 1, 1);
                }
                else
                {
                    FUN12(VAR2, 0);
                    FUN13(VAR2);
                }
            }
            else if (VAR28 && VAR36 == VAR90)
            {
                VAR33 = VAR2->VAR91;
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    VAR38 = VAR7 == 1 || VAR7 == 3;
                    VAR20 = VAR21 = 0;
                    VAR22 = ((VAR33 >> (3 - VAR7)) & 1);
                    if (VAR22)
                        FUN14(VAR2, &VAR20, &VAR21, 0);
                    VAR8 = VAR7 > 1 ? 2 : 0;
                    FUN15(VAR2, VAR8, VAR20, VAR21, 2, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], VAR38);
                    FUN10(VAR2, VAR8, VAR38, VAR38);
                    FUN10(VAR2, VAR8 + 1, VAR38, VAR38);
                }
                FUN11(VAR2, 0, 0, 0);
                FUN11(VAR2, 1, 1, 1);
            }
            else if (VAR36 == VAR90)
            {
                VAR33 = VAR2->VAR94;
                VAR20 = VAR21 = 0;
                if (VAR33 & 2)
                    FUN14(VAR2, &VAR20, &VAR21, 0);
                FUN15(VAR2, 0, VAR20, VAR21, 1, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], 0);
                FUN12(VAR2, 0);
                VAR20 = VAR21 = 0;
                if (VAR33 & 1)
                    FUN14(VAR2, &VAR20, &VAR21, 0);
                FUN15(VAR2, 0, VAR20, VAR21, 1, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], 1);
                FUN13(VAR2);
            }
            else if (VAR28)
            {
                VAR38 = VAR36 == VAR37;
                VAR39 = VAR38;
                if (VAR18)
                    VAR39 = !VAR38;
                VAR33 = VAR2->VAR94;
                VAR20 = VAR21 = 0;
                if (VAR33 & 2)
                    FUN14(VAR2, &VAR20, &VAR21, 0);
                FUN15(VAR2, 0, VAR20, VAR21, 2, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], VAR38);
                VAR20 = VAR21 = 0;
                if (VAR33 & 1)
                    FUN14(VAR2, &VAR20, &VAR21, 0);
                FUN15(VAR2, 2, VAR20, VAR21, 2, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], VAR39);
                if (VAR18)
                {
                    for (VAR7 = 0; VAR7 < 2; VAR7++)
                    {
                        VAR4->VAR53[VAR38][VAR7 + 2][0] = VAR4->VAR53[VAR38][VAR7][0] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7 + 2]][0] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7]][0];
                        VAR4->VAR53[VAR38][VAR7 + 2][1] = VAR4->VAR53[VAR38][VAR7][1] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7 + 2]][1] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7]][1];
                        VAR4->VAR53[VAR39][VAR7 + 2][0] = VAR4->VAR53[VAR39][VAR7][0] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7]][0] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7 + 2]][0];
                        VAR4->VAR53[VAR39][VAR7 + 2][1] = VAR4->VAR53[VAR39][VAR7][1] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7]][1] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7 + 2]][1];
                    }
                }
                else
                {
                    FUN15(VAR2, 0, 0, 0, 2, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], !VAR38);
                    FUN15(VAR2, 2, 0, 0, 2, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], !VAR38);
                }
                FUN10(VAR2, 0, VAR38, 0);
                FUN10(VAR2, 1, VAR38, 0);
                FUN10(VAR2, 2, VAR39, 0);
                FUN10(VAR2, 3, VAR39, 0);
                FUN11(VAR2, VAR38, VAR39, 0);
            }
            else
            {
                VAR38 = VAR36 == VAR37;
                VAR33 = VAR47[0][VAR32][2];
                VAR20 = VAR21 = 0;
                if (VAR33)
                    FUN14(VAR2, &VAR20, &VAR21, 0);
                FUN15(VAR2, 0, VAR20, VAR21, 1, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], VAR38);
                VAR2->VAR49[VAR4->VAR50[0]] = 1;
                VAR2->VAR49[VAR4->VAR50[1]] = 1;
                VAR2->VAR49[VAR4->VAR50[2]] = 1;
                VAR2->VAR49[VAR4->VAR50[3]] = 1;
                FUN15(VAR2, 0, 0, 0, 2, VAR2->VAR97, VAR2->VAR98, 0, !VAR38);
                for (VAR7 = 0; VAR7 < 2; VAR7++)
                {
                    VAR4->VAR53[!VAR38][VAR7 + 2][0] = VAR4->VAR53[!VAR38][VAR7][0] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7 + 2]][0] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7]][0];
                    VAR4->VAR53[!VAR38][VAR7 + 2][1] = VAR4->VAR53[!VAR38][VAR7][1] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7 + 2]][1] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7]][1];
                }
                FUN12(VAR2, VAR38);
            }
            if (VAR13)
                FUN5();
            VAR4->VAR54.VAR68[VAR9] = VAR15;
            if (!VAR2->VAR99 && VAR13)
                VAR16 = FUN3(VAR6, VAR100[VAR2->VAR101].VAR45, VAR102, 2);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR4->VAR75[0][VAR4->VAR50[VAR7]] = 0;
                VAR24 += VAR7 >> 2;
                VAR22 = ((VAR13 >> (5 - VAR7)) & 1);
                if (!VAR35)
                    VAR25 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR84);
                else
                    VAR25 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + ((VAR7 > 1) * VAR4->VAR84));
                if (VAR22)
                {
                    VAR30 = FUN16(VAR2, VAR4->VAR78[VAR7], VAR7, VAR15, VAR16, VAR23, VAR4->VAR87[VAR24] + VAR25, (VAR7 & 4) ? VAR4->VAR85 : (VAR4->VAR84 << VAR35), (VAR7 & 4) && (VAR4->VAR81 & VAR82), &VAR31);
                    VAR29 |= VAR30 << (VAR7 << 2);
                    if (!VAR2->VAR99 && VAR16 < 8)
                        VAR16 = -1;
                    VAR23 = 0;
                }
            }
        }
        else
        {
            VAR38 = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR2->VAR60[0][VAR4->VAR50[VAR7]] = 0;
                VAR4->VAR75[0][VAR4->VAR50[VAR7]] = 0;
            }
            VAR4->VAR54.VAR60[VAR9] = VAR103;
            VAR4->VAR54.VAR68[VAR9] = 0;
            VAR2->VAR49[VAR4->VAR50[0]] = 0;
            VAR2->VAR49[VAR4->VAR50[1]] = 0;
            VAR2->VAR49[VAR4->VAR50[2]] = 0;
            VAR2->VAR49[VAR4->VAR50[3]] = 0;
            if (!VAR27)
            {
                if (VAR36 == VAR90)
                {
                    FUN15(VAR2, 0, 0, 0, 1, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], 0);
                    FUN15(VAR2, 0, 0, 0, 1, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], 1);
                }
                else
                {
                    VAR38 = VAR36 == VAR37;
                    FUN15(VAR2, 0, 0, 0, 1, VAR2->VAR97, VAR2->VAR98, VAR2->VAR60[0], VAR38);
                    if (VAR18)
                    {
                        int VAR39 = VAR38;
                        if (VAR18)
                            VAR39 = !VAR38;
                        for (VAR7 = 0; VAR7 < 2; VAR7++)
                        {
                            VAR4->VAR53[VAR38][VAR7 + 2][0] = VAR4->VAR53[VAR38][VAR7][0] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7 + 2]][0] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7]][0];
                            VAR4->VAR53[VAR38][VAR7 + 2][1] = VAR4->VAR53[VAR38][VAR7][1] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7 + 2]][1] = VAR4->VAR54.VAR55[VAR38][VAR4->VAR50[VAR7]][1];
                            VAR4->VAR53[VAR39][VAR7 + 2][0] = VAR4->VAR53[VAR39][VAR7][0] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7]][0] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7 + 2]][0];
                            VAR4->VAR53[VAR39][VAR7 + 2][1] = VAR4->VAR53[VAR39][VAR7][1] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7]][1] = VAR4->VAR54.VAR55[VAR39][VAR4->VAR50[VAR7 + 2]][1];
                        }
                    }
                    else
                    {
                        VAR2->VAR49[VAR4->VAR50[0]] = 1;
                        VAR2->VAR49[VAR4->VAR50[1]] = 1;
                        VAR2->VAR49[VAR4->VAR50[2]] = 1;
                        VAR2->VAR49[VAR4->VAR50[3]] = 1;
                        FUN15(VAR2, 0, 0, 0, 2, VAR2->VAR97, VAR2->VAR98, 0, !VAR38);
                        for (VAR7 = 0; VAR7 < 2; VAR7++)
                        {
                            VAR4->VAR53[!VAR38][VAR7 + 2][0] = VAR4->VAR53[!VAR38][VAR7][0] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7 + 2]][0] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7]][0];
                            VAR4->VAR53[!VAR38][VAR7 + 2][1] = VAR4->VAR53[!VAR38][VAR7][1] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7 + 2]][1] = VAR4->VAR54.VAR55[!VAR38][VAR4->VAR50[VAR7]][1];
                        }
                    }
                }
            }
            FUN12(VAR2, VAR38);
            if (VAR27 || VAR36 == VAR90)
            {
                FUN13(VAR2);
            }
        }
    }
    if (VAR4->VAR10 == VAR4->VAR104 - 1)
        memmove(VAR2->VAR105, VAR2->VAR62, sizeof(VAR2->VAR105[0]) * VAR4->VAR12);
    VAR2->VAR13[VAR4->VAR10] = VAR29;
    VAR2->VAR106[VAR4->VAR10] = VAR31;
    return 0;
}