long FUN1(VAR1 *VAR2)
{
    abi_ulong VAR3 = VAR2->VAR4[VAR5];
    struct VAR6 *VAR7;
    sigset_t VAR8;
    if (!FUN2(VAR9, VAR7, VAR3, 1))
    {
        goto VAR10;
    }
    FUN3(&VAR8, &VAR7->VAR11.VAR12);
    FUN4(VAR13, &VAR8, NULL);
    if (FUN5(VAR2, &VAR7->VAR11.VAR14))
    {
        goto VAR10;
    }
    if (FUN6(VAR3 + FUN7(struct VAR6, VAR11.VAR15), 0, VAR2->VAR4[VAR16]) == -VAR17)
    {
        goto VAR10;
    }
    FUN8(VAR7, VAR3, 0);
    return VAR2->VAR4[VAR18];
VAR10:
    FUN8(VAR7, VAR3, 0);
    FUN9(VAR19);
}