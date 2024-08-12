static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12 = 0;
    uint32_t VAR13;
    VAR14 *VAR15, *VAR16;
    VAR17 *const VAR18 = (VAR17 *)VAR5;
    const int VAR19 = VAR5->VAR19;
    const int VAR20 = 4 * VAR18->VAR21 + 4 * VAR18->VAR22 * VAR5->VAR23;
    VAR5->VAR24 = (VAR18->VAR22 == 0) ? 0x33FF : 0xFFFF;
    VAR5->VAR25 = (VAR18->VAR21 == 0) ? 0x5F5F : 0xFFFF;
    VAR5->VAR26 = 0xFFFF;
    if (VAR3 == 0)
    {
        if (VAR18->VAR27 == VAR28 || VAR18->VAR29.VAR30.VAR3[VAR19] == -1)
        {
            FUN2(VAR18, 16 * VAR18->VAR21, 16 * VAR18->VAR22, 16, 16, 0, 0, 0, 0, 0, 0);
            if (VAR18->VAR27 == VAR31)
            {
                FUN2(VAR18, 16 * VAR18->VAR21, 16 * VAR18->VAR22, 16, 16, 0, 0, 0, 0, 1, 1);
            }
            VAR3 = VAR32;
        }
        else
        {
            VAR3 = FUN3(VAR18->VAR29.VAR30.VAR3[VAR19], 6);
            if (FUN4(VAR5, VAR3, VAR33, 0, 0) < 0)
                return -1;
            if (FUN4(VAR5, VAR3, VAR33, 1, 1) < 0)
                return -1;
            VAR3 = VAR34;
        }
    }
    else if (VAR3 < 8)
    {
        if (VAR2->VAR35 && VAR2->VAR36 == !FUN5(&VAR18->VAR37))
        {
            VAR11 = VAR38;
        }
        else if (VAR2->VAR36 && VAR2->VAR35 == !FUN5(&VAR18->VAR37))
        {
            VAR11 = VAR39;
        }
        else
        {
            VAR11 = VAR40;
        }
        for (VAR9 = 0; VAR9 < 2; VAR9++)
        {
            if (VAR18->VAR21 > 0 && VAR5->VAR41[VAR5->VAR42[VAR19 - 1] + 6] != -1)
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    *(VAR43 *)VAR5->VAR44[VAR9][VAR45[0] - 1 + VAR6 * 8] = *(VAR43 *)VAR18->VAR46.VAR30.VAR47[VAR9][VAR20 - 1 + VAR6 * VAR5->VAR23];
                }
            }
            else
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    *(VAR43 *)VAR5->VAR44[VAR9][VAR45[0] - 1 + VAR6 * 8] = 0;
                }
            }
            if (VAR18->VAR22 > 0)
            {
                memcpy(VAR5->VAR44[VAR9][VAR45[0] - 1 * 8], VAR18->VAR46.VAR30.VAR47[VAR9][VAR20 - VAR5->VAR23], 4 * 2 * sizeof(VAR48));
                memset(&VAR5->VAR49[VAR9][VAR45[0] - 1 * 8], (VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50]] == -1) ? VAR51 : 1, 4);
                if (VAR18->VAR21 < (VAR18->VAR52 - 1))
                {
                    *(VAR43 *)VAR5->VAR44[VAR9][VAR45[0] + 4 - 1 * 8] = *(VAR43 *)VAR18->VAR46.VAR30.VAR47[VAR9][VAR20 - VAR5->VAR23 + 4];
                    VAR5->VAR49[VAR9][VAR45[0] + 4 - 1 * 8] = (VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50 + 1] + 6] == -1 || VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50]] == -1) ? VAR51 : 1;
                }
                else
                    VAR5->VAR49[VAR9][VAR45[0] + 4 - 1 * 8] = VAR51;
                if (VAR18->VAR21 > 0)
                {
                    *(VAR43 *)VAR5->VAR44[VAR9][VAR45[0] - 1 - 1 * 8] = *(VAR43 *)VAR18->VAR46.VAR30.VAR47[VAR9][VAR20 - VAR5->VAR23 - 1];
                    VAR5->VAR49[VAR9][VAR45[0] - 1 - 1 * 8] = (VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50 - 1] + 3] == -1) ? VAR51 : 1;
                }
                else
                    VAR5->VAR49[VAR9][VAR45[0] - 1 - 1 * 8] = VAR51;
            }
            else
                memset(&VAR5->VAR49[VAR9][VAR45[0] - 1 * 8 - 1], VAR51, 8);
            if (VAR18->VAR27 != VAR31)
                break;
        }
        if (VAR18->VAR27 == VAR28)
        {
            if (FUN4(VAR5, (VAR3 - 1), VAR11, 0, 0) < 0)
                return -1;
        }
        else
        {
            if (VAR3 != 2)
            {
                if (FUN4(VAR5, 0, VAR11, 0, 0) < 0)
                    return -1;
            }
            else
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    memset(VAR18->VAR46.VAR30.VAR47[0][VAR20 + VAR6 * VAR5->VAR23], 0, 4 * 2 * sizeof(VAR48));
                }
            }
            if (VAR3 != 1)
            {
                if (FUN4(VAR5, 0, VAR11, 1, (VAR3 == 3)) < 0)
                    return -1;
            }
            else
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    memset(VAR18->VAR46.VAR30.VAR47[1][VAR20 + VAR6 * VAR5->VAR23], 0, 4 * 2 * sizeof(VAR48));
                }
            }
        }
        VAR3 = VAR34;
    }
    else if (VAR3 == 8 || VAR3 == 33)
    {
        memset(VAR5->VAR53, -1, 8 * 5 * sizeof(VAR14));
        if (VAR3 == 8)
        {
            if (VAR18->VAR21 > 0)
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    VAR5->VAR53[VAR45[0] - 1 + VAR6 * 8] = VAR5->VAR41[VAR5->VAR42[VAR19 - 1] + 6 - VAR6];
                }
                if (VAR5->VAR53[VAR45[0] - 1] == -1)
                {
                    VAR5->VAR25 = 0x5F5F;
                }
            }
            if (VAR18->VAR22 > 0)
            {
                VAR5->VAR53[4 + 8 * 0] = VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50] + 0];
                VAR5->VAR53[5 + 8 * 0] = VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50] + 1];
                VAR5->VAR53[6 + 8 * 0] = VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50] + 2];
                VAR5->VAR53[7 + 8 * 0] = VAR5->VAR41[VAR5->VAR42[VAR19 - VAR18->VAR50] + 3];
                if (VAR5->VAR53[4 + 8 * 0] == -1)
                {
                    VAR5->VAR24 = 0x33FF;
                }
            }
            for (VAR6 = 0; VAR6 < 16; VAR6 += 2)
            {
                VAR13 = FUN6(&VAR18->VAR37);
                if (VAR13 >= 25U)
                {
                    FUN7(VAR5->VAR18.VAR54, VAR55, "", VAR13);
                    return -1;
                }
                VAR16 = &VAR5->VAR53[VAR45[VAR6] - 1];
                VAR15 = &VAR5->VAR53[VAR45[VAR6] - 8];
                VAR16[1] = VAR56[VAR15[0] + 1][VAR16[0] + 1][VAR57[VAR13][0]];
                VAR16[2] = VAR56[VAR15[1] + 1][VAR16[1] + 1][VAR57[VAR13][1]];
                if (VAR16[1] == -1 || VAR16[2] == -1)
                {
                    FUN7(VAR5->VAR18.VAR54, VAR55, "");
                    return -1;
                }
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                memset(&VAR5->VAR53[VAR45[0] + 8 * VAR6], VAR58, 4);
            }
        }
        FUN8(VAR5);
        if (VAR3 == 8)
        {
            FUN9(VAR5);
            VAR5->VAR24 = (VAR18->VAR22 == 0) ? 0x33FF : 0xFFFF;
            VAR5->VAR25 = (VAR18->VAR21 == 0) ? 0x5F5F : 0xFFFF;
        }
        else
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                memset(&VAR5->VAR53[VAR45[0] + 8 * VAR6], VAR59, 4);
            }
            VAR5->VAR24 = 0x33FF;
            VAR5->VAR25 = 0x5F5F;
        }
        VAR3 = VAR60;
    }
    else
    {
        VAR10 = VAR61[VAR3 - 8].VAR62;
        VAR10 = (VAR10 >> 1) ^ 3 * (VAR10 & 1) ^ 1;
        if ((VAR5->VAR63 = FUN10(VAR5, VAR10)) == -1)
        {
            FUN7(VAR5->VAR18.VAR54, VAR55, "");
            return -1;
        }
        VAR12 = VAR61[VAR3 - 8].VAR12;
        VAR3 = VAR64;
    }
    if (!FUN11(VAR3) && VAR18->VAR27 != VAR65)
    {
        for (VAR6 = 0; VAR6 < 4; VAR6++)
        {
            memset(VAR18->VAR46.VAR30.VAR47[0][VAR20 + VAR6 * VAR5->VAR23], 0, 4 * 2 * sizeof(VAR48));
        }
        if (VAR18->VAR27 == VAR31)
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
            {
                memset(VAR18->VAR46.VAR30.VAR47[1][VAR20 + VAR6 * VAR5->VAR23], 0, 4 * 2 * sizeof(VAR48));
            }
        }
    }
    if (!FUN12(VAR3))
    {
        memset(VAR5->VAR41 + VAR5->VAR42[VAR19], VAR58, 8);
    }
    if (!FUN13(VAR3) || VAR18->VAR27 == VAR31)
    {
        memset(VAR5->VAR66 + 8, 0, 14 * 8 * sizeof(VAR67));
        VAR18->VAR68.FUN14(VAR5->VAR69 + 0);
        VAR18->VAR68.FUN14(VAR5->VAR69 + 384);
    }
    if (!FUN15(VAR3) && (!FUN13(VAR3) || VAR18->VAR27 == VAR31))
    {
        if ((VAR13 = FUN6(&VAR18->VAR37)) >= 48U)
        {
            FUN7(VAR5->VAR18.VAR54, VAR55, "", VAR13);
            return -1;
        }
        VAR12 = FUN16(VAR3) ? VAR70[VAR13] : VAR71[VAR13];
    }
    if (FUN15(VAR3) || (VAR18->VAR27 != VAR65 && VAR18->VAR72 && VAR12))
    {
        VAR18->VAR73 += FUN17(&VAR18->VAR37);
        if (VAR18->VAR73 > 31U)
        {
            FUN7(VAR5->VAR18.VAR54, VAR55, "", VAR18->VAR73);
            return -1;
        }
    }
    if (FUN15(VAR3))
    {
        FUN18(VAR5->VAR74[0] + 0);
        FUN18(VAR5->VAR74[0] + 8);
        if (FUN19(&VAR18->VAR37, VAR5->VAR74, 0, 1))
        {
            FUN7(VAR5->VAR18.VAR54, VAR55, "");
            return -1;
        }
    }
    if (VAR12)
    {
        const int VAR75 = FUN15(VAR3) ? 1 : 0;
        const int VAR76 = ((VAR18->VAR73 < 24 && FUN12(VAR3)) ? 2 : 1);
        for (VAR6 = 0; VAR6 < 4; VAR6++)
        {
            if ((VAR12 & (1 << VAR6)))
            {
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    VAR8 = VAR75 ? ((VAR7 & 1) + 2 * (VAR6 & 1) + 2 * (VAR7 & 2) + 4 * (VAR6 & 2)) : (4 * VAR6 + VAR7);
                    VAR5->VAR66[VAR45[VAR8]] = 1;
                    if (FUN19(&VAR18->VAR37, &VAR5->VAR69[16 * VAR8], VAR75, VAR76))
                    {
                        FUN7(VAR5->VAR18.VAR54, VAR55, "");
                        return -1;
                    }
                }
            }
        }
        if ((VAR12 & 0x30))
        {
            for (VAR6 = 1; VAR6 < 3; ++VAR6)
            {
                if (FUN19(&VAR18->VAR37, &VAR5->VAR69[16 * 16 * VAR6], 0, 3))
                {
                    FUN7(VAR5->VAR18.VAR54, VAR55, "");
                    return -1;
                }
            }
            if ((VAR12 & 0x20))
            {
                for (VAR6 = 1; VAR6 < 3; VAR6++)
                {
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        VAR8 = 16 * VAR6 + VAR7;
                        VAR5->VAR66[VAR45[VAR8]] = 1;
                        if (FUN19(&VAR18->VAR37, &VAR5->VAR69[16 * VAR8], 1, 1))
                        {
                            FUN7(VAR5->VAR18.VAR54, VAR55, "");
                            return -1;
                        }
                    }
                }
            }
        }
    }
    VAR5->VAR12 = VAR12;
    VAR18->VAR46.VAR30.VAR3[VAR19] = VAR3;
    if (FUN16(VAR3))
    {
        VAR5->VAR77 = FUN10(VAR5, VAR78);
    }
    return 0;
}