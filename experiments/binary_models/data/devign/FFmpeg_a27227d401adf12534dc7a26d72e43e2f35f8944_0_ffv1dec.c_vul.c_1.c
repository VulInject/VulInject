static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[VAR4];
    int VAR5, VAR6, VAR7 = -1;
    VAR8 *const VAR9 = &VAR2->VAR10[0]->VAR9;
    memset(VAR3, 128, sizeof(VAR3));
    if (VAR2->VAR11 < 2)
    {
        int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
        unsigned VAR18 = FUN2(VAR9, VAR3, 0);
        if (VAR18 >= 2)
        {
            FUN3(VAR2->VAR19, VAR20, "", VAR18);
            return VAR21;
        }
        VAR2->VAR11 = VAR18;
        VAR2->VAR22 = VAR2->VAR19->VAR23 = FUN2(VAR9, VAR3, 0);
        if (VAR2->VAR22 > 1)
        {
            for (VAR5 = 1; VAR5 < 256; VAR5++)
                VAR2->VAR24[VAR5] = FUN2(VAR9, VAR3, 1) + VAR9->VAR25[VAR5];
        }
        VAR16 = FUN2(VAR9, VAR3, 0);
        VAR17 = VAR2->VAR11 > 0 ? FUN2(VAR9, VAR3, 0) : VAR2->VAR19->VAR17;
        VAR12 = FUN4(VAR9, VAR3);
        VAR13 = FUN2(VAR9, VAR3, 0);
        VAR14 = FUN2(VAR9, VAR3, 0);
        VAR15 = FUN4(VAR9, VAR3);
        if (VAR2->VAR26)
        {
            if (VAR16 != VAR2->VAR16 || VAR17 != VAR2->VAR19->VAR17 || VAR12 != VAR2->VAR12 || VAR13 != VAR2->VAR13 || VAR14 != VAR2->VAR14 || VAR15 != VAR2->VAR15)
            {
                FUN3(VAR2->VAR19, VAR20, "");
                return VAR21;
            }
        }
        VAR2->VAR16 = VAR16;
        VAR2->VAR19->VAR17 = VAR17;
        VAR2->VAR12 = VAR12;
        VAR2->VAR13 = VAR13;
        VAR2->VAR14 = VAR14;
        VAR2->VAR15 = VAR15;
        VAR2->VAR26 = 2 + VAR2->VAR15;
    }
    if (VAR2->VAR16 == 0)
    {
        if (!VAR2->VAR15 && !VAR2->VAR12)
        {
            if (VAR2->VAR19->VAR17 <= 8)
                VAR2->VAR19->VAR27 = VAR28;
            else
                VAR2->VAR19->VAR27 = VAR29;
        }
        else if (VAR2->VAR19->VAR17 <= 8 && !VAR2->VAR15)
        {
            switch (16 * VAR2->VAR13 + VAR2->VAR14)
            {
            case 0x00:
                VAR2->VAR19->VAR27 = VAR30;
                break;
            case 0x01:
                VAR2->VAR19->VAR27 = VAR31;
                break;
            case 0x10:
                VAR2->VAR19->VAR27 = VAR32;
                break;
            case 0x11:
                VAR2->VAR19->VAR27 = VAR33;
                break;
            case 0x20:
                VAR2->VAR19->VAR27 = VAR34;
                break;
            case 0x22:
                VAR2->VAR19->VAR27 = VAR35;
                break;
            default:
                FUN3(VAR2->VAR19, VAR20, "");
                return FUN5(VAR36);
            }
        }
        else if (VAR2->VAR19->VAR17 <= 8 && VAR2->VAR15)
        {
            switch (16 * VAR2->VAR13 + VAR2->VAR14)
            {
            case 0x00:
                VAR2->VAR19->VAR27 = VAR37;
                break;
            case 0x10:
                VAR2->VAR19->VAR27 = VAR38;
                break;
            case 0x11:
                VAR2->VAR19->VAR27 = VAR39;
                break;
            default:
                FUN3(VAR2->VAR19, VAR20, "");
                return FUN5(VAR36);
            }
        }
        else if (VAR2->VAR19->VAR17 == 9)
        {
            VAR2->VAR40 = 1;
            switch (16 * VAR2->VAR13 + VAR2->VAR14)
            {
            case 0x00:
                VAR2->VAR19->VAR27 = VAR41;
                break;
            case 0x10:
                VAR2->VAR19->VAR27 = VAR42;
                break;
            case 0x11:
                VAR2->VAR19->VAR27 = VAR43;
                break;
            default:
                FUN3(VAR2->VAR19, VAR20, "");
                return FUN5(VAR36);
            }
        }
        else if (VAR2->VAR19->VAR17 == 10)
        {
            VAR2->VAR40 = 1;
            switch (16 * VAR2->VAR13 + VAR2->VAR14)
            {
            case 0x00:
                VAR2->VAR19->VAR27 = VAR44;
                break;
            case 0x10:
                VAR2->VAR19->VAR27 = VAR45;
                break;
            case 0x11:
                VAR2->VAR19->VAR27 = VAR46;
                break;
            default:
                FUN3(VAR2->VAR19, VAR20, "");
                return FUN5(VAR36);
            }
        }
        else
        {
            switch (16 * VAR2->VAR13 + VAR2->VAR14)
            {
            case 0x00:
                VAR2->VAR19->VAR27 = VAR47;
                break;
            case 0x10:
                VAR2->VAR19->VAR27 = VAR48;
                break;
            case 0x11:
                VAR2->VAR19->VAR27 = VAR49;
                break;
            default:
                FUN3(VAR2->VAR19, VAR20, "");
                return FUN5(VAR36);
            }
        }
    }
    else if (VAR2->VAR16 == 1)
    {
        if (VAR2->VAR13 || VAR2->VAR14)
        {
            FUN3(VAR2->VAR19, VAR20, "");
            return FUN5(VAR36);
        }
        if (VAR2->VAR19->VAR17 == 9)
            VAR2->VAR19->VAR27 = VAR50;
        else if (VAR2->VAR19->VAR17 == 10)
            VAR2->VAR19->VAR27 = VAR51;
        else if (VAR2->VAR19->VAR17 == 12)
            VAR2->VAR19->VAR27 = VAR52;
        else if (VAR2->VAR19->VAR17 == 14)
            VAR2->VAR19->VAR27 = VAR53;
        else if (VAR2->VAR15)
            VAR2->VAR19->VAR27 = VAR54;
        else
            VAR2->VAR19->VAR27 = VAR55;
    }
    else
    {
        FUN3(VAR2->VAR19, VAR20, "");
        return FUN5(VAR36);
    }
    FUN6(VAR2->VAR19, "", VAR2->VAR13, VAR2->VAR14, VAR2->VAR19->VAR27);
    if (VAR2->VAR11 < 2)
    {
        VAR7 = FUN7(VAR9, VAR2->VAR56);
        if (VAR7 < 0)
        {
            FUN3(VAR2->VAR19, VAR20, "");
            return VAR21;
        }
    }
    else if (VAR2->VAR11 < 3)
    {
        VAR2->VAR57 = FUN2(VAR9, VAR3, 0);
    }
    else
    {
        const VAR58 *VAR59 = VAR9->VAR60;
        for (VAR2->VAR57 = 0; VAR2->VAR57 < VAR61 && 3 < VAR59 - VAR9->VAR62; VAR2->VAR57++)
        {
            int VAR63 = 3 + 5 * !!VAR2->VAR64;
            int VAR65 = FUN8(VAR59 - VAR63);
            if (VAR65 + VAR63 > VAR59 - VAR9->VAR62)
                break;
            VAR59 -= VAR65 + VAR63;
        }
    }
    if (VAR2->VAR57 > (unsigned)VAR61 || VAR2->VAR57 <= 0)
    {
        FUN3(VAR2->VAR19, VAR20, "", VAR2->VAR57);
        return VAR21;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR57; VAR6++)
    {
        VAR1 *VAR66 = VAR2->VAR10[VAR6];
        VAR66->VAR22 = VAR2->VAR22;
        VAR66->VAR40 = VAR2->VAR40;
        VAR66->VAR67 = 0;
        if (VAR2->VAR11 == 2)
        {
            VAR66->VAR68 = FUN2(VAR9, VAR3, 0) * VAR2->VAR69;
            VAR66->VAR70 = FUN2(VAR9, VAR3, 0) * VAR2->VAR71;
            VAR66->VAR72 = (FUN2(VAR9, VAR3, 0) + 1) * VAR2->VAR69 + VAR66->VAR68;
            VAR66->VAR73 = (FUN2(VAR9, VAR3, 0) + 1) * VAR2->VAR71 + VAR66->VAR70;
            VAR66->VAR68 /= VAR2->VAR74;
            VAR66->VAR70 /= VAR2->VAR75;
            VAR66->VAR72 = VAR66->VAR72 / VAR2->VAR74 - VAR66->VAR68;
            VAR66->VAR73 = VAR66->VAR73 / VAR2->VAR75 - VAR66->VAR70;
            if ((unsigned)VAR66->VAR72 > VAR2->VAR69 || (unsigned)VAR66->VAR73 > VAR2->VAR71)
                return VAR21;
            if ((unsigned)VAR66->VAR68 + (VAR76)VAR66->VAR72 > VAR2->VAR69 || (unsigned)VAR66->VAR70 + (VAR76)VAR66->VAR73 > VAR2->VAR71)
                return VAR21;
        }
        for (VAR5 = 0; VAR5 < VAR2->VAR26; VAR5++)
        {
            VAR77 *const VAR59 = &VAR66->VAR78[VAR5];
            if (VAR2->VAR11 == 2)
            {
                int VAR79 = FUN2(VAR9, VAR3, 0);
                if (VAR79 > (unsigned)VAR2->VAR80)
                {
                    FUN3(VAR2->VAR19, VAR20, "");
                    return VAR21;
                }
                VAR59->VAR81 = VAR79;
                memcpy(VAR59->VAR56, VAR2->VAR82[VAR79], sizeof(VAR59->VAR56));
                VAR7 = VAR2->VAR7[VAR79];
            }
            else
            {
                memcpy(VAR59->VAR56, VAR2->VAR56, sizeof(VAR59->VAR56));
            }
            if (VAR2->VAR11 <= 2)
            {
                FUN9(VAR7 >= 0);
                if (VAR59->VAR7 < VAR7)
                {
                    FUN10(&VAR59->VAR3);
                    FUN10(&VAR59->VAR83);
                }
                VAR59->VAR7 = VAR7;
            }
        }
    }
    return 0;
}