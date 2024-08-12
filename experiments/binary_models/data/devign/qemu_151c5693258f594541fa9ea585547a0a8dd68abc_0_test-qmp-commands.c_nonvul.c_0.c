static void FUN1(void)
{
    VAR1 *VAR2 = FUN2();
    VAR3 *VAR4;
    FUN3(VAR2, "", FUN4(FUN5("")));
    VAR4 = FUN6(FUN4(VAR2));
    assert(VAR4 != NULL);
    assert(!FUN7(FUN8(VAR4), ""));
    FUN9(VAR4);
    FUN10(VAR2);
}