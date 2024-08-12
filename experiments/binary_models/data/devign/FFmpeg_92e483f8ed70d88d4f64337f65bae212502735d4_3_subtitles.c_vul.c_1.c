static int FUN1(const void *VAR1, const void *VAR2)
{
    const VAR3 *VAR4 = VAR1;
    const VAR3 *VAR5 = VAR2;
    if (VAR4->VAR6 == VAR5->VAR6)
    {
        if (VAR4->VAR7 == VAR5->VAR7)
            return 0;
        return VAR4->VAR7 > VAR5->VAR7 ? 1 : -1;
    }
    return VAR4->VAR6 > VAR5->VAR6 ? 1 : -1;
}