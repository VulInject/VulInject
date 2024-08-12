static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12;
    VAR12 = FUN2(VAR3, VAR4, VAR6, VAR7, VAR9, VAR10, 0);
    if (!VAR12)
        return NULL;
    FUN3(VAR12, 0);
    return &VAR12->VAR13;
}