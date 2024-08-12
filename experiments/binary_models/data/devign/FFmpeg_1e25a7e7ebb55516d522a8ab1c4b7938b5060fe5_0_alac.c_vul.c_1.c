static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    int32_t VAR12;
    if (!VAR6 || !VAR7)
        return VAR7;
    if (!VAR9->VAR13)
    {
        if (VAR9->VAR2->VAR14 != VAR15)
        {
            FUN2(VAR2, VAR16, "", VAR15);
            return VAR7;
        }
        FUN3(VAR9);
        VAR9->VAR13 = 1;
    }
    VAR12 = VAR9->VAR17;
    FUN4(&VAR9->VAR18, VAR6, VAR7 * 8);
    VAR11 = FUN5(&VAR9->VAR18, 3);
    *VAR4 = VAR12 * VAR9->VAR19;
    switch (VAR11)
    {
    case 0:
    {
        int VAR20;
        int VAR21;
        int VAR22;
        int VAR23;
        int VAR24;
        FUN5(&VAR9->VAR18, 4);
        FUN5(&VAR9->VAR18, 12);
        VAR20 = FUN5(&VAR9->VAR18, 1);
        VAR23 = FUN5(&VAR9->VAR18, 2);
        VAR21 = FUN5(&VAR9->VAR18, 1);
        if (VAR20)
        {
            VAR12 = FUN5(&VAR9->VAR18, 32);
            *VAR4 = VAR12 * VAR9->VAR19;
        }
        VAR22 = VAR9->VAR25 - (VAR23 * 8);
        if (!VAR21)
        {
            int16_t VAR26[32];
            int VAR27;
            int VAR28;
            int VAR29;
            int VAR30;
            FUN5(&VAR9->VAR18, 8);
            FUN5(&VAR9->VAR18, 8);
            VAR28 = FUN5(&VAR9->VAR18, 4);
            VAR29 = FUN5(&VAR9->VAR18, 4);
            VAR24 = FUN5(&VAR9->VAR18, 3);
            VAR27 = FUN5(&VAR9->VAR18, 5);
            for (VAR30 = 0; VAR30 < VAR27; VAR30++)
            {
                VAR26[VAR30] = (VAR31)FUN5(&VAR9->VAR18, 16);
            }
            if (VAR23)
            {
                FUN2(VAR2, VAR16, "");
            }
            FUN6(VAR9, VAR9->VAR32, VAR12, VAR22, VAR9->VAR33, VAR9->VAR34, VAR24 * VAR9->VAR35 / 4, (1 << VAR9->VAR34) - 1);
            if (VAR28 == 0)
            {
                FUN7(VAR9->VAR32, VAR9->VAR36, VAR12, VAR22, VAR26, VAR27, VAR29);
            }
            else
            {
                FUN2(VAR2, VAR16, "", VAR28);
            }
        }
        else
        {
            if (VAR22 <= 16)
            {
                int VAR30;
                for (VAR30 = 0; VAR30 < VAR12; VAR30++)
                {
                    int32_t VAR37 = FUN5(&VAR9->VAR18, VAR22);
                    VAR37 = FUN8(VAR37, VAR22);
                    VAR9->VAR36[VAR30] = VAR37;
                }
            }
            else
            {
                int VAR30;
                for (VAR30 = 0; VAR30 < VAR12; VAR30++)
                {
                    int32_t VAR37;
                    VAR37 = FUN5(&VAR9->VAR18, 16);
                    VAR37 = VAR37 << 16;
                    VAR37 = VAR37 >> (32 - VAR22);
                    VAR37 |= FUN5(&VAR9->VAR18, VAR22 - 16);
                    VAR9->VAR36[VAR30] = VAR37;
                }
            }
        }
        switch (VAR9->VAR25)
        {
        case 16:
        {
            int VAR30;
            for (VAR30 = 0; VAR30 < VAR12; VAR30++)
            {
                int16_t VAR38 = VAR9->VAR36[VAR30];
                ((VAR31 *)VAR3)[VAR30 * VAR9->VAR39] = VAR38;
            }
            break;
        }
        case 20:
        case 24:
        case 32:
            FUN2(VAR2, VAR16, "", VAR9->VAR25);
            break;
        default:
            break;
        }
        break;
    }
    case 1:
    {
        int VAR20;
        int VAR21;
        int VAR22;
        int VAR23;
        uint8_t VAR40;
        uint8_t VAR41;
        FUN5(&VAR9->VAR18, 4);
        FUN5(&VAR9->VAR18, 12);
        VAR20 = FUN5(&VAR9->VAR18, 1);
        VAR23 = FUN5(&VAR9->VAR18, 2);
        VAR21 = FUN5(&VAR9->VAR18, 1);
        if (VAR20)
        {
            VAR12 = FUN5(&VAR9->VAR18, 32);
            *VAR4 = VAR12 * VAR9->VAR19;
        }
        VAR22 = VAR9->VAR25 - (VAR23 * 8) + 1;
        if (!VAR21)
        {
            int16_t VAR42[32];
            int VAR43;
            int VAR44;
            int VAR45;
            int VAR46;
            int16_t VAR47[32];
            int VAR48;
            int VAR49;
            int VAR50;
            int VAR51;
            int VAR30;
            VAR40 = FUN5(&VAR9->VAR18, 8);
            VAR41 = FUN5(&VAR9->VAR18, 8);
            VAR44 = FUN5(&VAR9->VAR18, 4);
            VAR45 = FUN5(&VAR9->VAR18, 4);
            VAR46 = FUN5(&VAR9->VAR18, 3);
            VAR43 = FUN5(&VAR9->VAR18, 5);
            for (VAR30 = 0; VAR30 < VAR43; VAR30++)
            {
                VAR42[VAR30] = (VAR31)FUN5(&VAR9->VAR18, 16);
            }
            VAR49 = FUN5(&VAR9->VAR18, 4);
            VAR50 = FUN5(&VAR9->VAR18, 4);
            VAR51 = FUN5(&VAR9->VAR18, 3);
            VAR48 = FUN5(&VAR9->VAR18, 5);
            for (VAR30 = 0; VAR30 < VAR48; VAR30++)
            {
                VAR47[VAR30] = (VAR31)FUN5(&VAR9->VAR18, 16);
            }
            if (VAR23)
            {
                FUN2(VAR2, VAR16, "");
            }
            FUN6(VAR9, VAR9->VAR32, VAR12, VAR22, VAR9->VAR33, VAR9->VAR34, VAR46 * VAR9->VAR35 / 4, (1 << VAR9->VAR34) - 1);
            if (VAR44 == 0)
            {
                FUN7(VAR9->VAR32, VAR9->VAR36, VAR12, VAR22, VAR42, VAR43, VAR45);
            }
            else
            {
                FUN2(VAR2, VAR16, "", VAR44);
            }
            FUN6(VAR9, VAR9->VAR52, VAR12, VAR22, VAR9->VAR33, VAR9->VAR34, VAR51 * VAR9->VAR35 / 4, (1 << VAR9->VAR34) - 1);
            if (VAR49 == 0)
            {
                FUN7(VAR9->VAR52, VAR9->VAR53, VAR12, VAR22, VAR47, VAR48, VAR50);
            }
            else
            {
                FUN2(VAR2, VAR16, "", VAR49);
            }
        }
        else
        {
            if (VAR9->VAR25 <= 16)
            {
                int VAR30;
                for (VAR30 = 0; VAR30 < VAR12; VAR30++)
                {
                    int32_t VAR54, VAR55;
                    VAR54 = FUN5(&VAR9->VAR18, VAR9->VAR25);
                    VAR55 = FUN5(&VAR9->VAR18, VAR9->VAR25);
                    VAR54 = FUN8(VAR54, VAR9->VAR25);
                    VAR55 = FUN8(VAR55, VAR9->VAR25);
                    VAR9->VAR36[VAR30] = VAR54;
                    VAR9->VAR53[VAR30] = VAR55;
                }
            }
            else
            {
                int VAR30;
                for (VAR30 = 0; VAR30 < VAR12; VAR30++)
                {
                    int32_t VAR54, VAR55;
                    VAR54 = FUN5(&VAR9->VAR18, 16);
                    VAR54 = VAR54 << 16;
                    VAR54 = VAR54 >> (32 - VAR9->VAR25);
                    VAR54 |= FUN5(&VAR9->VAR18, VAR9->VAR25 - 16);
                    VAR55 = FUN5(&VAR9->VAR18, 16);
                    VAR55 = VAR55 << 16;
                    VAR55 = VAR55 >> (32 - VAR9->VAR25);
                    VAR55 |= FUN5(&VAR9->VAR18, VAR9->VAR25 - 16);
                    VAR9->VAR36[VAR30] = VAR54;
                    VAR9->VAR53[VAR30] = VAR55;
                }
            }
            VAR40 = 0;
            VAR41 = 0;
        }
        switch (VAR9->VAR25)
        {
        case 16:
        {
            FUN9(VAR9->VAR36, VAR9->VAR53, (VAR31 *)VAR3, VAR9->VAR39, VAR12, VAR40, VAR41);
            break;
        }
        case 20:
        case 24:
        case 32:
            FUN2(VAR2, VAR16, "", VAR9->VAR25);
            break;
        default:
            break;
        }
        break;
    }
    }
    return VAR7;
}