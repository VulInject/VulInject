static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8 = FUN2(&VAR6);
    FUN3(VAR8, NULL, &VAR2, &VAR9);
    FUN4(VAR8, &VAR6);
    VAR4 = FUN5(VAR6);
    assert(VAR4 != NULL);
    FUN6("", FUN7(VAR4));
    FUN8(VAR6);
    FUN9(VAR8);
    FUN10(VAR4);
}