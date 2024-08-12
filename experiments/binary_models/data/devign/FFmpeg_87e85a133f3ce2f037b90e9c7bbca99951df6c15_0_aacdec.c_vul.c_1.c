static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    const VAR7 *const VAR8 = &VAR2->VAR9[1].VAR8;
    const int VAR10 = VAR8->VAR11;
    const int VAR12 = VAR8->VAR12;
    if (VAR10 != VAR13)
    {
        if (FUN2(VAR6))
        {
            FUN3(VAR2->VAR14, VAR15, "");
            return VAR16;
        }
        VAR4->VAR17[1] = VAR4->VAR17[0];
        VAR4->VAR17[0] = FUN4(VAR6, 2);
        if (VAR10 == VAR18 && VAR4->VAR17[0] != VAR19)
        {
            FUN3(VAR2->VAR14, VAR15, ""
                                            "",
                   VAR4->VAR17[0]);
            VAR4->VAR17[0] = VAR19;
            return VAR16;
        }
        VAR4->VAR20[1] = VAR4->VAR20[0];
        VAR4->VAR20[0] = FUN2(VAR6);
    }
    VAR4->VAR21 = 1;
    VAR4->VAR22[0] = 1;
    if (VAR4->VAR17[0] == VAR23)
    {
        int VAR24;
        VAR4->VAR25 = FUN4(VAR6, 4);
        for (VAR24 = 0; VAR24 < 7; VAR24++)
        {
            if (FUN2(VAR6))
            {
                VAR4->VAR22[VAR4->VAR21 - 1]++;
            }
            else
            {
                VAR4->VAR21++;
                VAR4->VAR22[VAR4->VAR21 - 1] = 1;
            }
        }
        VAR4->VAR26 = 8;
        VAR4->VAR27 = VAR28[VAR12];
        VAR4->VAR29 = VAR30[VAR12];
        VAR4->VAR31 = VAR32[VAR12];
        VAR4->VAR33 = 0;
    }
    else
    {
        VAR4->VAR25 = FUN4(VAR6, 6);
        VAR4->VAR26 = 1;
        if (VAR10 == VAR18 || VAR10 == VAR13)
        {
            if (VAR8->VAR34)
            {
                VAR4->VAR27 = VAR35[VAR12];
                VAR4->VAR29 = VAR36[VAR12];
                VAR4->VAR31 = VAR37[VAR12];
            }
            else
            {
                VAR4->VAR27 = VAR38[VAR12];
                VAR4->VAR29 = VAR39[VAR12];
                VAR4->VAR31 = VAR40[VAR12];
            }
            if (!VAR4->VAR29 || !VAR4->VAR27)
                return VAR41;
        }
        else
        {
            VAR4->VAR27 = VAR42[VAR12];
            VAR4->VAR29 = VAR43[VAR12];
            VAR4->VAR31 = VAR44[VAR12];
        }
        if (VAR10 != VAR13)
        {
            VAR4->VAR33 = FUN2(VAR6);
            VAR4->VAR45 = 0;
        }
        if (VAR4->VAR33)
        {
            if (VAR10 == VAR46)
            {
                if (FUN5(VAR2, VAR4, VAR6))
                {
                    return VAR16;
                }
            }
            else if (VAR10 == VAR47 || VAR10 == VAR48)
            {
                FUN3(VAR2->VAR14, VAR15, "");
                return VAR16;
            }
            else
            {
                if (VAR10 == VAR18)
                {
                    FUN3(VAR2->VAR14, VAR15, "");
                    return VAR49;
                }
                if ((VAR4->VAR50.VAR51 = FUN4(VAR6, 1)))
                    FUN6(&VAR4->VAR50, VAR6, VAR4->VAR25);
            }
        }
    }
    if (VAR4->VAR25 > VAR4->VAR29)
    {
        FUN3(VAR2->VAR14, VAR15, ""
                                        "",
               VAR4->VAR25, VAR4->VAR29);
        return VAR16;
    }
    return 0;
}