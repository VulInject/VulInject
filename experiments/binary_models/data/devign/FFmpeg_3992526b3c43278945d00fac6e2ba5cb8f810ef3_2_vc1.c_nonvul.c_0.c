static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8;
    int VAR9 = VAR4->VAR10 + VAR4->VAR11 * VAR4->VAR12;
    int VAR13;
    int VAR14, VAR15;
    int VAR16 = VAR2->VAR17;
    int VAR18 = 1;
    int VAR19, VAR20;
    int VAR21, VAR22;
    int VAR23, VAR24;
    int VAR25 = 1;
    int VAR26, VAR27;
    int VAR28, VAR29;
    int VAR30 = 0, VAR31;
    int VAR32;
    VAR15 = VAR2->VAR33;
    if (VAR2->VAR34)
        VAR29 = FUN2(VAR6);
    else
        VAR29 = VAR2->VAR35[VAR9];
    if (VAR2->VAR36)
        VAR28 = FUN2(VAR6);
    else
        VAR28 = VAR2->VAR4.VAR37[VAR9];
    VAR4->VAR38.FUN3(VAR4->VAR39[0]);
    VAR32 = VAR4->VAR40 && !(VAR4->VAR41->VAR42 >= VAR43);
    if (!VAR29)
    {
        if (!VAR28)
        {
            FUN4(VAR19, VAR20);
            if (VAR4->VAR44)
            {
                VAR4->VAR45.VAR46[1][VAR4->VAR47[0]][0] = 0;
                VAR4->VAR45.VAR46[1][VAR4->VAR47[0]][1] = 0;
            }
            VAR4->VAR45.VAR48[VAR9] = VAR4->VAR44 ? VAR49 : VAR50;
            FUN5(VAR4, 0, VAR19, VAR20, 1, VAR2->VAR51, VAR2->VAR52, VAR2->VAR48[0]);
            if (VAR4->VAR44 && !VAR18)
            {
                FUN6();
                VAR4->VAR53 = FUN2(VAR6);
                VAR13 = 0;
            }
            else if (VAR18)
            {
                if (VAR4->VAR44)
                    VAR4->VAR53 = FUN2(VAR6);
                VAR13 = FUN7(&VAR2->VAR4.VAR6, VAR2->VAR54->VAR55, VAR56, 2);
                FUN6();
            }
            else
            {
                VAR15 = VAR2->VAR33;
                VAR13 = 0;
            }
            VAR4->VAR45.VAR57[VAR9] = VAR15;
            if (!VAR2->VAR58 && !VAR4->VAR44 && VAR18)
                VAR16 = FUN7(VAR6, VAR59[VAR2->VAR60].VAR55, VAR61, 2);
            if (!VAR4->VAR44)
                FUN8(VAR2, 0);
            VAR26 = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR4->VAR62[0][VAR4->VAR47[VAR7]] = 0;
                VAR26 += VAR7 >> 2;
                VAR23 = ((VAR13 >> (5 - VAR7)) & 1);
                VAR27 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR63);
                VAR2->VAR48[0][VAR4->VAR47[VAR7]] = VAR4->VAR44;
                if (VAR4->VAR44)
                {
                    VAR2->VAR64 = VAR2->VAR65 = 0;
                    if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR66)
                        VAR2->VAR64 = VAR2->VAR48[0][VAR4->VAR47[VAR7] - VAR4->VAR67[VAR7]];
                    if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR10)
                        VAR2->VAR65 = VAR2->VAR48[0][VAR4->VAR47[VAR7] - 1];
                    FUN9(VAR2, VAR4->VAR39[VAR7], VAR7, VAR23, VAR15, (VAR7 & 4) ? VAR2->VAR68 : VAR2->VAR69);
                    if ((VAR7 > 3) && (VAR4->VAR70 & VAR71))
                        continue;
                    VAR4->VAR38.FUN10(VAR4->VAR39[VAR7]);
                    if (VAR2->VAR72)
                        for (VAR8 = 0; VAR8 < 64; VAR8++)
                            VAR4->VAR39[VAR7][VAR8] <<= 1;
                    VAR4->VAR38.FUN11(VAR4->VAR39[VAR7], VAR4->VAR73[VAR26] + VAR27, VAR4->VAR63 >> ((VAR7 & 4) >> 2));
                    if (VAR2->VAR33 >= 9 && VAR2->VAR74)
                    {
                        if (VAR2->VAR65)
                            VAR4->VAR38.FUN12(VAR4->VAR73[VAR26] + VAR27, VAR4->VAR63 >> ((VAR7 & 4) >> 2));
                        if (VAR2->VAR64)
                            VAR4->VAR38.FUN13(VAR4->VAR73[VAR26] + VAR27, VAR4->VAR63 >> ((VAR7 & 4) >> 2));
                    }
                    if (VAR32 && VAR4->VAR10 && VAR4->VAR10 != (VAR4->VAR75 - 1) && VAR4->VAR11 && VAR4->VAR11 != (VAR4->VAR76 - 1))
                    {
                        int VAR77, VAR78;
                        if (VAR7 & 4)
                        {
                            VAR77 = VAR2->VAR13[VAR4->VAR10 - 1] >> (VAR7 * 4);
                            VAR78 = VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> (VAR7 * 4);
                        }
                        else
                        {
                            VAR77 = (VAR7 & 1) ? (VAR13 >> ((VAR7 - 1) * 4)) : (VAR2->VAR13[VAR4->VAR10 - 1] >> ((VAR7 + 1) * 4));
                            VAR78 = (VAR7 & 2) ? (VAR13 >> ((VAR7 - 2) * 4)) : (VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> ((VAR7 + 2) * 4));
                        }
                        if (VAR77 & 0xC)
                            VAR4->VAR38.FUN14(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                        if (VAR78 & 0xA)
                            VAR4->VAR38.FUN15(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                    }
                    VAR30 |= 0xF << (VAR7 << 2);
                }
                else if (VAR23)
                {
                    int VAR77 = 0, VAR78 = 0, VAR80 = 0;
                    if (VAR32 && VAR4->VAR10 && VAR4->VAR10 != (VAR4->VAR75 - 1) && VAR4->VAR11 && VAR4->VAR11 != (VAR4->VAR76 - 1))
                    {
                        VAR80 = 1;
                        if (VAR7 & 4)
                        {
                            VAR77 = VAR2->VAR13[VAR4->VAR10 - 1] >> (VAR7 * 4);
                            VAR78 = VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> (VAR7 * 4);
                        }
                        else
                        {
                            VAR77 = (VAR7 & 1) ? (VAR13 >> ((VAR7 - 1) * 4)) : (VAR2->VAR13[VAR4->VAR10 - 1] >> ((VAR7 + 1) * 4));
                            VAR78 = (VAR7 & 2) ? (VAR13 >> ((VAR7 - 2) * 4)) : (VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> ((VAR7 + 2) * 4));
                        }
                        if (VAR77 & 0xC)
                            VAR4->VAR38.FUN14(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                        if (VAR78 & 0xA)
                            VAR4->VAR38.FUN15(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                    }
                    VAR31 = FUN16(VAR2, VAR4->VAR39[VAR7], VAR7, VAR15, VAR16, VAR25, VAR4->VAR73[VAR26] + VAR27, (VAR7 & 4) ? VAR4->VAR79 : VAR4->VAR63, (VAR7 & 4) && (VAR4->VAR70 & VAR71), VAR80, VAR77, VAR78);
                    VAR30 |= VAR31 << (VAR7 << 2);
                    if (!VAR2->VAR58 && VAR16 < 8)
                        VAR16 = -1;
                    VAR25 = 0;
                }
            }
        }
        else
        {
            VAR4->VAR44 = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR2->VAR48[0][VAR4->VAR47[VAR7]] = 0;
                VAR4->VAR62[0][VAR4->VAR47[VAR7]] = 0;
            }
            VAR4->VAR45.VAR48[VAR9] = VAR81;
            VAR4->VAR45.VAR57[VAR9] = 0;
            FUN5(VAR4, 0, 0, 0, 1, VAR2->VAR51, VAR2->VAR52, VAR2->VAR48[0]);
            FUN8(VAR2, 0);
            return 0;
        }
    }
    else
    {
        if (!VAR28)
        {
            int VAR82 = 0, VAR83 = 0;
            int VAR84[6], VAR85[6];
            VAR13 = FUN7(&VAR2->VAR4.VAR6, VAR2->VAR54->VAR55, VAR56, 2);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR23 = ((VAR13 >> (5 - VAR7)) & 1);
                VAR4->VAR62[0][VAR4->VAR47[VAR7]] = 0;
                VAR4->VAR44 = 0;
                if (VAR7 < 4)
                {
                    VAR19 = VAR20 = 0;
                    VAR4->VAR44 = 0;
                    VAR18 = 0;
                    if (VAR23)
                    {
                        FUN4(VAR19, VAR20);
                    }
                    FUN5(VAR4, VAR7, VAR19, VAR20, 0, VAR2->VAR51, VAR2->VAR52, VAR2->VAR48[0]);
                    if (!VAR4->VAR44)
                        FUN17(VAR2, VAR7);
                    VAR82 += VAR4->VAR44;
                    VAR84[VAR7] = VAR4->VAR44;
                    VAR85[VAR7] = VAR18;
                }
                if (VAR7 & 4)
                {
                    VAR84[VAR7] = (VAR82 >= 3);
                    VAR85[VAR7] = VAR23;
                }
                if (VAR7 == 4)
                    FUN18(VAR2);
                VAR2->VAR48[0][VAR4->VAR47[VAR7]] = VAR84[VAR7];
                if (!VAR83)
                    VAR83 = !VAR84[VAR7] & VAR85[VAR7];
            }
            if (!VAR82 && !VAR83)
                return 0;
            VAR26 = 0;
            FUN6();
            VAR4->VAR45.VAR57[VAR9] = VAR15;
            {
                int VAR86 = 0;
                for (VAR7 = 0; VAR7 < 6; VAR7++)
                    if (VAR84[VAR7])
                    {
                        if (((!VAR4->VAR66 || (VAR7 == 2 || VAR7 == 3)) && VAR2->VAR48[0][VAR4->VAR47[VAR7] - VAR4->VAR67[VAR7]]) || ((VAR4->VAR10 || (VAR7 == 1 || VAR7 == 3)) && VAR2->VAR48[0][VAR4->VAR47[VAR7] - 1]))
                        {
                            VAR86 = 1;
                            break;
                        }
                    }
                if (VAR86)
                    VAR4->VAR53 = FUN2(VAR6);
                else
                    VAR4->VAR53 = 0;
            }
            if (!VAR2->VAR58 && VAR83)
                VAR16 = FUN7(VAR6, VAR59[VAR2->VAR60].VAR55, VAR61, 2);
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR26 += VAR7 >> 2;
                VAR27 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR63);
                VAR4->VAR44 = VAR84[VAR7];
                if (VAR84[VAR7])
                {
                    VAR2->VAR64 = VAR2->VAR65 = 0;
                    if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR66)
                        VAR2->VAR64 = VAR2->VAR48[0][VAR4->VAR47[VAR7] - VAR4->VAR67[VAR7]];
                    if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR10)
                        VAR2->VAR65 = VAR2->VAR48[0][VAR4->VAR47[VAR7] - 1];
                    FUN9(VAR2, VAR4->VAR39[VAR7], VAR7, VAR85[VAR7], VAR15, (VAR7 & 4) ? VAR2->VAR68 : VAR2->VAR69);
                    if ((VAR7 > 3) && (VAR4->VAR70 & VAR71))
                        continue;
                    VAR4->VAR38.FUN10(VAR4->VAR39[VAR7]);
                    if (VAR2->VAR72)
                        for (VAR8 = 0; VAR8 < 64; VAR8++)
                            VAR4->VAR39[VAR7][VAR8] <<= 1;
                    VAR4->VAR38.FUN11(VAR4->VAR39[VAR7], VAR4->VAR73[VAR26] + VAR27, (VAR7 & 4) ? VAR4->VAR79 : VAR4->VAR63);
                    if (VAR2->VAR33 >= 9 && VAR2->VAR74)
                    {
                        if (VAR2->VAR65)
                            VAR4->VAR38.FUN12(VAR4->VAR73[VAR26] + VAR27, VAR4->VAR63 >> ((VAR7 & 4) >> 2));
                        if (VAR2->VAR64)
                            VAR4->VAR38.FUN13(VAR4->VAR73[VAR26] + VAR27, VAR4->VAR63 >> ((VAR7 & 4) >> 2));
                    }
                    if (VAR2->VAR4.VAR40 && VAR4->VAR10 && VAR4->VAR10 != (VAR4->VAR75 - 1) && VAR4->VAR11 && VAR4->VAR11 != (VAR4->VAR76 - 1))
                    {
                        int VAR77, VAR78;
                        if (VAR7 & 4)
                        {
                            VAR77 = VAR2->VAR13[VAR4->VAR10 - 1] >> (VAR7 * 4);
                            VAR78 = VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> (VAR7 * 4);
                        }
                        else
                        {
                            VAR77 = (VAR7 & 1) ? (VAR13 >> ((VAR7 - 1) * 4)) : (VAR2->VAR13[VAR4->VAR10 - 1] >> ((VAR7 + 1) * 4));
                            VAR78 = (VAR7 & 2) ? (VAR13 >> ((VAR7 - 2) * 4)) : (VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> ((VAR7 + 2) * 4));
                        }
                        if (VAR77 & 0xC)
                            VAR4->VAR38.FUN14(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                        if (VAR78 & 0xA)
                            VAR4->VAR38.FUN15(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                    }
                    VAR30 |= 0xF << (VAR7 << 2);
                }
                else if (VAR85[VAR7])
                {
                    int VAR77 = 0, VAR78 = 0, VAR80 = 0;
                    if (VAR2->VAR4.VAR40 && VAR4->VAR10 && VAR4->VAR10 != (VAR4->VAR75 - 1) && VAR4->VAR11 && VAR4->VAR11 != (VAR4->VAR76 - 1))
                    {
                        VAR80 = 1;
                        if (VAR7 & 4)
                        {
                            VAR77 = VAR2->VAR13[VAR4->VAR10 - 1] >> (VAR7 * 4);
                            VAR78 = VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> (VAR7 * 4);
                        }
                        else
                        {
                            VAR77 = (VAR7 & 1) ? (VAR13 >> ((VAR7 - 1) * 4)) : (VAR2->VAR13[VAR4->VAR10 - 1] >> ((VAR7 + 1) * 4));
                            VAR78 = (VAR7 & 2) ? (VAR13 >> ((VAR7 - 2) * 4)) : (VAR2->VAR13[VAR4->VAR10 - VAR4->VAR12] >> ((VAR7 + 2) * 4));
                        }
                        if (VAR77 & 0xC)
                            VAR4->VAR38.FUN14(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                        if (VAR78 & 0xA)
                            VAR4->VAR38.FUN15(VAR4->VAR73[VAR26] + VAR27, VAR7 & 4 ? VAR4->VAR79 : VAR4->VAR63, VAR15);
                    }
                    VAR31 = FUN16(VAR2, VAR4->VAR39[VAR7], VAR7, VAR15, VAR16, VAR25, VAR4->VAR73[VAR26] + VAR27, (VAR7 & 4) ? VAR4->VAR79 : VAR4->VAR63, (VAR7 & 4) && (VAR4->VAR70 & VAR71), VAR80, VAR77, VAR78);
                    VAR30 |= VAR31 << (VAR7 << 2);
                    if (!VAR2->VAR58 && VAR16 < 8)
                        VAR16 = -1;
                    VAR25 = 0;
                }
            }
            return 0;
        }
        else
        {
            VAR4->VAR44 = 0;
            VAR4->VAR45.VAR57[VAR9] = 0;
            for (VAR7 = 0; VAR7 < 6; VAR7++)
            {
                VAR2->VAR48[0][VAR4->VAR47[VAR7]] = 0;
                VAR4->VAR62[0][VAR4->VAR47[VAR7]] = 0;
            }
            for (VAR7 = 0; VAR7 < 4; VAR7++)
            {
                FUN5(VAR4, VAR7, 0, 0, 0, VAR2->VAR51, VAR2->VAR52, VAR2->VAR48[0]);
                FUN17(VAR2, VAR7);
            }
            FUN18(VAR2);
            VAR4->VAR45.VAR57[VAR9] = 0;
            return 0;
        }
    }
    VAR2->VAR13[VAR4->VAR10] = VAR30;
    return -1;
}