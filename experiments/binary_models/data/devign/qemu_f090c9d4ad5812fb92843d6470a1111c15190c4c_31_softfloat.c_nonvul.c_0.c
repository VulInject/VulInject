VAR1 FUN1(float64 a VAR2)
{
    flag VAR3;
    int16 VAR4, VAR5;
    bits64 VAR6, VAR7, VAR8;
    bits64 VAR9, VAR10, VAR11, VAR12;
    VAR6 = FUN2(VAR13);
    VAR4 = FUN3(VAR13);
    VAR3 = FUN4(VAR13);
    if (VAR4 == 0x7FF)
    {
        if (VAR6)
            return FUN5(VAR13, a VAR14);
        if (!VAR3)
            return VAR13;
        FUN6(float_flag_invalid VAR14);
        return VAR15;
    }
    if (VAR3)
    {
        if ((VAR4 | VAR6) == 0)
            return VAR13;
        FUN6(float_flag_invalid VAR14);
        return VAR15;
    }
    if (VAR4 == 0)
    {
        if (VAR6 == 0)
            return VAR16;
        FUN7(VAR6, &VAR4, &VAR6);
    }
    VAR5 = ((VAR4 - 0x3FF) >> 1) + 0x3FE;
    VAR6 |= FUN8(0x0010000000000000);
    VAR7 = FUN9(VAR4, VAR6 >> 21);
    VAR6 <<= 9 - (VAR4 & 1);
    VAR7 = FUN10(VAR6, 0, VAR7 << 32) + (VAR7 << 30);
    if ((VAR7 & 0x1FF) <= 5)
    {
        VAR8 = VAR7 << 1;
        FUN11(VAR7, VAR7, &VAR11, &VAR12);
        FUN12(VAR6, 0, VAR11, VAR12, &VAR9, &VAR10);
        while ((VAR17)VAR9 < 0)
        {
            --VAR7;
            VAR8 -= 2;
            FUN13(VAR9, VAR10, VAR7 >> 63, VAR8 | 1, &VAR9, &VAR10);
        }
        VAR7 |= ((VAR9 | VAR10) != 0);
    }
    return FUN14(0, VAR5, zSig VAR14);
}