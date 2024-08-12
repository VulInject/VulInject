static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR3 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = FUN2(VAR10);
    gint VAR11;
    VAR12 *VAR13, *VAR14;
    gboolean VAR15;
    int VAR16;
    VAR11 = FUN3("", &VAR4->VAR17, &VAR7);
    FUN4(VAR7);
    close(VAR11);
    FUN5(VAR9, "", VAR4->VAR17);
    for (VAR16 = 0; VAR16 < 2; ++VAR16)
    {
        VAR5 = &FUN6(VAR2, VAR3, VAR16);
        FUN5(VAR9, "", VAR5->VAR18);
    }
    FUN5(VAR9, "", VAR4->VAR18);
    FUN7(VAR9->VAR19, &VAR13, &VAR14, NULL, &VAR7);
    FUN4(VAR7);
    VAR15 = FUN8(VAR4->VAR17, (VAR12 **)&VAR4->VAR20, &VAR4->VAR21, &VAR7);
    FUN9(VAR15);
    FUN4(VAR7);
    FUN9(VAR4->VAR21);
    FUN10(VAR13);
    FUN10(VAR14);
    FUN11(VAR9, true);
}