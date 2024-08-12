int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    FUN2(VAR2, VAR7, "", FUN3(VAR6, 32));
    VAR4->VAR8 = FUN4(VAR6, 2);
    if (VAR4->VAR8 == VAR9)
    {
        FUN2(VAR2, VAR10, "");
    }
    if (VAR4->VAR8 == VAR11)
    {
        VAR4->VAR12 = VAR13;
        VAR4->VAR14 = VAR15;
        return FUN5(VAR4, VAR6);
    }
    else
    {
        VAR4->VAR12 = VAR16;
        VAR4->VAR14 = VAR17;
        VAR4->VAR18 = FUN6(VAR6);
        VAR4->VAR19 = FUN6(VAR6);
        if (VAR4->VAR18)
        {
            FUN2(VAR2, VAR20, "");
            return -1;
        }
        if (VAR4->VAR19)
        {
            FUN2(VAR2, VAR20, "");
        }
    }
    VAR4->VAR21 = FUN4(VAR6, 3);
    VAR4->VAR22 = FUN4(VAR6, 5);
    VAR4->VAR23.VAR24 = FUN6(VAR6);
    if (VAR4->VAR23.VAR24 == 1 && VAR4->VAR8 == VAR25)
    {
        FUN2(VAR2, VAR20, "");
    }
    if (VAR4->VAR23.VAR2->VAR26 >= VAR27)
        VAR4->VAR23.VAR24 = 0;
    VAR4->VAR28 = FUN6(VAR6);
    VAR4->VAR29 = FUN6(VAR6);
    VAR4->VAR30 = FUN6(VAR6);
    if (!VAR4->VAR30)
    {
        VAR4->VAR31.VAR32 = VAR33;
        VAR4->VAR31.VAR34 = VAR35;
        VAR4->VAR31.VAR36 = VAR37;
        VAR4->VAR31.VAR38 = VAR39;
        VAR4->VAR31.VAR40 = VAR41;
        VAR4->VAR31.VAR42 = VAR35;
        VAR4->VAR31.VAR43 = VAR37;
        VAR4->VAR31.VAR44 = VAR39;
    }
    VAR4->VAR45 = FUN6(VAR6);
    if (!VAR4->VAR8 && !VAR4->VAR45)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR4->VAR46 = FUN6(VAR6);
    if (!VAR4->VAR8 && VAR4->VAR46)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR4->VAR47 = FUN4(VAR6, 2);
    VAR4->VAR48 = FUN6(VAR6);
    VAR4->VAR49 = FUN6(VAR6);
    if (VAR4->VAR49)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR4->VAR50 = FUN6(VAR6);
    VAR4->VAR23.VAR51 = FUN6(VAR6);
    VAR4->VAR52 = FUN6(VAR6);
    if (VAR4->VAR52 && VAR4->VAR8 == VAR25)
    {
        FUN2(VAR2, VAR53, "");
    }
    VAR4->VAR23.VAR54 = VAR2->VAR54 = FUN4(VAR6, 3);
    VAR4->VAR55 = FUN4(VAR6, 2);
    VAR4->VAR56 = FUN6(VAR6);
    if (VAR4->VAR19)
    {
        VAR4->VAR23.VAR2->VAR57 = VAR4->VAR23.VAR2->VAR58 = FUN4(VAR6, 11);
        VAR4->VAR23.VAR2->VAR59 = VAR4->VAR23.VAR2->VAR60 = FUN4(VAR6, 11);
        FUN7(VAR6, 5);
        VAR4->VAR28 = FUN6(VAR6);
        if (FUN6(VAR6))
        {
            FUN2(VAR2, VAR20, "");
            return -1;
        }
        FUN7(VAR6, 3);
        VAR4->VAR61 = 0;
    }
    else
    {
        VAR4->VAR61 = FUN6(VAR6);
    }
    if (!VAR4->VAR61)
    {
        FUN2(VAR2, VAR20, "");
    }
    if (!VAR4->VAR30)
        FUN7(VAR6, 16);
    FUN2(VAR2, VAR7, ""
                                ""
                                ""
                                "",
           VAR4->VAR8, VAR4->VAR21, VAR4->VAR22, VAR4->VAR23.VAR24, VAR4->VAR29, VAR4->VAR45, VAR4->VAR46, VAR4->VAR52, VAR4->VAR48, VAR4->VAR50, VAR4->VAR23.VAR51, VAR4->VAR47, VAR4->VAR55, VAR2->VAR54);
    return 0;
}