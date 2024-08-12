static inline VAR1 FUN1(abi_ulong VAR2, struct VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    if (!FUN2(VAR7, VAR6, VAR2, 0))
        return -VAR8;
    VAR6->VAR9 = FUN3(VAR4->VAR9);
    VAR6->VAR10 = FUN3(VAR4->VAR10);
    FUN4(VAR6, VAR2, 1);
    return 0;
}