static void FUN1(void)
{
    TestData VAR1;
    uint16_t VAR2 = FUN2(8);
    uint16_t VAR3;
    VAR1.VAR4 = NULL;
    VAR1.VAR5 = true;
    FUN3(&VAR1);
    FUN4(&VAR1);
    FUN5(&VAR1);
    FUN6(false);
    FUN7(&VAR1, VAR2);
    FUN8(&VAR1);
    FUN9(&VAR1);
    do
    {
        VAR3 = FUN10(VAR1.VAR6, VAR1.VAR7, VAR8) & VAR9;
        FUN11(VAR3, ==, VAR2);
        FUN12(VAR10);
        VAR2--;
    } while (!(FUN10(VAR1.VAR6, VAR1.VAR7, VAR11) & VAR12));
    FUN4(&VAR1);
    FUN13();
}