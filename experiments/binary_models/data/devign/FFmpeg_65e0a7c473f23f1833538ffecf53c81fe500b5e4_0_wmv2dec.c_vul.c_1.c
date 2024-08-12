int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = (VAR3 *)VAR2;
    if (VAR2->VAR5 == VAR6)
    {
        if (VAR4->VAR7)
            VAR4->VAR8 = FUN2(&VAR2->VAR9);
        else
            VAR4->VAR8 = 0;
        if (!VAR4->VAR8)
        {
            if (VAR4->VAR10)
                VAR2->VAR11 = FUN2(&VAR2->VAR9);
            else
                VAR2->VAR11 = 0;
            if (!VAR2->VAR11)
            {
                VAR2->VAR12 = FUN3(&VAR2->VAR9);
                VAR2->VAR13 = FUN3(&VAR2->VAR9);
            }
            VAR2->VAR14 = FUN2(&VAR2->VAR9);
        }
        VAR2->VAR15 = 0;
        VAR2->VAR16 = 1;
        if (VAR2->VAR17->VAR18 & VAR19)
        {
            FUN4(VAR2->VAR17, VAR20, "", VAR2->VAR21, VAR2->VAR12, VAR2->VAR13, VAR2->VAR14, VAR2->VAR11, VAR4->VAR8);
        }
    }
    else
    {
        int VAR22;
        VAR4->VAR8 = 0;
        FUN5(VAR4);
        VAR22 = FUN3(&VAR2->VAR9);
        VAR4->VAR23 = FUN6(VAR2, VAR22);
        if (VAR4->VAR24)
            VAR2->VAR25 = FUN2(&VAR2->VAR9);
        else
            VAR2->VAR25 = 0;
        if (VAR4->VAR26)
        {
            VAR4->VAR27 = FUN2(&VAR2->VAR9) ^ 1;
            if (!VAR4->VAR27)
                VAR4->VAR28 = FUN3(&VAR2->VAR9);
        }
        if (VAR4->VAR10)
            VAR2->VAR11 = FUN2(&VAR2->VAR9);
        else
            VAR2->VAR11 = 0;
        if (!VAR2->VAR11)
        {
            VAR2->VAR13 = FUN3(&VAR2->VAR9);
            VAR2->VAR12 = VAR2->VAR13;
        }
        VAR2->VAR14 = FUN2(&VAR2->VAR9);
        VAR2->VAR29 = FUN2(&VAR2->VAR9);
        VAR2->VAR15 = 0;
        VAR2->VAR16 ^= 1;
        if (VAR2->VAR17->VAR18 & VAR19)
        {
            FUN4(VAR2->VAR17, VAR20, ""
                                           "",
                   VAR2->VAR13, VAR2->VAR12, VAR2->VAR14, VAR2->VAR29, VAR2->VAR11, VAR2->VAR21, VAR2->VAR25, VAR4->VAR27, VAR4->VAR28, VAR4->VAR23, VAR2->VAR15);
        }
    }
    VAR2->VAR30 = 0;
    VAR2->VAR31 = 0;
    VAR2->VAR32++;
    if (VAR4->VAR8)
    {
        FUN7(&VAR4->VAR33, &VAR2->VAR34, &VAR2->VAR9, &VAR2->VAR35, &VAR2->VAR36, 2 * VAR2->VAR21, (VAR2->VAR21 - 1) | 1, VAR2->VAR37, VAR2->VAR38);
        FUN8(&VAR4->VAR2.VAR39, 0, 0, (VAR4->VAR2.VAR35 >> 1) - 1, (VAR4->VAR2.VAR36 >> 1) - 1, VAR40);
        return 1;
    }
    return 0;
}