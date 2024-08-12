long FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[15];
    target_sigset_t VAR7;
    sigset_t VAR8;
    FUN2(VAR2, VAR5);
    if (!FUN3(VAR9, VAR4, VAR5, 1))
    {
        goto VAR10;
    }
    FUN4(VAR7.VAR11[0], &VAR4->VAR12.VAR13[0]);
    FUN5(&VAR8, &VAR7);
    FUN6(&VAR8);
    if (FUN7(VAR2, &VAR4->VAR14))
    {
        goto VAR10;
    }
    FUN8(VAR4, VAR5, 0);
    return -VAR15;
VAR10:
    FUN9(VAR16);
    return 0;
}