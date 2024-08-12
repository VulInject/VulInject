static inline int FUN1(void *VAR1, unsigned int *VAR2, size_t VAR3, int VAR4)
{
    void *VAR5;
    if (VAR3 < *VAR2)
        return 0;
    VAR3 = FUN2(17 * VAR3 / 16 + 32, VAR3);
    FUN3(VAR1);
    VAR5 = VAR4 ? FUN4(VAR3) : FUN5(VAR3);
    memcpy(VAR1, &VAR5, sizeof(VAR5));
    if (!VAR5)
        VAR3 = 0;
    *VAR2 = VAR3;
    return 1;
}