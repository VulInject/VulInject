static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10 = FUN4(FUN5(VAR2));
    int VAR11;
    bool VAR12;
    VAR3 *VAR13 = NULL;
    VAR6->VAR14 = VAR10->VAR14;
    VAR6->VAR15 = FUN6(VAR16, VAR6);
    assert(VAR8->VAR17);
    VAR12 = VAR8->VAR18 && !FUN7(VAR6->VAR14, 0);
    if (FUN7(VAR6->VAR14, VAR6->VAR19))
    {
        FUN8(VAR4, "", VAR6->VAR19);
        return;
    }
    if (VAR6->VAR20 != NULL && FUN9(VAR6->VAR20))
    {
        FUN8(VAR4, "", VAR6->VAR20);
        return;
    }
    if (VAR6->VAR19 == VAR21)
    {
        if (VAR12)
        {
            VAR6->VAR19 = 0;
        }
        else
        {
            VAR6->VAR19 = FUN10(VAR6->VAR14);
            if (VAR6->VAR19 == VAR21)
            {
                FUN8(VAR4, ""
                                 "");
                return;
            }
        }
    }
    VAR11 = VAR6->VAR14->VAR22.VAR23;
    if (VAR6->VAR19 >= VAR11)
    {
        FUN8(VAR4, ""
                         "",
                   VAR11 - 1);
        return;
    }
    VAR8->FUN11(VAR2, &VAR13);
    if (VAR13 != NULL)
    {
        FUN12(VAR4, VAR13);
        return;
    }
    VAR6->VAR24 = NULL;
}