int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2->VAR4 - 1) + 1;
    int VAR5 = 0, VAR4, VAR6;
    if (FUN3(&VAR2->VAR7) > VAR2->VAR7.VAR8 - 20)
        return -1;
    for (VAR6 = 0; VAR6 < 32; VAR6++)
    {
        if (FUN4(&VAR2->VAR7))
            break;
    }
    if (VAR6 != FUN5(VAR2))
    {
        FUN6(VAR2->VAR9, VAR10, "");
        return -1;
    }
    if (VAR2->VAR11 != VAR12)
    {
        VAR5 = FUN4(&VAR2->VAR7);
    }
    VAR4 = FUN7(&VAR2->VAR7, VAR3);
    if (VAR4 >= VAR2->VAR4)
    {
        FUN6(VAR2->VAR9, VAR10, "", VAR4, VAR2->VAR4);
        return -1;
    }
    VAR2->VAR13 = VAR4 % VAR2->VAR14;
    VAR2->VAR15 = VAR4 / VAR2->VAR14;
    if (VAR2->VAR11 != VAR16)
    {
        int VAR17 = FUN7(&VAR2->VAR7, VAR2->VAR18);
        if (VAR17)
            VAR2->VAR19 = VAR2->VAR17 = VAR17;
    }
    if (VAR2->VAR11 == VAR12)
    {
        VAR5 = FUN4(&VAR2->VAR7);
    }
    if (VAR5)
    {
        int VAR20 = 0;
        while (FUN4(&VAR2->VAR7) != 0)
            VAR20++;
        FUN8(&VAR2->VAR7, "");
        FUN9(&VAR2->VAR7, VAR2->VAR21);
        FUN8(&VAR2->VAR7, "");
        FUN9(&VAR2->VAR7, 2);
        if (VAR2->VAR11 != VAR16)
        {
            FUN9(&VAR2->VAR7, 3);
            if (VAR2->VAR22 == VAR23 && VAR2->VAR24 == VAR25)
            {
                FUN10(VAR2, &VAR2->VAR7);
                FUN6(VAR2->VAR9, VAR10, "");
            }
            if (VAR2->VAR22 != VAR26)
            {
                int VAR27 = FUN7(&VAR2->VAR7, 3);
                if (VAR27 == 0)
                {
                    FUN6(VAR2->VAR9, VAR10, "");
                }
            }
            if (VAR2->VAR22 == VAR28)
            {
                int VAR29 = FUN7(&VAR2->VAR7, 3);
                if (VAR29 == 0)
                {
                    FUN6(VAR2->VAR9, VAR10, "");
                }
            }
        }
    }
    return 0;
}