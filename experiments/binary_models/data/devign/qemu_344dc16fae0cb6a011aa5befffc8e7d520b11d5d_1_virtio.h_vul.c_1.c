void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, bool VAR6)
{
    if (VAR5 && VAR6)
    {
        FUN2(VAR4, &VAR2->VAR7, true, VAR8);
    }
    else
    {
        FUN2(VAR4, &VAR2->VAR7, true, NULL);
    }
    if (!VAR5)
    {
        FUN3(&VAR2->VAR7);
    }
}