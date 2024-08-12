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
    FUN5(false);
    FUN6(&VAR1, VAR2);
    FUN7(&VAR1);
    FUN8(&VAR1);
    FUN9(VAR2 * VAR7);
    FUN10(VAR1.VAR8, VAR1.VAR9 + VAR10, 0);
    FUN10(VAR1.VAR8, VAR1.VAR9 + VAR11, 0);
    VAR3 = FUN11(VAR1.VAR8, VAR1.VAR9 + VAR12);
    VAR4 = VAR3 & (VAR13 | VAR14 | VAR15) ? 1 : 0;
    FUN12(VAR4 == 1);
    FUN13(VAR1.VAR8, VAR1.VAR9 + VAR12, VAR3);
    FUN14(FUN11(VAR1.VAR8, VAR1.VAR9 + VAR12), ==, 0);
    FUN15();
}