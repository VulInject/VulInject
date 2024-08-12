static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = FUN2();
    VAR7 *VAR8;
    FUN3(FUN4(VAR6), NULL, &VAR2, &VAR9);
    VAR8 = FUN5(VAR6);
    VAR4 = FUN6(VAR8);
    assert(VAR4 != NULL);
    FUN7("", FUN8(VAR4));
    FUN9(VAR8);
    FUN10(FUN4(VAR6));
    FUN11(VAR4);
}