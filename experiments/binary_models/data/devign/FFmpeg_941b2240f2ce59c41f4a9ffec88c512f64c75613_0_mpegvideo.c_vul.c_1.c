int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR7 *VAR8;
    VAR2->VAR9 = 0;
    if (!FUN2(VAR4))
    {
        FUN3(VAR4, VAR10, "");
        return -1;
    }
    if (VAR2->VAR11 != VAR12 && VAR2->VAR13 && VAR2->VAR13 != VAR2->VAR14 && VAR2->VAR13->VAR15->VAR16[0])
    {
        FUN4(VAR2, VAR2->VAR13);
    }
    for (VAR5 = 0; VAR5 < VAR17; VAR5++)
    {
        if (&VAR2->VAR18[VAR5] != VAR2->VAR13 && &VAR2->VAR18[VAR5] != VAR2->VAR14 && VAR2->VAR18[VAR5].VAR19 && !VAR2->VAR18[VAR5].VAR20)
        {
            if (!(VAR4->VAR21 & VAR22))
                FUN3(VAR4, VAR10, "");
            FUN4(VAR2, &VAR2->VAR18[VAR5]);
        }
    }
    FUN4(VAR2, &VAR2->VAR23);
    FUN5(VAR2);
    if (VAR2->VAR24 && VAR2->VAR24->VAR15->VAR16[0] == NULL)
    {
        VAR8 = VAR2->VAR24;
    }
    else
    {
        VAR5 = FUN6(VAR2, 0);
        if (VAR5 < 0)
        {
            FUN3(VAR2->VAR4, VAR10, "");
            return VAR5;
        }
        VAR8 = &VAR2->VAR18[VAR5];
    }
    VAR8->VAR19 = 0;
    if (!VAR2->VAR25)
    {
        if (VAR2->VAR11 != VAR12)
            VAR8->VAR19 = 3;
    }
    VAR8->VAR15->VAR26 = VAR2->VAR26++;
    if (FUN7(VAR2, VAR8, 0) < 0)
        return -1;
    VAR2->VAR24 = VAR8;
    VAR2->VAR24->VAR15->VAR27 = VAR2->VAR27;
    if (VAR2->VAR28 == VAR29 || VAR2->VAR28 == VAR30)
    {
        if (VAR2->VAR31 != VAR32)
            VAR2->VAR24->VAR15->VAR27 = (VAR2->VAR31 == VAR33) == VAR2->VAR34;
    }
    VAR2->VAR24->VAR15->VAR35 = !VAR2->VAR36 && !VAR2->VAR37;
    VAR2->VAR24->VAR38 = VAR2->VAR31 != VAR32;
    VAR2->VAR24->VAR15->VAR11 = VAR2->VAR11;
    VAR2->VAR24->VAR15->VAR39 = VAR2->VAR11 == VAR40;
    if ((VAR6 = FUN8(VAR2, &VAR2->VAR23, VAR2->VAR24)) < 0)
        return VAR6;
    if (VAR2->VAR11 != VAR12)
    {
        VAR2->VAR13 = VAR2->VAR14;
        if (!VAR2->VAR25)
            VAR2->VAR14 = VAR2->VAR24;
    }
    FUN9(VAR2->VAR4, "", VAR2->VAR13, VAR2->VAR14, VAR2->VAR24, VAR2->VAR13 ? VAR2->VAR13->VAR15->VAR41[0] : NULL, VAR2->VAR14 ? VAR2->VAR14->VAR15->VAR41[0] : NULL, VAR2->VAR24 ? VAR2->VAR24->VAR15->VAR41[0] : NULL, VAR2->VAR11, VAR2->VAR25);
    if ((VAR2->VAR13 == NULL || VAR2->VAR13->VAR15->VAR16[0] == NULL) && (VAR2->VAR11 != VAR40 || VAR2->VAR31 != VAR32))
    {
        int VAR42, VAR43;
        FUN10(VAR2->VAR4->VAR44, &VAR42, &VAR43);
        if (VAR2->VAR11 == VAR12 && VAR2->VAR14 && VAR2->VAR14->VAR15->VAR16[0])
            FUN3(VAR4, VAR45, "");
        else if (VAR2->VAR11 != VAR40)
            FUN3(VAR4, VAR10, "");
        else if (VAR2->VAR31 != VAR32)
            FUN3(VAR4, VAR45, "");
        VAR5 = FUN6(VAR2, 0);
        if (VAR5 < 0)
        {
            FUN3(VAR2->VAR4, VAR10, "");
            return VAR5;
        }
        VAR2->VAR13 = &VAR2->VAR18[VAR5];
        VAR2->VAR13->VAR19 = 3;
        VAR2->VAR13->VAR15->VAR39 = 0;
        VAR2->VAR13->VAR15->VAR11 = VAR46;
        if (FUN7(VAR2, VAR2->VAR13, 0) < 0)
        {
            VAR2->VAR13 = NULL;
            return -1;
        }
        if (!VAR4->VAR47)
        {
            for (VAR5 = 0; VAR5 < VAR4->VAR48; VAR5++)
                memset(VAR2->VAR13->VAR15->VAR41[0] + VAR2->VAR13->VAR15->VAR49[0] * VAR5, 0x80, VAR4->VAR50);
            for (VAR5 = 0; VAR5 < FUN11(VAR4->VAR48, VAR43); VAR5++)
            {
                memset(VAR2->VAR13->VAR15->VAR41[1] + VAR2->VAR13->VAR15->VAR49[1] * VAR5, 0x80, FUN11(VAR4->VAR50, VAR42));
                memset(VAR2->VAR13->VAR15->VAR41[2] + VAR2->VAR13->VAR15->VAR49[2] * VAR5, 0x80, FUN11(VAR4->VAR50, VAR42));
            }
            if (VAR2->VAR28 == VAR51 || VAR2->VAR28 == VAR52)
            {
                for (VAR5 = 0; VAR5 < VAR4->VAR48; VAR5++)
                    memset(VAR2->VAR13->VAR15->VAR41[0] + VAR2->VAR13->VAR15->VAR49[0] * VAR5, 16, VAR4->VAR50);
            }
        }
        FUN12(&VAR2->VAR13->VAR53, VAR54, 0);
        FUN12(&VAR2->VAR13->VAR53, VAR54, 1);
    }
    if ((VAR2->VAR14 == NULL || VAR2->VAR14->VAR15->VAR16[0] == NULL) && VAR2->VAR11 == VAR12)
    {
        VAR5 = FUN6(VAR2, 0);
        if (VAR5 < 0)
        {
            FUN3(VAR2->VAR4, VAR10, "");
            return VAR5;
        }
        VAR2->VAR14 = &VAR2->VAR18[VAR5];
        VAR2->VAR14->VAR19 = 3;
        VAR2->VAR14->VAR15->VAR39 = 0;
        VAR2->VAR14->VAR15->VAR11 = VAR46;
        if (FUN7(VAR2, VAR2->VAR14, 0) < 0)
        {
            VAR2->VAR14 = NULL;
            return -1;
        }
        FUN12(&VAR2->VAR14->VAR53, VAR54, 0);
        FUN12(&VAR2->VAR14->VAR53, VAR54, 1);
    }
    memset(VAR2->VAR55.VAR15->VAR41, 0, sizeof(VAR2->VAR55.VAR15->VAR41));
    memset(VAR2->VAR56.VAR15->VAR41, 0, sizeof(VAR2->VAR56.VAR15->VAR41));
    if (VAR2->VAR13)
    {
        FUN4(VAR2, &VAR2->VAR55);
        if (VAR2->VAR13->VAR15->VAR16[0] && (VAR6 = FUN8(VAR2, &VAR2->VAR55, VAR2->VAR13)) < 0)
            return VAR6;
    }
    if (VAR2->VAR14)
    {
        FUN4(VAR2, &VAR2->VAR56);
        if (VAR2->VAR14->VAR15->VAR16[0] && (VAR6 = FUN8(VAR2, &VAR2->VAR56, VAR2->VAR14)) < 0)
            return VAR6;
    }
    FUN13(VAR2->VAR11 == VAR40 || (VAR2->VAR13 && VAR2->VAR13->VAR15->VAR16[0]));
    if (VAR2->VAR31 != VAR32)
    {
        int VAR5;
        for (VAR5 = 0; VAR5 < 4; VAR5++)
        {
            if (VAR2->VAR31 == VAR57)
            {
                VAR2->VAR23.VAR15->VAR41[VAR5] += VAR2->VAR23.VAR15->VAR49[VAR5];
            }
            VAR2->VAR23.VAR15->VAR49[VAR5] *= 2;
            VAR2->VAR55.VAR15->VAR49[VAR5] *= 2;
            VAR2->VAR56.VAR15->VAR49[VAR5] *= 2;
        }
    }
    VAR2->VAR58 = VAR4->VAR58;
    if (VAR2->VAR59 || VAR2->VAR28 == VAR30)
    {
        VAR2->VAR60 = VAR2->VAR61;
        VAR2->VAR62 = VAR2->VAR63;
    }
    else if (VAR2->VAR64 == VAR65 || VAR2->VAR64 == VAR66)
    {
        VAR2->VAR60 = VAR2->VAR67;
        VAR2->VAR62 = VAR2->VAR68;
    }
    else
    {
        VAR2->VAR60 = VAR2->VAR69;
        VAR2->VAR62 = VAR2->VAR70;
    }
    return 0;
}