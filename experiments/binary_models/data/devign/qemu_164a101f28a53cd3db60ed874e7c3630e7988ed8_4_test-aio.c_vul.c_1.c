static void FUN1(void)
{
    EventNotifierTestData VAR1 = {.VAR2 = 0, .VAR3 = 1};
    FUN2(&VAR1.VAR4, false);
    FUN3(VAR5, &VAR1.VAR4, VAR6, VAR7);
    FUN4(FUN5(VAR5, false));
    FUN6(VAR1.VAR2, ==, 0);
    FUN6(VAR1.VAR3, ==, 1);
    FUN7(&VAR1.VAR4);
    FUN4(FUN5(VAR5, false));
    FUN6(VAR1.VAR2, ==, 1);
    FUN6(VAR1.VAR3, ==, 0);
    FUN4(!FUN5(VAR5, false));
    FUN6(VAR1.VAR2, ==, 1);
    FUN6(VAR1.VAR3, ==, 0);
    FUN3(VAR5, &VAR1.VAR4, NULL, NULL);
    FUN4(!FUN5(VAR5, false));
    FUN6(VAR1.VAR2, ==, 1);
    FUN8(&VAR1.VAR4);
}