static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    if (VAR2->VAR7 & VAR8)
    {
        FUN3(VAR4->VAR9);
        FUN4(VAR2, VAR8);
    }
    return ((VAR2->VAR7 & VAR10) && (VAR6->VAR11 & VAR12)) || (VAR2->VAR7 & (VAR13 | VAR14 | VAR15 | VAR16));
}