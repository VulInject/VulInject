void FUN1(VAR1 *VAR2, bool VAR3, bool VAR4)
{
    VAR5 *VAR6 = FUN2();
    if (VAR3 && VAR4)
    {
        if (VAR2->VAR7)
        {
            FUN3(VAR6, &VAR2->VAR8, true, VAR9);
        }
        else
        {
            FUN4(&VAR2->VAR8, true, VAR9);
        }
    }
    else
    {
        if (VAR2->VAR7)
        {
            FUN3(VAR6, &VAR2->VAR8, true, NULL);
        }
        else
        {
            FUN4(&VAR2->VAR8, true, NULL);
        }
    }
    if (!VAR3)
    {
        FUN5(&VAR2->VAR8);
    }
}