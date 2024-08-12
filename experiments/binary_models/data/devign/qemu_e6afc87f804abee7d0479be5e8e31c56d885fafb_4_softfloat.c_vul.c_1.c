static VAR1 FUN1(float64 VAR2, float64 VAR3, flag zSign VAR4)
{
    int16 VAR5, VAR6, VAR7;
    uint64_t VAR8, VAR9, VAR10;
    int16 VAR11;
    VAR8 = FUN2(VAR2);
    VAR5 = FUN3(VAR2);
    VAR9 = FUN2(VAR3);
    VAR6 = FUN3(VAR3);
    VAR11 = VAR5 - VAR6;
    VAR8 <<= 9;
    VAR9 <<= 9;
    if (0 < VAR11)
    {
        if (VAR5 == 0x7FF)
        {
            if (VAR8)
                return FUN4(VAR2, b VAR12);
            return VAR2;
        }
        if (VAR6 == 0)
        {
            --VAR11;
        }
        else
        {
            VAR9 |= FUN5(0x2000000000000000);
        }
        FUN6(VAR9, VAR11, &VAR9);
        VAR7 = VAR5;
    }
    else if (VAR11 < 0)
    {
        if (VAR6 == 0x7FF)
        {
            if (VAR9)
                return FUN4(VAR2, b VAR12);
            return FUN7(VAR13, 0x7FF, 0);
        }
        if (VAR5 == 0)
        {
            ++VAR11;
        }
        else
        {
            VAR8 |= FUN5(0x2000000000000000);
        }
        FUN6(VAR8, -VAR11, &VAR8);
        VAR7 = VAR6;
    }
    else
    {
        if (VAR5 == 0x7FF)
        {
            if (VAR8 | VAR9)
                return FUN4(VAR2, b VAR12);
            return VAR2;
        }
        if (VAR5 == 0)
        {
            if (FUN8(VAR14))
                return FUN7(VAR13, 0, 0);
            return FUN7(VAR13, 0, (VAR8 + VAR9) >> 9);
        }
        VAR10 = FUN5(0x4000000000000000) + VAR8 + VAR9;
        VAR7 = VAR5;
        goto VAR15;
    }
    VAR8 |= FUN5(0x2000000000000000);
    VAR10 = (VAR8 + VAR9) << 1;
    --VAR7;
    if ((VAR16)VAR10 < 0)
    {
        VAR10 = VAR8 + VAR9;
        ++VAR7;
    }
VAR15:
    return FUN9(VAR13, VAR7, zSig VAR12);
}