static void FUN1(void)
{
    TestData VAR1;
    const uint16_t VAR2 = 0xffff;
    uint32_t VAR3;
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
    FUN9(((VAR2 & VAR7) - 1) * VAR8);
    VAR3 = FUN10(VAR1.VAR9, VAR1.VAR10 + VAR11);
    FUN11(VAR3 & VAR12, ==, 1);
    VAR3 = FUN10(VAR1.VAR9, VAR1.VAR10 + VAR13);
    VAR4 = VAR3 & VAR14 ? 1 : 0;
    FUN12(VAR4 == 0);
    FUN9(VAR8);
    VAR3 = FUN10(VAR1.VAR9, VAR1.VAR10 + VAR13);
    VAR4 = VAR3 & VAR14 ? 1 : 0;
    FUN12(VAR4 == 1);
    FUN3(&VAR1);
    FUN13();
}