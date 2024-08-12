static int FUN1(VAR1 *VAR2, int64_t VAR3, size_t VAR4)
{
    int64_t VAR5;
    if (VAR4 > VAR6)
    {
        return -VAR7;
    }
    if (!FUN2(VAR2))
    {
        return -VAR8;
    }
    if (VAR3 < 0)
    {
        return -VAR7;
    }
    if (!VAR2->VAR9)
    {
        VAR5 = FUN3(VAR2);
        if (VAR5 < 0)
        {
            return VAR5;
        }
        if (VAR3 > VAR5 || VAR5 - VAR3 < VAR4)
        {
            return -VAR7;
        }
    }
    return 0;
}