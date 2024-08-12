static int FUN1(const void *VAR1, const void *VAR2)
{
    const VAR3 *VAR4 = VAR1, *VAR5 = VAR2;
    if (VAR4->VAR6 > VAR5->VAR6)
    {
        return 1;
    }
    else if (VAR4->VAR6 < VAR5->VAR6)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}