static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[VAR4];
    int VAR5, VAR6, VAR7;
    VAR8 *const VAR9 = &VAR2->VAR10[0]->VAR9;
    memset(VAR3, 128, sizeof(VAR3));
    if (VAR2->VAR11 < 2)
    {
        VAR2->VAR11 = FUN2(VAR9, VAR3, 0);
        VAR2->VAR12 = VAR2->VAR13->VAR14 = FUN2(VAR9, VAR3, 0);
        if (VAR2->VAR12 > 1)
        {
            for (VAR5 = 1; VAR5 < 256; VAR5++)
            {
                VAR2->VAR15[VAR5] = FUN2(VAR9, VAR3, 1) + VAR9->VAR16[VAR5];
            }
        }
        VAR2->VAR17 = FUN2(VAR9, VAR3, 0);
        if (VAR2->VAR11 > 0)
            VAR2->VAR13->VAR18 = FUN2(VAR9, VAR3, 0);
        VAR2->VAR19 = FUN3(VAR9, VAR3);
        VAR2->VAR20 = FUN2(VAR9, VAR3, 0);
        VAR2->VAR21 = FUN2(VAR9, VAR3, 0);
        VAR2->VAR22 = FUN3(VAR9, VAR3);
        VAR2->VAR23 = 2 + VAR2->VAR22;
    }
    if (VAR2->VAR17 == 0)
    {
        if (!VAR2->VAR22 && !VAR2->VAR19)
        {
            if (VAR2->VAR13->VAR18 <= 8)
                VAR2->VAR13->VAR24 = VAR25;
            else
                VAR2->VAR13->VAR24 = VAR26;
        }
        else if (VAR2->VAR13->VAR18 <= 8 && !VAR2->VAR22)
        {
            switch (16 * VAR2->VAR20 + VAR2->VAR21)
            {
            case 0x00:
                VAR2->VAR13->VAR24 = VAR27;
                break;
            case 0x01:
                VAR2->VAR13->VAR24 = VAR28;
                break;
            case 0x10:
                VAR2->VAR13->VAR24 = VAR29;
                break;
            case 0x11:
                VAR2->VAR13->VAR24 = VAR30;
                break;
            case 0x20:
                VAR2->VAR13->VAR24 = VAR31;
                break;
            case 0x22:
                VAR2->VAR13->VAR24 = VAR32;
                break;
            default:
                FUN4(VAR2->VAR13, VAR33, "");
                return -1;
            }
        }
        else if (VAR2->VAR13->VAR18 <= 8 && VAR2->VAR22)
        {
            switch (16 * VAR2->VAR20 + VAR2->VAR21)
            {
            case 0x00:
                VAR2->VAR13->VAR24 = VAR34;
                break;
            case 0x11:
                VAR2->VAR13->VAR24 = VAR35;
                break;
            default:
                FUN4(VAR2->VAR13, VAR33, "");
                return -1;
            }
        }
        else if (VAR2->VAR13->VAR18 == 9)
        {
            VAR2->VAR36 = 1;
            switch (16 * VAR2->VAR20 + VAR2->VAR21)
            {
            case 0x00:
                VAR2->VAR13->VAR24 = VAR37;
                break;
            case 0x10:
                VAR2->VAR13->VAR24 = VAR38;
                break;
            case 0x11:
                VAR2->VAR13->VAR24 = VAR39;
                break;
            default:
                FUN4(VAR2->VAR13, VAR33, "");
                return -1;
            }
        }
        else if (VAR2->VAR13->VAR18 == 10)
        {
            VAR2->VAR36 = 1;
            switch (16 * VAR2->VAR20 + VAR2->VAR21)
            {
            case 0x00:
                VAR2->VAR13->VAR24 = VAR40;
                break;
            case 0x10:
                VAR2->VAR13->VAR24 = VAR41;
                break;
            case 0x11:
                VAR2->VAR13->VAR24 = VAR42;
                break;
            default:
                FUN4(VAR2->VAR13, VAR33, "");
                return -1;
            }
        }
        else
        {
            switch (16 * VAR2->VAR20 + VAR2->VAR21)
            {
            case 0x00:
                VAR2->VAR13->VAR24 = VAR43;
                break;
            case 0x10:
                VAR2->VAR13->VAR24 = VAR44;
                break;
            case 0x11:
                VAR2->VAR13->VAR24 = VAR45;
                break;
            default:
                FUN4(VAR2->VAR13, VAR33, "");
                return -1;
            }
        }
    }
    else if (VAR2->VAR17 == 1)
    {
        if (VAR2->VAR20 || VAR2->VAR21)
        {
            FUN4(VAR2->VAR13, VAR33, "");
            return -1;
        }
        if (VAR2->VAR22)
            VAR2->VAR13->VAR24 = VAR46;
        else
            VAR2->VAR13->VAR24 = VAR47;
    }
    else
    {
        FUN4(VAR2->VAR13, VAR33, "");
        return -1;
    }
    if (VAR2->VAR11 < 2)
    {
        VAR7 = FUN5(VAR9, VAR2->VAR48);
        if (VAR7 < 0)
        {
            FUN4(VAR2->VAR13, VAR33, "");
            return -1;
        }
    }
    else
    {
        VAR2->VAR49 = FUN2(VAR9, VAR3, 0);
        if (VAR2->VAR49 > (unsigned)VAR50)
            return -1;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR49; VAR6++)
    {
        VAR1 *VAR51 = VAR2->VAR10[VAR6];
        VAR51->VAR12 = VAR2->VAR12;
        VAR51->VAR36 = VAR2->VAR36;
        if (VAR2->VAR11 >= 2)
        {
            VAR51->VAR52 = FUN2(VAR9, VAR3, 0) * VAR2->VAR53;
            VAR51->VAR54 = FUN2(VAR9, VAR3, 0) * VAR2->VAR55;
            VAR51->VAR56 = (FUN2(VAR9, VAR3, 0) + 1) * VAR2->VAR53 + VAR51->VAR52;
            VAR51->VAR57 = (FUN2(VAR9, VAR3, 0) + 1) * VAR2->VAR55 + VAR51->VAR54;
            VAR51->VAR52 /= VAR2->VAR58;
            VAR51->VAR54 /= VAR2->VAR59;
            VAR51->VAR56 = VAR51->VAR56 / VAR2->VAR58 - VAR51->VAR52;
            VAR51->VAR57 = VAR51->VAR57 / VAR2->VAR59 - VAR51->VAR54;
            if ((unsigned)VAR51->VAR56 > VAR2->VAR53 || (unsigned)VAR51->VAR57 > VAR2->VAR55)
                return -1;
            if ((unsigned)VAR51->VAR52 + (VAR60)VAR51->VAR56 > VAR2->VAR53 || (unsigned)VAR51->VAR54 + (VAR60)VAR51->VAR57 > VAR2->VAR55)
                return -1;
        }
        for (VAR5 = 0; VAR5 < VAR2->VAR23; VAR5++)
        {
            VAR61 *const VAR62 = &VAR51->VAR63[VAR5];
            if (VAR2->VAR11 >= 2)
            {
                int VAR64 = FUN2(VAR9, VAR3, 0);
                if (VAR64 > (unsigned)VAR2->VAR65)
                {
                    FUN4(VAR2->VAR13, VAR33, "");
                    return -1;
                }
                VAR62->VAR66 = VAR64;
                memcpy(VAR62->VAR48, VAR2->VAR67[VAR64], sizeof(VAR62->VAR48));
                VAR7 = VAR2->VAR7[VAR64];
            }
            else
            {
                memcpy(VAR62->VAR48, VAR2->VAR48, sizeof(VAR62->VAR48));
            }
            if (VAR62->VAR7 < VAR7)
            {
                FUN6(&VAR62->VAR3);
                FUN6(&VAR62->VAR68);
            }
            VAR62->VAR7 = VAR7;
        }
    }
    return 0;
}