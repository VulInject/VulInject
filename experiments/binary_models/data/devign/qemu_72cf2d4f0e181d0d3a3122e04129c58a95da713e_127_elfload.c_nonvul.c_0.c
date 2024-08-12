static int FUN1(struct VAR1 *VAR2, abi_ulong VAR3, abi_ulong VAR4, abi_ulong VAR5)
{
    struct VAR6 *VAR7;
    if ((VAR7 = FUN2(sizeof(*VAR7))) == NULL)
        return (-1);
    VAR7->VAR8 = VAR3;
    VAR7->VAR9 = VAR4;
    VAR7->VAR10 = VAR5;
    FUN3(&VAR2->VAR11, VAR7, VAR12);
    VAR2->VAR13++;
    return (0);
}