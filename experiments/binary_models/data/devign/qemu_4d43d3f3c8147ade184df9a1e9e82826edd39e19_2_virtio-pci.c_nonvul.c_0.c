static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = FUN3(&VAR5->VAR8);
    if (VAR3)
    {
        if (VAR7->VAR9 & (VAR10 | VAR11))
        {
            FUN4(&VAR5->VAR12, VAR13, VAR5->VAR12.VAR14[VAR13] | VAR15, 1);
        }
        FUN5(VAR5);
    }
    else
    {
        FUN6(VAR5);
    }
}