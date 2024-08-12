static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7 = 0;
    int VAR8 = 0;
    VAR2->VAR9 = 0;
    VAR2->VAR10 = ~0;
    VAR2->VAR11 = ~0;
    VAR2->VAR12 = ~0;
    VAR2->VAR13 = ~0;
    VAR2->VAR14 = ~0;
    VAR2->VAR15 = ~0;
    VAR2->VAR16[0] = -1;
    VAR2->VAR16[1] = -1;
    VAR2->VAR16[2] = -1;
    VAR2->VAR16[3] = -1;
    VAR2->VAR17 = VAR18;
    VAR2->VAR19 = VAR20;
    VAR2->VAR21 = 0;
    VAR2->VAR22 = 0;
    VAR2->VAR23 = 0;
    VAR2->VAR24.VAR25 = -1;
    VAR2->VAR24.VAR26 = -1;
    VAR2->VAR27 = 0;
    VAR2->VAR28 = 0;
    if (FUN2(&VAR2->VAR29) < 10)
    {
        FUN3(VAR2->VAR30, VAR31, "");
        return VAR32;
    }
    VAR3 = FUN4(&VAR2->VAR29);
    if (VAR3 != 20000630)
    {
        FUN3(VAR2->VAR30, VAR31, "", VAR3);
        return VAR32;
    }
    VAR4 = FUN5(&VAR2->VAR29);
    if (VAR4 != 2)
    {
        FUN6(VAR2->VAR30, "", VAR4);
        return VAR33;
    }
    VAR6 = FUN7(&VAR2->VAR29);
    if (VAR6 == 0x00)
        VAR2->VAR27 = 0;
    else if (VAR6 & 0x02)
        VAR2->VAR27 = 1;
    else
    {
        FUN6(VAR2->VAR30, "", VAR6);
        return VAR33;
    }
    while (FUN2(&VAR2->VAR29) > 0 && *VAR2->VAR29.VAR34)
    {
        int VAR35;
        if ((VAR35 = FUN8(VAR2, "", "", 38)) >= 0)
        {
            GetByteContext VAR36;
            if (!VAR35)
                return VAR32;
            FUN9(&VAR36, VAR2->VAR29.VAR34, VAR35);
            while (FUN2(&VAR36) >= 19)
            {
                VAR37 *VAR38;
                enum ExrPixelType VAR39;
                int VAR40 = -1;
                int VAR41, VAR42;
                if (strcmp(VAR2->VAR43, "") != 0)
                {
                    if (FUN10(VAR36.VAR34, VAR2->VAR43, strlen(VAR2->VAR43)) == 0)
                    {
                        VAR8 = 1;
                        FUN3(VAR2->VAR30, VAR44, "", VAR36.VAR34);
                        VAR36.VAR34 += strlen(VAR2->VAR43);
                        if (*VAR36.VAR34 == '')
                            VAR36.VAR34++;
                    }
                    else
                    {
                        FUN3(VAR2->VAR30, VAR44, "", VAR36.VAR34);
                    }
                }
                else
                {
                    VAR8 = 1;
                }
                if (VAR8)
                {
                    if (!strcmp(VAR36.VAR34, "") || !strcmp(VAR36.VAR34, "") || !strcmp(VAR36.VAR34, ""))
                    {
                        VAR40 = 0;
                        VAR2->VAR28 = 0;
                    }
                    else if (!strcmp(VAR36.VAR34, "") || !strcmp(VAR36.VAR34, ""))
                    {
                        VAR40 = 1;
                        VAR2->VAR28 = 0;
                    }
                    else if (!strcmp(VAR36.VAR34, ""))
                    {
                        VAR40 = 1;
                        VAR2->VAR28 = 1;
                    }
                    else if (!strcmp(VAR36.VAR34, "") || !strcmp(VAR36.VAR34, "") || !strcmp(VAR36.VAR34, ""))
                    {
                        VAR40 = 2;
                        VAR2->VAR28 = 0;
                    }
                    else if (!strcmp(VAR36.VAR34, ""))
                    {
                        VAR40 = 3;
                    }
                    else
                    {
                        FUN3(VAR2->VAR30, VAR45, "", VAR36.VAR34);
                    }
                }
                while (FUN2(&VAR36) > 0 && FUN5(&VAR36))
                    continue;
                if (FUN2(&VAR36) < 4)
                {
                    FUN3(VAR2->VAR30, VAR31, "");
                    return VAR32;
                }
                VAR39 = FUN4(&VAR36);
                if (VAR39 >= VAR18)
                {
                    FUN6(VAR2->VAR30, "", VAR39);
                    return VAR33;
                }
                FUN11(&VAR36, 4);
                VAR41 = FUN4(&VAR36);
                VAR42 = FUN4(&VAR36);
                if (VAR41 != 1 || VAR42 != 1)
                {
                    FUN6(VAR2->VAR30, "", VAR41, VAR42);
                    return VAR33;
                }
                if (VAR2->VAR16[VAR40] == -1)
                {
                    if (VAR40 >= 0)
                    {
                        if (VAR2->VAR17 != VAR18 && VAR2->VAR17 != VAR39)
                        {
                            FUN3(VAR2->VAR30, VAR31, "");
                            return VAR32;
                        }
                        VAR2->VAR17 = VAR39;
                        VAR2->VAR16[VAR40] = VAR2->VAR9;
                    }
                }
                VAR2->VAR46 = FUN12(VAR2->VAR46, ++VAR2->VAR21 * sizeof(VAR37));
                if (!VAR2->VAR46)
                    return FUN13(VAR47);
                VAR38 = &VAR2->VAR46[VAR2->VAR21 - 1];
                VAR38->VAR17 = VAR39;
                VAR38->VAR41 = VAR41;
                VAR38->VAR42 = VAR42;
                VAR2->VAR9 += 1 << VAR39;
            }
            if (!VAR2->VAR28)
            {
                if (FUN14(VAR2->VAR16[0], VAR2->VAR16[1], VAR2->VAR16[2]) < 0)
                {
                    if (VAR2->VAR16[0] < 0)
                        FUN3(VAR2->VAR30, VAR31, "");
                    if (VAR2->VAR16[1] < 0)
                        FUN3(VAR2->VAR30, VAR31, "");
                    if (VAR2->VAR16[2] < 0)
                        FUN3(VAR2->VAR30, VAR31, "");
                    return VAR32;
                }
            }
            VAR2->VAR29.VAR34 = VAR36.VAR34 + 1;
            continue;
        }
        else if ((VAR35 = FUN8(VAR2, "", "", 31)) >= 0)
        {
            if (!VAR35)
                return VAR32;
            VAR2->VAR10 = FUN4(&VAR2->VAR29);
            VAR2->VAR12 = FUN4(&VAR2->VAR29);
            VAR2->VAR11 = FUN4(&VAR2->VAR29);
            VAR2->VAR13 = FUN4(&VAR2->VAR29);
            VAR2->VAR14 = (VAR2->VAR11 - VAR2->VAR10) + 1;
            VAR2->VAR15 = (VAR2->VAR13 - VAR2->VAR12) + 1;
            continue;
        }
        else if ((VAR35 = FUN8(VAR2, "", "", 34)) >= 0)
        {
            if (!VAR35)
                return VAR32;
            FUN11(&VAR2->VAR29, 8);
            VAR2->VAR22 = FUN4(&VAR2->VAR29) + 1;
            VAR2->VAR23 = FUN4(&VAR2->VAR29) + 1;
            continue;
        }
        else if ((VAR35 = FUN8(VAR2, "", "", 25)) >= 0)
        {
            int VAR48;
            if (!VAR35)
                return VAR32;
            VAR48 = FUN5(&VAR2->VAR29);
            FUN3(VAR2->VAR30, VAR49, "", VAR48);
            if (VAR48 > 2)
            {
                FUN3(VAR2->VAR30, VAR31, "");
                return VAR32;
            }
            continue;
        }
        else if ((VAR35 = FUN8(VAR2, "", "", 31)) >= 0)
        {
            if (!VAR35)
                return VAR32;
            VAR7 = FUN4(&VAR2->VAR29);
            continue;
        }
        else if ((VAR35 = FUN8(VAR2, "", "", 29)) >= 0)
        {
            if (!VAR35)
                return VAR32;
            if (VAR2->VAR19 == VAR20)
                VAR2->VAR19 = FUN5(&VAR2->VAR29);
            else
                FUN3(VAR2->VAR30, VAR45, "");
            continue;
        }
        else if ((VAR35 = FUN8(VAR2, "", "", 22)) >= 0)
        {
            char VAR50;
            if (!VAR2->VAR27)
                FUN3(VAR2->VAR30, VAR45, "");
            VAR2->VAR24.VAR25 = FUN4(&VAR2->VAR29);
            VAR2->VAR24.VAR26 = FUN4(&VAR2->VAR29);
            VAR50 = FUN5(&VAR2->VAR29);
            VAR2->VAR24.VAR51 = VAR50 & 0x0f;
            VAR2->VAR24.VAR52 = (VAR50 >> 4) & 0x0f;
            if (VAR2->VAR24.VAR51 >= VAR53)
            {
                FUN6(VAR2->VAR30, "", VAR2->VAR24.VAR51);
                return VAR33;
            }
            if (VAR2->VAR24.VAR52 >= VAR54)
            {
                FUN6(VAR2->VAR30, "", VAR2->VAR24.VAR52);
                return VAR33;
            }
            continue;
        }
        if (FUN2(&VAR2->VAR29) <= 9)
        {
            FUN3(VAR2->VAR30, VAR31, "");
            return VAR32;
        }
        for (VAR5 = 0; VAR5 < 2; VAR5++)
            while (FUN5(&VAR2->VAR29) != 0)
                ;
        FUN11(&VAR2->VAR29, FUN4(&VAR2->VAR29));
    }
    FUN15(VAR2->VAR30, FUN16(FUN17(VAR7), 255));
    if (VAR2->VAR19 == VAR20)
    {
        FUN3(VAR2->VAR30, VAR31, "");
        return VAR32;
    }
    if (VAR2->VAR27)
    {
        if (VAR2->VAR24.VAR25 < 1 || VAR2->VAR24.VAR26 < 1)
        {
            FUN3(VAR2->VAR30, VAR31, "");
            return VAR32;
        }
    }
    if (FUN2(&VAR2->VAR29) <= 0)
    {
        FUN3(VAR2->VAR30, VAR31, "");
        return VAR32;
    }
    FUN11(&VAR2->VAR29, 1);
    return 0;
}