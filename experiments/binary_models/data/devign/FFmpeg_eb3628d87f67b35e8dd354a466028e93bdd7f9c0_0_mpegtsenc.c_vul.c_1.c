static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint8_t VAR8[VAR9], *VAR10, *VAR11, *VAR12;
    int VAR13, VAR14, VAR15, VAR16 = 0;
    VAR10 = VAR8;
    FUN2(&VAR10, 0xe000 | VAR4->VAR17);
    VAR12 = VAR10;
    VAR10 += 2;
    VAR13 = 0xf000 | (VAR10 - VAR12 - 2);
    VAR12[0] = VAR13 >> 8;
    VAR12[1] = VAR13;
    for (VAR15 = 0; VAR15 < VAR2->VAR18; VAR15++)
    {
        VAR19 *VAR20 = VAR2->VAR21[VAR15];
        VAR22 *VAR23 = VAR20->VAR7;
        VAR24 *VAR25 = FUN3(VAR20->VAR26, "", NULL, 0);
        if (VAR10 - VAR8 > VAR9 - 32)
        {
            VAR16 = 1;
            break;
        }
        switch (VAR20->VAR27->VAR28)
        {
        case VAR29:
        case VAR30:
            VAR14 = VAR31;
            break;
        case VAR32:
            VAR14 = VAR33;
            break;
        case VAR34:
            VAR14 = VAR35;
            break;
        case VAR36:
            VAR14 = VAR37;
            break;
        case VAR38:
            VAR14 = VAR39;
            break;
        case VAR40:
            VAR14 = VAR41;
            break;
        case VAR42:
            VAR14 = VAR43;
            break;
        case VAR44:
        case VAR45:
            VAR14 = VAR46;
            break;
        case VAR47:
            VAR14 = (VAR6->VAR48 & VAR49) ? VAR50 : VAR51;
            break;
        case VAR52:
            VAR14 = VAR50;
            break;
        case VAR53:
            VAR14 = VAR54;
            break;
        case VAR55:
            VAR14 = VAR56;
            break;
        case VAR57:
            VAR14 = VAR58;
            break;
        case VAR59:
            VAR14 = VAR60;
            break;
        default:
            VAR14 = VAR60;
            break;
        }
        *VAR10++ = VAR14;
        FUN2(&VAR10, 0xe000 | VAR23->VAR61);
        VAR11 = VAR10;
        VAR10 += 2;
        switch (VAR20->VAR27->VAR62)
        {
        case VAR63:
            if (VAR20->VAR27->VAR28 == VAR64)
            {
                *VAR10++ = 0x7a;
                *VAR10++ = 1;
                *VAR10++ = 0;
            }
            if (VAR20->VAR27->VAR28 == VAR65)
            {
                *VAR10++ = 0x05;
                *VAR10++ = 4;
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
            }
            if (VAR20->VAR27->VAR28 == VAR59)
            {
                if (VAR10 - VAR8 > VAR9 - 6 - 4)
                {
                    VAR16 = 1;
                    break;
                }
                *VAR10++ = 0x05;
                *VAR10++ = 4;
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = 0x7f;
                *VAR10++ = 2;
                *VAR10++ = 0x80;
                if (VAR20->VAR27->VAR66 && VAR20->VAR27->VAR67 >= 19)
                {
                    if (VAR20->VAR27->VAR66[18] == 0 && VAR20->VAR27->VAR68 <= 2)
                    {
                        *VAR10++ = VAR20->VAR27->VAR68;
                    }
                    else if (VAR20->VAR27->VAR66[18] == 1 && VAR20->VAR27->VAR68 <= 8 && VAR20->VAR27->VAR67 >= 21 + VAR20->VAR27->VAR68)
                    {
                        static const uint8_t VAR69[9] = {1, 0, 1, 1, 2, 2, 2, 3, 3};
                        static const uint8_t VAR70[8][8] = {
                            {0},
                            {0, 1},
                            {0, 2, 1},
                            {0, 1, 2, 3},
                            {0, 4, 1, 2, 3},
                            {0, 4, 1, 2, 3, 5},
                            {0, 4, 1, 2, 3, 5, 6},
                            {0, 6, 1, 2, 3, 4, 5, 7},
                        };
                        static const uint8_t VAR71[8][8] = {
                            {0},
                            {0, 1},
                            {0, 1, 2},
                            {0, 1, 2, 3},
                            {0, 1, 2, 3, 4},
                            {0, 1, 2, 3, 4, 5},
                            {0, 1, 2, 3, 4, 5, 6},
                            {0, 1, 2, 3, 4, 5, 6, 7},
                        };
                        if (VAR20->VAR27->VAR66[19] == VAR20->VAR27->VAR68 - VAR69[VAR20->VAR27->VAR68] && VAR20->VAR27->VAR66[20] == VAR69[VAR20->VAR27->VAR68] && memcmp(&VAR20->VAR27->VAR66[21], VAR70[VAR20->VAR27->VAR68], VAR20->VAR27->VAR68) == 0)
                        {
                            *VAR10++ = VAR20->VAR27->VAR68;
                        }
                        else if (VAR20->VAR27->VAR68 >= 2 && VAR20->VAR27->VAR66[19] == VAR20->VAR27->VAR68 && VAR20->VAR27->VAR66[20] == 0 && memcmp(&VAR20->VAR27->VAR66[21], VAR71[VAR20->VAR27->VAR68], VAR20->VAR27->VAR68) == 0)
                        {
                            *VAR10++ = VAR20->VAR27->VAR68 | 0x80;
                        }
                        else
                        {
                            FUN4(VAR2, VAR72, "");
                            *VAR10++ = 0xff;
                        }
                    }
                    else
                    {
                        FUN4(VAR2, VAR72, "", VAR20->VAR27->VAR66[18]);
                        *VAR10++ = 0xff;
                    }
                }
                else if (VAR20->VAR27->VAR68 <= 2)
                {
                    *VAR10++ = VAR20->VAR27->VAR68;
                }
                else
                {
                    FUN4(VAR2, VAR72, "");
                    *VAR10++ = 0xff;
                }
            }
            if (VAR25)
            {
                char *VAR73;
                char *VAR74 = VAR25->VAR75;
                VAR76 *VAR77;
                *VAR10++ = 0x0a;
                VAR77 = VAR10++;
                *VAR77 = 0;
                for (VAR73 = VAR25->VAR75; VAR74 && *VAR77 < 255 / 4 * 4; VAR73 = VAR74 + 1)
                {
                    if (VAR10 - VAR8 > VAR9 - 4)
                    {
                        VAR16 = 1;
                        break;
                    }
                    VAR74 = strchr(VAR73, '');
                    if (strlen(VAR73) != 3 && (!VAR74 || VAR74 != VAR73 + 3))
                        continue;
                    *VAR10++ = *VAR73++;
                    *VAR10++ = *VAR73++;
                    *VAR10++ = *VAR73++;
                    if (VAR20->VAR78 & VAR79)
                        *VAR10++ = 0x01;
                    else if (VAR20->VAR78 & VAR80)
                        *VAR10++ = 0x02;
                    else if (VAR20->VAR78 & VAR81)
                        *VAR10++ = 0x03;
                    else
                        *VAR10++ = 0;
                    *VAR77 += 4;
                }
                if (*VAR77 == 0)
                    VAR10 -= 2;
            }
            break;
        case VAR82:
        {
            const char VAR83[] = "";
            const char *VAR84 = VAR25 && strlen(VAR25->VAR75) >= 3 ? VAR25->VAR75 : VAR83;
            if (VAR20->VAR27->VAR28 == VAR85)
            {
                VAR76 *VAR77;
                int VAR86 = 0;
                *VAR10++ = 0x59;
                VAR77 = VAR10++;
                while (strlen(VAR84) >= 3)
                {
                    if (sizeof(VAR8) - (VAR10 - VAR8) < 8)
                    {
                        VAR16 = 1;
                        break;
                    }
                    *VAR10++ = *VAR84++;
                    *VAR10++ = *VAR84++;
                    *VAR10++ = *VAR84++;
                    if (*VAR84 != '')
                        VAR84++;
                    if (VAR20->VAR27->VAR67 - VAR86 >= 5)
                    {
                        *VAR10++ = VAR20->VAR27->VAR66[VAR86 + 4];
                        memcpy(VAR10, VAR20->VAR27->VAR66 + VAR86, 4);
                        VAR86 += 5;
                        VAR10 += 4;
                    }
                    else
                    {
                        *VAR10++ = (VAR20->VAR78 & VAR80) ? 0x20 : 0x10;
                        if ((VAR20->VAR27->VAR67 == 4) && (VAR86 == 0))
                        {
                            memcpy(VAR10, VAR20->VAR27->VAR66, 4);
                            VAR86 += 4;
                            VAR10 += 4;
                        }
                        else
                        {
                            FUN2(&VAR10, 1);
                            FUN2(&VAR10, 1);
                        }
                    }
                }
                *VAR77 = VAR10 - VAR77 - 1;
            }
            else if (VAR20->VAR27->VAR28 == VAR87)
            {
                VAR76 *VAR77 = NULL;
                int VAR86 = 0;
                *VAR10++ = 0x56;
                VAR77 = VAR10++;
                while (strlen(VAR84) >= 3 && VAR10 - VAR8 < sizeof(VAR8) - 6)
                {
                    *VAR10++ = *VAR84++;
                    *VAR10++ = *VAR84++;
                    *VAR10++ = *VAR84++;
                    if (*VAR84 != '')
                        VAR84++;
                    if (VAR20->VAR27->VAR67 - 1 > VAR86)
                    {
                        memcpy(VAR10, VAR20->VAR27->VAR66 + VAR86, 2);
                        VAR86 += 2;
                        VAR10 += 2;
                    }
                    else
                    {
                        *VAR10++ = 0x08;
                        *VAR10++ = 0x00;
                    }
                }
                *VAR77 = VAR10 - VAR77 - 1;
            }
        }
        break;
        case VAR88:
            if (VAR14 == VAR41)
            {
                *VAR10++ = 0x05;
                *VAR10++ = 4;
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
            }
            else if (VAR14 == VAR43)
            {
                *VAR10++ = 0x05;
                *VAR10++ = 4;
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
            }
            break;
        case VAR89:
            if (VAR20->VAR27->VAR28 == VAR90)
            {
                *VAR10++ = 0x05;
                *VAR10++ = 4;
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
                *VAR10++ = '';
            }
            break;
        }
        VAR13 = 0xf000 | (VAR10 - VAR11 - 2);
        VAR11[0] = VAR13 >> 8;
        VAR11[1] = VAR13;
    }
    if (VAR16)
        FUN4(VAR2, VAR72, ""
                                ""
                                "",
               VAR15);
    FUN5(&VAR4->VAR91, VAR92, VAR4->VAR93, VAR6->VAR94, 0, 0, VAR8, VAR10 - VAR8);
    return 0;
}