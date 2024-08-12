static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
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
    if (FUN6(VAR4, "") || FUN6(VAR4, ""))
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR18; ++VAR16)
        {
            VAR5 = &FUN7(VAR2, VAR3, VAR16);
            if (FUN6(VAR5, "") || FUN6(VAR5, ""))
            {
                FUN5(VAR9, "", VAR5->VAR19);
            }
        }
    }
    FUN5(VAR9, "", VAR4->VAR19);
    VAR15 = FUN8(VAR9->VAR20, &VAR13, &VAR14, NULL, &VAR7);
    FUN4(VAR7);
    if (VAR15)
    {
        VAR15 = FUN9(VAR4->VAR17, (VAR12 **)&VAR4->VAR21, &VAR4->VAR22, &VAR7);
        FUN10(VAR15);
        FUN4(VAR7);
        FUN10(VAR4->VAR22);
    }
    FUN11(VAR13);
    FUN11(VAR14);
    FUN12(VAR9, true);
    return !VAR15;
}