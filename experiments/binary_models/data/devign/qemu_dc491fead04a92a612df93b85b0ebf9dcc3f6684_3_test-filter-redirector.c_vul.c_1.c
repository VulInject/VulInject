static void FUN1(void)
{
    int VAR1[2], VAR2;
    char *VAR3;
    uint32_t VAR4 = 0, VAR5 = 0;
    char VAR6[] = "";
    char VAR7[] = "";
    char VAR8[] = "";
    char *VAR9;
    uint32_t VAR10 = sizeof(VAR6);
    VAR10 = FUN2(VAR10);
    VAR4 = FUN3(VAR11, VAR12, 0, VAR1);
    FUN4(VAR4, !=, -1);
    VAR4 = mkstemp(VAR7);
    FUN4(VAR4, !=, -1);
    VAR4 = mkstemp(VAR8);
    FUN4(VAR4, !=, -1);
    VAR3 = FUN5(""
                              ""
                              ""
                              ""
                              ""
                              ""
                              ""
                              ""
                              ""
                              ""
                              "",
                              VAR1[1], VAR7, VAR8, VAR7);
    FUN6(VAR3);
    FUN7(VAR3);
    struct iovec VAR13[] = {
        {
            .VAR14 = &VAR10,
            .VAR15 = sizeof(VAR10),
        },
        {
            .VAR14 = VAR6,
            .VAR15 = sizeof(VAR6),
        },
    };
    VAR2 = FUN8(VAR8, NULL);
    FUN4(VAR2, !=, -1);
    FUN9("");
    VAR4 = FUN10(VAR2, VAR13, 2, 0, sizeof(VAR10) + sizeof(VAR6));
    FUN4(VAR4, ==, sizeof(VAR6) + sizeof(VAR10));
    close(VAR2);
    VAR4 = FUN11(VAR1[0], &VAR5, sizeof(VAR5), 0);
    FUN4(VAR4, ==, sizeof(VAR5));
    VAR5 = FUN12(VAR5);
    FUN4(VAR5, ==, sizeof(VAR6));
    VAR9 = FUN13(VAR5);
    VAR4 = FUN11(VAR1[0], VAR9, VAR5, 0);
    FUN14(VAR9, ==, VAR6);
    FUN7(VAR9);
    unlink(VAR7);
    unlink(VAR8);
    FUN15();
}