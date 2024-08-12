static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    TCGv_i32 VAR4 = FUN2(VAR2->VAR5);
    TCGv_i32 VAR6 = FUN2(VAR3);
    if (VAR2->VAR7->VAR8 & VAR9)
    {
        FUN3();
    }
    FUN4(VAR10, VAR4, VAR6);
    if (VAR2->VAR7->VAR8 & VAR9)
    {
        FUN5();
    }
    FUN6(VAR4);
    FUN6(VAR6);
    FUN7(VAR2, 0);
}