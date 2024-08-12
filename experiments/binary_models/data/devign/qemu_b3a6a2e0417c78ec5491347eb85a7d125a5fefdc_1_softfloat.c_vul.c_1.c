VAR1 FUN1(float64 a VAR2)
{
    flag VAR3;
    int16 VAR4, VAR5;
    uint64_t VAR6, VAR7;
    int32 VAR8;
    VAR9 = FUN2(a VAR10);
    VAR6 = FUN3(VAR9);
    VAR4 = FUN4(VAR9);
    VAR3 = FUN5(VAR9);
    if (0x41E < VAR4)
    {
        if ((VAR4 == 0x7FF) && VAR6)
            VAR3 = 0;
        goto VAR11;
    }
    else if (VAR4 < 0x3FF)
    {
        if (VAR4 || VAR6)
            FUN6(VAR12) |= VAR13;
        return 0;
    }
    VAR6 |= FUN7(0x0010000000000000);
    VAR5 = 0x433 - VAR4;
    VAR7 = VAR6;
    VAR6 >>= VAR5;
    VAR8 = VAR6;
    if (VAR3)
        VAR8 = -VAR8;
    if ((VAR8 < 0) ^ VAR3)
    {
    VAR11:
        FUN8(float_flag_invalid VAR10);
        return VAR3 ? (VAR14)0x80000000 : 0x7FFFFFFF;
    }
    if ((VAR6 << VAR5) != VAR7)
    {
        FUN6(VAR12) |= VAR13;
    }
    return VAR8;
}