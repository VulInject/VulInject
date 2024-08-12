static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    int VAR13;
    VAR13 = FUN2(VAR9->VAR14[0], (void **)VAR4->VAR15, VAR4->VAR16);
    if (VAR13 > 0 && VAR9->VAR17 == VAR18)
        VAR9->VAR17 = VAR4->VAR17;
    FUN3(&VAR4);
    if (VAR13 < 0)
        return VAR13;
    if (!VAR9->VAR19 && VAR9->VAR20)
    {
        VAR13 = FUN4(VAR6);
        if (VAR13 < 0)
            return VAR13;
    }
    if (VAR9->VAR19)
    {
        while (FUN5(VAR9->VAR14[0]) >= VAR9->VAR21)
        {
            VAR13 = FUN6(VAR9, VAR11);
            if (VAR13 < 0)
                return VAR13;
        }
    }
    return 0;
}