static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    while (!FUN2(&VAR5->VAR7))
    {
        VAR8 *VAR9 = FUN3(&VAR5->VAR7);
        FUN4(&VAR5->VAR10, &VAR9->VAR10);
        FUN5(VAR9, VAR11);
        FUN6(VAR9);
    }