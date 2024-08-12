static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR9;
    abi_ulong VAR10 = FUN2(VAR3, VAR7, sizeof(*VAR9));
    int VAR11;
    if (!FUN3(VAR12, VAR9, VAR10, 0))
        return;
    FUN4(&VAR9->VAR13, VAR7, VAR5->VAR14[0]);
    for (VAR11 = 1; VAR11 < VAR15; VAR11++)
    {
        if (FUN5(VAR5->VAR14[VAR11], &VAR9->VAR16[VAR11 - 1]))
            goto VAR17;
    }
    FUN6(VAR7, VAR3, &VAR9->VAR18, VAR10, VAR1, VAR10 + FUN7(struct VAR8, VAR18));
VAR17:
    FUN8(VAR9, VAR10, 1);
}