void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    FUN2(&VAR2->VAR5);
    VAR2->VAR6 = FUN3(&VAR2->VAR5);
    VAR2->VAR7 = 0;
    FUN4(&VAR2->VAR5, 22, 0x20);
    FUN4(&VAR2->VAR5, 8, (((VAR8)VAR2->VAR3 * 30 * VAR2->VAR9->VAR10) / VAR2->VAR9->VAR11) & 0xff);
    FUN4(&VAR2->VAR5, 1, 1);
    FUN4(&VAR2->VAR5, 1, 0);
    FUN4(&VAR2->VAR5, 1, 0);
    FUN4(&VAR2->VAR5, 1, 0);
    FUN4(&VAR2->VAR5, 1, 0);
    VAR4 = FUN5(VAR2->VAR12, VAR2->VAR13);
    if (!VAR2->VAR14)
    {
        FUN4(&VAR2->VAR5, 3, VAR4);
        FUN4(&VAR2->VAR5, 1, (VAR2->VAR15 == VAR16));
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR17);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 5, VAR2->VAR18);
        FUN4(&VAR2->VAR5, 1, 0);
    }
    else
    {
        FUN4(&VAR2->VAR5, 3, 7);
        FUN4(&VAR2->VAR5, 3, 1);
        if (VAR4 == 7)
            FUN4(&VAR2->VAR5, 3, 6);
        else
            FUN4(&VAR2->VAR5, 3, VAR4);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR19);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR17);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR20);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR21);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR22);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR23);
        FUN4(&VAR2->VAR5, 1, 1);
        FUN4(&VAR2->VAR5, 3, 0);
        FUN4(&VAR2->VAR5, 3, VAR2->VAR15 == VAR16);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, 0);
        FUN4(&VAR2->VAR5, 1, VAR2->VAR24);
        FUN4(&VAR2->VAR5, 2, 0);
        FUN4(&VAR2->VAR5, 1, 1);
        FUN4(&VAR2->VAR5, 1, 0);
        if (VAR4 == 7)
        {
            FUN6(VAR2, VAR2->VAR9->VAR25);
            FUN4(&VAR2->VAR5, 4, VAR2->VAR26);
            FUN4(&VAR2->VAR5, 9, (VAR2->VAR12 >> 2) - 1);
            FUN4(&VAR2->VAR5, 1, 1);
            FUN4(&VAR2->VAR5, 9, (VAR2->VAR13 >> 2));
            if (VAR2->VAR26 == VAR27)
            {
                FUN4(&VAR2->VAR5, 8, VAR2->VAR9->VAR25.VAR28);
                FUN4(&VAR2->VAR5, 8, VAR2->VAR9->VAR25.VAR29);
            }
        }
        if (VAR2->VAR19)
            FUN4(&VAR2->VAR5, 2, 1);
        FUN4(&VAR2->VAR5, 5, VAR2->VAR18);
    }
    FUN4(&VAR2->VAR5, 1, 0);
    if (VAR2->VAR20)
    {
        VAR2->VAR30 = VAR2->VAR31 = VAR32;
    }
    else
    {
        VAR2->VAR30 = VAR2->VAR31 = VAR33;
    }
}