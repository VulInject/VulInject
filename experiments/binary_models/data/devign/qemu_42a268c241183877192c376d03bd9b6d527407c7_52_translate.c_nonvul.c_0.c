static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, TCGv_i32 VAR6, int VAR7)
{
    FUN2(VAR8, VAR6);
    FUN3(VAR9, VAR7 | (VAR3 << 4) | (VAR4 << 8) | (VAR5 << 12));
    FUN4(VAR2, 4, VAR10);
}