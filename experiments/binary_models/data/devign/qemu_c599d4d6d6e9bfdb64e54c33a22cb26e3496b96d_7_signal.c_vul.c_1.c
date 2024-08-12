long FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[15];
    sigset_t VAR7;
    FUN2(VAR2, VAR5);
    if (!FUN3(VAR8, VAR4, VAR5, 1))
    {
        goto VAR9;
    }
    FUN4(&VAR7, &VAR4->VAR10.VAR11);
    FUN5(&VAR7);
    if (FUN6(VAR2, &VAR4->VAR10.VAR12))
    {
        goto VAR9;
    }
    if (FUN7(VAR5 + FUN8(VAR3, VAR10.VAR13), 0, FUN9(VAR2)) == -VAR14)
    {
        goto VAR9;
    }
    FUN10(VAR4, VAR5, 0);
    return -VAR15;
VAR9:
    FUN10(VAR4, VAR5, 0);
    FUN11(VAR16);
    return 0;
}