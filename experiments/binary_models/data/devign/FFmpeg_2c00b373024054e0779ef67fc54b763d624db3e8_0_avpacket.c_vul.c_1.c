int FUN1(const VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    const VAR1 *VAR6 = VAR2 + VAR3;
    int VAR7 = 0;
    if (!VAR5 || !VAR2 || !VAR3)
        return VAR7;
    if (VAR3 && VAR6[-1])
        return VAR8;
    while (VAR2 < VAR6)
    {
        const VAR1 *VAR9 = VAR2;
        const VAR1 *VAR10 = VAR2 + strlen(VAR9) + 1;
        if (VAR10 >= VAR6)
            return VAR8;
        VAR7 = FUN2(VAR5, VAR9, VAR10, 0);
        if (VAR7 < 0)
            break;
        VAR2 = VAR10 + strlen(VAR10) + 1;
    }
    return VAR7;
}