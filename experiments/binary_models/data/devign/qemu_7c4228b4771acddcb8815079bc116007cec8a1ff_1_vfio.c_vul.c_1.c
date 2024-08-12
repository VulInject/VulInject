static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    if (!VAR5->VAR7)
    {
        return;
    }
    FUN2(VAR2, VAR3);
    FUN3(&VAR5->VAR8, &VAR5->VAR9);
    FUN4(VAR5->VAR10, FUN5(&VAR5->VAR9));
    if (VAR2->VAR11 && VAR2->VAR11->VAR12 == VAR3)
    {
        FUN3(&VAR5->VAR8, &VAR2->VAR11->VAR9);
        FUN4(VAR2->VAR11->VAR10, FUN5(&VAR2->VAR11->VAR9));
    }
    FUN6(&VAR5->VAR8);