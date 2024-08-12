static void FUN1(void)
{
    int VAR1[2], VAR2;
    char *VAR3;
    uint32_t VAR4 = 0, VAR5 = 0;
    char VAR6[] = "";
    char VAR7[] = "";
    char *VAR8;
    uint32_t VAR9 = sizeof(VAR6);
    VAR9 = FUN2(VAR9);
    const char *VAR10 = "";
    if (FUN3(FUN4(), ""))
    {
        VAR10 = "";
    }
    VAR4 = FUN5(VAR11, VAR12, 0, VAR1);
    FUN6(VAR4, !=, -1);
    VAR4 = mkstemp(VAR7);
    FUN6(VAR4, !=, -1);
    VAR3 = FUN7(""
                              ""
                              ""
                              "",
                              VAR1[1], VAR10, VAR7);
    FUN8(VAR3);
    FUN9(VAR3);
    VAR2 = FUN10(VAR7, NULL);
    FUN6(VAR2, !=, -1);
    struct iovec VAR13[] = {
        {
            .VAR14 = &VAR9,
            .VAR15 = sizeof(VAR9),
        },
        {
            .VAR14 = VAR6,
            .VAR15 = sizeof(VAR6),
        },
    };
    FUN11("");
    VAR4 = FUN12(VAR1[0], VAR13, 2, 0, sizeof(VAR9) + sizeof(VAR6));
    FUN6(VAR4, ==, sizeof(VAR6) + sizeof(VAR9));
    close(VAR1[0]);
    VAR4 = FUN13(VAR2, &VAR5, sizeof(VAR5), 0);
    FUN6(VAR4, ==, sizeof(VAR5));
    VAR5 = FUN14(VAR5);
    FUN6(VAR5, ==, sizeof(VAR6));
    VAR8 = FUN15(VAR5);
    VAR4 = FUN13(VAR2, VAR8, VAR5, 0);
    FUN16(VAR8, ==, VAR6);
    FUN9(VAR8);
    close(VAR2);
    unlink(VAR7);
}