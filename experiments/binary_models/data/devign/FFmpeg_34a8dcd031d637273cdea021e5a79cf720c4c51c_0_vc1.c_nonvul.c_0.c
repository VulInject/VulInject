static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
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
    VAR2->VAR21 = !VAR12->VAR16;
    if (VAR2->VAR22 == VAR23)
    {
        int VAR19, VAR24;
        VAR15 = FUN3(VAR7 + VAR25);
        VAR24 = 0;
        for (VAR19 = 0; VAR19 < VAR7; VAR19++)
        {
            if (VAR6[VAR19] == 3 && VAR19 >= 2 && !VAR6[VAR19 - 1] && !VAR6[VAR19 - 2] && VAR19 < VAR7 - 1 && VAR6[VAR19 + 1] < 4)
            {
                VAR15[VAR24++] = VAR6[VAR19 + 1];
                VAR19++;
            }
            else
                VAR15[VAR24++] = VAR6[VAR19];
        }
        FUN4(&VAR12->VAR26, VAR15, VAR24 * 8);
    }
    else
        FUN4(&VAR12->VAR26, VAR6, VAR7 * 8);
    if (VAR9->VAR27 < VAR28)
    {
        if (FUN5(VAR9, &VAR12->VAR26) == -1)
        {
            FUN6(VAR15);
            return -1;
        }
    }
    else
    {
        if (FUN7(VAR9, &VAR12->VAR26) == -1)
        {
            FUN6(VAR15);
            return -1;
        }
    }
    if (VAR12->VAR29 != VAR30 && !VAR9->VAR31)
    {
        FUN6(VAR15);
        return -1;
    }
    VAR12->VAR32.VAR29 = VAR12->VAR29;
    VAR12->VAR32.VAR33 = VAR12->VAR29 == VAR30;
    if (VAR12->VAR34 == NULL && (VAR12->VAR29 == VAR35 || VAR12->VAR36))
    {
        FUN6(VAR15);
        return -1;
    }
    if (VAR2->VAR37 && VAR12->VAR29 == VAR35)
        return -1;
    if ((VAR2->VAR38 >= VAR39 && VAR12->VAR29 == VAR35) || (VAR2->VAR38 >= VAR40 && VAR12->VAR29 != VAR30) || VAR2->VAR38 >= VAR41)
    {
        FUN6(VAR15);
        return VAR7;
    }
    if (VAR2->VAR37 >= 5)
    {
        FUN6(VAR15);
        return -1;
    }
    if (VAR12->VAR42)
    {
        if (VAR12->VAR29 == VAR35)
            return VAR7;
        else
            VAR12->VAR42 = 0;
    }
    if (FUN8(VAR12, VAR2) < 0)
    {
        FUN6(VAR15);
        return -1;
    }
    FUN9(VAR12);
    VAR9->VAR43 = VAR7 * 8;
    FUN10(VAR9);
    FUN11(VAR12);
    FUN12(VAR12);
    assert(VAR12->VAR32.VAR29 == VAR12->VAR18->VAR29);
    assert(VAR12->VAR32.VAR29 == VAR12->VAR29);
    if (VAR12->VAR29 == VAR35 || VAR12->VAR16)
    {
        *VAR14 = *(VAR13 *)VAR12->VAR18;
    }
    else if (VAR12->VAR34 != NULL)
    {
        *VAR14 = *(VAR13 *)VAR12->VAR34;
    }
    if (VAR12->VAR34 || VAR12->VAR16)
    {
        *VAR4 = sizeof(VAR13);
        FUN13(VAR12, VAR14);
    }
    VAR2->VAR44 = VAR12->VAR45 - 1;
    FUN6(VAR15);
    return VAR7;
}