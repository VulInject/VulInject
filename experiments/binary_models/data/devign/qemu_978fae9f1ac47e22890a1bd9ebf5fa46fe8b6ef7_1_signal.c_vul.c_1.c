static long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3;
    struct VAR4 *VAR5;
    if (VAR2->VAR6[13] & 7)
        goto VAR7;
    VAR3 = VAR2->VAR6[13];
    if (!FUN2(VAR8, VAR5, VAR3, 1))
        goto VAR7;
    if (FUN3(VAR2, VAR3, &VAR5->VAR9))
        goto VAR7;
    FUN4(VAR5, VAR3, 0);
    return VAR2->VAR6[0];
VAR7:
    FUN4(VAR5, VAR3, 0);
    FUN5(VAR10);
    return 0;
}