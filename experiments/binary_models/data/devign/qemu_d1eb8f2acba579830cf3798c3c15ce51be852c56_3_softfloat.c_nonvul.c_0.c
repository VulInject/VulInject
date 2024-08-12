int FUN1(floatx80 VAR1, floatx80 VAR2, VAR3 *VAR4)
{
    flag VAR5, VAR6;
    if (FUN2(VAR1) || FUN2(VAR2) || (FUN3(VAR1) == 0x7FFF && (VAR7)(FUN4(VAR1) << 1)) || (FUN3(VAR2) == 0x7FFF && (VAR7)(FUN4(VAR2) << 1)))
    {
        FUN5(VAR8, VAR4);
        return 0;
    }
    VAR5 = FUN6(VAR1);
    VAR6 = FUN6(VAR2);
    if (VAR5 != VAR6)
    {
        return VAR5 || ((((VAR9)((VAR1.VAR10 | VAR2.VAR10) << 1)) | VAR1.VAR11 | VAR2.VAR11) == 0);
    }
    return VAR5 ? FUN7(VAR2.VAR10, VAR2.VAR11, VAR1.VAR10, VAR1.VAR11) : FUN7(VAR1.VAR10, VAR1.VAR11, VAR2.VAR10, VAR2.VAR11);
}