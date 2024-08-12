static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    if (VAR9->VAR12)
        return 0;
    memcpy(VAR9->VAR13, VAR9->VAR13 + VAR14, VAR15 * sizeof(*VAR9->VAR13));
    if (VAR6)
    {
        memcpy(VAR9->VAR13 + VAR15, VAR6->VAR16[0], VAR6->VAR17 * sizeof(*VAR9->VAR13));
        if (VAR6->VAR17 < VAR14)
        {
            memset(VAR9->VAR13 + VAR15 + VAR6->VAR17, 0, (VAR14 - VAR6->VAR17) * sizeof(*VAR9->VAR13));
            if (VAR6->VAR17 >= VAR15)
                VAR9->VAR12 = 1;
        }
        if ((VAR11 = FUN2(&VAR9->VAR18, VAR6)) < 0)
            return VAR11;
    }
    else
    {
        memset(VAR9->VAR13 + VAR15, 0, VAR14 * sizeof(*VAR9->VAR13));
        VAR9->VAR12 = 1;
    }
    if ((VAR11 = FUN3(VAR2, VAR4, VAR19)) < 0)
        return VAR11;
    FUN4(VAR9, VAR4->VAR16, VAR4->VAR20);
    FUN5(&VAR9->VAR18, VAR2->VAR21, &VAR4->VAR22, &VAR4->VAR23);
    *VAR7 = 1;
    return 0;
}