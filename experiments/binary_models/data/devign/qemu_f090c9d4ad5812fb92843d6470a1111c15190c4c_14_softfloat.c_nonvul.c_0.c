VAR1 FUN1(float32 a VAR2)
{
    flag VAR3;
    int16 VAR4, VAR5;
    bits32 VAR6;
    bits64 VAR7;
    int64 VAR8;
    VAR6 = FUN2(VAR9);
    VAR4 = FUN3(VAR9);
    VAR3 = FUN4(VAR9);
    VAR5 = VAR4 - 0xBE;
    if (0 <= VAR5)
    {
        if (FUN5(VAR9) != 0xDF000000)
        {
            FUN6(float_flag_invalid VAR10);
            if (!VAR3 || ((VAR4 == 0xFF) && VAR6))
            {
                return FUN7(0x7FFFFFFFFFFFFFFF);
            }
        }
        return (VAR11)FUN7(0x8000000000000000);
    }
    else if (VAR4 <= 0x7E)
    {
        if (VAR4 | VAR6)
            FUN8(VAR12) |= VAR13;
        return 0;
    }
    VAR7 = VAR6 | 0x00800000;
    VAR7 <<= 40;
    VAR8 = VAR7 >> (-VAR5);
    if ((VAR14)(VAR7 << (VAR5 & 63)))
    {
        FUN8(VAR12) |= VAR13;
    }
    if (VAR3)
        VAR8 = -VAR8;
    return VAR8;
}