static void FUN1(const void *VAR1)
{
    const VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9, *VAR10, *VAR11, *VAR12, *VAR13;
    size_t VAR14, VAR15, VAR16, VAR17;
    char *VAR18;
    FUN2("");
    VAR14 = FUN3(VAR3->VAR9, &VAR9);
    VAR15 = FUN3(VAR3->VAR10, &VAR10);
    VAR16 = FUN3(VAR3->VAR11, &VAR11);
    VAR17 = FUN3(VAR3->VAR12, &VAR12);
    FUN4(VAR16 == VAR17);
    VAR13 = FUN5(VAR8, VAR16);
    VAR5 = FUN6(VAR3->VAR19, VAR3->VAR20, VAR9, VAR14, &VAR7);
    FUN4(VAR5 != NULL);
    FUN4(VAR7 == NULL);
    if (VAR10)
    {
        FUN4(FUN7(VAR5, VAR10, VAR15, &VAR7) == 0);
        FUN4(VAR7 == NULL);
    }
    FUN4(FUN8(VAR5, VAR12, VAR13, VAR17, &VAR7) == 0);
    FUN4(VAR7 == NULL);
    VAR18 = FUN9(VAR13, VAR16);
    FUN10(VAR18, ==, VAR3->VAR11);
    FUN11(VAR13);
    FUN11(VAR18);
    FUN11(VAR9);
    FUN11(VAR10);
    FUN11(VAR11);
    FUN11(VAR12);
    FUN12(VAR5);
}