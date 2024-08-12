int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR7 *VAR8;
    VAR2->VAR9 = 0;
    if (VAR2->VAR10 != VAR11 && VAR2->VAR12 && VAR2->VAR12 != VAR2->VAR13 && VAR2->VAR12->VAR14->VAR15[0])
    {
        FUN2(VAR2->VAR4, VAR2->VAR12);
    }
    for (VAR5 = 0; VAR5 < VAR16; VAR5++)
    {
        if (&VAR2->VAR17[VAR5] != VAR2->VAR12 && &VAR2->VAR17[VAR5] != VAR2->VAR13 && VAR2->VAR17[VAR5].VAR18 && !VAR2->VAR17[VAR5].VAR19)
        {
            FUN2(VAR2->VAR4, &VAR2->VAR17[VAR5]);
        }
    }
    FUN2(VAR2->VAR4, &VAR2->VAR20);
    for (VAR5 = 0; VAR5 < VAR16; VAR5++)
    {
        if (!VAR2->VAR17[VAR5].VAR18)
            FUN2(VAR2->VAR4, &VAR2->VAR17[VAR5]);
    }
    if (VAR2->VAR21 && !VAR2->VAR21->VAR14->VAR15[0])
    {
        VAR8 = VAR2->VAR21;
    }
    else
    {
        VAR5 = FUN3(VAR2->VAR4, VAR2->VAR17, 0);
        if (VAR5 < 0)
        {
            FUN4(VAR2->VAR4, VAR22, "");
            return VAR5;
        }
        VAR8 = &VAR2->VAR17[VAR5];
    }
    VAR8->VAR18 = 0;
    if (!VAR2->VAR23)
    {
        if (VAR2->VAR10 != VAR11)
            VAR8->VAR18 = 3;
    }
    VAR8->VAR14->VAR24 = VAR2->VAR24++;
    if (FUN5(VAR2, VAR8, 0) < 0)
        return -1;
    VAR2->VAR21 = VAR8;
    VAR2->VAR21->VAR14->VAR25 = VAR2->VAR25;
    if (VAR2->VAR26 == VAR27 || VAR2->VAR26 == VAR28)
    {
        if (VAR2->VAR29 != VAR30)
            VAR2->VAR21->VAR14->VAR25 = (VAR2->VAR29 == VAR31) == VAR2->VAR32;
    }
    VAR2->VAR21->VAR14->VAR33 = !VAR2->VAR34 && !VAR2->VAR35;
    VAR2->VAR21->VAR36 = VAR2->VAR29 != VAR30;
    VAR2->VAR21->VAR14->VAR10 = VAR2->VAR10;
    VAR2->VAR21->VAR14->VAR37 = VAR2->VAR10 == VAR38;
    if ((VAR6 = FUN6(VAR2->VAR4, &VAR2->VAR20, VAR2->VAR21)) < 0)
        return VAR6;
    if (VAR2->VAR10 != VAR11)
    {
        VAR2->VAR12 = VAR2->VAR13;
        if (!VAR2->VAR23)
            VAR2->VAR13 = VAR2->VAR21;
    }
    FUN7(VAR2->VAR4, "", VAR2->VAR12, VAR2->VAR13, VAR2->VAR21, VAR2->VAR12 ? VAR2->VAR12->VAR14->VAR39[0] : NULL, VAR2->VAR13 ? VAR2->VAR13->VAR14->VAR39[0] : NULL, VAR2->VAR21 ? VAR2->VAR21->VAR14->VAR39[0] : NULL, VAR2->VAR10, VAR2->VAR23);
    if ((!VAR2->VAR12 || !VAR2->VAR12->VAR14->VAR15[0]) && (VAR2->VAR10 != VAR38 || VAR2->VAR29 != VAR30))
    {
        int VAR40, VAR41;
        FUN8(VAR2->VAR4->VAR42, &VAR40, &VAR41);
        if (VAR2->VAR10 != VAR38)
            FUN4(VAR4, VAR22, "");
        else if (VAR2->VAR29 != VAR30)
            FUN4(VAR4, VAR43, "");
        VAR5 = FUN3(VAR2->VAR4, VAR2->VAR17, 0);
        if (VAR5 < 0)
        {
            FUN4(VAR2->VAR4, VAR22, "");
            return VAR5;
        }
        VAR2->VAR12 = &VAR2->VAR17[VAR5];
        VAR2->VAR12->VAR18 = 3;
        VAR2->VAR12->VAR14->VAR10 = VAR38;
        if (FUN5(VAR2, VAR2->VAR12, 0) < 0)
        {
            VAR2->VAR12 = NULL;
            return -1;
        }
        memset(VAR2->VAR12->VAR14->VAR39[0], 0, VAR4->VAR44 * VAR2->VAR12->VAR14->VAR45[0]);
        memset(VAR2->VAR12->VAR14->VAR39[1], 0x80, (VAR4->VAR44 >> VAR41) * VAR2->VAR12->VAR14->VAR45[1]);
        memset(VAR2->VAR12->VAR14->VAR39[2], 0x80, (VAR4->VAR44 >> VAR41) * VAR2->VAR12->VAR14->VAR45[2]);
        FUN9(&VAR2->VAR12->VAR46, VAR47, 0);
        FUN9(&VAR2->VAR12->VAR46, VAR47, 1);
    }
    if ((!VAR2->VAR13 || !VAR2->VAR13->VAR14->VAR15[0]) && VAR2->VAR10 == VAR11)
    {
        VAR5 = FUN3(VAR2->VAR4, VAR2->VAR17, 0);
        if (VAR5 < 0)
        {
            FUN4(VAR2->VAR4, VAR22, "");
            return VAR5;
        }
        VAR2->VAR13 = &VAR2->VAR17[VAR5];
        VAR2->VAR13->VAR18 = 3;
        VAR2->VAR13->VAR14->VAR10 = VAR38;
        if (FUN5(VAR2, VAR2->VAR13, 0) < 0)
        {
            VAR2->VAR13 = NULL;
            return -1;
        }
        FUN9(&VAR2->VAR13->VAR46, VAR47, 0);
        FUN9(&VAR2->VAR13->VAR46, VAR47, 1);
    }
    if (VAR2->VAR12)
    {
        FUN2(VAR2->VAR4, &VAR2->VAR48);
        if (VAR2->VAR12->VAR14->VAR15[0] && (VAR6 = FUN6(VAR2->VAR4, &VAR2->VAR48, VAR2->VAR12)) < 0)
            return VAR6;
    }
    if (VAR2->VAR13)
    {
        FUN2(VAR2->VAR4, &VAR2->VAR49);
        if (VAR2->VAR13->VAR14->VAR15[0] && (VAR6 = FUN6(VAR2->VAR4, &VAR2->VAR49, VAR2->VAR13)) < 0)
            return VAR6;
    }
    if (VAR2->VAR10 != VAR38 && !(VAR2->VAR12 && VAR2->VAR12->VAR14->VAR15[0]))
    {
        FUN4(VAR2, VAR22, "");
        return VAR50;
    }
    if (VAR2->VAR29 != VAR30)
    {
        int VAR5;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            if (VAR2->VAR29 == VAR51)
            {
                VAR2->VAR20.VAR14->VAR39[VAR5] += VAR2->VAR20.VAR14->VAR45[VAR5];
            }
            VAR2->VAR20.VAR14->VAR45[VAR5] *= 2;
            VAR2->VAR48.VAR14->VAR45[VAR5] *= 2;
            VAR2->VAR49.VAR14->VAR45[VAR5] *= 2;
        }
    }
    if (VAR2->VAR52 || VAR2->VAR26 == VAR28)
    {
        VAR2->VAR53 = VAR2->VAR54;
        VAR2->VAR55 = VAR2->VAR56;
    }
    else if (VAR2->VAR57 == VAR58 || VAR2->VAR57 == VAR59)
    {
        VAR2->VAR53 = VAR2->VAR60;
        VAR2->VAR55 = VAR2->VAR61;
    }
    else
    {
        VAR2->VAR53 = VAR2->VAR62;
        VAR2->VAR55 = VAR2->VAR63;
    }
    return 0;
}