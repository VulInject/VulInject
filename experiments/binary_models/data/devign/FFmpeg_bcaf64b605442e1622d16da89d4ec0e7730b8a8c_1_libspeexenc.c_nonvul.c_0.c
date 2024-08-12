static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR6 ? (VAR11 *)VAR6->VAR13[0] : NULL;
    int VAR14;
    if (VAR12)
    {
        if (VAR2->VAR15 == 2)
            FUN2(VAR12, VAR9->VAR16.VAR17, &VAR9->VAR18);
        FUN3(VAR9->VAR19, VAR12, &VAR9->VAR18);
        VAR9->VAR20++;
        if ((VAR14 = FUN4(&VAR9->VAR21, VAR6)) < 0)
            return VAR14;
    }
    else
    {
        if (!VAR9->VAR20)
            return 0;
        while (VAR9->VAR20 < VAR9->VAR22)
        {
            FUN5(&VAR9->VAR18, 15, 5);
            VAR9->VAR20++;
        }
    }
    if (VAR9->VAR20 == VAR9->VAR22)
    {
        VAR9->VAR20 = 0;
        if ((VAR14 = FUN6(VAR2, VAR4, FUN7(&VAR9->VAR18))) < 0)
            return VAR14;
        VAR14 = FUN8(&VAR9->VAR18, VAR4->VAR13, VAR4->VAR23);
        FUN9(&VAR9->VAR18);
        FUN10(&VAR9->VAR21, VAR9->VAR22 * VAR2->VAR17, &VAR4->VAR24, &VAR4->VAR25);
        VAR4->VAR23 = VAR14;
        *VAR7 = 1;
        return 0;
    }
    return 0;
}