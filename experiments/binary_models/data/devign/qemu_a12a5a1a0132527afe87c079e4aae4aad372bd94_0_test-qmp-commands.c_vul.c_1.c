static void FUN1(void)
{
    static const char VAR1[] = "";
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5 = NULL;
    {
        VAR6 *VAR7;
        VAR8 *VAR9;
        VAR7 = FUN2();
        FUN3(VAR7, "", FUN4(FUN5(VAR1)));
        VAR9 = FUN6(FUN4(VAR7));
        FUN7(FUN8(VAR9), &VAR3, NULL, &VAR5);
        FUN9(VAR9);
        FUN10(VAR7);
    }
    assert(VAR3 != NULL);
    assert(VAR3->VAR10 != NULL);
    assert(strcmp(VAR3->VAR10, VAR1) == 0);
    assert(VAR3->VAR11 == NULL);
    assert(VAR5 != NULL);
    FUN11(VAR5);
    FUN12(VAR3);
}