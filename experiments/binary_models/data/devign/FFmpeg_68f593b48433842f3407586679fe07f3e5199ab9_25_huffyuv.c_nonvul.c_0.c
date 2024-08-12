static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const int VAR11 = VAR9->VAR11;
    const int VAR12 = VAR9->VAR11 >> 1;
    const int VAR13 = VAR9->VAR13;
    int VAR14, VAR15, VAR16;
    VAR17 *const VAR18 = &VAR9->VAR19;
    VAR17 *VAR19 = VAR3;
    *VAR4 = 0;
    if (VAR7 == 0)
        return 0;
    FUN2((VAR20 *)VAR9->VAR21, (VAR20 *)VAR6, VAR7 / 4);
    FUN3(&VAR9->VAR22, VAR9->VAR21, VAR7 * 8);
    VAR18->VAR23 = 0;
    if (VAR2->FUN4(VAR2, VAR18) < 0)
    {
        fprintf(VAR24, "");
        return -1;
    }
    VAR14 = VAR9->VAR25 ? VAR18->VAR26[0] * 2 : VAR18->VAR26[0];
    VAR15 = VAR9->VAR25 ? VAR18->VAR26[1] * 2 : VAR18->VAR26[1];
    VAR16 = VAR9->VAR25 ? VAR18->VAR26[2] * 2 : VAR18->VAR26[2];
    VAR9->VAR27 = 0;
    if (VAR9->VAR28 < 24)
    {
        int VAR29, VAR30;
        int VAR31, VAR32, VAR33;
        int VAR34, VAR35, VAR36;
        if (VAR9->VAR37)
        {
            VAR18->VAR3[0][3] = FUN5(&VAR9->VAR22, 8);
            VAR18->VAR3[0][2] = FUN5(&VAR9->VAR22, 8);
            VAR18->VAR3[0][1] = FUN5(&VAR9->VAR22, 8);
            VAR18->VAR3[0][0] = FUN5(&VAR9->VAR22, 8);
            fprintf(VAR24, "");
            return -1;
        }
        else
        {
            VAR33 = VAR18->VAR3[2][0] = FUN5(&VAR9->VAR22, 8);
            VAR31 = VAR18->VAR3[0][1] = FUN5(&VAR9->VAR22, 8);
            VAR32 = VAR18->VAR3[1][0] = FUN5(&VAR9->VAR22, 8);
            VAR18->VAR3[0][0] = FUN5(&VAR9->VAR22, 8);
            switch (VAR9->VAR38)
            {
            case VAR39:
            case VAR40:
                FUN6(VAR9, VAR11 - 2);
                VAR31 = FUN7(VAR18->VAR3[0] + 2, VAR9->VAR41[0], VAR11 - 2, VAR31);
                if (!(VAR9->VAR42 & VAR43))
                {
                    VAR32 = FUN7(VAR18->VAR3[1] + 1, VAR9->VAR41[1], VAR12 - 1, VAR32);
                    VAR33 = FUN7(VAR18->VAR3[2] + 1, VAR9->VAR41[2], VAR12 - 1, VAR33);
                }
                for (VAR30 = VAR29 = 1; VAR29 < VAR9->VAR13; VAR29++, VAR30++)
                {
                    VAR5 *VAR44, *VAR45, *VAR46;
                    if (VAR9->VAR28 == 12)
                    {
                        FUN8(VAR9, VAR11);
                        VAR44 = VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29;
                        VAR31 = FUN7(VAR44, VAR9->VAR41[0], VAR11, VAR31);
                        if (VAR9->VAR38 == VAR40)
                        {
                            if (VAR29 > VAR9->VAR25)
                                VAR9->VAR47.FUN9(VAR44, VAR44 - VAR14, VAR11);
                        }
                        VAR29++;
                        if (VAR29 >= VAR9->VAR13)
                            break;
                    }
                    FUN10(VAR9, VAR29);
                    VAR44 = VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29;
                    VAR45 = VAR18->VAR3[1] + VAR18->VAR26[1] * VAR30;
                    VAR46 = VAR18->VAR3[2] + VAR18->VAR26[2] * VAR30;
                    FUN6(VAR9, VAR11);
                    VAR31 = FUN7(VAR44, VAR9->VAR41[0], VAR11, VAR31);
                    if (!(VAR9->VAR42 & VAR43))
                    {
                        VAR32 = FUN7(VAR45, VAR9->VAR41[1], VAR12, VAR32);
                        VAR33 = FUN7(VAR46, VAR9->VAR41[2], VAR12, VAR33);
                    }
                    if (VAR9->VAR38 == VAR40)
                    {
                        if (VAR30 > VAR9->VAR25)
                        {
                            VAR9->VAR47.FUN9(VAR44, VAR44 - VAR14, VAR11);
                            if (!(VAR9->VAR42 & VAR43))
                            {
                                VAR9->VAR47.FUN9(VAR45, VAR45 - VAR15, VAR12);
                                VAR9->VAR47.FUN9(VAR46, VAR46 - VAR16, VAR12);
                            }
                        }
                    }
                }
                FUN10(VAR9, VAR13);
                break;
            case VAR48:
                FUN6(VAR9, VAR11 - 2);
                VAR31 = FUN7(VAR18->VAR3[0] + 2, VAR9->VAR41[0], VAR11 - 2, VAR31);
                if (!(VAR9->VAR42 & VAR43))
                {
                    VAR32 = FUN7(VAR18->VAR3[1] + 1, VAR9->VAR41[1], VAR12 - 1, VAR32);
                    VAR33 = FUN7(VAR18->VAR3[2] + 1, VAR9->VAR41[2], VAR12 - 1, VAR33);
                }
                VAR30 = VAR29 = 1;
                if (VAR9->VAR25)
                {
                    FUN6(VAR9, VAR11);
                    VAR31 = FUN7(VAR18->VAR3[0] + VAR18->VAR26[0], VAR9->VAR41[0], VAR11, VAR31);
                    if (!(VAR9->VAR42 & VAR43))
                    {
                        VAR32 = FUN7(VAR18->VAR3[1] + VAR18->VAR26[2], VAR9->VAR41[1], VAR12, VAR32);
                        VAR33 = FUN7(VAR18->VAR3[2] + VAR18->VAR26[1], VAR9->VAR41[2], VAR12, VAR33);
                    }
                    VAR29++;
                    VAR30++;
                }
                FUN6(VAR9, 4);
                VAR31 = FUN7(VAR18->VAR3[0] + VAR14, VAR9->VAR41[0], 4, VAR31);
                if (!(VAR9->VAR42 & VAR43))
                {
                    VAR32 = FUN7(VAR18->VAR3[1] + VAR15, VAR9->VAR41[1], 2, VAR32);
                    VAR33 = FUN7(VAR18->VAR3[2] + VAR16, VAR9->VAR41[2], 2, VAR33);
                }
                VAR34 = VAR18->VAR3[0][3];
                FUN6(VAR9, VAR11 - 4);
                FUN11(VAR18->VAR3[0] + VAR14 + 4, VAR18->VAR3[0] + 4, VAR9->VAR41[0], VAR11 - 4, &VAR31, &VAR34);
                if (!(VAR9->VAR42 & VAR43))
                {
                    VAR35 = VAR18->VAR3[1][1];
                    VAR36 = VAR18->VAR3[2][1];
                    FUN11(VAR18->VAR3[1] + VAR15 + 2, VAR18->VAR3[1] + 2, VAR9->VAR41[1], VAR12 - 2, &VAR32, &VAR35);
                    FUN11(VAR18->VAR3[2] + VAR16 + 2, VAR18->VAR3[2] + 2, VAR9->VAR41[2], VAR12 - 2, &VAR33, &VAR36);
                }
                VAR29++;
                VAR30++;
                for (; VAR29 < VAR13; VAR29++, VAR30++)
                {
                    VAR5 *VAR44, *VAR45, *VAR46;
                    if (VAR9->VAR28 == 12)
                    {
                        while (2 * VAR30 > VAR29)
                        {
                            FUN8(VAR9, VAR11);
                            VAR44 = VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29;
                            FUN11(VAR44, VAR44 - VAR14, VAR9->VAR41[0], VAR11, &VAR31, &VAR34);
                            VAR29++;
                        }
                        if (VAR29 >= VAR13)
                            break;
                    }
                    FUN10(VAR9, VAR29);
                    FUN6(VAR9, VAR11);
                    VAR44 = VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29;
                    VAR45 = VAR18->VAR3[1] + VAR18->VAR26[1] * VAR30;
                    VAR46 = VAR18->VAR3[2] + VAR18->VAR26[2] * VAR30;
                    FUN11(VAR44, VAR44 - VAR14, VAR9->VAR41[0], VAR11, &VAR31, &VAR34);
                    if (!(VAR9->VAR42 & VAR43))
                    {
                        FUN11(VAR45, VAR45 - VAR15, VAR9->VAR41[1], VAR12, &VAR32, &VAR35);
                        FUN11(VAR46, VAR46 - VAR16, VAR9->VAR41[2], VAR12, &VAR33, &VAR36);
                    }
                }
                FUN10(VAR9, VAR13);
                break;
            }
        }
    }
    else
    {
        int VAR29;
        int VAR49, VAR50, VAR51;
        const int VAR52 = (VAR13 - 1) * VAR18->VAR26[0];
        if (VAR9->VAR28 == 32)
        {
            VAR18->VAR3[0][VAR52 + 3] = FUN5(&VAR9->VAR22, 8);
            VAR49 = VAR18->VAR3[0][VAR52 + 2] = FUN5(&VAR9->VAR22, 8);
            VAR50 = VAR18->VAR3[0][VAR52 + 1] = FUN5(&VAR9->VAR22, 8);
            VAR51 = VAR18->VAR3[0][VAR52 + 0] = FUN5(&VAR9->VAR22, 8);
        }
        else
        {
            VAR49 = VAR18->VAR3[0][VAR52 + 2] = FUN5(&VAR9->VAR22, 8);
            VAR50 = VAR18->VAR3[0][VAR52 + 1] = FUN5(&VAR9->VAR22, 8);
            VAR51 = VAR18->VAR3[0][VAR52 + 0] = FUN5(&VAR9->VAR22, 8);
            FUN12(&VAR9->VAR22, 8);
        }
        if (VAR9->VAR53)
        {
            switch (VAR9->VAR38)
            {
            case VAR39:
            case VAR40:
                FUN13(VAR9, VAR11 - 1);
                FUN14(VAR18->VAR3[0] + VAR52 + 4, VAR9->VAR41[0], VAR11 - 1, &VAR49, &VAR50, &VAR51);
                for (VAR29 = VAR9->VAR13 - 2; VAR29 >= 0; VAR29--)
                {
                    FUN13(VAR9, VAR11);
                    FUN14(VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29, VAR9->VAR41[0], VAR11, &VAR49, &VAR50, &VAR51);
                    if (VAR9->VAR38 == VAR40)
                    {
                        if ((VAR29 & VAR9->VAR25) == 0)
                        {
                            VAR9->VAR47.FUN9(VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29, VAR18->VAR3[0] + VAR18->VAR26[0] * VAR29 + VAR14, VAR14);
                        }
                    }
                }
                FUN10(VAR9, VAR13);
                break;
            default:
                fprintf(VAR24, "");
            }
        }
        else
        {
            fprintf(VAR24, "");
            return -1;
        }
    }
    FUN15();
    *VAR19 = *VAR18;
    VAR2->FUN16(VAR2, VAR18);
    *VAR4 = sizeof(VAR17);
    return (FUN17(&VAR9->VAR22) + 7) >> 3;
}