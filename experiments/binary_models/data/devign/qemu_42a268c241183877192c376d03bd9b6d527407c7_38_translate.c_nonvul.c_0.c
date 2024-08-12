static void FUN1(VAR1 *VAR2, int VAR3, TCGv_i32 VAR4, bool VAR5)
{
    if (!FUN2(VAR2, VAR6))
    {
        FUN3(VAR4, VAR4, ~0 << VAR3);
    }
    else if (FUN2(VAR2, VAR7) && VAR5)
    {
        VAR8 *VAR9 = FUN4();
        TCGv_i32 VAR10 = FUN5();
        FUN3(VAR10, VAR4, ~(~0 << VAR3));
        FUN6(VAR11, VAR10, 0, VAR9);
        FUN7(VAR2, VAR12, VAR4);
        FUN8(VAR9);
        FUN9(VAR10);
    }
}