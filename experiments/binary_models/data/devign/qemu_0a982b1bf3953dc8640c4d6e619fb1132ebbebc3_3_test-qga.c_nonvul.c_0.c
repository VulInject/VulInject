static void FUN1(gconstpointer VAR1)
{
    const VAR2 *VAR3 = VAR1;
    const unsigned char VAR4[] = "";
    const char *VAR5;
    VAR6 *VAR7, *VAR8;
    VAR9 *VAR10, *VAR11;
    int64_t VAR12, VAR13;
    gsize VAR14;
    VAR10 = FUN2(VAR3->VAR15, ""
                              "");
    FUN3(VAR10);
    FUN4(VAR10);
    VAR12 = FUN5(VAR10, "");
    FUN6(VAR10);
    VAR8 = FUN7(VAR4, sizeof(VAR4));
    VAR7 = FUN8(""
                          "" VAR16 ""
                          "",
                          VAR12, VAR8);
    VAR10 = FUN2(VAR3->VAR15, VAR7);
    FUN3(VAR10);
    FUN4(VAR10);
    VAR11 = FUN9(VAR10, "");
    VAR14 = FUN5(VAR11, "");
    VAR13 = FUN10(VAR11, "");
    FUN11(VAR14, ==, sizeof(VAR4));
    FUN11(VAR13, ==, 0);
    FUN6(VAR10);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR16 "",
                          VAR12);
    VAR10 = FUN2(VAR3->VAR15, VAR7);
    VAR11 = FUN9(VAR10, "");
    VAR14 = FUN5(VAR11, "");
    VAR13 = FUN10(VAR11, "");
    VAR5 = FUN13(VAR11, "");
    FUN11(VAR14, ==, 0);
    FUN14(VAR13);
    FUN15(VAR5, ==, "");
    FUN6(VAR10);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR16 ""
                          "",
                          VAR12, 0, VAR17);
    VAR10 = FUN2(VAR3->VAR15, VAR7);
    FUN4(VAR10);
    VAR11 = FUN9(VAR10, "");
    VAR14 = FUN5(VAR11, "");
    VAR13 = FUN10(VAR11, "");
    FUN11(VAR14, ==, 0);
    FUN14(!VAR13);
    FUN6(VAR10);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR16 "",
                          VAR12);
    VAR10 = FUN2(VAR3->VAR15, VAR7);
    VAR11 = FUN9(VAR10, "");
    VAR14 = FUN5(VAR11, "");
    VAR13 = FUN10(VAR11, "");
    VAR5 = FUN13(VAR11, "");
    FUN11(VAR14, ==, sizeof(VAR4));
    FUN14(VAR13);
    FUN15(VAR5, ==, VAR8);
    FUN6(VAR10);
    FUN12(VAR7);
    FUN12(VAR8);
    VAR7 = FUN8(""
                          "" VAR16 "",
                          VAR12);
    VAR10 = FUN2(VAR3->VAR15, VAR7);
    FUN6(VAR10);
    FUN12(VAR7);
}