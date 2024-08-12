static bool FUN1(VAR1 *VAR2, uint32_t VAR3, TCGv_i32 VAR4)
{
    uint32_t VAR5 = VAR3 - VAR6;
    bool VAR7 = false;
    if (VAR5 < VAR2->VAR8->VAR9)
    {
        uint32_t VAR10 = 1 << VAR2->VAR8->VAR11[VAR5];
        TCGv_i32 VAR12 = FUN2(VAR5);
        FUN3(VAR13[VAR3], VAR4);
        FUN4(VAR13[VAR14], VAR13[VAR14], ~VAR10);
        if (VAR2->VAR15->VAR16 & VAR17)
        {
            FUN5();
        }
        FUN6(VAR18, VAR12);
        if (VAR2->VAR15->VAR16 & VAR17)
        {
            FUN7();
            FUN8(VAR2, 0);
            VAR7 = true;
        }
        FUN9(VAR12);
    }
    return VAR7;
}