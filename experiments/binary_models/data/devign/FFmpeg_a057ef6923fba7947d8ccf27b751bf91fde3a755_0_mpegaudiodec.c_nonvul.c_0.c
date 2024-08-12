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
        int VAR41;
        const VAR42 *VAR43 = VAR2->VAR17.VAR44 + (FUN11(&VAR2->VAR17) >> 3);
        int VAR45 = FUN12(FUN13(&VAR2->VAR17) >> 3, 0, VAR46);
        assert((FUN11(&VAR2->VAR17) & 7) == 0);
        FUN4(VAR2->VAR21, "", VAR4);
        memcpy(VAR2->VAR47 + VAR2->VAR48, VAR43, VAR45);
        VAR2->VAR49 = VAR2->VAR17;
        FUN14(&VAR2->VAR17, VAR2->VAR47, VAR2->VAR48 * 8);
        VAR2->VAR17.VAR50 += FUN15(VAR45, VAR51 - VAR2->VAR48) * 8;
        VAR2->VAR48 <<= 3;
        for (VAR5 = 0; VAR5 < VAR3 && (VAR2->VAR48 >> 3) < VAR4; VAR5++)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
            {
                VAR14 = &VAR2->VAR19[VAR6][VAR5];
                VAR2->VAR48 += VAR14->VAR22;
                memset(VAR14->VAR52, 0, sizeof(VAR14->VAR52));
            }
        }
        VAR41 = VAR2->VAR48 - 8 * VAR4;
        if (VAR41 >= VAR2->VAR17.VAR53 && VAR2->VAR49.VAR44)
        {
            FUN16(&VAR2->VAR49, VAR41 - VAR2->VAR17.VAR53);
            VAR2->VAR17 = VAR2->VAR49;
            VAR2->VAR49.VAR44 = NULL;
        }
        else
        {
            FUN16(&VAR2->VAR17, VAR41);
        }
    }
    else
    {
        VAR5 = 0;
    }
    for (; VAR5 < VAR3; VAR5++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR14 = &VAR2->VAR19[VAR6][VAR5];
            VAR12 = FUN11(&VAR2->VAR17);
            if (!VAR2->VAR16)
            {
                VAR42 *VAR54;
                int VAR55, VAR56, VAR57;
                VAR56 = VAR58[0][VAR14->VAR30];
                VAR57 = VAR58[1][VAR14->VAR30];
                FUN4(VAR2->VAR21, "", VAR56, VAR57);
                if (VAR14->VAR31 == 2)
                {
                    VAR11 = VAR14->VAR32 ? 17 : 18;
                    VAR9 = 0;
                    if (VAR56)
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR59[VAR9++] = FUN2(&VAR2->VAR17, VAR56);
                    }
                    else
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR59[VAR9++] = 0;
                    }
                    if (VAR57)
                    {
                        for (VAR8 = 0; VAR8 < 18; VAR8++)
                            VAR14->VAR59[VAR9++] = FUN2(&VAR2->VAR17, VAR57);
                        for (VAR8 = 0; VAR8 < 3; VAR8++)
                            VAR14->VAR59[VAR9++] = 0;
                    }
                    else
                    {
                        for (VAR8 = 0; VAR8 < 21; VAR8++)
                            VAR14->VAR59[VAR9++] = 0;
                    }
                }
                else
                {
                    VAR54 = VAR2->VAR19[VAR6][0].VAR59;
                    VAR9 = 0;
                    for (VAR10 = 0; VAR10 < 4; VAR10++)
                    {
                        VAR11 = VAR10 == 0 ? 6 : 5;
                        if ((VAR14->VAR20 & (0x8 >> VAR10)) == 0)
                        {
                            VAR55 = (VAR10 < 2) ? VAR56 : VAR57;
                            if (VAR55)
                            {
                                for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                                    VAR14->VAR59[VAR9++] = FUN2(&VAR2->VAR17, VAR55);
                            }
                            else
                            {
                                for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                                    VAR14->VAR59[VAR9++] = 0;
                            }
                        }
                        else
                        {
                            for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            {
                                VAR14->VAR59[VAR9] = VAR54[VAR9];
                                VAR9++;
                            }
                        }
                    }
                    VAR14->VAR59[VAR9++] = 0;
                }
            }
            else
            {
                int VAR60, VAR61, VAR55[4], VAR62, VAR63;
                if (VAR14->VAR31 == 2)
                    VAR60 = VAR14->VAR32 ? 2 : 1;
                else
                    VAR60 = 0;
                VAR63 = VAR14->VAR30;
                if ((VAR2->VAR27 & VAR29) && VAR6 == 1)
                {
                    VAR63 >>= 1;
                    if (VAR63 < 180)
                    {
                        FUN17(VAR55, VAR63, 6, 6, 0);
                        VAR61 = 3;
                    }
                    else if (VAR63 < 244)
                    {
                        FUN17(VAR55, VAR63 - 180, 4, 4, 0);
                        VAR61 = 4;
                    }
                    else
                    {
                        FUN17(VAR55, VAR63 - 244, 3, 0, 0);
                        VAR61 = 5;
                    }
                }
                else
                {
                    if (VAR63 < 400)
                    {
                        FUN17(VAR55, VAR63, 5, 4, 4);
                        VAR61 = 0;
                    }
                    else if (VAR63 < 500)
                    {
                        FUN17(VAR55, VAR63 - 400, 5, 4, 0);
                        VAR61 = 1;
                    }
                    else
                    {
                        FUN17(VAR55, VAR63 - 500, 3, 0, 0);
                        VAR61 = 2;
                        VAR14->VAR37 = 1;
                    }
                }
                VAR9 = 0;
                for (VAR10 = 0; VAR10 < 4; VAR10++)
                {
                    VAR11 = VAR64[VAR61][VAR60][VAR10];
                    VAR62 = VAR55[VAR10];
                    if (VAR62)
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR59[VAR9++] = FUN2(&VAR2->VAR17, VAR62);
                    }
                    else
                    {
                        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                            VAR14->VAR59[VAR9++] = 0;
                    }
                }
                for (; VAR9 < 40; VAR9++)
                    VAR14->VAR59[VAR9] = 0;
            }
            FUN18(VAR2, VAR14, VAR15);
            FUN19(VAR2, VAR14, VAR15, VAR12 + VAR14->VAR22);
        }
        if (VAR2->VAR18 == 2)
            FUN20(VAR2, &VAR2->VAR19[0][VAR5], &VAR2->VAR19[1][VAR5]);
        for (VAR6 = 0; VAR6 < VAR2->VAR18; VAR6++)
        {
            VAR14 = &VAR2->VAR19[VAR6][VAR5];
            FUN21(VAR2, VAR14);
            FUN22(VAR2, VAR14);
            FUN23(VAR2, VAR14, &VAR2->VAR65[VAR6][18 * VAR5][0], VAR2->VAR66[VAR6]);
        }
    }
    if (FUN11(&VAR2->VAR17) < 0)
        FUN16(&VAR2->VAR17, -FUN11(&VAR2->VAR17));
    return VAR3 * 18;
}