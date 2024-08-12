int FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        return 0;
    }
    if (!VAR2->VAR4)
    {
        return 0;
    }
    return 1 + FUN1(VAR2->VAR4);
}