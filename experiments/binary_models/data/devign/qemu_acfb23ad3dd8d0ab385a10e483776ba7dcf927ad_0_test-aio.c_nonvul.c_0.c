static void FUN1(void)
{
    BHTestData VAR1 = {.VAR2 = 0, .VAR3 = 10};
    VAR1.VAR4 = FUN2(VAR5, VAR6, &VAR1);
    FUN3(VAR1.VAR4);
    FUN4(VAR1.VAR2, ==, 0);
    FUN5(FUN6(VAR5, false));
    FUN4(VAR1.VAR2, ==, 1);
    FUN5(FUN6(VAR5, true));
    FUN4(VAR1.VAR2, ==, 2);
    while (VAR1.VAR2 < 10)
    {
        FUN6(VAR5, true);
    }
    FUN4(VAR1.VAR2, ==, 10);
    FUN5(!FUN6(VAR5, false));
    FUN4(VAR1.VAR2, ==, 10);
    FUN7(VAR1.VAR4);
}