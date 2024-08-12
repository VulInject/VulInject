static inline void FUN1(int VAR1, int VAR2, int VAR3, int VAR4)
{
    uint32_t VAR5, VAR6;
    int VAR7;
    TCGv VAR8 = FUN2(VAR9);
    TCGv VAR10 = FUN2(VAR9);
    int VAR11 = FUN3();
    int VAR12 = FUN3();
    if (VAR3)
    {
        VAR5 = 1 << (24 + VAR3);
        VAR6 = 1 << (25 + VAR3);
    }
    else
    {
        VAR5 = 1 << 23;
        VAR6 = 1 << 25;
    }
    if (VAR4)
        VAR7 = VAR13;
    else
        VAR7 = VAR14;
    FUN4(VAR10, VAR2);
    FUN5(VAR8, VAR15, VAR5);
    FUN6(VAR7, VAR8, 0, VAR11);
    FUN4(VAR10, VAR1);
    FUN7(VAR11);
    FUN8(VAR10, VAR2);
    FUN9(VAR10, VAR2);
    FUN5(VAR8, VAR15, VAR6);
    FUN6(VAR7, VAR8, 0, VAR12);
    FUN9(VAR10, VAR1);
    FUN7(VAR12);
    FUN10(VAR10, VAR2);
    FUN11(VAR8);
    FUN11(VAR10);
}