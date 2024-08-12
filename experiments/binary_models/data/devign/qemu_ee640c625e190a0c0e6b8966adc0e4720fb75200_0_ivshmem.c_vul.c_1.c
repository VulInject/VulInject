static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR3 *VAR7 = NULL;
    VAR8 *VAR9;
    uint8_t VAR10 = VAR11 | VAR12;
    VAR3 *VAR13 = NULL;
    if (FUN3(VAR6, VAR14) && !FUN3(VAR6, VAR15))
    {
        FUN4(VAR4, "");
        return;
    }
    VAR9 = VAR2->VAR16;
    VAR9[VAR17] = VAR18 | VAR19;
    FUN5(&VAR6->VAR20, FUN6(VAR6), &VAR21, VAR6, "", VAR22);
    FUN7(VAR2, 0, VAR11, &VAR6->VAR20);
    if (VAR6->VAR23)
    {
        VAR10 |= VAR24;
    }
    if (VAR6->VAR25 != NULL)
    {
        FUN8("");
        VAR6->VAR26 = FUN9(VAR6->VAR25, &VAR27);
    }
    else
    {
        VAR28 *VAR29 = FUN10(&VAR6->VAR30);
        assert(VAR29);
        FUN8("", VAR29->VAR31);
        FUN11(VAR6, 16);
        FUN12(VAR6, &VAR7);
        if (VAR7)
        {
            FUN13(VAR4, VAR7);
            return;
        }
        if (VAR6->VAR32 == VAR33 && VAR6->VAR34 != 0)
        {
            FUN4(VAR4, "");
            return;
        }
        FUN14(&VAR6->VAR30, VAR35, VAR36, NULL, VAR6, NULL, true);
        if (FUN15(VAR6) < 0)
        {
            FUN4(VAR4, "");
            return;
        }
    }
    if (VAR6->VAR32 == VAR37)
    {
        VAR6->VAR32 = VAR6->VAR34 == 0 ? VAR33 : VAR38;
    }
    if (!FUN16(VAR6))
    {
        FUN4(&VAR6->VAR39, "");
        FUN17(VAR6->VAR39, &VAR13);
        if (VAR13)
        {
            FUN13(VAR4, VAR13);
            FUN18(VAR6->VAR39);
            return;
        }
    }
    FUN19(VAR6->VAR26, FUN20(VAR6));
    FUN7(FUN21(VAR6), 2, VAR10, VAR6->VAR26);
}