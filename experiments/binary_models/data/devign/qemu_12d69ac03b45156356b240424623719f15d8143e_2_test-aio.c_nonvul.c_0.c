static void FUN1(void)
{
    EventNotifierTestData VAR1 = {.VAR2 = 0, .VAR3 = 10, .VAR4 = true};
    FUN2(&VAR1.VAR5, false);
    FUN3(VAR6, &VAR1.VAR5, VAR7);
    while (FUN4(NULL, false))
        ;
    FUN5(VAR1.VAR2, ==, 0);
    FUN5(VAR1.VAR3, ==, 10);
    FUN6(&VAR1.VAR5);
    FUN7(FUN4(NULL, false));
    FUN5(VAR1.VAR2, ==, 1);
    FUN5(VAR1.VAR3, ==, 9);
    FUN7(FUN4(NULL, false));
    while (FUN4(NULL, false))
        ;
    FUN5(VAR1.VAR2, ==, 10);
    FUN5(VAR1.VAR3, ==, 0);
    FUN7(!FUN4(NULL, false));
    FUN3(VAR6, &VAR1.VAR5, NULL);
    while (FUN4(NULL, false))
        ;
    FUN8(&VAR1.VAR5);
}