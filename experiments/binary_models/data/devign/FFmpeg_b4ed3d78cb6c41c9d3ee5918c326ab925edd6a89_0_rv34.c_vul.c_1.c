int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    SliceInfo VAR18;
    int VAR19;
    int VAR20;
    const VAR7 *VAR21 = NULL;
    int VAR22 = 0;
    if (VAR9 == 0)
    {
        if (VAR15->VAR23 == 0 && VAR15->VAR24)
        {
            *VAR17 = *(VAR16 *)VAR15->VAR24;
            VAR15->VAR24 = NULL;
            *VAR4 = sizeof(VAR16);
        }
        return 0;
    }
    if (!VAR2->VAR20)
    {
        VAR20 = (*VAR8++) + 1;
        VAR21 = VAR8 + 4;
        VAR8 += 8 * VAR20;
    }
    else
        VAR20 = VAR2->VAR20;
    if (FUN2(VAR2, VAR21, 0) > VAR9)
    {
        FUN3(VAR2, VAR25, "");
        return -1;
    }
    FUN4(&VAR15->VAR26, VAR8 + FUN2(VAR2, VAR21, 0), (VAR9 - FUN2(VAR2, VAR21, 0)) * 8);
    if (VAR12->FUN5(VAR12, &VAR12->VAR15.VAR26, &VAR18) < 0 || VAR18.VAR27)
    {
        FUN3(VAR2, VAR25, "");
        return -1;
    }
    if ((!VAR15->VAR28 || !VAR15->VAR28->VAR29.VAR3[0]) && VAR18.VAR30 == VAR31)
        return -1;
    if ((VAR2->VAR32 >= VAR33 && VAR18.VAR30 == VAR31) || (VAR2->VAR32 >= VAR34 && VAR18.VAR30 != VAR35) || VAR2->VAR32 >= VAR36)
        return VAR9;
    for (VAR19 = 0; VAR19 < VAR20; VAR19++)
    {
        int VAR37 = FUN2(VAR2, VAR21, VAR19);
        int VAR10;
        if (VAR19 + 1 == VAR20)
            VAR10 = VAR9 - VAR37;
        else
            VAR10 = FUN2(VAR2, VAR21, VAR19 + 1) - VAR37;
        if (VAR37 > VAR9)
        {
            FUN3(VAR2, VAR25, "");
            break;
        }
        VAR12->VAR18.VAR38 = VAR15->VAR39 * VAR15->VAR40;
        if (VAR19 + 1 < VAR20)
        {
            FUN4(&VAR15->VAR26, VAR8 + FUN2(VAR2, VAR21, VAR19 + 1), (VAR9 - FUN2(VAR2, VAR21, VAR19 + 1)) * 8);
            if (VAR12->FUN5(VAR12, &VAR12->VAR15.VAR26, &VAR18) < 0)
            {
                if (VAR19 + 2 < VAR20)
                    VAR10 = FUN2(VAR2, VAR21, VAR19 + 2) - VAR37;
                else
                    VAR10 = VAR9 - VAR37;
            }
            else
                VAR12->VAR18.VAR38 = VAR18.VAR27;
        }
        VAR22 = FUN6(VAR12, VAR12->VAR18.VAR38, VAR8 + VAR37, VAR10);
        VAR15->VAR41 = VAR12->VAR15.VAR42 + VAR12->VAR15.VAR43 * VAR12->VAR15.VAR39 - VAR12->VAR18.VAR27;
        if (VAR22)
            break;
    }
    if (VAR22 && VAR15->VAR44)
    {
        if (VAR12->VAR45)
            VAR12->FUN7(VAR12, VAR15->VAR40 - 1);
        FUN8(VAR15);
        FUN9(VAR15);
        if (VAR15->VAR46 == VAR31 || VAR15->VAR23)
        {
            *VAR17 = *(VAR16 *)VAR15->VAR44;
        }
        else if (VAR15->VAR28 != NULL)
        {
            *VAR17 = *(VAR16 *)VAR15->VAR28;
        }
        if (VAR15->VAR28 || VAR15->VAR23)
        {
            *VAR4 = sizeof(VAR16);
            FUN10(VAR15, VAR17);
        }
        VAR15->VAR44 = NULL;
    }
    return VAR9;
}