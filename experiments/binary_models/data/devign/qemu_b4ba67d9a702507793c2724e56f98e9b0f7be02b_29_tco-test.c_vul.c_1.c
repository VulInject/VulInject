static void FUN1(void)
{
    TestData VAR1;
    uint16_t VAR2;
    VAR1.VAR3 = NULL;
    VAR1.VAR4 = true;
    FUN2(&VAR1);
    VAR2 = VAR5;
    FUN3(VAR1.VAR6, VAR1.VAR7 + VAR8, VAR2);
    VAR2 &= ~VAR5;
    FUN3(VAR1.VAR6, VAR1.VAR7 + VAR8, VAR2);
    FUN4(FUN5(VAR1.VAR6, VAR1.VAR7 + VAR8), ==, VAR5);
    FUN6();
}