static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10 = NULL;
    VAR3 *VAR11 = NULL;
    bool VAR12 = false;
    const char *VAR13;
    bool VAR14 = false;
    const char *VAR15;
    bool VAR16 = false;
    const char *VAR17;
    const char *VAR18;
    const char *VAR19 = "";
    enum NewImageMode VAR20 = VAR21;
    VAR22 *VAR23 = FUN2(VAR22, VAR2, VAR2);
    VAR24 *VAR25 = VAR2->VAR25;
    FUN3(VAR25->VAR26 == VAR27);
    VAR12 = VAR25->VAR28->VAR12;
    VAR13 = VAR25->VAR28->VAR13;
    VAR14 = VAR25->VAR28->VAR14;
    VAR15 = VAR25->VAR28->VAR15;
    VAR16 = VAR25->VAR28->VAR16;
    VAR17 = VAR25->VAR28->VAR17;
    VAR18 = VAR25->VAR28->VAR29;
    if (VAR25->VAR28->VAR30)
    {
        VAR19 = VAR25->VAR28->VAR19;
    }
    if (VAR25->VAR28->VAR31)
    {
        VAR20 = VAR25->VAR28->VAR20;
    }
    VAR6 = FUN4(VAR19);
    if (!VAR6)
    {
        FUN5(VAR4, VAR32, VAR19);
        return;
    }
    VAR23->VAR33 = FUN6(VAR12 ? VAR13 : NULL, VAR14 ? VAR15 : NULL, &VAR11);
    if (FUN7(&VAR11))
    {
        FUN8(VAR4, VAR11);
        return;
    }
    if (VAR14 && !VAR16)
    {
        FUN9(VAR4, "");
        return;
    }
    if (VAR16 && FUN10(VAR17))
    {
        FUN9(VAR4, "");
        return;
    }
    if (!FUN11(VAR23->VAR33))
    {
        FUN5(VAR4, VAR34, VAR13);
        return;
    }
    if (FUN12(VAR23->VAR33))
    {
        FUN5(VAR4, VAR35, VAR13);
        return;
    }
    if (!FUN13(VAR23->VAR33))
    {
        if (FUN14(VAR23->VAR33))
        {
            FUN5(VAR4, VAR36);
            return;
        }
    }
    if (!FUN15(VAR23->VAR33))
    {
        FUN5(VAR4, VAR37, "");
        return;
    }
    VAR7 = VAR23->VAR33->VAR38;
    if (VAR20 != VAR39)
    {
        FUN16(VAR18, VAR19, VAR23->VAR33->VAR40, VAR23->VAR33->VAR6->VAR41, NULL, -1, VAR7, &VAR11, false);
        if (FUN7(&VAR11))
        {
            FUN8(VAR4, VAR11);
            return;
        }
    }
    if (VAR16)
    {
        VAR10 = FUN17();
        FUN18(VAR10, "", FUN19(VAR17));
    }
    VAR23->VAR42 = FUN20("");
    VAR8 = FUN21(VAR23->VAR42, VAR18, VAR10, VAR7 | VAR43, VAR6, &VAR11);
    if (VAR8 != 0)
    {
        FUN8(VAR4, VAR11);
    }
    FUN22(VAR10);
}