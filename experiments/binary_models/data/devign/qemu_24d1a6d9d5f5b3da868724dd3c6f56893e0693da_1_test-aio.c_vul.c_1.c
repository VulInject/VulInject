static void FUN1(void)
{
    EventNotifierTestData VAR1 = {.VAR2 = 0, .VAR3 = 10, .VAR4 = true};
    FUN2(&VAR1.VAR5, false);
    FUN3(VAR6, &VAR1.VAR5, VAR7, VAR8);
    FUN4(FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 0);
    FUN6(VAR1.VAR3, ==, 10);
    FUN7(&VAR1.VAR5);
    FUN4(FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 1);
    FUN6(VAR1.VAR3, ==, 9);
    FUN4(FUN5(VAR6, false));
    FUN8();
    FUN6(VAR1.VAR2, ==, 10);
    FUN6(VAR1.VAR3, ==, 0);
    FUN4(!FUN5(VAR6, false));
    FUN3(VAR6, &VAR1.VAR5, NULL, NULL);
    FUN4(!FUN5(VAR6, false));
    FUN9(&VAR1.VAR5);
}