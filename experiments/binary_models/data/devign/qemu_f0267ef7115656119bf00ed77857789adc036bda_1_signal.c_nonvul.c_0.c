static long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5 = NULL;
    VAR3 = VAR2->VAR6[13];
    FUN2(VAR2, VAR3);
    if (VAR3 & 7)
    {
        goto VAR7;
    }
    if (!FUN3(VAR8, VAR5, VAR3, 1))
    {
        goto VAR7;
    }
    if (FUN4(VAR2, VAR3, &VAR5->VAR9))
    {
        goto VAR7;
    }
    FUN5(VAR5, VAR3, 0);
    return -VAR10;
VAR7:
    FUN5(VAR5, VAR3, 0);
    FUN6(VAR11);
    return 0;
}