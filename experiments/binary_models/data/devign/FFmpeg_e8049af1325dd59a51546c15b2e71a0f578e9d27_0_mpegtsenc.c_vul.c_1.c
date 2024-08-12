static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint8_t VAR8[VAR9], *VAR10, *VAR11, *VAR12;
    int VAR13, VAR14, VAR15;
    VAR10 = VAR8;
    FUN2(&VAR10, 0xe000 | VAR4->VAR16);
    VAR12 = VAR10;
    VAR10 += 2;
    VAR13 = 0xf000 | (VAR10 - VAR12 - 2);
    VAR12[0] = VAR13 >> 8;
    VAR12[1] = VAR13;
    for (VAR15 = 0; VAR15 < VAR2->VAR17; VAR15++)
    {
        VAR18 *VAR19 = VAR2->VAR20[VAR15];
        VAR21 *VAR22 = VAR19->VAR7;
        VAR23 *VAR24 = FUN3(VAR19->VAR25, "", NULL, 0);
        switch (VAR19->VAR26->VAR27)
        {
        case VAR28:
        case VAR29:
            VAR14 = VAR30;
            break;
        case VAR31:
            VAR14 = VAR32;
            break;
        case VAR33:
            VAR14 = VAR34;
            break;
        case VAR35:
            VAR14 = VAR36;
            break;
        case VAR37:
            VAR14 = VAR38;
            break;
        case VAR39:
            VAR14 = VAR40;
            break;
        case VAR41:
        case VAR42:
            VAR14 = VAR43;
            break;
        case VAR44:
            VAR14 = (VAR6->VAR45 & VAR46) ? VAR47 : VAR48;
            break;
        case VAR49:
            VAR14 = VAR47;
            break;
        case VAR50:
            VAR14 = VAR51;
            break;
        default:
            VAR14 = VAR52;
            break;
        }
        *VAR10++ = VAR14;
        FUN2(&VAR10, 0xe000 | VAR22->VAR53);
        VAR11 = VAR10;
        VAR10 += 2;
        switch (VAR19->VAR26->VAR54)
        {
        case VAR55:
            if (VAR24)
            {
                char *VAR56;
                char *VAR57 = VAR24->VAR58;
                VAR59 *VAR60;
                *VAR10++ = 0x0a;
                VAR60 = VAR10++;
                *VAR60 = 0;
                for (VAR56 = VAR24->VAR58; VAR57 && *VAR60 < 255 / 4 * 4; VAR56 = VAR57 + 1)
                {
                    VAR57 = strchr(VAR56, '');
                    if (strlen(VAR56) != 3 && (!VAR57 || VAR57 != VAR56 + 3))
                        continue;
                    *VAR10++ = *VAR56++;
                    *VAR10++ = *VAR56++;
                    *VAR10++ = *VAR56++;
                    if (VAR19->VAR61 & VAR62)
                        *VAR10++ = 0x01;
                    else if (VAR19->VAR61 & VAR63)
                        *VAR10++ = 0x02;
                    else if (VAR19->VAR61 & VAR64)
                        *VAR10++ = 0x03;
                    else
                        *VAR10++ = 0;
                    *VAR60 += 4;
                }
                if (*VAR60 == 0)
                    VAR10 -= 2;
            }
            break;
        case VAR65:
        {
            const char *VAR66;
            VAR66 = VAR24 && strlen(VAR24->VAR58) == 3 ? VAR24->VAR58 : "";
            *VAR10++ = 0x59;
            *VAR10++ = 8;
            *VAR10++ = VAR66[0];
            *VAR10++ = VAR66[1];
            *VAR10++ = VAR66[2];
            *VAR10++ = 0x10;
            if (VAR19->VAR26->VAR67 == 4)
            {
                memcpy(VAR10, VAR19->VAR26->VAR68, 4);
                VAR10 += 4;
            }
            else
            {
                FUN2(&VAR10, 1);
                FUN2(&VAR10, 1);
            }
        }
        break;
        case VAR69:
            if (VAR14 == VAR40)
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
    FUN4(&VAR4->VAR70, VAR71, VAR4->VAR72, 0, 0, 0, VAR8, VAR10 - VAR8);
}