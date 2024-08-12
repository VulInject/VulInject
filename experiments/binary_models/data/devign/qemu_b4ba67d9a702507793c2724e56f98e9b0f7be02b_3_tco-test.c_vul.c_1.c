static void FUN1(void)
{
    TestData VAR1;
    const uint16_t VAR2 = FUN2(4);
    uint32_t VAR3;
    int VAR4;
    VAR1.VAR5 = NULL;
    VAR1.VAR6 = true;
    FUN3(&VAR1);
    FUN4(&VAR1);
    FUN5(&VAR1);
    FUN6(false);
    FUN7(&VAR1, VAR2);
    FUN8(&VAR1);
    FUN9(&VAR1);
    FUN10(VAR2 * VAR7);
    VAR3 = FUN11(VAR1.VAR8, VAR1.VAR9 + VAR10);
    VAR4 = VAR3 & VAR11 ? 1 : 0;
    FUN12(VAR4 == 1);
    VAR3 |= VAR11;
    FUN13(VAR1.VAR8, VAR1.VAR9 + VAR10, VAR3);
    VAR3 = FUN11(VAR1.VAR8, VAR1.VAR9 + VAR10);
    VAR4 = VAR3 & VAR11 ? 1 : 0;
    FUN12(VAR4 == 0);
    FUN10(VAR2 * VAR7);
    VAR3 = FUN11(VAR1.VAR8, VAR1.VAR9 + VAR10);
    VAR4 = VAR3 & VAR11 ? 1 : 0;
    FUN12(VAR4 == 1);
    VAR3 = FUN11(VAR1.VAR8, VAR1.VAR9 + VAR12);
    VAR4 = VAR3 & VAR13 ? 1 : 0;
    FUN12(VAR4 == 1);
    FUN4(&VAR1);
    FUN14();
}