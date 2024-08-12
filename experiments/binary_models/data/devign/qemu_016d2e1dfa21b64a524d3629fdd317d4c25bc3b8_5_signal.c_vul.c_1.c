long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    sigset_t VAR6;
    target_ulong VAR7;
    fprintf(VAR8, "");
    VAR5 = VAR2->VAR9[15];
    if (!FUN2(VAR10, VAR4, VAR5, 1))
        goto VAR11;
    FUN3(&VAR6, &VAR4->VAR12.VAR13);
    FUN4(VAR14, &VAR6, NULL);
    if (FUN5(VAR2, &VAR4->VAR12.VAR15, &VAR7))
        goto VAR11;
    if (FUN6(VAR5 + FUN7(struct VAR3, VAR12.VAR16), 0, FUN8(VAR2)) == -VAR17)
        goto VAR11;
    FUN9(VAR4, VAR5, 0);
    return VAR7;
VAR11:
    FUN9(VAR4, VAR5, 0);
    FUN10(VAR18);
    return 0;
}