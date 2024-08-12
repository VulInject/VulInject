int FUN1(floatx80 VAR1, floatx80 VAR2, VAR3 *VAR4)
{
    if (FUN2(VAR1) || FUN2(VAR2) || (FUN3(VAR1) == 0x7FFF && (VAR5)(FUN4(VAR1) << 1)) || (FUN3(VAR2) == 0x7FFF && (VAR5)(FUN4(VAR2) << 1)))
    {
        FUN5(VAR6, VAR4);
        return 0;
    }
    return (VAR1.VAR7 == VAR2.VAR7) && ((VAR1.VAR8 == VAR2.VAR8) || ((VAR1.VAR7 == 0) && ((VAR9)((VAR1.VAR8 | VAR2.VAR8) << 1) == 0)));
}