VAR1 FUN1(float32 a VAR2)
{
    flag VAR3;
    int16 VAR4, VAR5;
    bits32 VAR6, VAR7;
    bits64 VAR8, VAR9;
    VAR6 = FUN2(VAR10);
    VAR4 = FUN3(VAR10);
    VAR3 = FUN4(VAR10);
    if (VAR4 == 0xFF)
    {
        if (VAR6)
            return FUN5(VAR10, float32_zero VAR11);
        if (!VAR3)
            return VAR10;
        FUN6(float_flag_invalid VAR11);
        return VAR12;
    }
    if (VAR3)
    {
        if ((VAR4 | VAR6) == 0)
            return VAR10;
        FUN6(float_flag_invalid VAR11);
        return VAR12;
    }
    if (VAR4 == 0)
    {
        if (VAR6 == 0)
            return VAR13;
        FUN7(VAR6, &VAR4, &VAR6);
    }
    VAR5 = ((VAR4 - 0x7F) >> 1) + 0x7E;
    VAR6 = (VAR6 | 0x00800000) << 8;
    VAR7 = FUN8(VAR4, VAR6) + 2;
    if ((VAR7 & 0x7F) <= 5)
    {
        if (VAR7 < 2)
        {
            VAR7 = 0x7FFFFFFF;
            goto VAR14;
        }
        VAR6 >>= VAR4 & 1;
        VAR9 = ((VAR15)VAR7) * VAR7;
        VAR8 = (((VAR15)VAR6) << 32) - VAR9;
        while ((VAR16)VAR8 < 0)
        {
            --VAR7;
            VAR8 += (((VAR15)VAR7) << 1) | 1;
        }
        VAR7 |= (VAR8 != 0);
    }
    FUN9(VAR7, 1, &VAR7);
VAR14:
    return FUN10(0, VAR5, zSig VAR11);
}