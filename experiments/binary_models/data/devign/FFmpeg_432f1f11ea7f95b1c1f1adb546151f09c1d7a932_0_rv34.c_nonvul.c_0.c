int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    SliceInfo VAR15;
    int VAR16;
    int VAR17;
    const VAR5 *VAR18 = NULL;
    int VAR19 = 0;
    if (VAR7 == 0)
    {
        if (VAR12->VAR20 == 0 && VAR12->VAR21)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR21;
            VAR12->VAR21 = NULL;
            *VAR4 = sizeof(VAR13);
        }
        return 0;
    }
    if (!VAR2->VAR17)
    {
        VAR17 = (*VAR6++) + 1;
        VAR18 = VAR6 + 4;
        VAR6 += 8 * VAR17;
    }
    else
        VAR17 = VAR2->VAR17;
    if (FUN2(VAR2, VAR18, 0) > VAR7)
    {
        FUN3(VAR2, VAR22, "");
        return -1;
    }
    FUN4(&VAR12->VAR23, VAR6 + FUN2(VAR2, VAR18, 0), VAR7 - FUN2(VAR2, VAR18, 0));
    if (VAR9->FUN5(VAR9, &VAR9->VAR12.VAR23, &VAR15) < 0)
    {
        FUN3(VAR2, VAR22, "");
        return -1;
    }
    if ((!VAR12->VAR24 || !VAR12->VAR24->VAR3[0]) && VAR15.VAR25 == VAR26)
        return -1;
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        int VAR27 = FUN2(VAR2, VAR18, VAR16);
        int VAR28;
        if (VAR16 + 1 == VAR17)
            VAR28 = VAR7 - VAR27;
        else
            VAR28 = FUN2(VAR2, VAR18, VAR16 + 1) - VAR27;
        if (VAR27 > VAR7)
        {
            FUN3(VAR2, VAR22, "");
            break;
        }
        VAR9->VAR15.VAR29 = VAR12->VAR30 * VAR12->VAR31;
        if (VAR16 + 1 < VAR17)
        {
            FUN4(&VAR12->VAR23, VAR6 + FUN2(VAR2, VAR18, VAR16 + 1), (VAR7 - FUN2(VAR2, VAR18, VAR16 + 1)) * 8);
            if (VAR9->FUN5(VAR9, &VAR9->VAR12.VAR23, &VAR15) < 0)
            {
                if (VAR16 + 2 < VAR17)
                    VAR28 = FUN2(VAR2, VAR18, VAR16 + 2) - VAR27;
                else
                    VAR28 = VAR7 - VAR27;
            }
            else
                VAR9->VAR15.VAR29 = VAR15.VAR32;
        }
        VAR19 = FUN6(VAR9, VAR9->VAR15.VAR29, VAR6 + VAR27, VAR28);
        VAR12->VAR33 = VAR9->VAR12.VAR34 + VAR9->VAR12.VAR35 * VAR9->VAR12.VAR30 - VAR9->VAR15.VAR32;
        if (VAR19)
            break;
    }
    if (VAR19)
    {
        if (VAR9->VAR36)
            VAR9->FUN7(VAR9, VAR12->VAR31 - 1);
        FUN8(VAR12);
        FUN9(VAR12);
        if (VAR12->VAR37 == VAR26 || VAR12->VAR20)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR38;
        }
        else if (VAR12->VAR24 != NULL)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR24;
        }
        if (VAR12->VAR24 || VAR12->VAR20)
        {
            *VAR4 = sizeof(VAR13);
            FUN10(VAR12, VAR14);
        }
        VAR12->VAR38 = NULL;
    }
    return VAR7;
}