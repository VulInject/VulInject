static void FUN1(void)
{
    BHTestData VAR1 = {.VAR2 = 0};
    VAR1.VAR3 = FUN2(VAR4, VAR5, &VAR1);
    FUN3(VAR1.VAR3);
    FUN4(VAR1.VAR2, ==, 0);
    FUN5(FUN6(VAR4, true));
    FUN4(VAR1.VAR2, ==, 1);
    FUN5(!FUN6(VAR4, false));
    FUN4(VAR1.VAR2, ==, 1);
    FUN7(VAR1.VAR3);
}