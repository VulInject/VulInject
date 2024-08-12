VAR1 *FUN1(VAR2 *VAR3, int *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR1 *VAR7 = NULL;
    *VAR4 = 0;
    if (!VAR3)
        return NULL;
    while ((VAR6 = FUN2(VAR3, "", VAR6, VAR8)))
    {
        const int VAR9 = strlen(VAR6->VAR10);
        const int VAR11 = strlen(VAR6->VAR12);
        const size_t VAR13 = *VAR4 + VAR9 + 1 + VAR11 + 1;
        VAR1 *const VAR14 = FUN3(VAR7, VAR13);
        if (!VAR14)
            goto VAR15;
        VAR7 = VAR14;
        memcpy(VAR7 + *VAR4, VAR6->VAR10, VAR9 + 1);
        memcpy(VAR7 + *VAR4 + VAR9 + 1, VAR6->VAR12, VAR11 + 1);
        *VAR4 = VAR13;
    }
    return VAR7;
VAR15:
    FUN4(&VAR7);
    *VAR4 = 0;
    return NULL;
}