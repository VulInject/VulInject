static void FUN1(gconstpointer VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    const VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = VAR3->VAR8;
    VAR6 *VAR9 = FUN2(sizeof(*VAR9));
    void *VAR10;
    VAR9->VAR11 = VAR7->VAR11;
    VAR5->FUN3(VAR7, &VAR10, VAR12, &VAR13);
    VAR5->FUN4((void **)&VAR9, VAR10, VAR12, &VAR13);
    FUN5(VAR9 != NULL);
    if (VAR7->VAR11 == VAR14)
    {
        FUN6(VAR7->VAR15.VAR16, ==, VAR9->VAR15.VAR16);
        FUN7((char *)VAR9->VAR15.VAR16);
    }
    else if (VAR7->VAR11 == VAR17)
    {
        VAR18 *VAR19 = FUN8("");
        VAR18 *VAR20 = FUN8("");
        FUN9(VAR19, "", VAR7->VAR15.VAR21);
        FUN9(VAR20, "", VAR9->VAR15.VAR21);
        FUN6(VAR20->VAR22, ==, VAR19->VAR22);
        FUN10(VAR19, true);
        FUN10(VAR20, true);
    }
    else if (VAR7->VAR11 == VAR23)
    {
        FUN11(!!VAR7->VAR15.VAR24, ==, !!VAR7->VAR15.VAR24);
    }
    else
    {
        FUN11(VAR7->VAR15.VAR24, ==, VAR9->VAR15.VAR24);
    }
    VAR5->FUN12(VAR10);
    FUN7(VAR3);
    FUN7(VAR9);
}