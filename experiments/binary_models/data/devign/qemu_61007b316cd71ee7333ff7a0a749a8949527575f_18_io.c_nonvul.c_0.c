static bool FUN1(VAR1 *VAR2)
{
    if (!FUN2(&VAR2->VAR3))
    {
        return true;
    }
    if (!FUN3(&VAR2->VAR4[0]))
    {
        return true;
    }
    if (!FUN3(&VAR2->VAR4[1]))
    {
        return true;
    }
    if (VAR2->VAR5 && FUN1(VAR2->VAR5))
    {
        return true;
    }
    if (VAR2->VAR6 && FUN1(VAR2->VAR6))
    {
        return true;
    }
    return false;
}