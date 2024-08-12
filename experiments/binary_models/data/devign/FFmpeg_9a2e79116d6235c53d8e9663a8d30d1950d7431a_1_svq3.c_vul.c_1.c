static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR10->VAR13;
    VAR14 *VAR15 = &VAR13->VAR15;
    int VAR16 = VAR6->VAR17;
    int VAR18, VAR19;
    if (VAR16 == 0)
    {
        if (VAR15->VAR20 && !VAR15->VAR21)
        {
            *(VAR22 *)VAR3 = VAR15->VAR23.VAR24;
            VAR15->VAR20 = NULL;
            *VAR4 = 1;
        }
        return 0;
    }
    FUN2(&VAR15->VAR25, VAR8, 8 * VAR16);
    VAR15->VAR26 = VAR15->VAR27 = VAR13->VAR28 = 0;
    if (FUN3(VAR2))
        return -1;
    VAR15->VAR29 = VAR13->VAR30;
    VAR15->VAR31 = VAR13->VAR32;
    if (VAR2->VAR33 & VAR34)
        FUN4(VAR13->VAR15.VAR2, VAR35, "", FUN5(VAR15->VAR29), VAR10->VAR36, VAR10->VAR37, VAR15->VAR38, VAR15->VAR39, VAR13->VAR32);
    VAR15->VAR40.VAR24.VAR29 = VAR15->VAR29;
    VAR15->VAR40.VAR24.VAR41 = (VAR15->VAR29 == VAR42);
    if (VAR15->VAR43 == NULL && VAR15->VAR29 == VAR44)
        return 0;
    if (VAR2->VAR45 >= VAR46 && VAR15->VAR29 == VAR44 || VAR2->VAR45 >= VAR47 && VAR15->VAR29 != VAR42 || VAR2->VAR45 >= VAR48)
        return 0;
    if (VAR15->VAR49)
    {
        if (VAR15->VAR29 == VAR44)
            return 0;
        else
            VAR15->VAR49 = 0;
    }
    if (FUN6(VAR13) < 0)
        return -1;
    if (VAR15->VAR29 == VAR44)
    {
        VAR13->VAR50 = VAR13->VAR32 - VAR13->VAR51;
        if (VAR13->VAR50 < 0)
            VAR13->VAR50 += 256;
        if (VAR13->VAR50 == 0 || VAR13->VAR50 >= VAR13->VAR52)
        {
            FUN4(VAR13->VAR15.VAR2, VAR53, "");
            return -1;
        }
    }
    else
    {
        VAR13->VAR51 = VAR13->VAR54;
        VAR13->VAR54 = VAR13->VAR32;
        VAR13->VAR52 = VAR13->VAR54 - VAR13->VAR51;
        if (VAR13->VAR52 < 0)
            VAR13->VAR52 += 256;
    }
    for (VAR18 = 0; VAR18 < 2; VAR18++)
    {
        int VAR55;
        for (VAR55 = 0; VAR55 < 4; VAR55++)
        {
            int VAR56;
            for (VAR56 = -1; VAR56 < 4; VAR56++)
                VAR13->VAR57[VAR18][VAR58[0] + 8 * VAR55 + VAR56] = 1;
            if (VAR55 < 3)
                VAR13->VAR57[VAR18][VAR58[0] + 8 * VAR55 + VAR56] = VAR59;
        }
    }
    for (VAR15->VAR27 = 0; VAR15->VAR27 < VAR15->VAR60; VAR15->VAR27++)
    {
        for (VAR15->VAR26 = 0; VAR15->VAR26 < VAR15->VAR61; VAR15->VAR26++)
        {
            VAR13->VAR28 = VAR15->VAR26 + VAR15->VAR27 * VAR15->VAR62;
            if ((FUN7(&VAR15->VAR25) + 7) >= VAR15->VAR25.VAR63 && ((FUN7(&VAR15->VAR25) & 7) == 0 || FUN8(&VAR15->VAR25, -FUN7(&VAR15->VAR25) & 7) == 0))
            {
                FUN9(&VAR15->VAR25, VAR10->VAR64 - FUN7(&VAR15->VAR25));
                VAR15->VAR25.VAR63 = 8 * VAR16;
                if (FUN3(VAR2))
                    return -1;
            }
            VAR19 = FUN10(&VAR15->VAR25);
            if (VAR15->VAR29 == VAR42)
                VAR19 += 8;
            else if (VAR15->VAR29 == VAR44 && VAR19 >= 4)
                VAR19 += 4;
            if ((unsigned)VAR19 > 33 || FUN11(VAR10, VAR19))
            {
                FUN4(VAR13->VAR15.VAR2, VAR53, "", VAR15->VAR26, VAR15->VAR27);
                return -1;
            }
            if (VAR19 != 0)
                FUN12(VAR13);
            if (VAR15->VAR29 != VAR44 && !VAR15->VAR21)
                VAR15->VAR40.VAR24.VAR19[VAR15->VAR26 + VAR15->VAR27 * VAR15->VAR62] = (VAR15->VAR29 == VAR65 && VAR19 < 8) ? (VAR19 - 1) : -1;
        }
        FUN13(VAR15, 16 * VAR15->VAR27, 16);
    }
    FUN14(VAR15);
    if (VAR15->VAR29 == VAR44 || VAR15->VAR21)
        *(VAR22 *)VAR3 = VAR15->VAR40.VAR24;
    else
        *(VAR22 *)VAR3 = VAR15->VAR66.VAR24;
    if (VAR15->VAR43 || VAR15->VAR21)
        *VAR4 = 1;
    return VAR16;
}