static void FUN1(void)
{
    int VAR1, VAR2;
    for (VAR1 = 1; VAR1 < 3; VAR1++)
    {
        EventNotifierTestData VAR3 = {.VAR4 = 0, .VAR5 = 10, .VAR6 = true};
        FUN2(&VAR3.VAR7, false);
        FUN3(VAR8, &VAR3.VAR7, true, VAR9);
        FUN4(&VAR3.VAR7);
        for (VAR2 = 0; VAR2 < VAR1; VAR2++)
        {
            FUN5(VAR8);
        }
        for (VAR2 = 0; VAR2 < VAR1; VAR2++)
        {
            assert(!FUN6(VAR8, false));
            assert(FUN7(&VAR3.VAR7));
            FUN4(&VAR3.VAR7);
            FUN8(VAR8);
        }
        assert(FUN6(VAR8, false));
        FUN9(&VAR3.VAR7);
    }