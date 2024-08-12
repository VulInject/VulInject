static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6;
    VAR7 *VAR8 = FUN2();
    VAR9 *VAR10;
    FUN3(FUN4(VAR8), NULL, &VAR2, &VAR4);
    VAR10 = FUN5(VAR8);
    VAR6 = FUN6(VAR10);
    assert(VAR6 != NULL);
    FUN7("", FUN8(VAR6));
    FUN9(VAR10);
    FUN10(VAR8);
    FUN11(VAR6);
}