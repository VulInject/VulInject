static void FUN1(void)
{
    VAR1 *VAR2;
    void *VAR3, *VAR4;
    uint8_t VAR5;
    VAR6 *VAR7;
    VAR6 *VAR8;
    size_t VAR9 = 512;
    uintptr_t VAR10 = FUN2(VAR11, VAR9);
    PrdtEntry VAR12[] = {
        {
            .VAR13 = FUN3(VAR10),
            .VAR14 = FUN3(VAR9 | VAR15),
        },
    };
    VAR2 = FUN4(&VAR3, &VAR4);
    VAR7 = FUN5(VAR9);
    VAR8 = FUN5(VAR9);
    memset(VAR7, 0x55, VAR9);
    FUN6(VAR10, VAR7, VAR9);
    VAR5 = FUN7(VAR16, 0, 1, VAR12, FUN8(VAR12), NULL);
    FUN9(VAR5, ==, VAR17);
    FUN10(FUN11(VAR2, VAR4 + VAR18), VAR19 | VAR20);
    memset(VAR7, 0xaa, VAR9);
    FUN6(VAR10, VAR7, VAR9);
    VAR5 = FUN7(VAR16, 1, 1, VAR12, FUN8(VAR12), NULL);
    FUN9(VAR5, ==, VAR17);
    FUN10(FUN11(VAR2, VAR4 + VAR18), VAR19 | VAR20);
    memset(VAR8, 0x55, VAR9);
    VAR5 = FUN7(VAR21, 0, 1, VAR12, FUN8(VAR12), NULL);
    FUN9(VAR5, ==, VAR17);
    FUN10(FUN11(VAR2, VAR4 + VAR18), VAR19 | VAR20);
    FUN12(VAR10, VAR7, VAR9);
    FUN13(memcmp(VAR7, VAR8, VAR9) == 0);
    memset(VAR8, 0xaa, VAR9);
    VAR5 = FUN7(VAR21, 1, 1, VAR12, FUN8(VAR12), NULL);
    FUN9(VAR5, ==, VAR17);
    FUN10(FUN11(VAR2, VAR4 + VAR18), VAR19 | VAR20);
    FUN12(VAR10, VAR7, VAR9);
    FUN13(memcmp(VAR7, VAR8, VAR9) == 0);
    FUN14(VAR7);
    FUN14(VAR8);
}