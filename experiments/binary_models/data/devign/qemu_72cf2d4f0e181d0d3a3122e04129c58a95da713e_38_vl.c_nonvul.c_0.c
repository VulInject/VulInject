void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    FUN2(VAR5, &VAR6, VAR7)
    {
        if (VAR5->VAR2 == VAR2 && VAR5->VAR3 == VAR3)
        {
            FUN3(&VAR6, VAR5, VAR7);
            FUN4(VAR5);
            return;
        }
    }
}