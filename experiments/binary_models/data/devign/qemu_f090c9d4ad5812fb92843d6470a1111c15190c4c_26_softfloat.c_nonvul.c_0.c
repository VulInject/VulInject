VAR1 FUN1(float32 a VAR2)
{
    flag VAR3;
    int16 VAR4, VAR5;
    bits32 VAR6;
    int32 VAR7;
    VAR6 = FUN2(VAR8);
    VAR4 = FUN3(VAR8);
    VAR3 = FUN4(VAR8);
    VAR5 = VAR4 - 0x9E;
    if (0 <= VAR5)
    {
        if (FUN5(VAR8) != 0xCF000000)
        {
            FUN6(float_flag_invalid VAR9);
            if (!VAR3 || ((VAR4 == 0xFF) && VAR6))
                return 0x7FFFFFFF;
        }
        return (VAR10)0x80000000;
    }
    else if (VAR4 <= 0x7E)
    {
        if (VAR4 | VAR6)
            FUN7(VAR11) |= VAR12;
        return 0;
    }
    VAR6 = (VAR6 | 0x00800000) << 8;
    VAR7 = VAR6 >> (-VAR5);
    if ((VAR13)(VAR6 << (VAR5 & 31)))
    {
        FUN7(VAR11) |= VAR12;
    }
    if (VAR3)
        VAR7 = -VAR7;
    return VAR7;
}