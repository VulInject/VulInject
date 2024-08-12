static void FUN1(void)
{
    TimerTestData VAR1 = {.VAR2 = 0, .VAR3 = VAR3, .VAR4 = VAR5 * 750LL, .VAR6 = 2, .VAR7 = VAR8};
    int VAR9[2];
    int64_t VAR10;
    FUN2(!FUN3(VAR9));
    FUN4(VAR9[0]);
    FUN4(VAR9[1]);
    FUN5(VAR3, VAR9[0], VAR11, NULL, NULL);
    do
    {
    } while (FUN6(NULL, false));
    FUN7(VAR3, &VAR1.VAR12, VAR1.VAR7, VAR13, VAR14, &VAR1);
    VAR10 = FUN8(VAR1.VAR7) + VAR1.VAR4;
    FUN9(&VAR1.VAR12, VAR10);
    FUN10(VAR1.VAR2, ==, 0);
    FUN11(1 * VAR15);
    FUN10(VAR1.VAR2, ==, 0);
    FUN2(FUN6(NULL, true));
    FUN10(VAR1.VAR2, ==, 1);
    VAR10 += VAR1.VAR4;
    while (VAR1.VAR2 < 2)
    {
        FUN6(NULL, true);
    }
    FUN10(VAR1.VAR2, ==, 2);
    FUN2(FUN8(VAR1.VAR7) > VAR10);
    FUN5(VAR3, VAR9[0], NULL, NULL, NULL);
    close(VAR9[0]);
    close(VAR9[1]);
    FUN12(&VAR1.VAR12);
}