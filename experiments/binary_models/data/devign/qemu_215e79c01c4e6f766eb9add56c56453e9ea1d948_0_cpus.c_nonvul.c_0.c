static bool FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 || VAR2->VAR4)
    {
        return false;
    }
    if (VAR2->VAR5 || !FUN2())
    {
        return true;
    }
    if (!VAR2->VAR6 || FUN3(VAR2) || FUN4())
    {
        return false;
    }
    return true;
}