static void FUN1(void)
{
    static const size_t VAR1 = VAR2;
    size_t VAR3;
    char *VAR4 = FUN2(VAR2 * 16);
    char *VAR5 = FUN3(VAR1);
    uintptr_t VAR6;
    PrdtEntry VAR7[1];
    VAR8 *VAR9;
    FUN4(""
                   "",
                   VAR10);
    FUN5(VAR11, "");
    VAR6 = FUN6(VAR12, VAR1);
    VAR7[0].VAR13 = FUN7(VAR6);
    VAR7[0].VAR14 = FUN7(VAR1 | VAR15);
    FUN8(VAR4, VAR2 * 16, VAR2);
    VAR9 = fopen(VAR10, "");
    VAR3 = fwrite(VAR4, VAR2, 16, VAR9);
    FUN9(VAR3, ==, 16);
    fclose(VAR9);
    FUN10(VAR16, 0, 1, VAR7, 1, VAR17);
    FUN11(VAR6, VAR5, VAR1);
    FUN9(memcmp(VAR4, VAR5, VAR1), ==, 0);
    FUN12(VAR4);
    FUN12(VAR5);
    FUN13();
}