static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    VAR5 *VAR15 = NULL;
    if (VAR7 == 0)
    {
        if (VAR12->VAR16 == 0 && VAR12->VAR17)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR17;
            VAR12->VAR17 = NULL;
            *VAR4 = sizeof(VAR13);
        }
        return 0;
    }
    if (VAR12->VAR18 == NULL || VAR12->VAR18->VAR3[0])
    {
        int VAR19 = FUN2(VAR12, 0);
        VAR12->VAR18 = &VAR12->VAR20[VAR19];
    }
    if (VAR2->VAR21 == VAR22)
    {
        int VAR23 = 0;
        VAR15 = FUN3(VAR7 + VAR24);
        if (FUN4(FUN5(VAR6)))
        {
            const VAR5 *VAR25, *VAR26, *VAR27;
            int VAR28;
            VAR27 = VAR6;
            for (VAR25 = VAR6, VAR26 = VAR6 + VAR7; VAR27 < VAR26; VAR25 = VAR27)
            {
                VAR27 = FUN6(VAR25 + 4, VAR26);
                VAR28 = VAR27 - VAR25 - 4;
                if (VAR28 <= 0)
                    continue;
                switch (FUN5(VAR25))
                {
                case VAR29:
                    VAR23 = FUN7(VAR25 + 4, VAR28, VAR15);
                    break;
                case VAR30:
                    VAR23 = FUN7(VAR25 + 4, VAR28, VAR15);
                    FUN8(&VAR12->VAR31, VAR15, VAR23 * 8);
                    FUN9(VAR2, &VAR12->VAR31);
                    break;
                case VAR32:
                    FUN10(VAR2, VAR33, "");
                    return -1;
                }
            }
        }
        else if (VAR9->VAR34 && ((VAR6[0] & 0xC0) == 0xC0))
        {
            const VAR5 *VAR35;
            VAR35 = FUN6(VAR6, VAR6 + VAR7);
            if ((VAR35 == (VAR6 + VAR7)) || FUN5(VAR35) != VAR36)
            {
                FUN10(VAR2, VAR33, "");
                return -1;
            }
            VAR23 = FUN7(VAR6, VAR35 - VAR6, VAR15);
            FUN11(VAR15);
            return -1;
        }
        else
        {
            VAR23 = FUN7(VAR6, VAR7, VAR15);
        }
        FUN8(&VAR12->VAR31, VAR15, VAR23 * 8);
    }
    else
        FUN8(&VAR12->VAR31, VAR6, VAR7 * 8);
    if (VAR9->VAR37 < VAR38)
    {
        if (FUN12(VAR9, &VAR12->VAR31) == -1)
        {
            return -1;
        }
    }
    else
    {
        if (FUN13(VAR9, &VAR12->VAR31) == -1)
        {
            return -1;
        }
    }
    if (VAR12->VAR39 != VAR40 && !VAR9->VAR41)
    {
        return -1;
    }
    VAR12->VAR42.VAR39 = VAR12->VAR39;
    VAR12->VAR42.VAR43 = VAR12->VAR39 == VAR40;
    if (VAR12->VAR44 == NULL && (VAR12->VAR39 == VAR45 || VAR12->VAR46))
    {
        return -1;
    }
    if (VAR2->VAR47 && VAR12->VAR39 == VAR45)
        return -1;
    if ((VAR2->VAR48 >= VAR49 && VAR12->VAR39 == VAR45) || (VAR2->VAR48 >= VAR50 && VAR12->VAR39 != VAR40) || VAR2->VAR48 >= VAR51)
    {
        return VAR7;
    }
    if (VAR2->VAR47 >= 5)
    {
        return -1;
    }
    if (VAR12->VAR52)
    {
        if (VAR12->VAR39 == VAR45)
            return VAR7;
        else
            VAR12->VAR52 = 0;
    }
    if (FUN14(VAR12, VAR2) < 0)
    {
        return -1;
    }
    VAR12->VAR53.VAR54 = VAR12->VAR55.VAR56;
    VAR12->VAR53.VAR57 = VAR12->VAR55.VAR58;
    FUN15(VAR12);
    VAR9->VAR59 = VAR7 * 8;
    FUN16(VAR9);
    FUN17(VAR12);
    FUN18(VAR12);
    assert(VAR12->VAR42.VAR39 == VAR12->VAR18->VAR39);
    assert(VAR12->VAR42.VAR39 == VAR12->VAR39);
    if (VAR12->VAR39 == VAR45 || VAR12->VAR16)
    {
        *VAR14 = *(VAR13 *)VAR12->VAR18;
    }
    else if (VAR12->VAR44 != NULL)
    {
        *VAR14 = *(VAR13 *)VAR12->VAR44;
    }
    if (VAR12->VAR44 || VAR12->VAR16)
    {
        *VAR4 = sizeof(VAR13);
        FUN19(VAR12, VAR14);
    }
    VAR2->VAR60 = VAR12->VAR61 - 1;
    return VAR7;