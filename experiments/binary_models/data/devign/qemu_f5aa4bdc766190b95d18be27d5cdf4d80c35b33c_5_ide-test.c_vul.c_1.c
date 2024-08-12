static void FUN1(uint8_t VAR1)
{
    VAR2 *VAR3;
    QPCIBar VAR4, VAR5;
    uint8_t VAR6;
    size_t VAR7 = 512;
    uintptr_t VAR8;
    void *VAR9;
    VAR3 = FUN2(&VAR4, &VAR5);
    VAR8 = FUN3(VAR10, VAR7);
    VAR9 = FUN4(VAR7);
    memset(VAR9, rand() % 255 + 1, VAR7);
    FUN5(VAR8);
    FUN5(VAR9);
    FUN6(VAR8, VAR9, VAR7);
    PrdtEntry VAR11[] = {
        {
            .VAR12 = FUN7(VAR8),
            .VAR13 = FUN7(VAR7 | VAR14),
        },
    };
    VAR6 = FUN8(VAR15, 1, 1, VAR11, FUN9(VAR11), NULL);
    FUN10(VAR6, ==, VAR16);
    FUN11(FUN12(VAR3, VAR5, VAR17), VAR18 | VAR19);
    FUN13(VAR9);