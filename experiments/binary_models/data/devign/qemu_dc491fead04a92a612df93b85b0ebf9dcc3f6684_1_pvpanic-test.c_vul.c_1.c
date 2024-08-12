static void FUN1(void)
{
    uint8_t VAR1;
    VAR2 *VAR3, *VAR4;
    VAR1 = FUN2(0x505);
    FUN3(VAR1, ==, 1);
    FUN4(0x505, 0x1);
    VAR3 = FUN5();
    FUN6(FUN7(VAR3, ""));
    FUN8(FUN9(VAR3, ""), ==, "");
    FUN6(FUN7(VAR3, ""));
    VAR4 = FUN10(VAR3, "");
    FUN6(FUN7(VAR4, ""));
    FUN8(FUN9(VAR4, ""), ==, "");