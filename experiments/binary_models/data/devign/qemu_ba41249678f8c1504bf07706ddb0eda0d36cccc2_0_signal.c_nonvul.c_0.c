long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    sigset_t VAR6;
    VAR5 = VAR2->VAR7[15];
    FUN2(VAR2, VAR5);
    if (!FUN3(VAR8, VAR4, VAR5, 1))
    {
        goto VAR9;
    }
    FUN4(&VAR6, &VAR4->VAR10.VAR11);
    FUN5(VAR12, &VAR6, NULL);
    FUN6(VAR2, &VAR4->VAR10.VAR13);
    if (FUN7(VAR5 + FUN8(struct VAR3, VAR10.VAR14), 0, FUN9(VAR2)) == -VAR15)
    {
        goto VAR9;
    }
    FUN10(VAR4, VAR5, 0);
    return -VAR16;
VAR9:
    FUN10(VAR4, VAR5, 0);
    FUN11(VAR17);
    return 0;
}