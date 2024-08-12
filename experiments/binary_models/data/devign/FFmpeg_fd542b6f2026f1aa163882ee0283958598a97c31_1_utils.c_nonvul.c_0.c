int FUN1(const VAR1 *VAR2)
{
    if (VAR2->VAR3 & VAR4 || !VAR2->VAR5)
        return 0;
    FUN2(VAR6);
    VAR6 = 0;
    FUN3(&VAR7, -1);
    if (VAR8)
    {
        if ((*VAR8)(&VAR9, VAR10))
            return -1;
    }
    return 0;
}