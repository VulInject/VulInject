static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    SchroVideoFormatEnum VAR6;
    FUN2();
    VAR4->VAR7 = FUN3();
    if (!VAR4->VAR7)
    {
        FUN4(VAR2, VAR8, "");
        return -1;
    }
    VAR6 = FUN5(VAR2);
    VAR4->VAR9 = FUN6(VAR4->VAR7);
    FUN7(VAR4->VAR9, VAR6);
    VAR4->VAR9->VAR10 = VAR2->VAR10;
    VAR4->VAR9->VAR11 = VAR2->VAR11;
    if (FUN8(VAR2) == -1)
        return -1;
    if (FUN9(VAR4->VAR9->VAR12, &VAR4->VAR13) == -1)
    {
        FUN4(VAR2, VAR8, ""
                                         "");
        return -1;
    }
    VAR4->VAR9->VAR14 = VAR2->VAR15.VAR16;
    VAR4->VAR9->VAR17 = VAR2->VAR15.VAR18;
    VAR4->VAR19 = FUN10(VAR2->VAR20, VAR2->VAR10, VAR2->VAR11);
    VAR2->VAR21 = &VAR4->VAR22;
    if (VAR2->VAR23 == 0)
    {
        FUN11(VAR4->VAR7, "", VAR24);
        if (VAR2->VAR25 == VAR26)
        {
            FUN11(VAR4->VAR7, "", 1);
        }
    }
    else
    {
        FUN11(VAR4->VAR7, "", VAR27);
        VAR2->VAR28 = 1;
    }
    if (VAR2->VAR29 & VAR30)
    {
        if (VAR2->VAR31 == 0)
        {
            FUN11(VAR4->VAR7, "", VAR32);
        }
        else
        {
            int VAR33;
            FUN11(VAR4->VAR7, "", VAR34);
            VAR33 = VAR2->VAR31 / VAR35;
            if (VAR33 > 100)
                VAR33 = 100;
            FUN11(VAR4->VAR7, "", VAR33);
        }
    }
    else
    {
        FUN11(VAR4->VAR7, "", VAR36);
        FUN11(VAR4->VAR7, "", VAR2->VAR37);
    }
    if (VAR2->VAR29 & VAR38)
    {
        FUN11(VAR4->VAR7, "", 1);
    }
    FUN12(VAR4->VAR9, VAR39);
    FUN11(VAR4->VAR7, "", 2);
    FUN13(VAR4->VAR7, VAR4->VAR9);
    FUN14(VAR2->VAR40);
    FUN15(VAR4->VAR7);
    FUN16(&VAR4->VAR41);
    return 0;
}