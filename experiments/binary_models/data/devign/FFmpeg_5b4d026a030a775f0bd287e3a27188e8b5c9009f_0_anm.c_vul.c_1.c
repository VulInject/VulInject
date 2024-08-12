static inline int FUN1(VAR1 **VAR2, const VAR1 *VAR3, const VAR1 **VAR4, const VAR1 *VAR5, int VAR6, int VAR7, int *VAR8, int VAR9, int VAR10)
{
    int VAR11 = VAR9 - *VAR8;
    while (VAR7 > 0)
    {
        int VAR12 = FUN2(VAR7, VAR11);
        if (VAR4)
        {
            VAR12 = FUN2(VAR12, VAR5 - *VAR4);
            if (*VAR4 >= VAR5)
                goto VAR13;
            memcpy(*VAR2, *VAR4, VAR12);
            *VAR4 += VAR12;
        }
        else if (VAR6 >= 0)
            memset(*VAR2, VAR6, VAR12);
        *VAR2 += VAR12;
        VAR11 -= VAR12;
        VAR7 -= VAR12;
        if (VAR11 <= 0)
        {
            *VAR2 += VAR10 - VAR9;
            VAR11 = VAR9;
        }
        if (VAR10 > 0)
        {
            if (*VAR2 >= VAR3)
                goto VAR13;
        }
        else
        {
            if (*VAR2 <= VAR3)
                goto VAR13;
        }
    }
    *VAR8 = VAR9 - VAR11;
    return 0;
VAR13:
    *VAR8 = VAR9 - VAR11;
    return 1;
}