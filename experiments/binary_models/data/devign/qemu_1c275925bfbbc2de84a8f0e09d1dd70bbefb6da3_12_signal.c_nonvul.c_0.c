long FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[15];
    FUN2("", VAR7, (unsigned long long)VAR5);
    sigset_t VAR8;
    if (!FUN3(VAR9, VAR4, VAR5, 1))
    {
        goto VAR10;
    }
    FUN4(&VAR8, &VAR4->VAR11.VAR12);
    FUN5(VAR13, &VAR8, NULL);
    if (FUN6(VAR2, &VAR4->VAR11.VAR14))
    {
        goto VAR10;
    }
    if (FUN7(VAR5 + FUN8(VAR3, VAR11.VAR15), 0, FUN9(VAR2)) == -VAR16)
    {
        goto VAR10;
    }
    FUN10(VAR4, VAR5, 0);
    return VAR2->VAR6[2];
VAR10:
    FUN10(VAR4, VAR5, 0);
    FUN11(VAR17);
    return 0;
}