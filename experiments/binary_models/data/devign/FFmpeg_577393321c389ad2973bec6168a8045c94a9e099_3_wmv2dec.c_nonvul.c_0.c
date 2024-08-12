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
        if (VAR2->VAR21 <= 10)
        {
            int VAR23[3] = {0, 2, 1};
            VAR4->VAR24 = VAR23[VAR22];
        }
        else if (VAR2->VAR21 <= 20)
        {
            int VAR23[3] = {1, 0, 2};
            VAR4->VAR24 = VAR23[VAR22];
        }
        else
        {
            int VAR23[3] = {2, 1, 0};
            VAR4->VAR24 = VAR23[VAR22];
        }
        if (VAR4->VAR25)
            VAR2->VAR26 = FUN2(&VAR2->VAR9);
        else
            VAR2->VAR26 = 0;
        if (VAR4->VAR27)
        {
            VAR4->VAR28 = FUN2(&VAR2->VAR9) ^ 1;
            if (!VAR4->VAR28)
                VAR4->VAR29 = FUN3(&VAR2->VAR9);
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
        VAR2->VAR30 = FUN2(&VAR2->VAR9);
        VAR2->VAR15 = 0;
        VAR2->VAR16 ^= 1;
        if (VAR2->VAR17->VAR18 & VAR19)
        {
            FUN4(VAR2->VAR17, VAR20, ""
                                           "",
                   VAR2->VAR13, VAR2->VAR12, VAR2->VAR14, VAR2->VAR30, VAR2->VAR11, VAR2->VAR21, VAR2->VAR26, VAR4->VAR28, VAR4->VAR29, VAR4->VAR24, VAR2->VAR15);
        }
    }
    VAR2->VAR31 = 0;
    VAR2->VAR32 = 0;
    VAR2->VAR33++;
    if (VAR4->VAR8)
    {
        FUN6(&VAR4->VAR34, 2 * VAR2->VAR21, (VAR2->VAR21 - 1) | 1, VAR2->VAR35);
        FUN7(&VAR4->VAR2.VAR36, 0, 0, (VAR4->VAR2.VAR37 >> 1) - 1, (VAR4->VAR2.VAR38 >> 1) - 1, VAR39);
        return 1;
    }
    return 0;
}