static void FUN1(void)
{
    BHTestData VAR1 = {.VAR2 = 0, .VAR3 = 1};
    BHTestData VAR4 = {.VAR2 = 0, .VAR3 = 3};
    BHTestData VAR5 = {.VAR2 = 0, .VAR3 = 2};
    BHTestData VAR6 = {.VAR2 = 0, .VAR3 = 4};
    VAR1.VAR7 = FUN2(VAR8, VAR9, &VAR1);
    VAR4.VAR7 = FUN2(VAR8, VAR9, &VAR4);
    VAR5.VAR7 = FUN2(VAR8, VAR9, &VAR5);
    VAR6.VAR7 = FUN2(VAR8, VAR9, &VAR6);
    FUN3(VAR1.VAR7);
    FUN3(VAR4.VAR7);
    FUN3(VAR5.VAR7);
    FUN3(VAR6.VAR7);
    FUN4(VAR1.VAR2, ==, 0);
    FUN4(VAR4.VAR2, ==, 0);
    FUN4(VAR5.VAR2, ==, 0);
    FUN4(VAR6.VAR2, ==, 0);
    FUN5(FUN6(VAR8, false));
    FUN4(VAR1.VAR2, ==, 1);
    FUN4(VAR4.VAR2, ==, 1);
    FUN4(VAR5.VAR2, ==, 1);
    FUN4(VAR6.VAR2, ==, 1);
    FUN5(VAR1.VAR7 == NULL);
    while (VAR1.VAR2 < VAR1.VAR3 || VAR4.VAR2 < VAR4.VAR3 || VAR5.VAR2 < VAR5.VAR3 || VAR6.VAR2 < VAR6.VAR3)
    {
        FUN6(VAR8, true);
    }
    FUN4(VAR1.VAR2, ==, VAR1.VAR3);
    FUN4(VAR4.VAR2, ==, VAR4.VAR3);
    FUN4(VAR5.VAR2, ==, VAR5.VAR3);
    FUN4(VAR6.VAR2, ==, VAR6.VAR3);
    FUN5(VAR1.VAR7 == NULL);
    FUN5(VAR4.VAR7 == NULL);
    FUN5(VAR5.VAR7 == NULL);
    FUN5(VAR6.VAR7 == NULL);
}