static VAR1 FUN1(VAR2 *VAR3, TCGCond VAR4, TCGv VAR5, int32_t VAR6)
{
    uint64_t VAR7 = VAR3->VAR8 + (VAR6 << 2);
    VAR9 *VAR10 = FUN2();
    if (FUN3(VAR3, VAR7))
    {
        FUN4(VAR4, VAR5, 0, VAR10);
        FUN5(0);
        FUN6(VAR11, VAR3->VAR8);
        FUN7((VAR12)VAR3->VAR13);
        FUN8(VAR10);
        FUN5(1);
        FUN6(VAR11, VAR7);
        FUN7((VAR12)VAR3->VAR13 + 1);
        return VAR14;
    }
    else
    {
        TCGv_i64 VAR15 = FUN9(0);
        TCGv_i64 VAR16 = FUN9(VAR7);
        TCGv_i64 VAR17 = FUN9(VAR3->VAR8);
        FUN10(VAR4, VAR11, VAR5, VAR15, VAR16, VAR17);
        FUN11(VAR15);
        FUN11(VAR16);
        FUN11(VAR17);
        return VAR18;
    }
}