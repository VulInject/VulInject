static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    GetBitContext VAR8;
    if (!VAR2->VAR9 || !VAR2->VAR10)
        return -1;
    VAR2->VAR11 = VAR12;
    VAR4->VAR7.VAR2 = VAR2;
    if (FUN2(VAR2) < 0)
        return -1;
    if (FUN3(VAR4) < 0)
        return -1;
    VAR2->VAR13 = VAR2->VAR14;
    VAR2->VAR15 = VAR2->VAR16;
    if (VAR2->VAR17 == VAR18)
    {
        int VAR19 = 0;
        FUN4(&VAR8, VAR2->VAR10, VAR2->VAR9);
        FUN5(VAR2, &VAR8);
        VAR19 = VAR2->VAR9 * 8 - FUN6(&VAR8);
        if (VAR19 > 0)
        {
            FUN7(VAR2, VAR20, "", VAR19, FUN8(&VAR8, VAR19));
        }
        else
        {
            FUN7(VAR2, VAR20, "", -VAR19);
        }
    }
    VAR2->VAR21 = !!(VAR2->VAR22);
    VAR7->VAR23 = (VAR2->VAR13 + 15) >> 4;
    VAR7->VAR24 = (VAR2->VAR15 + 15) >> 4;
    if (FUN9(&VAR4->VAR25, VAR7->VAR23, VAR7->VAR24) < 0)
        return -1;
    if (FUN9(&VAR4->VAR25, VAR7->VAR23, VAR7->VAR24) < 0)
        return -1;
    if (FUN9(&VAR4->VAR26, VAR7->VAR23, VAR7->VAR24) < 0)
        return -1;
    if (FUN9(&VAR4->VAR27, VAR7->VAR23, VAR7->VAR24) < 0)
        return -1;
    VAR4->VAR28 = (VAR29 *)FUN10(VAR7->VAR30 * 4);
    if (!VAR4->VAR28)
        return -1;
    if (VAR4->VAR31 > VAR32)
    {
        if (FUN9(&VAR4->VAR33, VAR7->VAR23, VAR7->VAR24) < 0)
            return -1;
        if (FUN9(&VAR4->VAR34, VAR7->VAR23, VAR7->VAR24) < 0)
            return -1;
    }
    return 0;
}