static bool FUN1(VAR1 *VAR2, uint32_t VAR3, TCGv_i32 VAR4)
{
    if (VAR2->VAR5->VAR6 & VAR7)
    {
        FUN2();
    }
    FUN3(VAR8, VAR4);
    if (VAR2->VAR5->VAR6 & VAR7)
    {
        FUN4();
        FUN5(VAR2, 0);
        return true;
    }
    return false;
}