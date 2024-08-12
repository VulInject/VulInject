static int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
        return 1;
    if (VAR2->VAR4 || !VAR5)
        return 0;
    if (!VAR2->VAR6)
        return 1;
    if (FUN2(VAR2))
        return 1;
    return 0;
}