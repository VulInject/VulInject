long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3 = VAR2->VAR4[VAR5];
    struct VAR6 *VAR7;
    sigset_t VAR8;
    FUN2(VAR2, VAR3);
    if (!FUN3(VAR9, VAR7, VAR3, 1))
    {
        goto VAR10;
    }
    FUN4(&VAR8, &VAR7->VAR11.VAR12);
    FUN5(VAR13, &VAR8, NULL);
    FUN6(VAR2, &VAR7->VAR11.VAR14);
    if (FUN7(VAR3 + FUN8(struct VAR6, VAR11.VAR15), 0, VAR2->VAR4[VAR5]) == -VAR16)
    {
        goto VAR10;
    }
    FUN9(VAR7, VAR3, 0);
    return VAR2->VAR4[VAR17];
VAR10:
    FUN9(VAR7, VAR3, 0);
    FUN10(VAR18);
}