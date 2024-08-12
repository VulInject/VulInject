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
                              VAR1[1], FUN6(), VAR7, VAR8, VAR7);
    FUN7(VAR3);
    FUN8(VAR3);
    VAR2 = FUN9(VAR8, NULL);
    FUN4(VAR2, !=, -1);
    FUN10("");
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
    VAR4 = FUN11(VAR1[0], VAR13, 2, 0, sizeof(VAR10) + sizeof(VAR6));
    FUN4(VAR4, ==, sizeof(VAR6) + sizeof(VAR10));
    close(VAR1[0]);
    VAR4 = FUN12(VAR2, &VAR5, sizeof(VAR5), 0);
    FUN4(VAR4, ==, sizeof(VAR5));
    VAR5 = FUN13(VAR5);
    FUN4(VAR5, ==, sizeof(VAR6));
    VAR9 = FUN14(VAR5);
    VAR4 = FUN12(VAR2, VAR9, VAR5, 0);
    FUN15(VAR9, ==, VAR6);
    FUN8(VAR9);
    close(VAR2);
    unlink(VAR7);
    unlink(VAR8);
    FUN16();
}