long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    sigset_t VAR6;
    VAR3 = VAR2->VAR7[VAR8] - 4;
    FUN2(VAR2, VAR3);
    if (!FUN3(VAR9, VAR5, VAR3, 1))
        goto VAR10;
    FUN4(&VAR6, &VAR5->VAR11.VAR12);
    FUN5(&VAR6);
    if (FUN6(VAR2, &VAR5->VAR11.VAR13))
    {
        goto VAR10;
    }
    if (FUN7(VAR3 + FUN8(struct VAR4, VAR11.VAR14), 0, FUN9(VAR2)) == -VAR15)
    {
        goto VAR10;
    }
    FUN10(VAR5, VAR3, 0);
    return -VAR16;
VAR10:
    FUN10(VAR5, VAR3, 0);
    FUN11(VAR17);
    return 0;
}