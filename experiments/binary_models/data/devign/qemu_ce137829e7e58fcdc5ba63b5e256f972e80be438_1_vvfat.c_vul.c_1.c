static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    char *VAR6;
    char *VAR7;
    char *VAR8;
    int VAR9;
    if (!VAR2 || VAR3 < 0 || VAR3 >= VAR2->VAR10 || VAR4 < 0 || VAR4 >= VAR2->VAR10)
        return -1;
    if (VAR3 == VAR4)
        return 0;
    VAR9 = VAR2->VAR11;
    VAR7 = VAR2->VAR12 + VAR4 * VAR9;
    VAR8 = VAR2->VAR12 + VAR3 * VAR9;
    VAR6 = FUN2(VAR9 * VAR5);
    memcpy(VAR6, VAR7, VAR9 * VAR5);
    if (VAR3 < VAR4)
        memmove(VAR8 + VAR9 * VAR5, VAR8, VAR7 - VAR8);
    else
        memmove(VAR7, VAR7 + VAR9 * VAR5, VAR8 - VAR7);
    memcpy(VAR8, VAR6, VAR9 * VAR5);
    free(VAR6);
    return 0;
}