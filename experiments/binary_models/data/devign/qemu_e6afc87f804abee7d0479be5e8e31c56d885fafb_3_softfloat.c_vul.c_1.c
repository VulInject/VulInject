static VAR1 FUN1(float128 VAR2, float128 VAR3, flag zSign VAR4)
{
    int32 VAR5, VAR6, VAR7;
    uint64_t VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int32 VAR15;
    VAR9 = FUN2(VAR2);
    VAR8 = FUN3(VAR2);
    VAR5 = FUN4(VAR2);
    VAR11 = FUN2(VAR3);
    VAR10 = FUN3(VAR3);
    VAR6 = FUN4(VAR3);
    VAR15 = VAR5 - VAR6;
    if (0 < VAR15)
    {
        if (VAR5 == 0x7FFF)
        {
            if (VAR8 | VAR9)
                return FUN5(VAR2, b VAR16);
            return VAR2;
        }
        if (VAR6 == 0)
        {
            --VAR15;
        }
        else
        {
            VAR10 |= FUN6(0x0001000000000000);
        }
        FUN7(VAR10, VAR11, 0, VAR15, &VAR10, &VAR11, &VAR14);
        VAR7 = VAR5;
    }
    else if (VAR15 < 0)
    {
        if (VAR6 == 0x7FFF)
        {
            if (VAR10 | VAR11)
                return FUN5(VAR2, b VAR16);
            return FUN8(VAR17, 0x7FFF, 0, 0);
        }
        if (VAR5 == 0)
        {
            ++VAR15;
        }
        else
        {
            VAR8 |= FUN6(0x0001000000000000);
        }
        FUN7(VAR8, VAR9, 0, -VAR15, &VAR8, &VAR9, &VAR14);
        VAR7 = VAR6;
    }
    else
    {
        if (VAR5 == 0x7FFF)
        {
            if (VAR8 | VAR9 | VAR10 | VAR11)
            {
                return FUN5(VAR2, b VAR16);
            }
            return VAR2;
        }
        FUN9(VAR8, VAR9, VAR10, VAR11, &VAR12, &VAR13);
        if (VAR5 == 0)
        {
            if (FUN10(VAR18))
                return FUN8(VAR17, 0, 0, 0);
            return FUN8(VAR17, 0, VAR12, VAR13);
        }
        VAR14 = 0;
        VAR12 |= FUN6(0x0002000000000000);
        VAR7 = VAR5;
        goto VAR19;
    }
    VAR8 |= FUN6(0x0001000000000000);
    FUN9(VAR8, VAR9, VAR10, VAR11, &VAR12, &VAR13);
    --VAR7;
    if (VAR12 < FUN6(0x0002000000000000))
        goto VAR20;
    ++VAR7;
VAR19:
    FUN7(VAR12, VAR13, VAR14, 1, &VAR12, &VAR13, &VAR14);
VAR20:
    return FUN11(VAR17, VAR7, VAR12, VAR13, zSig2 VAR16);
}