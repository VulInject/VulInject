static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10 = 0;
    uint32_t VAR11;
    VAR12 *VAR13, *VAR14;
    VAR15 *const VAR16 = (VAR15 *)VAR2;
    const int VAR17 = VAR16->VAR18 + VAR16->VAR19 * VAR16->VAR20;
    const int VAR21 = 4 * VAR16->VAR18 + 4 * VAR16->VAR19 * VAR2->VAR22;
    VAR2->VAR23 = (VAR16->VAR19 == 0) ? 0x33FF : 0xFFFF;
    VAR2->VAR24 = (VAR16->VAR18 == 0) ? 0x5F5F : 0xFFFF;
    VAR2->VAR25 = 0xFFFF;
    if (VAR3 == 0)
    {
        if (VAR16->VAR26 == VAR27 || VAR16->VAR28.VAR3[VAR17] == -1)
        {
            FUN2(VAR16, 16 * VAR16->VAR18, 16 * VAR16->VAR19, 16, 16, 0, 0, 0, 0, 0, 0);
            if (VAR16->VAR26 == VAR29)
            {
                FUN2(VAR16, 16 * VAR16->VAR18, 16 * VAR16->VAR19, 16, 16, 0, 0, 0, 0, 1, 1);
            }
            VAR3 = VAR30;
        }
        else
        {
            VAR3 = FUN3(VAR16->VAR28.VAR3[VAR17], 6);
            if (FUN4(VAR2, VAR3, VAR31, 0, 0) < 0)
                return -1;
            if (FUN4(VAR2, VAR3, VAR31, 1, 1) < 0)
                return -1;
            VAR3 = VAR32;
        }
    }
    else if (VAR3 < 8)
    {
        if (VAR2->VAR33 && VAR2->VAR34 == !FUN5(&VAR16->VAR35, 1))
        {
            VAR9 = VAR36;
        }
        else if (VAR2->VAR34 && VAR2->VAR33 == !FUN5(&VAR16->VAR35, 1))
        {
            VAR9 = VAR37;
        }
        else
        {
            VAR9 = VAR38;
        }
        for (VAR7 = 0; VAR7 < 2; VAR7++)
        {
            if (VAR16->VAR18 > 0 && VAR2->VAR39[VAR17 - 1][0] != -1)
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] - 1 + VAR4 * 8] = *(VAR40 *)VAR16->VAR43.VAR44[VAR7][VAR21 - 1 + VAR4 * VAR2->VAR22];
                }
            }
            else
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] - 1 + VAR4 * 8] = 0;
                }
            }
            if (VAR16->VAR19 > 0)
            {
                memcpy(VAR2->VAR41[VAR7][VAR42[0] - 1 * 8], VAR16->VAR43.VAR44[VAR7][VAR21 - VAR2->VAR22], 4 * 2 * sizeof(VAR45));
                memset(&VAR2->VAR46[VAR7][VAR42[0] - 1 * 8], (VAR2->VAR39[VAR17 - VAR16->VAR20][4] == -1) ? VAR47 : 1, 4);
                if (VAR16->VAR18 < (VAR16->VAR48 - 1))
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] + 4 - 1 * 8] = *(VAR40 *)VAR16->VAR43.VAR44[VAR7][VAR21 - VAR2->VAR22 + 4];
                    VAR2->VAR46[VAR7][VAR42[0] + 4 - 1 * 8] = (VAR2->VAR39[VAR17 - VAR16->VAR20 + 1][0] == -1 || VAR2->VAR39[VAR17 - VAR16->VAR20][4] == -1) ? VAR47 : 1;
                }
                else
                    VAR2->VAR46[VAR7][VAR42[0] + 4 - 1 * 8] = VAR47;
                if (VAR16->VAR18 > 0)
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] - 1 - 1 * 8] = *(VAR40 *)VAR16->VAR43.VAR44[VAR7][VAR21 - VAR2->VAR22 - 1];
                    VAR2->VAR46[VAR7][VAR42[0] - 1 - 1 * 8] = (VAR2->VAR39[VAR17 - VAR16->VAR20 - 1][3] == -1) ? VAR47 : 1;
                }
                else
                    VAR2->VAR46[VAR7][VAR42[0] - 1 - 1 * 8] = VAR47;
            }
            else
                memset(&VAR2->VAR46[VAR7][VAR42[0] - 1 * 8 - 1], VAR47, 8);
            if (VAR16->VAR26 != VAR29)
                break;
        }
        if (VAR16->VAR26 == VAR27)
        {
            if (FUN4(VAR2, (VAR3 - 1), VAR9, 0, 0) < 0)
                return -1;
        }
        else
        {
            if (VAR3 != 2)
            {
                if (FUN4(VAR2, 0, VAR9, 0, 0) < 0)
                    return -1;
            }
            else
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    memset(VAR16->VAR43.VAR44[0][VAR21 + VAR4 * VAR2->VAR22], 0, 4 * 2 * sizeof(VAR45));
                }
            }
            if (VAR3 != 1)
            {
                if (FUN4(VAR2, 0, VAR9, 1, (VAR3 == 3)) < 0)
                    return -1;
            }
            else
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    memset(VAR16->VAR43.VAR44[1][VAR21 + VAR4 * VAR2->VAR22], 0, 4 * 2 * sizeof(VAR45));
                }
            }
        }
        VAR3 = VAR32;
    }
    else if (VAR3 == 8 || VAR3 == 33)
    {
        memset(VAR2->VAR49, -1, 8 * 5 * sizeof(VAR12));
        if (VAR3 == 8)
        {
            if (VAR16->VAR18 > 0)
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    VAR2->VAR49[VAR42[0] - 1 + VAR4 * 8] = VAR2->VAR39[VAR17 - 1][VAR4];
                }
                if (VAR2->VAR49[VAR42[0] - 1] == -1)
                {
                    VAR2->VAR24 = 0x5F5F;
                }
            }
            if (VAR16->VAR19 > 0)
            {
                VAR2->VAR49[4 + 8 * 0] = VAR2->VAR39[VAR17 - VAR16->VAR20][4];
                VAR2->VAR49[5 + 8 * 0] = VAR2->VAR39[VAR17 - VAR16->VAR20][5];
                VAR2->VAR49[6 + 8 * 0] = VAR2->VAR39[VAR17 - VAR16->VAR20][6];
                VAR2->VAR49[7 + 8 * 0] = VAR2->VAR39[VAR17 - VAR16->VAR20][3];
                if (VAR2->VAR49[4 + 8 * 0] == -1)
                {
                    VAR2->VAR23 = 0x33FF;
                }
            }
            for (VAR4 = 0; VAR4 < 16; VAR4 += 2)
            {
                VAR11 = FUN6(&VAR16->VAR35);
                if (VAR11 >= 25)
                    return -1;
                VAR14 = &VAR2->VAR49[VAR42[VAR4] - 1];
                VAR13 = &VAR2->VAR49[VAR42[VAR4] - 8];
                VAR14[1] = VAR50[VAR13[0] + 1][VAR14[0] + 1][VAR51[VAR11][0]];
                VAR14[2] = VAR50[VAR13[1] + 1][VAR14[1] + 1][VAR51[VAR11][1]];
                if (VAR14[1] == -1 || VAR14[2] == -1)
                    return -1;
            }
        }
        else
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
            {
                memset(&VAR2->VAR49[VAR42[0] + 8 * VAR4], VAR52, 4);
            }
        }
        FUN7(VAR2);
        if (VAR3 == 8)
        {
            FUN8(VAR2);
            VAR2->VAR23 = (VAR16->VAR19 == 0) ? 0x33FF : 0xFFFF;
            VAR2->VAR24 = (VAR16->VAR18 == 0) ? 0x5F5F : 0xFFFF;
        }
        else
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
            {
                memset(&VAR2->VAR49[VAR42[0] + 8 * VAR4], VAR53, 4);
            }
            VAR2->VAR23 = 0x33FF;
            VAR2->VAR24 = 0x5F5F;
        }
        VAR3 = VAR54;
    }
    else
    {
        VAR8 = VAR55[VAR3 - 8].VAR56;
        VAR8 = (VAR8 >> 1) ^ 3 * (VAR8 & 1) ^ 1;
        if ((VAR2->VAR57 = FUN9(VAR2, VAR8)) == -1)
            return -1;
        VAR10 = VAR55[VAR3 - 8].VAR10;
        VAR3 = VAR58;
    }
    if (!FUN10(VAR3) && VAR16->VAR26 != VAR59)
    {
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            memset(VAR16->VAR43.VAR44[0][VAR21 + VAR4 * VAR2->VAR22], 0, 4 * 2 * sizeof(VAR45));
        }
        if (VAR16->VAR26 == VAR29)
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
            {
                memset(VAR16->VAR43.VAR44[1][VAR21 + VAR4 * VAR2->VAR22], 0, 4 * 2 * sizeof(VAR45));
            }
        }
    }
    if (!FUN11(VAR3))
    {
        memset(VAR2->VAR39[VAR17], VAR52, 8);
    }
    if (!FUN12(VAR3) || VAR16->VAR26 == VAR29)
    {
        memset(VAR2->VAR60 + 8, 0, 4 * 9 * sizeof(VAR61));
        VAR16->VAR62.FUN13(VAR2->VAR63);
    }
    if (!FUN14(VAR3) && (!FUN12(VAR3) || VAR16->VAR26 == VAR29))
    {
        if ((VAR11 = FUN6(&VAR16->VAR35)) >= 48)
            return -1;
        VAR10 = FUN15(VAR3) ? VAR64[VAR11] : VAR65[VAR11];
    }
    if (FUN14(VAR3) || (VAR16->VAR26 != VAR59 && VAR16->VAR66 && VAR10))
    {
        VAR16->VAR67 += FUN16(&VAR16->VAR35);
        if (VAR16->VAR67 > 31)
            return -1;
    }
    if (FUN14(VAR3))
    {
        if (FUN17(&VAR16->VAR35, VAR2->VAR63, 0, 0))
            return -1;
    }
    if (VAR10)
    {
        const int VAR68 = FUN14(VAR3) ? 1 : 0;
        const int VAR69 = ((VAR16->VAR67 < 24 && FUN11(VAR3)) ? 2 : 1);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            if ((VAR10 & (1 << VAR4)))
            {
                for (VAR5 = 0; VAR5 < 4; VAR5++)
                {
                    VAR6 = VAR68 ? ((VAR5 & 1) + 2 * (VAR4 & 1) + 2 * (VAR5 & 2) + 4 * (VAR4 & 2)) : (4 * VAR4 + VAR5);
                    VAR2->VAR60[VAR42[VAR6]] = 1;
                    if (FUN17(&VAR16->VAR35, &VAR2->VAR63[16 * VAR6], VAR68, VAR69))
                        return -1;
                }
            }
        }
        if ((VAR10 & 0x30))
        {
            for (VAR4 = 0; VAR4 < 2; ++VAR4)
            {
                if (FUN17(&VAR16->VAR35, &VAR2->VAR63[16 * (16 + 4 * VAR4)], 0, 3))
                    return -1;
            }
            if ((VAR10 & 0x20))
            {
                for (VAR4 = 0; VAR4 < 8; VAR4++)
                {
                    VAR2->VAR60[VAR42[16 + VAR4]] = 1;
                    if (FUN17(&VAR16->VAR35, &VAR2->VAR63[16 * (16 + VAR4)], 1, 1))
                        return -1;
                }
            }
        }
    }
    VAR16->VAR43.VAR3[VAR17] = VAR3;
    if (FUN15(VAR3))
    {
        VAR2->VAR70 = FUN9(VAR2, VAR71);
    }
    return 0;
}