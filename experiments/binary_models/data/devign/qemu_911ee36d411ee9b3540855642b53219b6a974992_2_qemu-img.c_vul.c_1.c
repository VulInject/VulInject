static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2();
    VAR10 *VAR11;
    FUN3(FUN4(VAR9), NULL, &VAR2, &VAR5);
    VAR11 = FUN5(VAR9);
    VAR7 = FUN6(VAR11);
    assert(VAR7 != NULL);
    FUN7(VAR3, "", FUN8(VAR7));
    FUN9(VAR11);
    FUN10(VAR9);
    FUN11(VAR7);
}