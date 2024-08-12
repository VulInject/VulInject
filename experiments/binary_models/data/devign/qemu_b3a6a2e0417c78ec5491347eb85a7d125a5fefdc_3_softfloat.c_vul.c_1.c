VAR1 FUN1(float128 a VAR2)
{
    flag VAR3;
    int32 VAR4, VAR5;
    uint64_t VAR6, VAR7, VAR8;
    int32 VAR9;
    VAR7 = FUN2(VAR10);
    VAR6 = FUN3(VAR10);
    VAR4 = FUN4(VAR10);
    VAR3 = FUN5(VAR10);
    VAR6 |= (VAR7 != 0);
    if (0x401E < VAR4)
    {
        if ((VAR4 == 0x7FFF) && VAR6)
            VAR3 = 0;
        goto VAR11;
    }
    else if (VAR4 < 0x3FFF)
    {
        if (VAR4 || VAR6)
            FUN6(VAR12) |= VAR13;
        return 0;
    }
    VAR6 |= FUN7(0x0001000000000000);
    VAR5 = 0x402F - VAR4;
    VAR8 = VAR6;
    VAR6 >>= VAR5;
    VAR9 = VAR6;
    if (VAR3)
        VAR9 = -VAR9;
    if ((VAR9 < 0) ^ VAR3)
    {
    VAR11:
        FUN8(float_flag_invalid VAR14);
        return VAR3 ? (VAR15)0x80000000 : 0x7FFFFFFF;
    }
    if ((VAR6 << VAR5) != VAR8)
    {
        FUN6(VAR12) |= VAR13;
    }
    return VAR9;
}