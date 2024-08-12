static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, int VAR5)
{
    TCGv_i32 VAR6 = FUN2(VAR4);
    if (((VAR2->VAR7->VAR8 ^ VAR4) & VAR9) != 0)
    {
        VAR5 = -1;
    }
    FUN3(VAR2, VAR3, VAR6, VAR5);
    FUN4(VAR6);
}