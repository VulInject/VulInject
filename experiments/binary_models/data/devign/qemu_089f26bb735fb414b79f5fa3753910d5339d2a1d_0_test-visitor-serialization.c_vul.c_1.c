static void FUN1(gconstpointer VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    const VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = VAR3->VAR8;
    VAR6 *VAR9 = FUN2(sizeof(*VAR9));
    VAR10 *VAR11 = NULL;
    void *VAR12;
    char *VAR13, *VAR14;
    VAR9->VAR15 = VAR7->VAR15;
    VAR5->FUN3(VAR7, &VAR12, VAR16, &VAR11);
    VAR5->FUN4((void **)&VAR9, VAR12, VAR16, &VAR11);
    FUN5(VAR11 == NULL);
    FUN5(VAR9 != NULL);
    if (VAR7->VAR15 == VAR17)
    {
        FUN6(VAR7->VAR18.VAR19, ==, VAR9->VAR18.VAR19);
        FUN7((char *)VAR9->VAR18.VAR19);
    }
    else if (VAR7->VAR15 == VAR20)
    {
        VAR13 = FUN2(FUN8(VAR7->VAR18.VAR21));
        VAR14 = FUN2(FUN8(VAR9->VAR18.VAR21));
        FUN6(VAR13, ==, VAR14);
        FUN7(VAR13);
        FUN7(VAR14);
    }
    else if (VAR7->VAR15 == VAR22)
    {
        FUN9(!!VAR7->VAR18.VAR23, ==, !!VAR7->VAR18.VAR23);
    }
    else
    {
        FUN9(VAR7->VAR18.VAR23, ==, VAR9->VAR18.VAR23);
    }
    VAR5->FUN10(VAR12);
    FUN7(VAR3);
    FUN7(VAR9);
}