static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    int16_t VAR15[576];
    if (VAR2->VAR16)
    {
        VAR4 = FUN2(&VAR2->VAR17, 8);
        FUN3(&VAR2->VAR17, VAR2->VAR18);
        VAR3 = 1;
    }
    else
    {
        VAR4 = FUN2(&VAR2->VAR17, 9);
        if (VAR2->VAR18 == 2)
            FUN3(&VAR2->VAR17, 3);
        else
            FUN3(&VAR2->VAR17, 5);
        VAR3 = 2;
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR2->VAR19[VAR6][0].VAR20 = 0;
            VAR2->VAR19[VAR6][1].VAR20 = FUN2(&VAR2->VAR17, 4);
        }
    }
    for (VAR5 = 0; VAR5 < VAR3; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            FUN4(VAR2->VAR21, "", VAR5, VAR6);
            VAR14 = &VAR2->VAR19[VAR6][VAR5];
            VAR14->VAR22 = FUN2(&VAR2->VAR17, 12);
            VAR14->VAR23 = FUN2(&VAR2->VAR17, 9);
            if (VAR14->VAR23 > 288)
            {
                FUN5(VAR2->VAR21, VAR24, "");
                return VAR25;
            }
            VAR14->VAR26 = FUN2(&VAR2->VAR17, 8);
            if ((VAR2->VAR27 & (VAR28 | VAR29)) == VAR28)
                VAR14->VAR26 -= 2;
            if (VAR2->VAR16)
                VAR14->VAR30 = FUN2(&VAR2->VAR17, 9);
            else
                VAR14->VAR30 = FUN2(&VAR2->VAR17, 4);
            VAR7 = FUN6(&VAR2->VAR17);
            if (VAR7)
            {
                VAR14->VAR31 = FUN2(&VAR2->VAR17, 2);
                if (VAR14->VAR31 == 0)
                {
                    FUN5(VAR2->VAR21, VAR24, "");
                    return VAR25;
                }
                VAR14->VAR32 = FUN6(&VAR2->VAR17);
                for (VAR8 = 0; VAR8 < 2; VAR8++)
                    VAR14->VAR33[VAR8] = FUN2(&VAR2->VAR17, 5);
                for (VAR8 = 0; VAR8 < 3; VAR8++)
                    VAR14->VAR34[VAR8] = FUN2(&VAR2->VAR17, 3);
                FUN7(VAR2, VAR14);
            }
            else
            {
                int VAR35, VAR36;
                VAR14->VAR31 = 0;
                VAR14->VAR32 = 0;
                for (VAR8 = 0; VAR8 < 3; VAR8++)
                    VAR14->VAR33[VAR8] = FUN2(&VAR2->VAR17, 5);
                VAR35 = FUN2(&VAR2->VAR17, 4);
                VAR36 = FUN2(&VAR2->VAR17, 3);
                FUN4(VAR2->VAR21, "", VAR35, VAR36);
                FUN8(VAR2, VAR14, VAR35, VAR36);
            }
            FUN9(VAR14);
            FUN10(VAR2, VAR14);
            VAR14->VAR37 = 0;
            if (!VAR2->VAR16)
                VAR14->VAR37 = FUN6(&VAR2->VAR17);
            VAR14->VAR38 = FUN6(&VAR2->VAR17);
            VAR14->VAR39 = FUN6(&VAR2->VAR17);
            FUN4(VAR2->VAR21, "", VAR14->VAR31, VAR14->VAR32);
        }
    }
    if (!VAR2->VAR40)
    {
        const VAR41 *VAR42 = VAR2->VAR17.VAR43 + (FUN11(&VAR2->VAR17) >> 3);
        assert((FUN11(&VAR2->VAR17) & 7) == 0);
        FUN4(VAR2->VAR21, "", VAR4);
        memcpy(VAR2->VAR44 + VAR2->VAR45, VAR42, VAR46);
        VAR2->VAR47 = VAR2->VAR17;
        FUN12(&VAR2->VAR17, VAR2->VAR44, VAR2->VAR45 * 8);
        VAR2->VAR17.VAR48 += VAR46 * 8;
        VAR2->VAR45 <<= 3;
        for (VAR5 = 0, VAR6 = 0; VAR5 < VAR3 && (VAR2->VAR45 >> 3) < VAR4; VAR5++, VAR6 = 0)
        {
            for (; VAR6 < VAR2->VAR18 && (VAR2->VAR45 >> 3) < VAR4; VAR6++)
            {
                VAR14 = &VAR2->VAR19[VAR6][VAR5];
                VAR2->VAR45 += VAR14->VAR22;
                memset(VAR14->VAR49, 0, sizeof(VAR14->VAR49));
            }
        }
        FUN13(&VAR2->VAR17, VAR2->VAR45 - 8 * VAR4);
        if (FUN11(&VAR2->VAR17) >= VAR2->VAR17.VAR50 && VAR2->VAR47.VAR43)
        {
            FUN13(&VAR2->VAR47, FUN11(&VAR2->VAR17) - VAR2->VAR17.VAR50);
            VAR2->VAR17 = VAR2->VAR47;
            VAR2->VAR47.VAR43 = NULL;
        }
    }
    else
    {
        VAR5 = VAR6 = 0;
    }
    for (; VAR5 < VAR3; VAR5++, VAR6 = 0)
    {
        for (; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR14 = &VAR2->VAR19[VAR6][VAR5];
            VAR12 = FUN11(&VAR2->VAR17);
            if (!VAR2->VAR16)
            {
                VAR41 *VAR51;
                int VAR52, VAR53, VAR54;
                VAR53 = VAR55[0][VAR14->VAR30];
                VAR54 = VAR55[1][VAR14->VAR30];
                FUN4(VAR2->VAR21, "", VAR53, VAR54);
                if (VAR14->VAR31 == 2)
                {
                    VAR11 = VAR14->VAR32 ? 17 : 18;
                    VAR9 = 0;
                    if (VAR53)
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR56[VAR9++] = FUN2(&VAR2->VAR17, VAR53);
                    }
                    else
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR56[VAR9++] = 0;
                    }
                    if (VAR54)
                    {
                        for (VAR8 = 0; VAR8 < 18; VAR8++)
                            VAR14->VAR56[VAR9++] = FUN2(&VAR2->VAR17, VAR54);
                        for (VAR8 = 0; VAR8 < 3; VAR8++)
                            VAR14->VAR56[VAR9++] = 0;
                    }
                    else
                    {
                        for (VAR8 = 0; VAR8 < 21; VAR8++)
                            VAR14->VAR56[VAR9++] = 0;
                    }
                }
                else
                {
                    VAR51 = VAR2->VAR19[VAR6][0].VAR56;
                    VAR9 = 0;
                    for (VAR10 = 0; VAR10 < 4; VAR10++)
                    {
                        VAR11 = VAR10 == 0 ? 6 : 5;
                        if ((VAR14->VAR20 & (0x8 >> VAR10)) == 0)
                        {
                            VAR52 = (VAR10 < 2) ? VAR53 : VAR54;
                            if (VAR52)
                            {
                                for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                                    VAR14->VAR56[VAR9++] = FUN2(&VAR2->VAR17, VAR52);
                            }
                            else
                            {
                                for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                                    VAR14->VAR56[VAR9++] = 0;
                            }
                        }
                        else
                        {
                            for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            {
                                VAR14->VAR56[VAR9] = VAR51[VAR9];
                                VAR9++;
                            }
                        }
                    }
                    VAR14->VAR56[VAR9++] = 0;
                }
            }
            else
            {
                int VAR57, VAR58, VAR52[4], VAR59, VAR60;
                if (VAR14->VAR31 == 2)
                    VAR57 = VAR14->VAR32 ? 2 : 1;
                else
                    VAR57 = 0;
                VAR60 = VAR14->VAR30;
                if ((VAR2->VAR27 & VAR29) && VAR6 == 1)
                {
                    VAR60 >>= 1;
                    if (VAR60 < 180)
                    {
                        FUN14(VAR52, VAR60, 6, 6, 0);
                        VAR58 = 3;
                    }
                    else if (VAR60 < 244)
                    {
                        FUN14(VAR52, VAR60 - 180, 4, 4, 0);
                        VAR58 = 4;
                    }
                    else
                    {
                        FUN14(VAR52, VAR60 - 244, 3, 0, 0);
                        VAR58 = 5;
                    }
                }
                else
                {
                    if (VAR60 < 400)
                    {
                        FUN14(VAR52, VAR60, 5, 4, 4);
                        VAR58 = 0;
                    }
                    else if (VAR60 < 500)
                    {
                        FUN14(VAR52, VAR60 - 400, 5, 4, 0);
                        VAR58 = 1;
                    }
                    else
                    {
                        FUN14(VAR52, VAR60 - 500, 3, 0, 0);
                        VAR58 = 2;
                        VAR14->VAR37 = 1;
                    }
                }
                VAR9 = 0;
                for (VAR10 = 0; VAR10 < 4; VAR10++)
                {
                    VAR11 = VAR61[VAR58][VAR57][VAR10];
                    VAR59 = VAR52[VAR10];
                    if (VAR59)
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR56[VAR9++] = FUN2(&VAR2->VAR17, VAR59);
                    }
                    else
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR56[VAR9++] = 0;
                    }
                }
                for (; VAR9 < 40; VAR9++)
                    VAR14->VAR56[VAR9] = 0;
            }
            FUN15(VAR2, VAR14, VAR15);
            FUN16(VAR2, VAR14, VAR15, VAR12 + VAR14->VAR22);
        }
        if (VAR2->VAR18 == 2)
            FUN17(VAR2, &VAR2->VAR19[0][VAR5], &VAR2->VAR19[1][VAR5]);
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR14 = &VAR2->VAR19[VAR6][VAR5];
            FUN18(VAR2, VAR14);
            FUN19(VAR2, VAR14);
            FUN20(VAR2, VAR14, &VAR2->VAR62[VAR6][18 * VAR5][0], VAR2->VAR63[VAR6]);
        }
    }
    if (FUN11(&VAR2->VAR17) < 0)
        FUN13(&VAR2->VAR17, -FUN11(&VAR2->VAR17));
    return VAR3 * 18;
}