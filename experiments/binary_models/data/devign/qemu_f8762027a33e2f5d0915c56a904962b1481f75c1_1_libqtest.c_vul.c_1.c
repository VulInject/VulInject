VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    int VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    VAR7 *VAR9;
    VAR7 *VAR10;
    const char *VAR11;
    struct sigaction VAR12;
    VAR11 = getenv("");
    FUN2(VAR11 != NULL);
    VAR3 = FUN3(sizeof(*VAR3));
    VAR8 = FUN4("", FUN5());
    VAR9 = FUN4("", FUN5());
    VAR4 = FUN6(VAR8);
    VAR5 = FUN6(VAR9);
    VAR12 = (struct VAR13){
        .VAR14 = VAR15,
        .VAR16 = VAR17,
    };
    FUN7(&VAR12.VAR18);
    FUN8(VAR19, &VAR12, &VAR3->VAR20);
    VAR3->VAR21 = FUN9();
    if (VAR3->VAR21 == 0)
    {
        VAR10 = FUN4(""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "",
                                  VAR11, VAR8, VAR9, VAR2 ?: "");
        execlp("", "", "", VAR10, NULL);
        FUN10(1);
    }
    VAR3->VAR22 = FUN11(VAR4);
    VAR3->VAR23 = FUN11(VAR5);
    unlink(VAR8);
    unlink(VAR9);
    FUN12(VAR8);
    FUN12(VAR9);
    VAR3->VAR24 = FUN13("");
    for (VAR6 = 0; VAR6 < VAR25; VAR6++)
    {
        VAR3->VAR26[VAR6] = false;
    }
    FUN14(VAR3, "");
    FUN14(VAR3, "");
    if (getenv(""))
    {
        FUN15(VAR3->VAR21, VAR27);
    }
    return VAR3;
}