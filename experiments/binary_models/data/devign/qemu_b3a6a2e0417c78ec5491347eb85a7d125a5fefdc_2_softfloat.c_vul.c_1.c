VAR1 FUN1(floatx80 a VAR2)
{
    flag VAR3;
    int32 VAR4, VAR5;
    uint64_t VAR6, VAR7;
    int32 VAR8;
    VAR6 = FUN2(VAR9);
    VAR4 = FUN3(VAR9);
    VAR3 = FUN4(VAR9);
    if (0x401E < VAR4)
    {
        if ((VAR4 == 0x7FFF) && (VAR10)(VAR6 << 1))
            VAR3 = 0;
        goto VAR11;
    }
    else if (VAR4 < 0x3FFF)
    {
        if (VAR4 || VAR6)
            FUN5(VAR12) |= VAR13;
        return 0;
    }
    VAR5 = 0x403E - VAR4;
    VAR7 = VAR6;
    VAR6 >>= VAR5;
    VAR8 = VAR6;
    if (VAR3)
        VAR8 = -VAR8;
    if ((VAR8 < 0) ^ VAR3)
    {
    VAR11:
        FUN6(float_flag_invalid VAR14);
        return VAR3 ? (VAR15)0x80000000 : 0x7FFFFFFF;
    }
    if ((VAR6 << VAR5) != VAR7)
    {
        FUN5(VAR12) |= VAR13;
    }
    return VAR8;
}