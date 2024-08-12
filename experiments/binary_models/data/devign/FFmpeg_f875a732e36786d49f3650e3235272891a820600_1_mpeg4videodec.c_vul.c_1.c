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
    if (VAR2->VAR13 == VAR14)
    {
        int VAR15 = 0, VAR16 = 0;
        while (VAR2->VAR17.VAR18[VAR2->VAR19[VAR4]])
        {
            if (!VAR15)
                FUN8(&VAR2->VAR20->VAR21, VAR16++, 0);
            VAR4++;
            if (++VAR15 == VAR2->VAR22)
                VAR15 = 0;
        }
        if (VAR4 >= VAR2->VAR4)
            return -1;
    }
    VAR2->VAR15 = VAR4 % VAR2->VAR22;
    VAR2->VAR16 = VAR4 / VAR2->VAR22;
    if (VAR2->VAR11 != VAR23)
    {
        int VAR24 = FUN7(&VAR2->VAR7, VAR2->VAR25);
        if (VAR24)
            VAR2->VAR26 = VAR2->VAR24 = VAR24;
    }
    if (VAR2->VAR11 == VAR12)
    {
        VAR5 = FUN4(&VAR2->VAR7);
    }
    if (VAR5)
    {
        int VAR27 = 0;
        while (FUN4(&VAR2->VAR7) != 0)
            VAR27++;
        FUN9(&VAR2->VAR7, "");
        FUN10(&VAR2->VAR7, VAR2->VAR28);
        FUN9(&VAR2->VAR7, "");
        FUN10(&VAR2->VAR7, 2);
        if (VAR2->VAR11 != VAR23)
        {
            FUN10(&VAR2->VAR7, 3);
            if (VAR2->VAR13 == VAR29 && VAR2->VAR30 == VAR31)
            {
                FUN11(VAR2, &VAR2->VAR7);
                FUN6(VAR2->VAR9, VAR10, "");
            }
            if (VAR2->VAR13 != VAR32)
            {
                int VAR33 = FUN7(&VAR2->VAR7, 3);
                if (VAR33 == 0)
                {
                    FUN6(VAR2->VAR9, VAR10, "");
                }
            }
            if (VAR2->VAR13 == VAR14)
            {
                int VAR34 = FUN7(&VAR2->VAR7, 3);
                if (VAR34 == 0)
                {
                    FUN6(VAR2->VAR9, VAR10, "");
                }
            }
        }
    }
    return 0;
}