long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    sigset_t VAR6;
    int VAR7;
    VAR3 = VAR2->VAR8[VAR9] - 4;
    if (!FUN2(VAR10, VAR5, VAR3, 1))
        goto VAR11;
    FUN3(&VAR6, &VAR5->VAR12.VAR13);
    FUN4(VAR14, &VAR6, NULL);
    if (FUN5(VAR2, &VAR5->VAR12.VAR15, &VAR7))
        goto VAR11;
    if (FUN6(VAR3 + FUN7(struct VAR4, VAR12.VAR16), 0, FUN8(VAR2)) == -VAR17)
        goto VAR11;
    FUN9(VAR5, VAR3, 0);
    return VAR7;
VAR11:
    FUN9(VAR5, VAR3, 0);
    FUN10(VAR18);
    return 0;
}