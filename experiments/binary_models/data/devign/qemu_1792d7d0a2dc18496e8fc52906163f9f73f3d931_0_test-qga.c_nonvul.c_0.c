static void FUN1(gconstpointer VAR1)
{
    const VAR2 *VAR3 = VAR1;
    VAR4 *VAR5, *VAR6;
    const VAR7 *VAR8;
    VAR9 *VAR10;
    int64_t VAR11, VAR12, VAR13;
    gsize VAR14;
    bool VAR15;
    char *VAR16;
    VAR5 = FUN2(VAR3->VAR17, ""
                              "" VAR18 \""
                              "");
    FUN3(VAR5);
    FUN4(VAR5);
    VAR6 = FUN5(VAR5, "");
    VAR11 = FUN6(VAR6, "");
    FUN7(VAR11, >, 0);
    FUN8(VAR5);
    VAR12 = FUN9();
    VAR16 = FUN10(""
                          "" VAR19 "",
                          VAR11);
    do
    {
        VAR5 = FUN2(VAR3->VAR17, VAR16);
        FUN3(VAR5);
        VAR6 = FUN5(VAR5, "");
        VAR15 = FUN11(VAR6, "");
        if (!VAR15)
        {
            FUN8(VAR5);
        }
    } while (!VAR15 && FUN9() < VAR12 + 5 * VAR20);
    FUN12(VAR15);
    FUN13(VAR16);
    VAR13 = FUN6(VAR6, "");
    FUN7(VAR13, ==, 0);
    VAR8 = FUN14(VAR6, "");
    VAR10 = FUN15(VAR8, &VAR14);
    FUN7(VAR14, ==, 12);
    FUN16((char *)VAR10, ==, "" VAR18 \"");
    FUN13(VAR10);
    FUN8(VAR5);
}