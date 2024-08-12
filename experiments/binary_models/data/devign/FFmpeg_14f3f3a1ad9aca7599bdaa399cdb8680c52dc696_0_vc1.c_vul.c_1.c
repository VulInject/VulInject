static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR2->VAR5 = 1;
    VAR2->VAR6 = FUN2(VAR4, 3);
    if (VAR2->VAR6 >= 5)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "", VAR2->VAR6);
    }
    VAR2->VAR10 = FUN2(VAR4, 2);
    if (VAR2->VAR10 != 1)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "");
        return -1;
    }
    VAR2->VAR11 = FUN2(VAR4, 3);
    VAR2->VAR12 = FUN2(VAR4, 5);
    VAR2->VAR13 = FUN2(VAR4, 1);
    VAR2->VAR7.VAR8->VAR14 = (FUN2(VAR4, 12) + 1) << 1;
    VAR2->VAR7.VAR8->VAR15 = (FUN2(VAR4, 12) + 1) << 1;
    VAR2->VAR16 = FUN4(VAR4);
    VAR2->VAR17 = FUN4(VAR4);
    if (VAR2->VAR17)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "");
        return -1;
    }
    VAR2->VAR18 = FUN4(VAR4);
    VAR2->VAR19 = FUN4(VAR4);
    FUN4(VAR4);
    VAR2->VAR20 = FUN4(VAR4);
    if (VAR2->VAR20)
    {
        FUN3(VAR2->VAR7.VAR8, VAR9, "");
        return -1;
    }
    if (FUN4(VAR4))
    {
        int VAR21, VAR22, VAR23 = 0;
        FUN3(VAR2->VAR7.VAR8, VAR24, "");
        VAR21 = FUN2(VAR4, 14);
        VAR22 = FUN2(VAR4, 14);
        FUN3(VAR2->VAR7.VAR8, VAR24, "", VAR21, VAR22);
        if (FUN4(VAR4))
            VAR23 = FUN2(VAR4, 4);
        if (VAR23 == 15)
        {
            VAR21 = FUN2(VAR4, 8);
            VAR22 = FUN2(VAR4, 8);
        }
        if (FUN4(VAR4))
        {
            if (FUN4(VAR4))
            {
                FUN2(VAR4, 16);
            }
            else
            {
                FUN2(VAR4, 8);
                FUN2(VAR4, 4);
            }
        }
        if (FUN4(VAR4))
        {
            VAR2->VAR25 = FUN2(VAR4, 8);
            VAR2->VAR26 = FUN2(VAR4, 8);
            VAR2->VAR27 = FUN2(VAR4, 8);
        }
    }
    VAR2->VAR28 = FUN4(VAR4);
    if (VAR2->VAR28)
    {
        int VAR29;
        VAR2->VAR30 = FUN2(VAR4, 5);
        FUN2(VAR4, 4);
        FUN2(VAR4, 4);
        for (VAR29 = 0; VAR29 < VAR2->VAR30; VAR29++)
        {
            FUN2(VAR4, 16);
            FUN2(VAR4, 16);
        }
    }
    return 0;
}