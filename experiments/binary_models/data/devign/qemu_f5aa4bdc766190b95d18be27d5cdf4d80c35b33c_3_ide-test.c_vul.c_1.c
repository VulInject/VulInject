static void FUN1(void)
{
    VAR1 *VAR2;
    QPCIBar VAR3, VAR4;
    uint8_t VAR5;
    PrdtEntry VAR6[] = {
        {
            .VAR7 = 0,
            .VAR8 = FUN2(0x1000 | VAR9),
        },
    };
    VAR2 = FUN3(&VAR3, &VAR4);
    VAR5 = FUN4(VAR10, 0, 1, VAR6, FUN5(VAR6), NULL);
    FUN6(VAR5, ==, VAR11 | VAR12);
    FUN7(FUN8(VAR2, VAR4, VAR13), VAR14 | VAR15);
    VAR5 = FUN4(VAR10 | VAR16, 0, 1, VAR6, FUN5(VAR6), NULL);
    FUN6(VAR5, ==, VAR12);
    FUN7(FUN8(VAR2, VAR4, VAR13), VAR14 | VAR15);