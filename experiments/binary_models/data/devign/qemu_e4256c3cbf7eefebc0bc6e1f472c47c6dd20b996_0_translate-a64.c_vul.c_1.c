static void FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, unsigned int VAR5)
{
    TCGv_i64 VAR6 = FUN2(VAR2, VAR5);
    TCGv_i64 VAR7 = FUN3();
    TCGv_i64 VAR8 = FUN4(VAR2, VAR4, VAR3);
    TCGv_i64 VAR9 = FUN5(VAR3 ? 0x00ff00ff00ff00ffull : 0x00ff00ff);
    FUN6(VAR7, VAR8, 8);
    FUN7(VAR6, VAR8, VAR9);
    FUN7(VAR7, VAR7, VAR9);
    FUN8(VAR6, VAR6, 8);
    FUN9(VAR6, VAR6, VAR7);
    FUN10(VAR7);