int FUN1(VAR1 *VAR2, VAR1 *VAR3, int64_t VAR4, int VAR5, int *VAR6)
{
    VAR1 *VAR7;
    int VAR8, VAR9 = VAR5;
    VAR7 = VAR2;
    while (VAR7 && VAR7 != VAR3)
    {
        int VAR10;
        VAR8 = FUN2(VAR7, VAR4, VAR5, &VAR10);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        else if (VAR8)
        {
            *VAR6 = VAR10;
            return 1;
        }
        if (VAR9 > VAR10 && (VAR7 == VAR2 || VAR4 + VAR10 < VAR7->VAR11))
        {
            VAR9 = VAR10;
        }
        VAR7 = VAR7->VAR12;
    }
    *VAR6 = VAR9;
    return 0;
}