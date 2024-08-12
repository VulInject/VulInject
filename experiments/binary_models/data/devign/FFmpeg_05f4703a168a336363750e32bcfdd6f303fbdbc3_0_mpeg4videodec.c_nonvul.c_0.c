int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    int VAR6 = FUN2(VAR4->VAR7 - 1) + 1;
    int VAR8 = 0, VAR7, VAR9;
    if (FUN3(&VAR4->VAR10) > VAR4->VAR10.VAR11 - 20)
        return -1;
    for (VAR9 = 0; VAR9 < 32; VAR9++)
        if (FUN4(&VAR4->VAR10))
            break;
    if (VAR9 != FUN5(VAR4))
    {
        FUN6(VAR4->VAR12, VAR13, "");
        return -1;
    }
    if (VAR2->VAR14 != VAR15)
    {
        VAR8 = FUN4(&VAR4->VAR10);
    }
    VAR7 = FUN7(&VAR4->VAR10, VAR6);
    if (VAR7 >= VAR4->VAR7 || !VAR7)
    {
        FUN6(VAR4->VAR12, VAR13, "", VAR7, VAR4->VAR7);
        return -1;
    }
    VAR4->VAR16 = VAR7 % VAR4->VAR17;
    VAR4->VAR18 = VAR7 / VAR4->VAR17;
    if (VAR2->VAR14 != VAR19)
    {
        int VAR20 = FUN7(&VAR4->VAR10, VAR4->VAR21);
        if (VAR20)
            VAR4->VAR22 = VAR4->VAR20 = VAR20;
    }
    if (VAR2->VAR14 == VAR15)
        VAR8 = FUN4(&VAR4->VAR10);
    if (VAR8)
    {
        int VAR23 = 0;
        while (FUN4(&VAR4->VAR10) != 0)
            VAR23++;
        FUN8(VAR4->VAR12, &VAR4->VAR10, "");
        FUN9(&VAR4->VAR10, VAR2->VAR24);
        FUN8(VAR4->VAR12, &VAR4->VAR10, "");
        FUN9(&VAR4->VAR10, 2);
        if (VAR2->VAR14 != VAR19)
        {
            FUN9(&VAR4->VAR10, 3);
            if (VAR4->VAR25 == VAR26 && VAR2->VAR27 == VAR28)
            {
                if (FUN10(VAR2, &VAR4->VAR10) < 0)
                    return VAR29;
                FUN6(VAR4->VAR12, VAR13, "");
            }
            if (VAR4->VAR25 != VAR30)
            {
                int VAR31 = FUN7(&VAR4->VAR10, 3);
                if (VAR31 == 0)
                    FUN6(VAR4->VAR12, VAR13, "");
            }
            if (VAR4->VAR25 == VAR32)
            {
                int VAR33 = FUN7(&VAR4->VAR10, 3);
                if (VAR33 == 0)
                    FUN6(VAR4->VAR12, VAR13, "");
            }
        }
    }
    if (VAR2->VAR34)
        FUN11(VAR2, &VAR4->VAR10);
    return 0;
}