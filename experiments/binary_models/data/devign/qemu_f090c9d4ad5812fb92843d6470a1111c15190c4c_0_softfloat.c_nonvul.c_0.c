VAR1 FUN1(float64 a VAR2)
{
    flag VAR3;
    int16 VAR4, VAR5;
    bits64 VAR6;
    int64 VAR7;
    VAR6 = FUN2(VAR8);
    VAR4 = FUN3(VAR8);
    VAR3 = FUN4(VAR8);
    if (VAR4)
        VAR6 |= FUN5(0x0010000000000000);
    VAR5 = VAR4 - 0x433;
    if (0 <= VAR5)
    {
        if (0x43E <= VAR4)
        {
            if (FUN6(VAR8) != FUN5(0xC3E0000000000000))
            {
                FUN7(float_flag_invalid VAR9);
                if (!VAR3 || ((VAR4 == 0x7FF) && (VAR6 != FUN5(0x0010000000000000))))
                {
                    return FUN5(0x7FFFFFFFFFFFFFFF);
                }
            }
            return (VAR10)FUN5(0x8000000000000000);
        }
        VAR7 = VAR6 << VAR5;
    }
    else
    {
        if (VAR4 < 0x3FE)
        {
            if (VAR4 | VAR6)
                FUN8(VAR11) |= VAR12;
            return 0;
        }
        VAR7 = VAR6 >> (-VAR5);
        if ((VAR13)(VAR6 << (VAR5 & 63)))
        {
            FUN8(VAR11) |= VAR12;
        }
    }
    if (VAR3)
        VAR7 = -VAR7;
    return VAR7;
}