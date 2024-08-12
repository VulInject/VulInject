static inline void FUN1(VAR1 *VAR2)
{
    TCGv_i64 VAR3;
    if (FUN2(!VAR2->VAR4))
    {
        FUN3(VAR2, VAR5);
        return;
    }
    FUN4(VAR2);
    VAR3 = FUN5();
    FUN6(VAR3, FUN7(VAR2->VAR6));
    FUN8(VAR3, VAR7, FUN9(VAR8, VAR9));
    FUN10(VAR3);
}