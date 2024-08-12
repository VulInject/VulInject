static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(&VAR7);
    FUN3(VAR9, NULL, &VAR2, &VAR10);
    FUN4(VAR9, &VAR7);
    VAR5 = FUN5(VAR7);
    assert(VAR5 != NULL);
    FUN6(VAR3, "", FUN7(VAR5));
    FUN8(VAR7);
    FUN9(VAR9);
    FUN10(VAR5);
}