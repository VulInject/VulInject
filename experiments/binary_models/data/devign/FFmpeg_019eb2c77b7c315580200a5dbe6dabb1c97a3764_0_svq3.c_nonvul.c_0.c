static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12 = 0;
    uint32_t VAR13;
    VAR14 *VAR15, *VAR16;
    const int VAR17 = VAR5->VAR17;
    const int VAR18 = 4 * VAR5->VAR19 + 4 * VAR5->VAR20 * VAR5->VAR21;
    VAR5->VAR22 = (VAR5->VAR20 == 0) ? 0x33FF : 0xFFFF;
    VAR5->VAR23 = (VAR5->VAR19 == 0) ? 0x5F5F : 0xFFFF;
    VAR5->VAR24 = 0xFFFF;
    if (VAR3 == 0)
    {
        if (VAR5->VAR25 == VAR26 || VAR2->VAR27->VAR3[VAR17] == -1)
        {
            FUN2(VAR2, 16 * VAR5->VAR19, 16 * VAR5->VAR20, 16, 16, 0, 0, 0, 0, 0, 0);
            if (VAR5->VAR25 == VAR28)
                FUN2(VAR2, 16 * VAR5->VAR19, 16 * VAR5->VAR20, 16, 16, 0, 0, 0, 0, 1, 1);
            VAR3 = VAR29;
        }
        else
        {
            VAR3 = FUN3(VAR2->VAR27->VAR3[VAR17], 6);
            if (FUN4(VAR2, VAR3, VAR30, 0, 0) < 0)
                return -1;
            if (FUN4(VAR2, VAR3, VAR30, 1, 1) < 0)
                return -1;
            VAR3 = VAR31;
        }
    }
    else if (VAR3 < 8)
    {
        if (VAR2->VAR32 && VAR2->VAR33 == !FUN5(&VAR5->VAR34))
            VAR11 = VAR35;
        else if (VAR2->VAR33 && VAR2->VAR32 == !FUN5(&VAR5->VAR34))
            VAR11 = VAR36;
        else
            VAR11 = VAR37;
        for (VAR9 = 0; VAR9 < 2; VAR9++)
        {
            if (VAR5->VAR19 > 0 && VAR5->VAR38[VAR5->VAR39[VAR17 - 1] + 6] != -1)
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    FUN6(VAR5->VAR40[VAR9][VAR41[0] - 1 + VAR6 * 8], VAR5->VAR42.VAR43[VAR9][VAR18 - 1 + VAR6 * VAR5->VAR21]);
            }
            else
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    FUN7(VAR5->VAR40[VAR9][VAR41[0] - 1 + VAR6 * 8]);
            }
            if (VAR5->VAR20 > 0)
            {
                memcpy(VAR5->VAR40[VAR9][VAR41[0] - 1 * 8], VAR5->VAR42.VAR43[VAR9][VAR18 - VAR5->VAR21], 4 * 2 * sizeof(VAR44));
                memset(&VAR5->VAR45[VAR9][VAR41[0] - 1 * 8], (VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46]] == -1) ? VAR47 : 1, 4);
                if (VAR5->VAR19 < VAR5->VAR48 - 1)
                {
                    FUN6(VAR5->VAR40[VAR9][VAR41[0] + 4 - 1 * 8], VAR5->VAR42.VAR43[VAR9][VAR18 - VAR5->VAR21 + 4]);
                    VAR5->VAR45[VAR9][VAR41[0] + 4 - 1 * 8] = (VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46 + 1] + 6] == -1 || VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46]] == -1) ? VAR47 : 1;
                }
                else
                    VAR5->VAR45[VAR9][VAR41[0] + 4 - 1 * 8] = VAR47;
                if (VAR5->VAR19 > 0)
                {
                    FUN6(VAR5->VAR40[VAR9][VAR41[0] - 1 - 1 * 8], VAR5->VAR42.VAR43[VAR9][VAR18 - VAR5->VAR21 - 1]);
                    VAR5->VAR45[VAR9][VAR41[0] - 1 - 1 * 8] = (VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46 - 1] + 3] == -1) ? VAR47 : 1;
                }
                else
                    VAR5->VAR45[VAR9][VAR41[0] - 1 - 1 * 8] = VAR47;
            }
            else
                memset(&VAR5->VAR45[VAR9][VAR41[0] - 1 * 8 - 1], VAR47, 8);
            if (VAR5->VAR25 != VAR28)
                break;
        }
        if (VAR5->VAR25 == VAR26)
        {
            if (FUN4(VAR2, VAR3 - 1, VAR11, 0, 0) < 0)
                return -1;
        }
        else
        {
            if (VAR3 != 2)
            {
                if (FUN4(VAR2, 0, VAR11, 0, 0) < 0)
                    return -1;
            }
            else
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    memset(VAR5->VAR42.VAR43[0][VAR18 + VAR6 * VAR5->VAR21], 0, 4 * 2 * sizeof(VAR44));
            }
            if (VAR3 != 1)
            {
                if (FUN4(VAR2, 0, VAR11, 1, VAR3 == 3) < 0)
                    return -1;
            }
            else
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    memset(VAR5->VAR42.VAR43[1][VAR18 + VAR6 * VAR5->VAR21], 0, 4 * 2 * sizeof(VAR44));
            }
        }
        VAR3 = VAR31;
    }
    else if (VAR3 == 8 || VAR3 == 33)
    {
        memset(VAR5->VAR49, -1, 8 * 5 * sizeof(VAR14));
        if (VAR3 == 8)
        {
            if (VAR5->VAR19 > 0)
            {
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                    VAR5->VAR49[VAR41[0] - 1 + VAR6 * 8] = VAR5->VAR38[VAR5->VAR39[VAR17 - 1] + 6 - VAR6];
                if (VAR5->VAR49[VAR41[0] - 1] == -1)
                    VAR5->VAR23 = 0x5F5F;
            }
            if (VAR5->VAR20 > 0)
            {
                VAR5->VAR49[4 + 8 * 0] = VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46] + 0];
                VAR5->VAR49[5 + 8 * 0] = VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46] + 1];
                VAR5->VAR49[6 + 8 * 0] = VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46] + 2];
                VAR5->VAR49[7 + 8 * 0] = VAR5->VAR38[VAR5->VAR39[VAR17 - VAR5->VAR46] + 3];
                if (VAR5->VAR49[4 + 8 * 0] == -1)
                    VAR5->VAR22 = 0x33FF;
            }
            for (VAR6 = 0; VAR6 < 16; VAR6 += 2)
            {
                VAR13 = FUN8(&VAR5->VAR34);
                if (VAR13 >= 25U)
                {
                    FUN9(VAR5->VAR50, VAR51, "", VAR13);
                    return -1;
                }
                VAR16 = &VAR5->VAR49[VAR41[VAR6] - 1];
                VAR15 = &VAR5->VAR49[VAR41[VAR6] - 8];
                VAR16[1] = VAR52[VAR15[0] + 1][VAR16[0] + 1][VAR53[VAR13][0]];
                VAR16[2] = VAR52[VAR15[1] + 1][VAR16[1] + 1][VAR53[VAR13][1]];
                if (VAR16[1] == -1 || VAR16[2] == -1)
                {
                    FUN9(VAR5->VAR50, VAR51, "");
                    return -1;
                }
            }
        }
        else
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
                memset(&VAR5->VAR49[VAR41[0] + 8 * VAR6], VAR54, 4);
        }
        FUN10(VAR5);
        if (VAR3 == 8)
        {
            FUN11(VAR5);
            VAR5->VAR22 = (VAR5->VAR20 == 0) ? 0x33FF : 0xFFFF;
            VAR5->VAR23 = (VAR5->VAR19 == 0) ? 0x5F5F : 0xFFFF;
        }
        else
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
                memset(&VAR5->VAR49[VAR41[0] + 8 * VAR6], VAR55, 4);
            VAR5->VAR22 = 0x33FF;
            VAR5->VAR23 = 0x5F5F;
        }
        VAR3 = VAR56;
    }
    else
    {
        VAR10 = VAR57[VAR3 - 8].VAR58;
        VAR10 = (VAR10 >> 1) ^ 3 * (VAR10 & 1) ^ 1;
        if ((VAR5->VAR59 = FUN12(VAR5, VAR10, 0)) < 0)
        {
            FUN9(VAR5->VAR50, VAR51, "");
            return -1;
        }
        VAR12 = VAR57[VAR3 - 8].VAR12;
        VAR3 = VAR60;
    }
    if (!FUN13(VAR3) && VAR5->VAR25 != VAR61)
    {
        for (VAR6 = 0; VAR6 < 4; VAR6++)
            memset(VAR5->VAR42.VAR43[0][VAR18 + VAR6 * VAR5->VAR21], 0, 4 * 2 * sizeof(VAR44));
        if (VAR5->VAR25 == VAR28)
        {
            for (VAR6 = 0; VAR6 < 4; VAR6++)
                memset(VAR5->VAR42.VAR43[1][VAR18 + VAR6 * VAR5->VAR21], 0, 4 * 2 * sizeof(VAR44));
        }
    }
    if (!FUN14(VAR3))
    {
        memset(VAR5->VAR38 + VAR5->VAR39[VAR17], VAR54, 8);
    }
    if (!FUN15(VAR3) || VAR5->VAR25 == VAR28)
    {
        memset(VAR5->VAR62 + 8, 0, 14 * 8 * sizeof(VAR63));
    }
    if (!FUN16(VAR3) && (!FUN15(VAR3) || VAR5->VAR25 == VAR28))
    {
        if ((VAR13 = FUN8(&VAR5->VAR34)) >= 48U)
        {
            FUN9(VAR5->VAR50, VAR51, "", VAR13);
            return -1;
        }
        VAR12 = FUN17(VAR3) ? VAR64[VAR13] : VAR65[VAR13];
    }
    if (FUN16(VAR3) || (VAR5->VAR25 != VAR61 && VAR2->VAR66 && VAR12))
    {
        VAR5->VAR67 += FUN18(&VAR5->VAR34);
        if (VAR5->VAR67 > 31u)
        {
            FUN9(VAR5->VAR50, VAR51, "", VAR5->VAR67);
            return -1;
        }
    }
    if (FUN16(VAR3))
    {
        FUN19(VAR5->VAR68[0] + 0);
        FUN19(VAR5->VAR68[0] + 8);
        if (FUN20(&VAR5->VAR34, VAR5->VAR68[0], 0, 1))
        {
            FUN9(VAR5->VAR50, VAR51, "");
            return -1;
        }
    }
    if (VAR12)
    {
        const int VAR69 = FUN16(VAR3) ? 1 : 0;
        const int VAR70 = ((VAR5->VAR67 < 24 && FUN14(VAR3)) ? 2 : 1);
        for (VAR6 = 0; VAR6 < 4; VAR6++)
            if ((VAR12 & (1 << VAR6)))
            {
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    VAR8 = VAR69 ? (1 * (VAR7 & 1) + 2 * (VAR6 & 1) + 2 * (VAR7 & 2) + 4 * (VAR6 & 2)) : (4 * VAR6 + VAR7);
                    VAR5->VAR62[VAR41[VAR8]] = 1;
                    if (FUN20(&VAR5->VAR34, &VAR5->VAR71[16 * VAR8], VAR69, VAR70))
                    {
                        FUN9(VAR5->VAR50, VAR51, "");
                        return -1;
                    }
                }
            }
        if ((VAR12 & 0x30))
        {
            for (VAR6 = 1; VAR6 < 3; ++VAR6)
                if (FUN20(&VAR5->VAR34, &VAR5->VAR71[16 * 16 * VAR6], 0, 3))
                {
                    FUN9(VAR5->VAR50, VAR51, "");
                    return -1;
                }
            if ((VAR12 & 0x20))
            {
                for (VAR6 = 1; VAR6 < 3; VAR6++)
                {
                    for (VAR7 = 0; VAR7 < 4; VAR7++)
                    {
                        VAR8 = 16 * VAR6 + VAR7;
                        VAR5->VAR62[VAR41[VAR8]] = 1;
                        if (FUN20(&VAR5->VAR34, &VAR5->VAR71[16 * VAR8], 1, 1))
                        {
                            FUN9(VAR5->VAR50, VAR51, "");
                            return -1;
                        }
                    }
                }
            }
        }
    }
    VAR5->VAR12 = VAR12;
    VAR5->VAR42.VAR3[VAR17] = VAR3;
    if (FUN17(VAR3))
        VAR5->VAR72 = FUN12(VAR5, VAR73, 1);
    return 0;
}