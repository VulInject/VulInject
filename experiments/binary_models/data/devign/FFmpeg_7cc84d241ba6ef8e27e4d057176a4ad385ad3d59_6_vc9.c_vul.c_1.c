static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR6->VAR8 = FUN2(VAR4, 2);
    FUN3(VAR2, VAR9, "", VAR6->VAR8);
    if (VAR6->VAR8 > VAR10)
    {
        VAR6->VAR11 = FUN2(VAR4, 3);
        VAR6->VAR12 = FUN2(VAR4, 2);
        if (VAR6->VAR12 != 1)
        {
            FUN3(VAR2, VAR13, "");
            return -1;
        }
    }
    else
    {
        VAR6->VAR14 = FUN2(VAR4, 2);
        if (VAR6->VAR14)
        {
            FUN3(VAR2, VAR13, "", VAR6->VAR14);
        }
    }
    VAR6->VAR15 = FUN2(VAR4, 3);
    VAR6->VAR16 = FUN2(VAR4, 5);
    VAR6->VAR17.VAR18 = FUN2(VAR4, 1);
    if (VAR6->VAR8 <= VAR10)
    {
        VAR6->VAR19 = FUN2(VAR4, 1);
        if (VAR6->VAR19)
        {
            FUN3(VAR2, VAR13, "");
        }
        VAR6->VAR20 = FUN2(VAR4, 1);
        VAR6->VAR21 = FUN2(VAR4, 1);
        if (!VAR6->VAR21)
        {
            FUN3(VAR2, VAR13, "");
        }
    }
    VAR6->VAR22 = FUN2(VAR4, 1);
    if (!VAR6->VAR8 && !VAR6->VAR22)
    {
        FUN3(VAR2, VAR13, "");
        return -1;
    }
    VAR6->VAR23 = FUN2(VAR4, 1);
    if (!VAR6->VAR8 && VAR6->VAR23)
    {
        FUN3(VAR2, VAR13, "");
        return -1;
    }
    VAR6->VAR24 = FUN2(VAR4, 2);
    VAR6->VAR25 = FUN2(VAR4, 1);
    if (VAR6->VAR8 <= VAR10)
    {
        VAR6->VAR26 = FUN2(VAR4, 1);
        if (VAR6->VAR26)
        {
            FUN3(VAR2, VAR13, "");
            return -1;
        }
    }
    VAR6->VAR27 = FUN2(VAR4, 1);
    if (VAR6->VAR8 <= VAR10)
    {
        VAR6->VAR17.VAR28 = FUN2(VAR4, 1);
        VAR6->VAR29 = FUN2(VAR4, 1);
    }
    VAR6->VAR17.VAR30 = VAR2->VAR30 = FUN2(VAR4, 3);
    VAR6->VAR31 = FUN2(VAR4, 2);
    if (VAR6->VAR8 <= VAR10)
    {
        VAR6->VAR32 = FUN2(VAR4, 1);
        VAR6->VAR33 = FUN2(VAR4, 1);
        if (!VAR6->VAR33)
        {
            FUN3(VAR2, VAR13, "");
        }
        FUN3(VAR2, VAR34, ""
                                   ""
                                   ""
                                   "",
               VAR6->VAR8, VAR6->VAR15, VAR6->VAR16, VAR6->VAR17.VAR18, VAR6->VAR20, VAR6->VAR22, VAR6->VAR23, VAR6->VAR29, VAR6->VAR25, VAR6->VAR27, VAR6->VAR17.VAR28, VAR6->VAR24, VAR6->VAR31, VAR2->VAR30);
        return 0;
    }
    else
        return FUN4(VAR2, VAR4);
}