bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (!FUN2(&VAR2->VAR5))
    {
        return true;
    }
    FUN3(VAR4, &VAR2->VAR6, VAR7)
    {
        if (FUN1(VAR4->VAR2))
        {
            return true;
        }
    }
    return false;
}