static VAR1 *FUN1(target_phys_addr_t VAR2, int VAR3)
{
    void **VAR4, **VAR5;
    VAR1 *VAR6;
    VAR5 = (void **)VAR7;
    VAR4 = VAR5 + ((VAR2 >> (VAR8 + VAR9)) & (VAR10 - 1));
    VAR5 = *VAR4;
    if (!VAR5)
    {
        if (!VAR3)
            return NULL;
        VAR5 = FUN2(sizeof(void *) * VAR10);
        memset(VAR5, 0, sizeof(void *) * VAR10);
        *VAR4 = VAR5;
    }
    VAR4 = VAR5 + ((VAR2 >> VAR9) & (VAR10 - 1));
    VAR6 = *VAR4;
    if (!VAR6)
    {
        int VAR11;
        if (!VAR3)
            return NULL;
        VAR6 = FUN2(sizeof(VAR1) * VAR12);
        *VAR4 = VAR6;
        for (VAR11 = 0; VAR11 < VAR12; VAR11++)
            VAR6[VAR11].VAR13 = VAR14;
    }
    return ((VAR1 *)VAR6) + (VAR2 & (VAR12 - 1));
}