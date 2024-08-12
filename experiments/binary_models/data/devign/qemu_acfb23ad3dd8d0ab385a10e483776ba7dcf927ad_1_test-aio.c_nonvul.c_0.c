static void FUN1(void)
{
    BHTestData VAR1 = {.VAR2 = 0, .VAR3 = 1};
    VAR1.VAR4 = FUN2(VAR5, VAR6, &VAR1);
    FUN3(VAR1.VAR4);
    FUN4(VAR1.VAR2, ==, 0);
    while (VAR1.VAR2 < VAR1.VAR3)
    {
        FUN5(VAR5, true);
    }
    FUN4(VAR1.VAR2, ==, VAR1.VAR3);
    FUN6(VAR1.VAR4 == NULL);
    FUN6(!FUN5(VAR5, false));
}