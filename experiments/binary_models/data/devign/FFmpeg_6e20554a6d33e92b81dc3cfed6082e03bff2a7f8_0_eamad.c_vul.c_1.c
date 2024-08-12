static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6 = 0;
    int VAR7, VAR8;
    int VAR9;
    if (VAR3)
    {
        int VAR10 = FUN2(&VAR5->VAR11);
        if (VAR10 < 2)
        {
            VAR6 = VAR10 ? FUN3(&VAR5->VAR11, 6) : 63;
            VAR7 = FUN4(&VAR5->VAR11);
            VAR8 = FUN4(&VAR5->VAR11);
        }
        else
        {
            VAR6 = 0;
        }
    }
    for (VAR9 = 0; VAR9 < 6; VAR9++)
    {
        if (VAR6 & (1 << VAR9))
        {
            int VAR12 = 2 * FUN4(&VAR5->VAR11);
            FUN5(VAR2, VAR5->VAR13, VAR5->VAR14, VAR9, VAR7, VAR8, VAR12);
        }
        else
        {
            VAR5->VAR15.FUN6(VAR2->VAR16);
            FUN7(VAR2, VAR2->VAR16);
            FUN8(VAR2, VAR2->VAR16, VAR5->VAR13, VAR5->VAR14, VAR9);
        }
    }
}