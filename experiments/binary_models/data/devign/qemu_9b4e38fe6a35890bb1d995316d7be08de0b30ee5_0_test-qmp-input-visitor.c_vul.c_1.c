static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15 = NULL;
    VAR9 = FUN2(VAR2, ""
                                      "");
    FUN3(VAR9, NULL, &VAR5, &VAR7);
    FUN4(!VAR5);
    VAR9 = FUN2(VAR2, "");
    FUN5(VAR9, NULL, &VAR11, &VAR7);
    assert(!VAR11);