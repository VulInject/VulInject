FUN1(const struct VAR1 *VAR2, abi_long VAR3, abi_long VAR4, abi_long VAR5, abi_long VAR6, abi_long VAR7, abi_long VAR8)
{
    abi_ulong VAR9;
    char *VAR10;
    if (!(VAR10 = FUN2(VAR3)))
        return;
    FUN3(""%VAR10\"", VAR2->VAR2, VAR10);
    FUN4(VAR10, VAR3, 0);
    for (VAR9 = VAR4;; VAR9 += sizeof(VAR11))
    {
        VAR11 *VAR12, VAR13, VAR14;
        VAR12 = FUN5(VAR15, VAR9, sizeof(VAR11), 1);
        if (!VAR12)
            return;
        VAR13 = FUN6(*VAR12);
        FUN4(VAR12, VAR9, 0);
        if (!VAR13)
            break;
        if ((VAR10 = FUN2(VAR13)))
        {
            FUN3(""%VAR10\"", VAR10);
            FUN4(VAR10, VAR14, 0);
        }
    }
    FUN3("");
}