static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(&VAR7->VAR10);
    VAR11 *VAR12 = FUN4(VAR9);
    VAR13 *VAR14 = FUN5(VAR9, VAR3);
    VAR15 *VAR16 = FUN6(VAR14);
    if (VAR4)
    {
        int VAR17 = FUN7(VAR16, 0);
        if (VAR17 < 0)
        {
            return VAR17;
        }
        FUN8(VAR14, true, VAR5);
    }
    else
    {
        FUN8(VAR14, false, VAR5);
        FUN9(VAR16);
    }
    if (VAR12->VAR18 && VAR9->VAR19)
    {
        VAR12->FUN10(VAR9, VAR3, !VAR4);
    }
    return 0;
}