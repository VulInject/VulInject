static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(&VAR2->VAR8);
    VAR9 *VAR10 = FUN3(VAR7, VAR3);
    VAR11 *VAR12 = FUN4(VAR10);
    int VAR13 = 0;
    if (VAR4)
    {
        VAR13 = FUN5(VAR12, 1);
        if (VAR13 < 0)
        {
            FUN6("", VAR14, VAR13);
            return VAR13;
        }
        FUN7(VAR10, true, VAR5);
        FUN8(&VAR2->VAR15, VAR16, 2, true, VAR3, VAR12);
    }
    else
    {
        FUN9(&VAR2->VAR15, VAR16, 2, true, VAR3, VAR12);
        FUN7(VAR10, false, false);
        FUN10(VAR12);
    }
    return VAR13;
}