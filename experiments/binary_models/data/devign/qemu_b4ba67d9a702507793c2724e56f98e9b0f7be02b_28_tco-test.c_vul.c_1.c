static void FUN1(void)
{
    TestData VAR1;
    uint16_t VAR2 = 8;
    uint16_t VAR3;
    int VAR4;
    VAR1.VAR5 = NULL;
    VAR1.VAR6 = true;
    FUN2(&VAR1);
    FUN3(&VAR1);
    FUN4(&VAR1);
    FUN5(true);
    FUN6(&VAR1, VAR2);
    FUN7(&VAR1);
    FUN8(&VAR1);
    FUN9(VAR2 * VAR7 * 2);
    VAR3 = FUN10(VAR1.VAR8, VAR1.VAR9 + VAR10);
    VAR4 = VAR3 & (VAR11 | VAR12) ? 1 : 0;
    FUN11(VAR4 == 1);
    FUN12(VAR1.VAR8, VAR1.VAR9 + VAR10, VAR3);
    FUN13(FUN10(VAR1.VAR8, VAR1.VAR9 + VAR10), ==, 0);
    FUN14();
}