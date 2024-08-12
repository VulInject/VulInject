static void FUN1(gconstpointer VAR1)
{
    const VAR2 *VAR3 = VAR1;
    const unsigned char VAR4[] = "";
    const char *VAR5;
    VAR6 *VAR7, *VAR8, *VAR9;
    unsigned char *VAR10;
    VAR11 *VAR12, *VAR13;
    int64_t VAR14, VAR15;
    gsize VAR16;
    VAR17 *VAR18;
    char VAR19[100];
    VAR12 = FUN2(VAR3->VAR20, ""
                              "");
    FUN3(VAR12);
    FUN4(VAR12);
    VAR14 = FUN5(VAR12, "");
    FUN6(VAR12);
    VAR9 = FUN7(VAR4, sizeof(VAR4));
    VAR7 = FUN8(""
                          "" VAR21 ""
                          "",
                          VAR14, VAR9);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    FUN3(VAR12);
    FUN4(VAR12);
    VAR13 = FUN9(VAR12, "");
    VAR16 = FUN5(VAR13, "");
    VAR15 = FUN10(VAR13, "");
    FUN11(VAR16, ==, sizeof(VAR4));
    FUN11(VAR15, ==, 0);
    FUN6(VAR12);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR21 "",
                          VAR14);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    FUN6(VAR12);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR21 "",
                          VAR14);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    FUN6(VAR12);
    FUN12(VAR7);
    VAR8 = FUN13(VAR3->VAR22, "", NULL);
    VAR18 = fopen(VAR8, "");
    FUN3(VAR18);
    VAR16 = fread(VAR19, 1, sizeof(VAR19), VAR18);
    FUN11(VAR16, ==, sizeof(VAR4));
    VAR19[VAR16] = 0;
    FUN14(VAR19, ==, (char *)VAR4);
    fclose(VAR18);
    VAR12 = FUN2(VAR3->VAR20, ""
                              "");
    FUN3(VAR12);
    FUN4(VAR12);
    VAR14 = FUN5(VAR12, "");
    FUN6(VAR12);
    VAR7 = FUN8(""
                          "" VAR21 "",
                          VAR14);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    VAR13 = FUN9(VAR12, "");
    VAR16 = FUN5(VAR13, "");
    VAR15 = FUN10(VAR13, "");
    VAR5 = FUN15(VAR13, "");
    FUN11(VAR16, ==, sizeof(VAR4));
    FUN16(VAR15);
    FUN14(VAR5, ==, VAR9);
    FUN6(VAR12);
    FUN12(VAR7);
    FUN12(VAR9);
    VAR7 = FUN8(""
                          "" VAR21 "",
                          VAR14);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    VAR13 = FUN9(VAR12, "");
    VAR16 = FUN5(VAR13, "");
    VAR15 = FUN10(VAR13, "");
    VAR5 = FUN15(VAR13, "");
    FUN11(VAR16, ==, 0);
    FUN16(VAR15);
    FUN14(VAR5, ==, "");
    FUN6(VAR12);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR21 ""
                          "",
                          VAR14, 6, "");
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    FUN4(VAR12);
    VAR13 = FUN9(VAR12, "");
    VAR16 = FUN5(VAR13, "");
    VAR15 = FUN10(VAR13, "");
    FUN11(VAR16, ==, 6);
    FUN16(!VAR15);
    FUN6(VAR12);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR21 "",
                          VAR14);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    VAR13 = FUN9(VAR12, "");
    VAR16 = FUN5(VAR13, "");
    VAR15 = FUN10(VAR13, "");
    VAR5 = FUN15(VAR13, "");
    FUN11(VAR16, ==, sizeof(VAR4) - 6);
    FUN16(VAR15);
    VAR10 = FUN17(VAR5, &VAR16);
    FUN11(VAR16, ==, sizeof(VAR4) - 6);
    FUN18(VAR10, VAR16, VAR4 + 6, sizeof(VAR4) - 6);
    FUN12(VAR10);
    FUN6(VAR12);
    FUN12(VAR7);
    VAR7 = FUN8(""
                          "" VAR21 "",
                          VAR14);
    VAR12 = FUN2(VAR3->VAR20, VAR7);
    FUN6(VAR12);
    FUN12(VAR7);