static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (FUN2(VAR2, VAR4 + 0))
        return 0;
    else
    {
        int VAR6, VAR7, VAR8;
        VAR7 = 0;
        while (FUN2(VAR2, VAR4 + 1 + VAR7))
        {
            VAR7++;
        }
        assert(VAR7 <= 9);
        VAR8 = 1;
        for (VAR6 = VAR7 - 1; VAR6 >= 0; VAR6--)
        {
            VAR8 += VAR8 + FUN2(VAR2, VAR4 + 22 + VAR6);
        }
        if (VAR5 && FUN2(VAR2, VAR4 + 11 + VAR7))
            return -VAR8;
        else
            return VAR8;
    }
}