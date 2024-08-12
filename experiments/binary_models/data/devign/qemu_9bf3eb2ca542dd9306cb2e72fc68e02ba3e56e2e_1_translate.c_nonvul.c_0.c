static inline void FUN1(int VAR1, int VAR2, int VAR3, int VAR4)
{
    uint32_t VAR5;
    int VAR6;
    TCGv VAR7 = FUN2(VAR8);
    TCGv VAR9 = FUN3(VAR8);
    int VAR10 = FUN4();
    if (VAR3)
        VAR5 = 1 << (24 + VAR3);
    else
        VAR5 = 1 << 23;
    if (VAR4)
        VAR6 = VAR11;
    else
        VAR6 = VAR12;
    FUN5(VAR9, VAR2);
    FUN6(VAR7, VAR13, VAR5);
    FUN7(VAR6, VAR7, 0, VAR10);
    FUN5(VAR9, VAR1);
    FUN8(VAR10);
    FUN9(VAR9, VAR2);
    FUN10(VAR9);
}