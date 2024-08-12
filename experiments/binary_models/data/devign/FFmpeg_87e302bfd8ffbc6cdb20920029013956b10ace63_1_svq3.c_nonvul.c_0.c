static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = VAR2->VAR13;
    int VAR16, VAR17;
    if (VAR9 == 0)
    {
        if (VAR12->VAR18 && !VAR12->VAR19)
        {
            *(VAR20 *)VAR3 = *(VAR20 *)&VAR12->VAR21;
            VAR12->VAR18 = NULL;
            *VAR4 = sizeof(VAR20);
        }
        return 0;
    }
    FUN2(&VAR12->VAR22, VAR8, 8 * VAR9);
    VAR12->VAR23 = VAR12->VAR24 = VAR15->VAR25 = 0;
    if (FUN3(VAR15))
        return -1;
    VAR12->VAR26 = VAR15->VAR27;
    VAR12->VAR28 = VAR15->VAR29;
    if (VAR2->VAR30 & VAR31)
    {
        FUN4(VAR15->VAR12.VAR2, VAR32, "", FUN5(VAR12->VAR26), VAR15->VAR33, VAR15->VAR34, VAR12->VAR35, VAR12->VAR36, VAR15->VAR29);
    }
    VAR12->VAR37.VAR26 = VAR12->VAR26;
    VAR12->VAR37.VAR38 = (VAR12->VAR26 == VAR39);
    if (VAR12->VAR40 == NULL && VAR12->VAR26 == VAR41)
        return 0;
    if (VAR2->VAR42 && VAR12->VAR26 == VAR41)
        return 0;
    if (VAR2->VAR42 >= 5)
        return 0;
    if ((VAR2->VAR43 >= VAR44 && VAR12->VAR26 == VAR41) || (VAR2->VAR43 >= VAR45 && VAR12->VAR26 != VAR39) || VAR2->VAR43 >= VAR46)
        return 0;
    if (VAR12->VAR47)
    {
        if (VAR12->VAR26 == VAR41)
            return 0;
        else
            VAR12->VAR47 = 0;
    }
    if (FUN6(VAR15) < 0)
        return -1;
    if (VAR12->VAR26 == VAR41)
    {
        VAR15->VAR48 = (VAR15->VAR29 - VAR15->VAR49);
        if (VAR15->VAR48 < 0)
        {
            VAR15->VAR48 += 256;
        }
        if (VAR15->VAR48 == 0 || VAR15->VAR48 >= VAR15->VAR50)
        {
            FUN4(VAR15->VAR12.VAR2, VAR51, "");
            return -1;
        }
    }
    else
    {
        VAR15->VAR49 = VAR15->VAR52;
        VAR15->VAR52 = VAR15->VAR29;
        VAR15->VAR50 = (VAR15->VAR52 - VAR15->VAR49);
        if (VAR15->VAR50 < 0)
        {
            VAR15->VAR50 += 256;
        }
    }
    for (VAR16 = 0; VAR16 < 2; VAR16++)
    {
        int VAR53;
        for (VAR53 = 0; VAR53 < 4; VAR53++)
        {
            int VAR54;
            for (VAR54 = -1; VAR54 < 4; VAR54++)
                VAR15->VAR55[VAR16][VAR56[0] + 8 * VAR53 + VAR54] = 1;
            if (VAR53 < 3)
                VAR15->VAR55[VAR16][VAR56[0] + 8 * VAR53 + VAR54] = VAR57;
        }
    }
    for (VAR12->VAR24 = 0; VAR12->VAR24 < VAR12->VAR58; VAR12->VAR24++)
    {
        for (VAR12->VAR23 = 0; VAR12->VAR23 < VAR12->VAR59; VAR12->VAR23++)
        {
            VAR15->VAR25 = VAR12->VAR23 + VAR12->VAR24 * VAR12->VAR60;
            if ((FUN7(&VAR12->VAR22) + 7) >= VAR12->VAR22.VAR61 && ((FUN7(&VAR12->VAR22) & 7) == 0 || FUN8(&VAR12->VAR22, (-FUN7(&VAR12->VAR22) & 7)) == 0))
            {
                FUN9(&VAR12->VAR22, VAR15->VAR62 - FUN7(&VAR12->VAR22));
                VAR12->VAR22.VAR61 = 8 * VAR9;
                if (FUN3(VAR15))
                    return -1;
            }
            VAR17 = FUN10(&VAR12->VAR22);
            if (VAR12->VAR26 == VAR39)
            {
                VAR17 += 8;
            }
            else if (VAR12->VAR26 == VAR41 && VAR17 >= 4)
            {
                VAR17 += 4;
            }
            if (VAR17 > 33 || FUN11(VAR15, VAR17))
            {
                FUN4(VAR15->VAR12.VAR2, VAR51, "", VAR12->VAR23, VAR12->VAR24);
                return -1;
            }
            if (VAR17 != 0)
            {
                FUN12(VAR15);
            }
            if (VAR12->VAR26 != VAR41 && !VAR12->VAR19)
            {
                VAR12->VAR37.VAR17[VAR12->VAR23 + VAR12->VAR24 * VAR12->VAR60] = (VAR12->VAR26 == VAR63 && VAR17 < 8) ? (VAR17 - 1) : -1;
            }
        }
        FUN13(VAR12, 16 * VAR12->VAR24, 16);
    }
    FUN14(VAR12);
    if (VAR12->VAR26 == VAR41 || VAR12->VAR19)
    {
        *(VAR20 *)VAR3 = *(VAR20 *)&VAR12->VAR37;
    }
    else
    {
        *(VAR20 *)VAR3 = *(VAR20 *)&VAR12->VAR64;
    }
    if (VAR12->VAR40 || VAR12->VAR19)
    {
        *VAR4 = sizeof(VAR20);
    }
    return VAR9;
}