static inline VAR1 FUN1(int VAR2, abi_long VAR3, unsigned int VAR4, abi_long VAR5, int VAR6)
{
    struct VAR7 *VAR8;
    char *VAR9;
    struct VAR10 *VAR11;
    abi_long VAR12 = 0;
    if (!FUN2(VAR13, VAR8, VAR3, 0))
        return -VAR14;
    VAR11 = malloc(VAR4 + sizeof(long));
    VAR12 = FUN3(FUN4(VAR2, VAR11, VAR4, FUN5(VAR5), VAR6));
    if (VAR12 > 0)
    {
        abi_ulong VAR15 = VAR3 + sizeof(VAR16);
        VAR9 = FUN6(VAR13, VAR15, VAR12, 0);
        if (!VAR9)
        {
            VAR12 = -VAR14;
            goto VAR17;
        }
        memcpy(VAR8->VAR18, VAR11->VAR18, VAR12);
        FUN7(VAR9, VAR15, VAR12);
    }
    VAR8->VAR19 = FUN5(VAR11->VAR19);
    free(VAR11);
VAR17:
    if (VAR8)
        FUN8(VAR8, VAR3, 1);
    return VAR12;
}