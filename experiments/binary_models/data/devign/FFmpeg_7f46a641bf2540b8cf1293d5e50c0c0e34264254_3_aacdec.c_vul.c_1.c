static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    struct VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    GetBitContext VAR12;
    if ((VAR11 = FUN2(&VAR12, VAR6->VAR13, VAR6->VAR14)) < 0)
        return VAR11;
    if (FUN3(&VAR12, 11) != VAR15)
        return VAR16;
    VAR10 = FUN3(&VAR12, 13) + 3;
    if (VAR10 > VAR6->VAR14)
        return VAR16;
    if ((VAR11 = FUN4(VAR8, &VAR12)) < 0)
        return VAR11;
    if (!VAR8->VAR17)
    {
        if (!VAR2->VAR18)
        {
            *VAR4 = 0;
            return VAR6->VAR14;
        }
        else
        {
            FUN5(&VAR8->VAR19);
            if ((VAR11 = FUN6(&VAR8->VAR19, VAR2, &VAR8->VAR19.VAR20[1].VAR21, VAR2->VAR18, VAR2->VAR22 * 8, 1)) < 0)
            {
                FUN7(&VAR8->VAR19);
                return VAR11;
            }
            VAR8->VAR17 = 1;
        }
    }
    if (FUN8(&VAR12, 12) == 0xfff)
    {
        FUN9(VAR8->VAR19.VAR2, VAR23, ""
                                                     "");
        return VAR16;
    }
    switch (VAR8->VAR19.VAR20[1].VAR21.VAR24)
    {
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        VAR11 = FUN10(VAR2, VAR3, VAR4, &VAR12);
        break;
    default:
        VAR11 = FUN11(VAR2, VAR3, VAR4, &VAR12, VAR6);
    }
    if (VAR11 < 0)
        return VAR11;
    return VAR10;
}