int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    VAR2->VAR8 = 0;
    assert(VAR2->VAR9 == NULL || VAR2->VAR10 != VAR11 || VAR2->VAR12 == VAR13);
    if (VAR2->VAR14 != VAR15 && VAR2->VAR9 && VAR2->VAR9 != VAR2->VAR16 && VAR2->VAR9->VAR17.VAR18[0])
    {
        if (VAR2->VAR10 != VAR11 || VAR2->VAR12 == VAR13)
        {
            FUN2(VAR2, VAR2->VAR9);
            if (!VAR2->VAR19)
            {
                for (VAR5 = 0; VAR5 < VAR2->VAR20; VAR5++)
                {
                    if (VAR2->VAR21[VAR5].VAR17.VAR18[0] && &VAR2->VAR21[VAR5] != VAR2->VAR16 && VAR2->VAR21[VAR5].VAR17.VAR22)
                    {
                        FUN3(VAR4, VAR23, "");
                        FUN2(VAR2, &VAR2->VAR21[VAR5]);
                    }
                }
            }
        }
    }
    if (!VAR2->VAR19)
    {
        FUN4(VAR2, 1);
        if (VAR2->VAR24 && VAR2->VAR24->VAR17.VAR18[0] == NULL)
            VAR7 = VAR2->VAR24;
        else
        {
            VAR5 = FUN5(VAR2, 0);
            VAR7 = &VAR2->VAR21[VAR5];
        }
        VAR7->VAR17.VAR22 = 0;
        if (!VAR2->VAR25)
        {
            if (VAR2->VAR12 == VAR26)
                VAR7->VAR17.VAR22 = VAR2->VAR27;
            else if (VAR2->VAR14 != VAR15)
                VAR7->VAR17.VAR22 = 3;
        }
        VAR7->VAR17.VAR28 = VAR2->VAR28++;
        if (FUN6(VAR2, VAR7, 0) < 0)
            return -1;
        VAR2->VAR24 = VAR7;
        VAR2->VAR24->VAR17.VAR29 = VAR2->VAR29;
        if (VAR2->VAR12 == VAR30 || VAR2->VAR12 == VAR31)
        {
            if (VAR2->VAR27 != VAR32)
                VAR2->VAR24->VAR17.VAR29 = (VAR2->VAR27 == VAR33) == VAR2->VAR34;
        }
        VAR2->VAR24->VAR17.VAR35 = !VAR2->VAR36 && !VAR2->VAR37;
        VAR2->VAR24->VAR38 = VAR2->VAR27 != VAR32;
    }
    VAR2->VAR24->VAR17.VAR14 = VAR2->VAR14;
    VAR2->VAR24->VAR17.VAR39 = VAR2->VAR14 == VAR40;
    FUN7(&VAR2->VAR41, VAR2->VAR24);
    if (VAR2->VAR14 != VAR15)
    {
        VAR2->VAR9 = VAR2->VAR16;
        if (!VAR2->VAR25)
            VAR2->VAR16 = VAR2->VAR24;
    }
    if (VAR2->VAR12 != VAR26)
    {
        if ((VAR2->VAR9 == NULL || VAR2->VAR9->VAR17.VAR18[0] == NULL) && (VAR2->VAR14 != VAR40 || VAR2->VAR27 != VAR32))
        {
            if (VAR2->VAR14 != VAR40)
                FUN3(VAR4, VAR23, "");
            else if (VAR2->VAR27 != VAR32)
                FUN3(VAR4, VAR42, "");
            VAR5 = FUN5(VAR2, 0);
            VAR2->VAR9 = &VAR2->VAR21[VAR5];
            if (FUN6(VAR2, VAR2->VAR9, 0) < 0)
                return -1;
            FUN8((VAR43 *)VAR2->VAR9, VAR44, 0);
            FUN8((VAR43 *)VAR2->VAR9, VAR44, 1);
        }
        if ((VAR2->VAR16 == NULL || VAR2->VAR16->VAR17.VAR18[0] == NULL) && VAR2->VAR14 == VAR15)
        {
            VAR5 = FUN5(VAR2, 0);
            VAR2->VAR16 = &VAR2->VAR21[VAR5];
            if (FUN6(VAR2, VAR2->VAR16, 0) < 0)
                return -1;
            FUN8((VAR43 *)VAR2->VAR16, VAR44, 0);
            FUN8((VAR43 *)VAR2->VAR16, VAR44, 1);
        }
    }
    if (VAR2->VAR9)
        FUN7(&VAR2->VAR45, VAR2->VAR9);
    if (VAR2->VAR16)
        FUN7(&VAR2->VAR46, VAR2->VAR16);
    assert(VAR2->VAR14 == VAR40 || (VAR2->VAR9 && VAR2->VAR9->VAR17.VAR18[0]));
    if (VAR2->VAR27 != VAR32 && VAR2->VAR10 != VAR11)
    {
        int VAR5;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            if (VAR2->VAR27 == VAR47)
            {
                VAR2->VAR41.VAR17.VAR18[VAR5] += VAR2->VAR41.VAR17.VAR48[VAR5];
            }
            VAR2->VAR41.VAR17.VAR48[VAR5] *= 2;
            VAR2->VAR45.VAR17.VAR48[VAR5] *= 2;
            VAR2->VAR46.VAR17.VAR48[VAR5] *= 2;
        }
    }
    VAR2->VAR49 = VAR4->VAR49;
    if (VAR2->VAR50 || VAR2->VAR12 == VAR31)
    {
        VAR2->VAR51 = VAR2->VAR52;
        VAR2->VAR53 = VAR2->VAR54;
    }
    else if (VAR2->VAR10 == VAR55 || VAR2->VAR10 == VAR56)
    {
        VAR2->VAR51 = VAR2->VAR57;
        VAR2->VAR53 = VAR2->VAR58;
    }
    else
    {
        VAR2->VAR51 = VAR2->VAR59;
        VAR2->VAR53 = VAR2->VAR60;
    }
    if (VAR2->VAR61)
    {
        assert(VAR2->VAR4->VAR62 && VAR2->VAR19);
        FUN9(VAR2);
    }
    if (VAR63 && VAR2->VAR4->VAR64)
        return FUN10(VAR2, VAR4);
    return 0;
}