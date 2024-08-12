static int FUN1(VAR1 *VAR2)
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
        FUN6("");
        return -1;
    }
    if (VAR2->VAR9 != VAR10)
    {
        VAR5 = FUN4(&VAR2->VAR7);
    }
    VAR4 = FUN7(&VAR2->VAR7, VAR3);
    if (VAR4 >= VAR2->VAR4)
    {
        fprintf(VAR11, "", VAR4, VAR2->VAR4);
        return -1;
    }
    VAR2->VAR12 = VAR4 % VAR2->VAR13;
    VAR2->VAR14 = VAR4 / VAR2->VAR13;
    if (VAR2->VAR9 != VAR15)
    {
        int VAR16 = FUN7(&VAR2->VAR7, VAR2->VAR17);
        if (VAR16)
            VAR2->VAR16 = VAR16;
    }
    if (VAR2->VAR9 == VAR10)
    {
        VAR5 = FUN4(&VAR2->VAR7);
    }
    if (VAR5)
    {
        int VAR18;
        int VAR19 = 0;
        while (FUN4(&VAR2->VAR7) != 0)
            VAR19++;
        FUN8(&VAR2->VAR7, "");
        VAR18 = FUN7(&VAR2->VAR7, VAR2->VAR20);
        FUN8(&VAR2->VAR7, "");
        FUN9(&VAR2->VAR7, 2);
        if (VAR2->VAR9 != VAR15)
        {
            FUN9(&VAR2->VAR7, 3);
            if (VAR2->VAR21 == VAR22 && VAR2->VAR23 == VAR24)
            {
                FUN10(VAR2);
                fprintf(VAR11, "");
            }
            if (VAR2->VAR21 != VAR25)
            {
                int VAR26 = FUN7(&VAR2->VAR7, 3);
                if (VAR26 == 0)
                {
                    FUN6("");
                }
            }
            if (VAR2->VAR21 == VAR27)
            {
                int VAR28 = FUN7(&VAR2->VAR7, 3);
                if (VAR28 == 0)
                {
                    FUN6("");
                }
            }
        }
    }
    return 0;
}