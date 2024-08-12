static void FUN1(bool VAR1)
{
    VAR2 *VAR3, *VAR4;
    VAR5 *VAR6;
    char *VAR7 = FUN2("", VAR8);
    char *VAR9 = FUN2("", VAR8);
    const char *VAR10[] = {
        "",
        "",
        VAR7,
        NULL,
    };
    const char *VAR11[] = {
        "",
        VAR9,
        "",
        NULL,
    };
    unlink(VAR8);
    if (FUN3("", VAR12) < 0)
    {
        return;
    }
    if (FUN4(VAR8, 0600) < 0)
    {
        FUN5();
    }
    VAR3 = FUN6(FUN7(VAR10, VAR13, &VAR14));
    VAR4 = FUN6(FUN7(VAR11, VAR15, &VAR14));
    VAR6 = FUN8();
    FUN9(VAR6, VAR1, VAR3, VAR4);
    FUN10(VAR6);
    FUN11(FUN12(VAR3));
    FUN11(FUN12(VAR4));
    FUN13(VAR7);
    FUN13(VAR9);
    unlink(VAR8);
}