int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10, *VAR11, VAR12, VAR13, VAR14, VAR15;
    int64_t VAR16, VAR17;
    int VAR18, VAR19, VAR20 = 0, VAR21, VAR22;
    int VAR23;
    VAR11 = NULL;
    VAR10 = NULL;
    VAR14 = VAR4 * sizeof(VAR9);
    if (VAR3 != VAR7->VAR3)
    {
        VAR10 = FUN2(FUN3(VAR14, 512));
        VAR15 = 1;
        VAR23 = FUN4(VAR2->VAR24, VAR3, VAR10, VAR14);
        if (VAR23 < 0)
        {
            goto VAR25;
        }
        for (VAR18 = 0; VAR18 < VAR4; VAR18++)
            FUN5(&VAR10[VAR18]);
    }
    else
    {
        assert(VAR4 == VAR7->VAR4);
        VAR10 = VAR7->VAR10;
        VAR15 = 0;
    }
    for (VAR18 = 0; VAR18 < VAR4; VAR18++)
    {
        VAR12 = VAR10[VAR18];
        if (VAR12)
        {
            VAR17 = VAR12;
            VAR12 &= VAR26;
            VAR23 = FUN6(VAR2, VAR7->VAR27, VAR12, (void **)&VAR11);
            if (VAR23 < 0)
            {
                goto VAR25;
            }
            for (VAR19 = 0; VAR19 < VAR7->VAR28; VAR19++)
            {
                VAR13 = FUN7(VAR11[VAR19]);
                if (VAR13 != 0)
                {
                    VAR16 = VAR13;
                    VAR13 &= ~VAR29;
                    if (VAR13 & VAR30)
                    {
                        VAR21 = ((VAR13 >> VAR7->VAR31) & VAR7->VAR32) + 1;
                        if (VAR5 != 0)
                        {
                            int VAR23;
                            VAR23 = FUN8(VAR2, (VAR13 & VAR7->VAR33) & ~511, VAR21 * 512, VAR5);
                            if (VAR23 < 0)
                            {
                                goto VAR25;
                            }
                        }
                        VAR22 = 2;
                    }
                    else
                    {
                        uint64_t VAR34 = (VAR13 & VAR35) >> VAR7->VAR36;
                        if (VAR5 != 0)
                        {
                            VAR22 = FUN9(VAR2, VAR34, VAR5);
                        }
                        else
                        {
                            VAR22 = FUN10(VAR2, VAR34);
                        }
                        if (VAR22 < 0)
                        {
                            VAR23 = VAR22;
                            goto VAR25;
                        }
                    }
                    if (VAR22 == 1)
                    {
                        VAR13 |= VAR29;
                    }
                    if (VAR13 != VAR16)
                    {
                        if (VAR5 > 0)
                        {
                            FUN11(VAR2, VAR7->VAR27, VAR7->VAR37);
                        }
                        VAR11[VAR19] = FUN12(VAR13);
                        FUN13(VAR7->VAR27, VAR11);
                    }
                }
            }
            VAR23 = FUN14(VAR2, VAR7->VAR27, (void **)&VAR11);
            if (VAR23 < 0)
            {
                goto VAR25;
            }
            if (VAR5 != 0)
            {
                VAR22 = FUN9(VAR2, VAR12 >> VAR7->VAR36, VAR5);
            }
            else
            {
                VAR22 = FUN10(VAR2, VAR12 >> VAR7->VAR36);
            }
            if (VAR22 < 0)
            {
                VAR23 = VAR22;
                goto VAR25;
            }
            else if (VAR22 == 1)
            {
                VAR12 |= VAR29;
            }
            if (VAR12 != VAR17)
            {
                VAR10[VAR18] = VAR12;
                VAR20 = 1;
            }
        }
    }
    VAR23 = FUN15(VAR2);
VAR25:
    if (VAR11)
    {
        FUN14(VAR2, VAR7->VAR27, (void **)&VAR11);
    }
    if (VAR5 >= 0 && VAR20)
    {
        for (VAR18 = 0; VAR18 < VAR4; VAR18++)
            FUN16(&VAR10[VAR18]);
        if (FUN17(VAR2->VAR24, VAR3, VAR10, VAR14) < 0)
            goto VAR25;
        for (VAR18 = 0; VAR18 < VAR4; VAR18++)
            FUN5(&VAR10[VAR18]);
    }
    if (VAR15)
        FUN18(VAR10);
    return VAR23;
}