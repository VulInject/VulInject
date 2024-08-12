static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(&VAR2->VAR8);
    VAR9 *VAR10 = FUN3(VAR7, VAR3);
    VAR11 *VAR12 = FUN4(VAR10);
    VAR13 *VAR14 = FUN5(VAR7);
    if (VAR4)
    {
        int VAR15 = FUN6(VAR12, 0);
        if (VAR15 < 0)
        {
            return VAR15;
        }
        FUN7(VAR10, true, VAR5);
        if (VAR5)
        {
            VAR15 = FUN8(VAR2, VAR3);
            if (VAR15)
            {
                FUN7(VAR10, false, VAR5);
                return VAR15;
            }
        }
        if (VAR14->VAR16 && VAR7->VAR17)
        {
            VAR14->FUN9(VAR7, VAR3, false);
        }
        if (VAR14->VAR18 && VAR14->FUN10(VAR7, VAR3))
        {
            FUN11(VAR12);
        }
    }
    else
    {
        if (VAR14->VAR16 && VAR7->VAR17)
        {
            VAR14->FUN9(VAR7, VAR3, true);
        }
        if (VAR5)
        {
            FUN12(VAR2, VAR3);
        }
        FUN7(VAR10, false, VAR5);
        FUN13(VAR12);
    }
    return 0;
}