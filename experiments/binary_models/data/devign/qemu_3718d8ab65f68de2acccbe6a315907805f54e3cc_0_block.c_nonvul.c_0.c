int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int64_t VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11;
    int VAR12 = 0;
    VAR13 *VAR14 = NULL;
    char VAR15[VAR16];
    if (!VAR4)
        return -VAR17;
    if (!VAR2->VAR18)
    {
        return -VAR19;
    }
    if (FUN2(VAR2, VAR20, NULL) || FUN2(VAR2->VAR18, VAR20, NULL))
    {
        return -VAR21;
    }
    VAR10 = VAR2->VAR18->VAR22;
    FUN3(VAR15, sizeof(VAR15), VAR2->VAR18->VAR15);
    VAR11 = VAR2->VAR18->VAR11;
    if (VAR10)
    {
        if (FUN4(VAR2->VAR18, VAR11 | VAR23, NULL))
        {
            return -VAR24;
        }
    }
    VAR7 = FUN5(VAR2);
    if (VAR7 < 0)
    {
        VAR12 = VAR7;
        goto VAR25;
    }
    VAR8 = FUN5(VAR2->VAR18);
    if (VAR8 < 0)
    {
        VAR12 = VAR8;
        goto VAR25;
    }
    if (VAR7 > VAR8)
    {
        VAR12 = FUN6(VAR2->VAR18, VAR7);
        if (VAR12 < 0)
        {
            goto VAR25;
        }
    }
    VAR6 = VAR7 >> VAR26;
    VAR14 = FUN7(VAR27 * VAR28);
    for (VAR5 = 0; VAR5 < VAR6; VAR5 += VAR9)
    {
        VAR12 = FUN8(VAR2, VAR5, VAR27, &VAR9);
        if (VAR12 < 0)
        {
            goto VAR25;
        }
        if (VAR12)
        {
            VAR12 = FUN9(VAR2, VAR5, VAR14, VAR9);
            if (VAR12 < 0)
            {
                goto VAR25;
            }
            VAR12 = FUN10(VAR2->VAR18, VAR5, VAR14, VAR9);
            if (VAR12 < 0)
            {
                goto VAR25;
            }
        }
    }
    if (VAR4->VAR29)
    {
        VAR12 = VAR4->FUN11(VAR2);
        if (VAR12 < 0)
        {
            goto VAR25;
        }
        FUN12(VAR2);
    }
    if (VAR2->VAR18)
    {
        FUN12(VAR2->VAR18);
    }
    VAR12 = 0;
VAR25:
    FUN13(VAR14);
    if (VAR10)
    {
        FUN4(VAR2->VAR18, VAR11 & ~VAR23, NULL);
    }
    return VAR12;
}