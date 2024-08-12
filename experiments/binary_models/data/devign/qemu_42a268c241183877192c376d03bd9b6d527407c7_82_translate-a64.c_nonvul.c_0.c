static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4, VAR5, VAR6;
    uint64_t VAR7;
    VAR8 *VAR9;
    TCGv_i64 VAR10;
    VAR4 = (FUN2(VAR3, 31, 1) << 5) | FUN2(VAR3, 19, 5);
    VAR5 = FUN2(VAR3, 24, 1);
    VAR7 = VAR2->VAR11 + FUN3(VAR3, 5, 14) * 4 - 4;
    VAR6 = FUN2(VAR3, 0, 5);
    VAR10 = FUN4();
    FUN5(VAR10, FUN6(VAR2, VAR6), (1ULL << VAR4));
    VAR9 = FUN7();
    FUN8(VAR5 ? VAR12 : VAR13, VAR10, 0, VAR9);
    FUN9(VAR10);
    FUN10(VAR2, 0, VAR2->VAR11);
    FUN11(VAR9);
    FUN10(VAR2, 1, VAR7);
}