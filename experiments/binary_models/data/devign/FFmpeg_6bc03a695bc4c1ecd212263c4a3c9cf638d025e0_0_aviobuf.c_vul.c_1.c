static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7, VAR8;
    VAR7 = VAR6->VAR9 + VAR4;
    VAR8 = VAR6->VAR10;
    if (VAR7 < VAR6->VAR9 || VAR7 > VAR11 / 2)
        return -1;
    while (VAR7 > VAR8)
    {
        if (!VAR8)
            VAR8 = VAR7;
        else
            VAR8 += VAR8 / 2 + 1;
    }
    if (VAR8 > VAR6->VAR10)
    {
        VAR6->VAR12 = FUN2(VAR6->VAR12, VAR8);
        if (VAR6->VAR12 == NULL)
            return -1234;
        VAR6->VAR10 = VAR8;
    }
    memcpy(VAR6->VAR12 + VAR6->VAR9, VAR3, VAR4);
    VAR6->VAR9 = VAR7;
    if (VAR6->VAR9 > VAR6->VAR13)
        VAR6->VAR13 = VAR6->VAR9;
    return VAR4;
}