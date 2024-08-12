static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (VAR2->VAR5 == VAR6)
    {
        FUN2(VAR2, VAR7, "");
        return VAR8;
    }
    VAR2->VAR9 = VAR10[FUN3(&VAR2->VAR11, VAR12.VAR13, VAR14, 2)];
    if (VAR2->VAR9 < -1)
    {
        FUN2(VAR2, VAR7, "");
        return VAR8;
    }
    else if (!VAR2->VAR9)
    {
        return FUN4(VAR2);
    }
    VAR3 = FUN5(&VAR2->VAR11, 5);
    if (VAR2->VAR15 == VAR16)
        VAR2->VAR17 = VAR18[0][VAR3];
    else
    {
        VAR2->VAR17 = VAR18[VAR2->VAR15 - 1][VAR3];
    }
    if (VAR3 < 9)
        VAR2->VAR19 = FUN5(&VAR2->VAR11, 1);
    if (VAR2->VAR15 == VAR20)
        VAR2->VAR21 = FUN5(&VAR2->VAR11, 1);
    if (VAR2->VAR22 == 1)
        VAR2->VAR23 = FUN6(&VAR2->VAR11, 0, 3);
    VAR2->VAR24 = FUN5(&VAR2->VAR11, 1);
    if (VAR2->VAR17 < 13)
    {
        if (!VAR2->VAR24)
        {
            VAR2->VAR24 = FUN5(&VAR2->VAR11, 2);
            if (VAR2->VAR24)
                FUN2(VAR2, VAR7, "", VAR2->VAR24);
        }
    }
    else
    {
        if (!VAR2->VAR24)
        {
            if (FUN5(&VAR2->VAR11, 1))
                FUN2(VAR2, VAR7, "", VAR2->VAR24);
        }
        VAR2->VAR24 = 1 - VAR2->VAR24;
    }
    if (VAR2->VAR24 == VAR25)
    {
        VAR4 = FUN7(&VAR2->VAR26, VAR2);
        if (VAR4 < 0)
            return -1;
        FUN2(VAR2->VAR27, VAR28, ""
                                       "",
               VAR4 >> 1, VAR4 & 1);
    }
    VAR4 = FUN7(&VAR2->VAR29, VAR2);
    if (VAR4 < 0)
        return -1;
    FUN2(VAR2->VAR27, VAR28, ""
                                   "",
           VAR4 >> 1, VAR4 & 1);
    FUN7(&VAR2->VAR30, VAR2);
    if (VAR4 < 0)
        return -1;
    FUN2(VAR2->VAR27, VAR28, ""
                                   "",
           VAR4 >> 1, VAR4 & 1);
    VAR2->VAR31 = &VAR32[FUN5(&VAR2->VAR11, 2)];
    VAR2->VAR33 = &VAR34[FUN5(&VAR2->VAR11, 2)];
    if (VAR2->VAR35)
    {
        FUN8(VAR2);
    }
    if (VAR2->VAR36)
    {
        VAR2->VAR37 = FUN5(&VAR2->VAR11, 1);
        if (VAR2->VAR37)
        {
            VAR2->VAR38 = FUN5(&VAR2->VAR11, 2);
            FUN2(VAR2, VAR39, "", (VAR2->VAR38 & 2) ? 4 : 8, (VAR2->VAR38 & 1) ? 4 : 8);
        }
    }
    return 0;
}