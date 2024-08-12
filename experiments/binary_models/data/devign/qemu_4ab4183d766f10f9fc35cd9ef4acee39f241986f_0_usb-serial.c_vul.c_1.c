static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7 = VAR8 - VAR6->VAR9;
    if (VAR7 > VAR4)
        VAR7 = VAR4;
    memcpy(VAR6->VAR10 + VAR6->VAR9 + VAR6->VAR11, VAR3, VAR7);
    if (VAR4 > VAR7)
        memcpy(VAR6->VAR10, VAR3 + VAR7, VAR4 - VAR7);
    VAR6->VAR11 += VAR4;
}