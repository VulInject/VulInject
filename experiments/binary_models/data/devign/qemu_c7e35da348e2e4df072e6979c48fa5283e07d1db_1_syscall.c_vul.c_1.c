static inline VAR1 FUN1(struct VAR2 *VAR3, abi_ulong VAR4)
{
    struct VAR5 *VAR6;
    if (!FUN2(VAR7, VAR6, VAR4, 1))
        return -VAR8;
    VAR3->VAR9 = FUN3(VAR6->VAR9);
    VAR3->VAR10 = FUN3(VAR6->VAR10);
    FUN4(VAR6, VAR4, 0);
    return 0;
}