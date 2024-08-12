static inline VAR1 FUN1(int VAR2, abi_long VAR3, ssize_t VAR4, int VAR5)
{
    struct VAR6 *VAR7;
    struct VAR8 *VAR9;
    abi_long VAR10 = 0;
    if (VAR4 < 0)
    {
        return -VAR11;
    }
    if (!FUN2(VAR12, VAR7, VAR3, 0))
        return -VAR13;
    VAR9 = malloc(VAR4 + sizeof(long));
    VAR9->VAR14 = (VAR1)FUN3(VAR7->VAR14);
    memcpy(VAR9->VAR15, VAR7->VAR15, VAR4);
    VAR10 = FUN4(FUN5(VAR2, VAR9, VAR4, VAR5));
    free(VAR9);
    FUN6(VAR7, VAR3, 0);
    return VAR10;
}