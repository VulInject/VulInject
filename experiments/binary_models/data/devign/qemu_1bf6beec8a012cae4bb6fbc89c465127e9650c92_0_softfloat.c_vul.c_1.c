VAR1 FUN1(float32 VAR2, flag ieee VAR3)
{
    flag VAR4;
    int_fast16_t VAR5;
    uint32_t VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    int8 VAR9;
    VAR2 = FUN2(a VAR10);
    VAR6 = FUN3(VAR2);
    VAR5 = FUN4(VAR2);
    VAR4 = FUN5(VAR2);
    if (VAR5 == 0xFF)
    {
        if (VAR6)
        {
            float16 VAR11 = FUN6(FUN7(a VAR10) VAR10);
            if (!VAR12)
            {
                return FUN8(VAR4, 0, 0);
            }
            return VAR11;
        }
        if (!VAR12)
        {
            FUN9(float_flag_invalid VAR10);
            return FUN8(VAR4, 0x1f, 0x3ff);
        }
        return FUN8(VAR4, 0x1f, 0);
    }
    if (VAR5 == 0 && VAR6 == 0)
    {
        return FUN8(VAR4, 0, 0);
    }
    VAR6 |= 0x00800000;
    VAR5 -= 0x7f;
    if (VAR5 < -14)
    {
        VAR7 = 0x00ffffff;
        if (VAR5 >= -24)
        {
            VAR7 >>= 25 + VAR5;
        }
    }
    else
    {
        VAR7 = 0x00001fff;
    }
    if (VAR6 & VAR7)
    {
        FUN9(float_flag_underflow VAR10);
        VAR9 = FUN10(VAR13);
        switch (VAR9)
        {
        case VAR14:
            VAR8 = (VAR7 + 1) >> 1;
            if ((VAR6 & VAR7) == VAR8)
            {
                VAR8 = VAR6 & (VAR8 << 1);
            }
            break;
        case VAR15:
            VAR8 = VAR4 ? 0 : VAR7;
            break;
        case VAR16:
            VAR8 = VAR4 ? VAR7 : 0;
            break;
        default:
            VAR8 = 0;
            break;
        }
        VAR6 += VAR8;
        if (VAR6 >= 0x01000000)
        {
            VAR6 >>= 1;
            VAR5++;
        }
    }
    else if (VAR5 < -14 && FUN10(VAR17) == VAR18)
    {
        FUN9(float_flag_underflow VAR10);
    }
    if (VAR12)
    {
        if (VAR5 > 15)
        {
            FUN9(VAR19 | float_flag_inexact VAR10);
            return FUN8(VAR4, 0x1f, 0);
        }
    }
    else
    {
        if (VAR5 > 16)
        {
            FUN9(VAR20 | float_flag_inexact VAR10);
            return FUN8(VAR4, 0x1f, 0x3ff);
        }
    }
    if (VAR5 < -24)
    {
        return FUN8(VAR4, 0, 0);
    }
    if (VAR5 < -14)
    {
        VAR6 >>= -14 - VAR5;
        VAR5 = -14;
    }
    return FUN8(VAR4, VAR5 + 14, VAR6 >> 13);
}