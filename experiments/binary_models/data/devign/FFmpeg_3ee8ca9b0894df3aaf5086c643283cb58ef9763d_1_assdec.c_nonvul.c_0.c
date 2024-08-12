static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const char *VAR7 = VAR6->VAR3;
    int VAR8, VAR9 = VAR6->VAR9;
    while (VAR9 > 0)
    {
        VAR8 = FUN2(VAR3, VAR7, 0, 0, 1);
        if (VAR8 < 0)
            return VAR8;
        VAR7 += VAR8;
        VAR9 -= VAR8;
    }
    *VAR4 = VAR6->VAR9 > 0;
    return VAR6->VAR9;
}