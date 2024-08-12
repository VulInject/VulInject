long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5 = VAR2->VAR6[31];
    if (VAR5 & 15)
    {
        goto VAR7;
    }
    if (!FUN2(VAR8, VAR4, VAR5, 1))
    {
        goto VAR7;
    }
    if (FUN3(VAR2, VAR4))
    {
        goto VAR7;
    }
    if (FUN4(VAR5 + FUN5(struct VAR3, VAR9.VAR10), 0, FUN6(VAR2)) == -VAR11)
    {
        goto VAR7;
    }
    FUN7(VAR4, VAR5, 0);
    return VAR2->VAR6[0];
VAR7:
    FUN7(VAR4, VAR5, 0);
    FUN8(VAR12);
    return 0;
}