int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    VAR2->VAR8 = 0;
    assert(VAR2->VAR9 == NULL || VAR2->VAR10 != VAR11 || VAR2->VAR12 == VAR13);
    if (VAR2->VAR14 != VAR15 && VAR2->VAR9 && VAR2->VAR9 != VAR2->VAR16 && VAR2->VAR9->VAR17[0])
    {
        if (VAR2->VAR10 != VAR11 || VAR2->VAR12 == VAR13)
        {
            FUN2(VAR2, VAR2->VAR9);
            if (!VAR2->VAR18)
            {
                for (VAR5 = 0; VAR5 < VAR19; VAR5++)
                {
                    if (VAR2->VAR20[VAR5].VAR17[0] && &VAR2->VAR20[VAR5] != VAR2->VAR16 && VAR2->VAR20[VAR5].VAR21)
                    {
                        FUN3(VAR4, VAR22, "");
                        FUN2(VAR2, &VAR2->VAR20[VAR5]);
                    }
                }
            }
        }
    }
    if (!VAR2->VAR18)
    {
        for (VAR5 = 0; VAR5 < VAR19; VAR5++)
        {
            if (VAR2->VAR20[VAR5].VAR17[0] && !VAR2->VAR20[VAR5].VAR21)
            {
                FUN2(VAR2, &VAR2->VAR20[VAR5]);
            }
        }
        if (VAR2->VAR23 && VAR2->VAR23->VAR17[0] == NULL)
            VAR7 = VAR2->VAR23;
        else
        {
            VAR5 = FUN4(VAR2, 0);
            VAR7 = &VAR2->VAR20[VAR5];
        }
        VAR7->VAR21 = 0;
        if (!VAR2->VAR24)
        {
            if (VAR2->VAR12 == VAR25)
                VAR7->VAR21 = VAR2->VAR26;
            else if (VAR2->VAR14 != VAR15)
                VAR7->VAR21 = 3;
        }
        VAR7->VAR27 = VAR2->VAR27++;
        if (FUN5(VAR2, VAR7, 0) < 0)
            return -1;
        VAR2->VAR23 = VAR7;
        VAR2->VAR23->VAR28 = VAR2->VAR28;
        VAR2->VAR23->VAR29 = !VAR2->VAR30 && !VAR2->VAR31;
    }
    VAR2->VAR23->VAR14 = VAR2->VAR14;
    VAR2->VAR23->VAR32 = VAR2->VAR14 == VAR33;
    FUN6(&VAR2->VAR34, VAR2->VAR23);
    if (VAR2->VAR14 != VAR15)
    {
        VAR2->VAR9 = VAR2->VAR16;
        if (!VAR2->VAR24)
            VAR2->VAR16 = VAR2->VAR23;
    }
    if (VAR2->VAR12 != VAR25)
    {
        if ((VAR2->VAR9 == NULL || VAR2->VAR9->VAR17[0] == NULL) && VAR2->VAR14 != VAR33)
        {
            FUN3(VAR4, VAR22, "");
            VAR5 = FUN4(VAR2, 0);
            VAR2->VAR9 = &VAR2->VAR20[VAR5];
            if (FUN5(VAR2, VAR2->VAR9, 0) < 0)
                return -1;
        }
        if ((VAR2->VAR16 == NULL || VAR2->VAR16->VAR17[0] == NULL) && VAR2->VAR14 == VAR15)
        {
            VAR5 = FUN4(VAR2, 0);
            VAR2->VAR16 = &VAR2->VAR20[VAR5];
            if (FUN5(VAR2, VAR2->VAR16, 0) < 0)
                return -1;
        }
    }
    if (VAR2->VAR9)
        FUN6(&VAR2->VAR35, VAR2->VAR9);
    if (VAR2->VAR16)
        FUN6(&VAR2->VAR36, VAR2->VAR16);
    assert(VAR2->VAR14 == VAR33 || (VAR2->VAR9 && VAR2->VAR9->VAR17[0]));
    if (VAR2->VAR26 != VAR37 && VAR2->VAR10 != VAR11)
    {
        int VAR5;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            if (VAR2->VAR26 == VAR38)
            {
                VAR2->VAR34.VAR17[VAR5] += VAR2->VAR34.VAR39[VAR5];
            }
            VAR2->VAR34.VAR39[VAR5] *= 2;
            VAR2->VAR35.VAR39[VAR5] *= 2;
            VAR2->VAR36.VAR39[VAR5] *= 2;
        }
    }
    VAR2->VAR40 = VAR2->VAR4->VAR40;
    VAR2->VAR41 = VAR4->VAR41;
    if (VAR2->VAR42 || VAR2->VAR12 == VAR43)
    {
        VAR2->VAR44 = VAR2->VAR45;
        VAR2->VAR46 = VAR2->VAR47;
    }
    else if (VAR2->VAR10 == VAR48 || VAR2->VAR10 == VAR49)
    {
        VAR2->VAR44 = VAR2->VAR50;
        VAR2->VAR46 = VAR2->VAR51;
    }
    else
    {
        VAR2->VAR44 = VAR2->VAR52;
        VAR2->VAR46 = VAR2->VAR53;
    }
    if (VAR2->VAR54)
    {
        assert(VAR2->VAR4->VAR55 && VAR2->VAR18);
        FUN7(VAR2);
    }
    if (VAR56 && VAR2->VAR4->VAR57)
        return FUN8(VAR2, VAR4);
    return 0;
}