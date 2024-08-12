static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    struct VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    GetBitContext VAR12;
    if (VAR6->VAR13 == 0)
        return 0;
    FUN2(&VAR12, VAR6->VAR14, VAR6->VAR13 * 8);
    if (FUN3(&VAR12, 11) != VAR15)
        return VAR16;
    VAR10 = FUN3(&VAR12, 13) + 3;
    if (VAR10 > VAR6->VAR13)
        return VAR16;
    if ((VAR11 = FUN4(VAR8, &VAR12)) < 0)
        return VAR11;
    if (!VAR8->VAR17)
    {
        if (!VAR2->VAR18)
        {
            *VAR4 = 0;
            return VAR6->VAR13;
        }
        else
        {
            if ((VAR11 = FUN5(VAR2)) < 0)
                return VAR11;
            VAR8->VAR17 = 1;
        }
    }
    if (FUN6(&VAR12, 12) == 0xfff)
    {
        FUN7(VAR8->VAR19.VAR2, VAR20, ""
                                                     "");
        return VAR16;
    }
    if ((VAR11 = FUN8(VAR2, VAR3, VAR4, &VAR12)) < 0)
        return VAR11;
    return VAR10;