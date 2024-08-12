int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (FUN2(&VAR2->VAR4, 22) != 0x20)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    VAR2->VAR7 = FUN4(&VAR2->VAR4, 8);
    if (FUN5(&VAR2->VAR4) != 1)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    if (FUN5(&VAR2->VAR4) != 0)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    FUN6(&VAR2->VAR4);
    FUN6(&VAR2->VAR4);
    FUN6(&VAR2->VAR4);
    VAR3 = FUN4(&VAR2->VAR4, 3);
    if (VAR3 == 0 || VAR3 == 6)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    VAR2->VAR8 = 0;
    VAR2->VAR9 = VAR10 + FUN5(&VAR2->VAR4);
    VAR2->VAR11 = FUN5(&VAR2->VAR4);
    VAR2->VAR12 = VAR2->VAR11;
    if (FUN5(&VAR2->VAR4) != 0)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    VAR2->VAR13 = FUN5(&VAR2->VAR4);
    VAR2->VAR14 = FUN5(&VAR2->VAR4);
    if (VAR3 < 6)
    {
        VAR2->VAR15 = VAR16[VAR3][0];
        VAR2->VAR17 = VAR16[VAR3][1];
        VAR2->VAR5->VAR18.VAR19 = 12;
        VAR2->VAR5->VAR18.VAR20 = 11;
    }
    else
    {
        VAR3 = FUN4(&VAR2->VAR4, 3);
        if (VAR3 == 0 || VAR3 == 7)
        {
            FUN3(VAR2->VAR5, VAR6, "");
            return -1;
        }
        if (FUN4(&VAR2->VAR4, 2))
            FUN3(VAR2->VAR5, VAR6, "");
        VAR2->VAR21 = FUN5(&VAR2->VAR4) * !VAR2->VAR5->VAR22;
        if (FUN5(&VAR2->VAR4))
            FUN3(VAR2->VAR5, VAR6, "");
        if (FUN5(&VAR2->VAR4))
            VAR2->VAR14 = 2;
        if (FUN4(&VAR2->VAR4, 5))
            FUN3(VAR2->VAR5, VAR6, "");
        if (FUN4(&VAR2->VAR4, 5) != 1)
            FUN3(VAR2->VAR5, VAR6, "");
    }
    if (VAR3 == 6)
    {
        int VAR23 = FUN4(&VAR2->VAR4, 4);
        FUN7(&VAR2->VAR4, 9);
        FUN6(&VAR2->VAR4);
        FUN7(&VAR2->VAR4, 9);
        if (VAR23 == 15)
        {
            VAR2->VAR5->VAR18.VAR19 = FUN4(&VAR2->VAR4, 8);
            VAR2->VAR5->VAR18.VAR20 = FUN4(&VAR2->VAR4, 8);
        }
        else
        {
            VAR2->VAR5->VAR18 = VAR24[VAR23];
        }
        if (VAR2->VAR5->VAR18.VAR19 == 0)
            FUN3(VAR2->VAR5, VAR6, "");
    }
    VAR2->VAR25 = VAR2->VAR26 = FUN4(&VAR2->VAR4, 5);
    FUN6(&VAR2->VAR4);
    if (VAR2->VAR14)
    {
        FUN7(&VAR2->VAR4, 3);
        FUN7(&VAR2->VAR4, 2);
    }
    while (FUN5(&VAR2->VAR4) != 0)
    {
        FUN7(&VAR2->VAR4, 8);
    }
    VAR2->VAR27 = 1;
    VAR2->VAR28 = VAR2->VAR29 = VAR30;
    FUN8(VAR2);
    return 0;
}