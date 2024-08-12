VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    int VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    VAR7 *VAR9;
    VAR7 *VAR10;
    const char *VAR11;
    VAR11 = getenv("");
    FUN2(VAR11 != NULL);
    VAR3 = FUN3(sizeof(*VAR3));
    VAR8 = FUN4("", FUN5());
    VAR9 = FUN4("", FUN5());
    VAR4 = FUN6(VAR8);
    VAR5 = FUN6(VAR9);
    FUN7(VAR12, VAR3);
    VAR3->VAR13 = FUN8();
    if (VAR3->VAR13 == 0)
    {
        setenv("", "", true);
        VAR10 = FUN4(""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "",
                                  VAR11, VAR8, getenv("") ? "" : "", VAR9, VAR2 ?: "");
        execlp("", "", "", VAR10, NULL);
        FUN9(1);
    }
    VAR3->VAR14 = FUN10(VAR4);
    if (VAR3->VAR14 >= 0)
    {
        VAR3->VAR15 = FUN10(VAR5);
    }
    FUN11(VAR8);
    FUN11(VAR9);
    FUN2(VAR3->VAR14 >= 0 && VAR3->VAR15 >= 0);
    VAR3->VAR16 = FUN12("");
    for (VAR6 = 0; VAR6 < VAR17; VAR6++)
    {
        VAR3->VAR18[VAR6] = false;
    }
    if (getenv(""))
    {
        FUN13(VAR3->VAR13, VAR19);
    }
    VAR3->VAR20 = FUN14(VAR3);
    return VAR3;