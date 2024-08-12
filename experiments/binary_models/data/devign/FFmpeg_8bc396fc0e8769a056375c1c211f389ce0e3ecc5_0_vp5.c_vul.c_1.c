static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9, VAR10;
    FUN2(&VAR2->VAR8, VAR4, VAR5);
    VAR2->VAR11[VAR12]->VAR13 = !FUN3(VAR8);
    FUN3(VAR8);
    FUN4(VAR2, FUN5(VAR8, 6));
    if (VAR2->VAR11[VAR12]->VAR13)
    {
        FUN5(VAR8, 8);
        if (FUN5(VAR8, 5) > 5)
            FUN5(VAR8, 2);
        if (FUN3(VAR8))
        {
            FUN6(VAR2->VAR14, VAR15, "");
            VAR9 = FUN5(VAR8, 8);
            VAR10 = FUN5(VAR8, 8);
            FUN5(VAR8, 8);
            FUN5(VAR8, 8);
            FUN5(VAR8, 2);
            if (!VAR2->VAR16 || 16 * VAR10 != VAR2->VAR14->VAR17 || 16 * VAR9 != VAR2->VAR14->VAR18)
            {
                FUN7(VAR2->VAR14, 16 * VAR10, 16 * VAR9);
                return 2;
            }
            else if (!VAR2->VAR16)
                return 1;