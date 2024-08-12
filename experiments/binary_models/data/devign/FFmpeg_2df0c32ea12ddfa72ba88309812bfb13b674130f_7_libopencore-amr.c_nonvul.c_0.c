static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    VAR13 *VAR14 = NULL;
    const VAR13 *VAR15 = VAR6 ? (const VAR13 *)VAR6->VAR16[0] : NULL;
    if (VAR9->VAR17 != VAR2->VAR18)
    {
        VAR9->VAR19 = FUN2(VAR2->VAR18, VAR2);
        VAR9->VAR17 = VAR2->VAR18;
    }
    if ((VAR12 = FUN3(VAR4, 32)))
    {
        FUN4(VAR2, VAR20, "");
        return VAR12;
    }
    if (VAR6)
    {
        if (VAR6->VAR21 < VAR2->VAR22)
        {
            VAR14 = FUN5(VAR2->VAR22 * sizeof(*VAR14));
            if (!VAR14)
                return FUN6(VAR23);
            memcpy(VAR14, VAR15, VAR6->VAR21 * sizeof(*VAR14));
            VAR15 = VAR14;
            if (VAR6->VAR21 < VAR2->VAR22 - VAR2->VAR24)
                VAR9->VAR25 = -1;
        }
        if ((VAR12 = FUN7(&VAR9->VAR26, VAR6)) < 0)
        {
            FUN8(&VAR14);
            return VAR12;
        }
    }
    else
    {
        if (VAR9->VAR25 < 0)
            return 0;
        VAR14 = FUN5(VAR2->VAR22 * sizeof(*VAR14));
        if (!VAR14)
            return FUN6(VAR23);
        VAR15 = VAR14;
        VAR9->VAR25 = -1;
    }
    VAR11 = FUN9(VAR9->VAR27, VAR9->VAR19, VAR15, VAR4->VAR16, 0);
    FUN10(VAR2, "", VAR11, VAR9->VAR19, VAR6[0]);
    FUN11(&VAR9->VAR26, VAR2->VAR22, &VAR4->VAR28, &VAR4->VAR29);
    VAR4->VAR30 = VAR11;
    *VAR7 = 1;
    FUN8(&VAR14);
    return 0;
}