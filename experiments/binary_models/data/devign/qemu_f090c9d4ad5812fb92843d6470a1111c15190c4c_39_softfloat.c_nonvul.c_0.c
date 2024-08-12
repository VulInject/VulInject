VAR1 FUN1(float32 a VAR2)
{
    flag VAR3;
    int16 VAR4;
    bits32 VAR5, VAR6;
    int8 VAR7;
    bits32 VAR8;
    VAR4 = FUN2(VAR9);
    if (0x96 <= VAR4)
    {
        if ((VAR4 == 0xFF) && FUN3(VAR9))
        {
            return FUN4(VAR9, a VAR10);
        }
        return VAR9;
    }
    if (VAR4 <= 0x7E)
    {
        if ((VAR11)(FUN5(VAR9) << 1) == 0)
            return VAR9;
        FUN6(VAR12) |= VAR13;
        VAR3 = FUN7(VAR9);
        switch (FUN6(VAR14))
        {
        case VAR15:
            if ((VAR4 == 0x7E) && FUN3(VAR9))
            {
                return FUN8(VAR3, 0x7F, 0);
            }
            break;
        case VAR16:
            return FUN9(VAR3 ? 0xBF800000 : 0);
        case VAR17:
            return FUN9(VAR3 ? 0x80000000 : 0x3F800000);
        }
        return FUN8(VAR3, 0, 0);
    }
    VAR5 = 1;
    VAR5 <<= 0x96 - VAR4;
    VAR6 = VAR5 - 1;
    VAR8 = FUN5(VAR9);
    VAR7 = FUN6(VAR14);
    if (VAR7 == VAR15)
    {
        VAR8 += VAR5 >> 1;
        if ((VAR8 & VAR6) == 0)
            VAR8 &= ~VAR5;
    }
    else if (VAR7 != VAR18)
    {
        if (FUN7(FUN9(VAR8)) ^ (VAR7 == VAR17))
        {
            VAR8 += VAR6;
        }
    }
    VAR8 &= ~VAR6;
    if (VAR8 != FUN5(VAR9))
        FUN6(VAR12) |= VAR13;
    return FUN9(VAR8);
}