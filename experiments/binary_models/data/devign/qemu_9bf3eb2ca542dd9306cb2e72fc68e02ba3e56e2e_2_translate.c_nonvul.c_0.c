static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7 = FUN2();
    uint32_t VAR8;
    TCGCond VAR9;
    TCGv VAR10 = FUN3(VAR11);
    TCGv VAR12 = FUN4(VAR13);
    if (VAR5)
        VAR8 = 1 << (24 + VAR5);
    else
        VAR8 = 1 << 23;
    if (VAR6)
        VAR9 = VAR14;
    else
        VAR9 = VAR15;
    FUN5(VAR10, VAR3);
    FUN6(VAR12, VAR16, VAR8);
    FUN7(VAR9, VAR12, 0, VAR7);
    FUN5(VAR10, VAR4);
    FUN8(VAR7);
    FUN9(VAR10, VAR3);
    FUN10(VAR10);
}