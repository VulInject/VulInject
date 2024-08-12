static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    int VAR13;
    int VAR14 = VAR4->VAR14;
    if (FUN2(VAR9->VAR15) < VAR14)
    {
        FUN3(VAR6, VAR16, "", VAR14);
        VAR13 = FUN4(VAR9->VAR15, FUN5(VAR9->VAR15) + VAR14);
        if (VAR13 < 0)
        {
            FUN3(VAR6, VAR17, "", VAR14);
            return -1;
        }
    }
    VAR13 = FUN6(VAR9->VAR15, (void **)VAR4->VAR18, VAR14);
    if (VAR13 > 0 && VAR9->VAR19 == VAR20)
        VAR9->VAR19 = VAR4->VAR21;
    FUN7(&VAR4);
    if (VAR13 < 0)
        return VAR13;
    while (FUN5(VAR9->VAR15) >= VAR9->VAR22)
        FUN8(VAR11);
    return 0;
}