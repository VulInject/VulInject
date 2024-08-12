int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10, *VAR11, VAR12, VAR13, VAR14, VAR15;
    bool VAR16 = false;
    int64_t VAR17, VAR18;
    int VAR19, VAR20, VAR21 = 0, VAR22;
    int VAR23;
    assert(VAR5 >= -1 && VAR5 <= 1);
    VAR11 = NULL;
    VAR10 = NULL;
    VAR14 = VAR4 * sizeof(VAR9);
    VAR7->VAR24 = true;
    if (VAR3 != VAR7->VAR3)
    {
        VAR10 = FUN2(FUN3(VAR14, 512));
        if (VAR14 && VAR10 == NULL)
        {
            VAR23 = -VAR25;
            goto VAR26;
        }
        VAR16 = true;
        VAR23 = FUN4(VAR2->VAR27, VAR3, VAR10, VAR14);
        if (VAR23 < 0)
        {
            goto VAR26;
        }
        for (VAR19 = 0; VAR19 < VAR4; VAR19++)
        {
            FUN5(&VAR10[VAR19]);
        }
    }
    else
    {
        assert(VAR4 == VAR7->VAR4);
        VAR10 = VAR7->VAR10;
        VAR16 = false;
    }
    for (VAR19 = 0; VAR19 < VAR4; VAR19++)
    {
        VAR12 = VAR10[VAR19];
        if (VAR12)
        {
            VAR18 = VAR12;
            VAR12 &= VAR28;
            if (FUN6(VAR7, VAR12))
            {
                FUN7(VAR2, true, -1, -1, "" VAR29 "", VAR12, VAR19);
                VAR23 = -VAR30;
                goto VAR26;
            }
            VAR23 = FUN8(VAR2, VAR7->VAR31, VAR12, (void **)&VAR11);
            if (VAR23 < 0)
            {
                goto VAR26;
            }
            for (VAR20 = 0; VAR20 < VAR7->VAR32; VAR20++)
            {
                uint64_t VAR33;
                uint64_t VAR34;
                VAR13 = FUN9(VAR11[VAR20]);
                VAR17 = VAR13;
                VAR13 &= ~VAR35;
                VAR34 = VAR13 & VAR36;
                switch (FUN10(VAR13))
                {
                case VAR37:
                    VAR22 = ((VAR13 >> VAR7->VAR38) & VAR7->VAR39) + 1;
                    if (VAR5 != 0)
                    {
                        VAR23 = FUN11(VAR2, (VAR13 & VAR7->VAR40) & ~511, VAR22 * 512, FUN12(VAR5), VAR5 < 0, VAR41);
                        if (VAR23 < 0)
                        {
                            goto VAR26;
                        }
                    }
                    VAR15 = 2;
                    break;
                case VAR42:
                case VAR43:
                    if (FUN6(VAR7, VAR34))
                    {
                        FUN7(VAR2, true, -1, -1, ""
                                                                  "" VAR29 "" VAR29 "",
                                                VAR34, VAR12, VAR20);
                        VAR23 = -VAR30;
                        goto VAR26;
                    }
                    VAR33 = VAR34 >> VAR7->VAR44;
                    if (!VAR33)
                    {
                        VAR15 = 0;
                        break;
                    }
                    if (VAR5 != 0)
                    {
                        VAR23 = FUN13(VAR2, VAR33, FUN12(VAR5), VAR5 < 0, VAR41);
                        if (VAR23 < 0)
                        {
                            goto VAR26;
                        }
                    }
                    VAR23 = FUN14(VAR2, VAR33, &VAR15);
                    if (VAR23 < 0)
                    {
                        goto VAR26;
                    }
                    break;
                case VAR45:
                    VAR15 = 0;
                    break;
                default:
                    FUN15();
                }
                if (VAR15 == 1)
                {
                    VAR13 |= VAR35;
                }
                if (VAR13 != VAR17)
                {
                    if (VAR5 > 0)
                    {
                        FUN16(VAR2, VAR7->VAR31, VAR7->VAR46);
                    }
                    VAR11[VAR20] = FUN17(VAR13);
                    FUN18(VAR2, VAR7->VAR31, VAR11);
                }
            }
            FUN19(VAR2, VAR7->VAR31, (void **)&VAR11);
            if (VAR5 != 0)
            {
                VAR23 = FUN13(VAR2, VAR12 >> VAR7->VAR44, FUN12(VAR5), VAR5 < 0, VAR41);
                if (VAR23 < 0)
                {
                    goto VAR26;
                }
            }
            VAR23 = FUN14(VAR2, VAR12 >> VAR7->VAR44, &VAR15);
            if (VAR23 < 0)
            {
                goto VAR26;
            }
            else if (VAR15 == 1)
            {
                VAR12 |= VAR35;
            }
            if (VAR12 != VAR18)
            {
                VAR10[VAR19] = VAR12;
                VAR21 = 1;
            }
        }
    }
    VAR23 = FUN20(VAR2);
VAR26:
    if (VAR11)
    {
        FUN19(VAR2, VAR7->VAR31, (void **)&VAR11);
    }
    VAR7->VAR24 = false;
    FUN21(VAR2, VAR23);
    if (VAR23 == 0 && VAR5 >= 0 && VAR21)
    {
        for (VAR19 = 0; VAR19 < VAR4; VAR19++)
        {
            FUN22(&VAR10[VAR19]);
        }
        VAR23 = FUN23(VAR2->VAR27, VAR3, VAR10, VAR14);
        for (VAR19 = 0; VAR19 < VAR4; VAR19++)
        {
            FUN5(&VAR10[VAR19]);
        }
    }
    if (VAR16)
        FUN24(VAR10);
    return VAR23;
}