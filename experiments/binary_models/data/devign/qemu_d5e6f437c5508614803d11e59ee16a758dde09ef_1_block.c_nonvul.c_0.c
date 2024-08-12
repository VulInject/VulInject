VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const VAR5 *VAR6, uint64_t VAR7, uint64_t VAR8, void *VAR9, VAR10 **VAR11)
{
    VAR1 *VAR12;
    int VAR13;
    VAR13 = FUN2(VAR3, VAR7, VAR8, NULL, VAR11);
    if (VAR13 < 0)
    {
        return NULL;
    }
    VAR12 = FUN3(VAR1, 1);
    *VAR12 = (VAR1){
        .VAR14 = NULL,
        .VAR15 = FUN4(VAR4),
        .VAR16 = VAR6,
        .VAR7 = VAR7,
        .VAR8 = VAR8,
        .VAR9 = VAR9,
    };
    FUN5(VAR12, VAR3);
    return VAR12;
}