int FUN1(float64 VAR1, float64 b VAR2)
{
    flag VAR3, VAR4;
    bits64 VAR5, VAR6;
    if (((FUN2(VAR1) == 0x7FF) && FUN3(VAR1)) || ((FUN2(VAR7) == 0x7FF) && FUN3(VAR7)))
    {
        if (FUN4(VAR1) || FUN4(VAR7))
        {
            FUN5(float_flag_invalid VAR8);
        }
        return 0;
    }
    VAR3 = FUN6(VAR1);
    VAR4 = FUN6(VAR7);
    VAR5 = FUN7(VAR1);
    VAR6 = FUN7(VAR1);
    if (VAR3 != VAR4)
        return VAR3 || ((VAR9)((VAR5 | VAR6) << 1) == 0);
    return (VAR5 == VAR6) || (VAR3 ^ (VAR5 < VAR6));
}