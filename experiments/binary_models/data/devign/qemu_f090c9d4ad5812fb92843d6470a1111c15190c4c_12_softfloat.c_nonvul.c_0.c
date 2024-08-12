int FUN1(float64 VAR1, float64 b VAR2)
{
    bits64 VAR3, VAR4;
    if (((FUN2(VAR1) == 0x7FF) && FUN3(VAR1)) || ((FUN2(VAR5) == 0x7FF) && FUN3(VAR5)))
    {
        FUN4(float_flag_invalid VAR6);
        return 0;
    }
    VAR3 = FUN5(VAR1);
    VAR4 = FUN5(VAR1);
    return (VAR3 == VAR4) || ((VAR7)((VAR3 | VAR4) << 1) == 0);
}