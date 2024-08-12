static void FUN1(void)
{
    EventNotifierTestData VAR1 = {.VAR2 = 0};
    EventNotifierTestData VAR3 = {.VAR2 = 0, .VAR4 = 1};
    FUN2(&VAR1.VAR5, false);
    FUN3(VAR6, &VAR1.VAR5, VAR7, NULL);
    FUN4(!FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 0);
    FUN7(&VAR1.VAR5);
    FUN4(!FUN5(VAR6, true));
    VAR1.VAR2 = 0;
    FUN2(&VAR3.VAR5, false);
    FUN3(VAR6, &VAR3.VAR5, VAR7, VAR8);
    FUN7(&VAR1.VAR5);
    FUN4(FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 1);
    FUN4(FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 1);
    FUN7(&VAR1.VAR5);
    FUN4(FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 2);
    FUN4(FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 2);
    FUN7(&VAR3.VAR5);
    FUN8();
    FUN6(VAR1.VAR2, ==, 2);
    FUN6(VAR3.VAR2, ==, 1);
    FUN6(VAR3.VAR4, ==, 0);
    FUN3(VAR6, &VAR3.VAR5, NULL, NULL);
    FUN9(&VAR3.VAR5);
    FUN3(VAR6, &VAR1.VAR5, NULL, NULL);
    FUN4(!FUN5(VAR6, false));
    FUN6(VAR1.VAR2, ==, 2);
    FUN9(&VAR1.VAR5);
}