static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10 = FUN2(VAR3, VAR7, sizeof(*VAR9));
    int VAR11, VAR12 = 0;
    if (!FUN3(VAR13, VAR9, VAR10, 0))
        return;
    VAR12 |= FUN4(&VAR9->VAR14, VAR7, VAR5->VAR15[0]);
    for (VAR11 = 1; VAR11 < VAR16; VAR11++)
    {
        if (FUN5(VAR5->VAR15[VAR11], &VAR9->VAR17[VAR11 - 1]))
            goto VAR18;
    }
    if (VAR12 == 0)
        VAR12 = FUN6(VAR7, VAR3, &VAR9->VAR19, VAR10, VAR1, VAR10 + FUN7(struct VAR8, VAR19));
VAR18:
    FUN8(VAR9, VAR10, 1);
}