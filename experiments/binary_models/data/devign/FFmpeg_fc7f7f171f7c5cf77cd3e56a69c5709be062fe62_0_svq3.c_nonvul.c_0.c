static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10 = 0;
    uint32_t VAR11;
    VAR12 *VAR13, *VAR14;
    VAR15 *const VAR16 = (VAR15 *)VAR2;
    const int VAR17 = VAR2->VAR17;
    const int VAR18 = 4 * VAR16->VAR19 + 4 * VAR16->VAR20 * VAR2->VAR21;
    VAR2->VAR22 = (VAR16->VAR20 == 0) ? 0x33FF : 0xFFFF;
    VAR2->VAR23 = (VAR16->VAR19 == 0) ? 0x5F5F : 0xFFFF;
    VAR2->VAR24 = 0xFFFF;
    if (VAR3 == 0)
    {
        if (VAR16->VAR25 == VAR26 || VAR16->VAR27.VAR3[VAR17] == -1)
        {
            FUN2(VAR16, 16 * VAR16->VAR19, 16 * VAR16->VAR20, 16, 16, 0, 0, 0, 0, 0, 0);
            if (VAR16->VAR25 == VAR28)
            {
                FUN2(VAR16, 16 * VAR16->VAR19, 16 * VAR16->VAR20, 16, 16, 0, 0, 0, 0, 1, 1);
            }
            VAR3 = VAR29;
        }
        else
        {
            VAR3 = FUN3(VAR16->VAR27.VAR3[VAR17], 6);
            if (FUN4(VAR2, VAR3, VAR30, 0, 0) < 0)
                return -1;
            if (FUN4(VAR2, VAR3, VAR30, 1, 1) < 0)
                return -1;
            VAR3 = VAR31;
        }
    }
    else if (VAR3 < 8)
    {
        if (VAR2->VAR32 && VAR2->VAR33 == !FUN5(&VAR16->VAR34))
        {
            VAR9 = VAR35;
        }
        else if (VAR2->VAR33 && VAR2->VAR32 == !FUN5(&VAR16->VAR34))
        {
            VAR9 = VAR36;
        }
        else
        {
            VAR9 = VAR37;
        }
        for (VAR7 = 0; VAR7 < 2; VAR7++)
        {
            if (VAR16->VAR19 > 0 && VAR2->VAR38[8 * VAR2->VAR39[VAR17 - 1] + 6] != -1)
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] - 1 + VAR4 * 8] = *(VAR40 *)VAR16->VAR43.VAR44[VAR7][VAR18 - 1 + VAR4 * VAR2->VAR21];
                }
            }
            else
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] - 1 + VAR4 * 8] = 0;
                }
            }
            if (VAR16->VAR20 > 0)
            {
                memcpy(VAR2->VAR41[VAR7][VAR42[0] - 1 * 8], VAR16->VAR43.VAR44[VAR7][VAR18 - VAR2->VAR21], 4 * 2 * sizeof(VAR45));
                memset(&VAR2->VAR46[VAR7][VAR42[0] - 1 * 8], (VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47]] == -1) ? VAR48 : 1, 4);
                if (VAR16->VAR19 < (VAR16->VAR49 - 1))
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] + 4 - 1 * 8] = *(VAR40 *)VAR16->VAR43.VAR44[VAR7][VAR18 - VAR2->VAR21 + 4];
                    VAR2->VAR46[VAR7][VAR42[0] + 4 - 1 * 8] = (VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47 + 1] + 6] == -1 || VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47]] == -1) ? VAR48 : 1;
                }
                else
                    VAR2->VAR46[VAR7][VAR42[0] + 4 - 1 * 8] = VAR48;
                if (VAR16->VAR19 > 0)
                {
                    *(VAR40 *)VAR2->VAR41[VAR7][VAR42[0] - 1 - 1 * 8] = *(VAR40 *)VAR16->VAR43.VAR44[VAR7][VAR18 - VAR2->VAR21 - 1];
                    VAR2->VAR46[VAR7][VAR42[0] - 1 - 1 * 8] = (VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47 - 1] + 3] == -1) ? VAR48 : 1;
                }
                else
                    VAR2->VAR46[VAR7][VAR42[0] - 1 - 1 * 8] = VAR48;
            }
            else
                memset(&VAR2->VAR46[VAR7][VAR42[0] - 1 * 8 - 1], VAR48, 8);
            if (VAR16->VAR25 != VAR28)
                break;
        }
        if (VAR16->VAR25 == VAR26)
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
                    memset(VAR16->VAR43.VAR44[0][VAR18 + VAR4 * VAR2->VAR21], 0, 4 * 2 * sizeof(VAR45));
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
                    memset(VAR16->VAR43.VAR44[1][VAR18 + VAR4 * VAR2->VAR21], 0, 4 * 2 * sizeof(VAR45));
                }
            }
        }
        VAR3 = VAR31;
    }
    else if (VAR3 == 8 || VAR3 == 33)
    {
        memset(VAR2->VAR50, -1, 8 * 5 * sizeof(VAR12));
        if (VAR3 == 8)
        {
            if (VAR16->VAR19 > 0)
            {
                for (VAR4 = 0; VAR4 < 4; VAR4++)
                {
                    VAR2->VAR50[VAR42[0] - 1 + VAR4 * 8] = VAR2->VAR38[8 * VAR2->VAR39[VAR17 - 1] + 6 - VAR4];
                }
                if (VAR2->VAR50[VAR42[0] - 1] == -1)
                {
                    VAR2->VAR23 = 0x5F5F;
                }
            }
            if (VAR16->VAR20 > 0)
            {
                VAR2->VAR50[4 + 8 * 0] = VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47] + 0];
                VAR2->VAR50[5 + 8 * 0] = VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47] + 1];
                VAR2->VAR50[6 + 8 * 0] = VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47] + 2];
                VAR2->VAR50[7 + 8 * 0] = VAR2->VAR38[8 * VAR2->VAR39[VAR17 - VAR16->VAR47] + 3];
                if (VAR2->VAR50[4 + 8 * 0] == -1)
                {
                    VAR2->VAR22 = 0x33FF;
                }
            }
            for (VAR4 = 0; VAR4 < 16; VAR4 += 2)
            {
                VAR11 = FUN6(&VAR16->VAR34);
                if (VAR11 >= 25)
                {
                    FUN7(VAR2->VAR16.VAR51, VAR52, "", VAR11);
                    return -1;
                }
                VAR14 = &VAR2->VAR50[VAR42[VAR4] - 1];
                VAR13 = &VAR2->VAR50[VAR42[VAR4] - 8];
                VAR14[1] = VAR53[VAR13[0] + 1][VAR14[0] + 1][VAR54[VAR11][0]];
                VAR14[2] = VAR53[VAR13[1] + 1][VAR14[1] + 1][VAR54[VAR11][1]];
                if (VAR14[1] == -1 || VAR14[2] == -1)
                {
                    FUN7(VAR2->VAR16.VAR51, VAR52, "");
                    return -1;
                }
            }
        }
        else
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
            {
                memset(&VAR2->VAR50[VAR42[0] + 8 * VAR4], VAR55, 4);
            }
        }
        FUN8(VAR2);
        if (VAR3 == 8)
        {
            FUN9(VAR2);
            VAR2->VAR22 = (VAR16->VAR20 == 0) ? 0x33FF : 0xFFFF;
            VAR2->VAR23 = (VAR16->VAR19 == 0) ? 0x5F5F : 0xFFFF;
        }
        else
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
            {
                memset(&VAR2->VAR50[VAR42[0] + 8 * VAR4], VAR56, 4);
            }
            VAR2->VAR22 = 0x33FF;
            VAR2->VAR23 = 0x5F5F;
        }
        VAR3 = VAR57;
    }
    else
    {
        VAR8 = VAR58[VAR3 - 8].VAR59;
        VAR8 = (VAR8 >> 1) ^ 3 * (VAR8 & 1) ^ 1;
        if ((VAR2->VAR60 = FUN10(VAR2, VAR8)) == -1)
        {
            FUN7(VAR2->VAR16.VAR51, VAR52, "");
            return -1;
        }
        VAR10 = VAR58[VAR3 - 8].VAR10;
        VAR3 = VAR61;
    }
    if (!FUN11(VAR3) && VAR16->VAR25 != VAR62)
    {
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            memset(VAR16->VAR43.VAR44[0][VAR18 + VAR4 * VAR2->VAR21], 0, 4 * 2 * sizeof(VAR45));
        }
        if (VAR16->VAR25 == VAR28)
        {
            for (VAR4 = 0; VAR4 < 4; VAR4++)
            {
                memset(VAR16->VAR43.VAR44[1][VAR18 + VAR4 * VAR2->VAR21], 0, 4 * 2 * sizeof(VAR45));
            }
        }
    }
    if (!FUN12(VAR3))
    {
        memset(VAR2->VAR38 + 8 * VAR2->VAR39[VAR17], VAR55, 8);
    }
    if (!FUN13(VAR3) || VAR16->VAR25 == VAR28)
    {
        memset(VAR2->VAR63 + 8, 0, 4 * 9 * sizeof(VAR64));
        VAR16->VAR65.FUN14(VAR2->VAR66);
    }
    if (!FUN15(VAR3) && (!FUN13(VAR3) || VAR16->VAR25 == VAR28))
    {
        if ((VAR11 = FUN6(&VAR16->VAR34)) >= 48)
        {
            FUN7(VAR2->VAR16.VAR51, VAR52, "", VAR11);
            return -1;
        }
        VAR10 = FUN16(VAR3) ? VAR67[VAR11] : VAR68[VAR11];
    }
    if (FUN15(VAR3) || (VAR16->VAR25 != VAR62 && VAR16->VAR69 && VAR10))
    {
        VAR16->VAR70 += FUN17(&VAR16->VAR34);
        if (VAR16->VAR70 > 31)
        {
            FUN7(VAR2->VAR16.VAR51, VAR52, "", VAR16->VAR70);
            return -1;
        }
    }
    if (FUN15(VAR3))
    {
        if (FUN18(&VAR16->VAR34, VAR2->VAR66, 0, 0))
        {
            FUN7(VAR2->VAR16.VAR51, VAR52, "");
            return -1;
        }
    }
    if (VAR10)
    {
        const int VAR71 = FUN15(VAR3) ? 1 : 0;
        const int VAR72 = ((VAR16->VAR70 < 24 && FUN12(VAR3)) ? 2 : 1);
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            if ((VAR10 & (1 << VAR4)))
            {
                for (VAR5 = 0; VAR5 < 4; VAR5++)
                {
                    VAR6 = VAR71 ? ((VAR5 & 1) + 2 * (VAR4 & 1) + 2 * (VAR5 & 2) + 4 * (VAR4 & 2)) : (4 * VAR4 + VAR5);
                    VAR2->VAR63[VAR42[VAR6]] = 1;
                    if (FUN18(&VAR16->VAR34, &VAR2->VAR66[16 * VAR6], VAR71, VAR72))
                    {
                        FUN7(VAR2->VAR16.VAR51, VAR52, "");
                        return -1;
                    }
                }
            }
        }
        if ((VAR10 & 0x30))
        {
            for (VAR4 = 0; VAR4 < 2; ++VAR4)
            {
                if (FUN18(&VAR16->VAR34, &VAR2->VAR66[16 * (16 + 4 * VAR4)], 0, 3))
                {
                    FUN7(VAR2->VAR16.VAR51, VAR52, "");
                    return -1;
                }
            }
            if ((VAR10 & 0x20))
            {
                for (VAR4 = 0; VAR4 < 8; VAR4++)
                {
                    VAR2->VAR63[VAR42[16 + VAR4]] = 1;
                    if (FUN18(&VAR16->VAR34, &VAR2->VAR66[16 * (16 + VAR4)], 1, 1))
                    {
                        FUN7(VAR2->VAR16.VAR51, VAR52, "");
                        return -1;
                    }
                }
            }
        }
    }
    VAR2->VAR10 = VAR10;
    VAR16->VAR43.VAR3[VAR17] = VAR3;
    if (FUN16(VAR3))
    {
        VAR2->VAR73 = FUN10(VAR2, VAR74);
    }
    return 0;
}