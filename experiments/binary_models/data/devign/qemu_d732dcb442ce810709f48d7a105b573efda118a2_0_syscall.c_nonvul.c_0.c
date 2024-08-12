static VAR1 FUN1(struct VAR2 *VAR3, abi_ulong VAR4, int VAR5, int copy)
{
    struct VAR6 *VAR7;
    abi_ulong VAR8;
    int VAR9;
    VAR7 = FUN2(VAR10, VAR4, VAR5 * sizeof(struct VAR6), 1);
    if (!VAR7)
        return -VAR11;
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        if (VAR7[VAR9].VAR12)
        {
            VAR8 = FUN3(VAR7[VAR9].VAR12);
            FUN4(VAR3[VAR9].VAR12, VAR8, copy ? VAR3[VAR9].VAR13 : 0);
        }
    }
    FUN4(VAR7, VAR4, 0);
    return 0;
}