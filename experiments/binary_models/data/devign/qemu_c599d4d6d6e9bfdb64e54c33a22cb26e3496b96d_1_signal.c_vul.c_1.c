long FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    abi_ulong VAR5;
    sigset_t VAR6;
    VAR5 = VAR2->VAR7.VAR8[29];
    FUN2(VAR2, VAR5);
    if (!FUN3(VAR9, VAR4, VAR5, 1))
    {
        goto VAR10;
    }
    FUN4(&VAR6, &VAR4->VAR11.VAR12);
    FUN5(&VAR6);
    FUN6(VAR2, &VAR4->VAR11.VAR13);
    if (FUN7(VAR5 + FUN8(struct VAR3, VAR11.VAR14), 0, FUN9(VAR2)) == -VAR15)
        goto VAR10;
    VAR2->VAR7.VAR16 = VAR2->VAR17;
    FUN10(VAR2);
    VAR2->VAR17 = 0;
    return -VAR18;
VAR10:
    FUN11(VAR19);
    return 0;
}