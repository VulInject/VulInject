static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4)
{
    TCGv_i32 VAR5 = FUN2(VAR3);
    if (((VAR2->VAR6->VAR7 ^ VAR3) & VAR8) != 0)
    {
        VAR4 = -1;
    }
    FUN3(VAR2, VAR5, VAR4);
    FUN4(VAR5);
}