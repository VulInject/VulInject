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
        VAR4->VAR31.VAR34[0] = VAR35;
        VAR4->VAR31.VAR34[1] = VAR36;
        VAR4->VAR31.VAR37[0] = VAR38;
        VAR4->VAR31.VAR37[1] = VAR39;
        VAR4->VAR31.VAR40 = VAR41;
        VAR4->VAR31.VAR42 = VAR43;
        VAR4->VAR31.VAR44 = VAR45;
        VAR4->VAR31.VAR46 = VAR33;
        VAR4->VAR31.VAR47 = VAR41;
        VAR4->VAR31.VAR48 = VAR43;
        VAR4->VAR31.VAR49 = VAR45;
    }
    VAR4->VAR50 = FUN6(VAR6);
    if (!VAR4->VAR8 && !VAR4->VAR50)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR4->VAR51 = FUN6(VAR6);
    if (!VAR4->VAR8 && VAR4->VAR51)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR4->VAR52 = FUN4(VAR6, 2);
    VAR4->VAR53 = FUN6(VAR6);
    VAR4->VAR54 = FUN6(VAR6);
    if (VAR4->VAR54)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR4->VAR55 = FUN6(VAR6);
    VAR4->VAR23.VAR56 = FUN6(VAR6);
    VAR4->VAR57 = FUN6(VAR6);
    if (VAR4->VAR57 && VAR4->VAR8 == VAR25)
    {
        FUN2(VAR2, VAR58, "");
    }
    VAR4->VAR23.VAR59 = VAR2->VAR59 = FUN4(VAR6, 3);
    VAR4->VAR60 = FUN4(VAR6, 2);
    VAR4->VAR61 = FUN6(VAR6);
    if (VAR4->VAR19)
    {
        VAR4->VAR23.VAR2->VAR62 = VAR4->VAR23.VAR2->VAR63 = FUN4(VAR6, 11);
        VAR4->VAR23.VAR2->VAR64 = VAR4->VAR23.VAR2->VAR65 = FUN4(VAR6, 11);
        FUN7(VAR6, 5);
        VAR4->VAR28 = FUN6(VAR6);
        if (FUN6(VAR6))
        {
            FUN2(VAR2, VAR20, "");
            return -1;
        }
        FUN7(VAR6, 3);
        VAR4->VAR66 = 0;
    }
    else
    {
        VAR4->VAR66 = FUN6(VAR6);
    }
    if (!VAR4->VAR66)
    {
        FUN2(VAR2, VAR20, "");
    }
    if (!VAR4->VAR30)
        FUN7(VAR6, 16);
    FUN2(VAR2, VAR7, ""
                                ""
                                ""
                                "",
           VAR4->VAR8, VAR4->VAR21, VAR4->VAR22, VAR4->VAR23.VAR24, VAR4->VAR29, VAR4->VAR50, VAR4->VAR51, VAR4->VAR57, VAR4->VAR53, VAR4->VAR55, VAR4->VAR23.VAR56, VAR4->VAR52, VAR4->VAR60, VAR2->VAR59);
    return 0;
}