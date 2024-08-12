static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    GetBitContext VAR6;
    if (!VAR2->VAR7 || !VAR2->VAR8)
        return -1;
    VAR2->VAR9 = VAR10;
    VAR4->VAR2 = VAR2;
    if (FUN2(VAR4) < 0)
        return -1;
    VAR2->VAR11 = VAR2->VAR12;
    VAR2->VAR13 = VAR2->VAR14;
    if (VAR2->VAR15 == VAR16)
    {
        int VAR17 = 0;
        FUN3(&VAR6, VAR2->VAR8, VAR2->VAR7);
        FUN4(VAR2, &VAR6);
        VAR17 = VAR2->VAR7 * 8 - FUN5(&VAR6);
        if (VAR17 > 0)
        {
            FUN6(VAR2, VAR18, "", VAR17, FUN7(&VAR6, VAR17));
        }
        else
        {
            FUN6(VAR2, VAR18, "", -VAR17);
        }
    }
    VAR4->VAR19 = (VAR2->VAR11 + 15) >> 4;
    VAR4->VAR20 = (VAR2->VAR13 + 15) >> 4;
    if (FUN8(&VAR4->VAR21, VAR4->VAR19, VAR4->VAR20) < 0)
        return -1;
    if (FUN8(&VAR4->VAR21, VAR4->VAR19, VAR4->VAR20) < 0)
        return -1;
    if (FUN8(&VAR4->VAR22, VAR4->VAR19, VAR4->VAR20) < 0)
        return -1;
    if (FUN8(&VAR4->VAR23, VAR4->VAR19, VAR4->VAR20) < 0)
        return -1;
    VAR4->VAR24 = (VAR25 *)FUN9((VAR4->VAR19 + 1) * 4);
    if (!VAR4->VAR24)
        return -1;
    if (VAR4->VAR26 > VAR27)
    {
        if (FUN8(&VAR4->VAR28, VAR4->VAR19, VAR4->VAR20) < 0)
            return -1;
        if (FUN8(&VAR4->VAR29, VAR4->VAR19, VAR4->VAR20) < 0)
            return -1;
    }
    return 0;
}