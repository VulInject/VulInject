static void FUN1(VAR1 *VAR2)
{
    void *VAR3;
    VAR4 *VAR5 = (VAR4 *)VAR2;
    FUN2(&VAR5->VAR6, VAR7);
    VAR5->VAR8 = 1;
    FUN3(&VAR5->VAR6, VAR7);
    FUN4(&VAR5->VAR6, &VAR3, VAR7);
    if (VAR5->VAR9)
    {
        FUN5(VAR5->VAR9);
        VAR5->VAR9 = NULL;
    }
    FUN6(&VAR5->VAR6, VAR7);
    FUN7(VAR5->VAR10);
    VAR5->VAR10 = NULL;
}