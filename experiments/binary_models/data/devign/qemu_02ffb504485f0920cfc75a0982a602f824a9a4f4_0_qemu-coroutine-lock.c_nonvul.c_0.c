static bool FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = FUN2();
    VAR4 *VAR6;
    if (FUN3(&VAR2->VAR7))
    {
        return false;
    }
    while ((VAR6 = FUN4(&VAR2->VAR7)) != NULL)
    {
        FUN5(&VAR2->VAR7, VAR6, VAR8);
        FUN6(&VAR5->VAR9, VAR6, VAR8);
        FUN7(VAR6);
        if (VAR3)
        {
            break;
        }
    }
    return true;
}