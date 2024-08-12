int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;
    int VAR9[VAR10];
    int VAR11[VAR10];
    VAR2->VAR12 = 0;
    VAR2->VAR13 = VAR2->VAR14 = 0;
    VAR3 = FUN2(&VAR2->VAR15, 16);
    VAR2->VAR16 = FUN2(&VAR2->VAR15, 8);
    if (VAR2->VAR17)
        VAR2->VAR16 = 9;
    if (VAR2->VAR16 == 9 && !VAR2->VAR17)
        VAR2->VAR18 = 1;
    if (VAR2->VAR16 != 8 && !VAR2->VAR19)
    {
        FUN3(VAR2->VAR20, VAR21, "");
        return -1;
    }
    if (VAR2->VAR19 && VAR2->VAR20->VAR22)
    {
        FUN3(VAR2->VAR20, VAR21, "");
        return -1;
    }
    VAR7 = FUN2(&VAR2->VAR15, 16);
    VAR6 = FUN2(&VAR2->VAR15, 16);
    if (VAR2->VAR23 && VAR2->VAR6 == VAR6 && VAR2->VAR7 == VAR7 + 1)
        VAR7 = VAR2->VAR7;
    FUN3(VAR2->VAR20, VAR24, "", VAR6, VAR7);
    if (FUN4(VAR6, VAR7, 0, VAR2->VAR20))
        return VAR25;
    VAR4 = FUN2(&VAR2->VAR15, 8);
    if (VAR4 <= 0 || VAR4 > VAR10)
        return -1;
    if (VAR2->VAR23 && (VAR2->VAR26 == !VAR2->VAR27))
    {
        if (VAR4 != VAR2->VAR4)
        {
            FUN3(VAR2->VAR20, VAR21, "");
            return VAR25;
        }
    }
    if (VAR2->VAR28 && !(VAR2->VAR16 <= 8 || VAR4 == 1))
    {
        FUN5(VAR2->VAR20, ""
                                         "",
                               0);
        return VAR29;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR30 = 1;
    VAR2->VAR31 = 1;
    memset(VAR9, 0, sizeof(VAR9));
    memset(VAR11, 0, sizeof(VAR11));
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR2->VAR32[VAR5] = FUN2(&VAR2->VAR15, 8) - 1;
        VAR9[VAR5] = FUN2(&VAR2->VAR15, 4);
        VAR11[VAR5] = FUN2(&VAR2->VAR15, 4);
        if (VAR9[VAR5] > VAR2->VAR30)
            VAR2->VAR30 = VAR9[VAR5];
        if (VAR11[VAR5] > VAR2->VAR31)
            VAR2->VAR31 = VAR11[VAR5];
        if (!VAR9[VAR5] || !VAR11[VAR5])
        {
            FUN3(VAR2->VAR20, VAR21, "");
            return -1;
        }
        VAR2->VAR33[VAR5] = FUN2(&VAR2->VAR15, 8);
        if (VAR2->VAR33[VAR5] >= 4)
            return VAR25;
        FUN3(VAR2->VAR20, VAR24, "", VAR5, VAR9[VAR5], VAR11[VAR5], VAR2->VAR32[VAR5], VAR2->VAR33[VAR5]);
    }
    if (VAR2->VAR28 && (VAR2->VAR30 > 1 || VAR2->VAR31 > 1))
    {
        FUN5(VAR2->VAR20, "", 0);
        return VAR29;
    }
    if (VAR2->VAR31 == 1 && VAR2->VAR30 == 1 && VAR2->VAR19 == 1 && VAR4 == 3)
        VAR2->VAR34 = 1;
    if (VAR6 != VAR2->VAR6 || VAR7 != VAR2->VAR7 || memcmp(VAR2->VAR9, VAR9, sizeof(VAR9[0]) * VAR4) || memcmp(VAR2->VAR11, VAR11, sizeof(VAR11[0]) * VAR4))
    {
        FUN6(&VAR2->VAR35);
        VAR2->VAR6 = VAR6;
        VAR2->VAR7 = VAR7;
        memcpy(VAR2->VAR9, VAR9, sizeof(VAR9));
        memcpy(VAR2->VAR11, VAR11, sizeof(VAR11));
        VAR2->VAR23 = 0;
        VAR2->VAR36 = 0;
        if (VAR2->VAR37 && VAR2->VAR38 != 0 && VAR2->VAR7 < ((VAR2->VAR38 * 3) / 4))
        {
            VAR2->VAR23 = 1;
            VAR2->VAR26 = VAR2->VAR27;
            VAR2->VAR39->VAR40 = 1;
            VAR2->VAR39->VAR41 = !VAR2->VAR27;
            VAR7 *= 2;
        }
        FUN7(VAR2->VAR20, VAR6, VAR7);
        VAR2->VAR35 = FUN8((VAR2->VAR6 + 15) / 16);
        VAR2->VAR37 = 0;
    }
    if (VAR2->VAR23 && (VAR2->VAR26 == !VAR2->VAR27))
    {
        if (VAR2->VAR42)
        {
            FUN9(VAR2->VAR20, "");
            return VAR25;
        }
    }
    else
    {
        VAR8 = (VAR2->VAR9[0] << 28) | (VAR2->VAR11[0] << 24) | (VAR2->VAR9[1] << 20) | (VAR2->VAR11[1] << 16) | (VAR2->VAR9[2] << 12) | (VAR2->VAR11[2] << 8) | (VAR2->VAR9[3] << 4) | VAR2->VAR11[3];
        FUN3(VAR2->VAR20, VAR24, "", VAR8);
        if (!(VAR8 & 0xD0D0D0D0))
            VAR8 -= (VAR8 & 0xF0F0F0F0) >> 1;
        if (!(VAR8 & 0x0D0D0D0D))
            VAR8 -= (VAR8 & 0x0F0F0F0F) >> 1;
        switch (VAR8)
        {
        case 0x11111100:
            if (VAR2->VAR34)
                VAR2->VAR20->VAR43 = VAR44;
            else
            {
                if (VAR2->VAR32[0] == '' && VAR2->VAR32[1] == '' && VAR2->VAR32[2] == '')
                {
                    VAR2->VAR20->VAR43 = VAR45;
                }
                else
                {
                    VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR47 : VAR48;
                    VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
                }
            }
            FUN10(VAR2->VAR4 == 3);
            break;
        case 0x12121100:
        case 0x22122100:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR47 : VAR48;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            VAR2->VAR14 = 2;
            VAR2->VAR13 = (VAR8 == 0x22122100);
            VAR2->VAR52 = VAR2->VAR7;
            break;
        case 0x21211100:
        case 0x22211200:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR47 : VAR48;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            VAR2->VAR14 = (VAR8 == 0x22211200);
            VAR2->VAR13 = 2;
            VAR2->VAR52 = VAR2->VAR7;
            break;
        case 0x22221100:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR47 : VAR48;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            VAR2->VAR14 = 2;
            VAR2->VAR13 = 2;
            VAR2->VAR52 = VAR2->VAR7 / 2;
            break;
        case 0x11000000:
            if (VAR2->VAR16 <= 8)
                VAR2->VAR20->VAR43 = VAR53;
            else
                VAR2->VAR20->VAR43 = VAR54;
            break;
        case 0x12111100:
        case 0x22211100:
        case 0x22112100:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR55 : VAR56;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            VAR2->VAR13 = (VAR8 == 0x22211100) * 2 + (VAR8 == 0x22112100);
            VAR2->VAR52 = VAR2->VAR7 / 2;
            break;
        case 0x21111100:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR57 : VAR58;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            break;
        case 0x22121100:
        case 0x22111200:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR57 : VAR58;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            VAR2->VAR14 = (VAR8 == 0x22121100) + 1;
            break;
        case 0x22111100:
            VAR2->VAR20->VAR43 = VAR2->VAR46 ? VAR59 : VAR60;
            VAR2->VAR20->VAR49 = VAR2->VAR46 ? VAR50 : VAR51;
            break;
        default:
            FUN3(VAR2->VAR20, VAR21, "", VAR8);
            return VAR29;
        }
        if ((VAR2->VAR13 || VAR2->VAR14) && VAR2->VAR20->VAR22)
        {
            FUN3(VAR2->VAR20, VAR21, "");
            return VAR29;
        }
        if (VAR2->VAR28)
        {
            VAR2->VAR13 = VAR2->VAR14 = 0;
            if (VAR2->VAR4 > 1)
                VAR2->VAR20->VAR43 = VAR61;
            else if (VAR2->VAR16 <= 8)
                VAR2->VAR20->VAR43 = VAR53;
            else
                VAR2->VAR20->VAR43 = VAR54;
        }
        if (VAR2->VAR39->VAR62[0])
            VAR2->VAR20->FUN11(VAR2->VAR20, VAR2->VAR39);
        if (VAR2->VAR20->FUN12(VAR2->VAR20, VAR2->VAR39) < 0)
        {
            FUN3(VAR2->VAR20, VAR21, "");
            return -1;
        }
        VAR2->VAR39->VAR63 = VAR64;
        VAR2->VAR39->VAR65 = 1;
        VAR2->VAR36 = 1;
        for (VAR5 = 0; VAR5 < 3; VAR5++)
            VAR2->VAR66[VAR5] = VAR2->VAR39->VAR66[VAR5] << VAR2->VAR23;
        FUN13(VAR2->VAR20, "", VAR2->VAR6, VAR2->VAR7, VAR2->VAR66[0], VAR2->VAR66[1], VAR2->VAR23, VAR2->VAR20->VAR7);
        if (VAR3 != (8 + (3 * VAR4)))
            FUN3(VAR2->VAR20, VAR24, "", VAR3);
    }
    if (VAR2->VAR42)
    {
        int VAR67 = (VAR6 + VAR2->VAR30 * 8 - 1) / (VAR2->VAR30 * 8);
        int VAR68 = (VAR7 + VAR2->VAR31 * 8 - 1) / (VAR2->VAR31 * 8);
        for (VAR5 = 0; VAR5 < VAR2->VAR4; VAR5++)
        {
            int VAR69 = VAR67 * VAR68 * VAR2->VAR9[VAR5] * VAR2->VAR11[VAR5];
            FUN6(&VAR2->VAR70[VAR5]);
            FUN6(&VAR2->VAR71[VAR5]);
            VAR2->VAR70[VAR5] = FUN14(VAR69 * sizeof(**VAR2->VAR70));
            VAR2->VAR71[VAR5] = FUN8(VAR69 * sizeof(**VAR2->VAR71));
            VAR2->VAR72[VAR5] = VAR67 * VAR2->VAR9[VAR5];
        }
        memset(VAR2->VAR73, 0, sizeof(VAR2->VAR73));
    }
    return 0;
}