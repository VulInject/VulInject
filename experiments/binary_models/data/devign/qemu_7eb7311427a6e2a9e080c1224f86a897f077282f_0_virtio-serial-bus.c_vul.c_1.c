static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10 = FUN4(FUN5(VAR2));
    VAR11 *VAR12 = FUN6(VAR10->VAR13);
    int VAR14;
    bool VAR15;
    VAR3 *VAR16 = NULL;
    VAR6->VAR13 = VAR10->VAR13;
    VAR6->VAR17 = FUN7(VAR18, VAR6);
    assert(VAR8->VAR19);
    VAR15 = VAR8->VAR20 && !FUN8(VAR6->VAR13, 0);
    if (FUN8(VAR6->VAR13, VAR6->VAR21))
    {
        FUN9(VAR4, "", VAR6->VAR21);
        return;
    }
    if (FUN10(VAR6->VAR22))
    {
        FUN9(VAR4, "", VAR6->VAR22);
        return;
    }
    if (VAR6->VAR21 == VAR23)
    {
        if (VAR15)
        {
            VAR6->VAR21 = 0;
        }
        else
        {
            VAR6->VAR21 = FUN11(VAR6->VAR13);
            if (VAR6->VAR21 == VAR23)
            {
                FUN9(VAR4, ""
                                 "");
                return;
            }
        }
    }
    VAR14 = FUN12(VAR12, VAR6->VAR13->VAR24.VAR14);
    if (VAR6->VAR21 >= VAR14)
    {
        FUN9(VAR4, ""
                         "",
                   VAR14 - 1);
        return;
    }
    VAR8->FUN13(VAR2, &VAR16);
    if (VAR16 != NULL)
    {
        FUN14(VAR4, VAR16);
        return;
    }
    VAR6->VAR25.VAR26 = 0;
}