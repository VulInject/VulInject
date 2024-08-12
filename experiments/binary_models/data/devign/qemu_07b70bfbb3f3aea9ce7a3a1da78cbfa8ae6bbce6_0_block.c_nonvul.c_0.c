int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    if (!VAR4 || !FUN2(VAR2) || FUN3(VAR2))
    {
        return 0;
    }
    if (!VAR4->VAR5)
    {
        if (VAR2->VAR6 != NULL)
        {
            return FUN1(VAR2->VAR6);
        }
        return 0;
    }
    return 1;
}