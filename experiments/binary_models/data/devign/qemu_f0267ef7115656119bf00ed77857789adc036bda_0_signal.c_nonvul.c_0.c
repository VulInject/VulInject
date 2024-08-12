long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = NULL;
    abi_ulong VAR5 = VAR2->VAR6[31];
    FUN2(VAR2, VAR5);
    if (VAR5 & 15)
    {
        goto VAR7;
    }
    if (!FUN3(VAR8, VAR4, VAR5, 1))
    {
        goto VAR7;
    }
    if (FUN4(VAR2, VAR4))
    {
        goto VAR7;
    }
    if (FUN5(VAR5 + FUN6(struct VAR3, VAR9.VAR10), 0, FUN7(VAR2)) == -VAR11)
    {
        goto VAR7;
    }
    FUN8(VAR4, VAR5, 0);
    return -VAR12;
VAR7:
    FUN8(VAR4, VAR5, 0);
    FUN9(VAR13);
    return 0;
}