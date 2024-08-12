int FUN1(VAR1 *VAR2, target_ulong VAR3, int VAR4, VAR5 *VAR6, int *VAR7)
{
    const bool VAR8 = VAR2->VAR9[0] & VAR10;
    *VAR7 = VAR11 | VAR12;
    if (FUN2(VAR3 & VAR13) && VAR8)
    {
        *VAR7 |= VAR14;
        if (FUN2(VAR3) && VAR4 == VAR15)
        {
            FUN3(VAR2, VAR16, VAR17, 0);
            return -VAR18;
        }
    }
    *VAR6 = FUN4(VAR2, VAR3 & VAR13);
    return 0;
}