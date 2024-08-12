static void FUN1(void)
{
    VAR1 *VAR2;
    QPCIBar VAR3, VAR4;
    uint8_t VAR5;
    PrdtEntry VAR6[] = {
        {
            .VAR7 = 0,
            .VAR8 = FUN2(0x10 | VAR9),
        },
    };
    VAR2 = FUN3(&VAR3, &VAR4);
    VAR5 = FUN4(VAR10, 0, 1, VAR6, FUN5(VAR6), NULL);
    FUN6(VAR5, ==, 0);
    FUN7(FUN8(VAR2, VAR4, VAR11), VAR12 | VAR13);
    VAR5 = FUN4(VAR10 | VAR14, 0, 1, VAR6, FUN5(VAR6), NULL);
    FUN6(VAR5, ==, 0);
    FUN7(FUN8(VAR2, VAR4, VAR11), VAR12 | VAR13);