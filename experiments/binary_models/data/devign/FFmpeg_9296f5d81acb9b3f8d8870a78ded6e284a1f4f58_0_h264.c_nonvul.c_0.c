static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    int VAR8, VAR9;
    int VAR10 = 0;
    VAR11 *VAR12;
    if ((VAR7->VAR13->VAR14 & VAR15) && VAR5 == 0)
        FUN2(VAR2->VAR7.VAR13, VAR16, "");
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        int VAR17, VAR18;
        if (VAR7->VAR13->VAR14 & VAR15)
            FUN2(VAR2->VAR7.VAR13, VAR16, "", VAR2->VAR4[VAR8].VAR19, VAR2->VAR4[VAR8].VAR20, VAR2->VAR4[VAR8].VAR21);
        switch (VAR4[VAR8].VAR19)
        {
        case VAR22:
            if (VAR7->VAR13->VAR14 & VAR15)
                FUN2(VAR2->VAR7.VAR13, VAR16, "", VAR2->VAR4[VAR8].VAR20, VAR2->VAR23);
            VAR18 = FUN3(VAR2, VAR4[VAR8].VAR20, &VAR17);
            VAR12 = FUN4(VAR2, VAR18, &VAR9);
            if (VAR12)
            {
                if (FUN5(VAR2, VAR12, VAR17 ^ VAR24))
                    FUN6(VAR2, VAR9);
            }
            else if (VAR7->VAR13->VAR14 & VAR15)
                FUN2(VAR2->VAR7.VAR13, VAR16, "");
            break;
        case VAR25:
            if (VAR26 && VAR4[VAR8].VAR21 < VAR2->VAR27 && VAR2->VAR28[VAR4[VAR8].VAR21]->VAR18 == VAR4[VAR8].VAR20 / 2)
            {
            }
            else
            {
                int VAR18 = VAR4[VAR8].VAR20 >> VAR26;
                VAR12 = FUN7(VAR2, VAR4[VAR8].VAR21);
                if (VAR12)
                    FUN5(VAR2, VAR12, 0);
                VAR2->VAR28[VAR4[VAR8].VAR21] = FUN8(VAR2, VAR18);
                if (VAR2->VAR28[VAR4[VAR8].VAR21])
                {
                    VAR2->VAR28[VAR4[VAR8].VAR21]->VAR28 = 1;
                    VAR2->VAR27++;
                }
            }
            break;
        case VAR29:
            VAR9 = FUN3(VAR2, VAR4[VAR8].VAR21, &VAR17);
            VAR12 = VAR2->VAR28[VAR9];
            if (VAR12)
            {
                if (FUN5(VAR2, VAR12, VAR17 ^ VAR24))
                    FUN9(VAR2, VAR9);
            }
            else if (VAR7->VAR13->VAR14 & VAR15)
                FUN2(VAR2->VAR7.VAR13, VAR16, "");
            break;
        case VAR30:
            if (VAR2->VAR28[VAR4[VAR8].VAR21] != VAR7->VAR31)
            {
                VAR12 = FUN7(VAR2, VAR4[VAR8].VAR21);
                if (VAR12)
                    FUN5(VAR2, VAR12, 0);
                VAR2->VAR28[VAR4[VAR8].VAR21] = VAR7->VAR31;
                VAR2->VAR28[VAR4[VAR8].VAR21]->VAR28 = 1;
                VAR2->VAR27++;
            }
            VAR7->VAR31->VAR32 |= VAR7->VAR33;
            VAR10 = 1;
            break;
        case VAR34:
            assert(VAR4[VAR8].VAR21 <= 16);
            for (VAR9 = VAR4[VAR8].VAR21; VAR9 < 16; VAR9++)
            {
                VAR12 = FUN7(VAR2, VAR9);
                if (VAR12)
                    FUN5(VAR2, VAR12, 0);
            }
            break;
        case VAR35:
            while (VAR2->VAR23)
            {
                VAR12 = FUN8(VAR2, VAR2->VAR36[0]->VAR18);
                if (VAR12)
                    FUN5(VAR2, VAR12, 0);
            }
            for (VAR9 = 0; VAR9 < 16; VAR9++)
            {
                VAR12 = FUN7(VAR2, VAR9);
                if (VAR12)
                    FUN5(VAR2, VAR12, 0);
            }
            VAR7->VAR31->VAR37 = VAR7->VAR31->VAR38[0] = VAR7->VAR31->VAR38[1] = VAR2->VAR39 = VAR2->VAR40 = VAR2->VAR18 = VAR7->VAR31->VAR18 = 0;
            break;
        default:
            assert(0);
        }
    }
    if (!VAR10 && VAR26 && !VAR7->VAR41 && VAR7->VAR31->VAR32)
    {
        if (VAR2->VAR23 && VAR2->VAR36[0] == VAR7->VAR31)
        {
            VAR7->VAR31->VAR32 = VAR24;
        }
        else if (VAR7->VAR31->VAR28)
        {
            FUN2(VAR2->VAR7.VAR13, VAR42, ""
                                             ""
                                             ""
                                             "");
        }
        else
        {
            assert(0);
        }
        VAR10 = 1;
    }
    if (!VAR10)
    {
        VAR12 = FUN8(VAR2, VAR7->VAR31->VAR18);
        if (VAR12)
        {
            FUN5(VAR2, VAR12, 0);
            FUN2(VAR2->VAR7.VAR13, VAR42, "");
        }
        if (VAR2->VAR23)
            memmove(&VAR2->VAR36[1], &VAR2->VAR36[0], VAR2->VAR23 * sizeof(VAR11 *));
        VAR2->VAR36[0] = VAR7->VAR31;
        VAR2->VAR36[0]->VAR28 = 0;
        VAR2->VAR23++;
        VAR7->VAR31->VAR32 |= VAR7->VAR33;
    }
    if (VAR2->VAR27 + VAR2->VAR23 > VAR2->VAR43.VAR44)
    {
        FUN2(VAR2->VAR7.VAR13, VAR42, ""
                                         "");
        if (VAR2->VAR27 && !VAR2->VAR23)
        {
            for (VAR8 = 0; VAR8 < 16; ++VAR8)
                if (VAR2->VAR28[VAR8])
                    break;
            assert(VAR8 < 16);
            VAR12 = VAR2->VAR28[VAR8];
            FUN9(VAR2, VAR8);
        }
        else
        {
            VAR12 = VAR2->VAR36[VAR2->VAR23 - 1];
            FUN6(VAR2, VAR2->VAR23 - 1);
        }
        FUN5(VAR2, VAR12, 0);
    }
    FUN10(VAR2);
    FUN11(VAR2);
    return 0;
}